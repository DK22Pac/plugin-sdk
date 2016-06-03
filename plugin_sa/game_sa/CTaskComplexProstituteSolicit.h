#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexProstituteSolicit : public CTaskComplex {
protected:
    CTaskComplexProstituteSolicit(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexProstituteSolicit, 0x);