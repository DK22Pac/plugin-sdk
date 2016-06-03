#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexEvasiveDiveAndGetUp : public CTaskComplex {
protected:
    CTaskComplexEvasiveDiveAndGetUp(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexEvasiveDiveAndGetUp, 0x);