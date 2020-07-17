#pragma once

// AWStitchCtrl.h : CAWStitchCtrl ActiveX ��Ʈ�� Ŭ������ �����Դϴ�.


// CAWStitchCtrl : ������ ������ AWStitchCtrl.cpp��(��) �����Ͻʽÿ�.
#include <gdiplus.h>
using namespace Gdiplus;
class CAWStitchCtrl : public CActiveXOleControl
{
	DECLARE_DYNCREATE(CAWStitchCtrl)

// �������Դϴ�.
public:
	CAWStitchCtrl();

// ������
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();
    virtual BOOL InitInstance();

// ����
protected:
	~CAWStitchCtrl();

	DECLARE_OLECREATE_EX(CAWStitchCtrl)    // Ŭ���� ���͸��� GUID�Դϴ�.
	DECLARE_OLETYPELIB(CAWStitchCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CAWStitchCtrl)     // �Ӽ� ������ ID�Դϴ�.
	DECLARE_OLECTLTYPE(CAWStitchCtrl)		// ���� �̸��� ��Ÿ �����Դϴ�.

// �޽��� ���Դϴ�.
	DECLARE_MESSAGE_MAP()

	// Dispatch maps
	//{{AFX_DISPATCH(CAWStitchCtrl)
	CString m_sUserID;
	afx_msg void OnSUserIDChanged();
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();
// �̺�Ʈ ���Դϴ�.
	DECLARE_EVENT_MAP()

// ����ġ�� �̺�Ʈ ID�Դϴ�.
public:
	enum {
		dispidSUserID = 1L,
	};

public:
	GdiplusStartupInput     g_gdiplusStartupInput;
	ULONG_PTR               g_gdiplusToken;
	GdiplusStartupOutput    g_gdiplusStartupOutput;
};

