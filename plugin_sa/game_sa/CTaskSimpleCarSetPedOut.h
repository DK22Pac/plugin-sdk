/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CVehicle.h"

class PLUGIN_API CTaskSimpleCarSetPedOut : public CTaskSimple {
protected:
	CTaskSimpleCarSetPedOut(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    CVehicle* m_pTargetVehicle;
    int m_nTargetDoor; 
    bool m_bSwitchOffEngine; 
    bool m_bWarpingOutOfCar;
    bool m_bFallingOutOfCar;	// jumping or falling off car or bike
    bool m_bKnockedOffBike;
    unsigned char m_nDoorFlagsToClear;
    unsigned char m_nNumGettingInToClear;
private:
    char pad[2];
public:

	CTaskSimpleCarSetPedOut(CVehicle *pTargetVehicle, int nTargetDoor, bool bSwitchOffEngine);

};
VALIDATE_OFFSET(CTaskSimpleCarSetPedOut, m_pTargetVehicle, 0x8);
VALIDATE_OFFSET(CTaskSimpleCarSetPedOut, m_nTargetDoor, 0xC);
VALIDATE_OFFSET(CTaskSimpleCarSetPedOut, m_bSwitchOffEngine, 0x10);
VALIDATE_OFFSET(CTaskSimpleCarSetPedOut, m_bWarpingOutOfCar, 0x11);
VALIDATE_OFFSET(CTaskSimpleCarSetPedOut, m_bFallingOutOfCar, 0x12);
VALIDATE_OFFSET(CTaskSimpleCarSetPedOut, m_bKnockedOffBike, 0x13);
VALIDATE_OFFSET(CTaskSimpleCarSetPedOut, m_nDoorFlagsToClear, 0x14);
VALIDATE_OFFSET(CTaskSimpleCarSetPedOut, m_nNumGettingInToClear, 0x15);
VALIDATE_SIZE(CTaskSimpleCarSetPedOut, 0x18);

