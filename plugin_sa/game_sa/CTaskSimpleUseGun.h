/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CVector.h"
#include "CVector2D.h"
#include "CWeaponInfo.h"
#include "CAnimBlendAssociation.h"
#include "CEntity.h"

class CTaskSimpleUseGun : public CTaskSimple
{
protected:
    CTaskSimpleUseGun(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    bool m_bIsFinished;
    bool m_bIsInControl;
    bool m_bMoveControl;
    bool m_bFiredGun;
    bool m_bBlockedLOS;
    union
    {
        unsigned char m_nFireGunThisFrame;
        struct
        {
                unsigned char bRightHand : 1;
                unsigned char bLefttHand : 1;
        };
    };
    bool m_bSkipAim;

    unsigned char m_nNextCommand;   // 0x1 reloading - 0x2 firing
    unsigned char m_nLastCommand;	// active command - 0x1 reloading - 0x2 firing
private:
    char _pad[3];
public:
    CVector2D m_vecMoveCommand;

    CEntity *m_pTarget;
    CVector m_vecTarget;

    CAnimBlendAssociation *m_pAnim;

    CWeaponInfo *m_pWeaponInfo;
    unsigned short m_nBurstLength;
    unsigned short m_nBurstShots;

    unsigned char m_nCountDownFrames;
    bool m_ArmIKInUse;
    bool m_LookIKInUse;
    bool m_bAimImmediate;

    CTaskSimpleUseGun(CEntity *pTargetEntity, CVector vecTarget, unsigned char nCommand, unsigned short nBurstLength = 1, bool bAimImmediate = false);
};
VALIDATE_OFFSET(CTaskSimpleUseGun, m_bIsFinished, 0x8);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_bIsInControl, 0x9);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_bMoveControl, 0xA);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_bFiredGun, 0xB);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_bBlockedLOS, 0xC);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_nFireGunThisFrame, 0xD);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_bSkipAim, 0xE);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_nNextCommand, 0xF);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_nLastCommand, 0x10);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_vecMoveCommand, 0x14);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_pTarget, 0x1C);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_vecTarget, 0x20);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_pAnim, 0x2C);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_pWeaponInfo, 0x30);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_nBurstLength, 0x34);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_nBurstShots, 0x36);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_nCountDownFrames, 0x38);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_ArmIKInUse, 0x39);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_LookIKInUse, 0x3A);
VALIDATE_OFFSET(CTaskSimpleUseGun, m_bAimImmediate, 0x3B);
VALIDATE_SIZE(CTaskSimpleUseGun, 0x3C);

