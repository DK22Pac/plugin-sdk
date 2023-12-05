/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
    class audController {
    public:
        uint8_t field[4004];
        uint16_t m_EnvironmentListHead;
        uint8_t field_6402[6402];
        uint32_t* m_EnvironmentGroupList[512];
        uint8_t field_8842[392];
        uint8_t m_IsInitialized;
        uint8_t m_IsActive;

    public:
        void Update(uint32_t timeInMs);
    };

    VALIDATE_SIZE(audController, 0x3234);
}
