#pragma once

// AWStitch.h : AWStitch.DLL�� �⺻ ��� �����Դϴ�.

#if !defined( __AFXCTL_H__ )
#error include 'afxctl.h' before including this file
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CAWStitchApp : ������ ������ AWStitch.cpp�� �����Ͻʽÿ�.

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

