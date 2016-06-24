#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexCarDrive.h"

class PLUGIN_API CTaskComplexCarDriveWander : public CTaskComplexCarDrive {
protected:
    CTaskComplexCarDriveWander(plugin::dummy_func_t a) : CTaskComplexCarDrive(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexCarDriveWander, 0x);