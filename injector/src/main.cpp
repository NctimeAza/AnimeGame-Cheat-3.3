#include <Windows.h>
#include <iostream>
#include <sstream>
#include <filesystem>

#include <SimpleIni.h>
#include <cheat-base/Logger.h>

#include "injector.h"
#include "util.h"

#include <WinReg.hpp>
#include <encrypt.h>

const std::string GlobalGenshinProcName = "GenshinImpact.exe";
const std::string ChinaGenshinProcName = "YuanShen.exe";
std::string ae_Name;
std::string ae_EncKey;

static CSimpleIni ini;

bool OpenGenshinProcess(HANDLE* phProcess, HANDLE* phThread);

int main(int argc, char* argv[])
{
	Logger::SetLevel(Logger::Level::Debug, Logger::LoggerType::ConsoleLogger);

	auto path = std::filesystem::path(argv[0]).parent_path();
	current_path(path);

	WaitForCloseProcess(GlobalGenshinProcName);
	WaitForCloseProcess(ChinaGenshinProcName);

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

	for (int count{ 0 }; count < argc; ++count)
	{
		if (std::string_view(argv[count]) == "-account")
		{
			ae_Name = argv[++count];
		}
		if (std::string_view(argv[count]) == "-key")
		{
			ae_EncKey = argv[++count];
		}
	}
	if (!ae_Name.empty() && !ae_EncKey.empty())
	{
		ini.SetUnicode();
		ini.LoadFile("accounts.ini");
		if (ini.KeyExists("Accounts", ae_Name.c_str()))
		{
			std::string EncryptedString = ini.GetValue("Accounts", ae_Name.c_str());
			std::string DcString = decrypt(EncryptedString, ae_EncKey);
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
	
	std::string filename = (argc == 2 ? argv[1] : "CLibrary.dll");
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

	LPSTR lpstr = commandline == nullptr ? nullptr : const_cast<LPSTR>(commandline);
	if (!filePath)
		return false;

	DWORD pid = FindProcessId("explorer.exe");
	if (pid == 0)
	{
		LOG_ERROR("Can't find 'explorer' pid!");
		return false;
	}

	std::string CurrentDirectory = filePath.value();
	int pos = CurrentDirectory.rfind("\\", CurrentDirectory.length());
	CurrentDirectory = CurrentDirectory.substr(0, pos);

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
	
	STARTUPINFOEXA si{};
	si.StartupInfo.cb = sizeof(si);
	si.lpAttributeList = AttributeList;
	
	PROCESS_INFORMATION pi{};
	BOOL result = CreateProcessAsUserA(hToken, const_cast<LPSTR>(filePath->data()), lpstr,
		0, 0, 0, EXTENDED_STARTUPINFO_PRESENT | CREATE_SUSPENDED, 0,
		(LPSTR)CurrentDirectory.data(), (LPSTARTUPINFOA)&si, &pi);

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

	DeleteProcThreadAttributeList(AttributeList);
	delete[] temp;
	return isOpened;
}
