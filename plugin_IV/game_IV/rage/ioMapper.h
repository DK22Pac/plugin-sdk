/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
    class ioMapper {
    public:
        int m_Count;
        int m_PadIndex;
        uint8_t field_3[1968];
    };

    VALIDATE_SIZE(ioMapper, 0x7B8);
}
