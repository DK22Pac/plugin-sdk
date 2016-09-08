/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CWanted.h"
#include "CClothes.h"
#include "CVector.h"
#include "CVector2D.h"

#pragma pack(push, 4)
class PLUGIN_API CPlayerData
{
public:
	CWanted *m_pWanted;
	CClothes *m_pClothes;
	class CCopPed *m_pArrestingCop;
	CVector2D m_vFightMovement;
	float m_fMoveBlendRatio;
	float m_fTimeCanRun;
	float m_fSprintEnergy;
	unsigned __int8 m_nChosenWeapon;
	unsigned __int8 m_nCarDangerCounter;
	__int8 _pad0[2];
	unsigned __int32 m_dwStandStillTimer;
	unsigned __int32 m_dwHitAnimDelayTimer;
	float m_fAttackButtonCounter;
	void *m_pDangerCar;
	unsigned __int32 m_bStoppedMoving : 1;
	unsigned __int32 m_bAdrenaline : 1;
	unsigned __int32 m_bHaveTargetSelected : 1;             // Needed to work out whether we lost target this frame
	unsigned __int32 m_bFreeAiming : 1;
	unsigned __int32 m_bCanBeDamaged : 1;
	unsigned __int32 m_bAllMeleeAttackPtsBlocked : 1;       // if all of m_pMeleeAttackers[] is blocked by collision, just attack straight ahead
	unsigned __int32 m_JustBeenSnacking : 1;                // If this bit is true we have just bought something from a vending machine
	unsigned __int32 m_bRequireHandleBreath : 1;
	unsigned __int32 m_GroupStuffDisabled : 1;              // if this is true the player can't recrout or give his group commands.
	unsigned __int32 m_GroupAlwaysFollow : 1;               // The group is told to always follow the player (used for girlfriend missions)
	unsigned __int32 m_GroupNeverFollow : 1;                // The group is told to always follow the player (used for girlfriend missions)
	unsigned __int32 m_bInVehicleDontAllowWeaponChange : 1; // stop weapon change once driveby weapon has been given
	unsigned __int32 m_bRenderWeapon : 1;                   // set to false during cutscenes so that knuckledusters are not rendered
	unsigned __int32 m_dwPlayerGroup;
	unsigned __int32 m_dwAdrenalineEndTime;
	unsigned __int8 m_bDrunkenness;
	unsigned __int8 m_bFadeDrunkenness;
	unsigned __int8 m_bDrugLevel;
	unsigned __int8 m_bScriptLimitToGangSize;
	float m_fBreath;
	unsigned __int32 m_dwMeleeWeaponAnimReferenced;
	unsigned __int32 m_dwMeleeWeaponAnimReferencedExtra;
	float m_fFPSMoveHeading;
	float m_fLookPitch;
	float m_fSkateBoardSpeed;
	float m_fSkateBoardLean;
	struct RpAtomic *m_pSpecialAtomic;
	float m_fGunSpinSpeed;
	float m_fGunSpinAngle;
	unsigned __int32 m_dwLastTimeFiring;
	unsigned __int32 m_dwTargetBone;
	CVector m_vTargetBoneOffset;
	unsigned __int32 m_dwBusFaresCollected;
	unsigned __int8 m_bPlayerSprintDisabled;
	unsigned __int8 m_bDontAllowWeaponChange;
	unsigned __int8 m_bForceInteriorLighting;
	char _pad1;
	unsigned __int16 m_wDPadDownPressedInMilliseconds;
	unsigned __int16 m_wDPadUpPressedInMilliseconds;
	unsigned __int8 m_bWetness;
	unsigned __int8 m_bPlayersGangActive;
	unsigned __int8 m_bWaterCoverPerc;
	__int8 _pad2;
	float m_fWaterHeight;
	unsigned __int32 m_dwFireHSMissilePressedTime;
	class CEntity *m_LastHSMissileTarget;
	unsigned __int32 m_dwModelIndexOfLastBuildingShot;
	unsigned __int32 m_dwLastHSMissileLOSTime : 31;
	unsigned __int32 m_bLastHSMissileLOS : 1;
	class CPed *m_pCurrentProstitutePed;
	class CPed *m_pLastProstituteShagged;
};
#pragma pack(pop)

VALIDATE_SIZE(CPlayerData, 0xAC);