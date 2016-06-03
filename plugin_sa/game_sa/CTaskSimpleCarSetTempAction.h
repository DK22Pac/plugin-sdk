#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimpleCarDrive.h"

class PLUGIN_API CTaskSimpleCarSetTempAction : public CTaskSimpleCarDrive {
protected:
    CTaskSimpleCarSetTempAction(plugin::dummy_func_t a) : CTaskSimpleCarDrive(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCarSetTempAction, 0x);