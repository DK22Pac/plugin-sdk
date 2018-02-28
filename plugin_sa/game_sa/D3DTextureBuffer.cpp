/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "D3DTextureBuffer.h"

// Converted from thiscall void D3DTextureBuffer::Clear() 0x72FEC0
void D3DTextureBuffer::Clear() {
    plugin::CallMethod<0x72FEC0, D3DTextureBuffer *>(this);
}

// Converted from thiscall void D3DTextureBuffer::Destroy() 0x72FEF0
void D3DTextureBuffer::Destroy() {
    plugin::CallMethod<0x72FEF0, D3DTextureBuffer *>(this);
}

// Converted from thiscall uint D3DTextureBuffer::GetTotalDataSize() 0x7300A0
unsigned int D3DTextureBuffer::GetTotalDataSize() {
    return plugin::CallMethodAndReturn<unsigned int, 0x7300A0, D3DTextureBuffer *>(this);
}

// Converted from thiscall void D3DTextureBuffer::Resize(uint newCapacity) 0x730020
void D3DTextureBuffer::Resize(unsigned int newCapacity) {
    plugin::CallMethod<0x730020, D3DTextureBuffer *, unsigned int>(this, newCapacity);
}

// Converted from thiscall void D3DTextureBuffer::Setup(uint format, int width, int bOneLevel, uint capacity) 0x72FE80
void D3DTextureBuffer::Setup(unsigned int format, int width, int bOneLevel, unsigned int capacity) {
    plugin::CallMethod<0x72FE80, D3DTextureBuffer *, unsigned int, int, int, unsigned int>(this, format, width, bOneLevel, capacity);
}

#ifdef _D3D9_H_
// Converted from thiscall IDirect3DTexture9* D3DTextureBuffer::Pop() 0x72FF40
IDirect3DTexture9* D3DTextureBuffer::Pop() {
    return plugin::CallMethodAndReturn<IDirect3DTexture9*, 0x72FF40, D3DTextureBuffer *>(this);
}

// Converted from thiscall IDirect3DTexture9* D3DTextureBuffer::Pop(uint format, int width, int height, int bOneLevel) 0x72FF60
IDirect3DTexture9* D3DTextureBuffer::Pop(unsigned int format, int width, int height, int bOneLevel) {
    return plugin::CallMethodAndReturn<IDirect3DTexture9*, 0x72FF60, D3DTextureBuffer *, unsigned int, int, int, int>(this, format, width, height, bOneLevel);
}

// Converted from thiscall bool D3DTextureBuffer::Push(IDirect3DTexture9* texture) 0x72FFF0
bool D3DTextureBuffer::Push(IDirect3DTexture9* texture) {
    return plugin::CallMethodAndReturn<bool, 0x72FFF0, D3DTextureBuffer *, IDirect3DTexture9*>(this, texture);
}

// Converted from thiscall bool D3DTextureBuffer::PushWithoutIncreasingCounter(IDirect3DTexture9* texture) 0x730AD0
bool D3DTextureBuffer::PushWithoutIncreasingCounter(IDirect3DTexture9* texture) {
    return plugin::CallMethodAndReturn<bool, 0x730AD0, D3DTextureBuffer *, IDirect3DTexture9*>(this, texture);
}
#else
// Converted from thiscall IDirect3DTexture9* D3DTextureBuffer::Pop() 0x72FF40
void* D3DTextureBuffer::Pop() {
    return plugin::CallMethodAndReturn<void*, 0x72FF40, D3DTextureBuffer *>(this);
}

// Converted from thiscall IDirect3DTexture9* D3DTextureBuffer::Pop(uint format, int width, int height, int bOneLevel) 0x72FF60
void* D3DTextureBuffer::Pop(unsigned int format, int width, int height, int bOneLevel) {
    return plugin::CallMethodAndReturn<void*, 0x72FF60, D3DTextureBuffer *, unsigned int, int, int, int>(this, format, width, height, bOneLevel);
}

// Converted from thiscall bool D3DTextureBuffer::Push(IDirect3DTexture9* texture) 0x72FFF0
bool D3DTextureBuffer::Push(void* texture) {
    return plugin::CallMethodAndReturn<bool, 0x72FFF0, D3DTextureBuffer *, void*>(this, texture);
}

// Converted from thiscall bool D3DTextureBuffer::PushWithoutIncreasingCounter(IDirect3DTexture9* texture) 0x730AD0
bool D3DTextureBuffer::PushWithoutIncreasingCounter(void* texture) {
    return plugin::CallMethodAndReturn<bool, 0x730AD0, D3DTextureBuffer *, void*>(this, texture);
}
#endif