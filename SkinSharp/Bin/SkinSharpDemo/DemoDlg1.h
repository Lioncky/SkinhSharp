#if !defined(AFX_DEMODLG1_H__3CF9C4B2_CB13_4EAC_B706_328511B3A160__INCLUDED_)
#define AFX_DEMODLG1_H__3CF9C4B2_CB13_4EAC_B706_328511B3A160__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DemoDlg1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg1 dialog

class CDemoDlg1 : public CDialog
{
// Construction
public:
	CDemoDlg1(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDemoDlg1)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDemoDlg1)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDemoDlg1)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DEMODLG1_H__3CF9C4B2_CB13_4EAC_B706_328511B3A160__INCLUDED_)
