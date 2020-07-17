// stdafx.h : ���� ��������� ���� ��������� �ʴ�
// ǥ�� �ý��� ���� ���� �� ������Ʈ ���� ���� ������ 
// ��� �ִ� ���� �����Դϴ�.

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN		// ���� ������ �ʴ� ������ Windows ������� �����մϴ�.
#endif

// �Ʒ� ������ �÷����� �켱�ϴ� �÷����� ������� �ؾ� �Ѵٸ� ���� ���Ǹ� �����Ͻʽÿ�.
// �ٸ� �÷����� ���Ǵ� �ش� ���� �ֽ� ������ MSDN�� �����Ͻʽÿ�.
#ifndef WINVER				// Windows 95 �� Windows NT 4 �̻󿡼��� ����� ����� �� �ֽ��ϴ�.
#define WINVER 0x0400		// �� ���� Windows 98 �� Windows 2000 �̻��� ������� �ϴ� �� ������ ������ �����Ͻʽÿ�.
#endif

#ifndef _WIN32_WINNT		// Windows NT 4 �̻󿡼��� ����� ����� �� �ֽ��ϴ�.
#define _WIN32_WINNT 0x0400	// �� ���� Windows 2000 �̻��� ������� �ϴ� �� ������ ������ �����Ͻʽÿ�.
#endif						

#ifndef _WIN32_WINDOWS		// Windows 98 �̻󿡼��� ����� ����� �� �ֽ��ϴ�.
#define _WIN32_WINDOWS 0x0410 // �� ���� Windows Me �̻��� ������� �ϴ� �� ������ ������ �����Ͻʽÿ�.
#endif

#ifndef _WIN32_IE			// IE 4.0 �̻󿡼��� ����� ����� �� �ֽ��ϴ�.
#define _WIN32_IE 0x0400	// �� ���� IE 5.0 �̻��� ������� �ϴ� �� ������ ������ �����Ͻʽÿ�.
#endif

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// �Ϻ� CString �����ڴ� ��������� ����˴ϴ�.

#include <afxctl.h>         // ActiveX ��Ʈ�ѿ� ���� MFC �����Դϴ�.
#include <afxext.h>         // MFC Ȯ���Դϴ�.
#include <afxdtctl.h>		// Internet Explorer 4�� ���� ��Ʈ�ѿ� ���� MFC �����Դϴ�.
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// Windows ���� ��Ʈ�ѿ� ���� MFC �����Դϴ�.
#endif // _AFX_NO_AFXCMN_SUPPORT

// MFC �����ͺ��̽� Ŭ������ ������� ��������
// �Ʒ��� �� ���� ������ �����Ͻʽÿ�.
#include <afxdb.h>			// MFC �����ͺ��̽� Ŭ�����Դϴ�.
#include <afxdao.h>			// MFC DAO �����ͺ��̽� Ŭ�����Դϴ�.

#include <urlmon.h>

#include <Prof-UIS.h>

//SDI�� ���� �߰� ����
#include "../SupportDocView/ActiveXDocument.h"
#include "../SupportDocView/ActiveXView.h"
#include "../SupportDocView/ActiveXFrameWnd.h"
#include "../SupportDocView/ActiveXOleControl.h"

#include "../AWStitchMFC/Resource.h"
#include "../AWStitchMFC/AWStitchMFCDoc.h"
#include "../AWStitchMFC/MainFrm.h"
#include "../AWStitchMFC/AWStitchMFCView.h"
#include <afxwin.h>

#include "../AWStitchMFC/LyoulHttpClient.h"
#include "../AWStitchMFC/LyoulErrMgmtFunc.h"

#define IDR_VIEW_STITCH 40000