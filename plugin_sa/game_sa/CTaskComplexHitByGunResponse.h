#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexHitByGunResponse : public CTaskComplex {
protected:
    CTaskComplexHitByGunResponse(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexHitByGunResponse, 0x);