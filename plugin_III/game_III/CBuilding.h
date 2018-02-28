/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"

class CBuilding : public CEntity {
protected:
    CBuilding(plugin::dummy_func_t) : CEntity(plugin::dummy) {}
public:
    //vtable
    class CTreadable* GetIsATreadable();

    //funcs
    CBuilding();
    void ReplaceWithNewModel(int modelIndex);
    static void* operator new(unsigned int size);
    static void operator delete(void* data);

    CBuilding(const CBuilding &) = delete;
    CBuilding &operator=(const CBuilding &) = delete;
};

VALIDATE_SIZE(CBuilding, 0x64);