#include "Window.h"
#include "Prerequisities.h"

Window::Window()
{
	g_hWnd = nullptr;
	g_rc;
	g_hInst;
}

Window::~Window()
{
}

HRESULT Window::init(HINSTANCE hInstance, int with, int heigh, int nCmdShow, WNDPROC a) {

    // Register class
    WNDCLASSEX wcex;
    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = a;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    /*wcex.hIcon = LoadIcon(hInstance, (LPCTSTR)IDI_TUTORIAL1);*/
    wcex.hIcon = NULL;
    wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = nullptr;
    wcex.lpszClassName = "TutorialWindowClass";
    /*wcex.hIconSm = LoadIcon(wcex.hInstance, (LPCTSTR)IDI_TUTORIAL1);*/
    wcex.hIconSm = NULL;
    if (!RegisterClassEx(&wcex))
        return E_FAIL;

	g_hInst = hInstance;
	g_rc = { 0, 0, with, heigh };
	AdjustWindowRect(&g_rc, WS_OVERLAPPEDWINDOW, FALSE);

	g_hWnd = CreateWindow("TutorialWindowClass", "Direct3D 11 Tutorial 7", WS_OVERLAPPEDWINDOW,
						 CW_USEDEFAULT, CW_USEDEFAULT, g_rc.right - g_rc.left, g_rc.bottom - g_rc.top, 
						 nullptr, nullptr, g_hInst,
						 nullptr);

    if (!g_hWnd)
        return E_FAIL;

    ShowWindow(g_hWnd, nCmdShow);

    return S_OK;
}