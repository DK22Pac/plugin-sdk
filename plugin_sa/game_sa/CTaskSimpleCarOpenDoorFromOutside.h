#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleCarOpenDoorFromOutside : public CTaskSimple {
protected:
    CTaskSimpleCarOpenDoorFromOutside(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCarOpenDoorFromOutside, 0x);