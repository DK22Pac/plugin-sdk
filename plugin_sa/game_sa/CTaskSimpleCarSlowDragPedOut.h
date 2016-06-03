#pragma once

#include "plbase/PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleCarSlowDragPedOut : public CTaskSimple {
protected:
    CTaskSimpleCarSlowDragPedOut(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCarSlowDragPedOut, 0x);