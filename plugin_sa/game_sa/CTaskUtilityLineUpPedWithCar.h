/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"
#include "CPed.h"

class PLUGIN_API CTaskUtilityLineUpPedWithCar : public CTaskSimple {
protected:
    CTaskUtilityLineUpPedWithCar(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
	CTaskUtilityLineUpPedWithCar(CVector const &Vector, int nTime, int arg3, int arg4 );   
	CVector* GetLocalPositionToOpenCarDoor(int unused, CVehicle* pVehicle, float arg3, CAnimBlendAssociation* pAnimBlendAssoc);
    void ProcessPed(CPed* pPed, CVehicle* pVehicle, CAnimBlendAssociation* pAnimBlendAssoc);
    RwV3d* GetPositionToOpenCarDoor(int unused, CVehicle* pVehicle, float arg2, CAnimBlendAssociation* pAnimBlendAssoc);
};

//VALIDATE_SIZE(CTaskUtilityLineUpPedWithCar, 0x);