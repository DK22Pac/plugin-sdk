/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPed.h"

class CEmergencyPed : public CPed
{
public:
    int field_5F4;
    int field_5F8;
    int field_5FC;
    char field_600[4];
    char field_604;
private:
    char _pad[3];
public:
    int field_608;

    CEmergencyPed(unsigned int emergencyType); // 16 - medic  , 17 - fireman
    void FiremanAI();
    void MedicAI();
};
VALIDATE_OFFSET(CEmergencyPed, field_5F4, 0x5F4);
VALIDATE_OFFSET(CEmergencyPed, field_5F8, 0x5F8);
VALIDATE_OFFSET(CEmergencyPed, field_5FC, 0x5FC);
VALIDATE_OFFSET(CEmergencyPed, field_600, 0x600);
VALIDATE_OFFSET(CEmergencyPed, field_604, 0x604);
VALIDATE_OFFSET(CEmergencyPed, field_608, 0x608);
VALIDATE_SIZE(CEmergencyPed, 0x60C);