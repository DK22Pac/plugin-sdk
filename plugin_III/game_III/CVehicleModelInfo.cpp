/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVehicleModelInfo.h"

CRGBA *CVehicleModelInfo::ms_colourTextureTable = (CRGBA *)0x711C40;
char *CVehicleModelInfo::ms_compsToUse = (char *)0x5FF2EC;
char *CVehicleModelInfo::ms_compsUsed = (char *)0x95CCB2;
RwTexture **CVehicleModelInfo::ms_pEnvironmentMaps = (RwTexture **)0x8F1A30;
RwObjectNameIdAssocation *CVehicleModelInfo::ms_vehicleDescs = (RwObjectNameIdAssocation*)0x5FF988;
RwFrame *&pMatFxIdentityFrame = *(RwFrame **)0x64C510;

// Converted from thiscall void CVehicleModelInfo::AvoidSameVehicleColour(uchar *prim,uchar *sec) 0x5210A0 
void CVehicleModelInfo::AvoidSameVehicleColour(unsigned char* prim, unsigned char* sec) {
    plugin::CallMethod<0x5210A0, CVehicleModelInfo *, unsigned char*, unsigned char*>(this, prim, sec);
}

// Converted from thiscall void CVehicleModelInfo::CVehicleModelInfo(void) 0x51FB10 
CVehicleModelInfo::CVehicleModelInfo() {
    plugin::CallMethod<0x51FB10, CVehicleModelInfo *>(this);
}

// Converted from thiscall void CVehicleModelInfo::ChooseComponent(void) 0x520AB0 
void CVehicleModelInfo::ChooseComponent() {
    plugin::CallMethod<0x520AB0, CVehicleModelInfo *>(this);
}

// Converted from thiscall void CVehicleModelInfo::ChooseSecondComponent(void) 0x520BE0 
void CVehicleModelInfo::ChooseSecondComponent() {
    plugin::CallMethod<0x520BE0, CVehicleModelInfo *>(this);
}

// Converted from thiscall void CVehicleModelInfo::ChooseVehicleColour(uchar &prim,uchar &sec) 0x520FD0 
void CVehicleModelInfo::ChooseVehicleColour(unsigned char& prim, unsigned char& sec) {
    plugin::CallMethod<0x520FD0, CVehicleModelInfo *, unsigned char&, unsigned char&>(this, prim, sec);
}

// Converted from cdecl RwObject* CVehicleModelInfo::ClearAtomicFlagCB(RwObject *object,void *data) 0x520360
RwObject* CVehicleModelInfo::ClearAtomicFlagCB(RwObject* object, void* data) {
    return plugin::CallAndReturn<RwObject*, 0x520360, RwObject*, void*>(object, data);
}

// Converted from cdecl RwFrame* CVehicleModelInfo::CollapseFramesCB(RwFrame *frame,void *data) 0x51FE10
RwFrame* CVehicleModelInfo::CollapseFramesCB(RwFrame* frame, void* data) {
    return plugin::CallAndReturn<RwFrame*, 0x51FE10, RwFrame*, void*>(frame, data);
}

// Converted from cdecl void CVehicleModelInfo::DeleteVehicleColourTextures(void) 0x521650
void CVehicleModelInfo::DeleteVehicleColourTextures() {
    plugin::Call<0x521650>();
}

// Converted from thiscall int CVehicleModelInfo::FindEditableMaterialList(void) 0x520DE0 
int CVehicleModelInfo::FindEditableMaterialList() {
    return plugin::CallMethodAndReturn<int, 0x520DE0, CVehicleModelInfo *>(this);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::GetEditableMaterialListCB(RpAtomic *atomic,void *data) 0x520DC0
RpAtomic* CVehicleModelInfo::GetEditableMaterialListCB(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x520DC0, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl RpMaterial* CVehicleModelInfo::GetEditableMaterialListCB(RpMaterial *material,void *data) 0x520D30
RpMaterial* CVehicleModelInfo::GetEditableMaterialListCB(RpMaterial* material, void* data) {
    return plugin::CallAndReturn<RpMaterial*, 0x520D30, RpMaterial*, void*>(material, data);
}

// Converted from cdecl int CVehicleModelInfo::GetMaximumNumberOfPassengersFromNumberOfDoors(int modelId) 0x5219D0
int CVehicleModelInfo::GetMaximumNumberOfPassengersFromNumberOfDoors(int modelId) {
    return plugin::CallAndReturn<int, 0x5219D0, int>(modelId);
}

// Converted from thiscall void CVehicleModelInfo::GetWheelPosn(int wheel,CVector &outVec) 0x520840
void CVehicleModelInfo::GetWheelPosn(int wheel, CVector& outVec) {
    plugin::CallMethod<0x520840, CVehicleModelInfo *, int, CVector&>(this, wheel, outVec);
}

// Converted from cdecl RpMaterial* CVehicleModelInfo::HasAlphaMaterialCB(RpMaterial *material,void *data) 0x51FEF0
RpMaterial* CVehicleModelInfo::HasAlphaMaterialCB(RpMaterial* material, void* data) {
    return plugin::CallAndReturn<RpMaterial*, 0x51FEF0, RpMaterial*, void*>(material, data);
}

// Converted from cdecl RpMaterial* CVehicleModelInfo::HasSpecularMaterialCB(RpMaterial *material,void *data) 0x521770
RpMaterial* CVehicleModelInfo::HasSpecularMaterialCB(RpMaterial* material, void* data) {
    return plugin::CallAndReturn<RpMaterial*, 0x521770, RpMaterial*, void*>(material, data);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::HideAllComponentsAtomicCB(RpAtomic *atomic,void *data) 0x51FED0
RpAtomic* CVehicleModelInfo::HideAllComponentsAtomicCB(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x51FED0, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::HideDamagedAtomicCB(RpAtomic *atomic,void *data) 0x51FE70
RpAtomic* CVehicleModelInfo::HideDamagedAtomicCB(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x51FE70, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl void CVehicleModelInfo::LoadEnvironmentMaps(void) 0x521680
void CVehicleModelInfo::LoadEnvironmentMaps() {
    plugin::Call<0x521680>();
}

// Converted from cdecl void CVehicleModelInfo::LoadVehicleColours(void) 0x521260
void CVehicleModelInfo::LoadVehicleColours() {
    plugin::Call<0x521260>();
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::MoveObjectsCB(RwObject *object,void *data) 0x51FE50
RpAtomic* CVehicleModelInfo::MoveObjectsCB(RwObject* object, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x51FE50, RwObject*, void*>(object, data);
}

// Converted from thiscall void CVehicleModelInfo::PreprocessHierarchy(void) 0x5204D0 
void CVehicleModelInfo::PreprocessHierarchy() {
    plugin::CallMethod<0x5204D0, CVehicleModelInfo *>(this);
}

// Converted from cdecl RwObject* CVehicleModelInfo::SetAtomicFlagCB(RwObject *object,void *data) 0x520340
RwObject* CVehicleModelInfo::SetAtomicFlagCB(RwObject* object, void* data) {
    return plugin::CallAndReturn<RwObject*, 0x520340, RwObject*, void*>(object, data);
}

// Converted from thiscall void CVehicleModelInfo::SetAtomicRenderCallbacks(void) 0x5202C0 
void CVehicleModelInfo::SetAtomicRenderCallbacks() {
    plugin::CallMethod<0x5202C0, CVehicleModelInfo *>(this);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::SetAtomicRendererCB(RpAtomic *atomic,void *data) 0x51FF10
RpAtomic* CVehicleModelInfo::SetAtomicRendererCB(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x51FF10, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::SetAtomicRendererCB_BigVehicle(RpAtomic *atomic,void *data) 0x520030
RpAtomic* CVehicleModelInfo::SetAtomicRendererCB_BigVehicle(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x520030, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::SetAtomicRendererCB_Boat(RpAtomic *atomic,void *data) 0x520120
RpAtomic* CVehicleModelInfo::SetAtomicRendererCB_Boat(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x520120, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::SetAtomicRendererCB_Heli(RpAtomic *atomic,void *data) 0x520210
RpAtomic* CVehicleModelInfo::SetAtomicRendererCB_Heli(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x520210, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::SetAtomicRendererCB_Train(RpAtomic *atomic,void *data) 0x520230
RpAtomic* CVehicleModelInfo::SetAtomicRendererCB_Train(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x520230, RpAtomic*, void*>(atomic, data);
}

// Converted from thiscall void CVehicleModelInfo::SetEnvironmentMap(void) 0x521890 
void CVehicleModelInfo::SetEnvironmentMap() {
    plugin::CallMethod<0x521890, CVehicleModelInfo *>(this);
}

// Converted from cdecl RpAtomic* CVehicleModelInfo::SetEnvironmentMapCB(RpAtomic *atomic,void *data) 0x521820
RpAtomic* CVehicleModelInfo::SetEnvironmentMapCB(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x521820, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl RpMaterial* CVehicleModelInfo::SetEnvironmentMapCB(RpMaterial *material,void *data) 0x5217A0
RpMaterial* CVehicleModelInfo::SetEnvironmentMapCB(RpMaterial* material, void* data) {
    return plugin::CallAndReturn<RpMaterial*, 0x5217A0, RpMaterial*, void*>(material, data);
}

// Converted from thiscall void CVehicleModelInfo::SetVehicleColour(uchar prim,uchar sec) 0x520E70 
void CVehicleModelInfo::SetVehicleColour(unsigned char prim, unsigned char sec) {
    plugin::CallMethod<0x520E70, CVehicleModelInfo *, unsigned char, unsigned char>(this, prim, sec);
}

// Converted from thiscall void CVehicleModelInfo::SetVehicleComponentFlags(RwFrame *component,uint flags) 0x5203C0
void CVehicleModelInfo::SetVehicleComponentFlags(RwFrame* component, unsigned int flags) {
    plugin::CallMethod<0x5203C0, CVehicleModelInfo *, RwFrame*, unsigned int>(this, component, flags);
}

// Converted from cdecl void CVehicleModelInfo::ShutdownEnvironmentMaps(void) 0x521720
void CVehicleModelInfo::ShutdownEnvironmentMaps() {
    plugin::Call<0x521720>();
}

// Converted from thiscall void CVehicleModelInfo::~CVehicleModelInfo(void) 0x50BFF0 
CVehicleModelInfo::~CVehicleModelInfo() {
    plugin::CallMethod<0x50BFF0, CVehicleModelInfo *>(this);
}

// Converted from thiscall void CStore<CVehicleModelInfo,120>::~CStore() 0x50BFD0 
VehicleModelStore::~VehicleModelStore() {
    plugin::CallMethod<0x50BFD0, VehicleModelStore *>(this);
}

// Converted from cdecl bool IsValidCompRule(int rule) 0x520880
bool IsValidCompRule(int rule) {
    return plugin::CallAndReturn<bool, 0x520880, int>(rule);
}

// Converted from cdecl int GetListOfComponentsNotUsedByRules(uint compRulesBits,int numExtras,int *variationsList) 0x5208C0
int GetListOfComponentsNotUsedByRules(unsigned int compRulesBits, int numExtras, int* variationsList) {
    return plugin::CallAndReturn<int, 0x5208C0, unsigned int, int, int*>(compRulesBits, numExtras, variationsList);
}

// Converted from cdecl int CountCompsInRule(int compRulesBits) 0x520990
int CountCompsInRule(int compRulesBits) {
    return plugin::CallAndReturn<int, 0x520990, int>(compRulesBits);
}

// Converted from cdecl int ChooseComponent(int rule,int compRulesBits) 0x5209C0
int ChooseComponent(int rule, int compRulesBits) {
    return plugin::CallAndReturn<int, 0x5209C0, int, int>(rule, compRulesBits);
}
