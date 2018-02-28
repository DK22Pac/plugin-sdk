/*
    Plugin-SDK (Grand Theft Auto 3) header file
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

    //funcs
    CDummy();
    static void* operator new(unsigned int size);
    static void operator delete(void* data);

    CDummy(const CDummy &) = delete;
    CDummy &operator=(const CDummy &) = delete;
};

VALIDATE_SIZE(CDummy, 0x68);