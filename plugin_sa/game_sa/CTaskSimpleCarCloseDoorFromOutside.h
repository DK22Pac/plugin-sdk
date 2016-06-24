#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleCarCloseDoorFromOutside : public CTaskSimple {
protected:
    CTaskSimpleCarCloseDoorFromOutside(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCarCloseDoorFromOutside, 0x);