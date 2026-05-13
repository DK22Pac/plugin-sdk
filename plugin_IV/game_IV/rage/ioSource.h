/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
    class ioSource {
    public:
        uint8_t field_1;
        uint8_t m_DeviceIndex;
        uint8_t field_3;
        uint8_t field_4;
    };
    VALIDATE_OFFSET(ioSource, field_1, 0x0);
    VALIDATE_OFFSET(ioSource, m_DeviceIndex, 0x1);
    VALIDATE_OFFSET(ioSource, field_3, 0x2);
    VALIDATE_OFFSET(ioSource, field_4, 0x3);
    VALIDATE_SIZE(ioSource, 0x4);
}
