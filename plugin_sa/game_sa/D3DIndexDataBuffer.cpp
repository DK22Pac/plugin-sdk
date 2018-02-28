/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "D3DIndexDataBuffer.h"

// Converted from thiscall void D3DIndexDataBuffer::Clear() 0x7301D0
void D3DIndexDataBuffer::Clear() {
    plugin::CallMethod<0x7301D0, D3DIndexDataBuffer *>(this);
}

// Converted from thiscall void D3DIndexDataBuffer::Destroy() 0x730200
void D3DIndexDataBuffer::Destroy() {
    plugin::CallMethod<0x730200, D3DIndexDataBuffer *>(this);
}

// Converted from thiscall uint D3DIndexDataBuffer::GetTotalDataSize() 0x7303B0
unsigned int D3DIndexDataBuffer::GetTotalDataSize() {
    return plugin::CallMethodAndReturn<unsigned int, 0x7303B0, D3DIndexDataBuffer *>(this);
}

// Converted from thiscall void D3DIndexDataBuffer::Resize(uint newCapacity) 0x730330
void D3DIndexDataBuffer::Resize(unsigned int newCapacity) {
    plugin::CallMethod<0x730330, D3DIndexDataBuffer *, unsigned int>(this, newCapacity);
}

// Converted from thiscall void D3DIndexDataBuffer::Setup(uint format, int _f4, uint capacity) 0x730190
void D3DIndexDataBuffer::Setup(unsigned int format, int _f4, unsigned int capacity) {
    plugin::CallMethod<0x730190, D3DIndexDataBuffer *, unsigned int, int, unsigned int>(this, format, _f4, capacity);
}

#ifdef _D3D9_H_
// Converted from thiscall IDirect3DIndexBuffer9* D3DIndexDataBuffer::Pop() 0x730250
IDirect3DIndexBuffer9* D3DIndexDataBuffer::Pop() {
    return plugin::CallMethodAndReturn<IDirect3DIndexBuffer9*, 0x730250, D3DIndexDataBuffer *>(this);
}

// Converted from thiscall IDirect3DIndexBuffer9* D3DIndexDataBuffer::Pop(uint indexCount) 0x730270
IDirect3DIndexBuffer9* D3DIndexDataBuffer::Pop(unsigned int indexCount) {
    return plugin::CallMethodAndReturn<IDirect3DIndexBuffer9*, 0x730270, D3DIndexDataBuffer *, unsigned int>(this, indexCount);
}

// Converted from thiscall bool D3DIndexDataBuffer::Push(IDirect3DIndexBuffer9* indexBuffer) 0x730300
bool D3DIndexDataBuffer::Push(IDirect3DIndexBuffer9* indexBuffer) {
    return plugin::CallMethodAndReturn<bool, 0x730300, D3DIndexDataBuffer *, IDirect3DIndexBuffer9*>(this, indexBuffer);
}

// Converted from thiscall bool D3DIndexDataBuffer::PushWithoutIncreasingCounter(IDirect3DIndexBuffer9* indexBuffer) 0x730B00
bool D3DIndexDataBuffer::PushWithoutIncreasingCounter(IDirect3DIndexBuffer9* indexBuffer) {
    return plugin::CallMethodAndReturn<bool, 0x730B00, D3DIndexDataBuffer *, IDirect3DIndexBuffer9*>(this, indexBuffer);
}
#else
// Converted from thiscall IDirect3DIndexBuffer9* D3DIndexDataBuffer::Pop() 0x730250
void* D3DIndexDataBuffer::Pop() {
    return plugin::CallMethodAndReturn<void*, 0x730250, D3DIndexDataBuffer *>(this);
}

// Converted from thiscall IDirect3DIndexBuffer9* D3DIndexDataBuffer::Pop(uint indexCount) 0x730270
void* D3DIndexDataBuffer::Pop(unsigned int indexCount) {
    return plugin::CallMethodAndReturn<void*, 0x730270, D3DIndexDataBuffer *, unsigned int>(this, indexCount);
}

// Converted from thiscall bool D3DIndexDataBuffer::Push(IDirect3DIndexBuffer9* indexBuffer) 0x730300
bool D3DIndexDataBuffer::Push(void* indexBuffer) {
    return plugin::CallMethodAndReturn<bool, 0x730300, D3DIndexDataBuffer *, void*>(this, indexBuffer);
}

// Converted from thiscall bool D3DIndexDataBuffer::PushWithoutIncreasingCounter(IDirect3DIndexBuffer9* indexBuffer) 0x730B00
bool D3DIndexDataBuffer::PushWithoutIncreasingCounter(void* indexBuffer) {
    return plugin::CallMethodAndReturn<bool, 0x730B00, D3DIndexDataBuffer *, void*>(this, indexBuffer);
}
#endif