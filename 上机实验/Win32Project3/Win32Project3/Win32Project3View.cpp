
// Win32Project3View.cpp : CWin32Project3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Win32Project3.h"
#endif

#include "Win32Project3Doc.h"
#include "Win32Project3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWin32Project3View

IMPLEMENT_DYNCREATE(CWin32Project3View, CView)

BEGIN_MESSAGE_MAP(CWin32Project3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWin32Project3View 构造/析构

CWin32Project3View::CWin32Project3View()
{
	// TODO: 在此处添加构造代码

}

CWin32Project3View::~CWin32Project3View()
{
}

BOOL CWin32Project3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWin32Project3View 绘制

void CWin32Project3View::OnDraw(CDC* pDC)
{
	CWin32Project3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	//第一个  CString s = _T("我是***");
	//第一个  pDC->TextOutW(100,100,s);
	/*第二个*/ pDC->TextOutW(100, 100,pDoc->s);
	CString s1;
	s1.Format(_T("%d"), pDoc->a);
	pDC->TextOutW(200, 200, s1);
	
}


// CWin32Project3View 诊断

#ifdef _DEBUG
void CWin32Project3View::AssertValid() const
{
	CView::AssertValid();
}

void CWin32Project3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWin32Project3Doc* CWin32Project3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWin32Project3Doc)));
	return (CWin32Project3Doc*)m_pDocument;
}
#endif //_DEBUG


void CWin32Project3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	CWin32Project3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDoc->count += 1;
	CString ss;
	CClientDC dc(this);
	ss.Format(_T("%d"), pDoc->count);
	dc.TextOutW(400, 200, ss);
	CView::OnLButtonDown(nFlags, point);
}

