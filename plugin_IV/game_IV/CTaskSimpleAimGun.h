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
VALIDATE_OFFSET(CTaskSimpleAimGun, field_1, 0x8);
VALIDATE_OFFSET(CTaskSimpleAimGun, m_nFlags, 0x30);
VALIDATE_OFFSET(CTaskSimpleAimGun, field_40, 0x34);
VALIDATE_OFFSET(CTaskSimpleAimGun, m_pEntity, 0x38);
VALIDATE_OFFSET(CTaskSimpleAimGun, m_pObject, 0x3C);
VALIDATE_OFFSET(CTaskSimpleAimGun, m_pBuilding, 0x40);
VALIDATE_OFFSET(CTaskSimpleAimGun, field_256, 0x44);
VALIDATE_SIZE(CTaskSimpleAimGun, 0x108);

