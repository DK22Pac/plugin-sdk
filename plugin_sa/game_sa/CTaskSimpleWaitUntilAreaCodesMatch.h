#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimpleStandStill.h"

class PLUGIN_API CTaskSimpleWaitUntilAreaCodesMatch : public CTaskSimpleStandStill {
protected:
    CTaskSimpleWaitUntilAreaCodesMatch(plugin::dummy_func_t a) : CTaskSimpleStandStill(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleWaitUntilAreaCodesMatch, 0x);