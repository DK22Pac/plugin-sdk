/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPedIK.h"

// Converted from thiscall void CPedIK::CPedIK(void) 0x4ED010 
CPedIK::CPedIK() {
    plugin::CallMethod<0x4ED010, CPedIK *>(this);
}

// Converted from thiscall void CPedIK::ExtractYawAndPitchLocal(RwMatrixTag *matrix,float &x,float &y) 0x4ED2C0
void CPedIK::ExtractYawAndPitchLocal(RwMatrixTag* matrix, float& x, float& y) {
    plugin::CallMethod<0x4ED2C0, CPedIK *, RwMatrixTag*, float&, float&>(this, matrix, x, y);
}

// Converted from thiscall void CPedIK::ExtractYawAndPitchWorld(RwMatrixTag *matrix,float &x,float &y) 0x4ED140
void CPedIK::ExtractYawAndPitchWorld(RwMatrixTag* matrix, float& x, float& y) {
    plugin::CallMethod<0x4ED140, CPedIK *, RwMatrixTag*, float&, float&>(this, matrix, x, y);
}

// Converted from thiscall void CPedIK::GetComponentPosition(RwV3d &pos,uint component) 0x4ED0F0
void CPedIK::GetComponentPosition(RwV3d& pos, unsigned int component) {
    plugin::CallMethod<0x4ED0F0, CPedIK *, RwV3d&, unsigned int>(this, pos, component);
}

// Converted from cdecl RwMatrixTag* CPedIK::GetWorldMatrix(RwFrame *frame,RwMatrixTag *matrix) 0x4ED060
RwMatrixTag* CPedIK::GetWorldMatrix(RwFrame* frame, RwMatrixTag* matrix) {
    return plugin::CallAndReturn<RwMatrixTag*, 0x4ED060, RwFrame*, RwMatrixTag*>(frame, matrix);
}

// Converted from thiscall bool CPedIK::LookAtPosition(CVector const& pos) 0x4ED590 
bool CPedIK::LookAtPosition(CVector const& pos) {
    return plugin::CallMethodAndReturn<bool, 0x4ED590, CPedIK *, CVector const&>(this, pos);
}

// Converted from thiscall bool CPedIK::LookInDirection(float x,float y) 0x4ED620 
bool CPedIK::LookInDirection(float x, float y) {
    return plugin::CallMethodAndReturn<bool, 0x4ED620, CPedIK *, float, float>(this, x, y);
}

// Converted from thiscall void CPedIK::MoveLimb(LimbOrientation &orient,float x,float y,LimbMovementInfo &info) 0x4ED440
void CPedIK::MoveLimb(LimbOrientation& orient, float x, float y, LimbMovementInfo& info) {
    plugin::CallMethod<0x4ED440, CPedIK *, LimbOrientation&, float, float, LimbMovementInfo&>(this, orient, x, y, info);
}

// Converted from thiscall bool CPedIK::PointGunAtPosition(CVector const& pos) 0x4ED920 
bool CPedIK::PointGunAtPosition(CVector const& pos) {
    return plugin::CallMethodAndReturn<bool, 0x4ED920, CPedIK *, CVector const&>(this, pos);
}

// Converted from thiscall bool CPedIK::PointGunInDirection(float x,float y) 0x4ED9B0 
bool CPedIK::PointGunInDirection(float x, float y) {
    return plugin::CallMethodAndReturn<bool, 0x4ED9B0, CPedIK *, float, float>(this, x, y);
}

// Converted from thiscall bool CPedIK::PointGunInDirectionUsingArm(float x,float y) 0x4EDB20 
bool CPedIK::PointGunInDirectionUsingArm(float x, float y) {
    return plugin::CallMethodAndReturn<bool, 0x4EDB20, CPedIK *, float, float>(this, x, y);
}

// Converted from thiscall bool CPedIK::RestoreGunPosn(void) 0x4EDD70 
bool CPedIK::RestoreGunPosn() {
    return plugin::CallMethodAndReturn<bool, 0x4EDD70, CPedIK *>(this);
}

// Converted from thiscall bool CPedIK::RestoreLookAt(void) 0x4ED810 
bool CPedIK::RestoreLookAt() {
    return plugin::CallMethodAndReturn<bool, 0x4ED810, CPedIK *>(this);
}

// Converted from thiscall void CPedIK::RotateTorso(AnimBlendFrameData *data,LimbOrientation &orient,bool) 0x4EDDB0
void CPedIK::RotateTorso(AnimBlendFrameData* data, LimbOrientation& orient, bool arg2) {
    plugin::CallMethod<0x4EDDB0, CPedIK *, AnimBlendFrameData*, LimbOrientation&, bool>(this, data, orient, arg2);
}
