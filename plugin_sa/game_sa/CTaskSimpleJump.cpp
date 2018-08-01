/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleJump.h"

CTaskSimpleJump::CTaskSimpleJump(bool bIsClimb) : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x679AA0, CTaskSimpleJump*, bool>(this, bIsClimb);
}
