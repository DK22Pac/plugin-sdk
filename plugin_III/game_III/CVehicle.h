/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPhysical.h"
#include "CColModel.h"
#include "CDamageManager.h"
#include "eWeaponType.h"
#include "CStoredCollPoly.h"
#include "tHandlingData.h"
#include "CAutoPilot.h"
#include "CFire.h"

enum eCarWeapon {

};

enum eCarLock {
    CARLOCK_NOT_USED,
    CARLOCK_UNLOCKED,
    CARLOCK_LOCKED,
    CARLOCK_LOCKOUT_PLAYER_ONLY,
    CARLOCK_LOCKED_PLAYER_INSIDE,
    CARLOCK_COP_CAR,
    CARLOCK_FORCE_SHUT_DOORS,
    CARLOCK_SKIP_SHUT_DOORS
};

enum eVehicleType {
    VEHICLE_AUTOMOBILE,
    VEHICLE_BOAT,
    VEHICLE_TRAIN,
    VEHICLE_HELI,
    VEHICLE_PLANE,
    VEHICLE_BIKE
};

enum eVehicleLightsFlags {
    VEHICLE_LIGHTS_TWIN = 1,
    VEHICLE_LIGHTS_IGNORE_DAMAGE = 4,
    VEHICLE_LIGHTS_DISABLE_FRONT = 16,
    VEHICLE_LIGHTS_DISABLE_REAR = 32
};

enum eVehicleCreatedBy {
    RANDOM_VEHICLE = 1,
    MISSION_VEHICLE = 2,
    PARKED_VEHICLE = 3,
    PERMANENT_VEHICLE = 4
};

enum eBombState {
    BOMB_TIMED_NOT_ACTIVATED = 1,
    BOMB_IGNITION = 2,
    BOMB_STICKY = 3,
    BOMB_TIMED_ACTIVATED = 4,
    BOMB_IGNITION_ACTIVATED = 5
};

#if 0
enum eOrdnanceType;
enum eFlightModel;
enum eDoors;
#else
typedef int eOrdnanceType;
typedef int eFlightModel;
#endif

class CWeapon;
class CPed;
typedef int tWheelState;

class CVehicle : public CPhysical {
public:
    tHandlingData          *m_pHandlingData;
    CAutoPilot              m_autoPilot;
    unsigned char           m_nPrimaryColor;
    unsigned char           m_nSecondaryColor;
    char                    m_anExtras[2];
    short                   m_nWantedStarsOnEnter;
    short                   m_nMissionValue;
    CPed                   *m_pDriver;
    CPed                   *m_pPassenger[8];
    unsigned char           m_nNumPassengers;
    char                    m_nNumGettingIn;
    char                    m_nGettingInFlags;
    char                    m_nGettingOutFlags;
    unsigned char           m_nNumMaxPassengers;
    char field_1CD[19];
    CEntity                *m_pRoad;
    CFire                  *m_pCarFire;          
    float                   m_fSteerAngle;
    float                   m_fGasPedal;
    float                   m_fBreakPedal;
    unsigned char           m_nCreatedBy;        // see eVehicleCreatedBy
    struct {
        unsigned char bIsLawEnforcer : 1; 
        unsigned char bIsAmbulanceOnDuty : 1; 
        unsigned char bIsFireTruckOnDuty : 1; 
        unsigned char bIsLocked : 1; 
        unsigned char bEngineOn : 1; 
        unsigned char bIsHandbrakeOn : 1;
        unsigned char bLightsOn : 1; 
        unsigned char b08 : 1;

        unsigned char bIsVan : 1;
        unsigned char bIsBus : 1;
        unsigned char bIsBig : 1;
        unsigned char bIsLow : 1;
        unsigned char b13 : 1;
        unsigned char b14 : 1;
        unsigned char b15 : 1;
        unsigned char b16 : 1;

        unsigned char b17 : 1;
        unsigned char bIsDamaged : 1;
        unsigned char b19 : 1;
        unsigned char b20 : 1;
        unsigned char b21 : 1;
        unsigned char b22 : 1;
        unsigned char b23 : 1;
        unsigned char b24 : 1;

        unsigned char bOccupantsHaveBeenGenerated : 1;
        unsigned char b26 : 1;
        unsigned char b27 : 1;
        unsigned char b28 : 1;
        unsigned char b29 : 1;
        unsigned char b30 : 1;
        unsigned char b31 : 1;
        unsigned char b32 : 1;
    } m_nVehicleFlags;
    char field_1F9;
    unsigned char           m_nAmmoInClip[1];    // Used to make the guns on boat do a reload (20 by default)
    char field_1FB;
    char field_1FC[4];
    float                   m_fHealth;           // 1000.0f = full health. 0 -> explode
    unsigned char           m_nCurrentGear;
    char field_205[3];
    int field_208;
    unsigned int            m_nGunFiringTime;    // last time when gun on vehicle was fired (used on boats)
    unsigned int            m_nTimeOfDeath;
    short field_214;
    short                   m_nBombTimer;        // goes down with each frame
    CPed                   *m_pWhoDetonatedMe;   // if vehicle was detonated, game copies m_pWhoInstalledBombOnMe here
    float field_21C;
    float field_220;
    unsigned int            m_nDoorLock;         // see enum eCarLock
    char                    m_nLastWeaponDamage; // see eWeaponType, -1 if no damage
    char                    m_nRadioStation;
    char field_22A;
    char field_22B;
    unsigned char           m_nCarHornTimer;
    char field_22D;
    unsigned char           m_nSirenOrAlarm;
    char field_22F;
    CStoredCollPoly         m_frontCollPoly;     // poly which is under front part of car
    CStoredCollPoly         m_rearCollPoly;      // poly which is under rear part of car
    float                   m_fSteerRatio;
    unsigned int            m_nVehicleClass;   // see enum eVehicleType

protected:
    CVehicle(plugin::dummy_func_t) : CPhysical(plugin::dummy) {}
public:
    

    CVehicle(const CVehicle &) = delete;
    CVehicle &operator=(const CVehicle &) = delete;

    static bool& m_bDisableMouseSteering;
    static bool& bWheelsOnlyCheat;
    static bool& bAllDodosCheat;
    static bool& bCheat3;
    static bool& bCheat4;                                                                                                                         
    static bool& bCheat5; 
    static bool& bAlreadySkidding;
    static bool& bBraking;
    static bool& bDriving;

    //vtable

    void ProcessControlInputs(unsigned char playerNum);
    // component index in m_apModelNodes array
    void GetComponentWorldPosition(int componentId, CVector& posnOut);
    // component index in m_apModelNodes array
    bool IsComponentPresent(int componentId);
    void SetComponentRotation(int componentId, CVector rotation);
    void OpenDoor(int componentId, eDoors door, float doorOpenRatio);
    void ProcessOpenDoor(unsigned int nodeIndex, unsigned int arg1, float angle);
    bool IsDoorReady(eDoors door);
    bool IsDoorFullyOpen(eDoors door);
    bool IsDoorClosed(eDoors door);
    bool IsDoorMissing(eDoors door);
    // remove ref to this entity
    void RemoveRefsToVehicle(CEntity* entity);
    void BlowUpCar(CEntity* damager);
    bool SetUpWheelColModel(CColModel* wheelCol);
    void BurstTyre(unsigned char tyreComponentId);
    bool IsRoomForPedToLeaveCar(unsigned int door, CVector* point);
    float GetHeightAboveRoad();
    void PlayCarHorn();

    //funcs

    bool AddPassenger(CPed* passenger);
    bool AddPassenger(CPed* passenger, unsigned char seatNumber);
    bool CanBeDeleted();
    bool CanPedEnterCar();
    bool CanPedExitCar();
    bool CanPedOpenLocks(CPed const* ped);
    bool CarHasRoof();
    void ChangeLawEnforcerState(unsigned char state);
    void DoFixedMachineGuns();
    void ExtinguishCarFire();
    void FlyingControl(eFlightModel flightModel);
    void InflictDamage(CEntity* damager, eWeaponType weapon, float intensity, CVector coords);
    bool IsLawEnforcementVehicle();
    bool IsOnItsSide();
    bool IsSphereTouchingVehicle(float x, float y, float z, float radius);
    bool IsUpsideDown();
    bool IsVehicleNormal();
    void ProcessCarAlarm();
    void ProcessDelayedExplosion();
    void ProcessWheel(CVector& arg0, CVector& arg1, CVector& arg2, CVector& arg3, int arg4, float arg5, float arg6, float arg7, char arg8, float* arg9, tWheelState* arg10, unsigned short arg11);
    float ProcessWheelRotation(tWheelState wheelState, CVector const& arg1, CVector const& arg2, float arg3);
    void RemoveDriver();
    void RemovePassenger(CPed* passenger);
    void SetDriver(CPed* driver);
    CPed* SetUpDriver();
    CPed* SetupPassenger(int seatNumber);
    char ShufflePassengersToMakeSpace();
    bool UsesSiren();
    static void operator delete(void* data);
    static void* operator new(unsigned int size);
    static void* operator new(unsigned int size, int arg1);
};

VALIDATE_SIZE(CVehicle, 0x288);

extern float &fBurstTyreMod;      // 0.1
extern float &fBurstSpeedMax;     // 0.3
extern float &fSpeedResistanceY;  // 500.0
extern float &fSpeedResistanceZ;  // 500.0
extern float &fThrustVar;         // 0.3
extern float &fRotorFallOff;      // 0.75
extern float &fStabiliseVar;      // 0.015
extern float &fPitchVar;          // 0.006
extern float &fRollVar;           // 0.006
extern float &fYawVar;            // -0.001
extern float &fPitchBrake;        // 10.0
extern float &fRollBrake;         // 10.0
extern float &fSpinSpeedRes;      // 20.0
extern float &fRCAeroThrust;      // 0.003
extern float &fRCPropFallOff;     // 3.0
extern float &fRCYawMult;         // -0.01
extern float &fRCRudderMult;      // 0.2
extern float &fRCSideSlipMult;    // 0.1
extern float &fRCRollMult;        // 0.02
extern float &fRCRollStabilise;   // -0.08
extern float &fRCPitchMult;       // 0.005
extern float &fRCTailMult;        // 0.3
extern float &fRCFormLiftMult;    // 0.02
extern float &fRCAttackLiftMult;  // 0.25
extern float &fSeaThrust;         // 0.002
extern float &fSeaPropFallOff;    // 2.3
extern float &fSeaYawMult;        // -0.0003
extern float &fSeaRudderMult;     // 0.01
extern float &fSeaSideSlipMult;   // 0.1
extern float &fSeaRollMult;       // 0.0015
extern float &fSeaRollStabilise;  // -0.01
extern float &fSeaPitchMult;      // 0.0002
extern float &fSeaTailMult;       // 0.01
extern float &fSeaFormLiftMult;   // 0.012
extern float &fSeaAttackLiftMult; // 0.1
