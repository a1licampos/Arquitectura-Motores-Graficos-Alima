#pragma once
#include "Prerequisities.h"

//Call to the Class is begin used in cpp (Device)
class 
Device;

class 
DepthStencilView{
public:
	DepthStencilView() = default;
	~DepthStencilView(){SAFE_RELEASE(m_pDepthStencilView) };

	//Create the depth stencil view
	void
	init(Device device, 
	     ID3D11Resource* depthStencil, 
	     DXGI_FORMAT Format);

	void
	update();

	void
	render();

	//BUG: it's making a breakpoint error (WARNING)
	void
	destroy();

public:
	ID3D11DepthStencilView* m_pDepthStencilView = nullptr;

};

