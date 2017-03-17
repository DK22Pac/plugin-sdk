/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CPed.h"

class CEmergencyPed : public CPed {
public:

    //funcs
    CEmergencyPed(unsigned int modelIndex);
    void FiremanAI();
    bool InRange(CPed* ped);
    void MedicAI();
};
