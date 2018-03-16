/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
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
protected:
    CPhysical(plugin::dummy_func_t) : CEntity(plugin::dummy) {}
public:
    unsigned int m_nAudioEntityId;
    float fUnknownX;
    float fUnknownY;
    CVector m_vecMoveSpeed;
    CVector m_vecTurnSpeed;
    CVector m_vecFrictionMoveForce;
    CVector m_vecFrictionTurnForce;
    CVector m_vecForce;
    CVector m_vecTorque;
    float m_fMass;
    float m_fTurnMass;
    float m_fVelocityFrequency;
    float m_fAirResistance;
    float m_fElasticity;
    float m_fBuoyancyConstant;
    CVector m_vecCentreOfMass;
    CEntryInfoList m_collisionList;
    CPtrNode *m_pMovingListNode;
    unsigned char uCollideExtra;                        
    unsigned char uCollideInfo;
    unsigned char m_nNumCollisionRecords;
    char field_E7;
    CEntity *m_apCollisionRecords[6];
    float m_fTotSpeed;
    float m_fCollisionPower;
    CPhysical *m_pPhysColliding;
    CVector m_vecCollisionPower;
    unsigned short m_wComponentCol;
    unsigned char m_nMoveFlags;
    unsigned char m_nCollFlags;
    unsigned char m_nLastCollType;
    unsigned char m_nZoneLevel;
    char field_11E[2];

    //vtable

    void ProcessEntityCollision(CEntity* arg0, CColPoint* arg1);

    //funcs

    static void PlacePhysicalRelativeToOtherPhysical(CPhysical* phys1, CPhysical* phys2, CVector offset);
    void RemoveRefsToEntity(CEntity* entity);
    bool ProcessCollisionSectorList_SimpleCar(CSector* sector);
    bool ProcessShiftSectorList(CPtrList* ptrList);
    bool ProcessCollisionSectorList(CPtrList* ptrList);
    bool ApplyFriction(CPhysical* phys, float arg1, CColPoint& colPoint);
    bool ApplyFriction(float arg0, CColPoint& colPoint);
    bool ApplySpringDampening(float arg0, CVector& arg1, CVector& arg2, CVector& arg3);
    bool ApplySpringCollisionAlt(float arg0, CVector& arg1, CVector& arg2, float arg3, float arg4, CVector& arg5);
    bool ApplySpringCollision(float arg0, CVector& arg1, CVector& arg2, float arg3, float arg4);
    bool ApplyCollisionAlt(CEntity* entity, CColPoint& colPoint, float& arg2, CVector& arg3, CVector& arg4);
    bool ApplyCollision(CPhysical* phys, CColPoint& colPoint, float& arg2, float& arg3);
    bool ApplyCollision(CColPoint& colPoint, float& arg1);
    void ApplyTurnSpeed();
    bool GetHasCollidedWith(CEntity* entity);
    void AddCollisionRecord(CEntity* entity);
    bool CheckCollision();
    void ApplyFrictionTurnForce(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5);
    void ApplyAirResistance();
    void ApplyMoveSpeed();
    void ApplyTurnForce(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5);
    void ApplyMoveForce(float x, float y, float z);
    void RemoveFromMovingList();
    void AddToMovingList();
    void RemoveAndAdd();

    CPhysical() = delete;
    CPhysical(const CPhysical &) = delete;
    CPhysical &operator=(const CPhysical &) = delete;
};

VALIDATE_SIZE(CPhysical, 0x120);