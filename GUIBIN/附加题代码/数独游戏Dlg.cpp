
// 数独游戏Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "数独游戏.h"
#include "数独游戏Dlg.h"
#include "afxdialogex.h"
#include<time.h>
#include<stdlib.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

int init[9][9] =
{
	{ 5, 3, 4, 6, 7, 8, 9 ,1, 2 },
	{ 6, 7, 2, 1, 9, 5 ,3, 4, 8 },
	{ 1, 9, 8, 3, 4, 2, 5, 6, 7 },
	{ 8, 5, 9, 7, 6, 1, 4, 2, 3 },
	{ 4, 2, 6, 8, 5, 3, 7, 9, 1 },
	{ 7, 1, 3, 9, 2, 4, 8, 5, 6 },
	{ 9, 6, 1, 5, 3, 7, 2, 8, 4 },
	{ 2, 8, 7, 4, 1, 9, 6, 3, 5 },
	{ 3, 4, 5, 2, 8, 6, 1, 7, 9 },
};

void SwapRow(int a[][9],int i, int j)
{
	for (int k = 0; k < 9; k++)
	{
		int temp = a[i][k];
		a[i][k] = a[j][k];
		a[j][k] = temp;
	}
}

void SwapColumn(int a[][9], int i, int j)
{
	for (int k = 0; k < 9; k++)
	{
		int temp = a[k][i];
		a[k][i] = a[k][j];
		a[k][j] = temp;
	}
}

// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// C数独游戏Dlg 对话框



C数独游戏Dlg::C数独游戏Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MY_DIALOG, pParent)
	, sz1(0)
	, sz2(0)
	, sz3(0)
	, sz4(0)
	, sz5(0)
	, sz6(0)
	, sz7(0)
	, sz8(0)
	, sz9(0)
	, sz10(0)
	, sz11(0)
	, sz12(0)
	, sz13(0)
	, sz14(0)
	, sz15(0)
	, sz16(0)
	, sz17(0)
	, sz18(0)
	, sz19(0)
	, sz20(0)
	, sz21(0)
	, sz22(0)
	, sz23(0)
	, sz24(0)
	, sz25(0)
	, sz26(0)
	, sz27(0)
	, sz28(0)
	, sz29(0)
	, sz30(0)
	, sz31(0)
	, sz32(0)
	, sz33(0)
	, sz34(0)
	, sz35(0)
	, sz36(0)
	, sz37(0)
	, sz38(0)
	, sz39(0)
	, sz40(0)
	, sz41(0)
	, sz42(0)
	, sz43(0)
	, sz44(0)
	, sz45(0)
	, sz46(0)
	, sz47(0)
	, sz48(0)
	, sz49(0)
	, sz50(0)
	, sz51(0)
	, sz52(0)
	, sz53(0)
	, sz54(0)
	, sz55(0)
	, sz56(0)
	, sz57(0)
	, sz58(0)
	, sz59(0)
	, sz60(0)
	, sz61(0)
	, sz62(0)
	, sz63(0)
	, sz64(0)
	, sz65(0)
	, sz66(0)
	, sz67(0)
	, sz68(0)
	, sz69(0)
	, sz70(0)
	, sz71(0)
	, sz72(0)
	, sz73(0)
	, sz74(0)
	, sz75(0)
	, sz76(0)
	, sz77(0)
	, sz78(0)
	, sz79(0)
	, sz80(0)
	, sz81(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void C数独游戏Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, dsadsa, sz1);
	DDX_Text(pDX, IDC_EDIT2, sz2);
	DDX_Text(pDX, IDC_EDIT3, sz3);
	DDX_Text(pDX, IDC_EDIT4, sz4);
	DDX_Text(pDX, IDC_EDIT5, sz5);
	DDX_Text(pDX, IDC_EDIT6, sz6);
	DDX_Text(pDX, IDC_EDIT7, sz7);
	DDX_Text(pDX, IDC_EDIT8, sz8);
	DDX_Text(pDX, IDC_EDIT9, sz9);
	DDX_Text(pDX, IDC_EDIT10, sz10);
	DDX_Text(pDX, IDC_EDIT11, sz11);
	DDX_Text(pDX, IDC_EDIT12, sz12);
	DDX_Text(pDX, IDC_EDIT13, sz13);
	DDX_Text(pDX, IDC_EDIT14, sz14);
	DDX_Text(pDX, IDC_EDIT15, sz15);
	DDX_Text(pDX, IDC_EDIT16, sz16);
	DDX_Text(pDX, IDC_EDIT17, sz17);
	DDX_Text(pDX, IDC_EDIT18, sz18);
	DDX_Text(pDX, IDC_EDIT19, sz19);
	DDX_Text(pDX, IDC_EDIT20, sz20);
	DDX_Text(pDX, IDC_EDIT21, sz21);
	DDX_Text(pDX, IDC_EDIT22, sz22);
	DDX_Text(pDX, IDC_EDIT23, sz23);
	DDX_Text(pDX, IDC_EDIT24, sz24);
	DDX_Text(pDX, IDC_EDIT25, sz25);
	DDX_Text(pDX, IDC_EDIT26, sz26);
	DDX_Text(pDX, IDC_EDIT27, sz27);
	DDX_Text(pDX, IDC_EDIT28, sz28);
	DDX_Text(pDX, IDC_EDIT29, sz29);
	DDX_Text(pDX, IDC_EDIT30, sz30);
	DDX_Text(pDX, IDC_EDIT31, sz31);
	DDX_Text(pDX, IDC_EDIT32, sz32);
	DDX_Text(pDX, IDC_EDIT33, sz33);
	DDX_Text(pDX, IDC_EDIT34, sz34);
	DDX_Text(pDX, IDC_EDIT35, sz35);
	DDX_Text(pDX, IDC_EDIT36, sz36);
	DDX_Text(pDX, IDC_EDIT37, sz37);
	DDV_MinMaxInt(pDX, sz37, 1, 9);
	DDX_Text(pDX, IDC_EDIT38, sz38);
	DDX_Text(pDX, IDC_EDIT39, sz39);
	DDX_Text(pDX, IDC_EDIT40, sz40);
	DDX_Text(pDX, IDC_EDIT41, sz41);
	DDX_Text(pDX, IDC_EDIT42, sz42);
	DDX_Text(pDX, IDC_EDIT43, sz43);
	DDX_Text(pDX, IDC_EDIT44, sz44);
	DDX_Text(pDX, IDC_EDIT45, sz45);
	DDX_Text(pDX, IDC_EDIT46, sz46);
	DDX_Text(pDX, IDC_EDIT47, sz47);
	DDX_Text(pDX, IDC_EDIT48, sz48);
	DDX_Text(pDX, IDC_EDIT49, sz49);
	DDX_Text(pDX, IDC_EDIT50, sz50);
	DDX_Text(pDX, IDC_EDIT51, sz51);
	DDX_Text(pDX, IDC_EDIT52, sz52);
	DDX_Text(pDX, IDC_EDIT53, sz53);
	DDX_Text(pDX, IDC_EDIT54, sz54);
	DDX_Text(pDX, IDC_EDIT55, sz55);
	DDX_Text(pDX, IDC_EDIT56, sz56);
	DDX_Text(pDX, IDC_EDIT57, sz57);
	DDX_Text(pDX, IDC_EDIT58, sz58);
	DDX_Text(pDX, IDC_EDIT59, sz59);
	DDX_Text(pDX, IDC_EDIT60, sz60);
	DDX_Text(pDX, IDC_EDIT61, sz61);
	DDX_Text(pDX, IDC_EDIT62, sz62);
	DDX_Text(pDX, IDC_EDIT63, sz63);
	DDX_Text(pDX, IDC_EDIT64, sz64);
	DDX_Text(pDX, IDC_EDIT65, sz65);
	DDX_Text(pDX, IDC_EDIT66, sz66);
	DDX_Text(pDX, IDC_EDIT67, sz67);
	DDX_Text(pDX, IDC_EDIT68, sz68);
	DDX_Text(pDX, IDC_EDIT69, sz69);
	DDX_Text(pDX, IDC_EDIT70, sz70);
	DDX_Text(pDX, IDC_EDIT71, sz71);
	DDX_Text(pDX, IDC_EDIT72, sz72);
	DDX_Text(pDX, IDC_EDIT73, sz73);
	DDX_Text(pDX, IDC_EDIT74, sz74);
	DDX_Text(pDX, IDC_EDIT75, sz75);
	DDX_Text(pDX, IDC_EDIT76, sz76);
	DDX_Text(pDX, IDC_EDIT77, sz77);
	DDX_Text(pDX, IDC_EDIT78, sz78);
	DDX_Text(pDX, IDC_EDIT79, sz79);
	DDX_Text(pDX, IDC_EDIT80, sz80);
	DDX_Text(pDX, IDC_EDIT81, sz81);
}

BEGIN_MESSAGE_MAP(C数独游戏Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON2, &C数独游戏Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &C数独游戏Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// C数独游戏Dlg 消息处理程序

BOOL C数独游戏Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void C数独游戏Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void C数独游戏Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR C数独游戏Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void C数独游戏Dlg::OnBnClickedButton2()
{
	srand((int)time(0));
	

	for (int i = 0; i < 20; i++)
	{
		SwapRow(init, rand() % 3, rand() % 3);
		SwapRow(init, rand() % 3+3, rand() % 3+3);
		SwapRow(init, rand() % 3+6, rand() % 3+6);
		SwapColumn(init, rand() % 3, rand() % 3);
		SwapColumn(init, rand() % 3 + 3, rand() % 3 + 3);
		SwapColumn(init, rand() % 3 + 6, rand() % 3 + 6);
	}

	
	sz1 = init[0][0];
	sz2 = init[0][1];
	sz3 = init[0][2];
	sz10 = init[1][0];
	sz11 = init[1][1];
	sz12 = init[1][2];
	sz19 = init[2][0];
	sz20 = init[2][1];
	sz21 = init[2][2];
	for (int i = 0; i < 5; i++)
	{
		switch (rand() % 9)
		{
		case 0:sz1 = 0; break;
		case 1:sz2 = 0; break;
		case 2:sz3 = 0; break;
		case 3:sz10 = 0; break;
		case 4:sz11 = 0; break;
		case 5:sz12 = 0; break;
		case 6:sz19 = 0; break;
		case 7:sz20 = 0; break;
		case 8:sz21 = 0; break;
		}
	}
	

	sz4 = init[0][3];
	sz5 = init[0][4];
	sz6 = init[0][5];
	sz13 = init[1][3];
	sz14 = init[1][4];
	sz15 = init[1][5];
	sz22 = init[2][3];
	sz23 = init[2][4];
	sz24 = init[2][5];

	for (int i = 0; i < 5; i++)
	{
		switch (rand() % 9)
		{
		case 0:sz4 = 0; break;
		case 1:sz5 = 0; break;
		case 2:sz6 = 0; break;
		case 3:sz13 = 0; break;
		case 4:sz14 = 0; break;
		case 5:sz15 = 0; break;
		case 6:sz22 = 0; break;
		case 7:sz23 = 0; break;
		case 8:sz24 = 0; break;
		}
	}

	sz7 = init[0][6];
	sz8 = init[0][7];
	sz9 = init[0][8];
	sz16 = init[1][6];
	sz17 = init[1][7];
	sz18 = init[1][8];
	sz25 = init[2][6];
	sz26 = init[2][7];
	sz27 = init[2][8];
	for (int i = 0; i < 5; i++)
	{
		switch (rand() % 9)
		{
		case 0:sz7 = 0; break;
		case 1:sz8 = 0; break;
		case 2:sz9 = 0; break;
		case 3:sz16 = 0; break;
		case 4:sz17 = 0; break;
		case 5:sz18 = 0; break;
		case 6:sz25 = 0; break;
		case 7:sz26 = 0; break;
		case 8:sz27 = 0; break;
		}
	}
	
	sz28 = init[3][0];
	sz29 = init[3][1];
	sz30 = init[3][2];
	sz37 = init[4][0];
	sz38 = init[4][1];
	sz39 = init[4][2];
	sz46 = init[5][0];
	sz47 = init[5][1];
	sz48 = init[5][2];
	for (int i = 0; i < 5; i++)
	{
		switch (rand() % 9)
		{
		case 0:sz28 = 0; break;
		case 1:sz29 = 0; break;
		case 2:sz30 = 0; break;
		case 3:sz37 = 0; break;
		case 4:sz38 = 0; break;
		case 5:sz39 = 0; break;
		case 6:sz46 = 0; break;
		case 7:sz47 = 0; break;
		case 8:sz48 = 0; break;
		}
	}

	sz31 = init[3][3];
	sz32 = init[3][4];
	sz33 = init[3][5];
	sz40 = init[4][3];
	sz41 = init[4][4];
	sz42 = init[4][5];
	sz49 = init[5][3];
	sz50 = init[5][4];
	sz51 = init[5][5];
	for (int i = 0; i <5; i++)
	{
		switch (rand() % 9)
		{
		case 0:sz31 = 0; break;
		case 1:sz32 = 0; break;
		case 2:sz33 = 0; break;
		case 3:sz40 = 0; break;
		case 4:sz41 = 0; break;
		case 5:sz42 = 0; break;
		case 6:sz49 = 0; break;
		case 7:sz50 = 0; break;
		case 8:sz51 = 0; break;
		}
	}

	sz34 = init[3][6];
	sz35 = init[3][7];
	sz36 = init[3][8];
	sz43 = init[4][6];
	sz44 = init[4][7];
	sz45 = init[4][8];
	sz52 = init[5][6];
	sz53 = init[5][7];
	sz54 = init[5][8];
	for (int i = 0; i <5; i++)
	{
		switch (rand() % 9)
		{
		case 0:sz34 = 0; break;
		case 1:sz35 = 0; break;
		case 2:sz36 = 0; break;
		case 3:sz43 = 0; break;
		case 4:sz44 = 0; break;
		case 5:sz45 = 0; break;
		case 6:sz52 = 0; break;
		case 7:sz53 = 0; break;
		case 8:sz54 = 0; break;
		}
	}
	
	
	sz55 = init[6][0];
	sz56 = init[6][1];
	sz57 = init[6][2];
	sz64 = init[7][0];
	sz65 = init[7][1];
	sz66 = init[7][2];
	sz73 = init[8][0];
	sz74 = init[8][1];
	sz75 = init[8][2];
	for (int i = 0; i < 5; i++)
	{
		switch (rand() % 9)
		{
		case 0:sz55 = 0; break;
		case 1:sz56 = 0; break;
		case 2:sz57 = 0; break;
		case 3:sz64 = 0; break;
		case 4:sz65 = 0; break;
		case 5:sz66 = 0; break;
		case 6:sz73 = 0; break;
		case 7:sz74 = 0; break;
		case 8:sz75 = 0; break;
		}
	}

	sz58 = init[6][3];
	sz59 = init[6][4];
	sz60 = init[6][5];
	sz67 = init[7][3];
	sz68 = init[7][4];
	sz69 = init[7][5];
	sz76 = init[8][3];
	sz77 = init[8][4];
	sz78 = init[8][5];
	for (int i = 0; i < 5; i++)
	{
		switch (rand() % 9)
		{
		case 0:sz58 = 0; break;
		case 1:sz59= 0; break;
		case 2:sz60 = 0; break;
		case 3:sz67 = 0; break;
		case 4:sz68 = 0; break;
		case 5:sz69 = 0; break;
		case 6:sz76 = 0; break;
		case 7:sz77 = 0; break;
		case 8:sz78 = 0; break;
		}
	}

	sz61 = init[6][6];
	sz62 = init[6][7];
	sz63 = init[6][8];
	sz70 = init[7][6];
	sz71 = init[7][7];
	sz72 = init[7][8];
	sz79 = init[8][6];
	sz80 = init[8][7];
	sz81 = init[8][8];
	for (int i = 0; i < 5; i++)
	{
		switch (rand() % 9)
		{
		case 0:sz61 = 0; break;
		case 1:sz62 = 0; break;
		case 2:sz63 = 0; break;
		case 3:sz70 = 0; break;
		case 4:sz71 = 0; break;
		case 5:sz72 = 0; break;
		case 6:sz79 = 0; break;
		case 7:sz80 = 0; break;
		case 8:sz81 = 0; break;
		}
	}
	
	
	
	
	
	UpdateData(FALSE);



	
	
}




void C数独游戏Dlg::OnBnClickedButton1()
{
	UpdateData(TRUE);
	int judge = 0;
	if (sz1 != init[0][0]) judge = 2;
	if (sz2 != init[0][1]) judge = 2;
	if (sz3 != init[0][2]) judge = 2;
	if (sz4 != init[0][3]) judge = 2;
	if (sz5 != init[0][4]) judge = 2;
	if (sz6 != init[0][5]) judge = 2;
	if (sz7 != init[0][6]) judge = 2;
	if (sz8 != init[0][7]) judge = 2;
	if (sz9 != init[0][8]) judge = 2;
	if (sz10 != init[1][0]) judge = 2;
	if (sz11 != init[1][1]) judge = 2;
	if (sz12 != init[1][2]) judge = 2;
	if (sz13 != init[1][3]) judge = 2;
	if (sz14 != init[1][4]) judge = 2;
	if (sz15 != init[1][5]) judge = 2;
	if (sz16 != init[1][6]) judge = 2;
	if (sz17 != init[1][7]) judge = 2;
	if (sz18 != init[1][8]) judge = 2;
	if (sz19 != init[2][0]) judge = 2;
	if (sz20 != init[2][1]) judge = 2;
	if (sz21 != init[2][2]) judge = 2;
	if (sz22 != init[2][3]) judge = 2;
	if (sz23 != init[2][4]) judge = 2;
	if (sz24 != init[2][5]) judge = 2;
	if (sz25 != init[2][6]) judge = 2;
	if (sz26 != init[2][7]) judge = 2;
	if (sz27 != init[2][8]) judge = 2;
	if (sz28 != init[3][0]) judge = 2;
	if (sz29 != init[3][1]) judge = 2;
	if (sz30 != init[3][2]) judge = 2;
	if (sz31 != init[3][3]) judge = 2;
	if (sz32 != init[3][4]) judge = 2;
	if (sz33 != init[3][5]) judge = 2;
	if (sz34 != init[3][6]) judge = 2;
	if (sz35 != init[3][7]) judge = 2;
	if (sz36 != init[3][8]) judge = 2;
	if (sz37 != init[4][0]) judge = 2;
	if (sz38 != init[4][1]) judge = 2;
	if (sz39 != init[4][2]) judge = 2;
	if (sz40 != init[4][3]) judge = 2;
	if (sz41 != init[4][4]) judge = 2;
	if (sz42 != init[4][5]) judge = 2;
	if (sz43 != init[4][6]) judge = 2;
	if (sz44 != init[4][7]) judge = 2;
	if (sz45 != init[4][8]) judge = 2;
	if (sz46 != init[5][0]) judge = 2;
	if (sz47 != init[5][1]) judge = 2;
	if (sz48 != init[5][2]) judge = 2;
	if (sz49 != init[5][3]) judge = 2;
	if (sz50 != init[5][4]) judge = 2;
	if (sz51 != init[5][5]) judge = 2;
	if (sz52 != init[5][6]) judge = 2;
	if (sz53 != init[5][7]) judge = 2;
	if (sz54 != init[5][8]) judge = 2;
	if (sz55 != init[6][0]) judge = 2;
	if (sz56 != init[6][1]) judge = 2;
	if (sz57 != init[6][2]) judge = 2;
	if (sz58 != init[6][3]) judge = 2;
	if (sz59 != init[6][4]) judge = 2;
	if (sz60 != init[6][5]) judge = 2;
	if (sz61 != init[6][6]) judge = 2;
	if (sz62 != init[6][7]) judge = 2;
	if (sz63 != init[6][8]) judge = 2;
	if (sz64 != init[7][0]) judge = 2;
	if (sz65 != init[7][1]) judge = 2;
	if (sz66 != init[7][2]) judge = 2;
	if (sz67 != init[7][3]) judge = 2;
	if (sz68 != init[7][4]) judge = 2;
	if (sz69 != init[7][5]) judge = 2;
	if (sz70 != init[7][6]) judge = 2;
	if (sz71 != init[7][7]) judge = 2;
	if (sz72 != init[7][8]) judge = 2;
	if (sz73 != init[8][0]) judge = 2;
	if (sz74 != init[8][1]) judge = 2;
	if (sz75 != init[8][2]) judge = 2;
	if (sz76 != init[8][3]) judge = 2;
	if (sz77 != init[8][4]) judge = 2;
	if (sz78 != init[8][5]) judge = 2;
	if (sz79 != init[8][6]) judge = 2;
	if (sz80 != init[8][7]) judge = 2;
	if (sz81 != init[8][8]) judge = 2;

	if (sz1 == 0) judge = 1;
	if (sz2 == 0) judge = 1;
	if (sz3 == 0) judge = 1;
	if (sz4 == 0) judge = 1;
	if (sz5 == 0) judge = 1;
	if (sz6 == 0) judge = 1;
	if (sz7 == 0) judge = 1;
	if (sz8 == 0) judge = 1;
	if (sz9 == 0) judge = 1;
	if (sz10 == 0) judge = 1;
	if (sz11 == 0) judge = 1;
	if (sz12 == 0) judge = 1;
	if (sz13 == 0) judge = 1;
	if (sz14 == 0) judge = 1;
	if (sz15 == 0) judge = 1;
	if (sz16 == 0) judge = 1;
	if (sz17 == 0) judge = 1;
	if (sz18 == 0) judge = 1;
	if (sz19 == 0) judge = 1;
	if (sz20 == 0) judge = 1;
	if (sz21 == 0) judge = 1;
	if (sz22 == 0) judge = 1;
	if (sz23 == 0) judge = 1;
	if (sz24 == 0) judge = 1;
	if (sz25 == 0) judge = 1;
	if (sz26 == 0) judge = 1;
	if (sz27 == 0) judge = 1;
	if (sz28 == 0) judge = 1;
	if (sz29 == 0) judge = 1;
	if (sz30 == 0) judge = 1;
	if (sz31 == 0) judge = 1;
	if (sz32 == 0) judge = 1;
	if (sz33 == 0) judge = 1;
	if (sz34 == 0) judge = 1;
	if (sz35 == 0) judge = 1;
	if (sz36 == 0) judge = 1;
	if (sz37 == 0) judge = 1;
	if (sz38 == 0) judge = 1;
	if (sz39 == 0) judge = 1;
	if (sz40 == 0) judge = 1;
	if (sz41 == 0) judge = 1;
	if (sz42 == 0) judge = 1;
	if (sz43 == 0) judge = 1;
	if (sz44 == 0) judge = 1;
	if (sz45 == 0) judge = 1;
	if (sz46 == 0) judge = 1;
	if (sz47 == 0) judge = 1;
	if (sz48 == 0) judge = 1;
	if (sz49 == 0) judge = 1;
	if (sz50 == 0) judge = 1;
	if (sz51 == 0) judge = 1;
	if (sz52 == 0) judge = 1;
	if (sz53 == 0) judge = 1;
	if (sz54 == 0) judge = 1;
	if (sz55 == 0) judge = 1;
	if (sz56 == 0) judge = 1;
	if (sz57 == 0) judge = 1;
	if (sz58 == 0) judge = 1;
	if (sz59 == 0) judge = 1;
	if (sz60 == 0) judge = 1;
	if (sz61 == 0) judge = 1;
	if (sz62 == 0) judge = 1;
	if (sz63 == 0) judge = 1;
	if (sz64 == 0) judge = 1;
	if (sz65 == 0) judge = 1;
	if (sz66 == 0) judge = 1;
	if (sz67 == 0) judge = 1;
	if (sz68 == 0) judge = 1;
	if (sz69 == 0) judge = 1;
	if (sz70 == 0) judge = 1;
	if (sz71 == 0) judge = 1;
	if (sz72 == 0) judge = 1;
	if (sz73 == 0) judge = 1;
	if (sz74 == 0) judge = 1;
	if (sz75 == 0) judge = 1;
	if (sz76 == 0) judge = 1;
	if (sz77 == 0) judge = 1;
	if (sz78 == 0) judge = 1;
	if (sz79 == 0) judge = 1;
	if (sz80 == 0) judge = 1;
	if (sz81 == 0) judge = 1;

	if (judge == 1)
	{
		MessageBox(TEXT("没有填完"), TEXT("警告"), 0);
	}
	else 
		if (judge == 2)
		{
			MessageBox(TEXT("答案错误"), TEXT("警告"), 0);
		}
		else
		{
			MessageBox(TEXT("恭喜你，回答正确"), TEXT("提示"), 0);
		}
	
}
