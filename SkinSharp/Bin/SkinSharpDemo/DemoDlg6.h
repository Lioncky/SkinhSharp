#if !defined(AFX_DEMODLG6_H__CC68DAD1_A402_4F59_9675_799913854945__INCLUDED_)
#define AFX_DEMODLG6_H__CC68DAD1_A402_4F59_9675_799913854945__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DemoDlg6.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg6 dialog

class CDemoDlg6 : public CDialog
{
// Construction
public:
	CDemoDlg6(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDemoDlg6)
	enum { IDD = IDD_DIALOG6 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDemoDlg6)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDemoDlg6)
	afx_msg void OnReleasedcaptureSlider1(NMHDR* pNMHDR, LRESULT* pResult);
	virtual BOOL OnInitDialog();
	afx_msg void OnReleasedcaptureSlider2(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnReleasedcaptureSlider3(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnReleasedcaptureSlider4(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnReleasedcaptureSlider5(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnReleasedcaptureSlider6(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnReleasedcaptureSlider7(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnReleasedcaptureSlider8(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnReleasedcaptureSlider9(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnReleasedcaptureSlider10(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnReleasedcaptureSlider11(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DEMODLG6_H__CC68DAD1_A402_4F59_9675_799913854945__INCLUDED_)
