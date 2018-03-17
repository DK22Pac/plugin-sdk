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
    bool m_bIsCriminal;
    int field_5F8;  //  gets reset to 0 after counting up to 8 , stolen vehicles counter?
    char field_5FC; // always 0
    bool m_bFoundVacantNearbyCar;
private:
    char _pad[2];
public:
    int m_nCivilianVehicleModels[16]; // initialized with random vehicle models , also known as StealWishList
    bool m_bUseAttractorInstantly;
private:
    char _pad1[3];
public:
    unsigned int dwSitFreqCounter; //acts as a counter to control the frequency of sitting on benches etc

    CCivilianPed(ePedType pedType, unsigned int modelIndex);
    void CivilianAI();
    void EnterVacantNearbyCars();
    void UseNearbyAttractors();
};

VALIDATE_SIZE(CCivilianPed, 0x648);