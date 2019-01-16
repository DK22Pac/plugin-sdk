/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "RenderBuffer.h"

int &RenderBuffer::IndicesToBeStored = *(int *)0x8E28B0;
int &RenderBuffer::VerticesToBeStored = *(int *)0x8F59C4;

// Converted from cdecl void RenderBuffer::ClearRenderBuffer(void) 0x517620 
void RenderBuffer::ClearRenderBuffer() {
    plugin::Call<0x517620>();
}

// Converted from cdecl void RenderBuffer::StartStoring(int indices,int vertices,ushort **index,RxObjSpace3DVertex **vert) 0x517640
void RenderBuffer::StartStoring(int indices, int vertices, unsigned short** index, RxObjSpace3DVertex** vert) {
    plugin::Call<0x517640, int, int, unsigned short**, RxObjSpace3DVertex**>(indices, vertices, index, vert);
}

// Converted from cdecl void RenderBuffer::StopStoring(void) 0x5176B0 
void RenderBuffer::StopStoring() {
    plugin::Call<0x5176B0>();
}

// Converted from cdecl void RenderBuffer::RenderStuffInBuffer(void) 0x5177C0 
void RenderBuffer::RenderStuffInBuffer() {
    plugin::Call<0x5177C0>();
}