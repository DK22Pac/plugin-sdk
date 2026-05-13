/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CDynamicEntity.h"

#pragma pack(push, 1)
class CPhysical : public CDynamicEntity {
public:
    uint8_t m_nBodyPart[8];

    uint32_t m_bPhysicalFlags1_1 : 1;
    uint32_t m_bPhysicalFlags1_2 : 1;
    uint32_t m_bPhysicalFlags1_3 : 1;
    uint32_t m_bPhysicalFlags1_4 : 1;
    uint32_t m_bPhysicalFlags1_5 : 1;
    uint32_t m_bPhysicalFlags1_6 : 1;
    uint32_t m_bPhysicalFlags1_7 : 1;
    uint32_t m_bPhysicalFlags1_8 : 1;
    uint32_t m_bPhysicalFlags1_9 : 1;
    uint32_t m_bPhysicalFlags1_10 : 1;
    uint32_t m_bInvincible : 1;
    uint32_t m_bPhysicalFlags1_12 : 1;
    uint32_t m_bPhysicalFlags1_13 : 1;
    uint32_t m_bPhysicalFlags1_14 : 1;
    uint32_t m_bPhysicalFlags1_15 : 1;
    uint32_t m_bPhysicalFlags1_16 : 1;
    uint32_t m_bPhysicalFlags1_17 : 1;
    uint32_t m_bPhysicalFlags1_18 : 1;
    uint32_t m_bPhysicalFlags1_19 : 1;
    uint32_t m_bPhysicalFlags1_20 : 1;
    uint32_t m_bPhysicalFlags1_21 : 1;
    uint32_t m_bPhysicalFlags1_22 : 1;
    uint32_t m_bPhysicalFlags1_23 : 1;
    uint32_t m_bPhysicalFlags1_24 : 1;
    uint32_t m_bPhysicalFlags1_25 : 1;
    uint32_t m_bPhysicalFlags1_26 : 1;
    uint32_t m_bPhysicalFlags1_27 : 1;
    uint32_t m_bPhysicalFlags1_28 : 1;
    uint32_t m_bPhysicalFlags1_29 : 1;
    uint32_t m_bPhysicalFlags1_30 : 1;
    uint32_t m_bPhysicalFlags1_31 : 1;


    uint16_t m_nRelationshipGroup;
    uint16_t field_24;
    float m_fPercentSubmerged;
    uint8_t field_32[32];
    uint32_t m_nSubmergedState;
    uint8_t field_40[116];
    CEntity* m_pAttachedToEntity;
    rage::Vector3 m_vAttachOffset;
    uint8_t field_116[4];
    rage::Vector4 m_qAttachOffset;
    uint8_t field_124[4];
    CEntity* m_pLastDamageEntity;
    uint8_t field_132[4];
    int8_t m_nLastDamageWeapon;
    int8_t field_138[3];
    float m_fLife;
    uint8_t field_152[4];
    CEntity* m_pEntityIgnoredCollision;
    uint8_t field_158[20];

public:
    void SetInitialVelocity(rage::Vector3 const& vel);
    void RemoveFromMovingList();
    void ApplyMoveForce(rage::Vector3 const& vel);
    void ApplyForce(rage::Vector3 const& dir, rage::Vector3 const& vel, int32_t flag);
    rage::phConstrainedCollider* GetCollider();

public:
    void Update(uint8_t arg1) {
        plugin::CallVirtualMethod<45>(this, arg1);
    }

    void GetVelocity(rage::Vector3* velocity) {
        plugin::CallVirtualMethod<59>(this, velocity);
    }

    rage::Vector3 GetVelocity() {
        rage::Vector3 vel;
        GetVelocity(&vel);
        return vel;
    }
};
VALIDATE_OFFSET(CPhysical, m_nBodyPart, 0x110);
VALIDATE_OFFSET(CPhysical, m_nRelationshipGroup, 0x11C);
VALIDATE_OFFSET(CPhysical, field_24, 0x11E);
VALIDATE_OFFSET(CPhysical, m_fPercentSubmerged, 0x120);
VALIDATE_OFFSET(CPhysical, field_32, 0x124);
VALIDATE_OFFSET(CPhysical, m_nSubmergedState, 0x144);
VALIDATE_OFFSET(CPhysical, field_40, 0x148);
VALIDATE_OFFSET(CPhysical, m_pAttachedToEntity, 0x1BC);
VALIDATE_OFFSET(CPhysical, m_vAttachOffset, 0x1C0);
VALIDATE_OFFSET(CPhysical, field_116, 0x1CC);
VALIDATE_OFFSET(CPhysical, m_qAttachOffset, 0x1D0);
VALIDATE_OFFSET(CPhysical, field_124, 0x1E0);
VALIDATE_OFFSET(CPhysical, m_pLastDamageEntity, 0x1E4);
VALIDATE_OFFSET(CPhysical, field_132, 0x1E8);
VALIDATE_OFFSET(CPhysical, m_nLastDamageWeapon, 0x1EC);
VALIDATE_OFFSET(CPhysical, field_138, 0x1ED);
VALIDATE_OFFSET(CPhysical, m_fLife, 0x1F0);
VALIDATE_OFFSET(CPhysical, field_152, 0x1F4);
VALIDATE_OFFSET(CPhysical, m_pEntityIgnoredCollision, 0x1F8);
VALIDATE_OFFSET(CPhysical, field_158, 0x1FC);
VALIDATE_SIZE(CPhysical, 0x210);
#pragma pack(pop)

VALIDATE_SIZE(CPhysical, 0x210);
