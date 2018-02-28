/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "ePedStats.h"

class CPedStats {
public:
    ePedStats m_Personality;
    char m_aszName[24];
    float m_fFleeDistance;
    float m_fHeadingChangeRate;
    unsigned char m_nFear;
    unsigned char m_nTemper;
    unsigned char m_nLawfullness;
    unsigned char m_nSexiness;
    float m_fAttackStrength;
    float m_fDefendWeakness;
    union
    {
        unsigned char m_nFlags;
        struct
        {
            unsigned char bPunchOnly : 1;
            unsigned char bCanKneeHead : 1;
            unsigned char bCanKick : 1;
            unsigned char bCanRoundHse : 1;
            unsigned char bNoDive : 1;
            unsigned char b1HitKnockdown : 1;
            unsigned char bShoppingBags : 1;
            unsigned char bGunPanic : 1;
        };
    };
    char _pad0[3];

    // variables
    static CPedStats* (&ms_apPedStats)[35];		// CPedStats* CPedStats::ms_apPedStats[35]

    // functions
    static unsigned int GetPedStatType(char* pedStatName);
    static void Initialise();
    static void LoadPedStats();
    static void Shutdown();
};

VALIDATE_SIZE(CPedStats, 0x34);