/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"
#include "CVirtualBase.h"
#include "CSimpleTransform.h"

class CEntity : CVirtualBase {
public:
    uint32_t m_nCurrentWeaponSlot;
    uint8_t field_1[8];
    CSimpleTransform m_Transform;
    rage::Matrix44* m_pMatrix;

    // Entity Flags 1
    uint32_t m_bHasCollision : 1;
    uint32_t m_bEntityFlags1_2 : 1;
    uint32_t m_bEntityFlags1_3 : 1;
    uint32_t m_bbIsStatic : 1;
    uint32_t m_bbIsVisible : 1;
    uint32_t m_bEntityFlags1_6 : 1;
    uint32_t m_bEntityFlags1_7 : 1;
    uint32_t m_bEntityFlags1_8 : 1;
    uint32_t m_bEntityFlags1_9 : 1;
    uint32_t m_bEntityFlags1_10 : 1;
    uint32_t m_bEntityFlags1_11 : 1;
    uint32_t m_bEntityFlags1_12 : 1;
    uint32_t m_bEntityFlags1_13 : 1;
    uint32_t m_bEntityFlags1_14 : 1;
    uint32_t m_bEntityFlags1_15 : 1;
    uint32_t m_bEntityFlags1_16 : 1;
    uint32_t m_bEntityFlags1_17 : 1;
    uint32_t m_bEntityFlags1_18 : 1;
    uint32_t m_bEntityFlags1_19 : 1;
    uint32_t m_bEntityFlags1_20 : 1;
    uint32_t m_bEntityFlags1_21 : 1;
    uint32_t m_bEntityFlags1_22 : 1;
    uint32_t m_bEntityFlags1_23 : 1;
    uint32_t m_bEntityFlags1_24 : 1;
    uint32_t m_bEntityFlags1_25 : 1;
    uint32_t m_bEntityFlags1_26 : 1;
    uint32_t m_bEntityFlags1_27 : 1;
    uint32_t m_bEntityFlags1_28 : 1;
    uint32_t m_bEntityFlags1_29 : 1;
    uint32_t m_bEntityFlags1_30 : 1;
    uint32_t m_bEntityFlags1_31 : 1;
    
    // Entity Flags 2
    uint32_t m_bEntityFlags2_1 : 1;
    uint32_t m_bEntityFlags2_2 : 1;
    uint32_t m_bEntityFlags2_3 : 1;
    uint32_t m_bEntityFlags2_4 : 1;
    uint32_t m_bEntityFlags2_5 : 1;
    uint32_t m_bEntityFlags2_6 : 1;
    uint32_t m_bEntityFlags2_7 : 1;
    uint32_t m_bEntityFlags2_8 : 1;
    uint32_t m_bEntityFlags2_9 : 1;
    uint32_t m_bEntityFlags2_10 : 1;
    uint32_t m_bEntityFlags2_11 : 1;
    uint32_t m_bEntityFlags2_12 : 1;
    uint32_t m_bEntityFlags2_13 : 1;
    uint32_t m_bEntityFlags2_14 : 1;
    uint32_t m_bEntityFlags2_15 : 1;
    uint32_t m_bEntityFlags2_16 : 1;
    uint32_t m_bEntityFlags2_17 : 1;
    uint32_t m_bEntityFlags2_18 : 1;
    uint32_t m_bEntityFlags2_19 : 1;
    uint32_t m_bEntityFlags2_20 : 1;
    uint32_t m_bEntityFlags2_21 : 1;
    uint32_t m_bEntityFlags2_22 : 1;
    uint32_t m_bEntityFlags2_23 : 1;
    uint32_t m_bEntityFlags2_24 : 1;
    uint32_t m_bEntityFlags2_25 : 1;
    uint32_t m_bEntityFlags2_26 : 1;
    uint32_t m_bEntityFlags2_27 : 1;
    uint32_t m_bEntityFlags2_28 : 1;
    uint32_t m_bEntityFlags2_29 : 1;
    uint32_t m_bEntityFlags2_30 : 1;
    uint32_t m_bEntityFlags2_31 : 1;

    uint16_t field_2C;
    int16_t m_nModelIndex;
    uint32_t m_pReference;
    uint32_t field_34;
    uint32_t m_pColModel;
    uint32_t field_3C;
    uint8_t field_40;
    uint8_t field_41;
    uint16_t field_42;
    uint16_t field_44;
    uint16_t field_46;
    uint32_t m_hInterior;
    uint32_t field_4C;
    uint32_t field_50;
    uint32_t field_54;
    uint32_t field_58;
    uint16_t field_5C;
    uint16_t field_5E;
    uint8_t field_60;
    uint8_t field_61;
    uint8_t field_62;
    uint8_t m_nAlpha;
    uint32_t field_64;
    uint32_t field_68;
    uint32_t field_6C;

public:
    rage::Vector4& GetRight() { return m_pMatrix->right; }
    const rage::Vector4& GetRight() const { return m_pMatrix->right; }

    rage::Vector4& GetForward() { return m_pMatrix->up; }
    const rage::Vector4& GetForward() const { return m_pMatrix->up; }

    rage::Vector4& GetUp() { return m_pMatrix->at; }
    const rage::Vector4& GetUp() const { return m_pMatrix->at; }

    rage::Vector4& GetPosition() { return m_pMatrix->pos; }
    const rage::Vector4& GetPosition() const { return m_pMatrix->pos; }

public:
    void Freeze(bool on, bool arg2);
    void AllocateMatrix();
    void CleanUpOldReference(void* object);

public:
    void Teleport(rage::Matrix44* mat, int32_t dontUpdatePhysicsMatrix, bool immediately) { plugin::CallVirtualMethod<1>(this, mat, dontUpdatePhysicsMatrix, immediately); }
    void Teleport(rage::Vector4* pos, int32_t dontUpdatePhysicsMatrix, bool immediately) { plugin::CallVirtualMethod<2>(this, pos, dontUpdatePhysicsMatrix, immediately); }
};

VALIDATE_SIZE(CEntity, 0x70);
