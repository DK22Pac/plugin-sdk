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

VALIDATE_SIZE(CTaskSimpleJump, 0x2C);
