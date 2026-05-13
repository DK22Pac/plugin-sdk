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
    VALIDATE_OFFSET(audController, field, 0x0);
    VALIDATE_OFFSET(audController, m_EnvironmentListHead, 0xFA4);
    VALIDATE_OFFSET(audController, field_6402, 0xFA6);
    VALIDATE_OFFSET(audController, m_EnvironmentGroupList, 0x28A8);
    VALIDATE_OFFSET(audController, field_8842, 0x30A8);
    VALIDATE_OFFSET(audController, m_IsInitialized, 0x3230);
    VALIDATE_OFFSET(audController, m_IsActive, 0x3231);
    VALIDATE_SIZE(audController, 0x3234);

    extern audController*& g_Controller;
}
