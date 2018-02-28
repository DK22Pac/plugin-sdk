/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "eCopType.h"

class CCopPed : public CPed {
public:
    short field_53C;
    short field_53E;
    float m_fField_540;
    char byte544;
    char byte545;
    char byte546;
    char byte547;
    char byte548;
    char byte549;
    char byte54A[2]; // _pad?
    int dword54C;
    eCopType m_nCopType;
    char byte554;
    char byte555[3]; // _pad?

    // functions
    void ArrestPlayer();
    CCopPed(eCopType copType);
    void ClearPursuit();
    void CopAI();
    int ScanForCrimes();
    void SetArrestPlayer(CPed* player);
    void SetPursuit(bool arg0);
};

VALIDATE_SIZE(CCopPed, 0x558);
