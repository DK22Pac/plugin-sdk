/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleCarSetPedInAsDriver.h"

CTaskSimpleCarSetPedInAsDriver::CTaskSimpleCarSetPedInAsDriver(CVehicle *pTargetVehicle, CTaskUtilityLineUpPedWithCar *pUtility) : CTaskSimple(plugin::dummy) {
    ((void(__thiscall *)(CTaskSimpleCarSetPedInAsDriver*,CVehicle*, CTaskUtilityLineUpPedWithCar*))0x6470E0)(this, pTargetVehicle, pUtility);
}

