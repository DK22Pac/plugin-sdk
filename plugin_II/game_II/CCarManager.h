/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CCar.h"

class CCarManager {
public:
    CCar* m_pFirst;
    CCar* m_pLast;
    CCar* m_pCars[306];
    short m_nCarsCount;
    char pad[2];
};

VALIDATE_SIZE(CCarManager, 0x4D4);

extern CCarManager** gCarManager;

extern CCarManager* GetCarManager();
