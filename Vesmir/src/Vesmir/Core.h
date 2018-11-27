#pragma once

#ifdef VZ_PLATFORM_WINDOWS
	#ifdef VZ_BUILD_DLL
		#define VESMIR_API __declspec(dllexport)
	#else 
		#define VESMIR_API __declspec(dllexport)
	#endif
#else
	#error Vesmir only supports Windows!
#endif