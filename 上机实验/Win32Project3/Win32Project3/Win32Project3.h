
// Win32Project3.h : Win32Project3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWin32Project3App:
// �йش����ʵ�֣������ Win32Project3.cpp
//

class CWin32Project3App : public CWinApp
{
public:
	CWin32Project3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWin32Project3App theApp;
