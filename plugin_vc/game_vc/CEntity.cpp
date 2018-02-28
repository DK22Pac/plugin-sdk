/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CEntity.h"

// Converted from void CEntity::Add(void) 0x0
void CEntity::Add() {
    ((void(__thiscall *)(CEntity*))(*(void ***)this)[0])(this);
}

// Converted from void CEntity::Remove(void) 0x0
void CEntity::Remove() {
    ((void(__thiscall *)(CEntity*))(*(void ***)this)[1])(this);
}

// Converted from void CEntity::SetModelIndex(uint modelIndex) 0x0
void CEntity::SetModelIndex(unsigned int modelIndex) {
    ((void(__thiscall *)(CEntity*, unsigned int))(*(void ***)this)[3])(this, modelIndex);
}

// Converted from void CEntity::SetModelIndexNoCreate(uint modelIndex) 0x0
void CEntity::SetModelIndexNoCreate(unsigned int modelIndex) {
    ((void(__thiscall *)(CEntity*, unsigned int))(*(void ***)this)[4])(this, modelIndex);
}

// Converted from void CEntity::CreateRwObject(void) 0x0
void CEntity::CreateRwObject() {
    ((void(__thiscall *)(CEntity*))(*(void ***)this)[5])(this);
}

// Converted from void CEntity::DeleteRwObject(void) 0x0
void CEntity::DeleteRwObject() {
    ((void(__thiscall *)(CEntity*))(*(void ***)this)[6])(this);
}

// Converted from CRect CEntity::GetBoundRect(void) 0x0
CRect CEntity::GetBoundRect() {
    CRect result;
    ((void(__thiscall *)(CEntity*, CRect*))(*(void ***)this)[7])(this, &result);
    return result;
}

// Converted from void CEntity::ProcessControl(void) 0x0
void CEntity::ProcessControl() {
    ((void(__thiscall *)(CEntity*))(*(void ***)this)[8])(this);
}

// Converted from void CEntity::ProcessCollision(void) 0x0
void CEntity::ProcessCollision() {
    ((void(__thiscall *)(CEntity*))(*(void ***)this)[9])(this);
}

// Converted from void CEntity::ProcessShift(void) 0x0
void CEntity::ProcessShift() {
    ((void(__thiscall *)(CEntity*))(*(void ***)this)[10])(this);
}

// Converted from void CEntity::Teleport(CVector posn) 0x0
void CEntity::Teleport(CVector posn) {
    ((void(__thiscall *)(CEntity*, CVector))(*(void ***)this)[11])(this, posn);
}

// Converted from void CEntity::PreRender(void) 0x0
void CEntity::PreRender() {
    ((void(__thiscall *)(CEntity*))(*(void ***)this)[12])(this);
}

// Converted from void CEntity::Render(void) 0x0
void CEntity::Render() {
    ((void(__thiscall *)(CEntity*))(*(void ***)this)[13])(this);
}

// Converted from bool CEntity::SetupLighting(void) 0x0
bool CEntity::SetupLighting() {
    return ((bool(__thiscall *)(CEntity*))(*(void ***)this)[14])(this);
}

// Converted from void CEntity::RemoveLighting(bool resetWorldColors) 0x0
void CEntity::RemoveLighting(bool resetWorldColors) {
    ((void(__thiscall *)(CEntity*, bool))(*(void ***)this)[15])(this, resetWorldColors);
}

// Converted from void CEntity::FlagToDestroyWhenNextProcessed(void) 0x0
void CEntity::FlagToDestroyWhenNextProcessed() {
    ((void(__thiscall *)(CEntity*))(*(void ***)this)[16])(this);
}

// Converted from thiscall void CEntity::SetRwObjectAlpha(int alpha) 0x487990
void CEntity::SetRwObjectAlpha(int alpha) {
    ((void(__thiscall *)(CEntity*, int))0x487990)(this, alpha);
}

// Converted from thiscall void CEntity::ModifyMatrixForTreeInWind(void) 0x487A20
void CEntity::ModifyMatrixForTreeInWind() {
    ((void(__thiscall *)(CEntity*))0x487A20)(this);
}

// Converted from thiscall void CEntity::SetupBigBuilding(void) 0x487C70
void CEntity::SetupBigBuilding() {
    ((void(__thiscall *)(CEntity*))0x487C70)(this);
}

// Converted from thiscall float CEntity::GetDistanceFromCentreOfMassToBaseOfModel(void) 0x487D10
float CEntity::GetDistanceFromCentreOfMassToBaseOfModel() {
    return ((float(__thiscall *)(CEntity*))0x487D10)(this);
}

// Converted from thiscall bool CEntity::GetIsOnScreenComplex(void) 0x488250
bool CEntity::GetIsOnScreenComplex() {
    return ((bool(__thiscall *)(CEntity*))0x488250)(this);
}

// Converted from thiscall bool CEntity::GetIsOnScreen(void) 0x4885D0
bool CEntity::GetIsOnScreen() {
    return ((bool(__thiscall *)(CEntity*))0x4885D0)(this);
}

// Converted from thiscall bool CEntity::IsVisible(void) 0x488720
bool CEntity::IsVisible() {
    return ((bool(__thiscall *)(CEntity*))0x488720)(this);
}

// Converted from thiscall bool CEntity::GetIsTouching(CVector const&posn,float radius) 0x488740
bool CEntity::GetIsTouching(CVector const& posn, float radius) {
    return ((bool(__thiscall *)(CEntity*, CVector const&, float))0x488740)(this, posn, radius);
}

// Converted from thiscall bool CEntity::HasPreRenderEffects(void) 0x489170
bool CEntity::HasPreRenderEffects() {
    return ((bool(__thiscall *)(CEntity*))0x489170)(this);
}

// Converted from thiscall void CEntity::UpdateRpHAnim(void) 0x489330
void CEntity::UpdateRpHAnim() {
    ((void(__thiscall *)(CEntity*))0x489330)(this);
}

// Converted from thiscall void CEntity::UpdateRwFrame(void) 0x489360
void CEntity::UpdateRwFrame() {
    ((void(__thiscall *)(CEntity*))0x489360)(this);
}

// Converted from thiscall void CEntity::GetBoundCentre(CVector &out) 0x489380
void CEntity::GetBoundCentre(CVector& out) {
    ((void(__thiscall *)(CEntity*, CVector&))0x489380)(this, out);
}

// Converted from thiscall CVector CEntity::GetBoundCentre(void) 0x4893D0
CVector CEntity::GetBoundCentre() {
    CVector result;
    ((void(__thiscall *)(CEntity*, CVector*))0x4893D0)(this, &result);
    return result;
}

// Converted from cdecl RpAtomic *AtomicRemoveAnimFromSkinCB(RpAtomic *atomic,void *callbackData) 0x489750
RpAtomic *AtomicRemoveAnimFromSkinCB(RpAtomic* atomic, void* callbackData) {
    return ((RpAtomic *(__cdecl *)(RpAtomic*, void*))0x489750)(atomic, callbackData);
}

// Converted from thiscall void CEntity::DetachFromRwObject(void) 0x489790
void CEntity::DetachFromRwObject() {
    ((void(__thiscall *)(CEntity*))0x489790)(this);
}

// Converted from thiscall void CEntity::AttachToRwObject(RwObject *rwObject) 0x4897C0
void CEntity::AttachToRwObject(RwObject* rwObject) {
    ((void(__thiscall *)(CEntity*, RwObject*))0x4897C0)(this, rwObject);
}

// Converted from thiscall void CEntity::CEntity(void) 0x489910
//CEntity::CEntity() {
//    ((void(__thiscall *)(CEntity*))0x489910)(this);
//}

// Converted from thiscall void CEntity::PruneReferences(void) 0x4C69F0
void CEntity::PruneReferences() {
    ((void(__thiscall *)(CEntity*))0x4C69F0)(this);
}

// Converted from thiscall void CEntity::ResolveReferences(void) 0x4C6A30
void CEntity::ResolveReferences() {
    ((void(__thiscall *)(CEntity*))0x4C6A30)(this);
}

// Converted from thiscall void CEntity::CleanUpOldReference(CEntity** pEntity) 0x4C6A80
void CEntity::CleanUpOldReference(CEntity** pEntity) {
    ((void(__thiscall *)(CEntity*, CEntity**))0x4C6A80)(this, pEntity);
}

// Converted from thiscall void CEntity::RegisterReference(CEntity** pEntity) 0x4C6AC0
void CEntity::RegisterReference(CEntity** pEntity) {
    ((void(__thiscall *)(CEntity*, CEntity**))0x4C6AC0)(this, pEntity);
}

// Converted from thiscall void CEntity::ProcessLightsForEntity(void) 0x541590
void CEntity::ProcessLightsForEntity() {
    ((void(__thiscall *)(CEntity*))0x541590)(this);
}

// Converted from thiscall bool CEntity::IsEntityOccluded(void) 0x634AE0
bool CEntity::IsEntityOccluded() {
    return ((bool(__thiscall *)(CEntity*))0x634AE0)(this);
}