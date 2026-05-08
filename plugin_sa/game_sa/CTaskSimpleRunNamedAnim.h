/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimpleAnim.h"
#include "CAnimBlendHierarchy.h"
#include "CTaskTimer.h"
#include "CVector.h"

class PLUGIN_API CTaskSimpleRunNamedAnim : public CTaskSimpleAnim {
protected:
    CTaskSimpleRunNamedAnim(plugin::dummy_func_t a) : CTaskSimpleAnim(a), m_timer(a) {}
public:
    char                 m_animName[24];
    char                 m_animGroupName[16];
    float                m_fBlendDelta;
    CAnimBlendHierarchy* m_pAnimHierarchy;
    int                  m_nTime;
    CTaskTimer           m_timer;
    CVector              m_vecOffsetAtEnd;
    unsigned int         m_nFlags;
    short                m_nAnimId;

    CTaskSimpleRunNamedAnim(const char* pAnimName, const char* pAnimGroupName, int flags, float fBlendDelta,
        int nTime, bool bDontInterrupt, bool bRunInSequence, bool bOffsetPed, bool bHoldLastFrame);


};
VALIDATE_OFFSET(CTaskSimpleRunNamedAnim, m_animName, 0x10);
VALIDATE_OFFSET(CTaskSimpleRunNamedAnim, m_animGroupName, 0x28);
VALIDATE_OFFSET(CTaskSimpleRunNamedAnim, m_fBlendDelta, 0x38);
VALIDATE_OFFSET(CTaskSimpleRunNamedAnim, m_pAnimHierarchy, 0x3C);
VALIDATE_OFFSET(CTaskSimpleRunNamedAnim, m_nTime, 0x40);
VALIDATE_OFFSET(CTaskSimpleRunNamedAnim, m_timer, 0x44);
VALIDATE_OFFSET(CTaskSimpleRunNamedAnim, m_vecOffsetAtEnd, 0x50);
VALIDATE_OFFSET(CTaskSimpleRunNamedAnim, m_nFlags, 0x5C);
VALIDATE_OFFSET(CTaskSimpleRunNamedAnim, m_nAnimId, 0x60);
VALIDATE_SIZE(CTaskSimpleRunNamedAnim, 0x64);
