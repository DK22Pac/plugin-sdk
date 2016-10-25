/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "CBaseModelInfo.h"

class CSimpleModelInfo : public CBaseModelInfo {
    RpAtomic      *m_apLodAtomics[3];
    RpAtomic      *m_afLodDistances[3];
    unsigned char  m_nNumLodLevels;
    unsigned short m_nCurrentLodLevel : 3;
    unsigned short : 1;
    unsigned short m_bIsBigBuilding : 1;
    unsigned short : 1;
    unsigned short m_bDrawLast : 1;
};