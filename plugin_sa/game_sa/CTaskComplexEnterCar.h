/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CTaskComplex.h"
#include "CPathFind.h"
#include "CTaskUtilityLineUpPedWithCar.h"

enum eTargetDoor
{
    TARGET_DOOR_FRONT_LEFT = 0,
    TARGET_DOOR_FRONT_RIGHT = 8,
    TARGET_DOOR_REAR_RIGHT = 9,
    TARGET_DOOR_REAR_LEFT = 11
};

class PLUGIN_API CTaskComplexEnterCar : public CTaskComplex {
protected:
    CTaskComplexEnterCar(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    CVehicle* m_pTargetVehicle;
    union
    {
        unsigned char m_nFlags;
        struct
        {
            unsigned char m_bAsDriver : 1;
            unsigned char m_bQuitAfterOpeningDoor : 1;
            unsigned char m_bQuitAfterDraggingPedOut : 1;
            unsigned char m_bCarryOnAfterFallingOff : 1;
        };
    };
private:
    char _pad[3];
public:
    int m_nTargetDoor;
    int m_nTargetDoorOppositeToFlag;
    int m_nTargetSeat;
    int m_nDraggedPedDownTime;
    int m_nMoveState; // see eMoveState

    unsigned char m_nNumGettingInSet;
    unsigned char m_nCamMovementChoice;
private:
    char _pad2[2];
public:
    CVector m_vTargetDoorPos;
    CTaskUtilityLineUpPedWithCar* m_pTaskUtilityLineUpPedWithCar;
    bool m_bIsAborting;
private:
    char _pad3[3];
public:
    CPed* m_pDraggedPed;
    unsigned char m_nDoorFlagsSet; // used for CVehicle::SetGettingInFlags
private:
    char _pad4[3];
public:
    float m_fCruiseSpeed;
    int m_nEnterCarStartTime;

    // Shouldn't be used directly, use CTaskComplexEnterCarAsDriver or CTaskComplexEnterCarAsPassenger instead
    CTaskComplexEnterCar(CVehicle* pTargetVehicle, bool bAsDriver, bool bQuitAfterOpeningDoor,
        bool bQuitAfterDraggingPedOut, bool bCarryOnAfterFallingOff = false); 

};
VALIDATE_OFFSET(CTaskComplexEnterCar, m_pTargetVehicle, 0xC);
VALIDATE_OFFSET(CTaskComplexEnterCar, m_nFlags, 0x10);
VALIDATE_OFFSET(CTaskComplexEnterCar, m_nTargetDoor, 0x14);
VALIDATE_OFFSET(CTaskComplexEnterCar, m_nTargetDoorOppositeToFlag, 0x18);
VALIDATE_OFFSET(CTaskComplexEnterCar, m_nTargetSeat, 0x1C);
VALIDATE_OFFSET(CTaskComplexEnterCar, m_nDraggedPedDownTime, 0x20);
VALIDATE_OFFSET(CTaskComplexEnterCar, m_nMoveState, 0x24);
VALIDATE_OFFSET(CTaskComplexEnterCar, m_nNumGettingInSet, 0x28);
VALIDATE_OFFSET(CTaskComplexEnterCar, m_nCamMovementChoice, 0x29);
VALIDATE_OFFSET(CTaskComplexEnterCar, m_vTargetDoorPos, 0x2C);
VALIDATE_OFFSET(CTaskComplexEnterCar, m_pTaskUtilityLineUpPedWithCar, 0x38);
VALIDATE_OFFSET(CTaskComplexEnterCar, m_bIsAborting, 0x3C);
VALIDATE_OFFSET(CTaskComplexEnterCar, m_pDraggedPed, 0x40);
VALIDATE_OFFSET(CTaskComplexEnterCar, m_nDoorFlagsSet, 0x44);
VALIDATE_OFFSET(CTaskComplexEnterCar, m_fCruiseSpeed, 0x48);
VALIDATE_OFFSET(CTaskComplexEnterCar, m_nEnterCarStartTime, 0x4C);
VALIDATE_SIZE(CTaskComplexEnterCar, 0x50);
