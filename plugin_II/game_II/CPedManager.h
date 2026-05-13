/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CPed;

class PLUGIN_API CPedManager {
public:
    CPed* m_pFirst;
    CPed* m_pLast;
    CPed* m_pPeds[200];
    short m_nPedsCount;
    char pad[2];
};
VALIDATE_OFFSET(CPedManager, m_pFirst, 0x0);
VALIDATE_OFFSET(CPedManager, m_pLast, 0x4);
VALIDATE_OFFSET(CPedManager, m_pPeds, 0x8);
VALIDATE_OFFSET(CPedManager, m_nPedsCount, 0x328);
VALIDATE_OFFSET(CPedManager, pad, 0x32A);
VALIDATE_SIZE(CPedManager, 0x32C);

extern CPedManager** gPedManager;

extern CPedManager* GetPedManager();
