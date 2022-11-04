#include <Windows.h>
#include <iostream>
#include <sstream>
#include <filesystem>

#include <SimpleIni.h>
#include <cheat-base/Logger.h>

#include "injector.h"
#include "util.h"

#include <WinReg.hpp>
#include <regex>

const std::string GlobalGenshinProcName = "GenshinImpact.exe";
const std::string ChinaGenshinProcName = "YuanShen.exe";
std::string ae_Name;
std::string ae_Region;
std::string DllPath;
bool ADll;
bool IgnoreInstance = false;

static CSimpleIni ini;

bool OpenGenshinProcess(HANDLE* phProcess, HANDLE* phThread);

int main(int argc, char* argv[])
{
	Logger::SetLevel(Logger::Level::Debug, Logger::LoggerType::ConsoleLogger);

	auto path = std::filesystem::path(argv[0]).parent_path();
	current_path(path);

	for (int count{ 0 }; count < argc; ++count)
	{
		if (std::string_view(argv[count]) == "-account")
			ae_Name = argv[++count];
		if (std::string_view(argv[count]) == "-region")
			ae_Region = argv[++count];
		if (std::string_view(argv[count]) == "-i")
			IgnoreInstance = true;
	}

	if (!IgnoreInstance)
	{
		WaitForCloseProcess(GlobalGenshinProcName);
		WaitForCloseProcess(ChinaGenshinProcName);
	}

	Sleep(1000); // Wait for unloading all dlls.

	ini.SetUnicode();
	ini.LoadFile("cfg.ini");

	HANDLE hProcess, hThread;
	if (!OpenGenshinProcess(&hProcess, &hThread))
	{
		std::cout << "Failed to open GenshinImpact process." << std::endl;
		system("pause");
		return 1;
	}

	current_path(path);
	ini.SaveFile("cfg.ini");
	ini.Reset();

	if (!ae_Name.empty())
	{
		ini.SetUnicode();
		ini.LoadFile("accounts.ini");
		if (ini.KeyExists("Accounts", ae_Name.c_str()))
		{
			std::string DcString = ini.GetValue("Accounts", ae_Name.c_str());
			winreg::RegKey{ HKEY_CURRENT_USER, L"Software\\miHoYo\\Genshin Impact" }.SetBinaryValue(L"MIHOYOSDK_ADL_PROD_OVERSEA_h1158948810", std::vector<BYTE>(DcString.begin(), DcString.end()));
			LOG_DEBUG(std::string("Switched account to " + ae_Name).c_str());
		}
		else if (!ini.KeyExists("Accounts", ae_Name.c_str()))
		{
			LOG_ERROR(std::string(ae_Name + " does not exist").c_str());
			Sleep(5000);
		}
		ini.Reset();
	}
	if (!ae_Region.empty())
	{
		std::string regionstring;
		if (ae_Region == "usa")
			regionstring = "os_usa";
		else if (ae_Region == "eu")
			regionstring = "os_euro";
		else if (ae_Region == "asia")
			regionstring = "os_asia";
		else if (ae_Region == "thm")
			regionstring = "os_cht";
		if (!regionstring.empty())
		{
			std::vector<BYTE> RegisteryValue = winreg::RegKey{ HKEY_CURRENT_USER, L"Software\\miHoYo\\Genshin Impact" }.GetBinaryValue(L"GENERAL_DATA_h2389025596");
			std::string RegisteryValueString(RegisteryValue.begin(), RegisteryValue.end());
			RegisteryValueString = std::regex_replace(RegisteryValueString, std::regex("os_(asia|euro|usa|cht)"), regionstring);
			winreg::RegKey{ HKEY_CURRENT_USER, L"Software\\miHoYo\\Genshin Impact" }.SetBinaryValue(L"GENERAL_DATA_h2389025596", std::vector<BYTE>(RegisteryValueString.begin(), RegisteryValueString.end()));
			LOG_DEBUG(std::string("Switched region to " + ae_Region).c_str());
		}
		else if (regionstring.empty())
			LOG_ERROR(std::string(ae_Region + " is not a valid region").c_str());
		Sleep(5000);
	}

	std::string filename = "CLibrary.dll";
	std::filesystem::path currentDllPath = std::filesystem::current_path() / filename;

#ifdef _DEBUG
	std::filesystem::path tempDllPath = std::filesystem::temp_directory_path() / filename;
	ini.LoadFile((std::filesystem::temp_directory_path().string() + "InjectorPath.ini").c_str());
	ini.SetValue("Location", "Injector", (std::filesystem::path(argv[0]).parent_path().string()).c_str());
	ini.SaveFile((std::filesystem::temp_directory_path().string() + "InjectorPath.ini").c_str());
	ini.Reset();
	std::error_code ec;
	std::filesystem::copy_file(currentDllPath, tempDllPath, std::filesystem::copy_options::update_existing, ec);
	if (ec)
	{
		LOG_ERROR("Copy dll failed: %s", ec.message().c_str());
		std::system("pause");
	}

	InjectDLL(hProcess, tempDllPath.string());
#else
	InjectDLL(hProcess, currentDllPath.string());
#endif

	if (ADll && !DllPath.empty())
		InjectDLL(hProcess, DllPath);
	Sleep(2000);
	ResumeThread(hThread);

	CloseHandle(hProcess);
}

bool OpenGenshinProcess(HANDLE* phProcess, HANDLE* phThread)
{
	HANDLE hToken;
	BOOL TokenRet = OpenProcessToken(GetCurrentProcess(), TOKEN_ALL_ACCESS, &hToken);
	if (!TokenRet)
	{
		LOG_LAST_ERROR("Privilege escalation failed!");
		return false;
	}

	auto filePath = util::GetOrSelectPath(ini, "Inject", "GenshinPath", "genshin path", "Executable\0GenshinImpact.exe;YuanShen.exe\0");
	auto commandline = ini.GetValue("Inject", "GenshinCommandLine");
	auto runAsIs = ini.GetBoolValue("System", "RunAsIs", false);
	if (ini.GetBoolValue("Inject", "ADll"))
		ADll = ini.GetBoolValue("Inject", "ADll");
	if (ini.GetValue("Inject", "DllPath"))
	{
		DllPath = ini.GetValue("Inject", "DllPath");
		std::replace(DllPath.begin(), DllPath.end(), '\\', '/');
	}

	if (!filePath)
		return false;

	std::string CurrentDirectory = filePath.value();
	size_t pos = CurrentDirectory.rfind("\\", CurrentDirectory.length());
	CurrentDirectory = CurrentDirectory.substr(0, pos);

	LPSTR lpstr = commandline == nullptr ? nullptr : const_cast<LPSTR>(commandline);

	BOOL result = false;
	PROCESS_INFORMATION pi{};
	STARTUPINFOEXA si{};
	si.StartupInfo.cb = sizeof(si);

	if (runAsIs)
	{
		result = CreateProcessAsUserA(hToken, const_cast<LPSTR>(filePath->data()), lpstr,
			0, 0, 0, EXTENDED_STARTUPINFO_PRESENT | CREATE_SUSPENDED, 0,
			(LPSTR)CurrentDirectory.data(), (LPSTARTUPINFOA)&si, &pi);
	}
	else
	{
		DWORD pid = FindProcessId("explorer.exe");
		if (pid == 0)
		{
			LOG_ERROR("Can't find 'explorer' pid!");
			return false;
		}

		HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);

		SIZE_T lpsize = 0;
		InitializeProcThreadAttributeList(NULL, 1, 0, &lpsize);

		char* temp = new char[lpsize];
		LPPROC_THREAD_ATTRIBUTE_LIST AttributeList = (LPPROC_THREAD_ATTRIBUTE_LIST)temp;
		InitializeProcThreadAttributeList(AttributeList, 1, 0, &lpsize);
		if (!UpdateProcThreadAttribute(AttributeList, 0, PROC_THREAD_ATTRIBUTE_PARENT_PROCESS,
			&handle, sizeof(HANDLE), NULL, NULL))
		{
			LOG_WARNING("UpdateProcThreadAttribute failed ! (%d).\n", GetLastError());
		}
		si.lpAttributeList = AttributeList;

		result = CreateProcessAsUserA(hToken, const_cast<LPSTR>(filePath->data()), lpstr,
			0, 0, 0, EXTENDED_STARTUPINFO_PRESENT | CREATE_SUSPENDED, 0,
			(LPSTR)CurrentDirectory.data(), (LPSTARTUPINFOA)&si, &pi);

		DeleteProcThreadAttributeList(AttributeList);
		delete[] temp;
	}

	bool isOpened = result;
	if (isOpened)
	{
		ini.SaveFile("cfg.ini");
		*phThread = pi.hThread;
		*phProcess = pi.hProcess;
	}
	else
	{
		LOG_LAST_ERROR("Failed to create game process.");
		LOG_ERROR("If you have problem with GenshinImpact.exe path. You can change it manually in cfg.ini.");
	}

	return isOpened;
}
