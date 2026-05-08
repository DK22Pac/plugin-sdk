/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"
#include "CTreadable.h"
#include "CVector.h"
#include "CEntryInfoList.h"
#include "CRect.h"
#include "CColPoint.h"
#include "CPtrList.h"
#include "CSector.h"

class PLUGIN_API CPhysical : public CEntity {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPhysical)

public:
    int m_nAudioEntityId;
    float field_68;
    CTreadable* m_pLastCarNodeTreadable;
    CTreadable* m_pLastPedNodeTreadable;
    unsigned int m_nLastTimeCollided;
    CVector m_vecMoveSpeed; //!< velocity
    CVector m_vecTurnSpeed; //!< angular velocity
    CVector m_vecFrictionMoveForce;
    CVector m_vecFrictionTurnForce;
    CVector m_vecMoveSpeedAvg;
    CVector m_vecTurnSpeedAvg;
    float m_fMass;
    float m_fTurnMass; //!< moment of inertia
    float m_fForceMultiplier;
    float m_fAirResistance;
    float m_fElasticity;
    float m_fBuoyancy;
    CVector m_vecCentreOfMass;
    CEntryInfoList m_entryInfoList;
    CPtrNode* m_pMovingListNode;
    char field_EC;
    unsigned char m_nStaticFrames;
    unsigned char m_nNumCollisionRecords;
    bool m_bIsVehicleBeingShifted;
    CEntity* m_apCollisionRecords[6];
    float m_fDistanceTravelled;
    float m_fDamageImpulse;
    CEntity* m_pDamageEntity;
    CVector m_vecDamageNormal;
    short m_nDamagePieceType;

    unsigned char bIsHeavy : 1;
    unsigned char bAffectedByGravity : 1;
    unsigned char bInfiniteMass : 1;
    unsigned char bIsInWater : 1;
    unsigned char bPhy_flag4 : 1;
    unsigned char bPhy_flag5 : 1;
    unsigned char bHitByTrain : 1;
    unsigned char bSkipLineCol : 1;
    
    unsigned char m_nSurfaceTouched;
    char m_nZoneLevel;
    
    // virtual function #0 (destructor)

    SUPPORTED_10EN_11EN_STEAM void Add();
    SUPPORTED_10EN_11EN_STEAM void Remove();

    // virtual function #3 (not overriden)


    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)


    // virtual function #6 (not overriden)

    SUPPORTED_10EN_11EN_STEAM CRect GetBoundRect();
    SUPPORTED_10EN_11EN_STEAM void ProcessControl();
    SUPPORTED_10EN_11EN_STEAM void ProcessCollision();
    SUPPORTED_10EN_11EN_STEAM void ProcessShift();

    // virtual function #11 (not overriden)


    // virtual function #12 (not overriden)


    // virtual function #13 (not overriden)


    // virtual function #14 (not overriden)


    // virtual function #15 (not overriden)


    // virtual function #16 (not overriden)

    SUPPORTED_10EN_11EN_STEAM int ProcessEntityCollision(CEntity *entity, CColPoint *colPoint);

    SUPPORTED_10EN_11EN_STEAM void AddCollisionRecord(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM void AddCollisionRecord_Treadable(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM void AddToMovingList();
    SUPPORTED_10EN_11EN_STEAM void ApplyAirResistance();
    SUPPORTED_10EN_11EN_STEAM bool ApplyCollision(CPhysical *physical, CColPoint &colPoint, float *impulseA, float *impulseB);
    SUPPORTED_10EN_11EN_STEAM bool ApplyCollisionAlt(CEntity *entity, CColPoint &colPoint, float *impulse, CVector &moveSpeed, CVector &turnSpeed);
    SUPPORTED_10EN_11EN_STEAM void ApplyFriction();
    SUPPORTED_10EN_11EN_STEAM bool ApplyFriction(float adhesiveLimit, CColPoint &colPoint);
    SUPPORTED_10EN_11EN_STEAM bool ApplyFriction(CPhysical *physical, float adhesiveLimit, CColPoint &colPoint);
    SUPPORTED_10EN_11EN_STEAM void ApplyFrictionMoveForce(float jx, float jy, float jz);
    SUPPORTED_10EN_11EN_STEAM void ApplyFrictionTurnForce(float jx, float jy, float jz, float rx, float ry, float rz);
    SUPPORTED_10EN_11EN_STEAM void ApplyGravity();
    //! Force actually means Impulse here
    SUPPORTED_10EN_11EN_STEAM void ApplyMoveForce(float jx, float jy, float jz);
    SUPPORTED_10EN_11EN_STEAM void ApplyMoveForce(CVector const& j) {
        ApplyMoveForce(j.x, j.y, j.z);
    }

    SUPPORTED_10EN_11EN_STEAM void ApplyMoveSpeed();
    //! springRatio: 1.0 fully extended, 0.0 fully compressed
    SUPPORTED_10EN_11EN_STEAM bool ApplySpringCollision(float springConst, CVector &springDir, CVector &point, float springRatio, float bias);
    SUPPORTED_10EN_11EN_STEAM bool ApplySpringDampening(float damping, CVector &springDir, CVector &point, CVector &speed);
    //! j(x,y,z) is direction of force, p(x,y,z) is point relative to model center where force is applied
    SUPPORTED_10EN_11EN_STEAM void ApplyTurnForce(float jx, float jy, float jz, float px, float py, float pz);
    SUPPORTED_10EN_11EN_STEAM void ApplyTurnSpeed();
    SUPPORTED_10EN_11EN_STEAM bool CheckCollision();
    SUPPORTED_10EN_11EN_STEAM bool CheckCollision_SimpleCar();
    SUPPORTED_10EN_11EN_STEAM bool GetHasCollidedWith(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM bool ProcessCollisionSectorList(CPtrList *list);
    SUPPORTED_10EN_11EN_STEAM bool ProcessCollisionSectorList_SimpleCar(CSector *sector);
    SUPPORTED_10EN_11EN_STEAM bool ProcessShiftSectorList(CPtrList *list);
    SUPPORTED_10EN_11EN_STEAM void RemoveAndAdd();
    SUPPORTED_10EN_11EN_STEAM void RemoveFromMovingList();
    SUPPORTED_10EN_11EN_STEAM void RemoveRefsToEntity(CEntity *entity);

    SUPPORTED_10EN_11EN_STEAM static void PlacePhysicalRelativeToOtherPhysical(CPhysical *other, CPhysical *physical, CVector localPos);
};
VALIDATE_OFFSET(CPhysical, m_nAudioEntityId, 0x64);
VALIDATE_OFFSET(CPhysical, field_68, 0x68);
VALIDATE_OFFSET(CPhysical, m_pLastCarNodeTreadable, 0x6C);
VALIDATE_OFFSET(CPhysical, m_pLastPedNodeTreadable, 0x70);
VALIDATE_OFFSET(CPhysical, m_nLastTimeCollided, 0x74);
VALIDATE_OFFSET(CPhysical, m_vecMoveSpeed, 0x78);
VALIDATE_OFFSET(CPhysical, m_vecTurnSpeed, 0x84);
VALIDATE_OFFSET(CPhysical, m_vecFrictionMoveForce, 0x90);
VALIDATE_OFFSET(CPhysical, m_vecFrictionTurnForce, 0x9C);
VALIDATE_OFFSET(CPhysical, m_vecMoveSpeedAvg, 0xA8);
VALIDATE_OFFSET(CPhysical, m_vecTurnSpeedAvg, 0xB4);
VALIDATE_OFFSET(CPhysical, m_fMass, 0xC0);
VALIDATE_OFFSET(CPhysical, m_fTurnMass, 0xC4);
VALIDATE_OFFSET(CPhysical, m_fForceMultiplier, 0xC8);
VALIDATE_OFFSET(CPhysical, m_fAirResistance, 0xCC);
VALIDATE_OFFSET(CPhysical, m_fElasticity, 0xD0);
VALIDATE_OFFSET(CPhysical, m_fBuoyancy, 0xD4);
VALIDATE_OFFSET(CPhysical, m_vecCentreOfMass, 0xD8);
VALIDATE_OFFSET(CPhysical, m_entryInfoList, 0xE4);
VALIDATE_OFFSET(CPhysical, m_pMovingListNode, 0xE8);
VALIDATE_OFFSET(CPhysical, field_EC, 0xEC);
VALIDATE_OFFSET(CPhysical, m_nStaticFrames, 0xED);
VALIDATE_OFFSET(CPhysical, m_nNumCollisionRecords, 0xEE);
VALIDATE_OFFSET(CPhysical, m_bIsVehicleBeingShifted, 0xEF);
VALIDATE_OFFSET(CPhysical, m_apCollisionRecords, 0xF0);
VALIDATE_OFFSET(CPhysical, m_fDistanceTravelled, 0x108);
VALIDATE_OFFSET(CPhysical, m_fDamageImpulse, 0x10C);
VALIDATE_OFFSET(CPhysical, m_pDamageEntity, 0x110);
VALIDATE_OFFSET(CPhysical, m_vecDamageNormal, 0x114);
VALIDATE_OFFSET(CPhysical, m_nDamagePieceType, 0x120);
VALIDATE_OFFSET(CPhysical, m_nSurfaceTouched, 0x123);
VALIDATE_OFFSET(CPhysical, m_nZoneLevel, 0x124);
VALIDATE_SIZE(CPhysical, 0x128);

VTABLE_DESC(CPhysical, 0x5F69D0, 18);
VALIDATE_SIZE(CPhysical, 0x128);

#include "meta/meta.CPhysical.h"
