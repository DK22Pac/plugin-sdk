/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
    class Quaternion {
    public:
        float x, y, z, w;

        Quaternion(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}
    };
    VALIDATE_OFFSET(Quaternion, x, 0x0);
    VALIDATE_OFFSET(Quaternion, y, 0x4);
    VALIDATE_OFFSET(Quaternion, z, 0x8);
    VALIDATE_OFFSET(Quaternion, w, 0xC);
    VALIDATE_SIZE(Quaternion, 0x10);
}
