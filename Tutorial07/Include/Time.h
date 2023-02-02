#include <Windows.h>
#pragma once

class Time
{
public:
	Time();
	~Time();

	void init();
	void update();
	void render();
	void destroy();

private:
	LARGE_INTEGER m_iCurrentTime;
	LARGE_INTEGER m_iLastTime;
	LARGE_INTEGER m_iTimerFrequency;

public:
	float m_fDeltaTime;
};

