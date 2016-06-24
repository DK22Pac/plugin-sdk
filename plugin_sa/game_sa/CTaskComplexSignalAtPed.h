#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexSignalAtPed : public CTaskComplex {
protected:
    CTaskComplexSignalAtPed(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexSignalAtPed, 0x);