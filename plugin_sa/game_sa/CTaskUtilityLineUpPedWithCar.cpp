/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskUtilityLineUpPedWithCar.h"

CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(CVector const &Vector, int nTime, int arg3, int arg4) {
    ((void(__thiscall *)(CTaskUtilityLineUpPedWithCar *,CVector const &, int, int, int))0x64FBB0)(this, Vector, nTime, arg3, arg4);
}

// Converted from thiscall CVector* CTaskUtilityLineUpPedWithCar::GetLocalPositionToOpenCarDoor(int unused , CVehicle *pVehicle, float arg3,CAnimBlendAssociation *pAnimBlendAssoc) 0x64FC10 
CVector* CTaskUtilityLineUpPedWithCar::GetLocalPositionToOpenCarDoor(int unused, CVehicle* pVehicle, float arg3, CAnimBlendAssociation* pAnimBlendAssoc) {
    return plugin::CallMethodAndReturn<CVector*, 0x64FC10, CTaskUtilityLineUpPedWithCar *, int, CVehicle*, float, CAnimBlendAssociation*>(this, unused, pVehicle, arg3, pAnimBlendAssoc);
}

// Converted from thiscall void CTaskUtilityLineUpPedWithCar::ProcessPed(CPed *pPed,CVehicle *pVehicle,CAnimBlendAssociation *pAnimBlendAssoc) 0x6513A0 
void CTaskUtilityLineUpPedWithCar::ProcessPed(CPed* pPed, CVehicle* pVehicle, CAnimBlendAssociation* pAnimBlendAssoc) {
    plugin::CallMethod<0x6513A0, CTaskUtilityLineUpPedWithCar *, CPed*, CVehicle*, CAnimBlendAssociation*>(this, pPed, pVehicle, pAnimBlendAssoc);
}

// Converted from thiscall RwV3d* CTaskUtilityLineUpPedWithCar::GetPositionToOpenCarDoor(int unused, CVehicle *pVehicle,float arg2,CAnimBlendAssociation *pAnimBlendAssoc) 0x650A80 
RwV3d* CTaskUtilityLineUpPedWithCar::GetPositionToOpenCarDoor(int unused, CVehicle* pVehicle, float arg2, CAnimBlendAssociation* pAnimBlendAssoc) {
	return plugin::CallMethodAndReturn<RwV3d*, 0x650A80, CTaskUtilityLineUpPedWithCar *, int, CVehicle*, float, CAnimBlendAssociation*>(this, unused, pVehicle, arg2, pAnimBlendAssoc);
}


