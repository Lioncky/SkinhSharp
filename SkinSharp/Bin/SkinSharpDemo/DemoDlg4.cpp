// DemoDlg4.cpp : implementation file
//

#include "stdafx.h"
#include "SkinSharpDemo.h"
#include "DemoDlg4.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg4 dialog


CDemoDlg4::CDemoDlg4(CWnd* pParent /*=NULL*/)
	: CDialog(CDemoDlg4::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDemoDlg4)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDemoDlg4::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDemoDlg4)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDemoDlg4, CDialog)
	//{{AFX_MSG_MAP(CDemoDlg4)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg4 message handlers

BOOL CDemoDlg4::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	CScrollBar* pScrollBar = (CScrollBar*)GetDlgItem(IDC_SCROLLBAR1);
	pScrollBar->SetScrollRange(0, 100, TRUE);
	pScrollBar->SetScrollPos(50, TRUE);

	pScrollBar = (CScrollBar*)GetDlgItem(IDC_SCROLLBAR2);
	pScrollBar->SetScrollRange(0, 100, TRUE);
	pScrollBar->SetScrollPos(50, TRUE);

	pScrollBar = (CScrollBar*)GetDlgItem(IDC_SCROLLBAR3);
	pScrollBar->SetScrollRange(0, 100, TRUE);
	pScrollBar->SetScrollPos(50, TRUE);

	pScrollBar = (CScrollBar*)GetDlgItem(IDC_SCROLLBAR4);
	pScrollBar->SetScrollRange(0, 100, TRUE);
	pScrollBar->SetScrollPos(50, TRUE);

	
	CProgressCtrl* pProgress = (CProgressCtrl*)GetDlgItem(IDC_PROGRESS1);
	pProgress->SetRange(0,100);
	pProgress->SetPos(50);

	pProgress = (CProgressCtrl*)GetDlgItem(IDC_PROGRESS2);
	pProgress->SetRange(0,100);
	pProgress->SetPos(50);

	pProgress = (CProgressCtrl*)GetDlgItem(IDC_PROGRESS3);
	pProgress->SetRange(0,100);
	pProgress->SetPos(50);

	pProgress = (CProgressCtrl*)GetDlgItem(IDC_PROGRESS4);
	pProgress->SetRange(0,100);
	pProgress->SetPos(50);

	CSliderCtrl* pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER2);
	pSlider->SetRange(0,100);
	pSlider->SetPos(50);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER3);
	pSlider->SetRange(0,100);
	pSlider->SetPos(50);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER4);
	pSlider->SetRange(0,100);
	pSlider->SetPos(50);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER5);
	pSlider->SetRange(0,100);
	pSlider->SetPos(50);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER6);
	pSlider->SetRange(0,100);
	pSlider->SetPos(50);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER7);
	pSlider->SetRange(0,100);
	pSlider->SetPos(50);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER8);
	pSlider->SetRange(0,100);
	pSlider->SetPos(50);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER9);
	pSlider->SetRange(0,100);
	pSlider->SetPos(50);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER10);
	pSlider->SetRange(0,100);
	pSlider->SetPos(50);

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CDemoDlg4::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	
	CProgressCtrl* pProgress = (CProgressCtrl*)GetDlgItem(IDC_PROGRESS1);
	UINT nPos = pProgress->GetPos(); nPos++; if(nPos > 100) nPos = 0;
	pProgress->SetPos(nPos);

	pProgress = (CProgressCtrl*)GetDlgItem(IDC_PROGRESS2);
	nPos = pProgress->GetPos(); nPos++; if(nPos > 100) nPos = 0;
	pProgress->SetPos(nPos);

	pProgress = (CProgressCtrl*)GetDlgItem(IDC_PROGRESS3);
	nPos = pProgress->GetPos(); nPos++; if(nPos > 100) nPos = 0;
	pProgress->SetPos(nPos);

	pProgress = (CProgressCtrl*)GetDlgItem(IDC_PROGRESS4);
	nPos = pProgress->GetPos(); nPos++; if(nPos > 100) nPos = 0;
	pProgress->SetPos(nPos);
	
	
	CSliderCtrl* pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER2);
	nPos = pSlider->GetPos(); nPos++; if(nPos > 100) nPos = 0;
	pSlider->SetPos(nPos);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER3);
	nPos = pSlider->GetPos(); nPos++; if(nPos > 100) nPos = 0;
	pSlider->SetPos(nPos);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER4);
	nPos = pSlider->GetPos(); nPos++; if(nPos > 100) nPos = 0;
	pSlider->SetPos(nPos);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER5);
	nPos = pSlider->GetPos(); nPos++; if(nPos > 100) nPos = 0;
	pSlider->SetPos(nPos);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER6);
	nPos = pSlider->GetPos(); nPos++; if(nPos > 100) nPos = 0;
	pSlider->SetPos(nPos);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER7);
	nPos = pSlider->GetPos(); nPos++; if(nPos > 100) nPos = 0;
	pSlider->SetPos(nPos);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER8);
	nPos = pSlider->GetPos(); nPos++; if(nPos > 100) nPos = 0;
	pSlider->SetPos(nPos);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER9);
	nPos = pSlider->GetPos(); nPos++; if(nPos > 100) nPos = 0;
	pSlider->SetPos(nPos);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER10);
	nPos = pSlider->GetPos(); nPos++; if(nPos > 100) nPos = 0;
	pSlider->SetPos(nPos);
	

	CScrollBar* pScrollBar = (CScrollBar*)GetDlgItem(IDC_SCROLLBAR1);
	nPos = pScrollBar->GetScrollPos(); nPos++; if(nPos > 100) nPos = 0;
	pScrollBar->SetScrollPos(nPos, TRUE);
	
	pScrollBar = (CScrollBar*)GetDlgItem(IDC_SCROLLBAR2);
	nPos = pScrollBar->GetScrollPos(); nPos++; if(nPos > 100) nPos = 0;
	pScrollBar->SetScrollPos(nPos, TRUE);
	
	pScrollBar = (CScrollBar*)GetDlgItem(IDC_SCROLLBAR3);
	nPos = pScrollBar->GetScrollPos(); nPos++; if(nPos > 100) nPos = 0;
	pScrollBar->SetScrollPos(nPos, TRUE);
	
	pScrollBar = (CScrollBar*)GetDlgItem(IDC_SCROLLBAR4);
	nPos = pScrollBar->GetScrollPos(); nPos++; if(nPos > 100) nPos = 0;
	pScrollBar->SetScrollPos(nPos, TRUE);


	CDialog::OnTimer(nIDEvent);
}

void CDemoDlg4::OnButton1() 
{
	// TODO: Add your control notification handler code here
	::SetTimer(m_hWnd,1,50,NULL);
}

void CDemoDlg4::OnButton2() 
{
	// TODO: Add your control notification handler code here
	::KillTimer(m_hWnd,1);
}
