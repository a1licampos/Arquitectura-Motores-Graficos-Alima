#pragma once
#include "Prerequisities.h"
#include "Commons.h"

class 
Transform{
public:
	Transform() = default;
	~Transform() {};

	//Inicializamos el transform 
	//(variables: escala, rotaci�n, velocidad y posici�n)
	void
	init();

	void
	update();

	void
	render();

	void
	destroy();

public:
	Vector3 m_v3Position;
	//Vector de escala y rotaci�n
	float		m_fScaleNum;
	float		m_fRotateNum;
	float		m_fSpeed;
};
