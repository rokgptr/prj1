// AWPrintPreview.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "AWStitch.h"
#include "AWPrintPreview.h"


// CAWPrintPreview

IMPLEMENT_DYNCREATE(CAWPrintPreview, CScrollView)

CAWPrintPreview::CAWPrintPreview()
{
}

CAWPrintPreview::~CAWPrintPreview()
{
}


BEGIN_MESSAGE_MAP(CAWPrintPreview, CScrollView)
END_MESSAGE_MAP()


// CAWPrintPreview �׸����Դϴ�.

void CAWPrintPreview::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO: �� ���� ��ü ũ�⸦ ����մϴ�.
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

void CAWPrintPreview::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: ���⿡ �׸��� �ڵ带 �߰��մϴ�.
}


// CAWPrintPreview �����Դϴ�.

#ifdef _DEBUG
void CAWPrintPreview::AssertValid() const
{
	CScrollView::AssertValid();
}

void CAWPrintPreview::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}
#endif //_DEBUG


// CAWPrintPreview �޽��� ó�����Դϴ�.
