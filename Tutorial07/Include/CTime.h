#pragma once
#include <Windows.h>

class 
CTime{
public:
	CTime();
	~CTime();

	//initialization functions (m_iLastTime & m_iTimerFrequency)
	void 
	init();

	//We are updating the time
	void 
	update();

	void 
	render();

	void 
	destroy();

private:
	LARGE_INTEGER m_iCurrentTime;
	LARGE_INTEGER m_iLastTime;
	LARGE_INTEGER m_iTimerFrequency;

public:
	float m_fDeltaTime;
};

