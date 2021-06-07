/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "CWanted.h"
#include "CVector.h"
#include "CPad.h"
#include "CWeapon.h"
#include "CPlayerInfo.h"
class CCopPed;

class PLUGIN_API CPlayerPed : public CPed {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPlayerPed)

public:
    CWanted *m_pWanted;
    CCopPed *m_pArrestingCop;
    float m_fMoveSpeed;
    float m_fCurrentStamina;
    float m_fMaxStamina;
    float m_fStaminaProgress;
    unsigned char m_nSelectedWepSlot; //!< eWeaponType
    bool m_bSpeedTimerFlag;
    unsigned char m_nEvadeAmount;
    char field_557;
    unsigned int m_nSpeedTimer;
    unsigned int m_nHitAnimDelayTimer;
    float m_fAttackButtonCounter;
    bool m_bHaveTargetSelected; //!< may have better name
    CEntity *m_pEvadingFrom; //!< is this CPhysical?
    int m_nTargettableObjects[4];
    bool m_bAdrenalineActive;
    bool m_bHasLockOnTarget;
    unsigned int m_nAdrenalineTime;
    bool m_bCanBeDamaged;
    char field_585;
    CVector m_vecSafePos[6]; //!< safe places from the player, for example behind a tree
    CPed *m_pPedAtSafePos[6];
    float m_fWalkAngle;
    float m_fFPSMoveHeading;

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)


    // virtual function #2 (not overriden)


    // virtual function #3 (not overriden)


    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)


    // virtual function #6 (not overriden)


    // virtual function #7 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void ProcessControl();

    // virtual function #9 (not overriden)


    // virtual function #10 (not overriden)


    // virtual function #11 (not overriden)


    // virtual function #12 (not overriden)


    // virtual function #13 (not overriden)


    // virtual function #14 (not overriden)


    // virtual function #15 (not overriden)


    // virtual function #16 (not overriden)


    // virtual function #17 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void SetMoveAnim();

    SUPPORTED_10EN_11EN_STEAM void AnnoyPlayerPed(bool annoyedByPassingEntity);
    SUPPORTED_10EN_11EN_STEAM void ClearAdrenaline();
    SUPPORTED_10EN_11EN_STEAM void ClearWeaponTarget();
    SUPPORTED_10EN_11EN_STEAM void DoStuffToGoOnFire();
    SUPPORTED_10EN_11EN_STEAM bool DoWeaponSmoothSpray();
    SUPPORTED_10EN_11EN_STEAM bool DoesTargetHaveToBeBroken(CVector target, CWeapon *weapon);
    SUPPORTED_10EN_11EN_STEAM void EvaluateNeighbouringTarget(CEntity *candidate, CEntity **targetPtr, float *lastCloseness, float distLimit, float angleOffset, bool lookToLeft);
    SUPPORTED_10EN_11EN_STEAM void EvaluateTarget(CEntity *candidate, CEntity **targetPtr, float *lastCloseness, float distLimit, float angleOffset, bool priority);
    SUPPORTED_10EN_11EN_STEAM bool FindNextWeaponLockOnTarget(CEntity *previousTarget, bool lookToLeft);
    SUPPORTED_10EN_11EN_STEAM bool FindWeaponLockOnTarget();
    SUPPORTED_10EN_11EN_STEAM CPlayerInfo *GetPlayerInfoForThisPlayerPed();
    SUPPORTED_10EN_11EN_STEAM bool IsThisPedAttackingPlayer(CPed *ped);
    SUPPORTED_10EN_11EN_STEAM void KeepAreaAroundPlayerClear();
    SUPPORTED_10EN_11EN_STEAM void MakeChangesForNewWeapon(char weaponType);
    SUPPORTED_10EN_11EN_STEAM void MakeObjectTargettable(int handle);
    SUPPORTED_10EN_11EN_STEAM void PlayerControl1stPersonRunAround(CPad *pad);
    SUPPORTED_10EN_11EN_STEAM void PlayerControlFighter(CPad *pad);
    SUPPORTED_10EN_11EN_STEAM void PlayerControlM16(CPad *pad);
    SUPPORTED_10EN_11EN_STEAM void PlayerControlSniper(CPad *pad);
    SUPPORTED_10EN_11EN_STEAM void PlayerControlZelda(CPad *pad);
    SUPPORTED_10EN_11EN_STEAM void ProcessAnimGroups();
    SUPPORTED_10EN_11EN_STEAM void ProcessPlayerWeapon(CPad *pad);
    SUPPORTED_10EN_11EN_STEAM void ProcessWeaponSwitch(CPad *pad);
    SUPPORTED_10EN_11EN_STEAM void ReApplyMoveAnims();
    SUPPORTED_10EN_11EN_STEAM void RestoreSprintEnergy(float restoreSpeed);
    SUPPORTED_10EN_11EN_STEAM void RunningLand(CPad *pad);
    SUPPORTED_10EN_11EN_STEAM void SetInitialState();
    SUPPORTED_10EN_11EN_STEAM void SetRealMoveAnim();
    SUPPORTED_10EN_11EN_STEAM void SetWantedLevel(int level);
    SUPPORTED_10EN_11EN_STEAM void SetWantedLevelNoDrop(int level);
    SUPPORTED_10EN_11EN_STEAM void UseSprintEnergy();

    SUPPORTED_10EN_11EN_STEAM static void DeactivatePlayerPed(int playerId);
    SUPPORTED_10EN_11EN_STEAM static void ReactivatePlayerPed(int playerId);
    SUPPORTED_10EN_11EN_STEAM static void SetupPlayerPed(int playerId);
};

VTABLE_DESC(CPlayerPed, 0x5FA500, 19);
VALIDATE_SIZE(CPlayerPed, 0x5F0);

#include "meta/meta.CPlayerPed.h"
