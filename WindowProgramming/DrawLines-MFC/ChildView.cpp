
// ChildView.cpp: CChildView 클래스의 구현
//
#define _USE_MATH_DEFINES
#include <cmath>
#include "pch.h"
#include "framework.h"
#include "DrawLines.h"
#include "ChildView.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChildView

CChildView::CChildView()
{
}

CChildView::~CChildView()
{
}


BEGIN_MESSAGE_MAP(CChildView, CWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()



// CChildView 메시지 처리기

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(nullptr, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), nullptr);

	return TRUE;
}

void CChildView::OnPaint() 
{
	CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.
	
	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
	
	// 그리기 메시지에 대해서는 CWnd::OnPaint()를 호출하지 마십시오.
	CRect rect;
	GetClientRect(&rect);

	dc.MoveTo(0, rect.bottom / 2);
	dc.LineTo(rect.right, rect.bottom / 2);
	dc.MoveTo(rect.right / 2, 0);
	dc.LineTo(rect.right / 2, rect.bottom);

	CArray<POINT, POINT&> carray;
	
	double x, y;
	for (x = 0; x <= rect.right; x+=0.1) {
		y = (rect.Height() / 2) - sin((x - rect.Width() / 2) / (16 * M_PI)) * (double)(rect.Height() / 2);
		POINT pt = { static_cast<int>(x), static_cast<int>(y) };
		carray.Add(pt);
	}
	dc.Polyline(carray.GetData(), carray.GetSize());
}

