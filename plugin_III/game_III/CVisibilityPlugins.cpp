/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVisibilityPlugins.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE int &CVisibilityPlugins::ms_atomicPluginOffset = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x600124, 0x5FFF0C, 0x60CF04));
PLUGIN_VARIABLE int &CVisibilityPlugins::ms_framePluginOffset = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x600128, 0x5FFF10, 0x60CF08));
PLUGIN_VARIABLE int &CVisibilityPlugins::ms_clumpPluginOffset = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x60012C, 0x5FFF14, 0x60CF0C));
PLUGIN_VARIABLE float &CVisibilityPlugins::ms_vehicleLod0Dist = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x885B28, 0x885AD8, 0x895C18));
PLUGIN_VARIABLE float &CVisibilityPlugins::ms_vehicleLod1Dist = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x885B30, 0x885AE0, 0x895C20));
PLUGIN_VARIABLE float &CVisibilityPlugins::ms_vehicleFadeDist = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8E28B4, 0x8E2864, 0x8F29A4));
PLUGIN_VARIABLE float &CVisibilityPlugins::ms_bigVehicleLod0Dist = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2A84, 0x8E2B38, 0x8F2C78));
PLUGIN_VARIABLE float &CVisibilityPlugins::ms_bigVehicleLod1Dist = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2A8C, 0x8E2B40, 0x8F2C80));
PLUGIN_VARIABLE float &CVisibilityPlugins::ms_pedFadeDist = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2C34, 0x8E2CE8, 0x8F2E28));
PLUGIN_VARIABLE RwCamera *&CVisibilityPlugins::ms_pCamera = *reinterpret_cast<RwCamera **>(GLOBAL_ADDRESS_BY_VERSION(0x8F2514, 0x8F25C8, 0x902708));
PLUGIN_VARIABLE float &CVisibilityPlugins::ms_cullCompsDist = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2BC4, 0x8F2C78, 0x902DB8));
PLUGIN_VARIABLE float &CVisibilityPlugins::ms_pedLod0Dist = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2BD4, 0x8F2C88, 0x902DC8));
PLUGIN_VARIABLE float &CVisibilityPlugins::ms_pedLod1Dist = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2BD8, 0x8F2C8C, 0x902DCC));
PLUGIN_VARIABLE CLinkList<CVisibilityPlugins::AlphaObjectInfo> &CVisibilityPlugins::m_alphaList = *reinterpret_cast<CLinkList<AlphaObjectInfo> *>(GLOBAL_ADDRESS_BY_VERSION(0x8F42E4, 0x8F4398, 0x9044D8));
PLUGIN_VARIABLE RwV3d *&CVisibilityPlugins::ms_pCameraPosn = *reinterpret_cast<RwV3d **>(GLOBAL_ADDRESS_BY_VERSION(0x8F6270, 0x8F6428, 0x906568));
PLUGIN_VARIABLE CLinkList<CVisibilityPlugins::AlphaObjectInfo> &CVisibilityPlugins::m_alphaEntityList = *reinterpret_cast<CLinkList<AlphaObjectInfo> *>(GLOBAL_ADDRESS_BY_VERSION(0x943084, 0x94323C, 0x95337C));

int addrof(CVisibilityPlugins::AtomicConstructor) = ADDRESS_BY_VERSION(0x527CC0, 0x527F00, 0x527E90);
int gaddrof(CVisibilityPlugins::AtomicConstructor) = GLOBAL_ADDRESS_BY_VERSION(0x527CC0, 0x527F00, 0x527E90);

void *CVisibilityPlugins::AtomicConstructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, RwInt32, RwInt32>(gaddrof(CVisibilityPlugins::AtomicConstructor), object, offsetInObject, sizeInObject);
}

int addrof(CVisibilityPlugins::AtomicCopyConstructor) = ADDRESS_BY_VERSION(0x527CE0, 0x527F20, 0x527EB0);
int gaddrof(CVisibilityPlugins::AtomicCopyConstructor) = GLOBAL_ADDRESS_BY_VERSION(0x527CE0, 0x527F20, 0x527EB0);

void *CVisibilityPlugins::AtomicCopyConstructor(void *dstObject, void const *srcObject, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, void const *, RwInt32, RwInt32>(gaddrof(CVisibilityPlugins::AtomicCopyConstructor), dstObject, srcObject, offsetInObject, sizeInObject);
}

int addrof(CVisibilityPlugins::AtomicDestructor) = ADDRESS_BY_VERSION(0x527D00, 0x527F40, 0x527ED0);
int gaddrof(CVisibilityPlugins::AtomicDestructor) = GLOBAL_ADDRESS_BY_VERSION(0x527D00, 0x527F40, 0x527ED0);

void *CVisibilityPlugins::AtomicDestructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, RwInt32, RwInt32>(gaddrof(CVisibilityPlugins::AtomicDestructor), object, offsetInObject, sizeInObject);
}

int addrof(CVisibilityPlugins::ClearAtomicFlag) = ADDRESS_BY_VERSION(0x527F30, 0x528170, 0x528100);
int gaddrof(CVisibilityPlugins::ClearAtomicFlag) = GLOBAL_ADDRESS_BY_VERSION(0x527F30, 0x528170, 0x528100);

void CVisibilityPlugins::ClearAtomicFlag(RpAtomic *atomic, int flag) {
    plugin::CallDynGlobal<RpAtomic *, int>(gaddrof(CVisibilityPlugins::ClearAtomicFlag), atomic, flag);
}

int addrof(CVisibilityPlugins::ClumpConstructor) = ADDRESS_BY_VERSION(0x527D60, 0x527FA0, 0x527F30);
int gaddrof(CVisibilityPlugins::ClumpConstructor) = GLOBAL_ADDRESS_BY_VERSION(0x527D60, 0x527FA0, 0x527F30);

void *CVisibilityPlugins::ClumpConstructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, RwInt32, RwInt32>(gaddrof(CVisibilityPlugins::ClumpConstructor), object, offsetInObject, sizeInObject);
}

int addrof(CVisibilityPlugins::ClumpCopyConstructor) = ADDRESS_BY_VERSION(0x527D90, 0x527FD0, 0x527F60);
int gaddrof(CVisibilityPlugins::ClumpCopyConstructor) = GLOBAL_ADDRESS_BY_VERSION(0x527D90, 0x527FD0, 0x527F60);

void *CVisibilityPlugins::ClumpCopyConstructor(void *dstObject, void const *srcObject, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, void const *, RwInt32, RwInt32>(gaddrof(CVisibilityPlugins::ClumpCopyConstructor), dstObject, srcObject, offsetInObject, sizeInObject);
}

int addrof(CVisibilityPlugins::ClumpDestructor) = ADDRESS_BY_VERSION(0x527DB0, 0x527FF0, 0x527F80);
int gaddrof(CVisibilityPlugins::ClumpDestructor) = GLOBAL_ADDRESS_BY_VERSION(0x527DB0, 0x527FF0, 0x527F80);

void *CVisibilityPlugins::ClumpDestructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, RwInt32, RwInt32>(gaddrof(CVisibilityPlugins::ClumpDestructor), object, offsetInObject, sizeInObject);
}

int addrof(CVisibilityPlugins::DefaultVisibilityCB) = ADDRESS_BY_VERSION(0x528D90, 0x528FD0, 0x528F60);
int gaddrof(CVisibilityPlugins::DefaultVisibilityCB) = GLOBAL_ADDRESS_BY_VERSION(0x528D90, 0x528FD0, 0x528F60);

bool CVisibilityPlugins::DefaultVisibilityCB(RpClump *clump) {
    return plugin::CallAndReturnDynGlobal<bool, RpClump *>(gaddrof(CVisibilityPlugins::DefaultVisibilityCB), clump);
}

int addrof(CVisibilityPlugins::FrameConstructor) = ADDRESS_BY_VERSION(0x527D10, 0x527F50, 0x527EE0);
int gaddrof(CVisibilityPlugins::FrameConstructor) = GLOBAL_ADDRESS_BY_VERSION(0x527D10, 0x527F50, 0x527EE0);

void *CVisibilityPlugins::FrameConstructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, RwInt32, RwInt32>(gaddrof(CVisibilityPlugins::FrameConstructor), object, offsetInObject, sizeInObject);
}

int addrof(CVisibilityPlugins::FrameCopyConstructor) = ADDRESS_BY_VERSION(0x527D30, 0x527F70, 0x527F00);
int gaddrof(CVisibilityPlugins::FrameCopyConstructor) = GLOBAL_ADDRESS_BY_VERSION(0x527D30, 0x527F70, 0x527F00);

void *CVisibilityPlugins::FrameCopyConstructor(void *dstObject, void const *srcObject, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, void const *, RwInt32, RwInt32>(gaddrof(CVisibilityPlugins::FrameCopyConstructor), dstObject, srcObject, offsetInObject, sizeInObject);
}

int addrof(CVisibilityPlugins::FrameDestructor) = ADDRESS_BY_VERSION(0x527D50, 0x527F90, 0x527F20);
int gaddrof(CVisibilityPlugins::FrameDestructor) = GLOBAL_ADDRESS_BY_VERSION(0x527D50, 0x527F90, 0x527F20);

void *CVisibilityPlugins::FrameDestructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, RwInt32, RwInt32>(gaddrof(CVisibilityPlugins::FrameDestructor), object, offsetInObject, sizeInObject);
}

int addrof(CVisibilityPlugins::FrustumSphereCB) = ADDRESS_BY_VERSION(0x528DA0, 0x528FE0, 0x528F70);
int gaddrof(CVisibilityPlugins::FrustumSphereCB) = GLOBAL_ADDRESS_BY_VERSION(0x528DA0, 0x528FE0, 0x528F70);

bool CVisibilityPlugins::FrustumSphereCB(RpClump *clump) {
    return plugin::CallAndReturnDynGlobal<bool, RpClump *>(gaddrof(CVisibilityPlugins::FrustumSphereCB), clump);
}

int addrof(CVisibilityPlugins::GetAtomicId) = ADDRESS_BY_VERSION(0x527F50, 0x528190, 0x528120);
int gaddrof(CVisibilityPlugins::GetAtomicId) = GLOBAL_ADDRESS_BY_VERSION(0x527F50, 0x528190, 0x528120);

int CVisibilityPlugins::GetAtomicId(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<int, RpAtomic *>(gaddrof(CVisibilityPlugins::GetAtomicId), atomic);
}

int addrof(CVisibilityPlugins::GetAtomicModelInfo) = ADDRESS_BY_VERSION(0x527F00, 0x528140, 0x5280D0);
int gaddrof(CVisibilityPlugins::GetAtomicModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x527F00, 0x528140, 0x5280D0);

CSimpleModelInfo *CVisibilityPlugins::GetAtomicModelInfo(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<CSimpleModelInfo *, RpAtomic *>(gaddrof(CVisibilityPlugins::GetAtomicModelInfo), atomic);
}

int addrof(CVisibilityPlugins::GetClumpAlpha) = ADDRESS_BY_VERSION(0x528F70, 0x5291B0, 0x529140);
int gaddrof(CVisibilityPlugins::GetClumpAlpha) = GLOBAL_ADDRESS_BY_VERSION(0x528F70, 0x5291B0, 0x529140);

int CVisibilityPlugins::GetClumpAlpha(RpClump *clump) {
    return plugin::CallAndReturnDynGlobal<int, RpClump *>(gaddrof(CVisibilityPlugins::GetClumpAlpha), clump);
}

int addrof(CVisibilityPlugins::GetDistanceSquaredFromCamera) = ADDRESS_BY_VERSION(0x529120, 0x529360, 0x5292F0);
int gaddrof(CVisibilityPlugins::GetDistanceSquaredFromCamera) = GLOBAL_ADDRESS_BY_VERSION(0x529120, 0x529360, 0x5292F0);

float CVisibilityPlugins::GetDistanceSquaredFromCamera(RwFrame *frame) {
    return plugin::CallAndReturnDynGlobal<float, RwFrame *>(gaddrof(CVisibilityPlugins::GetDistanceSquaredFromCamera), frame);
}

int addrof(CVisibilityPlugins::GetDotProductWithCameraVector) = ADDRESS_BY_VERSION(0x5282A0, 0x5284E0, 0x528470);
int gaddrof(CVisibilityPlugins::GetDotProductWithCameraVector) = GLOBAL_ADDRESS_BY_VERSION(0x5282A0, 0x5284E0, 0x528470);

float CVisibilityPlugins::GetDotProductWithCameraVector(RwMatrix *atomicMat, RwMatrix *clumpMat, unsigned int flag) {
    return plugin::CallAndReturnDynGlobal<float, RwMatrix *, RwMatrix *, unsigned int>(gaddrof(CVisibilityPlugins::GetDotProductWithCameraVector), atomicMat, clumpMat, flag);
}

int addrof(CVisibilityPlugins::GetFrameHierarchyId) = ADDRESS_BY_VERSION(0x528D80, 0x528FC0, 0x528F50);
int gaddrof(CVisibilityPlugins::GetFrameHierarchyId) = GLOBAL_ADDRESS_BY_VERSION(0x528D80, 0x528FC0, 0x528F50);

int CVisibilityPlugins::GetFrameHierarchyId(RwFrame *frame) {
    return plugin::CallAndReturnDynGlobal<int, RwFrame *>(gaddrof(CVisibilityPlugins::GetFrameHierarchyId), frame);
}

int addrof(CVisibilityPlugins::InitAlphaAtomicList) = ADDRESS_BY_VERSION(0x528F80, 0x5291C0, 0x529150);
int gaddrof(CVisibilityPlugins::InitAlphaAtomicList) = GLOBAL_ADDRESS_BY_VERSION(0x528F80, 0x5291C0, 0x529150);

void CVisibilityPlugins::InitAlphaAtomicList() {
    plugin::CallDynGlobal(gaddrof(CVisibilityPlugins::InitAlphaAtomicList));
}

int addrof(CVisibilityPlugins::InitAlphaEntityList) = ADDRESS_BY_VERSION(0x528F90, 0x5291D0, 0x529160);
int gaddrof(CVisibilityPlugins::InitAlphaEntityList) = GLOBAL_ADDRESS_BY_VERSION(0x528F90, 0x5291D0, 0x529160);

void CVisibilityPlugins::InitAlphaEntityList() {
    plugin::CallDynGlobal(gaddrof(CVisibilityPlugins::InitAlphaEntityList));
}

int addrof(CVisibilityPlugins::Initialise) = ADDRESS_BY_VERSION(0x527E50, 0x528090, 0x528020);
int gaddrof(CVisibilityPlugins::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x527E50, 0x528090, 0x528020);

void CVisibilityPlugins::Initialise() {
    plugin::CallDynGlobal(gaddrof(CVisibilityPlugins::Initialise));
}

int addrof(CVisibilityPlugins::InsertAtomicIntoSortedList) = ADDRESS_BY_VERSION(0x528FA0, 0x5291E0, 0x529170);
int gaddrof(CVisibilityPlugins::InsertAtomicIntoSortedList) = GLOBAL_ADDRESS_BY_VERSION(0x528FA0, 0x5291E0, 0x529170);

bool CVisibilityPlugins::InsertAtomicIntoSortedList(RpAtomic *atomic, float dist) {
    return plugin::CallAndReturnDynGlobal<bool, RpAtomic *, float>(gaddrof(CVisibilityPlugins::InsertAtomicIntoSortedList), atomic, dist);
}

int addrof(CVisibilityPlugins::InsertEntityIntoSortedList) = ADDRESS_BY_VERSION(0x528FF0, 0x529230, 0x5291C0);
int gaddrof(CVisibilityPlugins::InsertEntityIntoSortedList) = GLOBAL_ADDRESS_BY_VERSION(0x528FF0, 0x529230, 0x5291C0);

bool CVisibilityPlugins::InsertEntityIntoSortedList(CEntity *entity, float dist) {
    return plugin::CallAndReturnDynGlobal<bool, CEntity *, float>(gaddrof(CVisibilityPlugins::InsertEntityIntoSortedList), entity, dist);
}

int addrof(CVisibilityPlugins::MloVisibilityCB) = ADDRESS_BY_VERSION(0x528E20, 0x529060, 0x528FF0);
int gaddrof(CVisibilityPlugins::MloVisibilityCB) = GLOBAL_ADDRESS_BY_VERSION(0x528E20, 0x529060, 0x528FF0);

bool CVisibilityPlugins::MloVisibilityCB(RpClump *clump) {
    return plugin::CallAndReturnDynGlobal<bool, RpClump *>(gaddrof(CVisibilityPlugins::MloVisibilityCB), clump);
}

int addrof(CVisibilityPlugins::PluginAttach) = ADDRESS_BY_VERSION(0x527DC0, 0x528000, 0x527F90);
int gaddrof(CVisibilityPlugins::PluginAttach) = GLOBAL_ADDRESS_BY_VERSION(0x527DC0, 0x528000, 0x527F90);

bool CVisibilityPlugins::PluginAttach() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CVisibilityPlugins::PluginAttach));
}

int addrof(CVisibilityPlugins::RenderAlphaAtomic) = ADDRESS_BY_VERSION(0x5280B0, 0x5282F0, 0x528280);
int gaddrof(CVisibilityPlugins::RenderAlphaAtomic) = GLOBAL_ADDRESS_BY_VERSION(0x5280B0, 0x5282F0, 0x528280);

RpAtomic *CVisibilityPlugins::RenderAlphaAtomic(RpAtomic *atomic, int alpha) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, int>(gaddrof(CVisibilityPlugins::RenderAlphaAtomic), atomic, alpha);
}

int addrof(CVisibilityPlugins::RenderAlphaAtomics) = ADDRESS_BY_VERSION(0x529040, 0x529280, 0x529210);
int gaddrof(CVisibilityPlugins::RenderAlphaAtomics) = GLOBAL_ADDRESS_BY_VERSION(0x529040, 0x529280, 0x529210);

void CVisibilityPlugins::RenderAlphaAtomics() {
    plugin::CallDynGlobal(gaddrof(CVisibilityPlugins::RenderAlphaAtomics));
}

int addrof(CVisibilityPlugins::RenderFadingAtomic) = ADDRESS_BY_VERSION(0x528100, 0x528340, 0x5282D0);
int gaddrof(CVisibilityPlugins::RenderFadingAtomic) = GLOBAL_ADDRESS_BY_VERSION(0x528100, 0x528340, 0x5282D0);

RpAtomic *CVisibilityPlugins::RenderFadingAtomic(RpAtomic *atomic, float camdist) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, float>(gaddrof(CVisibilityPlugins::RenderFadingAtomic), atomic, camdist);
}

int addrof(CVisibilityPlugins::RenderFadingEntities) = ADDRESS_BY_VERSION(0x529070, 0x5292B0, 0x529240);
int gaddrof(CVisibilityPlugins::RenderFadingEntities) = GLOBAL_ADDRESS_BY_VERSION(0x529070, 0x5292B0, 0x529240);

void CVisibilityPlugins::RenderFadingEntities() {
    plugin::CallDynGlobal(gaddrof(CVisibilityPlugins::RenderFadingEntities));
}

int addrof(CVisibilityPlugins::RenderObjAlwaysAtomic) = ADDRESS_BY_VERSION(0x528000, 0x528240, 0x5281D0);
int gaddrof(CVisibilityPlugins::RenderObjAlwaysAtomic) = GLOBAL_ADDRESS_BY_VERSION(0x528000, 0x528240, 0x5281D0);

RpAtomic *CVisibilityPlugins::RenderObjAlwaysAtomic(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *>(gaddrof(CVisibilityPlugins::RenderObjAlwaysAtomic), atomic);
}

int addrof(CVisibilityPlugins::RenderPedHiDetailCB) = ADDRESS_BY_VERSION(0x528BC0, 0x528E00, 0x528D90);
int gaddrof(CVisibilityPlugins::RenderPedHiDetailCB) = GLOBAL_ADDRESS_BY_VERSION(0x528BC0, 0x528E00, 0x528D90);

RpAtomic *CVisibilityPlugins::RenderPedHiDetailCB(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *>(gaddrof(CVisibilityPlugins::RenderPedHiDetailCB), atomic);
}

int addrof(CVisibilityPlugins::RenderPedLowDetailCB) = ADDRESS_BY_VERSION(0x528B60, 0x528DA0, 0x528D30);
int gaddrof(CVisibilityPlugins::RenderPedLowDetailCB) = GLOBAL_ADDRESS_BY_VERSION(0x528B60, 0x528DA0, 0x528D30);

RpAtomic *CVisibilityPlugins::RenderPedLowDetailCB(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *>(gaddrof(CVisibilityPlugins::RenderPedLowDetailCB), atomic);
}

int addrof(CVisibilityPlugins::RenderPlayerCB) = ADDRESS_BY_VERSION(0x528B30, 0x528D70, 0x528D00);
int gaddrof(CVisibilityPlugins::RenderPlayerCB) = GLOBAL_ADDRESS_BY_VERSION(0x528B30, 0x528D70, 0x528D00);

RpAtomic *CVisibilityPlugins::RenderPlayerCB(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *>(gaddrof(CVisibilityPlugins::RenderPlayerCB), atomic);
}

int addrof(CVisibilityPlugins::RenderTrainHiDetailAlphaCB) = ADDRESS_BY_VERSION(0x5286A0, 0x5288E0, 0x528870);
int gaddrof(CVisibilityPlugins::RenderTrainHiDetailAlphaCB) = GLOBAL_ADDRESS_BY_VERSION(0x5286A0, 0x5288E0, 0x528870);

RpAtomic *CVisibilityPlugins::RenderTrainHiDetailAlphaCB(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *>(gaddrof(CVisibilityPlugins::RenderTrainHiDetailAlphaCB), atomic);
}

int addrof(CVisibilityPlugins::RenderTrainHiDetailCB) = ADDRESS_BY_VERSION(0x5285D0, 0x528810, 0x5287A0);
int gaddrof(CVisibilityPlugins::RenderTrainHiDetailCB) = GLOBAL_ADDRESS_BY_VERSION(0x5285D0, 0x528810, 0x5287A0);

RpAtomic *CVisibilityPlugins::RenderTrainHiDetailCB(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *>(gaddrof(CVisibilityPlugins::RenderTrainHiDetailCB), atomic);
}

int addrof(CVisibilityPlugins::RenderVehicleHiDetailAlphaCB) = ADDRESS_BY_VERSION(0x5284B0, 0x5286F0, 0x528680);
int gaddrof(CVisibilityPlugins::RenderVehicleHiDetailAlphaCB) = GLOBAL_ADDRESS_BY_VERSION(0x5284B0, 0x5286F0, 0x528680);

RpAtomic *CVisibilityPlugins::RenderVehicleHiDetailAlphaCB(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *>(gaddrof(CVisibilityPlugins::RenderVehicleHiDetailAlphaCB), atomic);
}

int addrof(CVisibilityPlugins::RenderVehicleHiDetailAlphaCB_BigVehicle) = ADDRESS_BY_VERSION(0x528A10, 0x528C50, 0x528BE0);
int gaddrof(CVisibilityPlugins::RenderVehicleHiDetailAlphaCB_BigVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x528A10, 0x528C50, 0x528BE0);

RpAtomic *CVisibilityPlugins::RenderVehicleHiDetailAlphaCB_BigVehicle(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *>(gaddrof(CVisibilityPlugins::RenderVehicleHiDetailAlphaCB_BigVehicle), atomic);
}

int addrof(CVisibilityPlugins::RenderVehicleHiDetailCB) = ADDRESS_BY_VERSION(0x5283E0, 0x528620, 0x5285B0);
int gaddrof(CVisibilityPlugins::RenderVehicleHiDetailCB) = GLOBAL_ADDRESS_BY_VERSION(0x5283E0, 0x528620, 0x5285B0);

RpAtomic *CVisibilityPlugins::RenderVehicleHiDetailCB(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *>(gaddrof(CVisibilityPlugins::RenderVehicleHiDetailCB), atomic);
}

int addrof(CVisibilityPlugins::RenderVehicleHiDetailCB_BigVehicle) = ADDRESS_BY_VERSION(0x5288A0, 0x528AE0, 0x528A70);
int gaddrof(CVisibilityPlugins::RenderVehicleHiDetailCB_BigVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x5288A0, 0x528AE0, 0x528A70);

RpAtomic *CVisibilityPlugins::RenderVehicleHiDetailCB_BigVehicle(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *>(gaddrof(CVisibilityPlugins::RenderVehicleHiDetailCB_BigVehicle), atomic);
}

int addrof(CVisibilityPlugins::RenderVehicleHiDetailCB_Boat) = ADDRESS_BY_VERSION(0x528AD0, 0x528D10, 0x528CA0);
int gaddrof(CVisibilityPlugins::RenderVehicleHiDetailCB_Boat) = GLOBAL_ADDRESS_BY_VERSION(0x528AD0, 0x528D10, 0x528CA0);

RpAtomic *CVisibilityPlugins::RenderVehicleHiDetailCB_Boat(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *>(gaddrof(CVisibilityPlugins::RenderVehicleHiDetailCB_Boat), atomic);
}

int addrof(CVisibilityPlugins::RenderVehicleLowDetailAlphaCB_BigVehicle) = ADDRESS_BY_VERSION(0x528940, 0x528B80, 0x528B10);
int gaddrof(CVisibilityPlugins::RenderVehicleLowDetailAlphaCB_BigVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x528940, 0x528B80, 0x528B10);

RpAtomic *CVisibilityPlugins::RenderVehicleLowDetailAlphaCB_BigVehicle(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *>(gaddrof(CVisibilityPlugins::RenderVehicleLowDetailAlphaCB_BigVehicle), atomic);
}

int addrof(CVisibilityPlugins::RenderVehicleLowDetailCB_BigVehicle) = ADDRESS_BY_VERSION(0x5287F0, 0x528A30, 0x5289C0);
int gaddrof(CVisibilityPlugins::RenderVehicleLowDetailCB_BigVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x5287F0, 0x528A30, 0x5289C0);

RpAtomic *CVisibilityPlugins::RenderVehicleLowDetailCB_BigVehicle(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *>(gaddrof(CVisibilityPlugins::RenderVehicleLowDetailCB_BigVehicle), atomic);
}

int addrof(CVisibilityPlugins::RenderVehicleReallyLowDetailCB) = ADDRESS_BY_VERSION(0x528240, 0x528480, 0x528410);
int gaddrof(CVisibilityPlugins::RenderVehicleReallyLowDetailCB) = GLOBAL_ADDRESS_BY_VERSION(0x528240, 0x528480, 0x528410);

RpAtomic *CVisibilityPlugins::RenderVehicleReallyLowDetailCB(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *>(gaddrof(CVisibilityPlugins::RenderVehicleReallyLowDetailCB), atomic);
}

int addrof(CVisibilityPlugins::RenderVehicleReallyLowDetailCB_BigVehicle) = ADDRESS_BY_VERSION(0x5287B0, 0x5289F0, 0x528980);
int gaddrof(CVisibilityPlugins::RenderVehicleReallyLowDetailCB_BigVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x5287B0, 0x5289F0, 0x528980);

RpAtomic *CVisibilityPlugins::RenderVehicleReallyLowDetailCB_BigVehicle(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *>(gaddrof(CVisibilityPlugins::RenderVehicleReallyLowDetailCB_BigVehicle), atomic);
}

int addrof(CVisibilityPlugins::RenderWheelAtomicCB) = ADDRESS_BY_VERSION(0x527F70, 0x5281B0, 0x528140);
int gaddrof(CVisibilityPlugins::RenderWheelAtomicCB) = GLOBAL_ADDRESS_BY_VERSION(0x527F70, 0x5281B0, 0x528140);

RpAtomic *CVisibilityPlugins::RenderWheelAtomicCB(RpAtomic *atomic) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *>(gaddrof(CVisibilityPlugins::RenderWheelAtomicCB), atomic);
}

int addrof(CVisibilityPlugins::SetAtomicFlag) = ADDRESS_BY_VERSION(0x527F10, 0x528150, 0x5280E0);
int gaddrof(CVisibilityPlugins::SetAtomicFlag) = GLOBAL_ADDRESS_BY_VERSION(0x527F10, 0x528150, 0x5280E0);

void CVisibilityPlugins::SetAtomicFlag(RpAtomic *atomic, int flag) {
    plugin::CallDynGlobal<RpAtomic *, int>(gaddrof(CVisibilityPlugins::SetAtomicFlag), atomic, flag);
}

int addrof(CVisibilityPlugins::SetAtomicModelInfo) = ADDRESS_BY_VERSION(0x527EC0, 0x528100, 0x528090);
int gaddrof(CVisibilityPlugins::SetAtomicModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x527EC0, 0x528100, 0x528090);

void CVisibilityPlugins::SetAtomicModelInfo(RpAtomic *atomic, CSimpleModelInfo *info) {
    plugin::CallDynGlobal<RpAtomic *, CSimpleModelInfo *>(gaddrof(CVisibilityPlugins::SetAtomicModelInfo), atomic, info);
}

int addrof(CVisibilityPlugins::SetAtomicRenderCallback) = ADDRESS_BY_VERSION(0x528C20, 0x528E60, 0x528DF0);
int gaddrof(CVisibilityPlugins::SetAtomicRenderCallback) = GLOBAL_ADDRESS_BY_VERSION(0x528C20, 0x528E60, 0x528DF0);

void CVisibilityPlugins::SetAtomicRenderCallback(RpAtomic *atomic, RpAtomic *(*f)(RpAtomic *)) {
    plugin::CallDynGlobal<RpAtomic *, RpAtomic *(*)(RpAtomic *)>(gaddrof(CVisibilityPlugins::SetAtomicRenderCallback), atomic, f);
}

int addrof(CVisibilityPlugins::SetClumpAlpha) = ADDRESS_BY_VERSION(0x528F50, 0x529190, 0x529120);
int gaddrof(CVisibilityPlugins::SetClumpAlpha) = GLOBAL_ADDRESS_BY_VERSION(0x528F50, 0x529190, 0x529120);

void CVisibilityPlugins::SetClumpAlpha(RpClump *clump, int alpha) {
    plugin::CallDynGlobal<RpClump *, int>(gaddrof(CVisibilityPlugins::SetClumpAlpha), clump, alpha);
}

int addrof(CVisibilityPlugins::SetClumpModelInfo) = ADDRESS_BY_VERSION(0x528ED0, 0x529110, 0x5290A0);
int gaddrof(CVisibilityPlugins::SetClumpModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x528ED0, 0x529110, 0x5290A0);

void CVisibilityPlugins::SetClumpModelInfo(RpClump *clump, CClumpModelInfo *info) {
    plugin::CallDynGlobal<RpClump *, CClumpModelInfo *>(gaddrof(CVisibilityPlugins::SetClumpModelInfo), clump, info);
}

int addrof(CVisibilityPlugins::SetFrameHierarchyId) = ADDRESS_BY_VERSION(0x528D60, 0x528FA0, 0x528F30);
int gaddrof(CVisibilityPlugins::SetFrameHierarchyId) = GLOBAL_ADDRESS_BY_VERSION(0x528D60, 0x528FA0, 0x528F30);

void CVisibilityPlugins::SetFrameHierarchyId(RwFrame *frame, int id) {
    plugin::CallDynGlobal<RwFrame *, int>(gaddrof(CVisibilityPlugins::SetFrameHierarchyId), frame, id);
}

int addrof(CVisibilityPlugins::SetRenderWareCamera) = ADDRESS_BY_VERSION(0x528C50, 0x528E90, 0x528E20);
int gaddrof(CVisibilityPlugins::SetRenderWareCamera) = GLOBAL_ADDRESS_BY_VERSION(0x528C50, 0x528E90, 0x528E20);

void CVisibilityPlugins::SetRenderWareCamera(RwCamera *camera) {
    plugin::CallDynGlobal<RwCamera *>(gaddrof(CVisibilityPlugins::SetRenderWareCamera), camera);
}

int addrof(CVisibilityPlugins::Shutdown) = ADDRESS_BY_VERSION(0x527EA0, 0x5280E0, 0x528070);
int gaddrof(CVisibilityPlugins::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x527EA0, 0x5280E0, 0x528070);

void CVisibilityPlugins::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CVisibilityPlugins::Shutdown));
}

int addrof(CVisibilityPlugins::VehicleVisibilityCB) = ADDRESS_BY_VERSION(0x528E80, 0x5290C0, 0x529050);
int gaddrof(CVisibilityPlugins::VehicleVisibilityCB) = GLOBAL_ADDRESS_BY_VERSION(0x528E80, 0x5290C0, 0x529050);

bool CVisibilityPlugins::VehicleVisibilityCB(RpClump *clump) {
    return plugin::CallAndReturnDynGlobal<bool, RpClump *>(gaddrof(CVisibilityPlugins::VehicleVisibilityCB), clump);
}

int addrof(CVisibilityPlugins::VehicleVisibilityCB_BigVehicle) = ADDRESS_BY_VERSION(0x528EC0, 0x529100, 0x529090);
int gaddrof(CVisibilityPlugins::VehicleVisibilityCB_BigVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x528EC0, 0x529100, 0x529090);

bool CVisibilityPlugins::VehicleVisibilityCB_BigVehicle(RpClump *clump) {
    return plugin::CallAndReturnDynGlobal<bool, RpClump *>(gaddrof(CVisibilityPlugins::VehicleVisibilityCB_BigVehicle), clump);
}

int addrof(SetAlphaCB) = ADDRESS_BY_VERSION(0x527F60, 0x5281A0, 0x528130);
int gaddrof(SetAlphaCB) = GLOBAL_ADDRESS_BY_VERSION(0x527F60, 0x5281A0, 0x528130);

RpMaterial *SetAlphaCB(RpMaterial *material, void *data) {
    return plugin::CallAndReturnDynGlobal<RpMaterial *, RpMaterial *, void *>(gaddrof(SetAlphaCB), material, data);
}

int addrof(SetTextureCB) = ADDRESS_BY_VERSION(0x528B10, 0x528D50, 0x528CE0);
int gaddrof(SetTextureCB) = GLOBAL_ADDRESS_BY_VERSION(0x528B10, 0x528D50, 0x528CE0);

RpMaterial *SetTextureCB(RpMaterial *material, void *data) {
    return plugin::CallAndReturnDynGlobal<RpMaterial *, RpMaterial *, void *>(gaddrof(SetTextureCB), material, data);
}
