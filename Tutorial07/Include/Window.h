#pragma once
#include <Windows.h>

class Window
{
public:
	Window();
	~Window();

	HRESULT init(HINSTANCE hInstance, int with, int heigh, int nCmdShow, WNDPROC a);

private:
	/*HWND g_hWnd;*/
	RECT g_rc;
	HINSTANCE g_hInst;

public:
	HWND g_hWnd;
};

