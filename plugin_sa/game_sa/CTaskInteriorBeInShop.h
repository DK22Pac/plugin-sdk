#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexWander.h"

class PLUGIN_API CTaskInteriorBeInShop : public CTaskComplexWander {
protected:
    CTaskInteriorBeInShop(plugin::dummy_func_t a) : CTaskComplexWander(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskInteriorBeInShop, 0x);