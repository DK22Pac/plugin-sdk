/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "CVehicle.h"
#include "CDoor.h"
#include "CDamageManager.h"

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

#pragma pack(push, 1)
class PLUGIN_API  CAutomobile : public CVehicle {
protected:
    CAutomobile(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
    
    void AddDamagedVehicleParticles();
    bool AddWheelDirtAndWater(CColPoint& colPoint, unsigned int arg1);
    void BlowUpCarsInPath();
    CAutomobile(int modelIndex, unsigned char arg1);
    // Cancel orientation forcing (m_fForcedOrientation = -1.0f)
    void ClearHeliOrientation();
    void CloseBoot();
    void DoDriveByShootings();
    void DoHoverSuspensionRatios();
    void FireTruckControl(float arg0);
    void Fix();
    bool HasCarStoppedBecauseOfLight();
    // Process vehicle hydraulics
    void HydraulicControl();
    CPed* KnockPedOutCar(eWeaponType arg0, unsigned short arg1, CPed* arg2);
    void PlaceOnRoadProperly();
    // Play horn for NPC vehicle (called @CAutomobile::ProcessAI)
    void PlayHornIfNecessary();
    void PopBoot();
    void PopBootUsingPhysics();
    void ProcessAutoBusDoors();
    void ProcessBuoyancy();
    void ProcessSwingingDoor(int nodeIndex, eDoors door);
    bool RcbanditCheck1CarWheels(CPtrList& ptrlist);
    bool RcbanditCheckHitWheels();
    // if(m_nHornCounter) m_nHornCounter--;
    void ReduceHornCounter();
    // Returns spawned flying component?
    CObject* RemoveBonnetInPedCollision();
    void ScanForCrimes();
    void SetBumperDamage(int arg0, int arg1, bool withoutVisualEffect);
    void SetBusDoorTimer(unsigned int time, unsigned char arg1);
    void SetDoorDamage(int nodeId, int componentId, bool withoutVisualEffect);
    // Force orientation for heli to specified angle (radians)
    void SetHeliOrientation(float angle);
    void SetPanelDamage(int arg0, int arg1, bool arg2);
    // Enable/disable taxi light for taxi
    void SetTaxiLight(bool enable);
    void SetupDamageAfterLoad();
    void SetupSuspensionLines();
    CObject* SpawnFlyingComponent(int nodeIndex, unsigned int collisionType);
    void TankControl();
    void TellHeliToGoToCoors(float x, float y, float z, unsigned char arg3);
    void TellPlaneToGoToCoors(float x, float y, float z, unsigned char arg3);
    void VehicleDamage(float arg0, int arg1);
    // Create colliding particles
    void dmgDrawCarCollidingParticles(CVector const& position, float force);
};
#pragma pack(pop)