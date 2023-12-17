/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
    enum grcEffectVar__ : int32_t {
        grcevNONE = 0x0,
    };

    class grcEffect {
    public:
        uint8_t field_1[1080];
    };
}
