#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexSeekEntityAiming : public CTaskComplex {
protected:
    CTaskComplexSeekEntityAiming(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexSeekEntityAiming, 0x);