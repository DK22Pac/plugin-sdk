/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleRunAnim.h"

CTaskSimpleRunAnim::CTaskSimpleRunAnim(unsigned int animGroup, unsigned int animID, float fBlendDelta, bool bHoldLastFrame)
    : CTaskSimpleAnim(plugin::dummy)
{
    plugin::CallMethod<0x61A8B0, CTaskSimpleRunAnim*, unsigned int, unsigned int, float, bool>
        (this, animGroup, animID, fBlendDelta, bHoldLastFrame);
}

CTaskSimpleRunAnim::CTaskSimpleRunAnim(unsigned int animGroup, unsigned int animID, float fBlendDelta, unsigned int nTaskType,
    char* pTaskName _IGNORED_, bool bHoldLastFrame)
    : CTaskSimpleAnim(plugin::dummy)
{
    plugin::CallMethod<0x61A900, CTaskSimpleRunAnim*, unsigned int, unsigned int, float, unsigned int, char*, bool>
        (this, animGroup, animID, fBlendDelta, nTaskType, pTaskName, bHoldLastFrame);
}

