/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CGeneral {
public:
    int m_nCycle;
    int m_nRandomNumber;

public:
    int GetCycle();
    int GetRandomNumber();
    void Update();
    void PrintCycle();
};

VALIDATE_SIZE(CGeneral, 0x8);

extern CGeneral** gGeneral;

extern CGeneral* GetGeneral();
