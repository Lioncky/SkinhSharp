#if !defined(AFX_DEMODLG4_H__9D53A3DC_8B95_427C_A077_CABFC9E417A6__INCLUDED_)
#define AFX_DEMODLG4_H__9D53A3DC_8B95_427C_A077_CABFC9E417A6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DemoDlg4.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg4 dialog

class CDemoDlg4 : public CDialog
{
// Construction
public:
	CDemoDlg4(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDemoDlg4)
	enum { IDD = IDD_DIALOG4 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDemoDlg4)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDemoDlg4)
	virtual BOOL OnInitDialog();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DEMODLG4_H__9D53A3DC_8B95_427C_A077_CABFC9E417A6__INCLUDED_)
