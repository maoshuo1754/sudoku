
// ������Ϸ.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C������ϷApp: 
// �йش����ʵ�֣������ ������Ϸ.cpp
//

class C������ϷApp : public CWinApp
{
public:
	C������ϷApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern C������ϷApp theApp;
