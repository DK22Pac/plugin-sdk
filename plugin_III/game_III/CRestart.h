/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CRestart {
public:
    SUPPORTED_10EN_11EN_STEAM static float(&PoliceRestartHeadings)[8]; // static float PoliceRestartHeadings[8]
    SUPPORTED_10EN_11EN_STEAM static float(&HospitalRestartHeadings)[8]; // static float HospitalRestartHeadings[8]
    SUPPORTED_10EN_11EN_STEAM static CVector(&PoliceRestartPoints)[8]; // static CVector PoliceRestartPoints[8]
    SUPPORTED_10EN_11EN_STEAM static CVector(&HospitalRestartPoints)[8]; // static CVector HospitalRestartPoints[8]
    SUPPORTED_10EN_11EN_STEAM static CVector &OverridePosition;
    SUPPORTED_10EN_11EN_STEAM static float &OverrideHeading;
    SUPPORTED_10EN_11EN_STEAM static unsigned short &NumberOfPoliceRestarts;
    SUPPORTED_10EN_11EN_STEAM static unsigned short &NumberOfHospitalRestarts;
    SUPPORTED_10EN_11EN_STEAM static unsigned char &OverrideHospitalLevel;
    SUPPORTED_10EN_11EN_STEAM static unsigned char &OverridePoliceStationLevel;
    SUPPORTED_10EN_11EN_STEAM static bool &bOverrideRestart;
    SUPPORTED_10EN_11EN_STEAM static bool &bFadeInAfterNextArrest;
    SUPPORTED_10EN_11EN_STEAM static bool &bFadeInAfterNextDeath;

    SUPPORTED_10EN_11EN_STEAM static void AddHospitalRestartPoint(CVector const &pos, float heading);
    SUPPORTED_10EN_11EN_STEAM static void AddPoliceRestartPoint(CVector const &pos, float heading);
    SUPPORTED_10EN_11EN_STEAM static void CancelOverrideRestart();
    SUPPORTED_10EN_11EN_STEAM static void FindClosestHospitalRestartPoint(CVector const &pos, CVector *outPos, float *outHeading);
    SUPPORTED_10EN_11EN_STEAM static void FindClosestPoliceRestartPoint(CVector const &pos, CVector *outPos, float *outHeading);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void LoadAllRestartPoints(unsigned char *buf, unsigned int size);
    SUPPORTED_10EN_11EN_STEAM static void OverrideNextRestart(CVector const &pos, float heading);
    SUPPORTED_10EN_11EN_STEAM static void SaveAllRestartPoints(unsigned char *buf, unsigned int *size);
};

#include "meta/meta.CRestart.h"
