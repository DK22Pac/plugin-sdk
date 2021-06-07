/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPhysical.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CPhysical) = ADDRESS_BY_VERSION(0x494EF0, 0x494FB0, 0x494F40);
int ctor_gaddr(CPhysical) = GLOBAL_ADDRESS_BY_VERSION(0x494EF0, 0x494FB0, 0x494F40);

int dtor_addr(CPhysical) = ADDRESS_BY_VERSION(0x495130, 0x4951F0, 0x495180);
int dtor_gaddr(CPhysical) = GLOBAL_ADDRESS_BY_VERSION(0x495130, 0x4951F0, 0x495180);

int del_dtor_addr(CPhysical) = ADDRESS_BY_VERSION(0x49F960, 0x49FA50, 0x49F9E0);
int del_dtor_gaddr(CPhysical) = GLOBAL_ADDRESS_BY_VERSION(0x49F960, 0x49FA50, 0x49F9E0);

int addrof(CPhysical::Add) = ADDRESS_BY_VERSION(0x4951F0, 0x4952B0, 0x495240);
int gaddrof(CPhysical::Add) = GLOBAL_ADDRESS_BY_VERSION(0x4951F0, 0x4952B0, 0x495240);

void CPhysical::Add() {
    plugin::CallVirtualMethod<1, CPhysical *>(this);
}

int addrof(CPhysical::Remove) = ADDRESS_BY_VERSION(0x4954B0, 0x495570, 0x495500);
int gaddrof(CPhysical::Remove) = GLOBAL_ADDRESS_BY_VERSION(0x4954B0, 0x495570, 0x495500);

void CPhysical::Remove() {
    plugin::CallVirtualMethod<2, CPhysical *>(this);
}

int addrof(CPhysical::GetBoundRect) = ADDRESS_BY_VERSION(0x495150, 0x495210, 0x4951A0);
int gaddrof(CPhysical::GetBoundRect) = GLOBAL_ADDRESS_BY_VERSION(0x495150, 0x495210, 0x4951A0);

CRect *CPhysical::GetBoundRect() {
    return plugin::CallVirtualMethodAndReturn<CRect *, 7, CPhysical *>(this);
}

int addrof(CPhysical::ProcessControl) = ADDRESS_BY_VERSION(0x495F10, 0x495FD0, 0x495F60);
int gaddrof(CPhysical::ProcessControl) = GLOBAL_ADDRESS_BY_VERSION(0x495F10, 0x495FD0, 0x495F60);

void CPhysical::ProcessControl() {
    plugin::CallVirtualMethod<8, CPhysical *>(this);
}

int addrof(CPhysical::ProcessCollision) = ADDRESS_BY_VERSION(0x4961A0, 0x496260, 0x4961F0);
int gaddrof(CPhysical::ProcessCollision) = GLOBAL_ADDRESS_BY_VERSION(0x4961A0, 0x496260, 0x4961F0);

void CPhysical::ProcessCollision() {
    plugin::CallVirtualMethod<9, CPhysical *>(this);
}

int addrof(CPhysical::ProcessShift) = ADDRESS_BY_VERSION(0x496F10, 0x496FD0, 0x496F60);
int gaddrof(CPhysical::ProcessShift) = GLOBAL_ADDRESS_BY_VERSION(0x496F10, 0x496FD0, 0x496F60);

void CPhysical::ProcessShift() {
    plugin::CallVirtualMethod<10, CPhysical *>(this);
}

int addrof(CPhysical::ProcessEntityCollision) = ADDRESS_BY_VERSION(0x49F790, 0x49F880, 0x49F810);
int gaddrof(CPhysical::ProcessEntityCollision) = GLOBAL_ADDRESS_BY_VERSION(0x49F790, 0x49F880, 0x49F810);

void CPhysical::ProcessEntityCollision(CEntity *entity, CColPoint *colPoint) {
    plugin::CallVirtualMethod<17, CPhysical *, CEntity *, CColPoint *>(this, entity, colPoint);
}

int addrof(CPhysical::AddCollisionRecord) = ADDRESS_BY_VERSION(0x497180, 0x497240, 0x4971D0);
int gaddrof(CPhysical::AddCollisionRecord) = GLOBAL_ADDRESS_BY_VERSION(0x497180, 0x497240, 0x4971D0);

void CPhysical::AddCollisionRecord(CEntity *entity) {
    plugin::CallMethodDynGlobal<CPhysical *, CEntity *>(gaddrof(CPhysical::AddCollisionRecord), this, entity);
}

int addrof(CPhysical::AddCollisionRecord_Treadable) = ADDRESS_BY_VERSION(0x4970C0, 0x497180, 0x497110);
int gaddrof(CPhysical::AddCollisionRecord_Treadable) = GLOBAL_ADDRESS_BY_VERSION(0x4970C0, 0x497180, 0x497110);

void CPhysical::AddCollisionRecord_Treadable(CEntity *entity) {
    plugin::CallMethodDynGlobal<CPhysical *, CEntity *>(gaddrof(CPhysical::AddCollisionRecord_Treadable), this, entity);
}

int addrof(CPhysical::AddToMovingList) = ADDRESS_BY_VERSION(0x4958F0, 0x4959B0, 0x495940);
int gaddrof(CPhysical::AddToMovingList) = GLOBAL_ADDRESS_BY_VERSION(0x4958F0, 0x4959B0, 0x495940);

void CPhysical::AddToMovingList() {
    plugin::CallMethodDynGlobal<CPhysical *>(gaddrof(CPhysical::AddToMovingList), this);
}

int addrof(CPhysical::ApplyAirResistance) = ADDRESS_BY_VERSION(0x495C20, 0x495CE0, 0x495C70);
int gaddrof(CPhysical::ApplyAirResistance) = GLOBAL_ADDRESS_BY_VERSION(0x495C20, 0x495CE0, 0x495C70);

void CPhysical::ApplyAirResistance() {
    plugin::CallMethodDynGlobal<CPhysical *>(gaddrof(CPhysical::ApplyAirResistance), this);
}

int addrof(CPhysical::ApplyCollision) = ADDRESS_BY_VERSION(0x4973A0, 0x497460, 0x4973F0);
int gaddrof(CPhysical::ApplyCollision) = GLOBAL_ADDRESS_BY_VERSION(0x4973A0, 0x497460, 0x4973F0);

bool CPhysical::ApplyCollision(CPhysical *physical, CColPoint &colPoint, float *impulseA, float *impulseB) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPhysical *, CPhysical *, CColPoint &, float *, float *>(gaddrof(CPhysical::ApplyCollision), this, physical, colPoint, impulseA, impulseB);
}

int addrof(CPhysical::ApplyCollisionAlt) = ADDRESS_BY_VERSION(0x4992A0, 0x499360, 0x4992F0);
int gaddrof(CPhysical::ApplyCollisionAlt) = GLOBAL_ADDRESS_BY_VERSION(0x4992A0, 0x499360, 0x4992F0);

bool CPhysical::ApplyCollisionAlt(CEntity *entity, CColPoint &colPoint, float *impulse, CVector &moveSpeed, CVector &turnSpeed) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPhysical *, CEntity *, CColPoint &, float *, CVector &, CVector &>(gaddrof(CPhysical::ApplyCollisionAlt), this, entity, colPoint, impulse, moveSpeed, turnSpeed);
}

int addrof_o(CPhysical::ApplyFriction, void (CPhysical::*)()) = ADDRESS_BY_VERSION(0x495B80, 0x495C40, 0x495BD0);
int gaddrof_o(CPhysical::ApplyFriction, void (CPhysical::*)()) = GLOBAL_ADDRESS_BY_VERSION(0x495B80, 0x495C40, 0x495BD0);

void CPhysical::ApplyFriction() {
    plugin::CallMethodDynGlobal<CPhysical *>(gaddrof_o(CPhysical::ApplyFriction, void (CPhysical::*)()), this);
}

int addrof_o(CPhysical::ApplyFriction, bool (CPhysical::*)(float, CColPoint &)) = ADDRESS_BY_VERSION(0x499BE0, 0x499CD0, 0x499C60);
int gaddrof_o(CPhysical::ApplyFriction, bool (CPhysical::*)(float, CColPoint &)) = GLOBAL_ADDRESS_BY_VERSION(0x499BE0, 0x499CD0, 0x499C60);

bool CPhysical::ApplyFriction(float adhesiveLimit, CColPoint &colPoint) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPhysical *, float, CColPoint &>(gaddrof_o(CPhysical::ApplyFriction, bool (CPhysical::*)(float, CColPoint &)), this, adhesiveLimit, colPoint);
}

int addrof_o(CPhysical::ApplyFriction, bool (CPhysical::*)(CPhysical *, float, CColPoint &)) = ADDRESS_BY_VERSION(0x49A180, 0x49A270, 0x49A200);
int gaddrof_o(CPhysical::ApplyFriction, bool (CPhysical::*)(CPhysical *, float, CColPoint &)) = GLOBAL_ADDRESS_BY_VERSION(0x49A180, 0x49A270, 0x49A200);

bool CPhysical::ApplyFriction(CPhysical *physical, float adhesiveLimit, CColPoint &colPoint) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPhysical *, CPhysical *, float, CColPoint &>(gaddrof_o(CPhysical::ApplyFriction, bool (CPhysical::*)(CPhysical *, float, CColPoint &)), this, physical, adhesiveLimit, colPoint);
}

int addrof(CPhysical::ApplyFrictionMoveForce) = ADDRESS_BY_VERSION(0x495D90, 0x495E50, 0x495DE0);
int gaddrof(CPhysical::ApplyFrictionMoveForce) = GLOBAL_ADDRESS_BY_VERSION(0x495D90, 0x495E50, 0x495DE0);

void CPhysical::ApplyFrictionMoveForce(float jx, float jy, float jz) {
    plugin::CallMethodDynGlobal<CPhysical *, float, float, float>(gaddrof(CPhysical::ApplyFrictionMoveForce), this, jx, jy, jz);
}

int addrof(CPhysical::ApplyFrictionTurnForce) = ADDRESS_BY_VERSION(0x495E10, 0x495ED0, 0x495E60);
int gaddrof(CPhysical::ApplyFrictionTurnForce) = GLOBAL_ADDRESS_BY_VERSION(0x495E10, 0x495ED0, 0x495E60);

void CPhysical::ApplyFrictionTurnForce(float jx, float jy, float jz, float rx, float ry, float rz) {
    plugin::CallMethodDynGlobal<CPhysical *, float, float, float, float, float, float>(gaddrof(CPhysical::ApplyFrictionTurnForce), this, jx, jy, jz, rx, ry, rz);
}

int addrof(CPhysical::ApplyGravity) = ADDRESS_BY_VERSION(0x495B50, 0x495C10, 0x495BA0);
int gaddrof(CPhysical::ApplyGravity) = GLOBAL_ADDRESS_BY_VERSION(0x495B50, 0x495C10, 0x495BA0);

void CPhysical::ApplyGravity() {
    plugin::CallMethodDynGlobal<CPhysical *>(gaddrof(CPhysical::ApplyGravity), this);
}

int addrof(CPhysical::ApplyMoveForce) = ADDRESS_BY_VERSION(0x4959A0, 0x495A60, 0x4959F0);
int gaddrof(CPhysical::ApplyMoveForce) = GLOBAL_ADDRESS_BY_VERSION(0x4959A0, 0x495A60, 0x4959F0);

void CPhysical::ApplyMoveForce(float jx, float jy, float jz) {
    plugin::CallMethodDynGlobal<CPhysical *, float, float, float>(gaddrof(CPhysical::ApplyMoveForce), this, jx, jy, jz);
}

int addrof(CPhysical::ApplyMoveSpeed) = ADDRESS_BY_VERSION(0x495B10, 0x495BD0, 0x495B60);
int gaddrof(CPhysical::ApplyMoveSpeed) = GLOBAL_ADDRESS_BY_VERSION(0x495B10, 0x495BD0, 0x495B60);

void CPhysical::ApplyMoveSpeed() {
    plugin::CallMethodDynGlobal<CPhysical *>(gaddrof(CPhysical::ApplyMoveSpeed), this);
}

int addrof(CPhysical::ApplySpringCollisionAlt) = ADDRESS_BY_VERSION(0x499890, 0x499980, 0x499910);
int gaddrof(CPhysical::ApplySpringCollisionAlt) = GLOBAL_ADDRESS_BY_VERSION(0x499890, 0x499980, 0x499910);

bool CPhysical::ApplySpringCollisionAlt(float springConst, CVector &springDir, CVector &point, float springRatio, float bias) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPhysical *, float, CVector &, CVector &, float, float>(gaddrof(CPhysical::ApplySpringCollisionAlt), this, springConst, springDir, point, springRatio, bias);
}

int addrof(CPhysical::ApplySpringDampening) = ADDRESS_BY_VERSION(0x499990, 0x499A80, 0x499A10);
int gaddrof(CPhysical::ApplySpringDampening) = GLOBAL_ADDRESS_BY_VERSION(0x499990, 0x499A80, 0x499A10);

bool CPhysical::ApplySpringDampening(float damping, CVector &springDir, CVector &point, CVector &speed) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPhysical *, float, CVector &, CVector &, CVector &>(gaddrof(CPhysical::ApplySpringDampening), this, damping, springDir, point, speed);
}

int addrof(CPhysical::ApplyTurnForce) = ADDRESS_BY_VERSION(0x495A10, 0x495AD0, 0x495A60);
int gaddrof(CPhysical::ApplyTurnForce) = GLOBAL_ADDRESS_BY_VERSION(0x495A10, 0x495AD0, 0x495A60);

void CPhysical::ApplyTurnForce(float jx, float jy, float jz, float px, float py, float pz) {
    plugin::CallMethodDynGlobal<CPhysical *, float, float, float, float, float, float>(gaddrof(CPhysical::ApplyTurnForce), this, jx, jy, jz, px, py, pz);
}

int addrof(CPhysical::ApplyTurnSpeed) = ADDRESS_BY_VERSION(0x497280, 0x497340, 0x4972D0);
int gaddrof(CPhysical::ApplyTurnSpeed) = GLOBAL_ADDRESS_BY_VERSION(0x497280, 0x497340, 0x4972D0);

void CPhysical::ApplyTurnSpeed() {
    plugin::CallMethodDynGlobal<CPhysical *>(gaddrof(CPhysical::ApplyTurnSpeed), this);
}

int addrof(CPhysical::CheckCollision) = ADDRESS_BY_VERSION(0x496E50, 0x496F10, 0x496EA0);
int gaddrof(CPhysical::CheckCollision) = GLOBAL_ADDRESS_BY_VERSION(0x496E50, 0x496F10, 0x496EA0);

bool CPhysical::CheckCollision() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPhysical *>(gaddrof(CPhysical::CheckCollision), this);
}

int addrof(CPhysical::CheckCollision_SimpleCar) = ADDRESS_BY_VERSION(0x496EB0, 0x496F70, 0x496F00);
int gaddrof(CPhysical::CheckCollision_SimpleCar) = GLOBAL_ADDRESS_BY_VERSION(0x496EB0, 0x496F70, 0x496F00);

bool CPhysical::CheckCollision_SimpleCar() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPhysical *>(gaddrof(CPhysical::CheckCollision_SimpleCar), this);
}

int addrof(CPhysical::GetHasCollidedWith) = ADDRESS_BY_VERSION(0x497240, 0x497300, 0x497290);
int gaddrof(CPhysical::GetHasCollidedWith) = GLOBAL_ADDRESS_BY_VERSION(0x497240, 0x497300, 0x497290);

bool CPhysical::GetHasCollidedWith(CEntity *entity) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPhysical *, CEntity *>(gaddrof(CPhysical::GetHasCollidedWith), this, entity);
}

int addrof(CPhysical::ProcessCollisionSectorList) = ADDRESS_BY_VERSION(0x49B620, 0x49B710, 0x49B6A0);
int gaddrof(CPhysical::ProcessCollisionSectorList) = GLOBAL_ADDRESS_BY_VERSION(0x49B620, 0x49B710, 0x49B6A0);

bool CPhysical::ProcessCollisionSectorList(CPtrList *list) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPhysical *, CPtrList *>(gaddrof(CPhysical::ProcessCollisionSectorList), this, list);
}

int addrof(CPhysical::ProcessCollisionSectorList_SimpleCar) = ADDRESS_BY_VERSION(0x49E790, 0x49E880, 0x49E810);
int gaddrof(CPhysical::ProcessCollisionSectorList_SimpleCar) = GLOBAL_ADDRESS_BY_VERSION(0x49E790, 0x49E880, 0x49E810);

bool CPhysical::ProcessCollisionSectorList_SimpleCar(CSector *sector) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPhysical *, CSector *>(gaddrof(CPhysical::ProcessCollisionSectorList_SimpleCar), this, sector);
}

int addrof(CPhysical::ProcessShiftSectorList) = ADDRESS_BY_VERSION(0x49DA10, 0x49DB00, 0x49DA90);
int gaddrof(CPhysical::ProcessShiftSectorList) = GLOBAL_ADDRESS_BY_VERSION(0x49DA10, 0x49DB00, 0x49DA90);

bool CPhysical::ProcessShiftSectorList(CPtrList *list) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPhysical *, CPtrList *>(gaddrof(CPhysical::ProcessShiftSectorList), this, list);
}

int addrof(CPhysical::RemoveAndAdd) = ADDRESS_BY_VERSION(0x495540, 0x495600, 0x495590);
int gaddrof(CPhysical::RemoveAndAdd) = GLOBAL_ADDRESS_BY_VERSION(0x495540, 0x495600, 0x495590);

void CPhysical::RemoveAndAdd() {
    plugin::CallMethodDynGlobal<CPhysical *>(gaddrof(CPhysical::RemoveAndAdd), this);
}

int addrof(CPhysical::RemoveFromMovingList) = ADDRESS_BY_VERSION(0x495940, 0x495A00, 0x495990);
int gaddrof(CPhysical::RemoveFromMovingList) = GLOBAL_ADDRESS_BY_VERSION(0x495940, 0x495A00, 0x495990);

void CPhysical::RemoveFromMovingList() {
    plugin::CallMethodDynGlobal<CPhysical *>(gaddrof(CPhysical::RemoveFromMovingList), this);
}

int addrof(CPhysical::RemoveRefsToEntity) = ADDRESS_BY_VERSION(0x49F820, 0x49F910, 0x49F8A0);
int gaddrof(CPhysical::RemoveRefsToEntity) = GLOBAL_ADDRESS_BY_VERSION(0x49F820, 0x49F910, 0x49F8A0);

void CPhysical::RemoveRefsToEntity(CEntity *entity) {
    plugin::CallMethodDynGlobal<CPhysical *, CEntity *>(gaddrof(CPhysical::RemoveRefsToEntity), this, entity);
}

int addrof(CPhysical::PlacePhysicalRelativeToOtherPhysical) = ADDRESS_BY_VERSION(0x49F890, 0x49F980, 0x49F910);
int gaddrof(CPhysical::PlacePhysicalRelativeToOtherPhysical) = GLOBAL_ADDRESS_BY_VERSION(0x49F890, 0x49F980, 0x49F910);

void CPhysical::PlacePhysicalRelativeToOtherPhysical(CPhysical *other, CPhysical *physical, CVector localPos) {
    plugin::CallDynGlobal<CPhysical *, CPhysical *, CVector>(gaddrof(CPhysical::PlacePhysicalRelativeToOtherPhysical), other, physical, localPos);
}
