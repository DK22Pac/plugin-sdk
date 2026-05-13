/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CPed.h"

class PLUGIN_API CTaskUtilityLineUpPedWithCar
{
public:

	CVector* pCoords;
	float field_4;
	int field_8;
	int field_c;
	int time;
	int field_14;
	int pCTaskSimpleVtable;

	CTaskUtilityLineUpPedWithCar(CVector const &Vector, int nTime, int arg3, int arg4 );   
	CVector* GetLocalPositionToOpenCarDoor(int unused, CVehicle* pVehicle, float arg3, CAnimBlendAssociation* pAnimBlendAssoc);
    void ProcessPed(CPed* pPed, CVehicle* pVehicle, CAnimBlendAssociation* pAnimBlendAssoc);
    RwV3d* GetPositionToOpenCarDoor(int unused, CVehicle* pVehicle, float arg2, CAnimBlendAssociation* pAnimBlendAssoc);
};
VALIDATE_OFFSET(CTaskUtilityLineUpPedWithCar, pCoords, 0x0);
VALIDATE_OFFSET(CTaskUtilityLineUpPedWithCar, field_4, 0x4);
VALIDATE_OFFSET(CTaskUtilityLineUpPedWithCar, field_8, 0x8);
VALIDATE_OFFSET(CTaskUtilityLineUpPedWithCar, field_c, 0xC);
VALIDATE_OFFSET(CTaskUtilityLineUpPedWithCar, time, 0x10);
VALIDATE_OFFSET(CTaskUtilityLineUpPedWithCar, field_14, 0x14);
VALIDATE_OFFSET(CTaskUtilityLineUpPedWithCar, pCTaskSimpleVtable, 0x18);
VALIDATE_SIZE(CTaskUtilityLineUpPedWithCar, 0x1C);