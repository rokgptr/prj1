// AWPrintPreview.cpp : 구현 파일입니다.
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


// CAWPrintPreview 그리기입니다.

void CAWPrintPreview::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO: 이 뷰의 전체 크기를 계산합니다.
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

void CAWPrintPreview::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: 여기에 그리기 코드를 추가합니다.
}


// CAWPrintPreview 진단입니다.

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


// CAWPrintPreview 메시지 처리기입니다.
