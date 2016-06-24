#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleTogglePedThreatScanner : public CTaskSimple {
protected:
    CTaskSimpleTogglePedThreatScanner(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleTogglePedThreatScanner, 0x);