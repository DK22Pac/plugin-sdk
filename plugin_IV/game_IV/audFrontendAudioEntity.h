/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "audGtaAudioEntity.h"

class audFrontendAudioEntity : public audGtaAudioEntity {
public:
    void PlaySound(const char* name);
    void StartLoadingTune();
    void StopLoadingTune(bool arg1);
    void TriggerMissionCompleteAudioEvent(int32_t index);
};

extern audFrontendAudioEntity& g_FrontendAudioEntity;
