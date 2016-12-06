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

class CWanted {
public:

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