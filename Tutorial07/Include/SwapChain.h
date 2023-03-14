#pragma once
#include "Prerequisities.h"

//Call to the Class is begin used in cpp (Device)
class
Device;

//Call to the Class is begin used in cpp (DeviceContext)
class
DeviceContext;

//Call to the Class is begin used in cpp (Window)
class
Window;

//Call to the Class is begin used in cpp (Texture)
class
Texture;

class SwapChain{

public:
	SwapChain() = default;
	~SwapChain() {};

	// Create Direct3D device
	void
	init(Device& device,
			 DeviceContext& deviceContext,
			 Texture& backBuffer,
			 Window window);

	void 
	update();

	void
	render();

	void
	destroy();

	//Present, that we present in the screen
	void
	present();


private:
	D3D_DRIVER_TYPE m_driverType = D3D_DRIVER_TYPE_NULL;
	D3D_FEATURE_LEVEL m_featureLevel = D3D_FEATURE_LEVEL_11_0;
	IDXGISwapChain* m_swapChain = nullptr;

};
