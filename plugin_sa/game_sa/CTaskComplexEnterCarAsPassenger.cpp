/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexEnterCarAsPassenger.h"

CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(CVehicle* pTargetVehicle, int nTargetSeat, bool bCarryOnAfterFallingOff) : CTaskComplexEnterCar(plugin::dummy)
{
    plugin::CallMethod<0x640340, CTaskComplexEnterCarAsPassenger*, CVehicle*,int,bool>
        (this, pTargetVehicle,nTargetSeat,bCarryOnAfterFallingOff);
}
