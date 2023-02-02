#include "Time.h"

Time::Time()
{
	m_iCurrentTime;
	m_iLastTime;
	m_iTimerFrequency;
}

Time::~Time()
{
}

void Time::init() //Funciones de inicializacion
{
	//Timer se ajuste a los frames de nuestra pantalla
	QueryPerformanceCounter(&m_iLastTime);
	QueryPerformanceFrequency(&m_iTimerFrequency);
}

void Time::update()
{
	QueryPerformanceCounter(&m_iCurrentTime);	//Lista del performance de nuestra computadora
	m_fDeltaTime = (m_iCurrentTime.QuadPart - m_iLastTime.QuadPart) / (float)m_iTimerFrequency.QuadPart;
	m_iLastTime = m_iCurrentTime;
	m_fDeltaTime = min(m_fDeltaTime, 0.1f);
}

void Time::render()
{
}

void Time::destroy()
{
}
