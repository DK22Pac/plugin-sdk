/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "eCrimeType.h"
#include "CVector.h"


class CCrimeBeingQd {
public:
    eCrimeType m_nCrimeType;
    UInt32 m_nCrimeId;
    UInt32 m_nStartTime;
    CVector m_vecCoors;
    Bool m_bAlreadyReported;
    Bool m_bPoliceDontReallyCare;

// [FrogByteDQ]: TODO: move this to CCrimeBeingQd.h file
// [FrogByteDQ]: TODO: constructor sub_5388D0
};

VALIDATE_SIZE(CCrimeBeingQd, 0x1C);

class CWanted {
public:
    UInt32 m_nChaosLevel;
    UInt32 m_nChaosLevelBeforeParole;
    UInt32 m_nLastTimeWantedDecreased;
    UInt32 m_nLastTimeWantedLevelChanged;
    UInt32 m_dwTimeOfParole;
    float m_fMultiplier;
    UInt8 m_nCopsInPursuit;
    UInt8 m_nMaxCopsInPursuit;
    UInt8 m_nMaxCopCarsInPursuit;
    UInt8 m_nCopsBeatingSuspect;
    UInt16 m_nChanceOnRoadBlock;
    union
    {
        UInt8 m_nWantedFlags;
        struct
        {
            unsigned char b0: 1;
            unsigned char b1: 1;
            unsigned char m_bSwatRequired : 1;
            unsigned char m_bFbiRequired : 1;
            unsigned char m_bArmyRequired : 1;
        };
    };
    char _pad0[1];
    UInt32 m_nWantedLevel;
    UInt32 m_nWantedLevelBeforeParole;
    CCrimeBeingQd m_asCrimesBeingQd[16];
    class CCopPed *m_apCopsInPursuit[10];

    //variables
    static int &nMaximumWantedLevel; // 9600
    static int &MaximumWantedLevel;  // 6
    
    //funcs
    bool AddCrimeToQ(eCrimeType crimeType, int arg1, CVector const& arg2, bool arg3, bool arg4);
    bool AreArmyRequired();
    bool AreFbiRequired();
    bool AreMiamiViceRequired();
    bool AreSwatRequired();
    void CheatWantedLevel(int arg0);
    void ClearQdCrimes();
    void Initialise();
    bool NumOfHelisRequired();
    void RegisterCrime(eCrimeType crimeType, CVector const& arg1, unsigned int arg2, bool arg3);
    void RegisterCrime_Immediately(eCrimeType crimeType, CVector const& arg1, unsigned int arg2, bool arg3);
    void ReportCrimeNow(eCrimeType crimeType, CVector const& arg1, bool arg2);
    void Reset();
    void ResetPolicePursuit();
    static void SetMaximumWantedLevel(int level);
    void SetWantedLevel(int level);
    void SetWantedLevelNoDrop(int arg0);
    void Update();
    void UpdateWantedLevel();
    static void WorkOutPolicePresence(CVector arg0, float arg1);
};

VALIDATE_SIZE(CWanted, 0x210);