#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimpleGoTo.h"

class PLUGIN_API CTaskSimpleGoToPoint : public CTaskSimpleGoTo {
protected:
    CTaskSimpleGoToPoint(plugin::dummy_func_t a) : CTaskSimpleGoTo(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleGoToPoint, 0x);