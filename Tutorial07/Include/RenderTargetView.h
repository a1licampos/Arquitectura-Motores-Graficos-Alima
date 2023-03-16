#include "Prerequisities.h"
#pragma once

//This is forward declaration from the (Device) class
class
Device;
//This is forward declaration from the (Texture) class
class
Texture;

class 
RenderTargetView{
public:
	RenderTargetView() = default;
	~RenderTargetView() {};

	/* 
	* Create the Render Target View for accessing resource data, 
	* it needs a device & backBuffer can't be null
	* 
	* device: Reference to call method CreateRenderTargetView
	* 
	* backBuffer: is a surface or texture created as a render target
	* 
	* Format: Give the desc.Formt of Render target view desc
	*/
	void
	init(Device device, Texture backBuffer, DXGI_FORMAT Format);

	void
	update();

	void
	render();

	/* 
	* This function releases the pointer m_renderTargetView and sets it equal to NULL.
	*/
	void
	destroy();

public:
	/*
	* A render-target-view interface identifies the render-target subresources that 
	* can be accessed during rendering.
	*/
	ID3D11RenderTargetView* m_renderTargetView = nullptr;

};

