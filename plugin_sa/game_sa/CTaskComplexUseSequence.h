#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexUseSequence : public CTaskComplex {
protected:
    CTaskComplexUseSequence(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexUseSequence, 0x);