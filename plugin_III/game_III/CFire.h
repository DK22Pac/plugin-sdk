/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"

class CFire {
public:
    bool m_bActive;
    bool m_bCreatedByScript;
    char byte2;
    bool m_bMakesNoise;
    CVector m_vecPosition;
    CEntity *m_pEntityTarget;
    CEntity *m_pEntityCreator;
    unsigned int m_nTimeToBurn;
    unsigned int m_nTime;
    int dword20;
    int dword24;
    int dword28;
    float m_fStrength;
   
    //funcs
    CFire();
    void Extinguish();
    void ProcessFire();
    void ReportThisFire();
    ~CFire();
};

VALIDATE_SIZE(CFire, 0x30);
