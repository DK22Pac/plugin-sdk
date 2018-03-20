/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/

#include "CTaskComplexEnterBoatAsDriver.h"

CTaskComplexEnterBoatAsDriver::CTaskComplexEnterBoatAsDriver(CVehicle* pTargetVehicle) : CTaskComplex(plugin::dummy)
{
    plugin::CallMethod<0x63B5E0, CTaskComplexEnterBoatAsDriver*, CVehicle*>(this, pTargetVehicle);
}
