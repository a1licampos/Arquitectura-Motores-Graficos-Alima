#pragma once
#include "Prerequisities.h"

//Call to the Class is begin used in cpp (Device)
class
Device;

class 
SamplerState{

public:
	SamplerState() = default;
	~SamplerState() {};

	// Create the sample state, allow us to modify the dimensions of the texture
	void
	init(Device device);

	void
	update();

	void
	render();

	void
	destroy();

public:
	ID3D11SamplerState* m_sampler = nullptr;

};
