/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "eCrimeType.h"
#include "CCopPed.h"

class CCrimeBeingQd {
public:
    eCrimeType m_nCrimeType;
    unsigned int m_nCrimeId;
    unsigned int m_nTimeOfQing;
    CVector m_vecPosn;
    bool m_bAlreadyReported;
    bool m_bPoliceDontReallyCare;
    //char _pad1A[2];

    //funcs
    CCrimeBeingQd();
    CCrimeBeingQd* operator=(CCrimeBeingQd const& crime);
};

VALIDATE_SIZE(CCrimeBeingQd, 0x1C);

class CWanted {
public:
    unsigned int m_nChaosLevel;
    unsigned int m_nLastTimeWantedDecreased;
    unsigned int m_LastTimeWantedLevelChanged;
    float m_fMultiplier;
    unsigned char m_nCopsInPursuit;
    unsigned char m_nMaxCopsInPursuit;
    unsigned char m_nMaxCopCarsInPursuit;
    unsigned char m_nCopsBeatingSuspect;
    unsigned short m_nChanceOnRoadBlock;
    struct {
        unsigned char m_bPoliceBackOff : 1;
        unsigned char m_bPoliceBackOffGarage : 1;
        unsigned char m_bSwatRequired : 1;
        unsigned char m_bFbiRequired : 1;
        unsigned char m_bArmyRequired : 1;
    } m_nWantedFlags;
    //char _pad17[1];
    unsigned int m_nWantedLevel;
    CCrimeBeingQd m_aCrimesBeingQd[16];
    CCopPed *m_apCopsInPursuit[10];

    //variables
    static unsigned int &nMaximumWantedLevel; // 6400
    static unsigned int &MaximumWantedLevel;  // 6

    //funcs
    void Initialise();
    void Reset();
    void Update();
    void UpdateWantedLevel();
    void RegisterCrime(eCrimeType crimeType, CVector const& posn, unsigned int crimeId, bool bPoliceDontReallyCare);
    void RegisterCrime_Immediately(eCrimeType crimeType, CVector const& posn, unsigned int crimeId, bool bPoliceDontReallyCare);
    void SetWantedLevel(int level);
    void SetWantedLevelNoDrop(int level);
    static void SetMaximumWantedLevel(int level);
    bool AreSwatRequired();
    bool AreFbiRequired();
    bool AreArmyRequired();
    int NumOfHelisRequired();
    void ResetPolicePursuit();
    static void WorkOutPolicePresence(CVector posn, float radius);
    void ClearQdCrimes();
    bool AddCrimeToQ(eCrimeType crimeType, int crimeId, CVector const& posn, bool bAlreadyReported, bool bPoliceDontReallyCare);
    void UpdateCrimesQ();
    void ReportCrimeNow(eCrimeType crimeType, CVector const& posn, bool bPoliceDontReallyCare);
};

VALIDATE_SIZE(CWanted, 0x204);
