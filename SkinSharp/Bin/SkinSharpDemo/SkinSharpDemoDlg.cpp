// SkinSharpDemoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "SkinSharpDemo.h"
#include "SkinSharpDemoDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSkinSharpDemoDlg dialog

CSkinSharpDemoDlg::CSkinSharpDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSkinSharpDemoDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSkinSharpDemoDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSkinSharpDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSkinSharpDemoDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CSkinSharpDemoDlg, CDialog)
	//{{AFX_MSG_MAP(CSkinSharpDemoDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON9, OnButton9)
	ON_BN_CLICKED(IDC_BUTTON10, OnButton10)
	ON_BN_CLICKED(IDC_BUTTON11, OnButton11)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSkinSharpDemoDlg message handlers

BOOL CSkinSharpDemoDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	SkinH_Attach();
	
	
	m_DemoDlg1.Create(IDD_DIALOG1, this);
	m_DemoDlg2.Create(IDD_DIALOG2, this);
	m_DemoDlg3.Create(IDD_DIALOG3, this);
	m_DemoDlg4.Create(IDD_DIALOG4, this);
	m_DemoDlg5.Create(IDD_DIALOG5, this);
	m_DemoDlg6.Create(IDD_DIALOG6, this);






	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CSkinSharpDemoDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CSkinSharpDemoDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CSkinSharpDemoDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CSkinSharpDemoDlg::OnButton1() 
{
	m_DemoDlg1.ShowWindow(SW_SHOW);		
}

void CSkinSharpDemoDlg::OnButton2() 
{
	m_DemoDlg2.ShowWindow(SW_SHOW);
}

void CSkinSharpDemoDlg::OnButton3() 
{
	m_DemoDlg3.ShowWindow(SW_SHOW);		
}

void CSkinSharpDemoDlg::OnButton4() 
{
	m_DemoDlg4.ShowWindow(SW_SHOW);
	
}

void CSkinSharpDemoDlg::OnButton5() 
{
	m_DemoDlg5.ShowWindow(SW_SHOW);
}

void CSkinSharpDemoDlg::OnButton6() 
{
	// TODO: Add your control notification handler code here
	char szFilters[]= "All Files (*.*)|*.*|All Files (*.*)|*.*||";
	CFileDialog fileDlg (TRUE, "*", "*.*", OFN_FILEMUSTEXIST| OFN_HIDEREADONLY, szFilters, this);
	if( IDOK == fileDlg.DoModal() )
	{
		CString fileName = fileDlg.GetFileName();
		::SkinH_AttachEx(fileName, NULL);
	}

}

void CSkinSharpDemoDlg::OnButton9() 
{
	m_DemoDlg6.ShowWindow(SW_SHOW);		
}

void CSkinSharpDemoDlg::OnButton10() 
{
	// TODO: Add your control notification handler code here
	SkinH_SetAero(TRUE);
}

void CSkinSharpDemoDlg::OnButton11() 
{
	// TODO: Add your control notification handler code here
	SkinH_SetAero(FALSE);
}

void CSkinSharpDemoDlg::OnOK() 
{
	CDialog::OnOK();
}
