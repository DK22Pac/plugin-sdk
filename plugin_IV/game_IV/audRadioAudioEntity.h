/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"
#include "audGtaAudioEntity.h"

class audRadioAudioEntity : audGtaAudioEntity {
public:
    uint8_t field_146[120];
    int32_t m_nRadioStationIndex;
    uint8_t field_170[24];

public:
    void UnpauseRadio();
    void SetRadioStationIndex(int32_t index);
    void SetRadioStation(const char* name);
};

extern audRadioAudioEntity& RadioAudioEntity;
