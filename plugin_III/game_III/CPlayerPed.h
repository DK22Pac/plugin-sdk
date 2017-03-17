/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CPed.h"
#include "CWeapon.h"
#include "CPad.h"
#include "CPlayerInfo.h"
#include "CWanted.h"

class CPlayerPed : public CPed {
public:
    
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
