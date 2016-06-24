#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexExtinguishFireOnFoot : public CTaskComplex {
protected:
    CTaskComplexExtinguishFireOnFoot(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexExtinguishFireOnFoot, 0x);