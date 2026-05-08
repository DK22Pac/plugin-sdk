/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CWanted.h"
#include "CPedClothesDesc.h"
#include "CVector.h"
#include "CVector2D.h"

class CEntity;
class CPed;
class CCopPed;

class PLUGIN_API CPlayerData {
public:
    CWanted * m_pWanted;
    CPedClothesDesc *m_pPedClothesDesc;
    CCopPed *m_pArrestingCop;
    CVector2D m_vecFightMovement;
    float m_fMoveBlendRatio;
    float m_fTimeCanRun;
    float m_fMoveSpeed;
    unsigned char m_nChosenWeapon;
    unsigned char m_nCarDangerCounter;
private:
    char _pad0[2];
public:
    unsigned int m_nStandStillTimer;
    unsigned int m_nHitAnimDelayTimer;
    float m_fAttackButtonCounter;
    void *m_pDangerCar;
    unsigned int m_bStoppedMoving : 1;
    unsigned int m_bAdrenaline : 1;
    unsigned int m_bHaveTargetSelected : 1;             // Needed to work out whether we lost target this frame
    unsigned int m_bFreeAiming : 1;
    unsigned int m_bCanBeDamaged : 1;
    unsigned int m_bAllMeleeAttackPtsBlocked : 1;       // if all of m_pMeleeAttackers[] is blocked by collision, just attack straight ahead
    unsigned int m_bJustBeenSnacking : 1;               // If this bit is true we have just bought something from a vending machine
    unsigned int m_bRequireHandleBreath : 1;
    unsigned int m_bGroupStuffDisabled : 1;             // if this is true the player can't recrout or give his group commands.
    unsigned int m_bGroupAlwaysFollow : 1;              // The group is told to always follow the player (used for girlfriend missions)
    unsigned int m_bGroupNeverFollow : 1;               // The group is told to always follow the player (used for girlfriend missions)
    unsigned int m_bInVehicleDontAllowWeaponChange : 1; // stop weapon change once driveby weapon has been given
    unsigned int m_bRenderWeapon : 1;                   // set to false during cutscenes so that knuckledusters are not rendered
    unsigned int m_nPlayerGroup;
    unsigned int m_nAdrenalineEndTime;
    unsigned char m_nDrunkenness;
    unsigned char m_nFadeDrunkenness;
    unsigned char m_nDrugLevel;
    unsigned char m_nScriptLimitToGangSize;
    float m_fBreath;
    unsigned int m_nMeleeWeaponAnimReferenced;
    unsigned int m_nMeleeWeaponAnimReferencedExtra;
    float m_fFPSMoveHeading;
    float m_fLookPitch;
    float m_fSkateBoardSpeed;
    float m_fSkateBoardLean;
    RpAtomic *m_pSpecialAtomic;
    float m_fGunSpinSpeed;
    float m_fGunSpinAngle;
    unsigned int m_nLastTimeFiring;
    unsigned int m_nTargetBone;
    CVector m_vecTargetBoneOffset;
    unsigned int m_nBusFaresCollected;
    bool m_bPlayerSprintDisabled;
    bool m_bDontAllowWeaponChange;
    bool m_bForceInteriorLighting;
private:
    char _pad1;
public:
    unsigned short m_nPadDownPressedInMilliseconds;
    unsigned short m_nPadUpPressedInMilliseconds;
    unsigned char m_nWetness;
    bool m_bPlayersGangActive;
    unsigned char m_nWaterCoverPerc;
private:
    char _pad2;
public:
    float m_fWaterHeight;
    unsigned int m_nFireHSMissilePressedTime;
    CEntity *m_LastHSMissileTarget;
    unsigned int m_nModelIndexOfLastBuildingShot;
    unsigned int m_nLastHSMissileLOSTime : 31;
    unsigned int m_bLastHSMissileLOS : 1;
    CPed *m_pCurrentProstitutePed;
    CPed *m_pLastProstituteShagged;
};
VALIDATE_OFFSET(CPlayerData, m_pWanted, 0x0);
VALIDATE_OFFSET(CPlayerData, m_pPedClothesDesc, 0x4);
VALIDATE_OFFSET(CPlayerData, m_pArrestingCop, 0x8);
VALIDATE_OFFSET(CPlayerData, m_vecFightMovement, 0xC);
VALIDATE_OFFSET(CPlayerData, m_fMoveBlendRatio, 0x14);
VALIDATE_OFFSET(CPlayerData, m_fTimeCanRun, 0x18);
VALIDATE_OFFSET(CPlayerData, m_fMoveSpeed, 0x1C);
VALIDATE_OFFSET(CPlayerData, m_nChosenWeapon, 0x20);
VALIDATE_OFFSET(CPlayerData, m_nCarDangerCounter, 0x21);
VALIDATE_OFFSET(CPlayerData, m_nStandStillTimer, 0x24);
VALIDATE_OFFSET(CPlayerData, m_nHitAnimDelayTimer, 0x28);
VALIDATE_OFFSET(CPlayerData, m_fAttackButtonCounter, 0x2C);
VALIDATE_OFFSET(CPlayerData, m_pDangerCar, 0x30);
VALIDATE_OFFSET(CPlayerData, m_nPlayerGroup, 0x38);
VALIDATE_OFFSET(CPlayerData, m_nAdrenalineEndTime, 0x3C);
VALIDATE_OFFSET(CPlayerData, m_nDrunkenness, 0x40);
VALIDATE_OFFSET(CPlayerData, m_nFadeDrunkenness, 0x41);
VALIDATE_OFFSET(CPlayerData, m_nDrugLevel, 0x42);
VALIDATE_OFFSET(CPlayerData, m_nScriptLimitToGangSize, 0x43);
VALIDATE_OFFSET(CPlayerData, m_fBreath, 0x44);
VALIDATE_OFFSET(CPlayerData, m_nMeleeWeaponAnimReferenced, 0x48);
VALIDATE_OFFSET(CPlayerData, m_nMeleeWeaponAnimReferencedExtra, 0x4C);
VALIDATE_OFFSET(CPlayerData, m_fFPSMoveHeading, 0x50);
VALIDATE_OFFSET(CPlayerData, m_fLookPitch, 0x54);
VALIDATE_OFFSET(CPlayerData, m_fSkateBoardSpeed, 0x58);
VALIDATE_OFFSET(CPlayerData, m_fSkateBoardLean, 0x5C);
VALIDATE_OFFSET(CPlayerData, m_pSpecialAtomic, 0x60);
VALIDATE_OFFSET(CPlayerData, m_fGunSpinSpeed, 0x64);
VALIDATE_OFFSET(CPlayerData, m_fGunSpinAngle, 0x68);
VALIDATE_OFFSET(CPlayerData, m_nLastTimeFiring, 0x6C);
VALIDATE_OFFSET(CPlayerData, m_nTargetBone, 0x70);
VALIDATE_OFFSET(CPlayerData, m_vecTargetBoneOffset, 0x74);
VALIDATE_OFFSET(CPlayerData, m_nBusFaresCollected, 0x80);
VALIDATE_OFFSET(CPlayerData, m_bPlayerSprintDisabled, 0x84);
VALIDATE_OFFSET(CPlayerData, m_bDontAllowWeaponChange, 0x85);
VALIDATE_OFFSET(CPlayerData, m_bForceInteriorLighting, 0x86);
VALIDATE_OFFSET(CPlayerData, m_nPadDownPressedInMilliseconds, 0x88);
VALIDATE_OFFSET(CPlayerData, m_nPadUpPressedInMilliseconds, 0x8A);
VALIDATE_OFFSET(CPlayerData, m_nWetness, 0x8C);
VALIDATE_OFFSET(CPlayerData, m_bPlayersGangActive, 0x8D);
VALIDATE_OFFSET(CPlayerData, m_nWaterCoverPerc, 0x8E);
VALIDATE_OFFSET(CPlayerData, m_fWaterHeight, 0x90);
VALIDATE_OFFSET(CPlayerData, m_nFireHSMissilePressedTime, 0x94);
VALIDATE_OFFSET(CPlayerData, m_LastHSMissileTarget, 0x98);
VALIDATE_OFFSET(CPlayerData, m_nModelIndexOfLastBuildingShot, 0x9C);
VALIDATE_OFFSET(CPlayerData, m_pCurrentProstitutePed, 0xA4);
VALIDATE_OFFSET(CPlayerData, m_pLastProstituteShagged, 0xA8);
VALIDATE_SIZE(CPlayerData, 0xAC);
