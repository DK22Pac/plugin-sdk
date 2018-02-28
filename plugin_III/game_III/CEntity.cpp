/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CEntity.h"

// Converted from void CEntity::Add(void) 0x0
void CEntity::Add() {
    plugin::CallVirtualMethod<1, CEntity *>(this);
}

// Converted from void CEntity::Remove(void) 0x0
void CEntity::Remove() {
    plugin::CallVirtualMethod<2, CEntity *>(this);
}

// Converted from void CEntity::SetModelIndex(uint modelIndex) 0x0
void CEntity::SetModelIndex(unsigned int modelIndex) {
    plugin::CallVirtualMethod<3, CEntity *, unsigned int>(this, modelIndex);
}

// Converted from void CEntity::SetModelIndexNoCreate(uint modelIndex) 0x0
void CEntity::SetModelIndexNoCreate(unsigned int modelIndex) {
    plugin::CallVirtualMethod<4, CEntity *, unsigned int>(this, modelIndex);
}

// Converted from void CEntity::CreateRwObject(void) 0x0
void CEntity::CreateRwObject() {
    plugin::CallVirtualMethod<5, CEntity *>(this);
}

// Converted from void CEntity::DeleteRwObject(void) 0x0
void CEntity::DeleteRwObject() {
    plugin::CallVirtualMethod<6, CEntity *>(this);
}

// Converted from CRect CEntity::GetBoundRect(void) 0x0
CRect CEntity::GetBoundRect() {
    CRect result;
    plugin::CallVirtualMethodAndReturn<CRect, 7, CEntity *, CRect*>(this, &result);
    return result;
}

// Converted from void CEntity::ProcessControl(void) 0x0
void CEntity::ProcessControl() {
    plugin::CallVirtualMethod<8, CEntity *>(this);
}

// Converted from void CEntity::ProcessCollision(void) 0x0
void CEntity::ProcessCollision() {
    plugin::CallVirtualMethod<9, CEntity *>(this);
}

// Converted from void CEntity::ProcessShift(void) 0x0
void CEntity::ProcessShift() {
    plugin::CallVirtualMethod<10, CEntity *>(this);
}

// Converted from void CEntity::Teleport(CVector posn) 0x0
void CEntity::Teleport(CVector posn) {
    plugin::CallVirtualMethod<11, CEntity *, CVector>(this, posn);
}

// Converted from void CEntity::PreRender(void) 0x0
void CEntity::PreRender() {
    plugin::CallVirtualMethod<12, CEntity *>(this);
}

// Converted from void CEntity::Render(void) 0x0
void CEntity::Render() {
    plugin::CallVirtualMethod<13, CEntity *>(this);
}

// Converted from bool CEntity::SetupLighting(void) 0x0
bool CEntity::SetupLighting() {
    return plugin::CallVirtualMethodAndReturn<bool, 14, CEntity *>(this);
}

// Converted from void CEntity::RemoveLighting(bool resetWorldColors) 0x0
void CEntity::RemoveLighting(bool resetWorldColors) {
    plugin::CallVirtualMethod<15, CEntity *, bool>(this, resetWorldColors);
}

// Converted from void CEntity::FlagToDestroyWhenNextProcessed(void) 0x0
void CEntity::FlagToDestroyWhenNextProcessed() {
    plugin::CallVirtualMethod<16, CEntity *>(this);
}

// Converted from cdecl void CEntity::AddSteamsFromGround(CVector *) 0x4B3FE0
void CEntity::AddSteamsFromGround(CVector* arg0) {
    plugin::Call<0x4B3FE0, CVector*>(arg0);
}

// Converted from thiscall void CEntity::AttachToRwObject(RwObject *rwObject) 0x473F10
void CEntity::AttachToRwObject(RwObject* rwObject) {
    plugin::CallMethod<0x473F10, CEntity *, RwObject*>(this, rwObject);
}

// Converted from thiscall void CEntity::CEntity(void) 0x473C30
CEntity::CEntity() {
    plugin::CallMethod<0x473C30, CEntity *>(this);
}

// Converted from thiscall void CEntity::DetachFromRwObject(void) 0x473F60
void CEntity::DetachFromRwObject() {
    plugin::CallMethod<0x473F60, CEntity *>(this);
}

// Converted from thiscall void CEntity::GetBoundCentre(CVector &out) 0x4742C0
void CEntity::GetBoundCentre(CVector& out) {
    plugin::CallMethod<0x4742C0, CEntity *, CVector&>(this, out);
}

// Converted from thiscall CVector CEntity::GetBoundCentre(void) 0x474290
CVector CEntity::GetBoundCentre() {
    CVector result;
    plugin::CallMethodAndReturn<CVector, 0x474290, CEntity *, CVector*>(this, &result);
    return result;
}

// Converted from thiscall float CEntity::GetBoundRadius(void) 0x474310
float CEntity::GetBoundRadius() {
    return plugin::CallMethodAndReturn<float, 0x474310, CEntity *>(this);
}

// Converted from thiscall float CEntity::GetDistanceFromCentreOfMassToBaseOfModel(void) 0x4755C0
float CEntity::GetDistanceFromCentreOfMassToBaseOfModel() {
    return plugin::CallMethodAndReturn<float, 0x4755C0, CEntity *>(this);
}

// Converted from thiscall bool CEntity::GetIsOnScreen(void) 0x474CC0
bool CEntity::GetIsOnScreen() {
    return plugin::CallMethodAndReturn<bool, 0x474CC0, CEntity *>(this);
}

// Converted from thiscall bool CEntity::GetIsOnScreenComplex(void) 0x474D20
bool CEntity::GetIsOnScreenComplex() {
    return plugin::CallMethodAndReturn<bool, 0x474D20, CEntity *>(this);
}

// Converted from thiscall bool CEntity::GetIsTouching(CVector const&posn, float radius) 0x474C10
bool CEntity::GetIsTouching(CVector const& posn, float radius) {
    return plugin::CallMethodAndReturn<bool, 0x474C10, CEntity *, CVector const&, float>(this, posn, radius);
}

// Converted from thiscall bool CEntity::IsVisible(void) 0x474CA0
bool CEntity::IsVisible() {
    return plugin::CallMethodAndReturn<bool, 0x474CA0, CEntity *>(this);
}

// Converted from thiscall void CEntity::ModifyMatrixForBannerInWind(void) 0x475830
void CEntity::ModifyMatrixForBannerInWind() {
    plugin::CallMethod<0x475830, CEntity *>(this);
}

// Converted from thiscall void CEntity::ModifyMatrixForTreeInWind(void) 0x475670
void CEntity::ModifyMatrixForTreeInWind() {
    plugin::CallMethod<0x475670, CEntity *>(this);
}

// Converted from thiscall void CEntity::PreRenderForGlassWindow(void) 0x475A20
void CEntity::PreRenderForGlassWindow() {
    plugin::CallMethod<0x475A20, CEntity *>(this);
}

// Converted from thiscall void CEntity::ProcessLightsForEntity(void) 0x4FA530
void CEntity::ProcessLightsForEntity() {
    plugin::CallMethod<0x4FA530, CEntity *>(this);
}

// Converted from thiscall void CEntity::PruneReferences(void) 0x4A7530
void CEntity::PruneReferences() {
    plugin::CallMethod<0x4A7530, CEntity *>(this);
}

// Converted from thiscall void CEntity::RegisterReference(CEntity** entity) 0x4A7480
void CEntity::RegisterReference(CEntity** entity) {
    plugin::CallMethod<0x4A7480, CEntity *, CEntity**>(this, entity);
}

// Converted from thiscall void CEntity::ResolveReferences(void) 0x4A74E0
void CEntity::ResolveReferences() {
    plugin::CallMethod<0x4A74E0, CEntity *>(this);
}

// Converted from thiscall void CEntity::SetupBigBuilding(void) 0x4755E0
void CEntity::SetupBigBuilding() {
    plugin::CallMethod<0x4755E0, CEntity *>(this);
}

// Converted from thiscall void CEntity::UpdateRwFrame(void) 0x474330
void CEntity::UpdateRwFrame() {
    plugin::CallMethod<0x474330, CEntity *>(this);
}
