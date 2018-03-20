/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/

#include "CTaskComplexLeaveCar.h"

CTaskComplexLeaveCar::CTaskComplexLeaveCar(CVehicle* pTargetVehicle, int nTargetDoor, int nDelayTime, bool bSensibleLeaveCar, bool bForceGetOut) : CTaskComplex(plugin::dummy)
{
    plugin::CallMethod<0x63B8C0, CTaskComplexLeaveCar*, CVehicle*, int, int, bool, bool>
        (this, pTargetVehicle, nTargetDoor, nDelayTime, bSensibleLeaveCar, bForceGetOut);
}
