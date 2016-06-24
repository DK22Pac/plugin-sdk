#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexSmartFleeEntity : public CTaskComplex {
protected:
    CTaskComplexSmartFleeEntity(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexSmartFleeEntity, 0x);