/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CTaskTimer.h"
#include "CVector.h"
#include "CAnimBlendAssociation.h"
#include "CEntity.h"

class PLUGIN_API CTaskSimpleInAir : public CTaskSimple {
protected:
    CTaskSimpleInAir(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    CVector m_vecPosn;
    float m_fAngle;
    unsigned char m_nSurfaceType;
    char _pad[3];
    CAnimBlendAssociation *m_pAnim;
    float m_fHeight;
    union {
        unsigned char m_nFlags;
        struct
        {
            unsigned char bUsingJumpGlide : 1;
            unsigned char bUsingFallGlide : 1;
            unsigned char bUsingClimbJump : 1;
        };
    };
    char _pad2[3];
    int m_nProcessCounter;
    CTaskTimer m_timer;
    CEntity *m_pEntity;
    CTaskSimpleInAir(bool bUsingJumpGlide, bool bUsingFallGlide, bool bUsingClimbJump);

};
VALIDATE_OFFSET(CTaskSimpleInAir, m_vecPosn, 0x8);
VALIDATE_OFFSET(CTaskSimpleInAir, m_fAngle, 0x14);
VALIDATE_OFFSET(CTaskSimpleInAir, m_nSurfaceType, 0x18);
VALIDATE_OFFSET(CTaskSimpleInAir, _pad, 0x19);
VALIDATE_OFFSET(CTaskSimpleInAir, m_pAnim, 0x1C);
VALIDATE_OFFSET(CTaskSimpleInAir, m_fHeight, 0x20);
VALIDATE_OFFSET(CTaskSimpleInAir, m_nFlags, 0x24);
VALIDATE_OFFSET(CTaskSimpleInAir, _pad2, 0x25);
VALIDATE_OFFSET(CTaskSimpleInAir, m_nProcessCounter, 0x28);
VALIDATE_OFFSET(CTaskSimpleInAir, m_timer, 0x2C);
VALIDATE_OFFSET(CTaskSimpleInAir, m_pEntity, 0x38);
VALIDATE_SIZE(CTaskSimpleInAir, 0x3C);