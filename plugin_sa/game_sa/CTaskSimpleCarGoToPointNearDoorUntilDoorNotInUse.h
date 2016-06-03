#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse : public CTaskSimple {
protected:
    CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse, 0x);