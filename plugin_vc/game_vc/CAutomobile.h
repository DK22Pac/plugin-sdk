/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "CDoor.h"
#include "CDamageManager.h"
#include "CWheel.h"

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
    CDamageManager m_carDamage;
    char bDamSwitch;
    char __f02B5[3];
    CDoor m_aDoors[6];
    RwFrame *m_aCarNodes[20];
    CWheel stWheels[4];
    int fWheelSuspDist[4];
    int fWheelSuspDistSoft[4];
    int fWheelContactRate[4];
    char __p04B0[28];
    int fWheelTotalRot[4];
    int fWheelRot[4];
    char __p04EC[4];
    int fNegSpeed;
    char __p04F4[9];
    char bfFlagsX;
    char __p04FE[46];
    int fWheelAngleMul;
    int fAIGripMultiplier;
    char __p0534[120];
    int fSpecialWepRotH;
    int fSpecialWepRotV;
    int fSpecialSteering;
    int fSpecialMoveState;
    int uUnusedX;
    char nWheelsOnGround;
    char nRearWheelsOnGround;
    char bytePrevRearWheelsOnGround;
    char __f05C3;
    int fSkidMarkDensity;
    int nTireFriction[4];

    // variables
    static bool &m_sAllTaxiLights;
    static unsigned int &nGenerateRaindrops;
    static unsigned int &nGenerateWaterCircles;
    static CMatrix *matW2B;

    //funcs
    void AddDamagedVehicleParticles();
    bool AddWheelDirtAndWater(CColPoint& colPoint, unsigned int arg1);
    void BlowUpCarsInPath();
    CAutomobile(int modelIndex, unsigned char createdBy);
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
    CPed* KnockPedOutCar(eWeaponType weapon, unsigned short arg1, CPed* ped);
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
    void SetBumperDamage(int nodeIndex, ePanels panel, bool withoutVisualEffect);
    void SetBusDoorTimer(unsigned int time, unsigned char arg1);
    void SetDoorDamage(int nodeIndex, eDoors door, bool withoutVisualEffect);
    // Force orientation for heli to specified angle (radians)
    void SetHeliOrientation(float angle);
    void SetPanelDamage(int nodeIndex, ePanels panel, bool createWindowGlass);
    // Enable/disable taxi light for taxi
    void SetTaxiLight(bool enable);
    void SetupDamageAfterLoad();
    void SetupSuspensionLines();
    CObject* SpawnFlyingComponent(int nodeIndex, unsigned int collisionType);
    void TankControl();
    void TellHeliToGoToCoors(float x, float y, float z, unsigned char arg3);
    void TellPlaneToGoToCoors(float x, float y, float z, unsigned char arg3);
    void VehicleDamage(float damageIntensity, int arg1);
    // Create colliding particles
    void dmgDrawCarCollidingParticles(CVector const& position, float force);
};

VALIDATE_SIZE(CAutomobile, 0x5DC);