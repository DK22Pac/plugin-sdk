#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexGotoDoorAndOpen : public CTaskComplex {
protected:
    CTaskComplexGotoDoorAndOpen(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexGotoDoorAndOpen, 0x);