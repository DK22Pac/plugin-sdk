#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskInteriorSitAtDesk : public CTaskSimple {
protected:
    CTaskInteriorSitAtDesk(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskInteriorSitAtDesk, 0x);