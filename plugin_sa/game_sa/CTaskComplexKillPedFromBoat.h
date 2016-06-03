#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexKillPedFromBoat : public CTaskComplex {
protected:
    CTaskComplexKillPedFromBoat(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexKillPedFromBoat, 0x);