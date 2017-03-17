/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CEntity.h"
#include "CSector.h"
#include "CEntryInfoList.h"
#include "CColPoint.h"

class CPhysical : public CEntity {
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
    ~CPhysical();

    CPhysical() = delete;
    CPhysical(const CPhysical &) = delete;
    CPhysical &operator=(const CPhysical &) = delete;
};
