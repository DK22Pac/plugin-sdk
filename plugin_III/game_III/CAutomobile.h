/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CVehicle.h"

class CObject;

enum eCarNodes {
    CAR_NODE_NONE = 0,
    CAR_WHEEL_RF = 1,
    CAR_WHEEL_RM = 2,
    CAR_WHEEL_RB = 3,
    CAR_WHEEL_LF = 4,
    CAR_WHEEL_LM = 5,
    CAR_WHEEL_LB = 6,
    CAR_BUMP_FRONT = 7,
    CAR_BUMP_REAR = 8,
    CAR_WING_RF = 9,
    CAR_WING_RR = 10,
    CAR_DOOR_RF = 11,
    CAR_DOOR_RR = 12,
    CAR_WING_LF = 13,
    CAR_WING_LR = 14,
    CAR_DOOR_LF = 15,
    CAR_DOOR_LR = 16,
    CAR_BONNET = 17,
    CAR_BOOT = 18,
    CAR_WINDSCREEN = 19,
    CAR_NUM_NODES
};

class CAutomobile : public CVehicle {
protected:
    CAutomobile(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
    
    static bool &m_sAllTaxiLights;

    //funcs

    void AddDamagedVehicleParticles();
    bool AddWheelDirtAndWater(CColPoint& colPoint, unsigned int arg1);
    void BlowUpCarsInPath();
    CAutomobile(int modelIndex, unsigned char createdBy);
    void DoDriveByShootings();
    void FireTruckControl();
    void Fix();
    bool GetAllWheelsOffGround();
    bool HasCarStoppedBecauseOfLight();
    // Empty function
    void HideAllComps();
    void HydraulicControl();
    void PlaceOnRoadProperly();
    void PlayHornIfNecessary();
    void ProcessAutoBusDoors();
    void ProcessBuoyancy();
    void ProcessSwingingDoor(int nodeIndex, eDoors door);
    bool RcbanditCheck1CarWheels(CPtrList& ptrlist);
    bool RcbanditCheckHitWheels();
    void ReduceHornCounter();
    CObject* RemoveBonnetInPedCollision();
    void ResetSuspension();
    void ScanForCrimes();
    static void SetAllTaxiLights(bool enable);
    void SetBumperDamage(int nodeIndex, ePanels panel, bool withoutVisualEffect);
    void SetBusDoorTimer(unsigned int time, unsigned char arg1);
    void SetComponentVisibility(RwFrame* frame, unsigned int arg1);
    void SetDoorDamage(int nodeIndex, eDoors door, bool withoutVisualEffect);
    void SetPanelDamage(int nodeIndex, ePanels panel, bool createWindowGlass);
    void SetTaxiLight(bool enable);
    void SetupDamageAfterLoad();
    void SetupModelNodes();
    void SetupSuspensionLines();
    // Empty function
    void ShowAllComps();
    CObject* SpawnFlyingComponent(int nodeIndex, unsigned int collisionType);
    void TankControl();
    void VehicleDamage(float damageIntensity, unsigned short arg1);
    void dmgDrawCarCollidingParticles(CVector const& position, float force);
    ~CAutomobile();
};

//VALIDATE_SIZE(CAutomobile, 0x5A8);
