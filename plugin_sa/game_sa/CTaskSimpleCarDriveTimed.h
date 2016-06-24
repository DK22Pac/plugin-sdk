#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleCarDrive.h"

class PLUGIN_API CTaskSimpleCarDriveTimed : public CTaskSimpleCarDrive {
protected:
    CTaskSimpleCarDriveTimed(plugin::dummy_func_t a) : CTaskSimpleCarDrive(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCarDriveTimed, 0x);