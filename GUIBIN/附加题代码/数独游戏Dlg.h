
// 数独游戏Dlg.h : 头文件
//

#pragma once


// C数独游戏Dlg 对话框
class C数独游戏Dlg : public CDialogEx
{
// 构造
public:
	C数独游戏Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int sz1;
	int sz2;
	int sz3;
	int sz4;
	int sz5;
	int sz6;
	int sz7;
	int sz8;
	int sz9;
	int sz10;
	int sz11;
	int sz12;
	int sz13;
	int sz14;
	int sz15;
	int sz16;
	int sz17;
	int sz18;
	int sz19;
	int sz20;
	int sz21;
	int sz22;
	int sz23;
	int sz24;
	int sz25;
	int sz26;
	int sz27;
	int sz28;
	int sz29;
	int sz30;
	int sz31;
	int sz32;
	int sz33;
	int sz34;
	int sz35;
	int sz36;
	int sz37;
	int sz38;
	int sz39;
	int sz40;
	int sz41;
	int sz42;
	int sz43;
	int sz44;
	int sz45;
	int sz46;
	int sz47;
	int sz48;
	int sz49;
	int sz50;
	int sz51;
	int sz52;
	int sz53;
	int sz54;
	int sz55;
	int sz56;
	int sz57;
	int sz58;
	int sz59;
	int sz60;
	int sz61;
	int sz62;
	int sz63;
	int sz64;
	int sz65;
	int sz66;
	int sz67;
	int sz68;
	int sz69;
	int sz70;
	int sz71;
	int sz72;
	int sz73;
	int sz74;
	int sz75;
	int sz76;
	int sz77;
	int sz78;
	int sz79;
	int sz80;
	int sz81;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
};
