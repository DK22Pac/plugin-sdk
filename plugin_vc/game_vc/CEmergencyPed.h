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

VALIDATE_SIZE(CEmergencyPed, 0x60C);