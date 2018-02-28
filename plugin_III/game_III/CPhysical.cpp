/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPhysical.h"

// Converted from void CPhysical::ProcessEntityCollision(CEntity *entity, CColPoint *colPoint) 0x0
void CPhysical::ProcessEntityCollision(CEntity* entity, CColPoint* colPoint) {
    plugin::CallVirtualMethod<17, CPhysical *, CEntity*, CColPoint*>(this, entity, colPoint);
}

// Converted from thiscall void CPhysical::AddCollisionRecord(CEntity *entity) 0x497180
void CPhysical::AddCollisionRecord(CEntity* entity) {
    plugin::CallMethod<0x497180, CPhysical *, CEntity*>(this, entity);
}

// Converted from thiscall void CPhysical::AddCollisionRecord_Treadable(CEntity *entity) 0x4970C0
void CPhysical::AddCollisionRecord_Treadable(CEntity* entity) {
    plugin::CallMethod<0x4970C0, CPhysical *, CEntity*>(this, entity);
}

// Converted from thiscall void CPhysical::AddToMovingList(void) 0x4958F0
void CPhysical::AddToMovingList() {
    plugin::CallMethod<0x4958F0, CPhysical *>(this);
}

// Converted from thiscall void CPhysical::ApplyAirResistance(void) 0x495C20
void CPhysical::ApplyAirResistance() {
    plugin::CallMethod<0x495C20, CPhysical *>(this);
}

// Converted from thiscall bool CPhysical::ApplyCollision(CPhysical* phys, CColPoint &colPoint, float &, float &) 0x4973A0
bool CPhysical::ApplyCollision(CPhysical* phys, CColPoint& colPoint, float& arg2, float& arg3) {
    return plugin::CallMethodAndReturn<bool, 0x4973A0, CPhysical *, CPhysical*, CColPoint&, float&, float&>(this, phys, colPoint, arg2, arg3);
}

// Converted from thiscall bool CPhysical::ApplyCollisionAlt(CEntity *entity, CColPoint &colPoint, float &, CVector &, CVector &) 0x4992A0
bool CPhysical::ApplyCollisionAlt(CEntity* entity, CColPoint& colPoint, float& arg2, CVector& arg3, CVector& arg4) {
    return plugin::CallMethodAndReturn<bool, 0x4992A0, CPhysical *, CEntity*, CColPoint&, float&, CVector&, CVector&>(this, entity, colPoint, arg2, arg3, arg4);
}

// Converted from thiscall bool CPhysical::ApplyFriction(CPhysical* phys, float, CColPoint &colPoint) 0x49A180
bool CPhysical::ApplyFriction(CPhysical* phys, float arg1, CColPoint& colPoint) {
    return plugin::CallMethodAndReturn<bool, 0x49A180, CPhysical *, CPhysical*, float, CColPoint&>(this, phys, arg1, colPoint);
}

// Converted from thiscall bool CPhysical::ApplyFriction(float, CColPoint &colPoint) 0x499BE0
bool CPhysical::ApplyFriction(float arg0, CColPoint& colPoint) {
    return plugin::CallMethodAndReturn<bool, 0x499BE0, CPhysical *, float, CColPoint&>(this, arg0, colPoint);
}

// Converted from thiscall void CPhysical::ApplyFriction(void) 0x495B80
void CPhysical::ApplyFriction() {
    plugin::CallMethod<0x495B80, CPhysical *>(this);
}

// Converted from thiscall void CPhysical::ApplyFrictionMoveForce(float x, float y, float z) 0x495D90
void CPhysical::ApplyFrictionMoveForce(float x, float y, float z) {
    plugin::CallMethod<0x495D90, CPhysical *, float, float, float>(this, x, y, z);
}

// Converted from thiscall void CPhysical::ApplyFrictionTurnForce(float, float, float, float, float, float) 0x495E10
void CPhysical::ApplyFrictionTurnForce(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5) {
    plugin::CallMethod<0x495E10, CPhysical *, float, float, float, float, float, float>(this, arg0, arg1, arg2, arg3, arg4, arg5);
}

// Converted from thiscall void CPhysical::ApplyGravity(void) 0x495B50
void CPhysical::ApplyGravity() {
    plugin::CallMethod<0x495B50, CPhysical *>(this);
}

// Converted from thiscall void CPhysical::ApplyMoveForce(float x, float y, float z) 0x4959A0
void CPhysical::ApplyMoveForce(float x, float y, float z) {
    plugin::CallMethod<0x4959A0, CPhysical *, float, float, float>(this, x, y, z);
}

// Converted from thiscall void CPhysical::ApplyMoveSpeed(void) 0x495B10
void CPhysical::ApplyMoveSpeed() {
    plugin::CallMethod<0x495B10, CPhysical *>(this);
}

// Converted from thiscall void CPhysical::ApplySpringCollisionAlt(float, CVector &, CVector &, float, float, CVector &) 0x499890
void CPhysical::ApplySpringCollisionAlt(float arg0, CVector& arg1, CVector& arg2, float arg3, float arg4, CVector& arg5) {
    plugin::CallMethod<0x499890, CPhysical *, float, CVector&, CVector&, float, float, CVector&>(this, arg0, arg1, arg2, arg3, arg4, arg5);
}

// Converted from thiscall void CPhysical::ApplySpringDampening(float, CVector &, CVector &, CVector &) 0x499990
void CPhysical::ApplySpringDampening(float arg0, CVector& arg1, CVector& arg2, CVector& arg3) {
    plugin::CallMethod<0x499990, CPhysical *, float, CVector&, CVector&, CVector&>(this, arg0, arg1, arg2, arg3);
}

// Converted from thiscall void CPhysical::ApplyTurnForce(float, float, float, float, float, float) 0x495A10
void CPhysical::ApplyTurnForce(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5) {
    plugin::CallMethod<0x495A10, CPhysical *, float, float, float, float, float, float>(this, arg0, arg1, arg2, arg3, arg4, arg5);
}

// Converted from thiscall void CPhysical::ApplyTurnSpeed(void) 0x497280
void CPhysical::ApplyTurnSpeed() {
    plugin::CallMethod<0x497280, CPhysical *>(this);
}

// Converted from thiscall bool CPhysical::CheckCollision(void) 0x496E50
bool CPhysical::CheckCollision() {
    return plugin::CallMethodAndReturn<bool, 0x496E50, CPhysical *>(this);
}

// Converted from thiscall bool CPhysical::CheckCollision_SimpleCar(void) 0x496EB0
bool CPhysical::CheckCollision_SimpleCar() {
    return plugin::CallMethodAndReturn<bool, 0x496EB0, CPhysical *>(this);
}

// Converted from thiscall bool CPhysical::GetHasCollidedWith(CEntity *entity) 0x497240
bool CPhysical::GetHasCollidedWith(CEntity* entity) {
    return plugin::CallMethodAndReturn<bool, 0x497240, CPhysical *, CEntity*>(this, entity);
}

// Converted from cdecl void CPhysical::PlacePhysicalRelativeToOtherPhysical(CPhysical *phys1, CPhysical *phys2, CVector offset) 0x49F890
void CPhysical::PlacePhysicalRelativeToOtherPhysical(CPhysical* phys1, CPhysical* phys2, CVector offset) {
    plugin::Call<0x49F890, CPhysical*, CPhysical*, CVector>(phys1, phys2, offset);
}

// Converted from thiscall bool CPhysical::ProcessCollisionSectorList(CPtrList *ptrList) 0x49B620
bool CPhysical::ProcessCollisionSectorList(CPtrList* ptrList) {
    return plugin::CallMethodAndReturn<bool, 0x49B620, CPhysical *, CPtrList*>(this, ptrList);
}

// Converted from thiscall bool CPhysical::ProcessCollisionSectorList_SimpleCar(CSector *sector) 0x49E790
bool CPhysical::ProcessCollisionSectorList_SimpleCar(CSector* sector) {
    return plugin::CallMethodAndReturn<bool, 0x49E790, CPhysical *, CSector*>(this, sector);
}

// Converted from thiscall bool CPhysical::ProcessShiftSectorList(CPtrList *ptrList) 0x49DA10
bool CPhysical::ProcessShiftSectorList(CPtrList* ptrList) {
    return plugin::CallMethodAndReturn<bool, 0x49DA10, CPhysical *, CPtrList*>(this, ptrList);
}

// Converted from thiscall void CPhysical::RemoveAndAdd(void) 0x495540
void CPhysical::RemoveAndAdd() {
    plugin::CallMethod<0x495540, CPhysical *>(this);
}

// Converted from thiscall void CPhysical::RemoveFromMovingList(void) 0x495940
void CPhysical::RemoveFromMovingList() {
    plugin::CallMethod<0x495940, CPhysical *>(this);
}

// Converted from thiscall void CPhysical::RemoveRefsToEntity(CEntity *entity) 0x49F820
void CPhysical::RemoveRefsToEntity(CEntity* entity) {
    plugin::CallMethod<0x49F820, CPhysical *, CEntity*>(this, entity);
}