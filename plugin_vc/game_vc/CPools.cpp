/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPools.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CPool<CObject, CCutsceneObject> *&CPools::ms_pObjectPool = *reinterpret_cast<CPool<CObject, CCutsceneObject> **>(GLOBAL_ADDRESS_BY_VERSION(0x94DBE0, 0x94DBE8, 0x94CBE8));
PLUGIN_VARIABLE CPool<CColModel> *&CPools::ms_pColModelPool = *reinterpret_cast<CPool<CColModel> **>(GLOBAL_ADDRESS_BY_VERSION(0x9753C0, 0x9753C8, 0x9743C8));
PLUGIN_VARIABLE CPool<cAudioScriptObject> *&CPools::ms_pAudioScriptObjectPool = *reinterpret_cast<CPool<cAudioScriptObject> **>(GLOBAL_ADDRESS_BY_VERSION(0x978778, 0x978780, 0x977780));
PLUGIN_VARIABLE CPool<CTreadable> *&CPools::ms_pTreadablePool = *reinterpret_cast<CPool<CTreadable> **>(GLOBAL_ADDRESS_BY_VERSION(0x978834, 0x97883C, 0x97783C));
PLUGIN_VARIABLE CPool<CBuilding> *&CPools::ms_pBuildingPool = *reinterpret_cast<CPool<CBuilding> **>(GLOBAL_ADDRESS_BY_VERSION(0x97F240, 0x97F248, 0x97E248));
PLUGIN_VARIABLE CPool<CDummy> *&CPools::ms_pDummyPool = *reinterpret_cast<CPool<CDummy> **>(GLOBAL_ADDRESS_BY_VERSION(0x97F25C, 0x97F264, 0x97E264));
PLUGIN_VARIABLE CPool<CPed, CPlayerPed> *&CPools::ms_pPedPool = *reinterpret_cast<CPool<CPed, CPlayerPed> **>(GLOBAL_ADDRESS_BY_VERSION(0x97F2AC, 0x97F2B4, 0x97E2B4));
PLUGIN_VARIABLE CPool<CEntryInfoNode> *&CPools::ms_pEntryInfoNodePool = *reinterpret_cast<CPool<CEntryInfoNode> **>(GLOBAL_ADDRESS_BY_VERSION(0xA0D8BC, 0xA0D8C4, 0xA0C8C4));
PLUGIN_VARIABLE CPool<CPtrNode> *&CPools::ms_pPtrNodePool = *reinterpret_cast<CPool<CPtrNode> **>(GLOBAL_ADDRESS_BY_VERSION(0xA0FD38, 0xA0FD40, 0xA0ED40));
PLUGIN_VARIABLE CPool<CVehicle, CAutomobile> *&CPools::ms_pVehiclePool = *reinterpret_cast<CPool<CVehicle, CAutomobile> **>(GLOBAL_ADDRESS_BY_VERSION(0xA0FDE4, 0xA0FDEC, 0xA0EDEC));

int addrof(CPools::CheckPoolsEmpty) = ADDRESS_BY_VERSION(0x4C0040, 0x4C0060, 0x4BFF10);
int gaddrof(CPools::CheckPoolsEmpty) = GLOBAL_ADDRESS_BY_VERSION(0x4C0040, 0x4C0060, 0x4BFF10);

void CPools::CheckPoolsEmpty() {
    plugin::CallDynGlobal(gaddrof(CPools::CheckPoolsEmpty));
}

int addrof(CPools::GetObject) = ADDRESS_BY_VERSION(0x4BFF80, 0x4BFFA0, 0x4BFE50);
int gaddrof(CPools::GetObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BFF80, 0x4BFFA0, 0x4BFE50);

CObject *CPools::GetObject(int handle) {
    return plugin::CallAndReturnDynGlobal<CObject *, int>(gaddrof(CPools::GetObject), handle);
}

int addrof(CPools::GetObjectRef) = ADDRESS_BY_VERSION(0x4BFFA0, 0x4BFFC0, 0x4BFE70);
int gaddrof(CPools::GetObjectRef) = GLOBAL_ADDRESS_BY_VERSION(0x4BFFA0, 0x4BFFC0, 0x4BFE70);

int CPools::GetObjectRef(CObject *object) {
    return plugin::CallAndReturnDynGlobal<int, CObject *>(gaddrof(CPools::GetObjectRef), object);
}

int addrof(CPools::GetPed) = ADDRESS_BY_VERSION(0x4C0000, 0x4C0020, 0x4BFED0);
int gaddrof(CPools::GetPed) = GLOBAL_ADDRESS_BY_VERSION(0x4C0000, 0x4C0020, 0x4BFED0);

CPed *CPools::GetPed(int handle) {
    return plugin::CallAndReturnDynGlobal<CPed *, int>(gaddrof(CPools::GetPed), handle);
}

int addrof(CPools::GetPedRef) = ADDRESS_BY_VERSION(0x4C0020, 0x4C0040, 0x4BFEF0);
int gaddrof(CPools::GetPedRef) = GLOBAL_ADDRESS_BY_VERSION(0x4C0020, 0x4C0040, 0x4BFEF0);

int CPools::GetPedRef(CPed *ped) {
    return plugin::CallAndReturnDynGlobal<int, CPed *>(gaddrof(CPools::GetPedRef), ped);
}

int addrof(CPools::GetVehicle) = ADDRESS_BY_VERSION(0x4BFFC0, 0x4BFFE0, 0x4BFE90);
int gaddrof(CPools::GetVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x4BFFC0, 0x4BFFE0, 0x4BFE90);

CVehicle *CPools::GetVehicle(int handle) {
    return plugin::CallAndReturnDynGlobal<CVehicle *, int>(gaddrof(CPools::GetVehicle), handle);
}

int addrof(CPools::GetVehicleRef) = ADDRESS_BY_VERSION(0x4BFFE0, 0x4C0000, 0x4BFEB0);
int gaddrof(CPools::GetVehicleRef) = GLOBAL_ADDRESS_BY_VERSION(0x4BFFE0, 0x4C0000, 0x4BFEB0);

int CPools::GetVehicleRef(CVehicle *vehicle) {
    return plugin::CallAndReturnDynGlobal<int, CVehicle *>(gaddrof(CPools::GetVehicleRef), vehicle);
}

int addrof(CPools::Initialise) = ADDRESS_BY_VERSION(0x4C0270, 0x4C0290, 0x4C0140);
int gaddrof(CPools::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4C0270, 0x4C0290, 0x4C0140);

void CPools::Initialise() {
    plugin::CallDynGlobal(gaddrof(CPools::Initialise));
}

int addrof(CPools::LoadObjectPool) = ADDRESS_BY_VERSION(0x4BEF70, 0x4BEF90, 0x4BEE40);
int gaddrof(CPools::LoadObjectPool) = GLOBAL_ADDRESS_BY_VERSION(0x4BEF70, 0x4BEF90, 0x4BEE40);

void CPools::LoadObjectPool(unsigned char *buffer, unsigned int size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int>(gaddrof(CPools::LoadObjectPool), buffer, size);
}

int addrof(CPools::LoadPedPool) = ADDRESS_BY_VERSION(0x4BEB50, 0x4BEB70, 0x4BEA20);
int gaddrof(CPools::LoadPedPool) = GLOBAL_ADDRESS_BY_VERSION(0x4BEB50, 0x4BEB70, 0x4BEA20);

void CPools::LoadPedPool(unsigned char *buffer, unsigned int size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int>(gaddrof(CPools::LoadPedPool), buffer, size);
}

int addrof(CPools::LoadVehiclePool) = ADDRESS_BY_VERSION(0x4BF9A0, 0x4BF9C0, 0x4BF870);
int gaddrof(CPools::LoadVehiclePool) = GLOBAL_ADDRESS_BY_VERSION(0x4BF9A0, 0x4BF9C0, 0x4BF870);

void CPools::LoadVehiclePool(unsigned char *buffer, unsigned int size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int>(gaddrof(CPools::LoadVehiclePool), buffer, size);
}

int addrof(CPools::MakeSureSlotInObjectPoolIsEmpty) = ADDRESS_BY_VERSION(0x4BEA80, 0x4BEAA0, 0x4BE950);
int gaddrof(CPools::MakeSureSlotInObjectPoolIsEmpty) = GLOBAL_ADDRESS_BY_VERSION(0x4BEA80, 0x4BEAA0, 0x4BE950);

void CPools::MakeSureSlotInObjectPoolIsEmpty(int slot) {
    plugin::CallDynGlobal<int>(gaddrof(CPools::MakeSureSlotInObjectPoolIsEmpty), slot);
}

int addrof(CPools::SaveObjectPool) = ADDRESS_BY_VERSION(0x4BF420, 0x4BF440, 0x4BF2F0);
int gaddrof(CPools::SaveObjectPool) = GLOBAL_ADDRESS_BY_VERSION(0x4BF420, 0x4BF440, 0x4BF2F0);

void CPools::SaveObjectPool(unsigned char *buffer, unsigned int *outSize) {
    plugin::CallDynGlobal<unsigned char *, unsigned int *>(gaddrof(CPools::SaveObjectPool), buffer, outSize);
}

int addrof(CPools::SavePedPool) = ADDRESS_BY_VERSION(0x4BEDC0, 0x4BEDE0, 0x4BEC90);
int gaddrof(CPools::SavePedPool) = GLOBAL_ADDRESS_BY_VERSION(0x4BEDC0, 0x4BEDE0, 0x4BEC90);

void CPools::SavePedPool(unsigned char *buffer, unsigned int *outSize) {
    plugin::CallDynGlobal<unsigned char *, unsigned int *>(gaddrof(CPools::SavePedPool), buffer, outSize);
}

int addrof(CPools::SaveVehiclePool) = ADDRESS_BY_VERSION(0x4BF6D0, 0x4BF6F0, 0x4BF5A0);
int gaddrof(CPools::SaveVehiclePool) = GLOBAL_ADDRESS_BY_VERSION(0x4BF6D0, 0x4BF6F0, 0x4BF5A0);

void CPools::SaveVehiclePool(unsigned char *buffer, unsigned int *outSize) {
    plugin::CallDynGlobal<unsigned char *, unsigned int *>(gaddrof(CPools::SaveVehiclePool), buffer, outSize);
}

int addrof(CPools::ShutDown) = ADDRESS_BY_VERSION(0x4C0070, 0x4C0090, 0x4BFF40);
int gaddrof(CPools::ShutDown) = GLOBAL_ADDRESS_BY_VERSION(0x4C0070, 0x4C0090, 0x4BFF40);

void CPools::ShutDown() {
    plugin::CallDynGlobal(gaddrof(CPools::ShutDown));
}
