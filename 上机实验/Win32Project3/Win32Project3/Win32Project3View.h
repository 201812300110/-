
// Win32Project3View.h : CWin32Project3View 类的接口
//

#pragma once


class CWin32Project3View : public CView
{
protected: // 仅从序列化创建
	CWin32Project3View();
	DECLARE_DYNCREATE(CWin32Project3View)

// 特性
public:
	CWin32Project3Doc* GetDocument() const;

	void OnLButtonDown(UINT nFlags, CPoint point);

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	void OnRButtonDown(UINT nFlags, CPoint point);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWin32Project3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Win32Project3View.cpp 中的调试版本
inline CWin32Project3Doc* CWin32Project3View::GetDocument() const
   { return reinterpret_cast<CWin32Project3Doc*>(m_pDocument); }
#endif


// CWin32Project3View 消息处理程序
