/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEntity.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CEntity) = ADDRESS_BY_VERSION(0x473C30, 0x473C30, 0x473C30);
int ctor_gaddr(CEntity) = GLOBAL_ADDRESS_BY_VERSION(0x473C30, 0x473C30, 0x473C30);

int dtor_addr(CEntity) = ADDRESS_BY_VERSION(0x473E40, 0x473E40, 0x473E40);
int dtor_gaddr(CEntity) = GLOBAL_ADDRESS_BY_VERSION(0x473E40, 0x473E40, 0x473E40);

int del_dtor_addr(CEntity) = ADDRESS_BY_VERSION(0x456960, 0x456960, 0x456960);
int del_dtor_gaddr(CEntity) = GLOBAL_ADDRESS_BY_VERSION(0x456960, 0x456960, 0x456960);

int addrof(CEntity::Add) = ADDRESS_BY_VERSION(0x475080, 0x475080, 0x475080);
int gaddrof(CEntity::Add) = GLOBAL_ADDRESS_BY_VERSION(0x475080, 0x475080, 0x475080);

void CEntity::Add() {
    plugin::CallVirtualMethod<1, CEntity *>(this);
}

int addrof(CEntity::Remove) = ADDRESS_BY_VERSION(0x475310, 0x475310, 0x475310);
int gaddrof(CEntity::Remove) = GLOBAL_ADDRESS_BY_VERSION(0x475310, 0x475310, 0x475310);

void CEntity::Remove() {
    plugin::CallVirtualMethod<2, CEntity *>(this);
}

int addrof(CEntity::SetModelIndex) = ADDRESS_BY_VERSION(0x473E70, 0x473E70, 0x473E70);
int gaddrof(CEntity::SetModelIndex) = GLOBAL_ADDRESS_BY_VERSION(0x473E70, 0x473E70, 0x473E70);

void CEntity::SetModelIndex(unsigned int modelIndex) {
    plugin::CallVirtualMethod<3, CEntity *, unsigned int>(this, modelIndex);
}

int addrof(CEntity::SetModelIndexNoCreate) = ADDRESS_BY_VERSION(0x473E90, 0x473E90, 0x473E90);
int gaddrof(CEntity::SetModelIndexNoCreate) = GLOBAL_ADDRESS_BY_VERSION(0x473E90, 0x473E90, 0x473E90);

void CEntity::SetModelIndexNoCreate(unsigned int modelIndex) {
    plugin::CallVirtualMethod<4, CEntity *, unsigned int>(this, modelIndex);
}

int addrof(CEntity::CreateRwObject) = ADDRESS_BY_VERSION(0x473EA0, 0x473EA0, 0x473EA0);
int gaddrof(CEntity::CreateRwObject) = GLOBAL_ADDRESS_BY_VERSION(0x473EA0, 0x473EA0, 0x473EA0);

void CEntity::CreateRwObject() {
    plugin::CallVirtualMethod<5, CEntity *>(this);
}

int addrof(CEntity::DeleteRwObject) = ADDRESS_BY_VERSION(0x473F90, 0x473F90, 0x473F90);
int gaddrof(CEntity::DeleteRwObject) = GLOBAL_ADDRESS_BY_VERSION(0x473F90, 0x473F90, 0x473F90);

void CEntity::DeleteRwObject() {
    plugin::CallVirtualMethod<6, CEntity *>(this);
}

int addrof(CEntity::GetBoundRect) = ADDRESS_BY_VERSION(0x474000, 0x474000, 0x474000);
int gaddrof(CEntity::GetBoundRect) = GLOBAL_ADDRESS_BY_VERSION(0x474000, 0x474000, 0x474000);

CRect *CEntity::GetBoundRect() {
    return plugin::CallVirtualMethodAndReturn<CRect *, 7, CEntity *>(this);
}

int addrof(CEntity::ProcessControl) = ADDRESS_BY_VERSION(0x405900, 0x405900, 0x405900);
int gaddrof(CEntity::ProcessControl) = GLOBAL_ADDRESS_BY_VERSION(0x405900, 0x405900, 0x405900);

void CEntity::ProcessControl() {
    plugin::CallVirtualMethod<8, CEntity *>(this);
}

int addrof(CEntity::ProcessCollision) = ADDRESS_BY_VERSION(0x405910, 0x405910, 0x405910);
int gaddrof(CEntity::ProcessCollision) = GLOBAL_ADDRESS_BY_VERSION(0x405910, 0x405910, 0x405910);

void CEntity::ProcessCollision() {
    plugin::CallVirtualMethod<9, CEntity *>(this);
}

int addrof(CEntity::ProcessShift) = ADDRESS_BY_VERSION(0x405920, 0x405920, 0x405920);
int gaddrof(CEntity::ProcessShift) = GLOBAL_ADDRESS_BY_VERSION(0x405920, 0x405920, 0x405920);

void CEntity::ProcessShift() {
    plugin::CallVirtualMethod<10, CEntity *>(this);
}

int addrof(CEntity::Teleport) = ADDRESS_BY_VERSION(0x405930, 0x405930, 0x405930);
int gaddrof(CEntity::Teleport) = GLOBAL_ADDRESS_BY_VERSION(0x405930, 0x405930, 0x405930);

void CEntity::Teleport(CVector point) {
    plugin::CallVirtualMethod<11, CEntity *, CVector>(this, point);
}

int addrof(CEntity::PreRender) = ADDRESS_BY_VERSION(0x474350, 0x474350, 0x474350);
int gaddrof(CEntity::PreRender) = GLOBAL_ADDRESS_BY_VERSION(0x474350, 0x474350, 0x474350);

void CEntity::PreRender() {
    plugin::CallVirtualMethod<12, CEntity *>(this);
}

int addrof(CEntity::Render) = ADDRESS_BY_VERSION(0x474BD0, 0x474BD0, 0x474BD0);
int gaddrof(CEntity::Render) = GLOBAL_ADDRESS_BY_VERSION(0x474BD0, 0x474BD0, 0x474BD0);

void CEntity::Render() {
    plugin::CallVirtualMethod<13, CEntity *>(this);
}

int addrof(CEntity::SetupLighting) = ADDRESS_BY_VERSION(0x4A7C60, 0x4A7D50, 0x4A7CE0);
int gaddrof(CEntity::SetupLighting) = GLOBAL_ADDRESS_BY_VERSION(0x4A7C60, 0x4A7D50, 0x4A7CE0);

bool CEntity::SetupLighting() {
    return plugin::CallVirtualMethodAndReturn<bool, 14, CEntity *>(this);
}

int addrof(CEntity::RemoveLighting) = ADDRESS_BY_VERSION(0x4A7C80, 0x4A7D70, 0x4A7D00);
int gaddrof(CEntity::RemoveLighting) = GLOBAL_ADDRESS_BY_VERSION(0x4A7C80, 0x4A7D70, 0x4A7D00);

void CEntity::RemoveLighting(bool resetWorldColors) {
    plugin::CallVirtualMethod<15, CEntity *, bool>(this, resetWorldColors);
}

int addrof(CEntity::FlagToDestroyWhenNextProcessed) = ADDRESS_BY_VERSION(0x405940, 0x405940, 0x405940);
int gaddrof(CEntity::FlagToDestroyWhenNextProcessed) = GLOBAL_ADDRESS_BY_VERSION(0x405940, 0x405940, 0x405940);

void CEntity::FlagToDestroyWhenNextProcessed() {
    plugin::CallVirtualMethod<16, CEntity *>(this);
}

int addrof(CEntity::AddSteamsFromGround) = ADDRESS_BY_VERSION(0x50CE40, 0x50CF30, 0x50CEC0);
int gaddrof(CEntity::AddSteamsFromGround) = GLOBAL_ADDRESS_BY_VERSION(0x50CE40, 0x50CF30, 0x50CEC0);

void CEntity::AddSteamsFromGround(CVector *unused) {
    plugin::CallMethodDynGlobal<CEntity *, CVector *>(gaddrof(CEntity::AddSteamsFromGround), this, unused);
}

int addrof(CEntity::AttachToRwObject) = ADDRESS_BY_VERSION(0x473F10, 0x473F10, 0x473F10);
int gaddrof(CEntity::AttachToRwObject) = GLOBAL_ADDRESS_BY_VERSION(0x473F10, 0x473F10, 0x473F10);

void CEntity::AttachToRwObject(RwObject *rwObject) {
    plugin::CallMethodDynGlobal<CEntity *, RwObject *>(gaddrof(CEntity::AttachToRwObject), this, rwObject);
}

int addrof(CEntity::DetachFromRwObject) = ADDRESS_BY_VERSION(0x473F60, 0x473F60, 0x473F60);
int gaddrof(CEntity::DetachFromRwObject) = GLOBAL_ADDRESS_BY_VERSION(0x473F60, 0x473F60, 0x473F60);

void CEntity::DetachFromRwObject() {
    plugin::CallMethodDynGlobal<CEntity *>(gaddrof(CEntity::DetachFromRwObject), this);
}

int addrof_o(CEntity::GetBoundCentre, CVector *(CEntity::*)()) = ADDRESS_BY_VERSION(0x474290, 0x474290, 0x474290);
int gaddrof_o(CEntity::GetBoundCentre, CVector *(CEntity::*)()) = GLOBAL_ADDRESS_BY_VERSION(0x474290, 0x474290, 0x474290);

CVector *CEntity::GetBoundCentre() {
    return plugin::CallMethodAndReturnDynGlobal<CVector *, CEntity *>(gaddrof_o(CEntity::GetBoundCentre, CVector *(CEntity::*)()), this);
}

int addrof_o(CEntity::GetBoundCentre, void (CEntity::*)(CVector &)) = ADDRESS_BY_VERSION(0x4742C0, 0x4742C0, 0x4742C0);
int gaddrof_o(CEntity::GetBoundCentre, void (CEntity::*)(CVector &)) = GLOBAL_ADDRESS_BY_VERSION(0x4742C0, 0x4742C0, 0x4742C0);

void CEntity::GetBoundCentre(CVector &out) {
    plugin::CallMethodDynGlobal<CEntity *, CVector &>(gaddrof_o(CEntity::GetBoundCentre, void (CEntity::*)(CVector &)), this, out);
}

int addrof(CEntity::GetBoundRadius) = ADDRESS_BY_VERSION(0x474310, 0x474310, 0x474310);
int gaddrof(CEntity::GetBoundRadius) = GLOBAL_ADDRESS_BY_VERSION(0x474310, 0x474310, 0x474310);

float CEntity::GetBoundRadius() {
    return plugin::CallMethodAndReturnDynGlobal<float, CEntity *>(gaddrof(CEntity::GetBoundRadius), this);
}

int addrof(CEntity::GetDistanceFromCentreOfMassToBaseOfModel) = ADDRESS_BY_VERSION(0x4755C0, 0x4755C0, 0x4755C0);
int gaddrof(CEntity::GetDistanceFromCentreOfMassToBaseOfModel) = GLOBAL_ADDRESS_BY_VERSION(0x4755C0, 0x4755C0, 0x4755C0);

float CEntity::GetDistanceFromCentreOfMassToBaseOfModel() {
    return plugin::CallMethodAndReturnDynGlobal<float, CEntity *>(gaddrof(CEntity::GetDistanceFromCentreOfMassToBaseOfModel), this);
}

int addrof(CEntity::GetIsOnScreen) = ADDRESS_BY_VERSION(0x474CC0, 0x474CC0, 0x474CC0);
int gaddrof(CEntity::GetIsOnScreen) = GLOBAL_ADDRESS_BY_VERSION(0x474CC0, 0x474CC0, 0x474CC0);

bool CEntity::GetIsOnScreen() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CEntity *>(gaddrof(CEntity::GetIsOnScreen), this);
}

int addrof(CEntity::GetIsOnScreenComplex) = ADDRESS_BY_VERSION(0x474D20, 0x474D20, 0x474D20);
int gaddrof(CEntity::GetIsOnScreenComplex) = GLOBAL_ADDRESS_BY_VERSION(0x474D20, 0x474D20, 0x474D20);

bool CEntity::GetIsOnScreenComplex() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CEntity *>(gaddrof(CEntity::GetIsOnScreenComplex), this);
}

int addrof(CEntity::GetIsTouching) = ADDRESS_BY_VERSION(0x474C10, 0x474C10, 0x474C10);
int gaddrof(CEntity::GetIsTouching) = GLOBAL_ADDRESS_BY_VERSION(0x474C10, 0x474C10, 0x474C10);

bool CEntity::GetIsTouching(CVector const &posn, float radius) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CEntity *, CVector const &, float>(gaddrof(CEntity::GetIsTouching), this, posn, radius);
}

int addrof(CEntity::IsVisible) = ADDRESS_BY_VERSION(0x474CA0, 0x474CA0, 0x474CA0);
int gaddrof(CEntity::IsVisible) = GLOBAL_ADDRESS_BY_VERSION(0x474CA0, 0x474CA0, 0x474CA0);

bool CEntity::IsVisible() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CEntity *>(gaddrof(CEntity::IsVisible), this);
}

int addrof(CEntity::ModifyMatrixForBannerInWind) = ADDRESS_BY_VERSION(0x475830, 0x475830, 0x475830);
int gaddrof(CEntity::ModifyMatrixForBannerInWind) = GLOBAL_ADDRESS_BY_VERSION(0x475830, 0x475830, 0x475830);

void CEntity::ModifyMatrixForBannerInWind() {
    plugin::CallMethodDynGlobal<CEntity *>(gaddrof(CEntity::ModifyMatrixForBannerInWind), this);
}

int addrof(CEntity::ModifyMatrixForTreeInWind) = ADDRESS_BY_VERSION(0x475670, 0x475670, 0x475670);
int gaddrof(CEntity::ModifyMatrixForTreeInWind) = GLOBAL_ADDRESS_BY_VERSION(0x475670, 0x475670, 0x475670);

void CEntity::ModifyMatrixForTreeInWind() {
    plugin::CallMethodDynGlobal<CEntity *>(gaddrof(CEntity::ModifyMatrixForTreeInWind), this);
}

int addrof(CEntity::PreRenderForGlassWindow) = ADDRESS_BY_VERSION(0x475A20, 0x475A20, 0x475A20);
int gaddrof(CEntity::PreRenderForGlassWindow) = GLOBAL_ADDRESS_BY_VERSION(0x475A20, 0x475A20, 0x475A20);

void CEntity::PreRenderForGlassWindow() {
    plugin::CallMethodDynGlobal<CEntity *>(gaddrof(CEntity::PreRenderForGlassWindow), this);
}

int addrof(CEntity::ProcessLightsForEntity) = ADDRESS_BY_VERSION(0x4FA530, 0x4FA610, 0x4FA5A0);
int gaddrof(CEntity::ProcessLightsForEntity) = GLOBAL_ADDRESS_BY_VERSION(0x4FA530, 0x4FA610, 0x4FA5A0);

void CEntity::ProcessLightsForEntity() {
    plugin::CallMethodDynGlobal<CEntity *>(gaddrof(CEntity::ProcessLightsForEntity), this);
}

int addrof(CEntity::PruneReferences) = ADDRESS_BY_VERSION(0x4A7530, 0x4A7620, 0x4A75B0);
int gaddrof(CEntity::PruneReferences) = GLOBAL_ADDRESS_BY_VERSION(0x4A7530, 0x4A7620, 0x4A75B0);

void CEntity::PruneReferences() {
    plugin::CallMethodDynGlobal<CEntity *>(gaddrof(CEntity::PruneReferences), this);
}

int addrof(CEntity::RegisterReference) = ADDRESS_BY_VERSION(0x4A7480, 0x4A7570, 0x4A7500);
int gaddrof(CEntity::RegisterReference) = GLOBAL_ADDRESS_BY_VERSION(0x4A7480, 0x4A7570, 0x4A7500);

void CEntity::RegisterReference(CEntity **entity) {
    plugin::CallMethodDynGlobal<CEntity *, CEntity **>(gaddrof(CEntity::RegisterReference), this, entity);
}

int addrof(CEntity::ResolveReferences) = ADDRESS_BY_VERSION(0x4A74E0, 0x4A75D0, 0x4A7560);
int gaddrof(CEntity::ResolveReferences) = GLOBAL_ADDRESS_BY_VERSION(0x4A74E0, 0x4A75D0, 0x4A7560);

void CEntity::ResolveReferences() {
    plugin::CallMethodDynGlobal<CEntity *>(gaddrof(CEntity::ResolveReferences), this);
}

int addrof(CEntity::SetState) = ADDRESS_BY_VERSION(0x54A8A0, 0x54AA60, 0x54AA10);
int gaddrof(CEntity::SetState) = GLOBAL_ADDRESS_BY_VERSION(0x54A8A0, 0x54AA60, 0x54AA10);

void CEntity::SetState(unsigned char state) {
    plugin::CallMethodDynGlobal<CEntity *, unsigned char>(gaddrof(CEntity::SetState), this, state);
}

int addrof(CEntity::SetupBigBuilding) = ADDRESS_BY_VERSION(0x4755E0, 0x4755E0, 0x4755E0);
int gaddrof(CEntity::SetupBigBuilding) = GLOBAL_ADDRESS_BY_VERSION(0x4755E0, 0x4755E0, 0x4755E0);

void CEntity::SetupBigBuilding() {
    plugin::CallMethodDynGlobal<CEntity *>(gaddrof(CEntity::SetupBigBuilding), this);
}

int addrof(CEntity::UpdateRwFrame) = ADDRESS_BY_VERSION(0x474330, 0x474330, 0x474330);
int gaddrof(CEntity::UpdateRwFrame) = GLOBAL_ADDRESS_BY_VERSION(0x474330, 0x474330, 0x474330);

void CEntity::UpdateRwFrame() {
    plugin::CallMethodDynGlobal<CEntity *>(gaddrof(CEntity::UpdateRwFrame), this);
}
