/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexEnterCar.h"

CTaskComplexEnterCar::CTaskComplexEnterCar(CVehicle* pTargetVehicle, bool bAsDriver, bool bQuitAfterOpeningDoor,
    bool bQuitAfterDraggingPedOut, bool bCarryOnAfterFallingOff) : CTaskComplex(plugin::dummy)
{
    plugin::CallMethod<0x63A220, CTaskComplexEnterCar*, CVehicle*, bool, bool, bool, bool>
        (this, pTargetVehicle, bAsDriver, bQuitAfterOpeningDoor, bQuitAfterDraggingPedOut, bCarryOnAfterFallingOff);
}
