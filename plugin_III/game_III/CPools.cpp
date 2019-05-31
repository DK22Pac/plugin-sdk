/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPools.h"

CPool<CBuilding>  *&CPools::ms_pBuildingPool =  *(CPool<CBuilding> **)0x8F2C04; 
CPool<CTreadable> *&CPools::ms_pTreadablePool = *(CPool<CTreadable> **)0x8F2568; 
CPool<CEntryInfoNode> *&CPools::ms_pEntryInfoNodePool = *(CPool<CEntryInfoNode> **)0x941448; 
CPool<CPtrNode> *&CPools::ms_pPtrNodePool = *(CPool<CPtrNode> **)0x943044; 
CPool<CVehicle, CAutomobile> *&CPools::ms_pVehiclePool = *(CPool<CVehicle, CAutomobile> **)0x9430DC;
CPool<CPed, CPlayerPed> *&CPools::ms_pPedPool = *(CPool<CPed, CPlayerPed> **)0x8F2C60; 
CPool<CObject, CCutsceneHead> *&CPools::ms_pObjectPool = *(CPool<CObject, CCutsceneHead> **)0x880E28;
CPool<CDummy, CDummyObject>  *&CPools::ms_pDummyPool = *(CPool<CDummy, CDummyObject> **)0x8F2C18;
CPool<cAudioScriptObject>  *&CPools::ms_pAudioScriptObjectPool = *(CPool<cAudioScriptObject> **)0x8F1B6C;

// Converted from cdecl void CPools::Initialise(void) 0x4A1770
void CPools::Initialise() {
    plugin::Call<0x4A1770>();
}

// Converted from cdecl void CPools::ShutDown(void) 0x4A1880
void CPools::ShutDown() {
    plugin::Call<0x4A1880>();
}

// Converted from cdecl void CPools::CheckPoolsEmpty(void) 0x4A1A50
void CPools::CheckPoolsEmpty() {
    plugin::Call<0x4A1A50>();
}

// Converted from cdecl int CPools::GetPedRef(CPed *ped) 0x4A1A80
int CPools::GetPedRef(CPed* ped) {
    return plugin::CallAndReturn<int, 0x4A1A80, CPed*>(ped);
}

// Converted from cdecl CPed* CPools::GetPed(int handle) 0x4A1AA0
CPed* CPools::GetPed(int handle) {
    return plugin::CallAndReturn<CPed*, 0x4A1AA0, int>(handle);
}

// Converted from cdecl int CPools::GetVehicleRef(CVehicle *vehicle) 0x4A1AC0
int CPools::GetVehicleRef(CVehicle* vehicle) {
    return plugin::CallAndReturn<int, 0x4A1AC0, CVehicle*>(vehicle);
}

// Converted from cdecl CVehicle* CPools::GetVehicle(int handle) 0x4A1AE0
CVehicle* CPools::GetVehicle(int handle) {
    return plugin::CallAndReturn<CVehicle*, 0x4A1AE0, int>(handle);
}

// Converted from cdecl int CPools::GetObjectRef(CObject *object) 0x4A1B00
int CPools::GetObjectRef(CObject* object) {
    return plugin::CallAndReturn<int, 0x4A1B00, CObject*>(object);
}

// Converted from cdecl CObject* CPools::GetObject(int handle) 0x4A1B20
CObject* CPools::GetObject(int handle) {
    return plugin::CallAndReturn<CObject*, 0x4A1B20, int>(handle);
}

// Converted from cdecl void CPools::LoadVehiclePool(uchar *buffer,uint size) 0x4A1B40
void CPools::LoadVehiclePool(unsigned char* buffer, unsigned int size) {
    plugin::Call<0x4A1B40, unsigned char*, unsigned int>(buffer, size);
}

// Converted from cdecl void CPools::SaveVehiclePool(uchar *buffer,uint *outSize) 0x4A2080
void CPools::SaveVehiclePool(unsigned char* buffer, unsigned int* outSize) {
    plugin::Call<0x4A2080, unsigned char*, unsigned int*>(buffer, outSize);
}

// Converted from cdecl void CPools::SaveObjectPool(uchar *buffer,uint *outSize) 0x4A22D0
void CPools::SaveObjectPool(unsigned char* buffer, unsigned int* outSize) {
    plugin::Call<0x4A22D0, unsigned char*, unsigned int*>(buffer, outSize);
}

// Converted from cdecl void CPools::LoadObjectPool(uchar *buffer,uint size) 0x4A2550
void CPools::LoadObjectPool(unsigned char* buffer, unsigned int size) {
    plugin::Call<0x4A2550, unsigned char*, unsigned int>(buffer, size);
}

// Converted from cdecl void CPools::SavePedPool(uchar *buffer,uint *outSize) 0x4A29B0
void CPools::SavePedPool(unsigned char* buffer, unsigned int* outSize) {
    plugin::Call<0x4A29B0, unsigned char*, unsigned int*>(buffer, outSize);
}

// Converted from cdecl void CPools::LoadPedPool(uchar *buffer,uint size) 0x4A2B50
void CPools::LoadPedPool(unsigned char* buffer, unsigned int size) {
    plugin::Call<0x4A2B50, unsigned char*, unsigned int>(buffer, size);
}

// Converted from cdecl void CPools::MakeSureSlotInObjectPoolIsEmpty(int slot) 0x4A2DB0
void CPools::MakeSureSlotInObjectPoolIsEmpty(int slot) {
    plugin::Call<0x4A2DB0, int>(slot);
}