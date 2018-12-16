// wodeclass.cpp : 实现文件
//

#include "stdafx.h"
#include "数独游戏.h"
#include "wodeclass.h"
#include "afxdialogex.h"


// wodeclass 对话框

IMPLEMENT_DYNAMIC(wodeclass, CDialogEx)

wodeclass::wodeclass(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MY_DIALOG, pParent)
{
	
	int init[81] =
	{
		3 ,2 ,1 ,6, 5, 4, 7, 9, 8 ,
		6, 5, 4, 9, 8, 7, 1, 3, 2 ,
		9, 8, 7, 3 ,2 ,1 ,4 ,6 ,5 ,
		7, 9, 8 ,4 ,1 ,2 ,3 ,5 ,6,
		5, 6, 3, 7, 9, 8, 2 ,4 ,1 ,
		4, 1 ,2, 5, 6, 3 ,8, 7 ,9 ,
		2 ,4 ,9 ,8 ,7 ,5, 6, 1, 3 ,
		1, 3, 5 ,2 ,4 ,6, 9, 8, 7 ,
		8, 7, 6, 1 ,3 ,9, 5, 2, 4
	};
}


wodeclass::~wodeclass()
{
}

void wodeclass::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(wodeclass, CDialogEx)
END_MESSAGE_MAP()


// wodeclass 消息处理程序
