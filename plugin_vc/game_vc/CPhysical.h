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
VALIDATE_OFFSET(CPhysical, m_nAudioEntityId, 0x64);
VALIDATE_OFFSET(CPhysical, fUnknownX, 0x68);
VALIDATE_OFFSET(CPhysical, fUnknownY, 0x6C);
VALIDATE_OFFSET(CPhysical, m_vecMoveSpeed, 0x70);
VALIDATE_OFFSET(CPhysical, m_vecTurnSpeed, 0x7C);
VALIDATE_OFFSET(CPhysical, m_vecFrictionMoveForce, 0x88);
VALIDATE_OFFSET(CPhysical, m_vecFrictionTurnForce, 0x94);
VALIDATE_OFFSET(CPhysical, m_vecForce, 0xA0);
VALIDATE_OFFSET(CPhysical, m_vecTorque, 0xAC);
VALIDATE_OFFSET(CPhysical, m_fMass, 0xB8);
VALIDATE_OFFSET(CPhysical, m_fTurnMass, 0xBC);
VALIDATE_OFFSET(CPhysical, m_fVelocityFrequency, 0xC0);
VALIDATE_OFFSET(CPhysical, m_fAirResistance, 0xC4);
VALIDATE_OFFSET(CPhysical, m_fElasticity, 0xC8);
VALIDATE_OFFSET(CPhysical, m_fBuoyancyConstant, 0xCC);
VALIDATE_OFFSET(CPhysical, m_vecCentreOfMass, 0xD0);
VALIDATE_OFFSET(CPhysical, m_collisionList, 0xDC);
VALIDATE_OFFSET(CPhysical, m_pMovingListNode, 0xE0);
VALIDATE_OFFSET(CPhysical, uCollideExtra, 0xE4);
VALIDATE_OFFSET(CPhysical, uCollideInfo, 0xE5);
VALIDATE_OFFSET(CPhysical, m_nNumCollisionRecords, 0xE6);
VALIDATE_OFFSET(CPhysical, field_E7, 0xE7);
VALIDATE_OFFSET(CPhysical, m_apCollisionRecords, 0xE8);
VALIDATE_OFFSET(CPhysical, m_fTotSpeed, 0x100);
VALIDATE_OFFSET(CPhysical, m_fCollisionPower, 0x104);
VALIDATE_OFFSET(CPhysical, m_pPhysColliding, 0x108);
VALIDATE_OFFSET(CPhysical, m_vecCollisionPower, 0x10C);
VALIDATE_OFFSET(CPhysical, m_wComponentCol, 0x118);
VALIDATE_OFFSET(CPhysical, m_nMoveFlags, 0x11A);
VALIDATE_OFFSET(CPhysical, m_nCollFlags, 0x11B);
VALIDATE_OFFSET(CPhysical, m_nLastCollType, 0x11C);
VALIDATE_OFFSET(CPhysical, m_nZoneLevel, 0x11D);
VALIDATE_OFFSET(CPhysical, field_11E, 0x11E);
VALIDATE_SIZE(CPhysical, 0x120);