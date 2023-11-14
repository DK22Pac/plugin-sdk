/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "audGtaAudioEntity.h"
#include "audEngine.h"

class audFrontendAudioEntity : public audGtaAudioEntity {
public:
    void ReportFrontendAudioEvent(const char* name);
    void StartLoadingTune();
    void StopLoadingTune(bool arg1);
    bool ReportGenericAudioEvent(uint32_t hash, CAudAttr*, int32_t, int32_t, int32_t, int32_t);
    void TriggerMissionCompleteAudioEvent(int32_t index);
};

extern audFrontendAudioEntity& FrontendAudioEntity;
