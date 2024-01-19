/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"

namespace rage {
    class ioKeyboard {
    public:
        static uint8_t** sm_keys;
        static uint8_t* sm_CurrentState;
        static int32_t& sm_Active;
    };
}
