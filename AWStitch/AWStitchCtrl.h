#pragma once

// AWStitchCtrl.h : CAWStitchCtrl ActiveX 컨트롤 클래스의 선언입니다.


// CAWStitchCtrl : 구현을 보려면 AWStitchCtrl.cpp을(를) 참조하십시오.
#include <gdiplus.h>
using namespace Gdiplus;
class CAWStitchCtrl : public CActiveXOleControl
{
	DECLARE_DYNCREATE(CAWStitchCtrl)

// 생성자입니다.
public:
	CAWStitchCtrl();

// 재정의
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();
    virtual BOOL InitInstance();

// 구현
protected:
	~CAWStitchCtrl();

	DECLARE_OLECREATE_EX(CAWStitchCtrl)    // 클래스 팩터리와 GUID입니다.
	DECLARE_OLETYPELIB(CAWStitchCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CAWStitchCtrl)     // 속성 페이지 ID입니다.
	DECLARE_OLECTLTYPE(CAWStitchCtrl)		// 형식 이름과 기타 상태입니다.

// 메시지 맵입니다.
	DECLARE_MESSAGE_MAP()

	// Dispatch maps
	//{{AFX_DISPATCH(CAWStitchCtrl)
	CString m_sUserID;
	afx_msg void OnSUserIDChanged();
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();
// 이벤트 맵입니다.
	DECLARE_EVENT_MAP()

// 디스패치와 이벤트 ID입니다.
public:
	enum {
		dispidSUserID = 1L,
	};

public:
	GdiplusStartupInput     g_gdiplusStartupInput;
	ULONG_PTR               g_gdiplusToken;
	GdiplusStartupOutput    g_gdiplusStartupOutput;
};

