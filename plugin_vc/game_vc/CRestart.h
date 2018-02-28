/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CRestart {
public:
    // variables
    static CVector *HospitalRestartPoints; // [8]
    static float &HospitalRestartHeadings; // [8]
    static unsigned short &NumberOfHospitalRestarts;
    static bool &bFadeInAfterNextDeath;

    static CVector *PoliceRestartPoints;   // [8]
    static float &PoliceRestartHeadings;   // [8]
    static unsigned short &NumberOfPoliceRestarts;
    static bool &bFadeInAfterNextArrest;

    static CVector *OverridePosition;
    static float &OverrideHeading;
    static bool &bOverrideRestart;
    static unsigned char &OverrideHospitalLevel;
    static unsigned char &OverridePoliceStationLevel;

    // functions
    static void LoadAllRestartPoints(unsigned char* bufferPointer, unsigned int structSize);
    static void SaveAllRestartPoints(unsigned char* bufferPointer, unsigned int* structSize);
    static void CancelOverrideRestart();
    static void OverrideNextRestart(CVector const& point, float angle);
    static void FindClosestPoliceRestartPoint(CVector const& point, CVector* storedPoint, float* storedAngle);
    static void FindClosestHospitalRestartPoint(CVector const& point, CVector* storedPoint, float* storedAngle);
    static void AddPoliceRestartPoint(CVector const& point, float angle);
    static void AddHospitalRestartPoint(CVector const& point, float angle);
    static void Initialise();
};
