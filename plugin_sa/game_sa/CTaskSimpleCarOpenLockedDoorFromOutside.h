#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleCarOpenLockedDoorFromOutside : public CTaskSimple {
protected:
    CTaskSimpleCarOpenLockedDoorFromOutside(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCarOpenLockedDoorFromOutside, 0x);