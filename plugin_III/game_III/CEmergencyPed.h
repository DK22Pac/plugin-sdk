/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"

class CEmergencyPed : public CPed {
public:
    unsigned int dword53C;
    unsigned int dword540;
    unsigned int dword544;
    unsigned int dword548;
    char byte54C;
private:
    char _pad54D[3];
public:
    unsigned int dword550;

    //funcs
    CEmergencyPed(unsigned int modelIndex);
    void FiremanAI();
    bool InRange(CPed* ped);
    void MedicAI();
};

VALIDATE_SIZE(CEmergencyPed, 0x554);