/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVehicle.h"

class CDarkel {
public:
	static bool FrenzyOnGoing();
	static void Init();
	static void DrawMessages();
	static __int16 ReadStatus();
	static void RegisterKillNotByPlayer(CPed const* pKilledPed);
	static bool ThisPedShouldBeKilledForFrenzy(CPed const* pPed);
	static bool ThisVehicleShouldBeKilledForFrenzy(CVehicle const* pVehicle);
	static void StartFrenzy(eWeaponType weapontype, int Timelimit, unsigned short KillsNeeded, int ModelToKill, unsigned short* pStartMessage, int ModelToKill2, int ModelToKill3, int ModelToKill4, bool bStandardSoundAndMessages, bool bNeedHeadShot);
	static void ResetModelsKilledByPlayer(int playerid);
	static int QueryModelsKilledByPlayer(int player, int modelid);
	static int FindTotalPedsKilledByPlayer(int player);
	static void DealWithWeaponChangeAtEndOfFrenzy();
	static bool CheckDamagedWeaponType(int damageWeaponID, int expectedDamageWeaponID);
	static void Update();
	static void ResetOnPlayerDeath();
	static void FailKillFrenzy();
	static void RegisterKillByPlayer(CPed const* pKilledPed, eWeaponType damageWeaponID, bool bHeadShotted, int arg4);
	static void RegisterCarBlownUpByPlayer(CVehicle* pVehicle, int arg2);
};
