/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"
#include "CPed.h"
#include "ePedType.h"

class CCivilianPed : public CPed {
public:
    
    CCivilianPed(ePedType pedType, unsigned int modelIndex);
    void CivilianAI();
    void EnterVacantNearbyCars();
    void UseNearbyAttractors();
};