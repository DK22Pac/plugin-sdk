/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "ePedType.h"

class CCivilianPed : public CPed {
public:
    char field_5F4;
    int field_5F8;
    char field_5FC;
    char field_5FD;
    char field_5FE[66];
    char field_640;

    unsigned int dwSitFreqCounter; //acts as a counter to control the frequency of sitting on benches etc

    CCivilianPed(ePedType pedType, unsigned int modelIndex);
    void CivilianAI();
    void EnterVacantNearbyCars();
    void UseNearbyAttractors();
};

VALIDATE_SIZE(CCivilianPed, 0x648);