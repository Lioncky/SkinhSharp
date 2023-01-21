// SkinSharpDemo.h : main header file for the SKINSHARPDEMO application
//

#if !defined(AFX_SKINSHARPDEMO_H__65E20E4A_F71A_49FA_9DE0_D03B5D064CFF__INCLUDED_)
#define AFX_SKINSHARPDEMO_H__65E20E4A_F71A_49FA_9DE0_D03B5D064CFF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CSkinSharpDemoApp:
// See SkinSharpDemo.cpp for the implementation of this class
//

class CSkinSharpDemoApp : public CWinApp
{
public:
	CSkinSharpDemoApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSkinSharpDemoApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CSkinSharpDemoApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SKINSHARPDEMO_H__65E20E4A_F71A_49FA_9DE0_D03B5D064CFF__INCLUDED_)
