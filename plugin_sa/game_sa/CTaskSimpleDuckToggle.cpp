/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleDuckToggle.h"

CTaskSimpleDuckToggle::CTaskSimpleDuckToggle(int toggleType) : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x62F690, CTaskSimpleDuckToggle*,int>(this, toggleType);
}
