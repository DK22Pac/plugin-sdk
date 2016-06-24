#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleCarSetPedSlowDraggedOut : public CTaskSimple {
protected:
    CTaskSimpleCarSetPedSlowDraggedOut(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCarSetPedSlowDraggedOut, 0x);