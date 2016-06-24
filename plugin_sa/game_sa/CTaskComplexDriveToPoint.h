#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexCarDrive.h"

class PLUGIN_API CTaskComplexDriveToPoint : public CTaskComplexCarDrive {
protected:
    CTaskComplexDriveToPoint(plugin::dummy_func_t a) : CTaskComplexCarDrive(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexDriveToPoint, 0x);