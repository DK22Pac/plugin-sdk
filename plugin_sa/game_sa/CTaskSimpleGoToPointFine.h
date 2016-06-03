#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimpleGoTo.h"

class PLUGIN_API CTaskSimpleGoToPointFine : public CTaskSimpleGoTo {
protected:
    CTaskSimpleGoToPointFine(plugin::dummy_func_t a) : CTaskSimpleGoTo(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleGoToPointFine, 0x);