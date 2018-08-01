/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexClimb.h"

CTaskComplexClimb::CTaskComplexClimb() : CTaskComplexJump(plugin::dummy)
{
    plugin::CallMethod<0x46A630, CTaskComplexClimb*>(this);
}

