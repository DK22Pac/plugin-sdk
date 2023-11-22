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
#pragma pack(pop)

VALIDATE_SIZE(CPhysical, 0x210);
