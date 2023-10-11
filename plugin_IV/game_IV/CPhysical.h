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
    uint32_t m_nPhysicalFlags;
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

};
#pragma pack(pop)

VALIDATE_SIZE(CPhysical, 0x210);
