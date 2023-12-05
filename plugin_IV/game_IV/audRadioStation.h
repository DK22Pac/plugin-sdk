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
    static uint32_t& ms_CurrRadioStationRoll;
    static uint32_t& ms_CurrRadioStation;
    static int32_t& ms_nState;
    static uint8_t& ms_RadioOff;

public:
    uint8_t field_1[120];

public:
    static audRadioStation* FindStation(uint32_t hashName);
    static const char* GetName(uint32_t index, bool off);
    static audRadioStation* GetStation(uint32_t index);
    static int32_t GetNumStations();
};

VALIDATE_SIZE(audRadioStation, 0x78);
