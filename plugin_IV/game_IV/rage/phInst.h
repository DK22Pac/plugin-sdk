/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "datBase.h"
#include "Matrix44.h"

namespace rage {
    class phInst : datBase {
    public:
        int32_t field_4;
        int16_t field_8;
        int16_t field_A;
        int32_t field_C;
        Matrix44 field_10;
    };
}
