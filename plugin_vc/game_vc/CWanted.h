/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "eCrimeType.h"
#include "CVector.h"
#include "CEntity.h"


class CCrimeBeingQd {
public:
    eCrimeType m_nCrimeType;
    CEntity* pVictim; //entity who was the victim of the crime
    unsigned int m_nStartTime;
    CVector m_vecCoors;
    bool m_bAlreadyReported;
    bool m_bPoliceDontReallyCare;
    char pad[2];

// [FrogByteDQ]: TODO: move this to CCrimeBeingQd.h file
// [FrogByteDQ]: TODO: constructor sub_5388D0
};
VALIDATE_OFFSET(CCrimeBeingQd, m_nCrimeType, 0x0);
VALIDATE_OFFSET(CCrimeBeingQd, pVictim, 0x4);
VALIDATE_OFFSET(CCrimeBeingQd, m_nStartTime, 0x8);
VALIDATE_OFFSET(CCrimeBeingQd, m_vecCoors, 0xC);
VALIDATE_OFFSET(CCrimeBeingQd, m_bAlreadyReported, 0x18);
VALIDATE_OFFSET(CCrimeBeingQd, m_bPoliceDontReallyCare, 0x19);
VALIDATE_OFFSET(CCrimeBeingQd, pad, 0x1A);
VALIDATE_SIZE(CCrimeBeingQd, 0x1C);

class CWanted {
public:
    unsigned int m_nChaosLevel; //amount of wanted points
    unsigned int m_nChaosLevelBeforeParole;  //minimum amount of points, not used
    unsigned int m_nLastTimeWantedDecreased;
    unsigned int m_nLastTimeWantedLevelChanged;
    unsigned int m_dwTimeOfParole;
    float m_fMultiplier;
    unsigned char m_nCopsInPursuit;
    unsigned char m_nMaxCopsInPursuit;
    unsigned char m_nMaxCopCarsInPursuit;
    unsigned char m_nCopsBeatingSuspect;
    unsigned short m_nChanceOnRoadBlock;
    union
    {
        unsigned char m_nWantedFlags;
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
    unsigned int m_nWantedLevel;
    unsigned int m_nWantedLevelBeforeParole;
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
VALIDATE_OFFSET(CWanted, m_nChaosLevel, 0x0);
VALIDATE_OFFSET(CWanted, m_nChaosLevelBeforeParole, 0x4);
VALIDATE_OFFSET(CWanted, m_nLastTimeWantedDecreased, 0x8);
VALIDATE_OFFSET(CWanted, m_nLastTimeWantedLevelChanged, 0xC);
VALIDATE_OFFSET(CWanted, m_dwTimeOfParole, 0x10);
VALIDATE_OFFSET(CWanted, m_fMultiplier, 0x14);
VALIDATE_OFFSET(CWanted, m_nCopsInPursuit, 0x18);
VALIDATE_OFFSET(CWanted, m_nMaxCopsInPursuit, 0x19);
VALIDATE_OFFSET(CWanted, m_nMaxCopCarsInPursuit, 0x1A);
VALIDATE_OFFSET(CWanted, m_nCopsBeatingSuspect, 0x1B);
VALIDATE_OFFSET(CWanted, m_nChanceOnRoadBlock, 0x1C);
VALIDATE_OFFSET(CWanted, m_nWantedFlags, 0x1E);
VALIDATE_OFFSET(CWanted, _pad0, 0x1F);
VALIDATE_OFFSET(CWanted, m_nWantedLevel, 0x20);
VALIDATE_OFFSET(CWanted, m_nWantedLevelBeforeParole, 0x24);
VALIDATE_OFFSET(CWanted, m_asCrimesBeingQd, 0x28);
VALIDATE_OFFSET(CWanted, m_apCopsInPursuit, 0x1E8);
VALIDATE_SIZE(CWanted, 0x210);