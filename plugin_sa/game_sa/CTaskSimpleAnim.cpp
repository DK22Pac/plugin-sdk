/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleAnim.h"

CTaskSimpleAnim::CTaskSimpleAnim(bool bHoldLastFrame) : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x61A6C0, CTaskSimpleAnim*, bool>(this, bHoldLastFrame);
}
