/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "CWeapon.h"
#include "CPad.h"
#include "CPlayerInfo.h"
#include "CWanted.h"

class CPlayerPed : public CPed {
public:

	CWanted *m_pWanted;
	int *m_pArrestingCop;   //  CCopPed *m_pArrestingCop;
	float m_fMoveSpeed;
	float m_fCurrentStamina;
	float m_fMaxStamina;
	float m_fStaminaProgress;
	char m_bWeaponSlot;
	char m_bSpeedTimerFlag;
	char m_bShouldEvade;
	char field_1367;
	int m_nSpeedTimer;
	int m_nShotDelay;
	float field_1376;
	char field_1380;
	char field_1381;
	char field_1382;
	char field_1383;
	CEntity *m_pEvadingFrom;
	int m_nTargettableObjects[4];
	char m_bAdrenalineActive;
	char m_bHasLockOnTarget;
	char field_1406;
	char field_1407;
	int m_bAdrenalineTime;
	char m_bCanBeDamaged;
	char field_1413;
	char field_1414;
	char field_1415;
	CVector field_1416[6];
	int field_1488[6];
	float field_1512;
	float field_1516;

    //funcs
    void AnnoyPlayerPed(bool arg0);
    CPlayerPed();
    void ClearAdrenaline();
    void ClearWeaponTarget();
    static void DeactivatePlayerPed(int playerId);
    void DoStuffToGoOnFire();
    bool DoWeaponSmoothSpray();
    bool DoesTargetHaveToBeBroken(CVector arg0, CWeapon* weapon);
    void EvaluateNeighbouringTarget(CEntity* target, CEntity** outTarget, float* outTargetPriority, float maxDistance, float arg4, bool arg5);
    void EvaluateTarget(CEntity* target, CEntity** outTarget, float* outTargetPriority, float maxDistance, float arg4, bool arg5);
    bool FindNextWeaponLockOnTarget(CEntity* target, bool arg1);
    bool FindWeaponLockOnTarget();
    CPlayerInfo* GetPlayerInfoForThisPlayerPed();
    bool IsThisPedAttackingPlayer(CPed* ped);
    void KeepAreaAroundPlayerClear();
    void MakeChangesForNewWeapon(signed char weaponSlot);
    void MakeObjectTargettable(int arg0);
    void PlayerControl1stPersonRunAround(CPad* pad);
    void PlayerControlFighter(CPad* pad);
    void PlayerControlM16(CPad* pad);
    void PlayerControlSniper(CPad* pad);
    void PlayerControlZelda(CPad* pad);
    void ProcessAnimGroups();
    void ProcessPlayerWeapon(CPad* pad);
    void ProcessWeaponSwitch(CPad* pad);
    void ReApplyMoveAnims();
    static void ReactivatePlayerPed(int playerId);
    void RestoreSprintEnergy(float arg0);
    void RunningLand(CPad* pad);
    void SetInitialState();
    void SetRealMoveAnim();
    void SetWantedLevel(int level);
    void SetWantedLevelNoDrop(int level);
    static void SetupPlayerPed(int playerId);
    void UseSprintEnergy();
};

VALIDATE_SIZE(CPlayerPed, 0x5F0);
