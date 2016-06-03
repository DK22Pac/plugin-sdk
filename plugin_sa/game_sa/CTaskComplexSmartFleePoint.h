#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexSmartFleePoint : public CTaskComplex {
protected:
    CTaskComplexSmartFleePoint(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexSmartFleePoint, 0x);