#pragma once
#include "Prerequisities.h"
#include "Commons.h"

class 
Transform{
public:
	Transform() = default;
	~Transform() {};

	//Inicializamos el transform 
	//(variables: escala, rotación, velocidad y posición)
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
	float		m_fScaleNum;
	float		m_fRotateNum;
	float		m_fSpeed;
};
