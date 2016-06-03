#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleCarWaitToSlowDown : public CTaskSimple {
protected:
    CTaskSimpleCarWaitToSlowDown(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCarWaitToSlowDown, 0x);