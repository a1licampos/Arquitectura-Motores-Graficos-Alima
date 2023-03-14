#include "Prerequisities.h"
#pragma once

//Call to the Class is begin used in cpp (Device)
class
Device;
//Call to the Class is begin used in cpp (Texture)
class
Texture;

class 
RenderTargetView{
public:
	RenderTargetView() = default;
	~RenderTargetView() {};

	//A render-target-view interface identifies the render-target subresources that 
	//can be accessed during rendering.
	//Create the Render Target View, it needs a device & backBuffer
	void
	init(Device device, Texture backBuffer, DXGI_FORMAT Format);

	void
	update();

	void
	render();

	void
	destroy();

public:
	ID3D11RenderTargetView* m_renderTargetView = nullptr;

};

