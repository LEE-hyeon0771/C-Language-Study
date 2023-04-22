
// ChildView.cpp: CChildView 클래스의 구현
//

#include "pch.h"
#include "framework.h"
#include "Regions.h"
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
	CRgn rgn1, rgn2, rgn3;
	rgn1.CreateRectRgn(0, 0, 1, 1);
	rgn2.CreateRectRgn(10, 10, 100, 100);
	rgn3.CreateEllipticRgn(50, 50, 200, 200);
	rgn1.CombineRgn(&rgn2, &rgn3, RGN_XOR);
	CBrush brush1(RGB(0, 0, 255));
	dc.FillRgn(&rgn1, &brush1);
	rgn1.CombineRgn(&rgn2, &rgn3, RGN_AND);
	CBrush brush2(RGB(255, 0, 0));
	dc.FillRgn(&rgn1, &brush2);
}

