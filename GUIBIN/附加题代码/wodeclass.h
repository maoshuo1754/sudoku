#pragma once


// wodeclass 对话框

class wodeclass : public CDialogEx
{
	DECLARE_DYNAMIC(wodeclass)

public:
	wodeclass(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~wodeclass();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
