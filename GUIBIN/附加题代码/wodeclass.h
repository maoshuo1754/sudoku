#pragma once


// wodeclass �Ի���

class wodeclass : public CDialogEx
{
	DECLARE_DYNAMIC(wodeclass)

public:
	wodeclass(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~wodeclass();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
