#ifndef __COMPLIE_CONFIGURE_H__
#define __COMPLIE_CONFIGURE_H__

	#ifdef DLL_EXPORTS
	#define MYBASIC_API __declspec(dllexport)
	#else
	#define MYBASIC_API __declspec(dllimport)
	#endif 

	#if defined(_STDCALL_SUPPORTED)
	#define MYBASICCALLCONV __stdcall
	#else
	#define MYBASICCALLCONV __cdecl
	#endif 

#endif