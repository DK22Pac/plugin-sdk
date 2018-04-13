/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedIK.h"

MoveLimbResult CPedIK::MoveLimb(LimbOrientation& TorsoOrien, float yaw, float pitch, LimbMovementInfo &LimbMoveInfo)
{
    return plugin::CallAndReturn<MoveLimbResult, 0x52F6E0, LimbOrientation&, float, float, LimbMovementInfo &>
        (TorsoOrien, yaw, pitch, LimbMoveInfo);
}

void CPedIK::GetComponentPosition(RwV3d *returnedPos, unsigned int boneIndex)
{
    plugin::CallMethod<0x52F9B0, CPedIK*, RwV3d*, unsigned int>(this, returnedPos, boneIndex);
}