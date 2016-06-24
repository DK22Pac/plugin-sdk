#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleAchieveHeading : public CTaskSimple {
protected:
    CTaskSimpleAchieveHeading(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleAchieveHeading, 0x);