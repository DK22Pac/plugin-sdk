/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexDriveFireTruck : public CTaskComplex {
protected:
	CTaskComplexDriveFireTruck(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:

	CTaskComplexDriveFireTruck(CVehicle* pFiretruck, CPed *pFireman, bool isPassenger);

};
