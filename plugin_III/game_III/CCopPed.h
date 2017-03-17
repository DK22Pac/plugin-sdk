/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CPed.h"
#include "eCopType.h"

class CCopPed : public CPed {
public:
    
    //funcs
    void ArrestPlayer();
    CCopPed(eCopType copType);
    void ClearPursuit();
    void CopAI();
    int ScanForCrimes();
    void SetArrestPlayer(CPed* ped);
    void SetPursuit(bool arg0);
};
