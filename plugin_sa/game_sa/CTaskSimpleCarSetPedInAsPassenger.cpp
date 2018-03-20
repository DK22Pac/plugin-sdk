/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleCarSetPedInAsPassenger.h"

CTaskSimpleCarSetPedInAsPassenger::CTaskSimpleCarSetPedInAsPassenger(CVehicle *pTargetVehicle, int nTargetDoor, 
    CTaskUtilityLineUpPedWithCar *pUtility) : CTaskSimple(plugin::dummy) 
{
    plugin::CallMethod<0x646FE0, CTaskSimpleCarSetPedInAsPassenger*, CVehicle*, int, CTaskUtilityLineUpPedWithCar*>
        (this,pTargetVehicle, nTargetDoor, pUtility);
}



