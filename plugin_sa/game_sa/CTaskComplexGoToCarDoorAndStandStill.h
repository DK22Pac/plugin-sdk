#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexGoToCarDoorAndStandStill : public CTaskComplex {
protected:
    CTaskComplexGoToCarDoorAndStandStill(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexGoToCarDoorAndStandStill, 0x);