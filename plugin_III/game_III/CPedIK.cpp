/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedIK.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE LimbMovementInfo &CPedIK::ms_headInfo = *reinterpret_cast<LimbMovementInfo *>(GLOBAL_ADDRESS_BY_VERSION(0x5F9F5C, 0x5F9D44, 0x606D3C));
PLUGIN_VARIABLE LimbMovementInfo &CPedIK::ms_headRestoreInfo = *reinterpret_cast<LimbMovementInfo *>(GLOBAL_ADDRESS_BY_VERSION(0x5F9F74, 0x5F9D5C, 0x606D54));
PLUGIN_VARIABLE LimbMovementInfo &CPedIK::ms_torsoInfo = *reinterpret_cast<LimbMovementInfo *>(GLOBAL_ADDRESS_BY_VERSION(0x5F9F8C, 0x5F9D74, 0x606D6C));
PLUGIN_VARIABLE LimbMovementInfo &CPedIK::ms_upperArmInfo = *reinterpret_cast<LimbMovementInfo *>(GLOBAL_ADDRESS_BY_VERSION(0x5F9FA4, 0x5F9D8C, 0x606D84));
PLUGIN_VARIABLE LimbMovementInfo &CPedIK::ms_lowerArmInfo = *reinterpret_cast<LimbMovementInfo *>(GLOBAL_ADDRESS_BY_VERSION(0x5F9FBC, 0x5F9DA4, 0x606D9C));
PLUGIN_VARIABLE RwV3d &ZaxisIK = *reinterpret_cast<RwV3d *>(GLOBAL_ADDRESS_BY_VERSION(0x5F9FE4, 0x5F9DCC, 0x606DC4));
PLUGIN_VARIABLE RwV3d &YaxisIK = *reinterpret_cast<RwV3d *>(GLOBAL_ADDRESS_BY_VERSION(0x5F9FF0, 0x5F9DD8, 0x606DD0));
PLUGIN_VARIABLE RwV3d &XaxisIK = *reinterpret_cast<RwV3d *>(GLOBAL_ADDRESS_BY_VERSION(0x5F9FFC, 0x5F9DE4, 0x606DDC));

int addrof(CPedIK::ExtractYawAndPitchLocal) = ADDRESS_BY_VERSION(0x4ED2C0, 0x4ED370, 0x4ED300);
int gaddrof(CPedIK::ExtractYawAndPitchLocal) = GLOBAL_ADDRESS_BY_VERSION(0x4ED2C0, 0x4ED370, 0x4ED300);

void CPedIK::ExtractYawAndPitchLocal(RwMatrix *matrix, float *yaw, float *pitch) {
    plugin::CallMethodDynGlobal<CPedIK *, RwMatrix *, float *, float *>(gaddrof(CPedIK::ExtractYawAndPitchLocal), this, matrix, yaw, pitch);
}

int addrof(CPedIK::ExtractYawAndPitchWorld) = ADDRESS_BY_VERSION(0x4ED140, 0x4ED1F0, 0x4ED180);
int gaddrof(CPedIK::ExtractYawAndPitchWorld) = GLOBAL_ADDRESS_BY_VERSION(0x4ED140, 0x4ED1F0, 0x4ED180);

void CPedIK::ExtractYawAndPitchWorld(RwMatrix *matrix, float *yaw, float *pitch) {
    plugin::CallMethodDynGlobal<CPedIK *, RwMatrix *, float *, float *>(gaddrof(CPedIK::ExtractYawAndPitchWorld), this, matrix, yaw, pitch);
}

int addrof(CPedIK::GetComponentPosition) = ADDRESS_BY_VERSION(0x4ED0F0, 0x4ED1A0, 0x4ED130);
int gaddrof(CPedIK::GetComponentPosition) = GLOBAL_ADDRESS_BY_VERSION(0x4ED0F0, 0x4ED1A0, 0x4ED130);

void CPedIK::GetComponentPosition(RwV3d &pos, unsigned int node) {
    plugin::CallMethodDynGlobal<CPedIK *, RwV3d &, unsigned int>(gaddrof(CPedIK::GetComponentPosition), this, pos, node);
}

int addrof(CPedIK::Init) = ADDRESS_BY_VERSION(0x4ED010, 0x4ED0C0, 0x4ED050);
int gaddrof(CPedIK::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4ED010, 0x4ED0C0, 0x4ED050);

void CPedIK::Init(CPed *ped) {
    plugin::CallMethodDynGlobal<CPedIK *, CPed *>(gaddrof(CPedIK::Init), this, ped);
}

int addrof(CPedIK::LookAtPosition) = ADDRESS_BY_VERSION(0x4ED590, 0x4ED640, 0x4ED5D0);
int gaddrof(CPedIK::LookAtPosition) = GLOBAL_ADDRESS_BY_VERSION(0x4ED590, 0x4ED640, 0x4ED5D0);

bool CPedIK::LookAtPosition(CVector const &pos) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedIK *, CVector const &>(gaddrof(CPedIK::LookAtPosition), this, pos);
}

int addrof(CPedIK::LookInDirection) = ADDRESS_BY_VERSION(0x4ED620, 0x4ED6D0, 0x4ED660);
int gaddrof(CPedIK::LookInDirection) = GLOBAL_ADDRESS_BY_VERSION(0x4ED620, 0x4ED6D0, 0x4ED660);

bool CPedIK::LookInDirection(float targetYaw, float targetPitch) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedIK *, float, float>(gaddrof(CPedIK::LookInDirection), this, targetYaw, targetPitch);
}

int addrof(CPedIK::MoveLimb) = ADDRESS_BY_VERSION(0x4ED440, 0x4ED4F0, 0x4ED480);
int gaddrof(CPedIK::MoveLimb) = GLOBAL_ADDRESS_BY_VERSION(0x4ED440, 0x4ED4F0, 0x4ED480);

unsigned int CPedIK::MoveLimb(LimbOrientation &limb, float targetYaw, float targetPitch, LimbMovementInfo &moveInfo) {
    return plugin::CallMethodAndReturnDynGlobal<unsigned int, CPedIK *, LimbOrientation &, float, float, LimbMovementInfo &>(gaddrof(CPedIK::MoveLimb), this, limb, targetYaw, targetPitch, moveInfo);
}

int addrof(CPedIK::PointGunAtPosition) = ADDRESS_BY_VERSION(0x4ED920, 0x4ED9D0, 0x4ED960);
int gaddrof(CPedIK::PointGunAtPosition) = GLOBAL_ADDRESS_BY_VERSION(0x4ED920, 0x4ED9D0, 0x4ED960);

bool CPedIK::PointGunAtPosition(CVector const &pos) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedIK *, CVector const &>(gaddrof(CPedIK::PointGunAtPosition), this, pos);
}

int addrof(CPedIK::PointGunInDirection) = ADDRESS_BY_VERSION(0x4ED9B0, 0x4EDA60, 0x4ED9F0);
int gaddrof(CPedIK::PointGunInDirection) = GLOBAL_ADDRESS_BY_VERSION(0x4ED9B0, 0x4EDA60, 0x4ED9F0);

bool CPedIK::PointGunInDirection(float targetYaw, float targetPitch) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedIK *, float, float>(gaddrof(CPedIK::PointGunInDirection), this, targetYaw, targetPitch);
}

int addrof(CPedIK::PointGunInDirectionUsingArm) = ADDRESS_BY_VERSION(0x4EDB20, 0x4EDBD0, 0x4EDB60);
int gaddrof(CPedIK::PointGunInDirectionUsingArm) = GLOBAL_ADDRESS_BY_VERSION(0x4EDB20, 0x4EDBD0, 0x4EDB60);

bool CPedIK::PointGunInDirectionUsingArm(float targetYaw, float targetPitch) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedIK *, float, float>(gaddrof(CPedIK::PointGunInDirectionUsingArm), this, targetYaw, targetPitch);
}

int addrof(CPedIK::RestoreGunPosn) = ADDRESS_BY_VERSION(0x4EDD70, 0x4EDE20, 0x4EDDB0);
int gaddrof(CPedIK::RestoreGunPosn) = GLOBAL_ADDRESS_BY_VERSION(0x4EDD70, 0x4EDE20, 0x4EDDB0);

bool CPedIK::RestoreGunPosn() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedIK *>(gaddrof(CPedIK::RestoreGunPosn), this);
}

int addrof(CPedIK::RestoreLookAt) = ADDRESS_BY_VERSION(0x4ED810, 0x4ED8C0, 0x4ED850);
int gaddrof(CPedIK::RestoreLookAt) = GLOBAL_ADDRESS_BY_VERSION(0x4ED810, 0x4ED8C0, 0x4ED850);

bool CPedIK::RestoreLookAt() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedIK *>(gaddrof(CPedIK::RestoreLookAt), this);
}

int addrof(CPedIK::RotateTorso) = ADDRESS_BY_VERSION(0x4EDDB0, 0x4EDE60, 0x4EDDF0);
int gaddrof(CPedIK::RotateTorso) = GLOBAL_ADDRESS_BY_VERSION(0x4EDDB0, 0x4EDE60, 0x4EDDF0);

void CPedIK::RotateTorso(AnimBlendFrameData *frameData, LimbOrientation &limb, bool changeRoll) {
    plugin::CallMethodDynGlobal<CPedIK *, AnimBlendFrameData *, LimbOrientation &, bool>(gaddrof(CPedIK::RotateTorso), this, frameData, limb, changeRoll);
}

int addrof(CPedIK::GetWorldMatrix) = ADDRESS_BY_VERSION(0x4ED060, 0x4ED110, 0x4ED0A0);
int gaddrof(CPedIK::GetWorldMatrix) = GLOBAL_ADDRESS_BY_VERSION(0x4ED060, 0x4ED110, 0x4ED0A0);

RwMatrix *CPedIK::GetWorldMatrix(RwFrame *frame, RwMatrix *matrix) {
    return plugin::CallAndReturnDynGlobal<RwMatrix *, RwFrame *, RwMatrix *>(gaddrof(CPedIK::GetWorldMatrix), frame, matrix);
}
