// AWStitchPropPage.cpp : CAWStitchPropPage �Ӽ� ������ Ŭ������ �����Դϴ�.

#include "stdafx.h"
#include "AWStitch.h"
#include "AWStitchPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CAWStitchPropPage, COlePropertyPage)



// �޽��� ���Դϴ�.

BEGIN_MESSAGE_MAP(CAWStitchPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Ŭ���� ���͸��� GUID�� �ʱ�ȭ�մϴ�.

IMPLEMENT_OLECREATE_EX(CAWStitchPropPage, "AWSTITCH.AWStitchPropPage.1",
	0x72d70ce7, 0xaf7f, 0x4a84, 0x92, 0x31, 0xfa, 0x1c, 0x3e, 0xbe, 0x48, 0xd3)



// CAWStitchPropPage::CAWStitchPropPageFactory::UpdateRegistry -
// CAWStitchPropPage���� �ý��� ������Ʈ�� �׸��� �߰��ϰų� �����մϴ�.

BOOL CAWStitchPropPage::CAWStitchPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_AWSTITCH_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CAWStitchPropPage::CAWStitchPropPage - �������Դϴ�.

CAWStitchPropPage::CAWStitchPropPage() :
	COlePropertyPage(IDD, IDS_AWSTITCH_PPG_CAPTION)
{
}



// CAWStitchPropPage::DoDataExchange - �������� �Ӽ� ���̿��� �����͸� �̵���ŵ�ϴ�.

void CAWStitchPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CAWStitchPropPage �޽��� ó�����Դϴ�.
