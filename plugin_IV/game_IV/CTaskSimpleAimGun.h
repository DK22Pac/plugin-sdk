/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CTaskSimple.h"

class CEntity;

class CTaskSimpleAimGun : public CTaskSimple {
public:
    uint8_t field_1[40];
    uint32_t m_nFlags;
    uint8_t field_40[4];
    CEntity* m_pEntity;
    CEntity* m_pObject;
    CEntity* m_pBuilding;
    uint8_t field_256[194];

public:
    CEntity* GetAt(void* out, bool arg2);
};

