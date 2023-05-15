
// ChildView.cpp: CChildView 클래스의 구현
//

#include "pch.h"
#include "framework.h"
#include "ColorSelect.h"
#include "ChildView.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChildView

CChildView::CChildView()
{
	On = TRUE;
}

CChildView::~CChildView()
{
}


BEGIN_MESSAGE_MAP(CChildView, CWnd)
	ON_WM_PAINT()
	ON_COMMAND(ID_COLOR_BLUE, &CChildView::OnColorBlue)
	ON_COMMAND(ID_COLOR_GREEN, &CChildView::OnColorGreen)
	ON_COMMAND(ID_COLOR_RED, &CChildView::OnColorRed)
	ON_COMMAND(ID_ONOFF, &CChildView::OnOnoff)
	ON_WM_ERASEBKGND()
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
	CFont font;
	font.CreatePointFont(300, _T("궁서"));
	dc.SelectObject(&font);
	dc.SetTextColor(m_color);

	CRect rect;
	GetClientRect(&rect);
	CString str = _T("메뉴 테스트");
	dc.DrawText(str, &rect, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	// 그리기 메시지에 대해서는 CWnd::OnPaint()를 호출하지 마십시오.
}



void CChildView::OnColorBlue()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	m_color = RGB(0, 0, 255);
	Invalidate();
}


void CChildView::OnColorGreen()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	m_color = RGB(0, 255, 0);
	Invalidate();
}


void CChildView::OnColorRed()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	m_color = RGB(255, 0, 0);
	Invalidate();
}



void CChildView::OnOnoff()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMainFrame* pFrame = (CMainFrame*)GetParent();
	if (pFrame == NULL)
		return;

	CMenu* pMenu = pFrame->GetMenu();
	if (pMenu == NULL)
		return;

	CString str;
	pMenu->GetMenuStringW(5, str, MF_BYPOSITION);

	if (str == _T("전원 끄기")) {
		pMenu->ModifyMenuW(5, MF_BYPOSITION, ID_ONOFF, _T("전원 켜기"));
		pFrame->DrawMenuBar();

		On = FALSE;
		Invalidate();
	}
	else {
		pMenu->ModifyMenuW(5, MF_BYPOSITION, ID_ONOFF, _T("전원 끄기"));
		pFrame->DrawMenuBar();

		On = TRUE;
		Invalidate();

	}
}


BOOL CChildView::OnEraseBkgnd(CDC* pDC)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	CRect rect;
	GetClientRect(&rect);

	pDC->FillSolidRect(&rect, On ? RGB(255, 255, 255) : RGB(200, 200, 200));

	return CWnd::OnEraseBkgnd(pDC);
}
