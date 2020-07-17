// SDI2OCX.cpp : implementation of the textfile classes
//

#include "stdafx.h"
#include "SDI2OCX.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// First Document Template

IMPLEMENT_DYNCREATE(CXAWStitchDoc, CAWStitchMFCDoc)

CXAWStitchDoc::CXAWStitchDoc()
{
}

IMPLEMENT_DYNCREATE(CXAWStitchView, CAWStitchMFCView)

CXAWStitchView::CXAWStitchView()
{
}

IMPLEMENT_DYNCREATE(CXMainFrame, CMainFrame)

CXMainFrame::CXMainFrame()
{
}
