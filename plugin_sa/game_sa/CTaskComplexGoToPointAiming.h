#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexGoToPointAiming : public CTaskComplex {
protected:
    CTaskComplexGoToPointAiming(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexGoToPointAiming, 0x);