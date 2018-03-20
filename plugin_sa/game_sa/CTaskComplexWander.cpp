/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexWander.h"

CTaskComplexWander::CTaskComplexWander(int MoveState, unsigned char Dir, bool bWanderSensibly, float TargetRadius)
    : CTaskComplex(plugin::dummy)
{
    plugin::CallMethod<0x66F450, CTaskComplexWander*, int, unsigned char, bool, float>
        (this, MoveState, Dir, bWanderSensibly, TargetRadius);
}
