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

	CVehicle *pVeh;
	int DoorId;
	char flag;
	char field_11;
	char field_12;
	char field_13;
	char field_14;
	char field_15;
	char pad[2];

	CTaskSimpleCarSetPedOut(CVehicle *pVehicle, int DoorId, bool arg1);

};

VALIDATE_SIZE(CTaskSimpleCarSetPedOut, 0x18);
