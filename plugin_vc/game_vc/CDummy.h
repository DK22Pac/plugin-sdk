/***********************************************************************************/
/*******         This file is a part of GTA Vice City C++ SDK               ********/
/*******                                                                    ********/
/***********************************************************************************/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "CEntity.h"
#include "CEntryInfoList.h"

class CDummy : public CEntity {
protected:
    CDummy(plugin::dummy_func_t) : CEntity(plugin::dummy) {}
public:

    CEntryInfoList m_collisionList;

    static void* operator new(unsigned int size);
    CDummy();

    CDummy(const CDummy &) = delete;
    CDummy &operator=(const CDummy &) = delete;
};

VALIDATE_SIZE(CDummy, 0x68);

bool IsDummyPointerValid(CDummy* dummy);