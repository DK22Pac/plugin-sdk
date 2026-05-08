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


class PLUGIN_API CTaskSimpleJump : public CTaskSimple {
protected:
    CTaskSimpleJump(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    CVector m_vecPosn;
    float m_fAngle;
    uchar m_nSurfaceType;  // see eSurfaceType
private:
    char _pad[3];
public:
    CEntity *m_pEntity;
    bool m_bIsFinished;
    bool bHitHisHead;
    bool m_bIsBlockedByEntity;
    bool m_bStartedLaunchAnim;
    bool m_bIsClimb;
    bool m_bIsInPlayersGroup;
private:
    char _pad2[2];
public:
    CAnimBlendAssociation *m_pAnimBlendAssoc;

    CTaskSimpleJump(bool bIsClimb);
};
VALIDATE_OFFSET(CTaskSimpleJump, m_vecPosn, 0x8);
VALIDATE_OFFSET(CTaskSimpleJump, m_fAngle, 0x14);
VALIDATE_OFFSET(CTaskSimpleJump, m_nSurfaceType, 0x18);
VALIDATE_OFFSET(CTaskSimpleJump, m_pEntity, 0x1C);
VALIDATE_OFFSET(CTaskSimpleJump, m_bIsFinished, 0x20);
VALIDATE_OFFSET(CTaskSimpleJump, bHitHisHead, 0x21);
VALIDATE_OFFSET(CTaskSimpleJump, m_bIsBlockedByEntity, 0x22);
VALIDATE_OFFSET(CTaskSimpleJump, m_bStartedLaunchAnim, 0x23);
VALIDATE_OFFSET(CTaskSimpleJump, m_bIsClimb, 0x24);
VALIDATE_OFFSET(CTaskSimpleJump, m_bIsInPlayersGroup, 0x25);
VALIDATE_OFFSET(CTaskSimpleJump, m_pAnimBlendAssoc, 0x28);
VALIDATE_SIZE(CTaskSimpleJump, 0x2C);
