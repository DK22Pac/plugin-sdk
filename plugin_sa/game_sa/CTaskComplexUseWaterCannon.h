#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexUseWaterCannon : public CTaskComplex {
protected:
    CTaskComplexUseWaterCannon(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexUseWaterCannon, 0x);