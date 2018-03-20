/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleCarSetPedOut.h"

CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut(CVehicle *pTargetVehicle, int nTargetDoor, bool bSwitchOffEngine) 
    : CTaskSimple(plugin::dummy) 
{
    plugin::CallMethod<0x6478B0, CTaskSimpleCarSetPedOut*, CVehicle*, int, bool>(this, pTargetVehicle, nTargetDoor, bSwitchOffEngine);
}
