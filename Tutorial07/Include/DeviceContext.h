#include "Prerequisities.h"
#pragma once

class 
DeviceContext{
public:
	DeviceContext() = default;
	~DeviceContext() {SAFE_RELEASE(m_deviceContext) };

	void
		init();

	void
		update();

	void
		render();

	void
		destroy();

	void 
		DrawIndexed(unsigned int IndexCount,
								unsigned int StartIndexLocation,
								unsigned int BaseVertexLocation);

	void PSSetSamplers(unsigned int StartSlot,
										 unsigned int NumSamplers,
										 ID3D11SamplerState* const* ppSamplers);

	void PSSetShaderResources(unsigned int StartSlot,
														unsigned int NumViews,
														ID3D11ShaderResourceView* const* ppShaderResourceViews);

	void PSSetConstantBuffers(unsigned int StartSlot,
														unsigned int NumBuffers,
														ID3D11Buffer *const *ppConstantBuffers);
public:
	ID3D11DeviceContext* m_deviceContext = nullptr;
};

