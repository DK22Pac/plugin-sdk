#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexAttractorPartnerWait : public CTaskComplex {
protected:
    CTaskComplexAttractorPartnerWait(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexAttractorPartnerWait, 0x);