/*
    Plugin-SDK (Grand Theft Auto San Andreas Unreal) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPools.h"

CPedPool*& CPools::ms_pPedPool = *gpatternt(CPedPool*, "48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 8B 74 24", 3);
CVehiclePool*& CPools::ms_pVehiclePool = *gpatternt(CVehiclePool*, "48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 8B 74 24", 3);
CObjectPool*& CPools::ms_pObjectPool = *gpatternt(CObjectPool*, "48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 89 35 ? ? ? ? 48 8B 74 24", 3);

CPed* CPools::GetPed(int32_t handle) {
    return ms_pPedPool->GetAtRef(handle);
}

CVehicle* CPools::GetVehicle(int32_t handle) {
    return ms_pVehiclePool->GetAtRef(handle);
}

CObject* CPools::GetObject(int32_t handle) {
    return ms_pObjectPool->GetAtRef(handle);
}

int32_t CPools::GetPedRef(CPed* ped) {
    return ms_pPedPool->GetRef(ped);
}

int32_t CPools::GetVehicleRef(CVehicle* vehicle) {
    return ms_pVehiclePool->GetRef(vehicle);
}

int32_t CPools::GetObjectRef(CObject* object) {
    return ms_pObjectPool->GetRef(object);
}
