#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexPartner.h"

class PLUGIN_API CTaskComplexPartnerDeal : public CTaskComplexPartner {
protected:
    CTaskComplexPartnerDeal(plugin::dummy_func_t a) : CTaskComplexPartner(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexPartnerDeal, 0x);