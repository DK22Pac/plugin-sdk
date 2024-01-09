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
#include "audRadioStation.h"

enum eRadioEntityState {
    RADIO_STATE_OFF = 3
};

class audRadioAudioEntity : public audGtaAudioEntity {
public:
    static bool& ms_IsMobilePhoneRadioActive;

public:
    uint8_t field_24[24];
    uint32_t m_PlayerVehicleRadioState;
    uint32_t m_MobilePhoneRadioState;
    uint32_t field_27;
    int32_t m_nIndex;
    uint32_t field_29;
    int32_t field_30;
    uint8_t field_31;
    uint8_t field_32;
    uint8_t field_33;
    uint8_t field_34;
    uint8_t field_35;
    uint8_t field_36;
    uint8_t field_70[70];
    uint8_t field_94[24];

public:
    void RetuneToStation(const char* stationName);
    void RetuneToStation(uint32_t hashName);
    void RetuneToStationIndex(int32_t index);

    void PauseRadio();
    void UnpauseRadio();

    int32_t GetAudibleMusicTrackTextId();

public:
    static void RetuneRadioUpDown(int8_t up);
    static void TurnOff(int16_t arg1);
    static void TurnOn(int16_t arg1);
    static bool CanRetune();

};

extern audRadioAudioEntity& g_RadioAudioEntity;
