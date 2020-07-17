// AWStitchPropPage.cpp : CAWStitchPropPage 속성 페이지 클래스의 구현입니다.

#include "stdafx.h"
#include "AWStitch.h"
#include "AWStitchPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CAWStitchPropPage, COlePropertyPage)



// 메시지 맵입니다.

BEGIN_MESSAGE_MAP(CAWStitchPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// 클래스 팩터리와 GUID를 초기화합니다.

IMPLEMENT_OLECREATE_EX(CAWStitchPropPage, "AWSTITCH.AWStitchPropPage.1",
	0x72d70ce7, 0xaf7f, 0x4a84, 0x92, 0x31, 0xfa, 0x1c, 0x3e, 0xbe, 0x48, 0xd3)



// CAWStitchPropPage::CAWStitchPropPageFactory::UpdateRegistry -
// CAWStitchPropPage에서 시스템 레지스트리 항목을 추가하거나 제거합니다.

BOOL CAWStitchPropPage::CAWStitchPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_AWSTITCH_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CAWStitchPropPage::CAWStitchPropPage - 생성자입니다.

CAWStitchPropPage::CAWStitchPropPage() :
	COlePropertyPage(IDD, IDS_AWSTITCH_PPG_CAPTION)
{
}



// CAWStitchPropPage::DoDataExchange - 페이지와 속성 사이에서 데이터를 이동시킵니다.

void CAWStitchPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CAWStitchPropPage 메시지 처리기입니다.
