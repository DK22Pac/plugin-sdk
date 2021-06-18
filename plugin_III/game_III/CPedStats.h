/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "ePedStats.h"

class PLUGIN_API CPedStats {
public:
    ePedStats m_Personality;
    char m_aszName[24];
    float m_fFleeDistance;
    float m_fHeadingChangeRate;
    char m_nFear;
    char m_nTemper;
    char m_nLawfullness;
    char m_nSexiness;
    float m_fAttackStrength;
    float m_fDefendWeakness;
    struct {
        unsigned char bPunchOnly : 1;
        unsigned char bCanKneeHead : 1;
        unsigned char bCanKick : 1;
        unsigned char bCanRoundHse : 1;
        unsigned char bNoDive : 1;
        unsigned char bOneHitKnockdown : 1;
        unsigned char bShoppingBags : 1;
        unsigned char bGunPanic : 1;
    } m_nFlags;

    SUPPORTED_10EN_11EN_STEAM static CPedStats *(&ms_apPedStats)[35]; // static CPedStats *ms_apPedStats[35]

    SUPPORTED_10EN_11EN_STEAM static unsigned int GetPedStatType(char *name);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void LoadPedStats();
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
};

VALIDATE_SIZE(CPedStats, 0x34);

#include "meta/meta.CPedStats.h"
