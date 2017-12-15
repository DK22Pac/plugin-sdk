/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPools.h"

CPool<CBuilding>  *&CPools::ms_pBuildingPool =  *(CPool<CBuilding> **)0x97F240;
CPool<CTreadable> *&CPools::ms_pTreadablePool = *(CPool<CTreadable> **)0x978834;
CPool<CEntryInfoNode> *&CPools::ms_pEntryInfoNodePool = *(CPool<CEntryInfoNode> **)0xA0D8BC;
CPool<CPtrNode> *&CPools::ms_pPtrNodePool = *(CPool<CPtrNode> **)0xA0FD38;
CPool<CVehicle, CAutomobile> *&CPools::ms_pVehiclePool = *(CPool<CVehicle, CAutomobile> **)0xA0FDE4;
CPool<CPed, CPlayerPed> *&CPools::ms_pPedPool = *(CPool<CPed, CPlayerPed> **)0x97F2AC;
CPool<CObject, CCutsceneObject> *&CPools::ms_pObjectPool = *(CPool<CObject, CCutsceneObject> **)0x94DBE0;
CPool<CGarage> *&CPools::ms_pGaragePool = *(CPool<CGarage> **)0x812668;

// Converted from cdecl void CPools::MakeSureSlotInObjectPoolIsEmpty(int slot) 0x4BEA80
void CPools::MakeSureSlotInObjectPoolIsEmpty(int slot) {
    plugin::Call<0x4BEA80, int>(slot);
}

// Converted from cdecl void CPools::LoadPedPool(uchar *buffer,uint size) 0x4BEB50
void CPools::LoadPedPool(unsigned char* buffer, unsigned int size) {
    plugin::Call<0x4BEB50, unsigned char*, unsigned int>(buffer, size);
}

// Converted from cdecl void CPools::SavePedPool(uchar *buffer,uint *outSize) 0x4BEDC0
void CPools::SavePedPool(unsigned char* buffer, unsigned int* outSize) {
    plugin::Call<0x4BEDC0, unsigned char*, unsigned int*>(buffer, outSize);
}

// Converted from cdecl void CPools::LoadObjectPool(uchar *buffer,uint size) 0x4BEF70
void CPools::LoadObjectPool(unsigned char* buffer, unsigned int size) {
    plugin::Call<0x4BEF70, unsigned char*, unsigned int>(buffer, size);
}

// Converted from cdecl void CPools::SaveObjectPool(uchar *buffer,uint *outSize) 0x4BF420
void CPools::SaveObjectPool(unsigned char* buffer, unsigned int* outSize) {
    plugin::Call<0x4BF420, unsigned char*, unsigned int*>(buffer, outSize);
}

// Converted from cdecl void CPools::SaveVehiclePool(uchar *buffer,uint *outSize) 0x4BF6D0
void CPools::SaveVehiclePool(unsigned char* buffer, unsigned int* outSize) {
    plugin::Call<0x4BF6D0, unsigned char*, unsigned int*>(buffer, outSize);
}

// Converted from cdecl void CPools::LoadVehiclePool(uchar *buffer,uint size) 0x4BF9A0
void CPools::LoadVehiclePool(unsigned char* buffer, unsigned int size) {
    plugin::Call<0x4BF9A0, unsigned char*, unsigned int>(buffer, size);
}

// Converted from cdecl CObject* CPools::GetObject(int handle) 0x4BFF80
CObject* CPools::GetObject(int handle) {
    return plugin::CallAndReturn<CObject*, 0x4BFF80, int>(handle);
}

// Converted from cdecl int CPools::GetObjectRef(CObject *object) 0x4BFFA0
int CPools::GetObjectRef(CObject* object) {
    return plugin::CallAndReturn<int, 0x4BFFA0, CObject*>(object);
}

// Converted from cdecl CVehicle* CPools::GetVehicle(int handle) 0x4BFFC0
CVehicle* CPools::GetVehicle(int handle) {
    return plugin::CallAndReturn<CVehicle*, 0x4BFFC0, int>(handle);
}

// Converted from cdecl int CPools::GetVehicleRef(CVehicle *vehicle) 0x4BFFE0
int CPools::GetVehicleRef(CVehicle* vehicle) {
    return plugin::CallAndReturn<int, 0x4BFFE0, CVehicle*>(vehicle);
}

// Converted from cdecl CPed* CPools::GetPed(int handle) 0x4C0000
CPed* CPools::GetPed(int handle) {
    return plugin::CallAndReturn<CPed*, 0x4C0000, int>(handle);
}

// Converted from cdecl int CPools::GetPedRef(CPed *ped) 0x4C0020
int CPools::GetPedRef(CPed* ped) {
    return plugin::CallAndReturn<int, 0x4C0020, CPed*>(ped);
}

// Converted from cdecl void CPools::CheckPoolsEmpty(void) 0x4C0040
void CPools::CheckPoolsEmpty() {
    plugin::Call<0x4C0040>();
}

// Converted from cdecl void CPools::ShutDown(void) 0x4C0070
void CPools::ShutDown() {
    plugin::Call<0x4C0070>();
}

// Converted from cdecl void CPools::Initialise(void) 0x4C0270
void CPools::Initialise() {
    plugin::Call<0x4C0270>();
}