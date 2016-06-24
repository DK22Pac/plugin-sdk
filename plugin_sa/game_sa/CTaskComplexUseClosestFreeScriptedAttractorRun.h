#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexUseClosestFreeScriptedAttractor.h"

class PLUGIN_API CTaskComplexUseClosestFreeScriptedAttractorRun : public CTaskComplexUseClosestFreeScriptedAttractor {
protected:
    CTaskComplexUseClosestFreeScriptedAttractorRun(plugin::dummy_func_t a) : CTaskComplexUseClosestFreeScriptedAttractor(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexUseClosestFreeScriptedAttractorRun, 0x);