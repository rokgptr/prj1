#pragma once

// AWStitchPropPage.h : CAWStitchPropPage �Ӽ� ������ Ŭ������ �����Դϴ�.


// CAWStitchPropPage : ������ ������ AWStitchPropPage.cpp�� �����Ͻʽÿ�.

class CAWStitchPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CAWStitchPropPage)
	DECLARE_OLECREATE_EX(CAWStitchPropPage)

// �������Դϴ�.
public:
	CAWStitchPropPage();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_PROPPAGE_AWSTITCH };

// ����
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

// �޽��� ���Դϴ�.
protected:
	DECLARE_MESSAGE_MAP()
};

