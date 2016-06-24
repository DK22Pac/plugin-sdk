#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexPartner.h"

class PLUGIN_API CTaskComplexPartnerGreet : public CTaskComplexPartner {
protected:
    CTaskComplexPartnerGreet(plugin::dummy_func_t a) : CTaskComplexPartner(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexPartnerGreet, 0x);