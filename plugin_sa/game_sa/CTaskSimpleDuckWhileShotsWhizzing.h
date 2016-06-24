#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleDuck.h"

class PLUGIN_API CTaskSimpleDuckWhileShotsWhizzing : public CTaskSimpleDuck {
protected:
    CTaskSimpleDuckWhileShotsWhizzing(plugin::dummy_func_t a) : CTaskSimpleDuck(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleDuckWhileShotsWhizzing, 0x);