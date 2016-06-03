#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexPartner.h"

class PLUGIN_API CTaskComplexPartnerShove : public CTaskComplexPartner {
protected:
    CTaskComplexPartnerShove(plugin::dummy_func_t a) : CTaskComplexPartner(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexPartnerShove, 0x);