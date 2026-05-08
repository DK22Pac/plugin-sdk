/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "sysArray.h"

namespace rage {
    class crFrame {
    public:
        int32_t field_2;
        int32_t field_4;
        int32_t field_8;
        sysArray<uint32_t> field_C;
    };
    VALIDATE_OFFSET(crFrame, field_2, 0x0);
    VALIDATE_OFFSET(crFrame, field_4, 0x4);
    VALIDATE_OFFSET(crFrame, field_8, 0x8);
    VALIDATE_OFFSET(crFrame, field_C, 0xC);
    VALIDATE_SIZE(crFrame, 0x14);
}
