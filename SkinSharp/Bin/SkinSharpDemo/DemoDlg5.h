#if !defined(AFX_DEMODLG5_H__020DB8B1_B361_4B64_AAE0_2BED16C93EBA__INCLUDED_)
#define AFX_DEMODLG5_H__020DB8B1_B361_4B64_AAE0_2BED16C93EBA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DemoDlg5.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg5 dialog

class CDemoDlg5 : public CDialog
{
// Construction
public:
	HWND m_hToolBar;
	HWND m_hReBar;
	CDemoDlg5(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDemoDlg5)
	enum { IDD = IDD_DIALOG5 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDemoDlg5)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

public:
	HWND m_hStatusBar;
	HIMAGELIST m_hImageList;
	BOOL CreateToolBar();
	BOOL CreateReBar();
	void AddTbarButton(TBBUTTON& tb, int iBitmap, int iCmd, BYTE fsState, BYTE fsStyle);
	BOOL CreateStatusBar();

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDemoDlg5)
	virtual BOOL OnInitDialog();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnButton6();
	afx_msg void OnButton5();
	afx_msg void OnButton7();
	afx_msg void OnWindowPosChanged(WINDOWPOS FAR* lpwndpos);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DEMODLG5_H__020DB8B1_B361_4B64_AAE0_2BED16C93EBA__INCLUDED_)
