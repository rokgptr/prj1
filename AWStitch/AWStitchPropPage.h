#pragma once

// AWStitchPropPage.h : CAWStitchPropPage 속성 페이지 클래스의 선언입니다.


// CAWStitchPropPage : 구현을 보려면 AWStitchPropPage.cpp을 참조하십시오.

class CAWStitchPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CAWStitchPropPage)
	DECLARE_OLECREATE_EX(CAWStitchPropPage)

// 생성자입니다.
public:
	CAWStitchPropPage();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_PROPPAGE_AWSTITCH };

// 구현
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 메시지 맵입니다.
protected:
	DECLARE_MESSAGE_MAP()
};

