/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleRunNamedAnim.h"

CTaskSimpleRunNamedAnim::CTaskSimpleRunNamedAnim(const char* pAnimName, const char* pAnimGroupName, int flags, float fBlendDelta,
    int nTime, bool bDontInterrupt, bool bRunInSequence, bool bOffsetPed, bool bHoldLastFrame)  
    : CTaskSimpleAnim(plugin::dummy) , m_timer(plugin::dummy)
{
    plugin::CallMethod<0x61A990, CTaskSimpleRunNamedAnim*, const char*, const char*, int, float, int, bool, bool, bool, bool>
        (this, pAnimName, pAnimGroupName, flags, fBlendDelta, nTime, bDontInterrupt, bRunInSequence, bOffsetPed, bHoldLastFrame);
}
