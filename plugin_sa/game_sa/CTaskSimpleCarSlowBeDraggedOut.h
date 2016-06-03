#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleCarSlowBeDraggedOut : public CTaskSimple {
protected:
    CTaskSimpleCarSlowBeDraggedOut(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCarSlowBeDraggedOut, 0x);