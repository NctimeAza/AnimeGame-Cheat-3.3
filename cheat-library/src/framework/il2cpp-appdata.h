// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// IL2CPP application data

#pragma once

#include <cstdint>

// Application-specific types
#include "il2cpp-types.h"

// IL2CPP APIs
#define DO_API(OS_OFFSET, CN_OFFSET, RETURN_T, NAME, PARAMS) extern RETURN_T (*NAME) PARAMS
#include "il2cpp-api-functions.h"
#undef DO_API

// Application-specific functions
#define DO_APP_FUNC(OS_OFFSET, CN_OFFSET, RETURN_T, NAME, PARAMS) extern RETURN_T (*NAME) PARAMS
#define DO_APP_FUNC_METHODINFO(OS_OFFSET, CN_OFFSET, NAME) extern struct MethodInfo ** NAME
namespace app 
{
	#include "il2cpp-functions.h"
	#include "il2cpp-unityplayer-functions.h"
}
#undef DO_APP_FUNC
#undef DO_APP_FUNC_METHODINFO

// TypeInfo pointers
#define DO_TYPEDEF(OS_OFFSET, CN_OFFSET, NAME) extern NAME ## __Class** NAME ## __TypeInfo
#define DO_SINGLETONEDEF(OS_OFFSET, CN_OFFSET, NAME) extern Singleton_1__Class** NAME ## __TypeInfo
namespace app 
{
	#include "il2cpp-types-ptr.h"
}
#undef DO_TYPEDEF
#undef DO_SINGLETONEDEF