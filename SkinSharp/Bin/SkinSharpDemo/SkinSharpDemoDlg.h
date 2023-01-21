// SkinSharpDemoDlg.h : header file
//

#if !defined(AFX_SKINSHARPDEMODLG_H__E85644D2_9971_4CBB_861E_66893545A5AE__INCLUDED_)
#define AFX_SKINSHARPDEMODLG_H__E85644D2_9971_4CBB_861E_66893545A5AE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "DemoDlg1.h"
#include "DemoDlg2.h"
#include "DemoDlg3.h"
#include "DemoDlg4.h"
#include "DemoDlg5.h"
#include "DemoDlg6.h"


/////////////////////////////////////////////////////////////////////////////
// CSkinSharpDemoDlg dialog

class CSkinSharpDemoDlg : public CDialog
{
// Construction
public:
	CSkinSharpDemoDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CSkinSharpDemoDlg)
	enum { IDD = IDD_SKINSHARPDEMO_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSkinSharpDemoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

public:
	CDemoDlg1 m_DemoDlg1;
	CDemoDlg2 m_DemoDlg2;
	CDemoDlg3 m_DemoDlg3;
	CDemoDlg4 m_DemoDlg4;
	CDemoDlg5 m_DemoDlg5;
	CDemoDlg6 m_DemoDlg6;




// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CSkinSharpDemoDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnButton9();
	afx_msg void OnButton10();
	afx_msg void OnButton11();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SKINSHARPDEMODLG_H__E85644D2_9971_4CBB_861E_66893545A5AE__INCLUDED_)
