#include "DeviceContext.h"

void 
DeviceContext::init() {
}

void DeviceContext::update() {
}

void DeviceContext::render() {
}

void DeviceContext::destroy() {
	m_deviceContext->ClearState();
}

void
DeviceContext::DrawIndexed(unsigned int IndexCount,
													 unsigned int StartIndexLocation,
													 unsigned int BaseVertexLocation) {
	m_deviceContext->DrawIndexed(IndexCount, StartIndexLocation, BaseVertexLocation);
}

void 
DeviceContext::PSSetSamplers(unsigned int StartSlot,
														 unsigned int NumSamplers,
														 ID3D11SamplerState* const* ppSamplers){
	m_deviceContext->PSSetSamplers(StartSlot, NumSamplers, ppSamplers);
}

void DeviceContext::PSSetShaderResources(unsigned int StartSlot,
																				 unsigned int NumViews,
																				 ID3D11ShaderResourceView* const* ppShaderResourceViews) {
	m_deviceContext->PSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}

void DeviceContext::PSSetConstantBuffers(unsigned int StartSlot,
																				 unsigned int NumBuffers,
																				 ID3D11Buffer* const* ppConstantBuffers){
	m_deviceContext->PSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
;}