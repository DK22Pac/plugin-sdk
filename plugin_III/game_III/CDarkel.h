/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "eWeaponType.h"
#include "CVehicle.h"

enum PLUGIN_API eDarkelStatus : unsigned short {
    KILLFRENZY_NONE = 0,
    KILLFRENZY_ONGOING = 1,
    KILLFRENZY_PASSED = 2,
    KILLFRENZY_FAILED = 3
};

class PLUGIN_API CDarkel {
public:
    SUPPORTED_10EN_11EN_STEAM static unsigned short(&RegisteredKills)[200]; // static unsigned short RegisteredKills[200]
    SUPPORTED_10EN_11EN_STEAM static int &PreviousTime;
    SUPPORTED_10EN_11EN_STEAM static int &ModelToKill4;
    SUPPORTED_10EN_11EN_STEAM static int &ModelToKill3;
    SUPPORTED_10EN_11EN_STEAM static int &ModelToKill2;
    SUPPORTED_10EN_11EN_STEAM static int &TimeLimit;
    SUPPORTED_10EN_11EN_STEAM static int &AmmoInterruptedWeapon;
    SUPPORTED_10EN_11EN_STEAM static int &KillsNeeded;
    SUPPORTED_10EN_11EN_STEAM static wchar_t *&pStartMessage;
    SUPPORTED_10EN_11EN_STEAM static int &ModelToKill;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &TimeOfFrenzyStart;
    SUPPORTED_10EN_11EN_STEAM static eWeaponType &WeaponType;
    SUPPORTED_10EN_11EN_STEAM static unsigned short &Status;
    SUPPORTED_10EN_11EN_STEAM static unsigned char &InterruptedWeapon;
    SUPPORTED_10EN_11EN_STEAM static bool &bProperKillFrenzy;
    SUPPORTED_10EN_11EN_STEAM static bool &bStandardSoundAndMessages;
    SUPPORTED_10EN_11EN_STEAM static bool &bNeedHeadShot;

    SUPPORTED_10EN_11EN_STEAM static unsigned char CalcFade(unsigned int time, unsigned int min, unsigned int max);
    SUPPORTED_10EN_11EN_STEAM static void DrawMessages();
    SUPPORTED_10EN_11EN_STEAM static bool FrenzyOnGoing();
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static unsigned short QueryModelsKilledByPlayer(int modelId);
    SUPPORTED_10EN_11EN_STEAM static eDarkelStatus ReadStatus();
    SUPPORTED_10EN_11EN_STEAM static void RegisterCarBlownUpByPlayer(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void RegisterKillByPlayer(CPed *ped, eWeaponType weaponType, bool headShot);
    SUPPORTED_10EN_11EN_STEAM static void RegisterKillNotByPlayer(CPed *ped, eWeaponType weaponType);
    SUPPORTED_10EN_11EN_STEAM static void ResetModelsKilledByPlayer();
    SUPPORTED_10EN_11EN_STEAM static void ResetOnPlayerDeath();
    SUPPORTED_10EN_11EN_STEAM static void StartFrenzy(eWeaponType weaponType, int time, unsigned short kill, int model, wchar_t *text, int model2, int model3, int model4, bool standardSound, bool headShot);
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

#include "meta/meta.CDarkel.h"
