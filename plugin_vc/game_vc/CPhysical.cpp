/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPhysical.h"

// Converted from void CPhysical::ProcessEntityCollision(CEntity *, CColPoint *) 0x0
void CPhysical::ProcessEntityCollision(CEntity* arg0, CColPoint* arg1) {
    ((void(__thiscall *)(CPhysical*, CEntity*, CColPoint*))(*(void ***)this)[0])(this, arg0, arg1);
}

// Converted from cdecl void CPhysical::PlacePhysicalRelativeToOtherPhysical(CPhysical* phys1,CPhysical* phys2,CVector offset) 0x4AF100
void CPhysical::PlacePhysicalRelativeToOtherPhysical(CPhysical* phys1, CPhysical* phys2, CVector offset) {
    ((void(__cdecl *)(CPhysical*, CPhysical*, CVector))0x4AF100)(phys1, phys2, offset);
}

// Converted from thiscall void CPhysical::RemoveRefsToEntity(CEntity *entity) 0x4AF1D0
void CPhysical::RemoveRefsToEntity(CEntity* entity) {
    ((void(__thiscall *)(CPhysical*, CEntity*))0x4AF1D0)(this, entity);
}

// Converted from thiscall bool CPhysical::ProcessCollisionSectorList_SimpleCar(CSector *sector) 0x4AF2E0
bool CPhysical::ProcessCollisionSectorList_SimpleCar(CSector* sector) {
    return ((bool(__thiscall *)(CPhysical*, CSector*))0x4AF2E0)(this, sector);
}

// Converted from thiscall bool CPhysical::ProcessShiftSectorList(CPtrList *ptrList) 0x4B02B0
bool CPhysical::ProcessShiftSectorList(CPtrList* ptrList) {
    return ((bool(__thiscall *)(CPhysical*, CPtrList*))0x4B02B0)(this, ptrList);
}

// Converted from thiscall bool CPhysical::ProcessCollisionSectorList(CPtrList *ptrList) 0x4B1070
bool CPhysical::ProcessCollisionSectorList(CPtrList* ptrList) {
    return ((bool(__thiscall *)(CPhysical*, CPtrList*))0x4B1070)(this, ptrList);
}

// Converted from thiscall bool CPhysical::ApplyFriction(CPhysical* phys,float,CColPoint &colPoint) 0x4B39F0
bool CPhysical::ApplyFriction(CPhysical* phys, float arg1, CColPoint& colPoint) {
    return ((bool(__thiscall *)(CPhysical*, CPhysical*, float, CColPoint&))0x4B39F0)(this, phys, arg1, colPoint);
}

// Converted from thiscall bool CPhysical::ApplyFriction(float,CColPoint &colPoint) 0x4B5200
bool CPhysical::ApplyFriction(float arg0, CColPoint& colPoint) {
    return ((bool(__thiscall *)(CPhysical*, float, CColPoint&))0x4B5200)(this, arg0, colPoint);
}

// Converted from thiscall bool CPhysical::ApplySpringDampening(float,CVector &,CVector &,CVector &) 0x4B5810
bool CPhysical::ApplySpringDampening(float arg0, CVector& arg1, CVector& arg2, CVector& arg3) {
    return ((bool(__thiscall *)(CPhysical*, float, CVector&, CVector&, CVector&))0x4B5810)(this, arg0, arg1, arg2, arg3);
}

// Converted from thiscall bool CPhysical::ApplySpringCollisionAlt(float,CVector &,CVector &,float,float,CVector &) 0x4B5AB0
bool CPhysical::ApplySpringCollisionAlt(float arg0, CVector& arg1, CVector& arg2, float arg3, float arg4, CVector& arg5) {
    return ((bool(__thiscall *)(CPhysical*, float, CVector&, CVector&, float, float, CVector&))0x4B5AB0)(this, arg0, arg1, arg2, arg3, arg4, arg5);
}

// Converted from thiscall bool CPhysical::ApplySpringCollision(float,CVector &,CVector &,float,float) 0x4B5C60
bool CPhysical::ApplySpringCollision(float arg0, CVector& arg1, CVector& arg2, float arg3, float arg4) {
    return ((bool(__thiscall *)(CPhysical*, float, CVector&, CVector&, float, float))0x4B5C60)(this, arg0, arg1, arg2, arg3, arg4);
}

// Converted from thiscall bool CPhysical::ApplyCollisionAlt(CEntity *entity,CColPoint &colPoint,float &,CVector &,CVector &) 0x4B5DB0
bool CPhysical::ApplyCollisionAlt(CEntity* entity, CColPoint& colPoint, float& arg2, CVector& arg3, CVector& arg4) {
    return ((bool(__thiscall *)(CPhysical*, CEntity*, CColPoint&, float&, CVector&, CVector&))0x4B5DB0)(this, entity, colPoint, arg2, arg3, arg4);
}

// Converted from thiscall bool CPhysical::ApplyCollision(CPhysical* phys,CColPoint &colPoint,float &,float &) 0x4B6600
bool CPhysical::ApplyCollision(CPhysical* phys, CColPoint& colPoint, float& arg2, float& arg3) {
    return ((bool(__thiscall *)(CPhysical*, CPhysical*, CColPoint&, float&, float&))0x4B6600)(this, phys, colPoint, arg2, arg3);
}

// Converted from thiscall bool CPhysical::ApplyCollision(CColPoint &colPoint,float &) 0x4B8AA0
bool CPhysical::ApplyCollision(CColPoint& colPoint, float& arg1) {
    return ((bool(__thiscall *)(CPhysical*, CColPoint&, float&))0x4B8AA0)(this, colPoint, arg1);
}

// Converted from thiscall void CPhysical::ApplyTurnSpeed(void) 0x4B8EC0
void CPhysical::ApplyTurnSpeed() {
    ((void(__thiscall *)(CPhysical*))0x4B8EC0)(this);
}

// Converted from thiscall bool CPhysical::GetHasCollidedWith(CEntity *entity) 0x4B9010
bool CPhysical::GetHasCollidedWith(CEntity* entity) {
    return ((bool(__thiscall *)(CPhysical*, CEntity*))0x4B9010)(this, entity);
}

// Converted from thiscall void CPhysical::AddCollisionRecord(CEntity *entity) 0x4B9050
void CPhysical::AddCollisionRecord(CEntity* entity) {
    ((void(__thiscall *)(CPhysical*, CEntity*))0x4B9050)(this, entity);
}

// Converted from thiscall bool CPhysical::CheckCollision(void) 0x4B9450
bool CPhysical::CheckCollision() {
    return ((bool(__thiscall *)(CPhysical*))0x4B9450)(this);
}

// Converted from thiscall void CPhysical::ApplyFrictionTurnForce(float,float,float,float,float,float) 0x4BAA00
void CPhysical::ApplyFrictionTurnForce(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5) {
    ((void(__thiscall *)(CPhysical*, float, float, float, float, float, float))0x4BAA00)(this, arg0, arg1, arg2, arg3, arg4, arg5);
}

// Converted from thiscall void CPhysical::ApplyAirResistance(void) 0x4BAB00
void CPhysical::ApplyAirResistance() {
    ((void(__thiscall *)(CPhysical*))0x4BAB00)(this);
}

// Converted from thiscall void CPhysical::ApplyMoveSpeed(void) 0x4BAC70
void CPhysical::ApplyMoveSpeed() {
    ((void(__thiscall *)(CPhysical*))0x4BAC70)(this);
}

// Converted from thiscall void CPhysical::ApplyTurnForce(float,float,float,float,float,float) 0x4BACC0
void CPhysical::ApplyTurnForce(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5) {
    ((void(__thiscall *)(CPhysical*, float, float, float, float, float, float))0x4BACC0)(this, arg0, arg1, arg2, arg3, arg4, arg5);
}

// Converted from thiscall void CPhysical::ApplyMoveForce(float x,float y,float z) 0x4BADC0
void CPhysical::ApplyMoveForce(float x, float y, float z) {
    ((void(__thiscall *)(CPhysical*, float, float, float))0x4BADC0)(this, x, y, z);
}

// Converted from thiscall void CPhysical::RemoveFromMovingList(void) 0x4BAE30
void CPhysical::RemoveFromMovingList() {
    ((void(__thiscall *)(CPhysical*))0x4BAE30)(this);
}

// Converted from thiscall void CPhysical::AddToMovingList(void) 0x4BAE90
void CPhysical::AddToMovingList() {
    ((void(__thiscall *)(CPhysical*))0x4BAE90)(this);
}

// Converted from thiscall void CPhysical::RemoveAndAdd(void) 0x4BAEE0
void CPhysical::RemoveAndAdd() {
    ((void(__thiscall *)(CPhysical*))0x4BAEE0)(this);
}