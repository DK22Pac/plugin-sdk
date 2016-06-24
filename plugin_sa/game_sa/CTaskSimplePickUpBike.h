#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimplePickUpBike : public CTaskSimple {
protected:
    CTaskSimplePickUpBike(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimplePickUpBike, 0x);