/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "audSound.h"
#include "audSoundInitParams.h"

namespace rage {
    class audEntity {
    public:
        int16_t field_4;
        int16_t field_6;

    public:
        virtual ~audEntity() {}

    public:
        void CreateSound_LocalReference(const char* name, rage::audSound* sound, audSoundInitParams* initParams, int32_t arg4, int32_t arg5, int32_t arg6);
    };
}
