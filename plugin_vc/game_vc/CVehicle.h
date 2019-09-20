/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPhysical.h"
#include "CAutoPilot.h"
#include "CStoredCollPoly.h"
#include "CDamageManager.h"
#include "tFlyingHandlingData.h"
#include "tBikeHandlingData.h"
#include "tHandlingData.h"
#include "eWeaponType.h"



class CPlayerPed;
class CCopPed;

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

enum eVehicleApperance {
    VEHICLE_APPEARANCE_AUTOMOBILE = 1,
    VEHICLE_APPEARANCE_BIKE,
    VEHICLE_APPEARANCE_HELI,
    VEHICLE_APPEARANCE_BOAT,
    VEHICLE_APPEARANCE_PLANE,
};

enum eVehicleLightsFlags {

};

enum eVehicleCreatedBy {
    RANDOM_VEHICLE = 1,
    MISSION_VEHICLE = 2,
    PARKED_VEHICLE = 3,
    PERMANENT_VEHICLE = 4
};

enum eBombState {
    BOMB_DETONATED = 0,
    BOMB_READY = 3,
    BOMB_NOT_SET = 8,
    BOMB_SET = 11
};

#if 0
enum eOrdnanceType;
enum eFlightModel;
enum eDoors;
enum eBikeWheelSpecial;
#else
typedef int eOrdnanceType;
typedef int eFlightModel;
typedef int eBikeWheelSpecial;
#endif

class CWeapon;
class CPed;
typedef int tWheelState;

class CVehicle : public CPhysical {
protected:
    CVehicle(plugin::dummy_func_t) : CPhysical(plugin::dummy) {}
public:
    tHandlingData *m_pHandlingData;
    tFlyingHandlingData *m_pFlyingHandling;
    CAutoPilot m_autoPilot;
    CVehicle *m_pVehicleToRam;
    unsigned char m_nPrimaryColor;
    unsigned char m_nSecondaryColor;
    char m_anExtras[2];
    short m_wWantedStarsOnEnter;
    short m_wMissionValue;
    class CPed *m_pDriver;
    class CPed *m_passengers[8];
    unsigned char m_nNumPassengers;
    unsigned char m_nNumGettingIn;
    unsigned char m_nGettingInFlags;
    unsigned char m_nGettingOutFlags;
    unsigned char m_nMaxPassengers;
    char __f01CD[3];
    int field_1D4;
    CVector field_1D8;
    CEntity *m_pEntityWeAreOn;
    class CFire *m_pFire;
    float m_fSteerAngle;
    float m_fGasPedal;
    float m_fBreakPedal;
    unsigned char m_nCreatedBy; // see eVehicleCreatedBy
    struct {
        unsigned char b01 : 1;
        unsigned char b02 : 1;
        unsigned char b03 : 1;
        unsigned char bIsLocked : 1; // Is this guy locked by the script (cannot be removed)
        unsigned char bEngineOn : 1; // For sound purposes. Parked cars have their engines switched off (so do destroyed cars)
        unsigned char bIsHandbrakeOn : 1;
        unsigned char bLightsOn : 1; // Are the lights switched on ?
        unsigned char b08 : 1;
        unsigned char bIsVan : 1; // Is this vehicle a van (doors at back of vehicle)
        unsigned char bHideOccupants : 1;
        unsigned char bIsBus : 1; // Is this vehicle a bus
        unsigned char bIsBig : 1; // Is this vehicle a big
        unsigned char bComedyControls : 1; // Will make the car hard to control (hopefully in a funny way)
        unsigned char b14 : 1;
        unsigned char b15 : 1;
        unsigned char b16 : 1;
        unsigned char b17 : 1;
        unsigned char bIsDamaged : 1; // This vehicle has been damaged and is displaying all its components
        unsigned char b19 : 1;
        unsigned char b20 : 1;
        unsigned char b21 : 1;
        unsigned char bSpawnCops : 1;
        unsigned char b23 : 1;
        unsigned char bUsePlayerColModel : 1;
        unsigned char bIsLawEnforcementVeh : 1;
        unsigned char b26 : 1;
        unsigned char bHasDriver : 1;
        unsigned char b28 : 1;
        unsigned char b29 : 1;
        unsigned char b30 : 1;
        unsigned char b31 : 1;
        unsigned char b32 : 1;
        unsigned char b33 : 1;
        unsigned char bCarTiresInvulnerable : 1;
        unsigned char b35 : 1;
        unsigned char b36 : 1;
        unsigned char b37 : 1;
        unsigned char b38 : 1;
        unsigned char b39 : 1;
        unsigned char b40 : 1;
        unsigned char b41 : 1;
        unsigned char b42 : 1;
        unsigned char b43 : 1;
        unsigned char b44 : 1;
        unsigned char b45 : 1;
        unsigned char b46 : 1;
        unsigned char b47 : 1;
        unsigned char b48 : 1;
        unsigned char b49 : 1;
        unsigned char b50 : 1;
        unsigned char b51 : 1;
        unsigned char b52 : 1;
        unsigned char b53 : 1;
        unsigned char b54 : 1;
        unsigned char b55 : 1;
        unsigned char b56 : 1;
        unsigned char b57 : 1;
        unsigned char b58 : 1;
        unsigned char b59 : 1;
        unsigned char b60 : 1;
        unsigned char b61 : 1;
        unsigned char b62 : 1;
        unsigned char b63 : 1;
        unsigned char b64 : 1;
    } m_nVehicleFlags;
    unsigned char m_nAmmoInClip;
    char field_201;
    float m_fHealth;
    unsigned char m_nCurrentGear;
    char __f0205[3];
    int field_20C;
    int field_210;
    int m_nTimeTillWeNeedThisCar;
    int field_218;
    int m_nTimeOfDeath;
    short field_220;
    short m_wBombTimer; // goes down with each frame
    int field_224;
    int field_228;
    int field_22C;
    unsigned int m_nLockStatus;
    unsigned char m_nLastWeaponDamage;
    char __f0231[3];
    CEntity *pLastDamEntity;
    unsigned char m_nRadioStation;
    char field_23D;
    char field_23E;
    unsigned int m_bHornEnabled;
    char field_244;
    unsigned char m_nSirenOrAlarm;
    unsigned char m_nSirenExtra;
    char field_247;
    CStoredCollPoly m_frontCollPoly; // poly which is under front part of car
    CStoredCollPoly m_rearCollPoly; // poly which is under rear part of car
    float m_fSteerRatio;
    unsigned int m_nVehicleClass; // see enum eVehicleType

    CVehicle(const CVehicle &) = delete;
    CVehicle &operator=(const CVehicle &) = delete;


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
    bool IsDoorReady(unsigned int door);
    bool IsDoorMissing(unsigned int door);
    // check if car has roof as extra
    bool IsOpenTopCar();
    // remove ref to this entity
    void RemoveRefsToVehicle(CEntity* entity);
    void BlowUpCar(CEntity* damager);
    bool SetUpWheelColModel(CColModel* wheelCol);
    // returns false if it's not possible to burst vehicle's tyre or it is already damaged. bPhysicalEffect=true applies random moving force to vehicle
    bool BurstTyre(unsigned char tyreComponentId, bool bPhysicalEffect);
    bool IsRoomForPedToLeaveCar(unsigned int arg0, CVector* arg1);
    bool IsClearToDriveAway();
    float GetHeightAboveRoad();
    void PlayCarHorn();

    //funcs

    void ActivateBomb();
    void ActivateBombWhenEntered();
    bool AddPassenger(CPed* passenger);
    bool AddPassenger(CPed* passenger, unsigned char seatNumber);
    void BladeColSectorList(CPtrList& ptrList, CColModel& colModel, CMatrix& matrix, short arg3, float arg4);
    bool CanBeDeleted();
    bool CanDoorsBeDamaged();
    bool CanPedEnterCar();
    bool CanPedExitCar(bool arg0);
    bool CanPedJumpOffBike();
    bool CanPedJumpOutCar();
    bool CanPedOpenLocks(CPed* ped);
    bool CarHasRoof();
    void ChangeLawEnforcerState(unsigned char state);
    void DoBladeCollision(CVector arg0, CMatrix& matrix, short arg2, float arg3, float arg4);
    void DoFixedMachineGuns();
    void DoSunGlare();
    void ExtinguishCarFire();
    // return nearest wheel?
    int FindTyreNearestPoint(float x, float y);
    void FireFixedMachineGuns();
    void FlyingControl(eFlightModel flightModel);
    //1 - automobile, 2 - bike, 3 - heli, 4 - boat, 5 - plane
    int GetVehicleAppearance();
    static void HeliDustGenerate(CEntity* arg0, float arg1, float arg2, int arg3);
    void InflictDamage(CEntity* damager, eWeaponType weapon, float intensity, CVector coords);
    bool IsDriver(CPed* ped);
    bool IsDriver(int modelIndex);
    bool IsLawEnforcementVehicle();
    // return this->m_pCoords->matrix.right.z >= 0.8 || this->m_pCoords->matrix.right.z <= -0.8;
    bool IsOnItsSide();
    bool IsPassenger(CPed* ped);
    bool IsPassenger(int modelIndex);
    bool IsSphereTouchingVehicle(float x, float y, float z, float radius);
    // return this->m_pCoords->matrix.at.z <= -0.9;
    bool IsUpsideDown();
    bool IsVehicleNormal();
    void KillPedsInVehicle();
    void MakeNonDraggedPedsLeaveVehicle(CPed* arg0, CPed* arg1, CPlayerPed*& arg2, CCopPed*& arg3);
    void ProcessBikeWheel(CVector& arg0, CVector& arg1, CVector& arg2, CVector& arg3, int arg4, float arg5, float arg6, float arg7, float arg8, char arg9, float* arg10, tWheelState* arg11, eBikeWheelSpecial arg12, unsigned short arg13);
    void ProcessCarAlarm();
    void ProcessDelayedExplosion();
    void ProcessWheel(CVector& arg0, CVector& arg1, CVector& arg2, CVector& arg3, int arg4, float arg5, float arg6, float arg7, char arg8, float* arg9, tWheelState* arg10, unsigned short arg11);
    float ProcessWheelRotation(tWheelState wheelState, CVector const& arg1, CVector const& arg2, float arg3);
    void RemoveDriver(bool arg0);
    void RemovePassenger(CPed* passenger);
    void SetComponentAtomicAlpha(RpAtomic* atomic, int alpha);
    void SetDriver(CPed* driver);
    CPed* SetUpDriver();
    CPed* SetupPassenger(int arg0);
    bool ShufflePassengersToMakeSpace();
    void UpdateClumpAlpha();
    void UpdatePassengerList();
    bool UsesSiren();

    static void* operator new(unsigned int size);
    static void* operator new(unsigned int size, int arg1);
    static void operator delete(void* data);
};

VALIDATE_SIZE(CVehicle, 0x2A0);

extern float &fBurstTyreMod; // 0.13
extern float &fBurstSpeedMax; // 0.3
extern float &fBurstBikeTyreMod; // 0.05
extern float &fBurstBikeSpeedMax; // 0.12
extern float &fTweakBikeWheelTurnForce; // 2.0
extern float &ROTOR_SEMI_THICKNESS; // 0.05
extern float &ROTOR_TURN_SPEED; // 0.2
extern float &ROTOR_DISGUARD_MULT; // 0.3
extern float &ROTOR_COL_ELASTICITY; // 1.0
extern float &ROTOR_DEFAULT_DAMAGE; // 100.0
extern float &ROTOR_COL_TURNMULT; // -0.001
