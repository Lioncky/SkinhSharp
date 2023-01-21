// DemoDlg5.cpp : implementation file
//

#include "stdafx.h"
#include "SkinSharpDemo.h"
#include "DemoDlg5.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg5 dialog


CDemoDlg5::CDemoDlg5(CWnd* pParent /*=NULL*/)
	: CDialog(CDemoDlg5::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDemoDlg5)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDemoDlg5::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDemoDlg5)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDemoDlg5, CDialog)
	//{{AFX_MSG_MAP(CDemoDlg5)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7)
	ON_WM_WINDOWPOSCHANGED()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg5 message handlers

BOOL CDemoDlg5::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	
	CreateReBar();
	CreateStatusBar();
	
	CTabCtrl* pTabCtrl = (CTabCtrl*)GetDlgItem(IDC_TAB1);
	for(int i=0; i< 6; i++)
	{
		CString strItem;
		strItem.Format("Tab%ld", i);
		pTabCtrl->InsertItem(i, strItem);
	}

	pTabCtrl = (CTabCtrl*)GetDlgItem(IDC_TAB2);
	for(i=0; i< 6; i++)
	{
		CString strItem;
		strItem.Format("Tab%ld", i);
		pTabCtrl->InsertItem(i, strItem);
	}

	pTabCtrl = (CTabCtrl*)GetDlgItem(IDC_TAB3);
	
	for(i=0; i< 6; i++)
	{
		CString strItem;
		strItem.Format("Tab%ld", i);
		pTabCtrl->InsertItem(i, strItem);
	}

	pTabCtrl = (CTabCtrl*)GetDlgItem(IDC_TAB4);
	
	for(i=0; i< 6; i++)
	{
		CString strItem;
		strItem.Format("Tab%ld", i);
		pTabCtrl->InsertItem(i, strItem);
	}

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CDemoDlg5::OnButton1() 
{
	// TODO: Add your control notification handler code here
	char szFilters[]= "All Files (*.*)|*.*|All Files (*.*)|*.*||";
	CFileDialog fileDlg (TRUE, "*", "*.*", OFN_FILEMUSTEXIST| OFN_HIDEREADONLY, szFilters, this);
	fileDlg.DoModal();
}

void CDemoDlg5::OnButton2() 
{
	// TODO: Add your control notification handler code here
	char szFilters[]= "All Files (*.*)|*.*|All Files (*.*)|*.*||";
	CFileDialog fileDlg (FALSE, "*", "*.*", OFN_FILEMUSTEXIST| OFN_HIDEREADONLY, szFilters, this);
	fileDlg.DoModal();
}

void CDemoDlg5::OnButton3() 
{
	// TODO: Add your control notification handler code here
	CColorDialog dlg(RGB(255, 0, 0), CC_FULLOPEN);
	dlg.DoModal();
}

void CDemoDlg5::OnButton4() 
{
	// TODO: Add your control notification handler code here
	CFontDialog dlg;
	dlg.DoModal();
}

void CDemoDlg5::OnButton6() 
{
	CFindReplaceDialog  *dlg =  new CFindReplaceDialog();
	dlg->Create( TRUE, TEXT(""), NULL, NULL, this );
	dlg->ShowWindow(SW_SHOW);
}

void CDemoDlg5::OnButton5() 
{
	// TODO: Add your control notification handler code here
	CPrintDialog dlg(FALSE, PD_ALLPAGES | PD_COLLATE | PD_NOPAGENUMS | PD_HIDEPRINTTOFILE);
	dlg.DoModal();
}

UINT APIENTRY PaintHook( HWND hWnd, UINT uParam,  WPARAM wParam, LPARAM lParam)
{
	return 0;
}

void CDemoDlg5::OnButton7() 
{
	// TODO: Add your control notification handler code here
	CPageSetupDialog psd( PSD_INTHOUSANDTHSOFINCHES | PSD_MARGINS | PSD_ENABLEPAGEPAINTHOOK, this );
	
	//Initialize margins
	psd.m_psd.rtMargin.top = 1000;
	psd.m_psd.rtMargin.left = 1250;
	psd.m_psd.rtMargin.right = 1250;
	psd.m_psd.rtMargin.bottom = 1000;
	psd.m_psd.lpfnPagePaintHook = (LPPAGEPAINTHOOK)PaintHook;
	
	psd.DoModal();	
}

BOOL CDemoDlg5::CreateReBar()
{
	REBARINFO     rbi;
	REBARBANDINFO rbBand;
	DWORD  dwBtnSize;
	
	m_hReBar = CreateWindowEx(WS_EX_TOOLWINDOW, REBARCLASSNAME, NULL, WS_CHILD|WS_VISIBLE|WS_CLIPSIBLINGS| WS_CLIPCHILDREN | 
		CCS_NODIVIDER|RBS_BANDBORDERS ,
		0,0,0,0,m_hWnd,(HMENU)0x6002,AfxGetApp()->m_hInstance,NULL);
	
	if(!m_hReBar)
		return NULL;
	
	rbi.cbSize = sizeof(REBARINFO);  // Required when using this
	rbi.fMask  = 0;
	rbi.himl   = (HIMAGELIST)NULL;
	if(!::SendMessage(m_hReBar, RB_SETBARINFO, 0, (LPARAM)&rbi))
		return NULL;
	
	
	// Initialize structure members that both bands will share.
	rbBand.cbSize = sizeof(REBARBANDINFO);  // Required
	rbBand.fMask  =  RBBIM_TEXT | RBBIM_STYLE | RBBIM_CHILD  | RBBIM_CHILDSIZE | RBBIM_SIZE;
	rbBand.fStyle =  RBBS_GRIPPERALWAYS | RBBS_FIXEDSIZE;
	
	CreateToolBar();
	
	// Get the height of the toolbar.
	dwBtnSize = (DWORD) ::SendMessage(m_hToolBar, TB_GETBUTTONSIZE, 0,0);
	
	rbBand.lpText     = NULL;
	rbBand.hwndChild  = m_hToolBar;
	rbBand.cxMinChild = 0;
	rbBand.cyMinChild = HIWORD(dwBtnSize) + 2;
	rbBand.cx         = 600;
	
	::SendMessage(m_hReBar, RB_INSERTBAND, (WPARAM)-1, (LPARAM)&rbBand);
	return TRUE;
}

BOOL CDemoDlg5::CreateToolBar() 
{  
	m_hToolBar = CreateWindowEx(0, TOOLBARCLASSNAME, NULL, 
		WS_CHILD | WS_VISIBLE | CCS_NODIVIDER | CCS_TOP |TBSTYLE_WRAPABLE| TBSTYLE_TOOLTIPS |CCS_NORESIZE|TBSTYLE_TRANSPARENT|TBSTYLE_FLAT,
		0, 0, 0, 0, m_hWnd, (HMENU)0x7001, AfxGetApp()->m_hInstance, NULL); 
	
	//You Must Send This Message Before Adding Buttons
	::SendMessage(m_hToolBar, TB_BUTTONSTRUCTSIZE, (WPARAM)sizeof(TBBUTTON), 0); 
	
	
	m_hImageList = ::ImageList_Create(16, 16, ILC_COLOR32|ILC_MASK, 1, 1);
	::ImageList_AddMasked(m_hImageList, ::LoadBitmap(AfxGetApp()->m_hInstance, MAKEINTRESOURCE(IDB_OPEN)), RGB(255,255,255));
	::ImageList_AddMasked(m_hImageList, ::LoadBitmap(AfxGetApp()->m_hInstance, MAKEINTRESOURCE(IDB_SAVE)), RGB(255,255,255));
	::ImageList_AddMasked(m_hImageList, ::LoadBitmap(AfxGetApp()->m_hInstance, MAKEINTRESOURCE(IDB_SAVESHE)), RGB(255,255,255));
	::ImageList_AddMasked(m_hImageList, ::LoadBitmap(AfxGetApp()->m_hInstance, MAKEINTRESOURCE(IDB_DEFAULT)), RGB(255,255,255));
	::ImageList_AddMasked(m_hImageList, ::LoadBitmap(AfxGetApp()->m_hInstance, MAKEINTRESOURCE(IDB_SELECT)), RGB(255,255,255));
	::ImageList_AddMasked(m_hImageList, ::LoadBitmap(AfxGetApp()->m_hInstance, MAKEINTRESOURCE(IDB_ZOOM)), RGB(255,255,255));
	::ImageList_AddMasked(m_hImageList, ::LoadBitmap(AfxGetApp()->m_hInstance, MAKEINTRESOURCE(IDB_HAND)), RGB(255,255,255));
	::ImageList_AddMasked(m_hImageList, ::LoadBitmap(AfxGetApp()->m_hInstance, MAKEINTRESOURCE(IDB_PREVIEW)), RGB(255,255,255));
	::ImageList_AddMasked(m_hImageList, ::LoadBitmap(AfxGetApp()->m_hInstance, MAKEINTRESOURCE(IDB_SNAPSHOT)), RGB(255,255,255));
	
	::SendMessage(m_hToolBar, TB_SETIMAGELIST, 0, (LPARAM)m_hImageList); 
	
	
	::SendMessage(m_hToolBar, TB_SETBUTTONSIZE, 22, 22);
	
	TBBUTTON tb[11];
	AddTbarButton(tb[0], 0, 0x1001, TBSTATE_ENABLED, TBSTYLE_BUTTON);
	AddTbarButton(tb[1], 1, 0x1002, TBSTATE_ENABLED, TBSTYLE_BUTTON);
	AddTbarButton(tb[2], 2, 0x1003, TBSTATE_ENABLED, TBSTYLE_BUTTON);
	AddTbarButton(tb[3], 0, 0, TBSTATE_ENABLED, TBSTYLE_SEP);
	AddTbarButton(tb[4], 3, 0x1004, TBSTATE_ENABLED|TBSTATE_CHECKED, TBSTYLE_CHECKGROUP);
	AddTbarButton(tb[5], 4, 0x1005, TBSTATE_ENABLED, TBSTYLE_CHECKGROUP);
	AddTbarButton(tb[6], 5, 0x1006, TBSTATE_ENABLED, TBSTYLE_CHECKGROUP);
	AddTbarButton(tb[7], 6, 0x1007, TBSTATE_ENABLED, TBSTYLE_CHECKGROUP);
	AddTbarButton(tb[8], 0, 0, TBSTATE_ENABLED, TBSTYLE_SEP);
	AddTbarButton(tb[9], 7, 0x1008, TBSTATE_ENABLED, TBSTYLE_BUTTON);
	AddTbarButton(tb[10], 8, 0x1009, TBSTATE_ENABLED, TBSTYLE_BUTTON);
	
	::SendMessage(m_hToolBar, TB_ADDBUTTONS, 11, (LPARAM)(LPTBBUTTON)&tb); 
	
	::SendMessage(m_hToolBar, TB_AUTOSIZE, 0, 0); 
	
	return TRUE; 
}

void CDemoDlg5::AddTbarButton(TBBUTTON& tb, int iBitmap, int iCmd, BYTE fsState, BYTE fsStyle)
{
	tb.iBitmap = iBitmap; 
	tb.idCommand = iCmd; 
	tb.fsState = fsState; 
	tb.fsStyle = fsStyle; 
	tb.dwData = 0; 
	tb.iString = -1; 
}

void CDemoDlg5::OnWindowPosChanged(WINDOWPOS FAR* lpwndpos) 
{
	CDialog::OnWindowPosChanged(lpwndpos);
	
	WINDOWPOS* pWPS = (WINDOWPOS*)lpwndpos;
	if(NULL != pWPS)
	{
		if( SWP_NOSIZE != (pWPS->flags & SWP_NOSIZE) || SWP_SHOWWINDOW == (pWPS->flags & SWP_SHOWWINDOW))
		{
			RECT rcClt;
			RECT rcTBarClt;
			RECT rcSBarClt;
			::GetClientRect(m_hWnd, &rcClt);
			::GetClientRect(m_hReBar, &rcTBarClt);
			::GetClientRect(m_hStatusBar, &rcSBarClt);
			::MoveWindow(m_hReBar, 0, 0, rcClt.right, rcTBarClt.bottom, TRUE);
			::MoveWindow(m_hStatusBar, 0, rcClt.bottom - rcSBarClt.bottom, rcClt.right, rcClt.bottom, TRUE);
		}
	}	
}

BOOL CDemoDlg5::CreateStatusBar()
{
	int nParts = 5;
    RECT rcClient;
    HLOCAL hloc;
    LPINT lpParts;
    int i, nWidth;
	
    // Ensure that the common control DLL is loaded.
    ::InitCommonControls();
	
    // Create the status bar.
    m_hStatusBar = ::CreateWindowEx(
        0,                       // no extended styles
        STATUSCLASSNAME,         // name of status bar class
        (LPCTSTR) NULL,          // no text when first created
        SBARS_SIZEGRIP |         // includes a sizing grip
        WS_CHILD|WS_VISIBLE,     // creates a child window
        0, 0, 0, 0,              // ignores size and position
        m_hWnd,              // handle to parent window
        (HMENU)0x1005,       // child window identifier
        AfxGetApp()->m_hInstance,                   // handle to application instance
        NULL);                   // no window creation data
	
    // Get the coordinates of the parent window's client area.
    ::GetClientRect(m_hWnd, &rcClient);
	
    // Allocate an array for holding the right edge coordinates.
    hloc = ::LocalAlloc(LHND, sizeof(int) * nParts);
    lpParts = (LPINT)::LocalLock(hloc);
	
    // Calculate the right edge coordinate for each part, and
    // copy the coordinates to the array.
    nWidth = rcClient.right / nParts;
    for (i = 0; i < nParts; i++) 
	{ 
		lpParts[i] = nWidth;
		nWidth += nWidth;
    }
	
    // Tell the status bar to create the window parts.
    ::SendMessage(m_hStatusBar, SB_SETPARTS, (WPARAM) nParts, (LPARAM)lpParts);
	
    // Free the array, and return.
    ::LocalUnlock(hloc);
    ::LocalFree(hloc);

	::SendMessage(m_hStatusBar, SB_SETTEXT, 0, (LPARAM)"Part1");
	::SendMessage(m_hStatusBar, SB_SETTEXT, 1, (LPARAM)"Part2");
	::SendMessage(m_hStatusBar, SB_SETTEXT, 2, (LPARAM)"Part3");




	return TRUE;
}  

