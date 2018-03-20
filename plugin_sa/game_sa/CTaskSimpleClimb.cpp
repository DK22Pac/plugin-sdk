/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleClimb.h"

CTaskSimpleClimb::CTaskSimpleClimb(CEntity *pClimbEnt, const CVector &vecTarget, float fHeading, unsigned char nSurfaceType, eClimbHeights nHeight, bool bForceClimb)
    : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x67A110, CTaskSimpleClimb*, CEntity*, const CVector&, float, unsigned char, eClimbHeights, bool>
        (this, pClimbEnt, vecTarget, fHeading, nSurfaceType, nHeight, bForceClimb);
}
