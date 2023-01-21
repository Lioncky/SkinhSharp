#if !defined(AFX_DEMODLG3_H__CB23FA79_830A_4BE5_B9B0_8C1D78BDB09B__INCLUDED_)
#define AFX_DEMODLG3_H__CB23FA79_830A_4BE5_B9B0_8C1D78BDB09B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DemoDlg3.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg3 dialog

class CDemoDlg3 : public CDialog
{
// Construction
public:
	CDemoDlg3(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDemoDlg3)
	enum { IDD = IDD_DIALOG3 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA
	CImageList m_ImageList;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDemoDlg3)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDemoDlg3)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DEMODLG3_H__CB23FA79_830A_4BE5_B9B0_8C1D78BDB09B__INCLUDED_)
