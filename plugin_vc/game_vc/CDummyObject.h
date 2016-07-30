/***********************************************************************************/
/*******         This file is a part of GTA Vice City C++ SDK               ********/
/*******                                                                    ********/
/***********************************************************************************/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "CDummy.h"

class CDummyObject : public CDummy {
public:
    CDummyObject(class CObject* object);
    CDummyObject();

    CDummyObject(const CDummyObject &) = delete;
    CDummyObject &operator=(const CDummyObject &) = delete;
};

VALIDATE_SIZE(CDummyObject, 0x68);