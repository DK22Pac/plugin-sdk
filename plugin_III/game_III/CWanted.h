/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "eCrimeType.h"
#include "CVector.h"
#include "CCopPed.h"

class PLUGIN_API CCrimeBeingQd {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CCrimeBeingQd)

public:
    eCrimeType m_nCrimeType;
    unsigned int m_nCrimeId;
    unsigned int m_nTimeOfQing;
    CVector m_vecPosn;
    bool m_bAlreadyReported;
    bool m_bPoliceDontReallyCare;

    SUPPORTED_10EN_11EN_STEAM void operator=(CCrimeBeingQd const &right);
};

class PLUGIN_API CWanted {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CWanted)

public:
    int m_nChaosLevel;
    unsigned int m_nLastTimeWantedDecreased;
    unsigned int m_LastTimeWantedLevelChanged;
    float m_fMultiplier;
    unsigned char m_nCopsInPursuit;
    unsigned char m_nMaxCopsInPursuit;
    unsigned char m_nMaxCopCarsInPursuit;
    unsigned char m_nCopsBeatingSuspect;
    unsigned short m_nChanceOnRoadBlock;
    unsigned char m_nWantedFlags;
    int m_nWantedLevel;
    CCrimeBeingQd m_aCrimesBeingQd[16];
    CCopPed *m_apCopsInPursuit[10];

    //! 6
    SUPPORTED_10EN_11EN_STEAM static int &MaximumWantedLevel;
    //! 6400
    SUPPORTED_10EN_11EN_STEAM static int &nMaximumWantedLevel;

    SUPPORTED_10EN_11EN_STEAM bool AddCrimeToQ(eCrimeType crimeType, int crimeId, CVector const &pos, bool bAlreadyReported, bool bPoliceDontReallyCare);
    SUPPORTED_10EN_11EN_STEAM bool AreArmyRequired();
    SUPPORTED_10EN_11EN_STEAM bool AreFbiRequired();
    SUPPORTED_10EN_11EN_STEAM bool AreSwatRequired();
    SUPPORTED_10EN_11EN_STEAM void ClearQdCrimes();
    SUPPORTED_10EN_11EN_STEAM void Initialise();
    SUPPORTED_10EN_11EN_STEAM int NumOfHelisRequired();
    SUPPORTED_10EN_11EN_STEAM void RegisterCrime(eCrimeType crimeType, CVector const &pos, unsigned int crimeId, bool bPoliceDontReallyCare);
    SUPPORTED_10EN_11EN_STEAM void RegisterCrime_Immediately(eCrimeType crimeType, CVector const &pos, unsigned int crimeId, bool bPoliceDontReallyCare);
    SUPPORTED_10EN_11EN_STEAM void ReportCrimeNow(eCrimeType crimeType, CVector const &pos, bool bPoliceDontReallyCare);
    SUPPORTED_10EN_11EN_STEAM void Reset();
    SUPPORTED_10EN_11EN_STEAM void ResetPolicePursuit();
    SUPPORTED_10EN_11EN_STEAM void SetWantedLevel(int level);
    SUPPORTED_10EN_11EN_STEAM void SetWantedLevelNoDrop(int level);
    SUPPORTED_10EN_11EN_STEAM void Update();
    SUPPORTED_10EN_11EN_STEAM void UpdateCrimesQ();
    SUPPORTED_10EN_11EN_STEAM void UpdateWantedLevel();

    SUPPORTED_10EN_11EN_STEAM static void SetMaximumWantedLevel(int level);
    SUPPORTED_10EN_11EN_STEAM static int WorkOutPolicePresence(CVector pos, float radius);
};

VALIDATE_SIZE(CCrimeBeingQd, 0x1C);
VALIDATE_SIZE(CWanted, 0x204);

#include "meta/meta.CWanted.h"
