/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/

#include "CTaskComplexStuckInAir.h"

CTaskComplexStuckInAir::CTaskComplexStuckInAir() : CTaskComplex(plugin::dummy)
{
    plugin::CallMethod<0x67BA40, CTaskComplexStuckInAir*>(this);
}
