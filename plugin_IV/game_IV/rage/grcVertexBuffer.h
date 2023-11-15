/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
    class grcVertexBuffer {
    public:
        float x;
        float y;
        float z;
        float u;
        float v;
        float clip;
        int32_t color;
        float min;
        float max;
    };

    extern grcVertexBuffer* vertexBuffer;
}
