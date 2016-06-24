#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexKillPedOnFoot.h"

class PLUGIN_API CTaskComplexKillPedOnFootStealth : public CTaskComplexKillPedOnFoot {
protected:
    CTaskComplexKillPedOnFootStealth(plugin::dummy_func_t a) : CTaskComplexKillPedOnFoot(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexKillPedOnFootStealth, 0x);