/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"

class CDarkel {
public:
    //variables
    static short &RegisteredKills;
    static int &PreviousTime;
    static int &ModelToKill;
    static int &ModelToKill2;
    static int &ModelToKill3;
    static int &ModelToKill4;
    static int &TimeLimit;
    static int &AmmoInterruptedWeapon;
    static int &KillsNeeded;
    static int &pStartMessage;
    static int &InterruptedWeaponTypeSelected;
    static int &InterruptedWeaponType;
    static int &TimeOfFrenzyStart;
    static int &WeaponType;
    static short &Status;
    static bool &bProperKillFrenzy;
    static bool &bStandardSoundAndMessages;
    static char &bNeedHeadShot;

    //funcs
    static void DealWithWeaponChangeAtEndOfFrenzy();
    static void DrawMessages();
    static bool FrenzyOnGoing();
    static void Init();
    static short QueryModelsKilledByPlayer(int arg0);
    static short ReadStatus();
    static int RegisterCarBlownUpByPlayer(CVehicle* vehicle);
    static void RegisterKillByPlayer(CPed* ped, eWeaponType weaponType, bool arg2);
    static void RegisterKillNotByPlayer(CPed* arg0, eWeaponType weaponType);
    static void ResetModelsKilledByPlayer();
    static void ResetOnPlayerDeath();
    static void StartFrenzy(eWeaponType weaponType, int arg1, unsigned short arg2, int arg3, unsigned short* arg4, int arg5, int arg6, int arg7, bool arg8, bool arg9);
    static void Update();
};