// AWStitchCtrl.cpp : CAWStitchCtrl ActiveX 컨트롤 클래스의 구현입니다.

#include "stdafx.h"
#include "AWStitch.h"
#include "AWStitchCtrl.h"
#include "AWStitchPropPage.h"

#include "SDI2OCX.h"
#include "../AWStitchMFC/Singleton.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CAWStitchCtrl, CActiveXOleControl)



// 메시지 맵입니다.

BEGIN_MESSAGE_MAP(CAWStitchCtrl, CActiveXOleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// 디스패치 맵입니다.

BEGIN_DISPATCH_MAP(CAWStitchCtrl, CActiveXOleControl)
	DISP_PROPERTY_NOTIFY(CAWStitchCtrl, "sUserID", m_sUserID, OnSUserIDChanged, VT_BSTR)
	DISP_FUNCTION_ID(CAWStitchCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()



// 이벤트 맵입니다.

BEGIN_EVENT_MAP(CAWStitchCtrl, CActiveXOleControl)
END_EVENT_MAP()



// 속성 페이지입니다.

// TODO: 필요에 따라 속성 페이지를 추가합니다. 카운트도 이에 따라 증가해야 합니다.
BEGIN_PROPPAGEIDS(CAWStitchCtrl, 1)
	PROPPAGEID(CAWStitchPropPage::guid)
END_PROPPAGEIDS(CAWStitchCtrl)



// 클래스 팩터리와 GUID를 초기화합니다.

IMPLEMENT_OLECREATE_EX(CAWStitchCtrl, "AWSTITCH.AWStitchCtrl.1",
	0x244e50db, 0xb294, 0x410f, 0xa4, 0x3c, 0x57, 0x2f, 0x70, 0x2b, 0x49, 0xca)



// 형식 라이브러리 ID와 버전입니다.

IMPLEMENT_OLETYPELIB(CAWStitchCtrl, _tlid, _wVerMajor, _wVerMinor)



// 인터페이스 ID입니다.

const IID BASED_CODE IID_DAWStitch =
		{ 0x367AED58, 0xE27E, 0x4577, { 0xBD, 0xF1, 0x39, 0x7A, 0xAE, 0xFC, 0x42, 0x58 } };
const IID BASED_CODE IID_DAWStitchEvents =
		{ 0x56FFF953, 0x61F1, 0x425B, { 0x81, 0x94, 0xD, 0x1F, 0x1E, 0xC, 0xDA, 0x7A } };



// 컨트롤 형식 정보입니다.

static const DWORD BASED_CODE _dwAWStitchOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CAWStitchCtrl, IDS_AWSTITCH, _dwAWStitchOleMisc)

// CAWStitchCtrl::CAWStitchCtrlFactory::UpdateRegistry -
// CAWStitchCtrl에서 시스템 레지스트리 항목을 추가하거나 제거합니다.

BOOL CAWStitchCtrl::CAWStitchCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: 컨트롤이 아파트 모델 스레딩 규칙을 준수하는지
	// 확인합니다. 자세한 내용은 MFC Technical Note 64를
	// 참조하십시오. 컨트롤이 아파트 모델 규칙에
	// 맞지 않는 경우 다음에서 여섯 번째 매개 변수를 변경합니다.
	// afxRegApartmentThreading을 0으로 설정합니다.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_AWSTITCH,
			IDB_AWSTITCH,
			afxRegApartmentThreading,
			_dwAWStitchOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CAWStitchCtrl::CAWStitchCtrl - 생성자입니다.

CAWStitchCtrl::CAWStitchCtrl()
{
	InitializeIIDs(&IID_DAWStitch, &IID_DAWStitchEvents);
	// TODO: 여기에서 컨트롤의 인스턴스 데이터를 초기화합니다.
	GdiplusStartup(&g_gdiplusToken, &g_gdiplusStartupInput, NULL);
}



// CAWStitchCtrl::~CAWStitchCtrl - 소멸자입니다.

CAWStitchCtrl::~CAWStitchCtrl()
{
	// TODO: 여기에서 컨트롤의 인스턴스 데이터를 정리합니다.
	GdiplusShutdown(g_gdiplusToken);
}



// CAWStitchCtrl::OnDraw - 그리기 함수입니다.

void CAWStitchCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: 다음 코드를 사용자가 직접 작성한 그리기 코드로 바꾸십시오.
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}



// CAWStitchCtrl::DoPropExchange - 지속성 지원입니다.

void CAWStitchCtrl::DoPropExchange(CPropExchange* pPX)
{

	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 지속적인 사용자 지정 속성 모두에 대해 PX_ functions를 호출합니다.
	PX_String(pPX, _T("sUserID"), m_sUserID);
	Singleton *sing = (Singleton *)Singleton::getInstance();
	sing->g_userid = atoi((LPCSTR)m_sUserID);
}



// CAWStitchCtrl::OnResetState - 컨트롤을 기본 상태로 다시 설정합니다.

void CAWStitchCtrl::OnResetState()
{
	COleControl::OnResetState();  // DoPropExchange에 들어 있는 기본값을 다시 설정합니다.

	// TODO: 여기에서 다른 모든 컨트롤의 상태를 다시 설정합니다.
}



// CAWStitchCtrl::AboutBox - "정보" 대화 상자를 사용자에게 보여 줍니다.

void CAWStitchCtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_AWSTITCH);
	dlgAbout.DoModal();
}

#include "../AWStitchMFC/Singleton.h"
BOOL CAWStitchCtrl::InitInstance()

{
	CActiveXSingleDocTemplate* pDocTemplate;
	pDocTemplate = new CActiveXSingleDocTemplate(
		IDR_MAINFRAME,
		RUNTIME_CLASS(CXAWStitchDoc),
		RUNTIME_CLASS(CXMainFrame),       // main SDI frame window
		RUNTIME_CLASS(CXAWStitchView));
	AddDocTemplate(pDocTemplate);

	// Parse command line for standard shell commands, DDE, file open
	CCommandLineInfo cmdInfo;
	ParseCommandLine(cmdInfo);

	// Dispatch commands specified on the command line
	if (!ProcessShellCommand(cmdInfo))
		return FALSE;

	// The one and only window has been initialized, so show and update it.
	m_pMainWnd->ShowWindow(SW_SHOW);
	m_pMainWnd->UpdateWindow();
	
	
	return TRUE;
}

 

// CAWStitchCtrl 메시지 처리기입니다.
void CAWStitchCtrl::OnSUserIDChanged() 
{
	// TODO: Add notification handler code

	SetModifiedFlag();
}


