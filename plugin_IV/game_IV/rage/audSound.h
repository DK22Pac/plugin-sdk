/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "audWaveSlot.h"

namespace rage {
    class audSound {
    public:

    public:
        void PrepareAndPlay(audWaveSlot* slot, bool allowLoad, int32_t timeLimit);
    };
}
