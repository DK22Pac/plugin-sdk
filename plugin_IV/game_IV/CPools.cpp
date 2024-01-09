/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPools.h"
#include "Patch.h"

CPool<CObject>*& CPools::ms_pObjectsPool = *gpatternt(CPool<CObject>*, "A3 ? ? ? ? C3 C7 05 ? ? ? ? ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC 56 6A 01", 1);
CPool<CTask>*& CPools::ms_pTaskPool = *gpatternt(CPool<CTask>*, "A3 ? ? ? ? C3 C7 05 ? ? ? ? ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC F3 0F 10 41", 1);
CPool<CPed>*& CPools::ms_pPedPool = *gpatternt(CPool<CPed>*, "A1 ? ? ? ? F3 0F 11 7C 24 ? F3 0F 11 74 24", 1);
CPool<CCam>*& CPools::ms_pCamPool = *gpatternt(CPool<CCam>*, "A3 ? ? ? ? C3 C7 05 ? ? ? ? ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC CC CC CC 8B 91", 1);
CPool<CVehicle>*& CPools::ms_pVehiclePool = *gpatternt(CPool<CVehicle>*, "A3 ? ? ? ? C3 C7 05 ? ? ? ? ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC E8", 1);

int32_t CPools::GetPedRef(CPed* ped) {
    return ms_pPedPool->GetIndex(ped);
}

int32_t CPools::GetVehicleRef(CVehicle* veh) {
    return ms_pVehiclePool->GetIndex(veh);
}

int32_t CPools::GetObjectRef(CObject* obj) {
    return ms_pObjectsPool->GetIndex(obj);
}
