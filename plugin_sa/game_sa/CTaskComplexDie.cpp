/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexDie.h"

CTaskComplexDie::CTaskComplexDie(eWeaponType nWeaponType, int animGroup, int animID, float fBlendDelta,
    float fAnimSpeed, bool bBeingKilledByStealth, bool bFallingToDeath, int nFallToDeathDir, bool bFallToDeathOverRailing)
    : CTaskComplex(plugin::dummy)
{
    plugin::CallMethod<0x630040, CTaskComplexDie*, eWeaponType, int, int, float, float, bool, bool, int, bool>
        (this, nWeaponType, animGroup, animID, fBlendDelta, fAnimSpeed, bBeingKilledByStealth,
            bFallingToDeath, nFallToDeathDir, bFallToDeathOverRailing);
}

