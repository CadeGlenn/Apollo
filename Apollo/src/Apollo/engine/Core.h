#pragma once

#ifdef AP_PLATFORM_WINDOWS
	#ifdef AP_BUILD_DLL
		#define APOLLO_API __declspec(dllexport)
	#else
		#define APOLLO_API __declspec(dllimport)
	#endif
#else
	#error Apollo Only supports windows currently!
#endif