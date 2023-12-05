/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Vector3.h"

namespace rage {
    class audSoundInitParams {
    public:
        uint8_t field_8[10];
        rage::Vector3 Position;
        uint8_t field_1[32];
        int32_t TimerId;
        float Volume;
        int32_t Pan;
        int16_t field_61;
        int8_t field_62;

    public:
        audSoundInitParams();
    };

    VALIDATE_SIZE(audSoundInitParams, 0x48);
}
