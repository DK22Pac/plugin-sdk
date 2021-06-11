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

VALIDATE_SIZE(CFire, 0x30);

#include "meta/meta.CFire.h"
