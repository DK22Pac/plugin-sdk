/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"

class CVehicle;

class audGtaAudioEntity : public rage::audEntity {
public:
    uint8_t field_1[32];
    CVehicle* m_PlayerVehicle;
    uint8_t field_3[36];
    uint32_t* m_LoadingScreenScene;

public:
    void ReportSoundEvent(const char* name, rage::audSoundInitParams* params, int32_t arg3, int32_t arg4, int32_t arg5);
};

VALIDATE_SIZE(audGtaAudioEntity, 0x54);
