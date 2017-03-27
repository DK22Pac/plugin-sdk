/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CPhysical.h"
#include "CColModel.h"
#include "CDamageManager.h"
#include "eWeaponType.h"
#include "CStoredCollPoly.h"

class CPlayerPed;

enum eCarWeapon {

};

enum eCarLock {

};

enum eVehicleType {
    
};

enum eVehicleApperance {
    
};

enum eVehicleLightsFlags {
    VEHICLE_LIGHTS_TWIN = 1,
    VEHICLE_LIGHTS_IGNORE_DAMAGE = 4,
    VEHICLE_LIGHTS_DISABLE_FRONT = 16,
    VEHICLE_LIGHTS_DISABLE_REAR = 32
};

enum eVehicleCreatedBy {
    RANDOM_VEHICLE = 0,
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
    void                   *m_pHandling;
    int field_12C;
    int field_130;
    int field_134;
    int field_138;
    unsigned int            m_nSpeedScaleFactor;
    int field_140;
    int field_144;
    int field_148;
    int field_14C;
    int field_150;
    char field_154; // pad?
    char field_155;
    char field_156;
    char field_157;
    char field_158;
    char                    m_nDrivingStyle;
    char                    m_nCarMission;
    char                    m_nAnimationId;
    unsigned int            m_nAnimationTime;
    int field_160;
    unsigned char           m_nCruiseSpeed;
    char field_165;
    char field_166[14];
    void                   *m_pPathNodes[8];
    short                   m_nNumPathNodes;
    char field_196[2];
    CVehicle               *m_pCarToRam;
    unsigned char           m_nPrimaryColor;
    unsigned char           m_nSecondaryColor;
    unsigned char           m_nExtra[2];
    short field_1A0;
    char field_1A2[2];
    CPed                   *m_pDriver;
    CPed                   *m_pPassenger[8];
    unsigned char           m_nNumPassengers;
    char                    m_nNumGettingIn;
    char                    m_nGettingInFlags;
    char                    m_nGettingOutFlags;
    unsigned char           m_nNumMaxPassengers;
    char field_1CD[19];
    CEntity                *m_pRoad;
    void                   *m_pCarFire;          // CFire *
    float                   m_fSteerAngle;
    float                   m_fGasPedal;
    float                   m_fBreakPedal;
    unsigned char           m_nCreatedBy;        // see eVehicleCreatedBy
    unsigned char           m_nVehicleFlags;
    char field_1F6;
    char field_1F7;
    char field_1F8;
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
    unsigned int            m_nVehicleSubType;   // see enum eVehicleType

protected:
    CVehicle(plugin::dummy_func_t) : CPhysical(plugin::dummy) {}
public:
    

    CVehicle(const CVehicle &) = delete;
    CVehicle &operator=(const CVehicle &) = delete;

    static bool& m_bDisableMouseSteering;
    static bool& bWheelsOnlyCheat;
    static bool& bAllDodosCheat;
    static bool& bCheat3;

    //vtable

    void ProcessControlInputs(unsigned char playerNum);
    // component index in m_apModelNodes array
    void GetComponentWorldPosition(int componentId, CVector& posnOut);
    // component index in m_apModelNodes array
    bool IsComponentPresent(int componentId);
    void SetComponentRotation(int componentId, CVector arg1);
    void OpenDoor(int componentId, eDoors door, float doorOpenRatio);
    void ProcessOpenDoor(unsigned int arg0, unsigned int arg1, float arg2);
    bool IsDoorReady(eDoors door);
    bool IsDoorFullyOpen(eDoors door);
    bool IsDoorClosed(eDoors door);
    bool IsDoorMissing(eDoors door);
    // remove ref to this entity
    void RemoveRefsToVehicle(CEntity* entity);
    void BlowUpCar(CEntity* damager);
    bool SetUpWheelColModel(CColModel* wheelCol);
    void BurstTyre(unsigned char tyreComponentId, bool bPhysicalEffect);
    bool IsRoomForPedToLeaveCar(unsigned int arg0, CVector* arg1);
    float GetHeightAboveRoad();
    void PlayCarHorn();

    //funcs

    bool AddPassenger(CPed* passenger);
    bool AddPassenger(CPed* passenger, unsigned char seatNumber);
    bool CanBeDeleted();
    bool CanPedEnterCar();
    bool CanPedExitCar(bool arg0);
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
    float ProcessWheelRotation(tWheelState arg0, CVector const& arg1, CVector const& arg2, float arg3);
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
    ~CVehicle();
};

VALIDATE_SIZE(CVehicle, 0x288);

extern float &fBurstTyreMod; // 0.1
extern float &fBurstSpeedMax; // 0.3