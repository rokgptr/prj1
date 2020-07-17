// AWStitchCtrl.cpp : CAWStitchCtrl ActiveX ��Ʈ�� Ŭ������ �����Դϴ�.

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



// �޽��� ���Դϴ�.

BEGIN_MESSAGE_MAP(CAWStitchCtrl, CActiveXOleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// ����ġ ���Դϴ�.

BEGIN_DISPATCH_MAP(CAWStitchCtrl, CActiveXOleControl)
	DISP_PROPERTY_NOTIFY(CAWStitchCtrl, "sUserID", m_sUserID, OnSUserIDChanged, VT_BSTR)
	DISP_FUNCTION_ID(CAWStitchCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()



// �̺�Ʈ ���Դϴ�.

BEGIN_EVENT_MAP(CAWStitchCtrl, CActiveXOleControl)
END_EVENT_MAP()



// �Ӽ� �������Դϴ�.

// TODO: �ʿ信 ���� �Ӽ� �������� �߰��մϴ�. ī��Ʈ�� �̿� ���� �����ؾ� �մϴ�.
BEGIN_PROPPAGEIDS(CAWStitchCtrl, 1)
	PROPPAGEID(CAWStitchPropPage::guid)
END_PROPPAGEIDS(CAWStitchCtrl)



// Ŭ���� ���͸��� GUID�� �ʱ�ȭ�մϴ�.

IMPLEMENT_OLECREATE_EX(CAWStitchCtrl, "AWSTITCH.AWStitchCtrl.1",
	0x244e50db, 0xb294, 0x410f, 0xa4, 0x3c, 0x57, 0x2f, 0x70, 0x2b, 0x49, 0xca)



// ���� ���̺귯�� ID�� �����Դϴ�.

IMPLEMENT_OLETYPELIB(CAWStitchCtrl, _tlid, _wVerMajor, _wVerMinor)



// �������̽� ID�Դϴ�.

const IID BASED_CODE IID_DAWStitch =
		{ 0x367AED58, 0xE27E, 0x4577, { 0xBD, 0xF1, 0x39, 0x7A, 0xAE, 0xFC, 0x42, 0x58 } };
const IID BASED_CODE IID_DAWStitchEvents =
		{ 0x56FFF953, 0x61F1, 0x425B, { 0x81, 0x94, 0xD, 0x1F, 0x1E, 0xC, 0xDA, 0x7A } };



// ��Ʈ�� ���� �����Դϴ�.

static const DWORD BASED_CODE _dwAWStitchOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CAWStitchCtrl, IDS_AWSTITCH, _dwAWStitchOleMisc)

// CAWStitchCtrl::CAWStitchCtrlFactory::UpdateRegistry -
// CAWStitchCtrl���� �ý��� ������Ʈ�� �׸��� �߰��ϰų� �����մϴ�.

BOOL CAWStitchCtrl::CAWStitchCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: ��Ʈ���� ����Ʈ �� ������ ��Ģ�� �ؼ��ϴ���
	// Ȯ���մϴ�. �ڼ��� ������ MFC Technical Note 64��
	// �����Ͻʽÿ�. ��Ʈ���� ����Ʈ �� ��Ģ��
	// ���� �ʴ� ��� �������� ���� ��° �Ű� ������ �����մϴ�.
	// afxRegApartmentThreading�� 0���� �����մϴ�.

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



// CAWStitchCtrl::CAWStitchCtrl - �������Դϴ�.

CAWStitchCtrl::CAWStitchCtrl()
{
	InitializeIIDs(&IID_DAWStitch, &IID_DAWStitchEvents);
	// TODO: ���⿡�� ��Ʈ���� �ν��Ͻ� �����͸� �ʱ�ȭ�մϴ�.
	GdiplusStartup(&g_gdiplusToken, &g_gdiplusStartupInput, NULL);
}



// CAWStitchCtrl::~CAWStitchCtrl - �Ҹ����Դϴ�.

CAWStitchCtrl::~CAWStitchCtrl()
{
	// TODO: ���⿡�� ��Ʈ���� �ν��Ͻ� �����͸� �����մϴ�.
	GdiplusShutdown(g_gdiplusToken);
}



// CAWStitchCtrl::OnDraw - �׸��� �Լ��Դϴ�.

void CAWStitchCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: ���� �ڵ带 ����ڰ� ���� �ۼ��� �׸��� �ڵ�� �ٲٽʽÿ�.
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}



// CAWStitchCtrl::DoPropExchange - ���Ӽ� �����Դϴ�.

void CAWStitchCtrl::DoPropExchange(CPropExchange* pPX)
{

	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: �������� ����� ���� �Ӽ� ��ο� ���� PX_ functions�� ȣ���մϴ�.
	PX_String(pPX, _T("sUserID"), m_sUserID);
	Singleton *sing = (Singleton *)Singleton::getInstance();
	sing->g_userid = atoi((LPCSTR)m_sUserID);
}



// CAWStitchCtrl::OnResetState - ��Ʈ���� �⺻ ���·� �ٽ� �����մϴ�.

void CAWStitchCtrl::OnResetState()
{
	COleControl::OnResetState();  // DoPropExchange�� ��� �ִ� �⺻���� �ٽ� �����մϴ�.

	// TODO: ���⿡�� �ٸ� ��� ��Ʈ���� ���¸� �ٽ� �����մϴ�.
}



// CAWStitchCtrl::AboutBox - "����" ��ȭ ���ڸ� ����ڿ��� ���� �ݴϴ�.

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

 

// CAWStitchCtrl �޽��� ó�����Դϴ�.
void CAWStitchCtrl::OnSUserIDChanged() 
{
	// TODO: Add notification handler code

	SetModifiedFlag();
}


