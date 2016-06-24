#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexEvasiveDiveAndGetUp.h"

class PLUGIN_API CTaskComplexDiveFromAttachedEntityAndGetUp : public CTaskComplexEvasiveDiveAndGetUp {
protected:
    CTaskComplexDiveFromAttachedEntityAndGetUp(plugin::dummy_func_t a) : CTaskComplexEvasiveDiveAndGetUp(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexDiveFromAttachedEntityAndGetUp, 0x);