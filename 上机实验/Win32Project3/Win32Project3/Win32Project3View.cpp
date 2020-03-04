
// Win32Project3View.cpp : CWin32Project3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CWin32Project3View ����/����

CWin32Project3View::CWin32Project3View()
{
	// TODO: �ڴ˴���ӹ������

}

CWin32Project3View::~CWin32Project3View()
{
}

BOOL CWin32Project3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWin32Project3View ����

void CWin32Project3View::OnDraw(CDC* pDC)
{
	CWin32Project3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	//��һ��  CString s = _T("����***");
	//��һ��  pDC->TextOutW(100,100,s);
	/*�ڶ���*/ pDC->TextOutW(100, 100,pDoc->s);
	CString s1;
	s1.Format(_T("%d"), pDoc->a);
	pDC->TextOutW(200, 200, s1);
	
}


// CWin32Project3View ���

#ifdef _DEBUG
void CWin32Project3View::AssertValid() const
{
	CView::AssertValid();
}

void CWin32Project3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWin32Project3Doc* CWin32Project3View::GetDocument() const // �ǵ��԰汾��������
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

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDoc->count += 1;
	CString ss;
	CClientDC dc(this);
	ss.Format(_T("%d"), pDoc->count);
	dc.TextOutW(400, 200, ss);
	CView::OnLButtonDown(nFlags, point);
}

