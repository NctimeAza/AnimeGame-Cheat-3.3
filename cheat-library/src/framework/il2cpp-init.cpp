// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// IL2CPP application initializer

#include "pch-il2cpp.h"

#include "il2cpp-init.h"
#include "helpers.h"

#include <cheat/ILPatternScanner.h>

#include <windows.h>

// IL2CPP APIs
#define DO_API(OS_OFFSET, CN_OFFSET, RETURN_T, NAME, PARAMS) RETURN_T (*NAME) PARAMS
#include "il2cpp-api-functions.h"
#undef DO_API

// Application-specific functions
#define DO_APP_FUNC(OS_OFFSET, CN_OFFSET, RETURN_T, NAME, PARAMS) RETURN_T (*NAME) PARAMS
#define DO_APP_FUNC_METHODINFO(OS_OFFSET, CN_OFFSET, NAME) struct MethodInfo ** NAME
namespace app 
{
#include "il2cpp-functions.h"
#include "il2cpp-unityplayer-functions.h"
}
#undef DO_APP_FUNC
#undef DO_APP_FUNC_METHODINFO

// TypeInfo pointers
#define DO_TYPEDEF(OS_OFFSET, CN_OFFSET, NAME) NAME ## __Class** NAME ## __TypeInfo
#define DO_SINGLETONEDEF(OS_OFFSET, CN_OFFSET, NAME) Singleton_1__Class** NAME ## __TypeInfo
namespace app 
{
#include "il2cpp-types-ptr.h"
#include <resource.h>
}
#undef DO_TYPEDEF
#undef DO_SINGLETONEDEF

#define SELECT_VERSION(VERSION_VAR, OS_OFFSET, CN_OFFSET) (VERSION_VAR == LGameVersion::GLOBAL ? OS_OFFSET : CN_OFFSET)

LGameVersion _gameVersion;

void init_static_offsets(LGameVersion gameVersion)
{
	if (gameVersion == LGameVersion::NONE)
		return;

	// Get base address of IL2CPP module
	uintptr_t baseAddress = il2cppi_get_base_address();

	// Define IL2CPP API function addresses
	#define DO_API(OS_OFFSET, CN_OFFSET, RETURN_T, NAME, PARAMS) NAME = (RETURN_T (*) PARAMS)(baseAddress + SELECT_VERSION(gameVersion, OS_OFFSET, CN_OFFSET))
	#include "il2cpp-api-functions.h"
	#undef DO_API

	// Define function addresses
	#define DO_APP_FUNC(OS_OFFSET, CN_OFFSET, RETURN_T, NAME, PARAMS) NAME = (RETURN_T (*) PARAMS)(baseAddress + SELECT_VERSION(gameVersion, OS_OFFSET, CN_OFFSET))
	#define DO_APP_FUNC_METHODINFO(OS_OFFSET, CN_OFFSET, NAME) NAME = (struct MethodInfo **)(baseAddress + SELECT_VERSION(gameVersion, OS_OFFSET, CN_OFFSET))
	#include "il2cpp-functions.h"
	#undef DO_APP_FUNC
	#undef DO_APP_FUNC_METHODINFO

	// Define TypeInfo variables
	#define DO_SINGLETONEDEF(OS_OFFSET, CN_OFFSET, NAME) NAME ## __TypeInfo = (Singleton_1__Class**) (baseAddress + SELECT_VERSION(gameVersion, OS_OFFSET, CN_OFFSET))
	#define DO_TYPEDEF(OS_OFFSET, CN_OFFSET, NAME) NAME ## __TypeInfo = (NAME ## __Class**) (baseAddress + SELECT_VERSION(gameVersion, OS_OFFSET, CN_OFFSET))
	#include "il2cpp-types-ptr.h"
	#undef DO_TYPEDEF
	#undef DO_SINGLETONEDEF

	uintptr_t unityPlayerAddress = il2cppi_get_unity_address();
	// Define UnityPlayer functions
	#define DO_APP_FUNC(OS_OFFSET, CN_OFFSET, RETURN_T, NAME, PARAMS) NAME = (RETURN_T (*) PARAMS)(unityPlayerAddress + SELECT_VERSION(gameVersion, OS_OFFSET, CN_OFFSET))
	#define DO_APP_FUNC_METHODINFO(OS_OFFSET, CN_OFFSET, NAME) NAME = (struct MethodInfo **)(unityPlayerAddress + SELECT_VERSION(gameVersion, OS_OFFSET, CN_OFFSET))
	#include "il2cpp-unityplayer-functions.h"
	#undef DO_APP_FUNC
	#undef DO_APP_FUNC_METHODINFO
}

void init_scanned_offsets(LGameVersion gameVersion)
{
	if (gameVersion == LGameVersion::NONE)
		return;

	// Get base address of IL2CPP module
	uintptr_t baseAddress = il2cppi_get_base_address();

#define SELECT_OR(container, type, val, def) { auto value = val; if (value == 0) container = (type)(def); else container = (type)val; }

	static config::Field<nlohmann::json> offsetDataField = config::CreateField<nlohmann::json>("OffsetData", "OffsetData", "PatternScanner", true, nlohmann::json::object());

	std::string signatures = ResourceLoader::Load("Signatures", RT_RCDATA);

	auto scanner = ILPatternScanner();
	scanner.ParseSignatureFile(signatures);
	scanner.LoadJson(offsetDataField);

	using namespace app;

	// Define IL2CPP API function addresses
	#define DO_API(OS_OFFSET, CN_OFFSET, RETURN_T, NAME, PARAMS) NAME = (RETURN_T (*) PARAMS) scanner.SearchAPI(#NAME);
	#include "il2cpp-api-functions.h"
	#undef DO_API

	il2cpp_thread_attach(il2cpp_domain_get());

	// Define function addresses
	#define DO_APP_FUNC(OS_OFFSET, CN_OFFSET, RETURN_T, NAME, PARAMS) SELECT_OR(NAME, RETURN_T (*) PARAMS, scanner.Search("UserAssembly.dll", #NAME), baseAddress + SELECT_VERSION(gameVersion, OS_OFFSET, CN_OFFSET))
	#define DO_APP_FUNC_METHODINFO(OS_OFFSET, CN_OFFSET, NAME) SELECT_OR(NAME, struct MethodInfo **, scanner.SearchMethodInfo(#NAME), baseAddress + SELECT_VERSION(gameVersion, OS_OFFSET, CN_OFFSET))
	#include "il2cpp-functions.h"
	#undef DO_APP_FUNC
	#undef DO_APP_FUNC_METHODINFO

	// Define TypeInfo variables
	#define DO_SINGLETONEDEF(OS_OFFSET, CN_OFFSET, NAME) SELECT_OR(NAME ## __TypeInfo, Singleton_1__Class**, scanner.SearchTypeInfo(#NAME), baseAddress + SELECT_VERSION(gameVersion, OS_OFFSET, CN_OFFSET))
	#define DO_TYPEDEF(OS_OFFSET, CN_OFFSET, NAME) SELECT_OR(NAME ## __TypeInfo, NAME ## __Class**, scanner.SearchTypeInfo(#NAME), baseAddress + SELECT_VERSION(gameVersion, OS_OFFSET, CN_OFFSET))
	#include "il2cpp-types-ptr.h"
	#undef DO_TYPEDEF
	#undef DO_SINGLETONEDEF

	uintptr_t unityPlayerAddress = il2cppi_get_unity_address();
	// Define UnityPlayer functions
	#define DO_APP_FUNC(OS_OFFSET, CN_OFFSET, RETURN_T, NAME, PARAMS) SELECT_OR(NAME, RETURN_T (*) PARAMS, scanner.Search("UnityPlayer.dll", #NAME), unityPlayerAddress + SELECT_VERSION(gameVersion, OS_OFFSET, CN_OFFSET))
	#include "il2cpp-unityplayer-functions.h"
	#undef DO_APP_FUNC

	if (scanner.IsUpdated())
	{
		scanner.SaveJson(offsetDataField);
		offsetDataField.FireChanged();

		LOG_INFO("Seems like some offsets was found for a first time. Recommend to restart game for correct cheat and game work.");
	}

#undef SELECT_OR
}

LGameVersion GetGameVersion()
{
#ifdef LINUX
	std::vector<char> path;
	DWORD pathLen = 0;
	do {
		path.resize(path.size() + MAX_PATH);
		pathLen = GetModuleFileNameA(GetModuleHandleA(NULL), path.data(), (DWORD)path.size());
	} while (pathLen >= path.size());

	std::string base_name = std::filesystem::path(path.data()).filename().string();

	if (base_name == "GenshinImpact.exe") {
		return LGameVersion::GLOBAL;
	} else if (base_name == "YuanShen.exe") {
		return LGameVersion::CHINA;
	}
#else
	std::array<std::pair<std::string, LGameVersion>, 2> gameVersions = {{
			{ "china", LGameVersion::CHINA },
			{ "global", LGameVersion::GLOBAL }
		}};

	std::string targetChecksumsRaw = ResourceLoader::Load("AssemblyChecksums", RT_RCDATA);
	nlohmann::json targetChecksums = nlohmann::json::parse(targetChecksumsRaw, nullptr, false);
	if (targetChecksums.is_discarded())
	{
		LOG_ERROR("Failed to parse assembly checksum data.");
		return LGameVersion::NONE;
	}

	static config::Field<nlohmann::json> checksumTimestamps =
		config::CreateField<nlohmann::json>("m_CheckSumTimestamp", "PatternScanner", true, nlohmann::json::object());

	PatternScanner scanner;
	for (const auto& [lVersionName, lVersion] : gameVersions)
	{
		if (!targetChecksums.contains(lVersionName))
		{
			LOG_ERROR("Assembly checksum info is corrupted. Not found the key: %s.", lVersionName);
			continue;
		}
		
		nlohmann::json lVersionChecksum = targetChecksums.at(lVersionName);
		std::string version = lVersionChecksum.at("game_version");

		bool isValid = true;
		for (auto& [moduleName, checksumData] : lVersionChecksum.at("modules").items())
		{
			//if (checksumTimestamps.value().contains(moduleName))
			//	checksumData["timestamp"] = checksumTimestamps.value()[moduleName];

			if (!scanner.IsValidModuleHash(moduleName, checksumData))
			{
				LOG_INFO("Failed to detect version: %s.", version.c_str());
				isValid = false;
				break;
			}

			checksumTimestamps.value()[moduleName] = scanner.GetModuleTimestamp(moduleName);
		}

		if (!isValid)
			continue;
		
		checksumTimestamps.FireChanged();

		LOG_INFO("Detected version: %s.", version.c_str());
		return lVersion;
	}
#endif

	return LGameVersion::NONE;
}

LGameVersion UserSelectGameVersion()
{
	std::string targetChecksumsRaw = ResourceLoader::Load("AssemblyChecksums", RT_RCDATA);
	nlohmann::json targetChecksums = nlohmann::json::parse(targetChecksumsRaw, nullptr, false);
	if (targetChecksums.is_discarded())
	{
		LOG_ERROR("Failed to parse assembly checksum data.");
		return LGameVersion::NONE;
	}

	il2cppi_new_console();

	LOG_INFO("Select the version (enter number), from list below:");

	for (auto& [value, name] : magic_enum::enum_entries<LGameVersion>())
	{
		LOG_INFO("[%d] %s", value, name.data());
	}

	int selected;
	std::cin >> selected;

	// User can specify any value, but it's okay.
	return static_cast<LGameVersion>(selected);
}

// IL2CPP application initializer
void init_il2cpp()
{
	_gameVersion = GetGameVersion();
	if (_gameVersion == LGameVersion::NONE)
	{
		LOG_ERROR("Failed to detect any game version. If you sure that cheat has updated for current game version, and you downloaded the correct one.");
		//system("timeout 10");

		_gameVersion = UserSelectGameVersion();
		if (_gameVersion == LGameVersion::NONE)
			return;
	}

#ifdef _PATTERN_SCANNER
	init_scanned_offsets(gameVersion);
#else
	init_static_offsets(_gameVersion);
#endif
}