#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexPartner.h"

class PLUGIN_API CTaskComplexPartnerChat : public CTaskComplexPartner {
protected:
    CTaskComplexPartnerChat(plugin::dummy_func_t a) : CTaskComplexPartner(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexPartnerChat, 0x);