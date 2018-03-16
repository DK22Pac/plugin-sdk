/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "eWeaponType.h"
#include "CPad.h"
#include "CPlayerInfo.h"
#include "CWanted.h"


class CPlayerPed : public CPed {
public:
    CWanted *m_pWanted;
    CCopPed *m_pArrestingCop;   //  CCopPed *m_pArrestingCop;
	float m_fMoveSpeed;
	float m_fCurrentStamina;
	float m_fMaxStamina;
	float m_fStaminaProgress;
    unsigned char m_nSelectedWepSlot;
    bool m_bStoppedMoving;
    bool m_bShouldEvade;
private:
    char _pad1;
public:
    unsigned int m_nStandStillTimer;
    int m_nShotDelay;
    float m_fAttackButtonCounter;
    bool m_bHaveTargetSelected;
private:
    char _pad2[3];
public:
    CEntity *m_pEvadingFrom;
    int m_nTargettableObjects[4];
    unsigned int m_nAdrenalineEndTime;
    unsigned char m_nDrunkenness;             // Needed to work out whether we lost target this frame
    unsigned char m_nFadeDrunkenness;
    unsigned char m_nDrunkCountdown; //countdown in frames when the drunk effect ends
    bool m_bAdrenaline; 
    bool m_bFreeAiming;
    bool m_bDrunkVisualsWearOff;
    bool m_checkPlayerFlag;
private:
    char _pad3;
public:
    CVector m_vecSafePos[6];  //safe places from the player, for example behind a tree
    CPed* m_pPedAtSafePos[6]; //ped assigned to the safe place (cops)
    CPlayerPed* m_pCheckPlayers[6]; //checks something with players, could be a leftover from original multiplayer
    short m_nCheckPlayersIndex;
private:
    char pad[2];
public:
    float m_fWalkAngle; //angle between heading and walking direction
    float m_fFPSMoveHeading;
    RpAtomic* m_pMinigunTopAtomic; //atomic for the spinning part of the minigun model
    float m_fGunSpinSpeed; // for minigun
    float m_fGunSpinAngle;
    unsigned int m_nPadDownPressedInMilliseconds;
    unsigned int m_nPadUpPressedInMilliseconds;

    //funcs
    void AnnoyPlayerPed(bool arg0);
    CPlayerPed();
    void ClearAdrenaline();
    void ClearWeaponTarget();
    static void DeactivatePlayerPed(int playerId);
    void DoStuffToGoOnFire();
    float DoWeaponSmoothSpray();
    bool DoesPlayerWantNewWeapon(eWeaponType weaponType, bool enable);
    void EvaluateNeighbouringTarget(CEntity* target, CEntity** outTarget, float* outTargetPriority, float maxDistance, float arg4, bool arg5, bool arg6, bool arg7);
    void EvaluateTarget(CEntity* target, CEntity** outTarget, float* outTargetPriority, float maxDistance, float arg4, bool arg5, bool arg6);
    int FindMeleeAttackPoint(CPed* arg0, CVector& arg1, unsigned int& arg2);
    short FindNewAttackPoints();
    bool FindNextWeaponLockOnTarget(CEntity* target, bool arg1);
    bool FindWeaponLockOnTarget();
    CPlayerInfo* GetPlayerInfoForThisPlayerPed();
    void KeepAreaAroundPlayerClear();
    void MakeChangesForNewWeapon(eWeaponType weaponType);
    void MakeChangesForNewWeapon(int weaponSlot);
    void MakeObjectTargettable(int arg0, bool arg1);
    void PlayIdleAnimations(CPad* pad);
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
    void RemovePedFromMeleeList(CPed* ped);
    void SetInitialState();
    void SetNearbyPedsToInteractWithPlayer();
    void SetRealMoveAnim();
    void SetWantedLevel(int level);
    void SetWantedLevelNoDrop(int level);
    static void SetupPlayerPed(int playerId);
    void UpdateMeleeAttackers();
    int GetWantedLevel();
};

VALIDATE_SIZE(CPlayerPed, 0x6D8);