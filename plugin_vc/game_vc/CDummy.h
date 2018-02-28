/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
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