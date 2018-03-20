/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleInAir.h"

CTaskSimpleInAir::CTaskSimpleInAir(bool bUsingJumpGlide, bool bUsingFallGlide, bool bUsingClimbJump)
    : CTaskSimple(plugin::dummy), m_timer(plugin::dummy)
{
    plugin::CallMethod<0x678CD0, CTaskSimpleInAir*, bool, bool, bool>
        (this, bUsingJumpGlide, bUsingFallGlide, bUsingClimbJump);
}
