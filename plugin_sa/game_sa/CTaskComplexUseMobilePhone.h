#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexUseMobilePhone : public CTaskComplex {
protected:
    CTaskComplexUseMobilePhone(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexUseMobilePhone, 0x);