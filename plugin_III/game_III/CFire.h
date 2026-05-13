/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"

class PLUGIN_API CFire {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CFire)

public:
    bool m_bIsOngoing;
    bool m_bIsScriptFire;
    bool m_bPropagationFlag;
    bool m_bAudioSet;
    CVector m_vecPosition;
    CEntity *m_pEntity;
    CEntity *m_pSource;
    unsigned int m_nExtinguishTime;
    unsigned int m_nStartTime;
    unsigned int m_nPeriodTimer;
    unsigned int m_nNextTimeToAddFlames;
    unsigned int m_nFiremenPuttingOut;
    float m_fStrength;

    SUPPORTED_10EN_11EN_STEAM void Extinguish();
    SUPPORTED_10EN_11EN_STEAM void ProcessFire();
    SUPPORTED_10EN_11EN_STEAM void ReportThisFire();
};
VALIDATE_OFFSET(CFire, m_bIsOngoing, 0x0);
VALIDATE_OFFSET(CFire, m_bIsScriptFire, 0x1);
VALIDATE_OFFSET(CFire, m_bPropagationFlag, 0x2);
VALIDATE_OFFSET(CFire, m_bAudioSet, 0x3);
VALIDATE_OFFSET(CFire, m_vecPosition, 0x4);
VALIDATE_OFFSET(CFire, m_pEntity, 0x10);
VALIDATE_OFFSET(CFire, m_pSource, 0x14);
VALIDATE_OFFSET(CFire, m_nExtinguishTime, 0x18);
VALIDATE_OFFSET(CFire, m_nStartTime, 0x1C);
VALIDATE_OFFSET(CFire, m_nPeriodTimer, 0x20);
VALIDATE_OFFSET(CFire, m_nNextTimeToAddFlames, 0x24);
VALIDATE_OFFSET(CFire, m_nFiremenPuttingOut, 0x28);
VALIDATE_OFFSET(CFire, m_fStrength, 0x2C);
VALIDATE_SIZE(CFire, 0x30);

#include "meta/meta.CFire.h"
