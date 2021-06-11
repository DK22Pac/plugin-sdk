/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPools.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CPool<CObject, CCutsceneObject> *&CPools::ms_pObjectPool = *reinterpret_cast<CPool<CObject, CCutsceneObject> **>(GLOBAL_ADDRESS_BY_VERSION(0x880E28, 0x880DD8, 0x890F18));
PLUGIN_VARIABLE CPool<cAudioScriptObject> *&CPools::ms_pAudioScriptObjectPool = *reinterpret_cast<CPool<cAudioScriptObject> **>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B6C, 0x8F1C20, 0x901D60));
PLUGIN_VARIABLE CPool<CTreadable> *&CPools::ms_pTreadablePool = *reinterpret_cast<CPool<CTreadable> **>(GLOBAL_ADDRESS_BY_VERSION(0x8F2568, 0x8F261C, 0x90275C));
PLUGIN_VARIABLE CPool<CBuilding> *&CPools::ms_pBuildingPool = *reinterpret_cast<CPool<CBuilding> **>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C04, 0x8F2CB8, 0x902DF8));
PLUGIN_VARIABLE CPool<CDummy> *&CPools::ms_pDummyPool = *reinterpret_cast<CPool<CDummy> **>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C18, 0x8F2CCC, 0x902E0C));
PLUGIN_VARIABLE CPool<CPed, CPlayerPed> *&CPools::ms_pPedPool = *reinterpret_cast<CPool<CPed, CPlayerPed> **>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C60, 0x8F2D14, 0x902E54));
PLUGIN_VARIABLE CPool<CEntryInfoNode> *&CPools::ms_pEntryInfoNodePool = *reinterpret_cast<CPool<CEntryInfoNode> **>(GLOBAL_ADDRESS_BY_VERSION(0x941448, 0x941600, 0x951740));
PLUGIN_VARIABLE CPool<CPtrNode> *&CPools::ms_pPtrNodePool = *reinterpret_cast<CPool<CPtrNode> **>(GLOBAL_ADDRESS_BY_VERSION(0x943044, 0x9431FC, 0x95333C));
PLUGIN_VARIABLE CPool<CVehicle, CAutomobile> *&CPools::ms_pVehiclePool = *reinterpret_cast<CPool<CVehicle, CAutomobile> **>(GLOBAL_ADDRESS_BY_VERSION(0x9430DC, 0x943294, 0x9533D4));

int addrof(CPools::CheckPoolsEmpty) = ADDRESS_BY_VERSION(0x4A1A50, 0x4A1B40, 0x4A1AD0);
int gaddrof(CPools::CheckPoolsEmpty) = GLOBAL_ADDRESS_BY_VERSION(0x4A1A50, 0x4A1B40, 0x4A1AD0);

void CPools::CheckPoolsEmpty() {
    plugin::CallDynGlobal(gaddrof(CPools::CheckPoolsEmpty));
}

int addrof(CPools::GetBuildingPool) = ADDRESS_BY_VERSION(0x545320, 0x545560, 0x545510);
int gaddrof(CPools::GetBuildingPool) = GLOBAL_ADDRESS_BY_VERSION(0x545320, 0x545560, 0x545510);

CPool<CBuilding> *CPools::GetBuildingPool() {
    return plugin::CallAndReturnDynGlobal<CPool<CBuilding> *>(gaddrof(CPools::GetBuildingPool));
}

int addrof(CPools::GetCCutsceneHeadSize) = ADDRESS_BY_VERSION(0x4A2DA0, 0x4A2E90, 0x4A2E20);
int gaddrof(CPools::GetCCutsceneHeadSize) = GLOBAL_ADDRESS_BY_VERSION(0x4A2DA0, 0x4A2E90, 0x4A2E20);

int CPools::GetCCutsceneHeadSize() {
    return plugin::CallAndReturnDynGlobal<int>(gaddrof(CPools::GetCCutsceneHeadSize));
}

int addrof(CPools::GetObject) = ADDRESS_BY_VERSION(0x4A1B20, 0x4A1C10, 0x4A1BA0);
int gaddrof(CPools::GetObject) = GLOBAL_ADDRESS_BY_VERSION(0x4A1B20, 0x4A1C10, 0x4A1BA0);

CObject *CPools::GetObject(int handle) {
    return plugin::CallAndReturnDynGlobal<CObject *, int>(gaddrof(CPools::GetObject), handle);
}

int addrof(CPools::GetObjectPool) = ADDRESS_BY_VERSION(0x545310, 0x545550, 0x545500);
int gaddrof(CPools::GetObjectPool) = GLOBAL_ADDRESS_BY_VERSION(0x545310, 0x545550, 0x545500);

CPool<CObject, CCutsceneObject> *CPools::GetObjectPool() {
    return plugin::CallAndReturnDynGlobal<CPool<CObject, CCutsceneObject> *>(gaddrof(CPools::GetObjectPool));
}

int addrof(CPools::GetObjectRef) = ADDRESS_BY_VERSION(0x4A1B00, 0x4A1BF0, 0x4A1B80);
int gaddrof(CPools::GetObjectRef) = GLOBAL_ADDRESS_BY_VERSION(0x4A1B00, 0x4A1BF0, 0x4A1B80);

int CPools::GetObjectRef(CObject *object) {
    return plugin::CallAndReturnDynGlobal<int, CObject *>(gaddrof(CPools::GetObjectRef), object);
}

int addrof(CPools::GetPed) = ADDRESS_BY_VERSION(0x4A1AA0, 0x4A1B90, 0x4A1B20);
int gaddrof(CPools::GetPed) = GLOBAL_ADDRESS_BY_VERSION(0x4A1AA0, 0x4A1B90, 0x4A1B20);

CPed *CPools::GetPed(int handle) {
    return plugin::CallAndReturnDynGlobal<CPed *, int>(gaddrof(CPools::GetPed), handle);
}

int addrof(CPools::GetPedRef) = ADDRESS_BY_VERSION(0x4A1A80, 0x4A1B70, 0x4A1B00);
int gaddrof(CPools::GetPedRef) = GLOBAL_ADDRESS_BY_VERSION(0x4A1A80, 0x4A1B70, 0x4A1B00);

int CPools::GetPedRef(CPed *ped) {
    return plugin::CallAndReturnDynGlobal<int, CPed *>(gaddrof(CPools::GetPedRef), ped);
}

int addrof(CPools::GetVehicle) = ADDRESS_BY_VERSION(0x4A1AE0, 0x4A1BD0, 0x4A1B60);
int gaddrof(CPools::GetVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x4A1AE0, 0x4A1BD0, 0x4A1B60);

CVehicle *CPools::GetVehicle(int handle) {
    return plugin::CallAndReturnDynGlobal<CVehicle *, int>(gaddrof(CPools::GetVehicle), handle);
}

int addrof(CPools::GetVehiclePool) = ADDRESS_BY_VERSION(0x545300, 0x545540, 0x5454F0);
int gaddrof(CPools::GetVehiclePool) = GLOBAL_ADDRESS_BY_VERSION(0x545300, 0x545540, 0x5454F0);

CPool<CVehicle, CAutomobile> *CPools::GetVehiclePool() {
    return plugin::CallAndReturnDynGlobal<CPool<CVehicle, CAutomobile> *>(gaddrof(CPools::GetVehiclePool));
}

int addrof(CPools::GetVehicleRef) = ADDRESS_BY_VERSION(0x4A1AC0, 0x4A1BB0, 0x4A1B40);
int gaddrof(CPools::GetVehicleRef) = GLOBAL_ADDRESS_BY_VERSION(0x4A1AC0, 0x4A1BB0, 0x4A1B40);

int CPools::GetVehicleRef(CVehicle *vehicle) {
    return plugin::CallAndReturnDynGlobal<int, CVehicle *>(gaddrof(CPools::GetVehicleRef), vehicle);
}

int addrof(CPools::Initialise) = ADDRESS_BY_VERSION(0x4A1770, 0x4A1860, 0x4A17F0);
int gaddrof(CPools::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4A1770, 0x4A1860, 0x4A17F0);

void CPools::Initialise() {
    plugin::CallDynGlobal(gaddrof(CPools::Initialise));
}

int addrof(CPools::LoadObjectPool) = ADDRESS_BY_VERSION(0x4A2550, 0x4A2640, 0x4A25D0);
int gaddrof(CPools::LoadObjectPool) = GLOBAL_ADDRESS_BY_VERSION(0x4A2550, 0x4A2640, 0x4A25D0);

void CPools::LoadObjectPool(unsigned char *buffer, unsigned int size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int>(gaddrof(CPools::LoadObjectPool), buffer, size);
}

int addrof(CPools::LoadPedPool) = ADDRESS_BY_VERSION(0x4A2B50, 0x4A2C40, 0x4A2BD0);
int gaddrof(CPools::LoadPedPool) = GLOBAL_ADDRESS_BY_VERSION(0x4A2B50, 0x4A2C40, 0x4A2BD0);

void CPools::LoadPedPool(unsigned char *buffer, unsigned int size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int>(gaddrof(CPools::LoadPedPool), buffer, size);
}

int addrof(CPools::LoadVehiclePool) = ADDRESS_BY_VERSION(0x4A1B40, 0x4A1C30, 0x4A1BC0);
int gaddrof(CPools::LoadVehiclePool) = GLOBAL_ADDRESS_BY_VERSION(0x4A1B40, 0x4A1C30, 0x4A1BC0);

void CPools::LoadVehiclePool(unsigned char *buffer, unsigned int size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int>(gaddrof(CPools::LoadVehiclePool), buffer, size);
}

int addrof(CPools::MakeSureSlotInObjectPoolIsEmpty) = ADDRESS_BY_VERSION(0x4A2DB0, 0x4A2EA0, 0x4A2E30);
int gaddrof(CPools::MakeSureSlotInObjectPoolIsEmpty) = GLOBAL_ADDRESS_BY_VERSION(0x4A2DB0, 0x4A2EA0, 0x4A2E30);

void CPools::MakeSureSlotInObjectPoolIsEmpty(int slot) {
    plugin::CallDynGlobal<int>(gaddrof(CPools::MakeSureSlotInObjectPoolIsEmpty), slot);
}

int addrof(CPools::SaveObjectPool) = ADDRESS_BY_VERSION(0x4A22D0, 0x4A23C0, 0x4A2350);
int gaddrof(CPools::SaveObjectPool) = GLOBAL_ADDRESS_BY_VERSION(0x4A22D0, 0x4A23C0, 0x4A2350);

void CPools::SaveObjectPool(unsigned char *buffer, unsigned int *outSize) {
    plugin::CallDynGlobal<unsigned char *, unsigned int *>(gaddrof(CPools::SaveObjectPool), buffer, outSize);
}

int addrof(CPools::SavePedPool) = ADDRESS_BY_VERSION(0x4A29B0, 0x4A2AA0, 0x4A2A30);
int gaddrof(CPools::SavePedPool) = GLOBAL_ADDRESS_BY_VERSION(0x4A29B0, 0x4A2AA0, 0x4A2A30);

void CPools::SavePedPool(unsigned char *buffer, unsigned int *outSize) {
    plugin::CallDynGlobal<unsigned char *, unsigned int *>(gaddrof(CPools::SavePedPool), buffer, outSize);
}

int addrof(CPools::SaveVehiclePool) = ADDRESS_BY_VERSION(0x4A2080, 0x4A2170, 0x4A2100);
int gaddrof(CPools::SaveVehiclePool) = GLOBAL_ADDRESS_BY_VERSION(0x4A2080, 0x4A2170, 0x4A2100);

void CPools::SaveVehiclePool(unsigned char *buffer, unsigned int *outSize) {
    plugin::CallDynGlobal<unsigned char *, unsigned int *>(gaddrof(CPools::SaveVehiclePool), buffer, outSize);
}

int addrof(CPools::ShutDown) = ADDRESS_BY_VERSION(0x4A1880, 0x4A1970, 0x4A1900);
int gaddrof(CPools::ShutDown) = GLOBAL_ADDRESS_BY_VERSION(0x4A1880, 0x4A1970, 0x4A1900);

void CPools::ShutDown() {
    plugin::CallDynGlobal(gaddrof(CPools::ShutDown));
}
