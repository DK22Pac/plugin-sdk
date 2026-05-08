/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "grcDrawMode.h"

namespace rage {
    struct VTX {
        float x;
        float y;
        float z;
        float nx;
        float ny;
        float nz;
        uint32_t c;
        float s;
        float t;
    };
    VALIDATE_OFFSET(VTX, x, 0x0);
    VALIDATE_OFFSET(VTX, y, 0x4);
    VALIDATE_OFFSET(VTX, z, 0x8);
    VALIDATE_OFFSET(VTX, nx, 0xC);
    VALIDATE_OFFSET(VTX, ny, 0x10);
    VALIDATE_OFFSET(VTX, nz, 0x14);
    VALIDATE_OFFSET(VTX, c, 0x18);
    VALIDATE_OFFSET(VTX, s, 0x1C);
    VALIDATE_OFFSET(VTX, t, 0x20);
    VALIDATE_SIZE(VTX, 0x24);

    class grcVertexBuffer {
    public:

    };
    VALIDATE_SIZE(grcVertexBuffer, 0x1);
}
