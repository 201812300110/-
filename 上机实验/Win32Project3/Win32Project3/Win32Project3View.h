
// Win32Project3View.h : CWin32Project3View ��Ľӿ�
//

#pragma once


class CWin32Project3View : public CView
{
protected: // �������л�����
	CWin32Project3View();
	DECLARE_DYNCREATE(CWin32Project3View)

// ����
public:
	CWin32Project3Doc* GetDocument() const;

	void OnLButtonDown(UINT nFlags, CPoint point);

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	void OnRButtonDown(UINT nFlags, CPoint point);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWin32Project3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Win32Project3View.cpp �еĵ��԰汾
inline CWin32Project3Doc* CWin32Project3View::GetDocument() const
   { return reinterpret_cast<CWin32Project3Doc*>(m_pDocument); }
#endif


// CWin32Project3View ��Ϣ�������
