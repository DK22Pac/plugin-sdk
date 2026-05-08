/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "crFrame.h"

namespace rage {
    class crFrameBuffer : crFrame {
    public:
        int32_t field_14;
        int8_t gap_18[8];
        int8_t field_20;
        int8_t field_21[3];
    };
    VALIDATE_OFFSET(crFrameBuffer, field_14, 0x14);
    VALIDATE_OFFSET(crFrameBuffer, gap_18, 0x18);
    VALIDATE_OFFSET(crFrameBuffer, field_20, 0x20);
    VALIDATE_OFFSET(crFrameBuffer, field_21, 0x21);
    VALIDATE_SIZE(crFrameBuffer, 0x24);
}
