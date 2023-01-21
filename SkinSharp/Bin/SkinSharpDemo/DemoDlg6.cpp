// DemoDlg6.cpp : implementation file
//

#include "stdafx.h"
#include "SkinSharpDemo.h"
#include "DemoDlg6.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg6 dialog


CDemoDlg6::CDemoDlg6(CWnd* pParent /*=NULL*/)
	: CDialog(CDemoDlg6::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDemoDlg6)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDemoDlg6::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDemoDlg6)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDemoDlg6, CDialog)
	//{{AFX_MSG_MAP(CDemoDlg6)
	ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_SLIDER1, OnReleasedcaptureSlider1)
	ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_SLIDER2, OnReleasedcaptureSlider2)
	ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_SLIDER3, OnReleasedcaptureSlider3)
	ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_SLIDER4, OnReleasedcaptureSlider4)
	ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_SLIDER5, OnReleasedcaptureSlider5)
	ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_SLIDER6, OnReleasedcaptureSlider6)
	ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_SLIDER7, OnReleasedcaptureSlider7)
	ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_SLIDER8, OnReleasedcaptureSlider8)
	ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_SLIDER9, OnReleasedcaptureSlider9)
	ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_SLIDER10, OnReleasedcaptureSlider10)
	ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_SLIDER11, OnReleasedcaptureSlider11)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg6 message handlers

void CDemoDlg6::OnReleasedcaptureSlider1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	SkinH_AdjustHSV( ((CSliderCtrl*)GetDlgItem(IDC_SLIDER1))->GetPos(),
					  ((CSliderCtrl*)GetDlgItem(IDC_SLIDER2))->GetPos(), 
					  ((CSliderCtrl*)GetDlgItem(IDC_SLIDER3))->GetPos()
					  );
	
	*pResult = 0;
}

BOOL CDemoDlg6::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	CSliderCtrl* pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER1);
	pSlider->SetRange(-180,180,TRUE);
	pSlider->SetPos(0);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER2);
	pSlider->SetRange(-100,100,TRUE);
	pSlider->SetPos(0);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER3);
	pSlider->SetRange(-100,100,TRUE);
	pSlider->SetPos(0);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER4);
	pSlider->SetRange(0,255,TRUE);
	pSlider->SetPos(120);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER5);
	pSlider->SetRange(2,19,TRUE);
	pSlider->SetPos(2);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER6);
	pSlider->SetRange(0,20,TRUE);
	pSlider->SetPos(0);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER7);
	pSlider->SetRange(0,255,TRUE);
	pSlider->SetPos(0);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER8);
	pSlider->SetRange(0,255,TRUE);
	pSlider->SetPos(0);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER9);
	pSlider->SetRange(0,255,TRUE);
	pSlider->SetPos(0);

	pSlider = (CSliderCtrl*)GetDlgItem(IDC_SLIDER10);
	pSlider->SetRange(0,255,TRUE);
	pSlider->SetPos(0);

	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CDemoDlg6::OnReleasedcaptureSlider2(NMHDR* pNMHDR, LRESULT* pResult) 
{
	OnReleasedcaptureSlider1(pNMHDR, pResult); 	
	*pResult = 0;
}

void CDemoDlg6::OnReleasedcaptureSlider3(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	OnReleasedcaptureSlider1(pNMHDR, pResult);
	*pResult = 0;
}

void CDemoDlg6::OnReleasedcaptureSlider4(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	SkinH_AdjustAero( 
		((CSliderCtrl*)GetDlgItem(IDC_SLIDER4))->GetPos(),
		((CSliderCtrl*)GetDlgItem(IDC_SLIDER7))->GetPos(), 
		((CSliderCtrl*)GetDlgItem(IDC_SLIDER6))->GetPos(),
		((CSliderCtrl*)GetDlgItem(IDC_SLIDER5))->GetPos(),
		0, 0,
		((CSliderCtrl*)GetDlgItem(IDC_SLIDER8))->GetPos(),
		((CSliderCtrl*)GetDlgItem(IDC_SLIDER9))->GetPos(),
		((CSliderCtrl*)GetDlgItem(IDC_SLIDER10))->GetPos()
	);


	*pResult = 0;
}

void CDemoDlg6::OnReleasedcaptureSlider5(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	OnReleasedcaptureSlider4(pNMHDR, pResult);
	*pResult = 0;
}

void CDemoDlg6::OnReleasedcaptureSlider6(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	OnReleasedcaptureSlider4(pNMHDR, pResult);
	*pResult = 0;
}

void CDemoDlg6::OnReleasedcaptureSlider7(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	OnReleasedcaptureSlider4(pNMHDR, pResult);
	*pResult = 0;
}

void CDemoDlg6::OnReleasedcaptureSlider8(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	OnReleasedcaptureSlider4(pNMHDR, pResult);
	*pResult = 0;
}

void CDemoDlg6::OnReleasedcaptureSlider9(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	OnReleasedcaptureSlider4(pNMHDR, pResult);
	*pResult = 0;
}

void CDemoDlg6::OnReleasedcaptureSlider10(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	OnReleasedcaptureSlider4(pNMHDR, pResult);
	*pResult = 0;
}

void CDemoDlg6::OnReleasedcaptureSlider11(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	SkinH_SetMenuAlpha(((CSliderCtrl*)GetDlgItem(IDC_SLIDER11))->GetPos());
	*pResult = 0;
}
