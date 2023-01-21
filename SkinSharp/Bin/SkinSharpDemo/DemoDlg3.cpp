// DemoDlg3.cpp : implementation file
//

#include "stdafx.h"
#include "SkinSharpDemo.h"
#include "DemoDlg3.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg3 dialog


CDemoDlg3::CDemoDlg3(CWnd* pParent /*=NULL*/)
	: CDialog(CDemoDlg3::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDemoDlg3)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	AfxInitRichEdit();
}


void CDemoDlg3::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDemoDlg3)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDemoDlg3, CDialog)
	//{{AFX_MSG_MAP(CDemoDlg3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDemoDlg3 message handlers

BOOL CDemoDlg3::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_ImageList.Create(16,16,ILC_COLOR32|ILC_MASK,0, 0);
	m_ImageList.Add(AfxGetApp()->LoadIcon(IDR_MAINFRAME));
	m_ImageList.Add(AfxGetApp()->LoadIcon(IDR_MAINFRAME));
	m_ImageList.Add(AfxGetApp()->LoadIcon(IDR_MAINFRAME));
	

	CListCtrl* pListCtrl = (CListCtrl*)GetDlgItem(IDC_LIST1);

	pListCtrl->SetImageList(&m_ImageList,LVSIL_SMALL);
	
	
	DWORD dwStyles=GetWindowLong(pListCtrl->m_hWnd,GWL_STYLE);
	
	dwStyles|=LVS_REPORT|LVS_SINGLESEL|LVS_SHOWSELALWAYS;
	SetWindowLong(pListCtrl->m_hWnd,GWL_STYLE,dwStyles);
	
	pListCtrl->SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES|LVS_EX_CHECKBOXES);
	
	
	pListCtrl->InsertColumn(0,"Service Name",LVCFMT_LEFT,250,-1);
	pListCtrl->InsertColumn(1,"Service Status",LVCFMT_LEFT,150,-1);
	pListCtrl->InsertColumn(2,"Status Name",LVCFMT_LEFT,60,-1);
	pListCtrl->InsertColumn(3,"Boot Type",LVCFMT_LEFT,65,-1);
	pListCtrl->InsertColumn(4,"Boot Group",LVCFMT_LEFT,120,-1);
	pListCtrl->InsertColumn(5,"Login Type",LVCFMT_LEFT,65,-1);
	
	CString strItem;
	for(int i=0; i<30; i++)
	{
		strItem.Format("ListCtrl-Item%d",i);
		pListCtrl->InsertItem(1, strItem, 0);
	}
	///////////////////

	CTreeCtrl* pTreeCtrl = (CTreeCtrl*)GetDlgItem(IDC_TREE1);
	pTreeCtrl->SetImageList(&m_ImageList,TVSIL_NORMAL);
	char *Win32[4]={"Status","Boot Type","Login Type","Safe Type"};
	char *Win32DrvSub[2][5]={
		{"Running","Pendding","Stopped"},
		{"Auto","Demand","Disable","System Load","Boot Load"}
	};
	char *Win32Sub[4][3]={
		{"Running","Pendding","Stopped"},
		{"Auto","Demand","Disable"},
		{"Local System","Local Service","Local Network"},
		{"Safe","Unknown","Dangerous"}
	};
	
	dwStyles=GetWindowLong(pTreeCtrl->m_hWnd,GWL_STYLE);
	dwStyles|=TVS_HASBUTTONS|TVS_HASLINES|TVS_LINESATROOT|TVS_SHOWSELALWAYS;
	SetWindowLong(pTreeCtrl->m_hWnd,GWL_STYLE,dwStyles);
	
	int j;
	HTREEITEM hRoot,hCur;
	TV_INSERTSTRUCT TCItem;
	
	///////////////////////////////////////////////////
	TCItem.hParent=TVI_ROOT;
	TCItem.hInsertAfter=TVI_LAST;
	TCItem.item.mask=TVIF_TEXT|TVIF_PARAM|TVIF_IMAGE|TVIF_SELECTEDIMAGE;
	TCItem.item.pszText="Windows Services";
	TCItem.item.lParam=0;
	TCItem.item.iImage=0;
	TCItem.item.iSelectedImage=0;
	hRoot=pTreeCtrl->InsertItem(&TCItem);
	for(i=0;i<4;i++)
	{
		TCItem.hParent=hRoot;
		TCItem.item.pszText=Win32[i];
		TCItem.item.iImage=1;
		TCItem.item.iSelectedImage=0;
		TCItem.item.lParam=i;
		hCur=pTreeCtrl->InsertItem(&TCItem);
		for(j=0;j<3;j++)//
		{
			TCItem.hParent=hCur;
			TCItem.item.pszText=Win32Sub[i][j];
			if(0==i)
				TCItem.item.lParam=j;
			else if(1==i)
				TCItem.item.lParam=j;
			else
				TCItem.item.lParam=j;
			pTreeCtrl->InsertItem(&TCItem);
		}
		pTreeCtrl->Expand(hCur,TVE_EXPAND);
	}
	pTreeCtrl->Expand(hRoot,TVE_EXPAND);
	
	///////////////////////////////////////////
	//
	TCItem.hParent=TVI_ROOT;//
	TCItem.hInsertAfter=TVI_LAST;//
	TCItem.item.mask=TVIF_TEXT|TVIF_PARAM|TVIF_IMAGE|TVIF_SELECTEDIMAGE;//
	TCItem.item.pszText="Windows Drivers";
	TCItem.item.lParam=1;//
	TCItem.item.iImage=0;//
	TCItem.item.iSelectedImage=0;
	hRoot=pTreeCtrl->InsertItem(&TCItem);//
	for(i=0;i<2;i++)//
	{
		TCItem.hParent=hRoot;
		TCItem.item.pszText=Win32[i];
		TCItem.item.iImage=1;
		TCItem.item.iSelectedImage=0;
		TCItem.item.lParam=8;
		hCur=pTreeCtrl->InsertItem(&TCItem);
		for(j=0;j<5;j++)//
		{
			if(i==0&&j>2)
				break;
			TCItem.hParent=hCur;
			TCItem.item.pszText=Win32DrvSub[i][j];
			if(0==i)
				TCItem.item.lParam=j;
			else
				TCItem.item.lParam=j;
			pTreeCtrl->InsertItem(&TCItem);
		}
		pTreeCtrl->Expand(hCur,TVE_EXPAND);
	}
	pTreeCtrl->Expand(hRoot,TVE_EXPAND);


	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
