#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexCarDrive.h"

class PLUGIN_API CTaskComplexCarDriveMission : public CTaskComplexCarDrive {
protected:
    CTaskComplexCarDriveMission(plugin::dummy_func_t a) : CTaskComplexCarDrive(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexCarDriveMission, 0x);