/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CAnimBlendAssociation.h"
#include "CEntity.h"
#include "CWeaponInfo.h"



class PLUGIN_API CTaskSimpleGangDriveBy : public CTaskSimple {
protected:
    CTaskSimpleGangDriveBy(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    bool m_bIsFinished;
    bool m_bAnimsReferenced;
    bool m_bSeatRHS;
    bool m_bInRangeToShoot;
    bool m_bInWeaponRange;
    bool m_bReachedAbortRange;
    bool m_bFromScriptCommand;
    char m_nNextCommand;
    char m_nLastCommand;
    char m_nBurstShots;
    char m_nDrivebyStyle;
    char m_nFrequencyPercentage;
    char m_nFakeShootDirn;
private:
    char _pad;
public:
    short m_nAttackTimer;
    unsigned int m_nLOSCheckTime;
    bool m_nLOSBlocked;
private:
    char _pad2[3];
public:
    float m_fAbortRange;
    int m_nRequiredAnimID;
    int m_nRequiredAnimGroup;
    CAnimBlendAssociation *m_pAnim;
    CWeaponInfo *m_pWeaponInfo;
    CEntity *m_pTargetEntity;
    CVector m_vecCoords;

    CTaskSimpleGangDriveBy(CEntity *pTargetEntity, const CVector *pVecTarget, float fAbortRange, 
        char FrequencyPercentage, char nDrivebyStyle, bool bSeatRHS);
};
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_bIsFinished, 0x8);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_bAnimsReferenced, 0x9);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_bSeatRHS, 0xA);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_bInRangeToShoot, 0xB);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_bInWeaponRange, 0xC);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_bReachedAbortRange, 0xD);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_bFromScriptCommand, 0xE);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_nNextCommand, 0xF);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_nLastCommand, 0x10);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_nBurstShots, 0x11);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_nDrivebyStyle, 0x12);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_nFrequencyPercentage, 0x13);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_nFakeShootDirn, 0x14);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_nAttackTimer, 0x16);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_nLOSCheckTime, 0x18);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_nLOSBlocked, 0x1C);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_fAbortRange, 0x20);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_nRequiredAnimID, 0x24);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_nRequiredAnimGroup, 0x28);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_pAnim, 0x2C);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_pWeaponInfo, 0x30);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_pTargetEntity, 0x34);
VALIDATE_OFFSET(CTaskSimpleGangDriveBy, m_vecCoords, 0x38);
VALIDATE_SIZE(CTaskSimpleGangDriveBy, 0x44);

