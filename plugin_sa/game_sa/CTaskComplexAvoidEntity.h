#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexAvoidEntity : public CTaskComplex {
protected:
    CTaskComplexAvoidEntity(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexAvoidEntity, 0x);