// AWStitch.cpp : CAWStitchApp 및 DLL 등록의 구현입니다.

#include "stdafx.h"
#include "AWStitch.h"
#include "CatHelp.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CAWStitchApp NEAR theApp;

const GUID CDECL BASED_CODE _tlid =
		{ 0x613CF9C0, 0x5A9E, 0x4CA2, { 0x94, 0x66, 0xE8, 0x69, 0x6A, 0x5B, 0xF1, 0xBE } };

//안전성 보장을 위한 Class ID - 이미 정의 되어 있음
/*
const CATID CATID_SafeForScripting =
                {0x7dd95801,0x9882,0x11cf,{0x9f,0xa9,0x00,0xaa,0x00,0x6c,0x42,0xc4}};
const CATID CATID_SafeForInitializing =
                {0x7dd95802,0x9882,0x11cf,{0x9f,0xa9,0x00,0xaa,0x00,0x6c,0x42,0xc4}}; 

*/
/*
IMPLEMENT_OLECREATE_EX(CAWStitchCtrl, "AWSTITCH.AWStitchCtrl.1",
	0x244e50db, 0xb294, 0x410f, 0xa4, 0x3c, 0x57, 0x2f, 0x70, 0x2b, 0x49, 0xca)
*/

const GUID CDECL BASED_CODE _ctlid =
        {0x244e50db, 0xb294, 0x410f, 0xa4, 0x3c, 0x57, 0x2f, 0x70, 0x2b, 0x49, 0xca};

const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;

// CAWStitchApp::InitInstance - DLL 초기화입니다.

BOOL CAWStitchApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: 여기에 직접 작성한 모듈 초기화 코드를 추가합니다.
		//GdiplusStartup(&g_gdiplusToken, &g_gdiplusStartupInput, NULL);
	}
	return bInit;
}



// CAWStitchApp::ExitInstance - DLL 종료입니다.

int CAWStitchApp::ExitInstance()
{
	// TODO: 여기에 직접 작성한 모듈 종료 코드를 추가합니다.
	//GdiplusShutdown(g_gdiplusToken);

	return COleControlModule::ExitInstance();
}

void CAWStitchApp::CAwStitchApp()
{

}


// DllRegisterServer - 시스템 레지스트리에 항목을 추가합니다.

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	if (FAILED( CreateComponentCategory(CATID_SafeForScripting, L"Controls that are safely scriptable") ))
			return ResultFromScode(SELFREG_E_CLASS);

	if (FAILED( CreateComponentCategory(CATID_SafeForInitializing, L"Controls safely initializable from persistent data") ))
			return ResultFromScode(SELFREG_E_CLASS);

	if (FAILED( RegisterCLSIDInCategory(_ctlid, CATID_SafeForScripting) ))
			return ResultFromScode(SELFREG_E_CLASS);

	if (FAILED( RegisterCLSIDInCategory(_ctlid, CATID_SafeForInitializing) ))
			return ResultFromScode(SELFREG_E_CLASS);


	return NOERROR;
}



// DllUnregisterServer - 시스템 레지스트리에서 항목을 제거합니다.

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
