#pragma once

// AWStitch.h : AWStitch.DLL의 기본 헤더 파일입니다.

#if !defined( __AFXCTL_H__ )
#error include 'afxctl.h' before including this file
#endif

#include "resource.h"       // 주 기호입니다.


// CAWStitchApp : 구현을 보려면 AWStitch.cpp를 참조하십시오.

//#include <gdiplus.h>
//using namespace Gdiplus;

class CAWStitchApp : public COleControlModule
{
public:
	
	//GdiplusStartupInput     g_gdiplusStartupInput;
	//ULONG_PTR               g_gdiplusToken;
	//GdiplusStartupOutput    g_gdiplusStartupOutput;

	BOOL InitInstance();
	int ExitInstance();

	void CAwStitchApp();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

