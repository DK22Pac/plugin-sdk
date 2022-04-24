/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedIK.h"

LimbMovementInfo& CPedIK::ms_headInfo = *reinterpret_cast<LimbMovementInfo*>(0x694670);
LimbMovementInfo& CPedIK::ms_headRestoreInfo = *reinterpret_cast<LimbMovementInfo*>(0x694688);
LimbMovementInfo& CPedIK::ms_torsoInfo = *reinterpret_cast<LimbMovementInfo*>(0x6946A0);
LimbMovementInfo& CPedIK::ms_upperArmInfo = *reinterpret_cast<LimbMovementInfo*>(0x6946B8);
LimbMovementInfo& CPedIK::ms_lowerArmInfo = *reinterpret_cast<LimbMovementInfo*>(0x6946D0);

MoveLimbResult CPedIK::MoveLimb(LimbOrientation& limb, float yaw, float pitch, LimbMovementInfo& moveInfo) {
    return plugin::CallMethodAndReturn<MoveLimbResult, 0x52F6E0, CPedIK*, LimbOrientation&, float, float, LimbMovementInfo&>(this, limb, yaw, pitch, moveInfo);
}

void CPedIK::GetComponentPosition(RwV3d *returnedPos, unsigned int boneIndex) {
    plugin::CallMethod<0x52F9B0, CPedIK*, RwV3d*, unsigned int>(this, returnedPos, boneIndex);
}