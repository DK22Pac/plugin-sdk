#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexEnterAnyCarAsDriver : public CTaskComplex {
protected:
    CTaskComplexEnterAnyCarAsDriver(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexEnterAnyCarAsDriver, 0x);