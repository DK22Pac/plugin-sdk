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
VALIDATE_OFFSET(audRadioAudioEntity, field_24, 0x54);
VALIDATE_OFFSET(audRadioAudioEntity, m_PlayerVehicleRadioState, 0x6C);
VALIDATE_OFFSET(audRadioAudioEntity, m_MobilePhoneRadioState, 0x70);
VALIDATE_OFFSET(audRadioAudioEntity, field_27, 0x74);
VALIDATE_OFFSET(audRadioAudioEntity, m_nIndex, 0x78);
VALIDATE_OFFSET(audRadioAudioEntity, field_29, 0x7C);
VALIDATE_OFFSET(audRadioAudioEntity, field_30, 0x80);
VALIDATE_OFFSET(audRadioAudioEntity, field_31, 0x84);
VALIDATE_OFFSET(audRadioAudioEntity, field_32, 0x85);
VALIDATE_OFFSET(audRadioAudioEntity, field_33, 0x86);
VALIDATE_OFFSET(audRadioAudioEntity, field_34, 0x87);
VALIDATE_OFFSET(audRadioAudioEntity, field_35, 0x88);
VALIDATE_OFFSET(audRadioAudioEntity, field_36, 0x89);
VALIDATE_OFFSET(audRadioAudioEntity, field_70, 0x8A);
VALIDATE_OFFSET(audRadioAudioEntity, field_94, 0xD0);
VALIDATE_SIZE(audRadioAudioEntity, 0xE8);

extern audRadioAudioEntity& g_RadioAudioEntity;
