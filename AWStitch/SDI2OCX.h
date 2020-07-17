// SDI2OCX.h : header file
//

#ifndef __SDI2OCX_H__
#define __SDI2OCX_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// First Document Template

class CXAWStitchDoc : public CActiveXDocument<CAWStitchMFCDoc>
{
// Constructors
protected:
	CXAWStitchDoc();
	DECLARE_DYNCREATE(CXAWStitchDoc)
};

class CXAWStitchView : public CActiveXView<CAWStitchMFCView>
{
// Constructors
protected:
	CXAWStitchView();
	DECLARE_DYNCREATE(CXAWStitchView)
};

class CXMainFrame : public CActiveXFrameWnd<CMainFrame>
{
// Constructors
protected:
	CXMainFrame();
	DECLARE_DYNCREATE(CXMainFrame)
};

/////////////////////////////////////////////////////////////////////////////

#endif // __SDI2OCX_H__
