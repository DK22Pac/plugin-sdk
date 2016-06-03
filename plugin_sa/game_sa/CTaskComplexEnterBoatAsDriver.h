#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexEnterBoatAsDriver : public CTaskComplex {
protected:
    CTaskComplexEnterBoatAsDriver(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexEnterBoatAsDriver, 0x);