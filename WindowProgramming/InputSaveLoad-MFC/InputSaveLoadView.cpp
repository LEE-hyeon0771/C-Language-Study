﻿
// InputSaveLoadView.cpp: CInputSaveLoadView 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "InputSaveLoad.h"
#endif

#include "InputSaveLoadDoc.h"
#include "InputSaveLoadView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CInputSaveLoadView

IMPLEMENT_DYNCREATE(CInputSaveLoadView, CView)

BEGIN_MESSAGE_MAP(CInputSaveLoadView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CInputSaveLoadView 생성/소멸

CInputSaveLoadView::CInputSaveLoadView() noexcept
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CInputSaveLoadView::~CInputSaveLoadView()
{
}

BOOL CInputSaveLoadView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CInputSaveLoadView 그리기

void CInputSaveLoadView::OnDraw(CDC* pDC)
{
	CInputSaveLoadDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
	CFont font;
	font.CreateFont(30, 0, 0, 0, 0, pDoc->m_bltalic,
		pDoc->m_bUnderline, 0, 0, 0, 0, 0, 0, _T("궁서"));
	pDC->SelectObject(&font);

	CRect rect;
	GetClientRect(&rect);
	pDC->DrawText(pDoc->m_str.GetData(),
		pDoc->m_str.GetSize(), &rect, DT_LEFT);
}


// CInputSaveLoadView 인쇄

BOOL CInputSaveLoadView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CInputSaveLoadView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CInputSaveLoadView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CInputSaveLoadView 진단

#ifdef _DEBUG
void CInputSaveLoadView::AssertValid() const
{
	CView::AssertValid();
}

void CInputSaveLoadView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CInputSaveLoadDoc* CInputSaveLoadView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CInputSaveLoadDoc)));
	return (CInputSaveLoadDoc*)m_pDocument;
}
#endif //_DEBUG


// CInputSaveLoadView 메시지 처리기


void CInputSaveLoadView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	CInputSaveLoadDoc* pDoc = GetDocument();
	
	if (nChar == _T('\b')) {
		if (pDoc->m_str.GetSize() > 0)
			pDoc->m_str.RemoveAt(pDoc->m_str.GetSize() - 1);
	}
	else {
		pDoc->m_str.Add(nChar);
	}

	pDoc->SetModifiedFlag();

	Invalidate();

	CView::OnChar(nChar, nRepCnt, nFlags);
}
