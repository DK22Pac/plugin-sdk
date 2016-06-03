#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexDriveFireTruck : public CTaskComplex {
protected:
    CTaskComplexDriveFireTruck(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexDriveFireTruck, 0x);