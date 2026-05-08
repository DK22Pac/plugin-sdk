/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CTaskSimpleAnim.h"
#include "CAnimBlendAssociation.h"

class PLUGIN_API CTaskSimpleRunAnim : public CTaskSimpleAnim {
protected:
    CTaskSimpleRunAnim(plugin::dummy_func_t a) : CTaskSimpleAnim(a) {}
public:

    unsigned int m_nAnimGroup;
    unsigned int m_nAnimId;
    float m_fBlendDelta;
    unsigned short m_nTaskType;
private:
    short __pad;
public:

    CTaskSimpleRunAnim(unsigned int animGroup, unsigned int animID, float fBlendDelta, bool bHoldLastFrame);
    CTaskSimpleRunAnim(unsigned int animGroup, unsigned int animID, float fBlendDelta, unsigned int nTaskType,
        char* pTaskName _IGNORED_, bool bHoldLastFrame);

};
VALIDATE_OFFSET(CTaskSimpleRunAnim, m_nAnimGroup, 0x10);
VALIDATE_OFFSET(CTaskSimpleRunAnim, m_nAnimId, 0x14);
VALIDATE_OFFSET(CTaskSimpleRunAnim, m_fBlendDelta, 0x18);
VALIDATE_OFFSET(CTaskSimpleRunAnim, m_nTaskType, 0x1C);
VALIDATE_SIZE(CTaskSimpleRunAnim, 0x20);
