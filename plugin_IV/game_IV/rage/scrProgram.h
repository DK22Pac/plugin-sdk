/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "pgBase.h"
#include "scrThread.h"

namespace rage {
    class scrProgram : pgBase {
    public:
        uint32_t field_1;
        uint32_t field_2;
        uint32_t field_3;
        uint32_t field_4;
        uint32_t RefCount;

    public:
        int32_t Release();
    };
}
