/*
Plugin-SDK (Grand Theft Auto 3) header file
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
    
    //funcs
    CCivilianPed(ePedType pedType, unsigned int modelIndex);
    void CivilianAI();
};

VALIDATE_SIZE(CCivilianPed, 0x53C);