/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class RenderBuffer {
public:
    // variables
    static int &IndicesToBeStored;
    static int &VerticesToBeStored;

    // functions
    static void ClearRenderBuffer();
    static void StartStoring(int indices, int vertices, unsigned short** index, RxObjSpace3DVertex** vert);
    static void StopStoring();
    static void RenderStuffInBuffer();
};