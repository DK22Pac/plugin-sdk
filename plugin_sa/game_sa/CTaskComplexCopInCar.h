/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"
#include "CVehicle.h"
#include "CPed.h"

class PLUGIN_API CTaskComplexCopInCar : public CTaskComplex {
protected:
    CTaskComplexCopInCar(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    CVehicle *pVehicle;
    CPed *pPed1;
    CPed *pPed2;
    int field_18;
	int field_1C;
    char field_20;
    char field_21;
private:
    char gap[2];
public:
	int field_24;
	int field_28;
    char field_2C;
    char field_2D;
    char field_2E;
    char field_2F;

    CTaskComplexCopInCar(CVehicle* arg0, CPed* arg1, CPed* arg2, bool arg3);
};

VALIDATE_SIZE(CTaskComplexCopInCar, 0x30);
