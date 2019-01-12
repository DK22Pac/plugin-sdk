/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVehicleModelInfo.h"

CRGBA *CVehicleModelInfo::ms_colourTextureTable = (CRGBA *)0x939228;
char *CVehicleModelInfo::ms_compsToUse = (char *)0x699538;
char *CVehicleModelInfo::ms_compsUsed = (char *)0xA10A70;
RwTexture **CVehicleModelInfo::ms_pEnvironmentMaps = (RwTexture **)0x978570;
RwObjectNameIdAssocation *CVehicleModelInfo::ms_vehicleDescs = (RwObjectNameIdAssocation*)0x699C78;
RwFrame *&pMatFxIdentityFrame = *(RwFrame **)0x77EF78;

// Converted from thiscall void CVehicleModelInfo::AvoidSameVehicleColour(uchar * prim, uchar * sec) 0x579090
void CVehicleModelInfo::AvoidSameVehicleColour(unsigned char* prim, unsigned char* sec) {
    plugin::CallMethod<0x579090, CVehicleModelInfo *, unsigned char*, unsigned char*>(this, prim, sec);
}

// Converted from thiscall int CVehicleModelInfo::ChooseComponent(void) 0x579670
int CVehicleModelInfo::ChooseComponent() {
    return plugin::CallMethodAndReturn<int, 0x579670, CVehicleModelInfo *>(this);
}

// Converted from thiscall int CVehicleModelInfo::ChooseSecondComponent(void) 0x5794F0
int CVehicleModelInfo::ChooseSecondComponent() {
    return plugin::CallMethodAndReturn<int, 0x5794F0, CVehicleModelInfo *>(this);
}

// Converted from thiscall void CVehicleModelInfo::ChooseVehicleColour(uchar& prim, uchar& sec) 0x579190
void CVehicleModelInfo::ChooseVehicleColour(unsigned char& prim, unsigned char& sec) {
    plugin::CallMethod<0x579190, CVehicleModelInfo *, unsigned char&, unsigned char&>(this, prim, sec);
}

// Converted from cdecl RwObject* CVehicleModelInfo::ClearAtomicFlagCB(RwObject* object, void* data) 0x579FD0
RwObject* CVehicleModelInfo::ClearAtomicFlagCB(RwObject* object, void* data) {
    return plugin::CallAndReturn<RwObject*, 0x579FD0, RwObject*, void*>(object, data);
}

// Converted from cdecl RwFrame* CVehicleModelInfo::CollapseFramesCB(RwFrame* frame, void* data) 0x57A660
RwFrame* CVehicleModelInfo::CollapseFramesCB(RwFrame* frame, void* data) {
    return plugin::CallAndReturn<RwFrame*, 0x57A660, RwFrame*, void*>(frame, data);
}

// Converted from cdecl void CVehicleModelInfo::DeleteVehicleColourTextures(void) 0x578C90
void CVehicleModelInfo::DeleteVehicleColourTextures() {
    plugin::Call<0x578C90>();
}

// Converted from thiscall int CVehicleModelInfo::FindEditableMaterialList(void) 0x579390
int CVehicleModelInfo::FindEditableMaterialList() {
    return plugin::CallMethodAndReturn<int, 0x579390, CVehicleModelInfo *>(this);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::GetEditableMaterialListCB(RpAtomic* atomic, void* data) 0x579440
RpAtomic* CVehicleModelInfo::GetEditableMaterialListCB(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x579440, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl RpMaterial* CVehicleModelInfo::GetEditableMaterialListCB(RpMaterial* material, void* data) 0x579460
RpMaterial* CVehicleModelInfo::GetEditableMaterialListCB(RpMaterial* material, void* data) {
    return plugin::CallAndReturn<RpMaterial*, 0x579460, RpMaterial*, void*>(material, data);
}

// Converted from cdecl RpMaterial* CVehicleModelInfo::GetMatFXEffectMaterialCB(RpMaterial* material, void* data) 0x578BA0
RpMaterial* CVehicleModelInfo::GetMatFXEffectMaterialCB(RpMaterial* material, void* data) {
    return plugin::CallAndReturn<RpMaterial*, 0x578BA0, RpMaterial*, void*>(material, data);
}

// Converted from cdecl int CVehicleModelInfo::GetMaximumNumberOfPassengersFromNumberOfDoors(int modelId) 0x578A70
int CVehicleModelInfo::GetMaximumNumberOfPassengersFromNumberOfDoors(int modelId) {
    return plugin::CallAndReturn<int, 0x578A70, int>(modelId);
}

// Converted from thiscall void CVehicleModelInfo::GetWheelPosn(int wheel, CVector& outVec) 0x579AD0
void CVehicleModelInfo::GetWheelPosn(int wheel, CVector& outVec) {
    plugin::CallMethod<0x579AD0, CVehicleModelInfo *, int, CVector&>(this, wheel, outVec);
}

// Converted from cdecl RpMaterial* CVehicleModelInfo::HasAlphaMaterialCB(RpMaterial * material, void * data) 0x57A600
RpMaterial* CVehicleModelInfo::HasAlphaMaterialCB(RpMaterial* material, void* data) {
    return plugin::CallAndReturn<RpMaterial*, 0x57A600, RpMaterial*, void*>(material, data);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::HideAllComponentsAtomicCB(RpAtomic * atomic, void * data) 0x57A620
RpAtomic* CVehicleModelInfo::HideAllComponentsAtomicCB(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x57A620, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl void CVehicleModelInfo::LoadEnvironmentMaps(void) 0x578C30
void CVehicleModelInfo::LoadEnvironmentMaps() {
    plugin::Call<0x578C30>();
}

// Converted from cdecl void CVehicleModelInfo::LoadVehicleColours(void) 0x578CC0
void CVehicleModelInfo::LoadVehicleColours() {
    plugin::Call<0x578CC0>();
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::MoveObjectsCB(RwObject * object, void * data) 0x57A640
RpAtomic* CVehicleModelInfo::MoveObjectsCB(RwObject* object, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x57A640, RwObject*, void*>(object, data);
}

// Converted from thiscall void CVehicleModelInfo::PreprocessHierarchy(void) 0x579B10
void CVehicleModelInfo::PreprocessHierarchy() {
    plugin::CallMethod<0x579B10, CVehicleModelInfo *>(this);
}

// Converted from cdecl RwObject* CVehicleModelInfo::SetAtomicFlagCB(RwObject * object, void * data) 0x579FF0
RwObject* CVehicleModelInfo::SetAtomicFlagCB(RwObject* object, void* data) {
    return plugin::CallAndReturn<RwObject*, 0x579FF0, RwObject*, void*>(object, data);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::SetAtomicRendererCB(RpAtomic * atomic, void * data) 0x57A4A0
RpAtomic* CVehicleModelInfo::SetAtomicRendererCB(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x57A4A0, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::SetAtomicRendererCB_BigVehicle(RpAtomic * atomic, void * data) 0x57A1E0
RpAtomic* CVehicleModelInfo::SetAtomicRendererCB_BigVehicle(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x57A1E0, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::SetAtomicRendererCB_Boat(RpAtomic * atomic, void * data) 0x57A070
RpAtomic* CVehicleModelInfo::SetAtomicRendererCB_Boat(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x57A070, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::SetAtomicRendererCB_Heli(RpAtomic * atomic, void * data) 0x57A010
RpAtomic* CVehicleModelInfo::SetAtomicRendererCB_Heli(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x57A010, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::SetAtomicRendererCB_RealHeli(RpAtomic * atomic, void * data) 0x57A300
RpAtomic* CVehicleModelInfo::SetAtomicRendererCB_RealHeli(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x57A300, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl RpMaterial* CVehicleModelInfo::SetDefaultEnvironmentMapCB(RpMaterial* material, void* data) 0x578B40
RpMaterial* CVehicleModelInfo::SetDefaultEnvironmentMapCB(RpMaterial* material, void* data) {
    return plugin::CallAndReturn<RpMaterial*, 0x578B40, RpMaterial*, void*>(material, data);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::SetEnvironmentMapCB(RpAtomic * atomic, void * data) 0x578AF0
RpAtomic* CVehicleModelInfo::SetEnvironmentMapCB(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x578AF0, RpAtomic*, void*>(atomic, data);
}

// Converted from thiscall void CVehicleModelInfo::SetVehicleColour(uchar prim, uchar sec) 0x579290
void CVehicleModelInfo::SetVehicleColour(unsigned char prim, unsigned char sec) {
    plugin::CallMethod<0x579290, CVehicleModelInfo *, unsigned char, unsigned char>(this, prim, sec);
}

// Converted from thiscall void CVehicleModelInfo::SetVehicleComponentFlags(RwFrame* component, uint flags) 0x579E80
void CVehicleModelInfo::SetVehicleComponentFlags(RwFrame* component, unsigned int flags) {
    plugin::CallMethod<0x579E80, CVehicleModelInfo *, RwFrame*, unsigned int>(this, component, flags);
}

// Converted from cdecl void CVehicleModelInfo::ShutdownEnvironmentMaps(void) 0x578BD0
void CVehicleModelInfo::ShutdownEnvironmentMaps() {
    plugin::Call<0x578BD0>();
}

// Converted from thiscall void CStore<CVehicleModelInfo,110>::~CStore() 0x560150 
VehicleModelStore::~VehicleModelStore() {
    plugin::CallMethod<0x560150, VehicleModelStore *>(this);
}

// Converted from cdecl int GetListOfComponentsNotUsedByRules(uint compRulesBits, int numExtras, int *variationsList) 0x5799B0
int GetListOfComponentsNotUsedByRules(unsigned int compRulesBits, int numExtras, int* variationsList) {
    return plugin::CallAndReturn<int, 0x5799B0, unsigned int, int, int*>(compRulesBits, numExtras, variationsList);
}

// Converted from cdecl int ChooseComponent(int rule, int compRulesBits) 0x5797C0
int ChooseComponent(int rule, int compRulesBits) {
    return plugin::CallAndReturn<int, 0x5797C0, int, int>(rule, compRulesBits);
}
