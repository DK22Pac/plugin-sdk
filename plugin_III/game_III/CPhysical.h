/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"
#include "CSector.h"
#include "CEntryInfoList.h"
#include "CColPoint.h"

class CPhysical : public CEntity {
public:
    void           *m_nAudioEntityId;
    float field_68;
    int field_6C;
    int field_70;
    int             m_nLastTimeCollided;
    CVector         m_vecMoveSpeed;
    CVector         m_vecTurnSpeed;
    CVector         m_vecFrictionMoveForce;
    CVector         m_vecFrictionTurnForce;
    CVector         m_vecForce;
    CVector         m_vecTorque;
    float           m_fMass;
    float           m_fTurnMass;
    float           m_fVelocityFrequency;
    float           m_fAirResistance;
    float           m_fElasticity;
    float           m_fBuoyancy;
    CVector         m_vecCentreOfMass;
    CEntryInfoList  m_collisionList;
    CPtrNode       *m_pMovingListNode;
    char field_EC;
    char field_ED;
    unsigned char   m_nNumCollisionRecords;
    char field_EF;
    CEntity        *m_apCollisionRecords[6];
    float           m_fTotSpeed;
    float           m_fCollisionPower;
    CPhysical      *m_pPhysColliding;
    CVector         m_vecCollisionPower;
    short           m_nComponentCol;
    unsigned char   m_nMoveFlags;
    unsigned char   m_nLastCollType;
    unsigned char   m_nZoneLevel;
private:
    char _pad125[3];
public:

protected:
    CPhysical(plugin::dummy_func_t) : CEntity(plugin::dummy) {}
public:

    //vtable

    void ProcessEntityCollision(CEntity* entity, CColPoint* colPoint);

    //funcs

    void AddCollisionRecord(CEntity* entity);
    void AddCollisionRecord_Treadable(CEntity* entity);
    void AddToMovingList();
    void ApplyAirResistance();
    bool ApplyCollision(CPhysical* phys, CColPoint& colPoint, float& arg2, float& arg3);
    bool ApplyCollisionAlt(CEntity* entity, CColPoint& colPoint, float& arg2, CVector& arg3, CVector& arg4);
    bool ApplyFriction(CPhysical* phys, float arg1, CColPoint& colPoint);
    bool ApplyFriction(float arg0, CColPoint& colPoint);
    void ApplyFriction();
    void ApplyFrictionMoveForce(float x, float y, float z);
    void ApplyFrictionTurnForce(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5);
    void ApplyGravity();
    void ApplyMoveForce(float x, float y, float z);
    void ApplyMoveSpeed();
    void ApplySpringCollisionAlt(float arg0, CVector& arg1, CVector& arg2, float arg3, float arg4, CVector& arg5);
    void ApplySpringDampening(float arg0, CVector& arg1, CVector& arg2, CVector& arg3);
    void ApplyTurnForce(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5);
    void ApplyTurnSpeed();
    bool CheckCollision();
    bool CheckCollision_SimpleCar();
    bool GetHasCollidedWith(CEntity* entity);
    static void PlacePhysicalRelativeToOtherPhysical(CPhysical* phys1, CPhysical* phys2, CVector offset);
    bool ProcessCollisionSectorList(CPtrList* ptrList);
    bool ProcessCollisionSectorList_SimpleCar(CSector* sector);
    bool ProcessShiftSectorList(CPtrList* ptrList);
    void RemoveAndAdd();
    void RemoveFromMovingList();
    void RemoveRefsToEntity(CEntity* entity);

    CPhysical() = delete;
    CPhysical(const CPhysical &) = delete;
    CPhysical &operator=(const CPhysical &) = delete;
};

VALIDATE_SIZE(CPhysical, 0x128);