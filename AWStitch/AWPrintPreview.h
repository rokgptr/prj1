#pragma once



// CAWPrintPreview ���Դϴ�.

class CAWPrintPreview : public CScrollView
{
	DECLARE_DYNCREATE(CAWPrintPreview)

protected:
	CAWPrintPreview();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~CAWPrintPreview();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	virtual void OnDraw(CDC* pDC);      // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual void OnInitialUpdate();     // ������ �� ó���Դϴ�.

	DECLARE_MESSAGE_MAP()
};


