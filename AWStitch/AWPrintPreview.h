#pragma once



// CAWPrintPreview 뷰입니다.

class CAWPrintPreview : public CScrollView
{
	DECLARE_DYNCREATE(CAWPrintPreview)

protected:
	CAWPrintPreview();           // 동적 만들기에 사용되는 protected 생성자입니다.
	virtual ~CAWPrintPreview();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	virtual void OnDraw(CDC* pDC);      // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual void OnInitialUpdate();     // 생성된 후 처음입니다.

	DECLARE_MESSAGE_MAP()
};


