/***********************************************************************************/
/*******         This file is a part of GTA Vice City C++ SDK               ********/
/*******                                                                    ********/
/***********************************************************************************/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "CEntity.h"

class CBuilding : public CEntity {
protected:
    CBuilding(plugin::dummy_func_t) : CEntity(plugin::dummy) {}
public:
    //vtable

    class CTreadable* GetIsATreadable();

    //funcs

    void ReplaceWithNewModel(int modelIndex);

    static void* operator new(unsigned int size);

    CBuilding();

    CBuilding(const CBuilding &) = delete;
    CBuilding &operator=(const CBuilding &) = delete;
};

VALIDATE_SIZE(CBuilding, 0x64);

bool IsBuildingPointerValid(CBuilding* building);