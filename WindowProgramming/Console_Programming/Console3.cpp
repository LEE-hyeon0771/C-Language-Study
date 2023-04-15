﻿// Console3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include "framework.h"
#include "Console3.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 유일한 애플리케이션 개체입니다.

CWinApp theApp;

using namespace std;

int main()
{
    int nRetCode = 0;

    HMODULE hModule = ::GetModuleHandle(nullptr);

    if (hModule != nullptr)
    {
        // MFC를 초기화합니다. 초기화하지 못한 경우 오류를 인쇄합니다.
        if (!AfxWinInit(hModule, nullptr, ::GetCommandLine(), 0))
        {
            // TODO: 여기에 애플리케이션 동작을 코딩합니다.
            wprintf(L"심각한 오류: MFC 초기화 실패\n");
            nRetCode = 1;
        }
        else
        {
            // TODO: 여기에 애플리케이션 동작을 코딩합니다.
            _tsetlocale(LC_ALL, _T(""));
            TCHAR* szFruits[] = { 
                _T("사과"), _T("딸기"), _T("포도"), _T("오렌지"), _T("자두") 
            };
            CStringList list;
            for (int i = 0; i < 5; i++) {
                list.AddTail(szFruits[i]);
            }

            POSITION pos = list.GetHeadPosition();
            while (pos != NULL) {
                CString str = list.GetNext(pos);
                _tprintf(_T("%s"), (LPCTSTR)str);
            }
            _tprintf(_T("\n"));

            pos = list.GetTailPosition();
            while (pos != NULL) {
                CString str = list.GetPrev(pos);
                _tprintf(_T("%s"), (LPCTSTR)str);
            }
            _tprintf(_T("\n"));

            pos = list.Find(_T("포도"));
            list.InsertBefore(pos, _T("살구"));
            list.InsertAfter(pos, _T("바나나"));
            list.RemoveAt(pos);

            pos = list.GetHeadPosition();
            while (pos != NULL) {
                CString str = list.GetNext(pos);
                _tprintf(_T("%s"), (LPCTSTR)str);
            }
            _tprintf(_T("\n"));
        }
    }
    else
    {
        // TODO: 오류 코드를 필요에 따라 수정합니다.
        wprintf(L"심각한 오류: GetModuleHandle 실패\n");
        nRetCode = 1;
    }

    return nRetCode;
}
