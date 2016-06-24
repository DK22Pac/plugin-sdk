/***********************************************************************************/
/*******         This file is a part of GTA Vice City C++ SDK               ********/
/*******                                                                    ********/
/***********************************************************************************/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "CBuilding.h"

class CTreadable : public CBuilding {
public:
    //funcs

    static void* operator new(unsigned int size);
    CTreadable();

    CTreadable(const CTreadable &) = delete;
    CTreadable &operator=(const CTreadable &) = delete;
};

VALIDATE_SIZE(CTreadable, 0x64);