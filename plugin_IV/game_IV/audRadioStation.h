/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "rage/sysArray.h"

class audRadioStation {
public:
    static rage::sysArray<audRadioStation*>& ms_OrderedRadioStations;
    static uint8_t& sm_NumUnlockedRadioStations;
    static uint32_t& ms_CurrRadioStationRoll;
    static uint32_t& ms_CurrRadioStation;
    static int32_t& ms_nState;
    static uint8_t& ms_RadioOff;

public:
    uint8_t field_1[6140];
    char name[24];
    uint8_t field_6140[253 + 8];
    int8_t m_nIndex;
    uint8_t field_6400[13];
    uint8_t m_bFreeze;

public:
    static audRadioStation* FindStation(uint32_t hashName);
    static audRadioStation* FindStation(const char* name);
    static const char* GetName(uint32_t index, bool off);
    static audRadioStation* GetStation(uint32_t index);
    static int32_t GetNumStations();
};

VALIDATE_SIZE(audRadioStation, 0x1928);
