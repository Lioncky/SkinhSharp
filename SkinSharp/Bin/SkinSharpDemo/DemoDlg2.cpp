// DemoDlg2.cpp : implementation file
//

#include "stdafx.h"
#include "SkinSharpDemo.h"
#include "DemoDlg2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg2 dialog


CDemoDlg2::CDemoDlg2(CWnd* pParent /*=NULL*/)
	: CDialog(CDemoDlg2::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDemoDlg2)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDemoDlg2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDemoDlg2)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDemoDlg2, CDialog)
	//{{AFX_MSG_MAP(CDemoDlg2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg2 message handlers

BOOL CDemoDlg2::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	
	m_ImageList.Create(32,32,ILC_COLOR32|ILC_MASK,0, 0);
	m_ImageList.Add(AfxGetApp()->LoadIcon(IDR_MAINFRAME));
	m_ImageList.Add(AfxGetApp()->LoadIcon(IDR_MAINFRAME));
	m_ImageList.Add(AfxGetApp()->LoadIcon(IDR_MAINFRAME));

	CComboBoxEx* pComboBoxEx = (CComboBoxEx*)GetDlgItem(IDC_COMBOBOXEX1);

	pComboBoxEx->SetImageList(&m_ImageList);
	COMBOBOXEXITEM cmb;
	for(int i=0; i<10; i++)
	{
		cmb.iItem=i;
		cmb.iImage=0;
		cmb.iSelectedImage=0;
		cmb.iOverlay=i;
		cmb.mask=CBEIF_IMAGE|CBEIF_OVERLAY|CBEIF_SELECTEDIMAGE|CBEIF_TEXT;
		CString str;
		str.Format("ComboBoxEx %d !",i+1);
		cmb.pszText=str.GetBuffer(str.GetLength());
		pComboBoxEx->InsertItem(&cmb);
	}

	pComboBoxEx = (CComboBoxEx*)GetDlgItem(IDC_COMBOBOXEX2);
	pComboBoxEx->SetImageList(&m_ImageList);
	for(i=0; i<10; i++)
	{
		cmb.iItem=i;
		cmb.iImage=0;
		cmb.iSelectedImage=0;
		cmb.iOverlay=i;
		cmb.mask=CBEIF_IMAGE|CBEIF_OVERLAY|CBEIF_SELECTEDIMAGE|CBEIF_TEXT;
		CString str;
		str.Format("ComboBoxEx %d !",i+1);
		cmb.pszText=str.GetBuffer(str.GetLength());
		pComboBoxEx->InsertItem(&cmb);
	}

	pComboBoxEx = (CComboBoxEx*)GetDlgItem(IDC_COMBOBOXEX3);
	pComboBoxEx->SetImageList(&m_ImageList);
	for(i=0; i<10; i++)
	{
		cmb.iItem=i;
		cmb.iImage=0;
		cmb.iSelectedImage=0;
		cmb.iOverlay=i;
		cmb.mask=CBEIF_IMAGE|CBEIF_OVERLAY|CBEIF_SELECTEDIMAGE|CBEIF_TEXT;
		CString str;
		str.Format("ComboBoxEx %d !",i+1);
		cmb.pszText=str.GetBuffer(str.GetLength());
		pComboBoxEx->InsertItem(&cmb);
	}


	CComboBox* pComboBox = (CComboBox*)GetDlgItem(IDC_COMBO1);
	for(i=0; i < 10; i++)
	{
		CString strItem;
		strItem.Format("ComboBoxItem%ld", i);
		pComboBox->AddString(strItem);
	}

	pComboBox = (CComboBox*)GetDlgItem(IDC_COMBO2);
	for(i=0; i < 10; i++)
	{
		CString strItem;
		strItem.Format("ComboBoxItem%ld", i);
		pComboBox->AddString(strItem);
	}

	pComboBox = (CComboBox*)GetDlgItem(IDC_COMBO3);
	for(i=0; i < 10; i++)
	{
		CString strItem;
		strItem.Format("ComboBoxItem%ld", i);
		pComboBox->AddString(strItem);
	}

	CListBox* pListBox = (CListBox*)GetDlgItem(IDC_LIST1);
	for(i=0; i < 10; i++)
	{
		CString strItem;
		strItem.Format("ListBoxItem%ld", i);
		pListBox->AddString(strItem);
	}

	pListBox = (CListBox*)GetDlgItem(IDC_LIST2);
	for(i=0; i < 10; i++)
	{
		CString strItem;
		strItem.Format("ListBoxItem%ld", i);
		pListBox->AddString(strItem);
	}

	pListBox = (CListBox*)GetDlgItem(IDC_LIST3);
	for(i=0; i < 10; i++)
	{
		CString strItem;
		strItem.Format("ListBoxItem%ld", i);
		pListBox->AddString(strItem);
	}

	pListBox = (CListBox*)GetDlgItem(IDC_LIST4);
	for(i=0; i < 10; i++)
	{
		CString strItem;
		strItem.Format("ListBoxItem%ld", i);
		pListBox->AddString(strItem);
	}

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
