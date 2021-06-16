/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "RenderBuffer.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE int &RenderBuffer::IndicesToBeStored = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E28B0, 0x8E2860, 0x8F29A0));
PLUGIN_VARIABLE int &RenderBuffer::VerticesToBeStored = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F59C4, 0x8F5A78, 0x905BB8));
PLUGIN_VARIABLE RwImVertexIndex(&TempBufferRenderIndexList)[1024] = *reinterpret_cast<RwImVertexIndex(*)[1024]>(GLOBAL_ADDRESS_BY_VERSION(0x846288, 0x846288, 0x8563C8));
PLUGIN_VARIABLE RwIm3DVertex(&TempBufferRenderVertices)[256] = *reinterpret_cast<RwIm3DVertex(*)[256]>(GLOBAL_ADDRESS_BY_VERSION(0x862330, 0x8622E0, 0x872420));
PLUGIN_VARIABLE int &TempBufferIndicesStored = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1A4C, 0x8F1B00, 0x901C40));
PLUGIN_VARIABLE int &TempBufferVerticesStored = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5F78, 0x8F602C, 0x90616C));

int addrof(RenderBuffer::ClearRenderBuffer) = ADDRESS_BY_VERSION(0x517620, 0x517830, 0x5177C0);
int gaddrof(RenderBuffer::ClearRenderBuffer) = GLOBAL_ADDRESS_BY_VERSION(0x517620, 0x517830, 0x5177C0);

void RenderBuffer::ClearRenderBuffer() {
    plugin::CallDynGlobal(gaddrof(RenderBuffer::ClearRenderBuffer));
}

int addrof(RenderBuffer::RenderStuffInBuffer) = ADDRESS_BY_VERSION(0x5177C0, 0x5179D0, 0x517960);
int gaddrof(RenderBuffer::RenderStuffInBuffer) = GLOBAL_ADDRESS_BY_VERSION(0x5177C0, 0x5179D0, 0x517960);

void RenderBuffer::RenderStuffInBuffer() {
    plugin::CallDynGlobal(gaddrof(RenderBuffer::RenderStuffInBuffer));
}

int addrof(RenderBuffer::StartStoring) = ADDRESS_BY_VERSION(0x517640, 0x517850, 0x5177E0);
int gaddrof(RenderBuffer::StartStoring) = GLOBAL_ADDRESS_BY_VERSION(0x517640, 0x517850, 0x5177E0);

void RenderBuffer::StartStoring(int numIndices, int numVertices, RwImVertexIndex **indexStart, RwIm3DVertex **vertexStart) {
    plugin::CallDynGlobal<int, int, RwImVertexIndex **, RwIm3DVertex **>(gaddrof(RenderBuffer::StartStoring), numIndices, numVertices, indexStart, vertexStart);
}

int addrof(RenderBuffer::StopStoring) = ADDRESS_BY_VERSION(0x5176B0, 0x5178C0, 0x517850);
int gaddrof(RenderBuffer::StopStoring) = GLOBAL_ADDRESS_BY_VERSION(0x5176B0, 0x5178C0, 0x517850);

void RenderBuffer::StopStoring() {
    plugin::CallDynGlobal(gaddrof(RenderBuffer::StopStoring));
}
