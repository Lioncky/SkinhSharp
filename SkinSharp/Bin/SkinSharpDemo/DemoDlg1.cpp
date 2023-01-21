// DemoDlg1.cpp : implementation file
//

#include "stdafx.h"
#include "SkinSharpDemo.h"
#include "DemoDlg1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg1 dialog


CDemoDlg1::CDemoDlg1(CWnd* pParent /*=NULL*/)
	: CDialog(CDemoDlg1::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDemoDlg1)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDemoDlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDemoDlg1)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDemoDlg1, CDialog)
	//{{AFX_MSG_MAP(CDemoDlg1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg1 message handlers

BOOL CDemoDlg1::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	
	((CButton*)GetDlgItem(IDC_BUTTON5))->SetIcon(::LoadIcon(NULL, IDI_INFORMATION));
	((CButton*)GetDlgItem(IDC_BUTTON6))->SetBitmap(::LoadBitmap(NULL, MAKEINTRESOURCE(32754)));
	
	((CButton*)GetDlgItem(IDC_GROUPBOX1))->SetIcon(::LoadIcon(NULL, IDI_INFORMATION));
	((CButton*)GetDlgItem(IDC_GROUPBOX2))->SetBitmap(::LoadBitmap(NULL, MAKEINTRESOURCE(32754)));

	((CButton*)GetDlgItem(IDC_CHECK4))->SetIcon(::LoadIcon(NULL, IDI_INFORMATION));
	((CButton*)GetDlgItem(IDC_CHECK8))->SetBitmap(::LoadBitmap(NULL, MAKEINTRESOURCE(32754)));
	

	((CButton*)GetDlgItem(IDC_RADIO4))->SetIcon(::LoadIcon(NULL, IDI_INFORMATION));
	((CButton*)GetDlgItem(IDC_RADIO8))->SetBitmap(::LoadBitmap(NULL, MAKEINTRESOURCE(32754)));
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
