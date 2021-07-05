/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVehicleModelInfo.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE char(&CVehicleModelInfo::ms_compsToUse)[2] = *reinterpret_cast<char(*)[2]>(GLOBAL_ADDRESS_BY_VERSION(0x5FF2EC, 0x5FF0D4, 0x60C0CC));
PLUGIN_VARIABLE RwObjectNameIdAssocation *(&CVehicleModelInfo::ms_vehicleDescs)[6] = *reinterpret_cast<RwObjectNameIdAssocation *(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x5FF988, 0x5FF770, 0x60C768));
PLUGIN_VARIABLE RwTexture *(&CVehicleModelInfo::ms_colourTextureTable)[256] = *reinterpret_cast<RwTexture *(*)[256]>(GLOBAL_ADDRESS_BY_VERSION(0x711C40, 0x711C40, 0x721D80));
PLUGIN_VARIABLE CRGBA(&CVehicleModelInfo::ms_vehicleColourTable)[256] = *reinterpret_cast<CRGBA(*)[256]>(GLOBAL_ADDRESS_BY_VERSION(0x86BA88, 0x86BA38, 0x87BB78));
PLUGIN_VARIABLE RwTexture *(&CVehicleModelInfo::ms_pEnvironmentMaps)[1] = *reinterpret_cast<RwTexture *(*)[1]>(GLOBAL_ADDRESS_BY_VERSION(0x8F1A30, 0x8F1AE4, 0x901C24));
PLUGIN_VARIABLE char(&CVehicleModelInfo::ms_compsUsed)[2] = *reinterpret_cast<char(*)[2]>(GLOBAL_ADDRESS_BY_VERSION(0x95CCB2, 0x95CE6A, 0x96CFAA));
PLUGIN_VARIABLE RwTexture *&gpWhiteTexture = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x64C4F8, 0x64C4F8, 0x65C4F8));
PLUGIN_VARIABLE RwFrame *&pMatFxIdentityFrame = *reinterpret_cast<RwFrame **>(GLOBAL_ADDRESS_BY_VERSION(0x64C510, 0x64C510, 0x65C510));

int ctor_addr(CVehicleModelInfo) = ADDRESS_BY_VERSION(0x51FB10, 0x51FD40, 0x51FCD0);
int ctor_gaddr(CVehicleModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x51FB10, 0x51FD40, 0x51FCD0);

int dtor_addr(CVehicleModelInfo) = ADDRESS_BY_VERSION(0x50BFF0, 0x50C0E0, 0x50C070);
int dtor_gaddr(CVehicleModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50BFF0, 0x50C0E0, 0x50C070);

int del_dtor_addr(CVehicleModelInfo) = ADDRESS_BY_VERSION(0x50C260, 0x50C350, 0x50C2E0);
int del_dtor_gaddr(CVehicleModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50C260, 0x50C350, 0x50C2E0);

int addrof(CVehicleModelInfo::DeleteRwObject) = ADDRESS_BY_VERSION(0x51FDC0, 0x51FFF0, 0x51FF80);
int gaddrof(CVehicleModelInfo::DeleteRwObject) = GLOBAL_ADDRESS_BY_VERSION(0x51FDC0, 0x51FFF0, 0x51FF80);

void CVehicleModelInfo::DeleteRwObject() {
    plugin::CallVirtualMethod<2, CVehicleModelInfo *>(this);
}

int addrof(CVehicleModelInfo::CreateInstance) = ADDRESS_BY_VERSION(0x51FCB0, 0x51FEE0, 0x51FE70);
int gaddrof(CVehicleModelInfo::CreateInstance) = GLOBAL_ADDRESS_BY_VERSION(0x51FCB0, 0x51FEE0, 0x51FE70);

RwObject *CVehicleModelInfo::CreateInstance() {
    return plugin::CallVirtualMethodAndReturn<RwObject *, 3, CVehicleModelInfo *>(this);
}

int addrof(CVehicleModelInfo::SetClump) = ADDRESS_BY_VERSION(0x51FC60, 0x51FE90, 0x51FE20);
int gaddrof(CVehicleModelInfo::SetClump) = GLOBAL_ADDRESS_BY_VERSION(0x51FC60, 0x51FE90, 0x51FE20);

void CVehicleModelInfo::SetClump(RpClump *clump) {
    plugin::CallVirtualMethod<6, CVehicleModelInfo *, RpClump *>(this, clump);
}

int addrof(CVehicleModelInfo::AvoidSameVehicleColour) = ADDRESS_BY_VERSION(0x5210A0, 0x5212D0, 0x521260);
int gaddrof(CVehicleModelInfo::AvoidSameVehicleColour) = GLOBAL_ADDRESS_BY_VERSION(0x5210A0, 0x5212D0, 0x521260);

void CVehicleModelInfo::AvoidSameVehicleColour(unsigned char *prim, unsigned char *sec) {
    plugin::CallMethodDynGlobal<CVehicleModelInfo *, unsigned char *, unsigned char *>(gaddrof(CVehicleModelInfo::AvoidSameVehicleColour), this, prim, sec);
}

int addrof(CVehicleModelInfo::ChooseComponent) = ADDRESS_BY_VERSION(0x520AB0, 0x520CE0, 0x520C70);
int gaddrof(CVehicleModelInfo::ChooseComponent) = GLOBAL_ADDRESS_BY_VERSION(0x520AB0, 0x520CE0, 0x520C70);

int CVehicleModelInfo::ChooseComponent() {
    return plugin::CallMethodAndReturnDynGlobal<int, CVehicleModelInfo *>(gaddrof(CVehicleModelInfo::ChooseComponent), this);
}

int addrof(CVehicleModelInfo::ChooseSecondComponent) = ADDRESS_BY_VERSION(0x520BE0, 0x520E10, 0x520DA0);
int gaddrof(CVehicleModelInfo::ChooseSecondComponent) = GLOBAL_ADDRESS_BY_VERSION(0x520BE0, 0x520E10, 0x520DA0);

int CVehicleModelInfo::ChooseSecondComponent() {
    return plugin::CallMethodAndReturnDynGlobal<int, CVehicleModelInfo *>(gaddrof(CVehicleModelInfo::ChooseSecondComponent), this);
}

int addrof(CVehicleModelInfo::ChooseVehicleColour) = ADDRESS_BY_VERSION(0x520FD0, 0x521200, 0x521190);
int gaddrof(CVehicleModelInfo::ChooseVehicleColour) = GLOBAL_ADDRESS_BY_VERSION(0x520FD0, 0x521200, 0x521190);

void CVehicleModelInfo::ChooseVehicleColour(unsigned char *prim, unsigned char *sec) {
    plugin::CallMethodDynGlobal<CVehicleModelInfo *, unsigned char *, unsigned char *>(gaddrof(CVehicleModelInfo::ChooseVehicleColour), this, prim, sec);
}

int addrof(CVehicleModelInfo::FindEditableMaterialList) = ADDRESS_BY_VERSION(0x520DE0, 0x521010, 0x520FA0);
int gaddrof(CVehicleModelInfo::FindEditableMaterialList) = GLOBAL_ADDRESS_BY_VERSION(0x520DE0, 0x521010, 0x520FA0);

void CVehicleModelInfo::FindEditableMaterialList() {
    plugin::CallMethodDynGlobal<CVehicleModelInfo *>(gaddrof(CVehicleModelInfo::FindEditableMaterialList), this);
}

int addrof(CVehicleModelInfo::GetWheelPosn) = ADDRESS_BY_VERSION(0x520840, 0x520A70, 0x520A00);
int gaddrof(CVehicleModelInfo::GetWheelPosn) = GLOBAL_ADDRESS_BY_VERSION(0x520840, 0x520A70, 0x520A00);

void CVehicleModelInfo::GetWheelPosn(int wheel, CVector &outPos) {
    plugin::CallMethodDynGlobal<CVehicleModelInfo *, int, CVector &>(gaddrof(CVehicleModelInfo::GetWheelPosn), this, wheel, outPos);
}

int addrof(CVehicleModelInfo::PreprocessHierarchy) = ADDRESS_BY_VERSION(0x5204D0, 0x520700, 0x520690);
int gaddrof(CVehicleModelInfo::PreprocessHierarchy) = GLOBAL_ADDRESS_BY_VERSION(0x5204D0, 0x520700, 0x520690);

void CVehicleModelInfo::PreprocessHierarchy() {
    plugin::CallMethodDynGlobal<CVehicleModelInfo *>(gaddrof(CVehicleModelInfo::PreprocessHierarchy), this);
}

int addrof(CVehicleModelInfo::SetAtomicRenderCallbacks) = ADDRESS_BY_VERSION(0x5202C0, 0x5204F0, 0x520480);
int gaddrof(CVehicleModelInfo::SetAtomicRenderCallbacks) = GLOBAL_ADDRESS_BY_VERSION(0x5202C0, 0x5204F0, 0x520480);

void CVehicleModelInfo::SetAtomicRenderCallbacks() {
    plugin::CallMethodDynGlobal<CVehicleModelInfo *>(gaddrof(CVehicleModelInfo::SetAtomicRenderCallbacks), this);
}

int addrof(CVehicleModelInfo::SetEnvironmentMap) = ADDRESS_BY_VERSION(0x521890, 0x521AD0, 0x521A60);
int gaddrof(CVehicleModelInfo::SetEnvironmentMap) = GLOBAL_ADDRESS_BY_VERSION(0x521890, 0x521AD0, 0x521A60);

void CVehicleModelInfo::SetEnvironmentMap() {
    plugin::CallMethodDynGlobal<CVehicleModelInfo *>(gaddrof(CVehicleModelInfo::SetEnvironmentMap), this);
}

int addrof(CVehicleModelInfo::SetVehicleColour) = ADDRESS_BY_VERSION(0x520E70, 0x5210A0, 0x521030);
int gaddrof(CVehicleModelInfo::SetVehicleColour) = GLOBAL_ADDRESS_BY_VERSION(0x520E70, 0x5210A0, 0x521030);

void CVehicleModelInfo::SetVehicleColour(unsigned char prim, unsigned char sec) {
    plugin::CallMethodDynGlobal<CVehicleModelInfo *, unsigned char, unsigned char>(gaddrof(CVehicleModelInfo::SetVehicleColour), this, prim, sec);
}

int addrof(CVehicleModelInfo::SetVehicleComponentFlags) = ADDRESS_BY_VERSION(0x5203C0, 0x5205F0, 0x520580);
int gaddrof(CVehicleModelInfo::SetVehicleComponentFlags) = GLOBAL_ADDRESS_BY_VERSION(0x5203C0, 0x5205F0, 0x520580);

void CVehicleModelInfo::SetVehicleComponentFlags(RwFrame *frame, unsigned int flags) {
    plugin::CallMethodDynGlobal<CVehicleModelInfo *, RwFrame *, unsigned int>(gaddrof(CVehicleModelInfo::SetVehicleComponentFlags), this, frame, flags);
}

int addrof(CVehicleModelInfo::ClearAtomicFlagCB) = ADDRESS_BY_VERSION(0x520360, 0x520590, 0x520520);
int gaddrof(CVehicleModelInfo::ClearAtomicFlagCB) = GLOBAL_ADDRESS_BY_VERSION(0x520360, 0x520590, 0x520520);

RwObject *CVehicleModelInfo::ClearAtomicFlagCB(RwObject *object, void *data) {
    return plugin::CallAndReturnDynGlobal<RwObject *, RwObject *, void *>(gaddrof(CVehicleModelInfo::ClearAtomicFlagCB), object, data);
}

int addrof(CVehicleModelInfo::CollapseFramesCB) = ADDRESS_BY_VERSION(0x51FE10, 0x520040, 0x51FFD0);
int gaddrof(CVehicleModelInfo::CollapseFramesCB) = GLOBAL_ADDRESS_BY_VERSION(0x51FE10, 0x520040, 0x51FFD0);

RwFrame *CVehicleModelInfo::CollapseFramesCB(RwFrame *frame, void *data) {
    return plugin::CallAndReturnDynGlobal<RwFrame *, RwFrame *, void *>(gaddrof(CVehicleModelInfo::CollapseFramesCB), frame, data);
}

int addrof(CVehicleModelInfo::DeleteVehicleColourTextures) = ADDRESS_BY_VERSION(0x521650, 0x521880, 0x521810);
int gaddrof(CVehicleModelInfo::DeleteVehicleColourTextures) = GLOBAL_ADDRESS_BY_VERSION(0x521650, 0x521880, 0x521810);

void CVehicleModelInfo::DeleteVehicleColourTextures() {
    plugin::CallDynGlobal(gaddrof(CVehicleModelInfo::DeleteVehicleColourTextures));
}

int addrof_o(CVehicleModelInfo::GetEditableMaterialListCB, RpMaterial *(*)(RpMaterial *, void *)) = ADDRESS_BY_VERSION(0x520D30, 0x520F60, 0x520EF0);
int gaddrof_o(CVehicleModelInfo::GetEditableMaterialListCB, RpMaterial *(*)(RpMaterial *, void *)) = GLOBAL_ADDRESS_BY_VERSION(0x520D30, 0x520F60, 0x520EF0);

RpMaterial *CVehicleModelInfo::GetEditableMaterialListCB(RpMaterial *material, void *data) {
    return plugin::CallAndReturnDynGlobal<RpMaterial *, RpMaterial *, void *>(gaddrof_o(CVehicleModelInfo::GetEditableMaterialListCB, RpMaterial *(*)(RpMaterial *, void *)), material, data);
}

int addrof_o(CVehicleModelInfo::GetEditableMaterialListCB, RpAtomic *(*)(RpAtomic *, void *)) = ADDRESS_BY_VERSION(0x520DC0, 0x520FF0, 0x520F80);
int gaddrof_o(CVehicleModelInfo::GetEditableMaterialListCB, RpAtomic *(*)(RpAtomic *, void *)) = GLOBAL_ADDRESS_BY_VERSION(0x520DC0, 0x520FF0, 0x520F80);

RpAtomic *CVehicleModelInfo::GetEditableMaterialListCB(RpAtomic *atomic, void *data) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, void *>(gaddrof_o(CVehicleModelInfo::GetEditableMaterialListCB, RpAtomic *(*)(RpAtomic *, void *)), atomic, data);
}

int addrof(CVehicleModelInfo::GetMaximumNumberOfPassengersFromNumberOfDoors) = ADDRESS_BY_VERSION(0x5219D0, 0x521C10, 0x521BA0);
int gaddrof(CVehicleModelInfo::GetMaximumNumberOfPassengersFromNumberOfDoors) = GLOBAL_ADDRESS_BY_VERSION(0x5219D0, 0x521C10, 0x521BA0);

int CVehicleModelInfo::GetMaximumNumberOfPassengersFromNumberOfDoors(int modelIndex) {
    return plugin::CallAndReturnDynGlobal<int, int>(gaddrof(CVehicleModelInfo::GetMaximumNumberOfPassengersFromNumberOfDoors), modelIndex);
}

int addrof(CVehicleModelInfo::HasAlphaMaterialCB) = ADDRESS_BY_VERSION(0x51FEF0, 0x520120, 0x5200B0);
int gaddrof(CVehicleModelInfo::HasAlphaMaterialCB) = GLOBAL_ADDRESS_BY_VERSION(0x51FEF0, 0x520120, 0x5200B0);

RpMaterial *CVehicleModelInfo::HasAlphaMaterialCB(RpMaterial *material, void *data) {
    return plugin::CallAndReturnDynGlobal<RpMaterial *, RpMaterial *, void *>(gaddrof(CVehicleModelInfo::HasAlphaMaterialCB), material, data);
}

int addrof(CVehicleModelInfo::HasSpecularMaterialCB) = ADDRESS_BY_VERSION(0x521770, 0x5219B0, 0x521940);
int gaddrof(CVehicleModelInfo::HasSpecularMaterialCB) = GLOBAL_ADDRESS_BY_VERSION(0x521770, 0x5219B0, 0x521940);

RpMaterial *CVehicleModelInfo::HasSpecularMaterialCB(RpMaterial *material, void *data) {
    return plugin::CallAndReturnDynGlobal<RpMaterial *, RpMaterial *, void *>(gaddrof(CVehicleModelInfo::HasSpecularMaterialCB), material, data);
}

int addrof(CVehicleModelInfo::HideAllComponentsAtomicCB) = ADDRESS_BY_VERSION(0x51FED0, 0x520100, 0x520090);
int gaddrof(CVehicleModelInfo::HideAllComponentsAtomicCB) = GLOBAL_ADDRESS_BY_VERSION(0x51FED0, 0x520100, 0x520090);

RpAtomic *CVehicleModelInfo::HideAllComponentsAtomicCB(RpAtomic *atomic, void *data) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, void *>(gaddrof(CVehicleModelInfo::HideAllComponentsAtomicCB), atomic, data);
}

int addrof(CVehicleModelInfo::HideDamagedAtomicCB) = ADDRESS_BY_VERSION(0x51FE70, 0x5200A0, 0x520030);
int gaddrof(CVehicleModelInfo::HideDamagedAtomicCB) = GLOBAL_ADDRESS_BY_VERSION(0x51FE70, 0x5200A0, 0x520030);

RpAtomic *CVehicleModelInfo::HideDamagedAtomicCB(RpAtomic *atomic, void *data) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, void *>(gaddrof(CVehicleModelInfo::HideDamagedAtomicCB), atomic, data);
}

int addrof(CVehicleModelInfo::LoadEnvironmentMaps) = ADDRESS_BY_VERSION(0x521680, 0x5218B0, 0x521840);
int gaddrof(CVehicleModelInfo::LoadEnvironmentMaps) = GLOBAL_ADDRESS_BY_VERSION(0x521680, 0x5218B0, 0x521840);

void CVehicleModelInfo::LoadEnvironmentMaps() {
    plugin::CallDynGlobal(gaddrof(CVehicleModelInfo::LoadEnvironmentMaps));
}

int addrof(CVehicleModelInfo::LoadVehicleColours) = ADDRESS_BY_VERSION(0x521260, 0x521490, 0x521420);
int gaddrof(CVehicleModelInfo::LoadVehicleColours) = GLOBAL_ADDRESS_BY_VERSION(0x521260, 0x521490, 0x521420);

void CVehicleModelInfo::LoadVehicleColours() {
    plugin::CallDynGlobal(gaddrof(CVehicleModelInfo::LoadVehicleColours));
}

int addrof(CVehicleModelInfo::MoveObjectsCB) = ADDRESS_BY_VERSION(0x51FE50, 0x520080, 0x520010);
int gaddrof(CVehicleModelInfo::MoveObjectsCB) = GLOBAL_ADDRESS_BY_VERSION(0x51FE50, 0x520080, 0x520010);

RwObject *CVehicleModelInfo::MoveObjectsCB(RwObject *object, void *data) {
    return plugin::CallAndReturnDynGlobal<RwObject *, RwObject *, void *>(gaddrof(CVehicleModelInfo::MoveObjectsCB), object, data);
}

int addrof(CVehicleModelInfo::SetAtomicFlagCB) = ADDRESS_BY_VERSION(0x520340, 0x520570, 0x520500);
int gaddrof(CVehicleModelInfo::SetAtomicFlagCB) = GLOBAL_ADDRESS_BY_VERSION(0x520340, 0x520570, 0x520500);

RwObject *CVehicleModelInfo::SetAtomicFlagCB(RwObject *object, void *data) {
    return plugin::CallAndReturnDynGlobal<RwObject *, RwObject *, void *>(gaddrof(CVehicleModelInfo::SetAtomicFlagCB), object, data);
}

int addrof(CVehicleModelInfo::SetAtomicRendererCB) = ADDRESS_BY_VERSION(0x51FF10, 0x520140, 0x5200D0);
int gaddrof(CVehicleModelInfo::SetAtomicRendererCB) = GLOBAL_ADDRESS_BY_VERSION(0x51FF10, 0x520140, 0x5200D0);

RpAtomic *CVehicleModelInfo::SetAtomicRendererCB(RpAtomic *atomic, void *data) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, void *>(gaddrof(CVehicleModelInfo::SetAtomicRendererCB), atomic, data);
}

int addrof(CVehicleModelInfo::SetAtomicRendererCB_BigVehicle) = ADDRESS_BY_VERSION(0x520030, 0x520260, 0x5201F0);
int gaddrof(CVehicleModelInfo::SetAtomicRendererCB_BigVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x520030, 0x520260, 0x5201F0);

RpAtomic *CVehicleModelInfo::SetAtomicRendererCB_BigVehicle(RpAtomic *atomic, void *data) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, void *>(gaddrof(CVehicleModelInfo::SetAtomicRendererCB_BigVehicle), atomic, data);
}

int addrof(CVehicleModelInfo::SetAtomicRendererCB_Boat) = ADDRESS_BY_VERSION(0x520120, 0x520350, 0x5202E0);
int gaddrof(CVehicleModelInfo::SetAtomicRendererCB_Boat) = GLOBAL_ADDRESS_BY_VERSION(0x520120, 0x520350, 0x5202E0);

RpAtomic *CVehicleModelInfo::SetAtomicRendererCB_Boat(RpAtomic *atomic, void *data) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, void *>(gaddrof(CVehicleModelInfo::SetAtomicRendererCB_Boat), atomic, data);
}

int addrof(CVehicleModelInfo::SetAtomicRendererCB_Heli) = ADDRESS_BY_VERSION(0x520210, 0x520440, 0x5203D0);
int gaddrof(CVehicleModelInfo::SetAtomicRendererCB_Heli) = GLOBAL_ADDRESS_BY_VERSION(0x520210, 0x520440, 0x5203D0);

RpAtomic *CVehicleModelInfo::SetAtomicRendererCB_Heli(RpAtomic *atomic, void *data) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, void *>(gaddrof(CVehicleModelInfo::SetAtomicRendererCB_Heli), atomic, data);
}

int addrof(CVehicleModelInfo::SetAtomicRendererCB_Train) = ADDRESS_BY_VERSION(0x520230, 0x520460, 0x5203F0);
int gaddrof(CVehicleModelInfo::SetAtomicRendererCB_Train) = GLOBAL_ADDRESS_BY_VERSION(0x520230, 0x520460, 0x5203F0);

RpAtomic *CVehicleModelInfo::SetAtomicRendererCB_Train(RpAtomic *atomic, void *data) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, void *>(gaddrof(CVehicleModelInfo::SetAtomicRendererCB_Train), atomic, data);
}

int addrof_o(CVehicleModelInfo::SetEnvironmentMapCB, RpMaterial *(*)(RpMaterial *, void *)) = ADDRESS_BY_VERSION(0x5217A0, 0x5219E0, 0x521970);
int gaddrof_o(CVehicleModelInfo::SetEnvironmentMapCB, RpMaterial *(*)(RpMaterial *, void *)) = GLOBAL_ADDRESS_BY_VERSION(0x5217A0, 0x5219E0, 0x521970);

RpMaterial *CVehicleModelInfo::SetEnvironmentMapCB(RpMaterial *material, void *data) {
    return plugin::CallAndReturnDynGlobal<RpMaterial *, RpMaterial *, void *>(gaddrof_o(CVehicleModelInfo::SetEnvironmentMapCB, RpMaterial *(*)(RpMaterial *, void *)), material, data);
}

int addrof_o(CVehicleModelInfo::SetEnvironmentMapCB, RpAtomic *(*)(RpAtomic *, void *)) = ADDRESS_BY_VERSION(0x521820, 0x521A60, 0x5219F0);
int gaddrof_o(CVehicleModelInfo::SetEnvironmentMapCB, RpAtomic *(*)(RpAtomic *, void *)) = GLOBAL_ADDRESS_BY_VERSION(0x521820, 0x521A60, 0x5219F0);

RpAtomic *CVehicleModelInfo::SetEnvironmentMapCB(RpAtomic *atomic, void *data) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, void *>(gaddrof_o(CVehicleModelInfo::SetEnvironmentMapCB, RpAtomic *(*)(RpAtomic *, void *)), atomic, data);
}

int addrof(CVehicleModelInfo::ShutdownEnvironmentMaps) = ADDRESS_BY_VERSION(0x521720, 0x521950, 0x5218E0);
int gaddrof(CVehicleModelInfo::ShutdownEnvironmentMaps) = GLOBAL_ADDRESS_BY_VERSION(0x521720, 0x521950, 0x5218E0);

void CVehicleModelInfo::ShutdownEnvironmentMaps() {
    plugin::CallDynGlobal(gaddrof(CVehicleModelInfo::ShutdownEnvironmentMaps));
}

int addrof(GetOkAndDamagedAtomicCB) = ADDRESS_BY_VERSION(0x520380, 0x5205B0, 0x520540);
int gaddrof(GetOkAndDamagedAtomicCB) = GLOBAL_ADDRESS_BY_VERSION(0x520380, 0x5205B0, 0x520540);

RwObject *GetOkAndDamagedAtomicCB(RwObject *object, void *data) {
    return plugin::CallAndReturnDynGlobal<RwObject *, RwObject *, void *>(gaddrof(GetOkAndDamagedAtomicCB), object, data);
}

int addrof(IsValidCompRule) = ADDRESS_BY_VERSION(0x520880, 0x520AB0, 0x520A40);
int gaddrof(IsValidCompRule) = GLOBAL_ADDRESS_BY_VERSION(0x520880, 0x520AB0, 0x520A40);

bool IsValidCompRule(int rule) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(IsValidCompRule), rule);
}

int addrof(GetListOfComponentsNotUsedByRules) = ADDRESS_BY_VERSION(0x5208C0, 0x520AF0, 0x520A80);
int gaddrof(GetListOfComponentsNotUsedByRules) = GLOBAL_ADDRESS_BY_VERSION(0x5208C0, 0x520AF0, 0x520A80);

int GetListOfComponentsNotUsedByRules(unsigned int compRulesBits, int numExtras, int *variationsList) {
    return plugin::CallAndReturnDynGlobal<int, unsigned int, int, int *>(gaddrof(GetListOfComponentsNotUsedByRules), compRulesBits, numExtras, variationsList);
}

int addrof(CountCompsInRule) = ADDRESS_BY_VERSION(0x520990, 0x520BC0, 0x520B50);
int gaddrof(CountCompsInRule) = GLOBAL_ADDRESS_BY_VERSION(0x520990, 0x520BC0, 0x520B50);

int CountCompsInRule(int compRulesBits) {
    return plugin::CallAndReturnDynGlobal<int, int>(gaddrof(CountCompsInRule), compRulesBits);
}

int addrof(ChooseComponent) = ADDRESS_BY_VERSION(0x5209C0, 0x520BF0, 0x520B80);
int gaddrof(ChooseComponent) = GLOBAL_ADDRESS_BY_VERSION(0x5209C0, 0x520BF0, 0x520B80);

int ChooseComponent(int rule, int compRulesBits) {
    return plugin::CallAndReturnDynGlobal<int, int, int>(gaddrof(ChooseComponent), rule, compRulesBits);
}

int addrof(CreateCarColourTexture) = ADDRESS_BY_VERSION(0x521160, 0x521390, 0x521320);
int gaddrof(CreateCarColourTexture) = GLOBAL_ADDRESS_BY_VERSION(0x521160, 0x521390, 0x521320);

RwTexture *CreateCarColourTexture(unsigned char red, unsigned char green, unsigned char blue) {
    return plugin::CallAndReturnDynGlobal<RwTexture *, unsigned char, unsigned char, unsigned char>(gaddrof(CreateCarColourTexture), red, green, blue);
}
