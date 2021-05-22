/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCrane.h"

PLUGIN_SOURCE_FILE

int addrof(CCrane::CalcHookCoordinates) = ADDRESS_BY_VERSION(0x544F80, 0x5451C0, 0x545170);
int gaddrof(CCrane::CalcHookCoordinates) = GLOBAL_ADDRESS_BY_VERSION(0x544F80, 0x5451C0, 0x545170);

void CCrane::CalcHookCoordinates(float *pX, float *pY, float *pZ) {
    plugin::CallMethodDynGlobal<CCrane *, float *, float *, float *>(gaddrof(CCrane::CalcHookCoordinates), this, pX, pY, pZ);
}

int addrof(CCrane::DoesCranePickUpThisCarType) = ADDRESS_BY_VERSION(0x544A90, 0x544CD0, 0x544C80);
int gaddrof(CCrane::DoesCranePickUpThisCarType) = GLOBAL_ADDRESS_BY_VERSION(0x544A90, 0x544CD0, 0x544C80);

bool CCrane::DoesCranePickUpThisCarType(unsigned int vehicleModelIndex) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCrane *, unsigned int>(gaddrof(CCrane::DoesCranePickUpThisCarType), this, vehicleModelIndex);
}

int addrof(CCrane::FindCarInSectorList) = ADDRESS_BY_VERSION(0x544850, 0x544A90, 0x544A40);
int gaddrof(CCrane::FindCarInSectorList) = GLOBAL_ADDRESS_BY_VERSION(0x544850, 0x544A90, 0x544A40);

void CCrane::FindCarInSectorList(CPtrList *list) {
    plugin::CallMethodDynGlobal<CCrane *, CPtrList *>(gaddrof(CCrane::FindCarInSectorList), this, list);
}

int addrof(CCrane::FindParametersForTarget) = ADDRESS_BY_VERSION(0x544EF0, 0x545130, 0x5450E0);
int gaddrof(CCrane::FindParametersForTarget) = GLOBAL_ADDRESS_BY_VERSION(0x544EF0, 0x545130, 0x5450E0);

void CCrane::FindParametersForTarget(float x, float y, float z, float *pAngle, float *pDistance, float *pHeight) {
    plugin::CallMethodDynGlobal<CCrane *, float, float, float, float *, float *, float *>(gaddrof(CCrane::FindParametersForTarget), this, x, y, z, pAngle, pDistance, pHeight);
}

int addrof(CCrane::GoTowardsHeightTarget) = ADDRESS_BY_VERSION(0x544E50, 0x545090, 0x545040);
int gaddrof(CCrane::GoTowardsHeightTarget) = GLOBAL_ADDRESS_BY_VERSION(0x544E50, 0x545090, 0x545040);

bool CCrane::GoTowardsHeightTarget(float targetHeight, float speedMultiplier) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCrane *, float, float>(gaddrof(CCrane::GoTowardsHeightTarget), this, targetHeight, speedMultiplier);
}

int addrof(CCrane::GoTowardsTarget) = ADDRESS_BY_VERSION(0x544C00, 0x544E40, 0x544DF0);
int gaddrof(CCrane::GoTowardsTarget) = GLOBAL_ADDRESS_BY_VERSION(0x544C00, 0x544E40, 0x544DF0);

bool CCrane::GoTowardsTarget(float angleToTarget, float distanceToTarget, float targetHeight, float speedMultiplier) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCrane *, float, float, float, float>(gaddrof(CCrane::GoTowardsTarget), this, angleToTarget, distanceToTarget, targetHeight, speedMultiplier);
}

int addrof(CCrane::RotateCarriedCarProperly) = ADDRESS_BY_VERSION(0x544700, 0x544940, 0x5448F0);
int gaddrof(CCrane::RotateCarriedCarProperly) = GLOBAL_ADDRESS_BY_VERSION(0x544700, 0x544940, 0x5448F0);

bool CCrane::RotateCarriedCarProperly() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCrane *>(gaddrof(CCrane::RotateCarriedCarProperly), this);
}

int addrof(CCrane::SetHookMatrix) = ADDRESS_BY_VERSION(0x545000, 0x545240, 0x5451F0);
int gaddrof(CCrane::SetHookMatrix) = GLOBAL_ADDRESS_BY_VERSION(0x545000, 0x545240, 0x5451F0);

void CCrane::SetHookMatrix() {
    plugin::CallMethodDynGlobal<CCrane *>(gaddrof(CCrane::SetHookMatrix), this);
}

int addrof(CCrane::Update) = ADDRESS_BY_VERSION(0x543AC0, 0x543D00, 0x543CB0);
int gaddrof(CCrane::Update) = GLOBAL_ADDRESS_BY_VERSION(0x543AC0, 0x543D00, 0x543CB0);

void CCrane::Update() {
    plugin::CallMethodDynGlobal<CCrane *>(gaddrof(CCrane::Update), this);
}
