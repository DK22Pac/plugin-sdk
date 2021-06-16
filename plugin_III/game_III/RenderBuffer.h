/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class PLUGIN_API RenderBuffer {
public:
    SUPPORTED_10EN_11EN_STEAM static int &IndicesToBeStored;
    SUPPORTED_10EN_11EN_STEAM static int &VerticesToBeStored;

    SUPPORTED_10EN_11EN_STEAM static void ClearRenderBuffer();
    SUPPORTED_10EN_11EN_STEAM static void RenderStuffInBuffer();
    SUPPORTED_10EN_11EN_STEAM static void StartStoring(int numIndices, int numVertices, RwImVertexIndex **indexStart, RwIm3DVertex **vertexStart);
    SUPPORTED_10EN_11EN_STEAM static void StopStoring();
};

SUPPORTED_10EN_11EN_STEAM extern RwImVertexIndex(&TempBufferRenderIndexList)[1024]; // RwImVertexIndex TempBufferRenderIndexList[1024]
SUPPORTED_10EN_11EN_STEAM extern RwIm3DVertex(&TempBufferRenderVertices)[256]; // RwIm3DVertex TempBufferRenderVertices[256]
SUPPORTED_10EN_11EN_STEAM extern int &TempBufferIndicesStored;
SUPPORTED_10EN_11EN_STEAM extern int &TempBufferVerticesStored;

#include "meta/meta.RenderBuffer.h"
