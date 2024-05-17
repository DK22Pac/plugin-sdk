/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPhysical.h"
#include "tHandlingData.h"
#include "CAutoPilot.h"
#include "CPed.h"
#include "CFire.h"
#include "CStoredCollPoly.h"
#include "CVector.h"
#include "CColModel.h"
#include "eWeaponType.h"

enum PLUGIN_API eBombState {
    BOMB_TIMED_NOT_ACTIVATED = 1,
    BOMB_IGNITION = 2,
    BOMB_STICKY = 3,
    BOMB_TIMED_ACTIVATED = 4,
    BOMB_IGNITION_ACTIVATED = 5
};

enum PLUGIN_API eDoorLock : unsigned int {
    CARLOCK_NOT_USED,
    CARLOCK_UNLOCKED,
    CARLOCK_LOCKED,
    CARLOCK_LOCKOUT_PLAYER_ONLY,
    CARLOCK_LOCKED_PLAYER_INSIDE,
    CARLOCK_LOCKED_INITIALLY,
    CARLOCK_FORCE_SHUT_DOORS
};

enum PLUGIN_API eDoors : unsigned char {
    DOOR_BONNET = 0,
    DOOR_BOOT,
    DOOR_FRONT_LEFT,
    DOOR_FRONT_RIGHT,
    DOOR_REAR_LEFT,
    DOOR_REAR_RIGHT
};

enum PLUGIN_API eFlightModel {
    FLIGHT_MODEL_DODO = 0,
    FLIGHT_MODEL_RCPLANE = 1, //!< not used in III
    FLIGHT_MODEL_HELI = 2,
    FLIGHT_MODEL_SEAPLANE = 3
};

enum PLUGIN_API eVehicleCreatedBy {
    RANDOM_VEHICLE = 1,
    MISSION_VEHICLE = 2,
    PARKED_VEHICLE = 3,
    PERMANENT_VEHICLE = 4
};

enum PLUGIN_API eVehicleLightsFlags {
    VEHICLE_LIGHTS_TWIN = 1,
    VEHICLE_LIGHTS_IGNORE_DAMAGE = 4,
    VEHICLE_LIGHTS_DISABLE_FRONT = 16,
    VEHICLE_LIGHTS_DISABLE_REAR = 32
};

enum PLUGIN_API eVehicleType : unsigned int {
    VEHICLE_AUTOMOBILE = 0,
    VEHICLE_BOAT = 1,
    VEHICLE_TRAIN = 2,
    VEHICLE_HELI = 3,
    VEHICLE_PLANE = 4,
    VEHICLE_BIKE = 5
};

enum PLUGIN_API tWheelState {
    WHEEL_STATE_NORMAL = 0, //!< standing still or rolling normally
    WHEEL_STATE_SPINNING = 1, //!< rotating but not moving
    WHEEL_STATE_SKIDDING = 2,
    WHEEL_STATE_FIXED = 3 //!< not rotating
};

class PLUGIN_API CVehicle : public CPhysical {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CVehicle)

public:
    tHandlingData *m_pHandlingData;
    CAutoPilot m_autoPilot;
    unsigned char m_nPrimaryColor;
    unsigned char m_nSecondaryColor;
    char m_anExtras[2];
    short m_nAlarmState;
    short m_nMissionValue;
    CPed *m_pDriver;
    CPed *m_apPassengers[8];
    unsigned char m_nNumPassengers;
    char m_nNumGettingIn;
    char m_nGettingInFlags;
    char m_nGettingOutFlags;
    unsigned char m_nMaxPassengers;
    float field_1D0[4];
    CEntity *m_pCurGroundEntity;
    CFire *m_pCarFire;
    float m_fSteerAngle;
    float m_fGasPedal;
    float m_fBrakePedal;
    unsigned char m_nCreatedBy; //!< see eVehicleCreatedBy
    struct {
        unsigned char bIsLawEnforcer : 1; //!< Is this guy chasing the player at the moment
        unsigned char bIsAmbulanceOnDuty : 1; //!< Ambulance trying to get to an accident
        unsigned char bIsFireTruckOnDuty : 1; //!< Firetruck trying to get to a fire
        unsigned char bIsLocked : 1; //!< Is this guy locked by the script (cannot be removed)
        unsigned char bEngineOn : 1; //!< For sound purposes. Parked cars have their engines switched off (so do destroyed cars)
        unsigned char bIsHandbrakeOn : 1; //!< How's the handbrake doing ?
        unsigned char bLightsOn : 1; //!< Are the lights switched on ?
        unsigned char bFreebies : 1; //!< Any freebies left in this vehicle ?

        unsigned char bIsVan : 1; //!< Is this vehicle a van (doors at back of vehicle)
        unsigned char bIsBus : 1; //!< Is this vehicle a bus
        unsigned char bIsBig : 1; //!< Is this vehicle a big
        unsigned char bLowVehicle : 1; //!< Need this for sporty type cars to use low getting-in/out anims
        unsigned char bComedyControls : 1; //!< Will make the car hard to control (hopefully in a funny way)
        unsigned char bWarnedPeds : 1; //!< Has scan and warn peds of danger been processed?
        unsigned char bCraneMessageDone : 1; //!< A crane message has been printed for this car allready
        unsigned char bExtendedRange : 1; //!< This vehicle needs to be a bit further away to get deleted

        unsigned char bTakeLessDamage : 1; //!< This vehicle is stronger (takes about 1/4 of damage)
        unsigned char bIsDamaged : 1; //!< This vehicle has been damaged and is displaying all its components
        unsigned char bHasBeenOwnedByPlayer : 1; //!< To work out whether stealing it is a crime
        unsigned char bFadeOut : 1; //!< Fade vehicle out
        unsigned char bIsBeingCarJacked : 1;
        unsigned char bCreateRoadBlockPeds : 1; //!< If this vehicle gets close enough we will create peds (coppers or gang members) round it
        unsigned char bCanBeDamaged : 1; //!< Set to FALSE during cut scenes to avoid explosions
        unsigned char bUsingSpecialColModel : 1; //!< Is player vehicle using special collision model, stored in player strucure

        unsigned char bOccupantsHaveBeenGenerated : 1; //!< Is true if the occupants have already been generated. (Shouldn't happen again)
        unsigned char bGunSwitchedOff : 1; //!< Level designers can use this to switch off guns on boats
        unsigned char bVehicleColProcessed : 1; //!< Has ProcessEntityCollision been processed for this car?
        unsigned char bIsCarParkVehicle : 1; //!< Car has been created using the special CAR_PARK script command
        unsigned char bHasAlreadyBeenRecorded : 1; //!< Used for replays
    } m_nVehicleFlags;
    char m_numPedsUseItAsCover;
    unsigned char m_nAmmoInClip; //!< Used to make the guns on boat do a reload (20 by default)
    unsigned char m_nPacManPickupsCarried;
    unsigned char m_nRoadblockType;
    short m_nRoadblockNode;
    float m_fHealth; //!< 1000.0f = full health. 250.0f = fire. 0 -> explode
    unsigned char m_nCurrentGear;
    float m_fChangeGearTime;
    unsigned int m_nGunFiringTime; //!< last time when gun on vehicle was fired (used on boats)
    unsigned int m_nTimeOfDeath;
    unsigned short m_nTimeBlocked;
    short m_nBombTimer; //!< goes down with each frame
    CEntity *m_pBlowUpEntity;
    float m_fMapObjectHeightAhead; //!< front Z?
    float m_fMapObjectHeightBehind; //!< rear Z?
    eDoorLock m_eDoorLock; 
    char m_nLastWeaponDamage; //!< see eWeaponType, -1 if no damage
    unsigned char m_nRadioStation;
    unsigned char m_nRainAudioCounter;
    unsigned char m_nRainSamplesCounter;
    unsigned char m_nCarHornTimer;
    unsigned char m_nCarHornPattern; //!< last horn?
    bool m_bSirenOrAlarm;
    char m_nCcomedyControlState;
    CStoredCollPoly m_frontCollPoly; //!< poly which is under front part of car
    CStoredCollPoly m_rearCollPoly; //!< poly which is under rear part of car
    float m_fSteerInput;
    unsigned int m_nVehicleClass; //!< see enum eVehicleType

    SUPPORTED_10EN_11EN_STEAM static bool &m_bDisableMouseSteering;
    SUPPORTED_10EN_11EN_STEAM static bool &bCheat5;
    SUPPORTED_10EN_11EN_STEAM static bool &bCheat4;
    SUPPORTED_10EN_11EN_STEAM static bool &bCheat3;
    SUPPORTED_10EN_11EN_STEAM static bool &bAllDodosCheat;
    SUPPORTED_10EN_11EN_STEAM static bool &bWheelsOnlyCheat;

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)


    // virtual function #2 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void SetModelIndex(unsigned int modelIndex);

    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)


    // virtual function #6 (not overriden)


    // virtual function #7 (not overriden)


    // virtual function #8 (not overriden)


    // virtual function #9 (not overriden)


    // virtual function #10 (not overriden)


    // virtual function #11 (not overriden)


    // virtual function #12 (not overriden)


    // virtual function #13 (not overriden)

    SUPPORTED_10EN_11EN_STEAM bool SetupLighting();
    SUPPORTED_10EN_11EN_STEAM void RemoveLighting(bool reset);
    SUPPORTED_10EN_11EN_STEAM void FlagToDestroyWhenNextProcessed();

    // virtual function #17 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void ProcessControlInputs(unsigned char padNumber);
    SUPPORTED_10EN_11EN_STEAM void GetComponentWorldPosition(int component, CVector &pos);
    SUPPORTED_10EN_11EN_STEAM bool IsComponentPresent(int component);
    SUPPORTED_10EN_11EN_STEAM void SetComponentRotation(int component, CVector rotation);
    SUPPORTED_10EN_11EN_STEAM void OpenDoor(int component, eDoors door, float angle);
    SUPPORTED_10EN_11EN_STEAM void ProcessOpenDoor(unsigned int component, unsigned int anim, float angle);
    SUPPORTED_10EN_11EN_STEAM bool IsDoorReady(eDoors door);
    SUPPORTED_10EN_11EN_STEAM bool IsDoorFullyOpen(eDoors door);
    SUPPORTED_10EN_11EN_STEAM bool IsDoorClosed(eDoors door);
    SUPPORTED_10EN_11EN_STEAM bool IsDoorMissing(eDoors door);
    SUPPORTED_10EN_11EN_STEAM void RemoveRefsToVehicle(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM void BlowUpCar(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM bool SetUpWheelColModel(CColModel *colModel);
    SUPPORTED_10EN_11EN_STEAM void BurstTyre(unsigned char wheel);
    SUPPORTED_10EN_11EN_STEAM bool IsRoomForPedToLeaveCar(unsigned int component, CVector *doorOffset);
    SUPPORTED_10EN_11EN_STEAM float GetHeightAboveRoad();
    SUPPORTED_10EN_11EN_STEAM void PlayCarHorn();

    SUPPORTED_10EN_11EN_STEAM bool AddPassenger(CPed *passenger);
    SUPPORTED_10EN_11EN_STEAM bool AddPassenger(CPed *passenger, unsigned char number);
    SUPPORTED_10EN_11EN_STEAM bool CanBeDeleted();
    SUPPORTED_10EN_11EN_STEAM bool CanPedEnterCar();
    SUPPORTED_10EN_11EN_STEAM bool CanPedExitCar();
    SUPPORTED_10EN_11EN_STEAM bool CanPedOpenLocks(CPed *ped);
    SUPPORTED_10EN_11EN_STEAM bool CarHasRoof();
    SUPPORTED_10EN_11EN_STEAM void ChangeLawEnforcerState(unsigned char enable);
    SUPPORTED_10EN_11EN_STEAM void DoFixedMachineGuns();
    SUPPORTED_10EN_11EN_STEAM void ExtinguishCarFire();
    SUPPORTED_10EN_11EN_STEAM void FlyingControl(eFlightModel flightModel);
    SUPPORTED_10EN_11EN_STEAM void InflictDamage(CEntity *entity, eWeaponType weaponType, float damage);
    SUPPORTED_10EN_11EN_STEAM bool IsLawEnforcementVehicle();
    SUPPORTED_10EN_11EN_STEAM bool IsOnItsSide();
    SUPPORTED_10EN_11EN_STEAM bool IsSphereTouchingVehicle(float x, float y, float z, float radius);
    SUPPORTED_10EN_11EN_STEAM bool IsUpsideDown();
    SUPPORTED_10EN_11EN_STEAM bool IsVehicleNormal();
    SUPPORTED_10EN_11EN_STEAM void ProcessCarAlarm();
    SUPPORTED_10EN_11EN_STEAM void ProcessDelayedExplosion();
    SUPPORTED_10EN_11EN_STEAM void ProcessWheel(CVector &wheelFwd, CVector &wheelRight, CVector &wheelContactSpeed, CVector &wheelContactPoint, int wheelsOnGround, float thrust, float brake, float adhesion, char wheelId, float *wheelSpeed, tWheelState *wheelState, unsigned short wheelStatus);
    SUPPORTED_10EN_11EN_STEAM float ProcessWheelRotation(tWheelState state, CVector const &fwd, CVector const &speed, float radius);
    SUPPORTED_10EN_11EN_STEAM void RemoveDriver();
    SUPPORTED_10EN_11EN_STEAM void RemovePassenger(CPed *passenger);
    SUPPORTED_10EN_11EN_STEAM void SetDriver(CPed *driver);
    SUPPORTED_10EN_11EN_STEAM CPed *SetUpDriver();
    SUPPORTED_10EN_11EN_STEAM CPed *SetupPassenger(int number);
    SUPPORTED_10EN_11EN_STEAM bool ShufflePassengersToMakeSpace();
    SUPPORTED_10EN_11EN_STEAM bool UsesSiren(unsigned int vehicleModel);
};

//! 0.1f
SUPPORTED_10EN_11EN_STEAM extern float &fBurstTyreMod;
//! 0.3f
SUPPORTED_10EN_11EN_STEAM extern float &fBurstSpeedMax;
//! 500.0f
SUPPORTED_10EN_11EN_STEAM extern float &fSpeedResistanceY;
//! 500.0f
SUPPORTED_10EN_11EN_STEAM extern float &fSpeedResistanceZ;
//! 0.3f
SUPPORTED_10EN_11EN_STEAM extern float &fThrustVar;
//! 0.75f
SUPPORTED_10EN_11EN_STEAM extern float &fRotorFallOff;
//! 0.015f
SUPPORTED_10EN_11EN_STEAM extern float &fStabiliseVar;
//! 0.006f
SUPPORTED_10EN_11EN_STEAM extern float &fPitchVar;
//! 0.006f
SUPPORTED_10EN_11EN_STEAM extern float &fRollVar;
//! -0.001f
SUPPORTED_10EN_11EN_STEAM extern float &fYawVar;
//! 10.0f
SUPPORTED_10EN_11EN_STEAM extern float &fPitchBrake;
//! 10.0f
SUPPORTED_10EN_11EN_STEAM extern float &fRollBrake;
//! 20.0f
SUPPORTED_10EN_11EN_STEAM extern float &fSpinSpeedRes;
//! 0.003f
SUPPORTED_10EN_11EN_STEAM extern float &fRCAeroThrust;
//! 3.0f
SUPPORTED_10EN_11EN_STEAM extern float &fRCPropFallOff;
//! -0.01f
SUPPORTED_10EN_11EN_STEAM extern float &fRCYawMult;
//! 0.2f
SUPPORTED_10EN_11EN_STEAM extern float &fRCRudderMult;
//! 0.1f
SUPPORTED_10EN_11EN_STEAM extern float &fRCSideSlipMult;
//! 0.02f
SUPPORTED_10EN_11EN_STEAM extern float &fRCRollMult;
//! -0.08f
SUPPORTED_10EN_11EN_STEAM extern float &fRCRollStabilise;
//! 0.005f
SUPPORTED_10EN_11EN_STEAM extern float &fRCPitchMult;
//! 0.3f
SUPPORTED_10EN_11EN_STEAM extern float &fRCTailMult;
//! 0.02f
SUPPORTED_10EN_11EN_STEAM extern float &fRCFormLiftMult;
//! 0.25f
SUPPORTED_10EN_11EN_STEAM extern float &fRCAttackLiftMult;
//! 0.002f
SUPPORTED_10EN_11EN_STEAM extern float &fSeaThrust;
//! 2.3f
SUPPORTED_10EN_11EN_STEAM extern float &fSeaPropFallOff;
//! -0.0003f
SUPPORTED_10EN_11EN_STEAM extern float &fSeaYawMult;
//! 0.01f
SUPPORTED_10EN_11EN_STEAM extern float &fSeaRudderMult;
//! 0.1f
SUPPORTED_10EN_11EN_STEAM extern float &fSeaSideSlipMult;
//! 0.0015f
SUPPORTED_10EN_11EN_STEAM extern float &fSeaRollMult;
//! -0.01f
SUPPORTED_10EN_11EN_STEAM extern float &fSeaRollStabilise;
//! 0.0002f
SUPPORTED_10EN_11EN_STEAM extern float &fSeaPitchMult;
//! 0.01f
SUPPORTED_10EN_11EN_STEAM extern float &fSeaTailMult;
//! 0.012f
SUPPORTED_10EN_11EN_STEAM extern float &fSeaFormLiftMult;
//! 0.1f
SUPPORTED_10EN_11EN_STEAM extern float &fSeaAttackLiftMult;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecHeliMoveRes;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecRCAeroResistance;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecRCHeliMoveRes;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecHeliResistance;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecRCHeliResistance;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecSeaAeroResistance;

SUPPORTED_10EN_11EN_STEAM void DestroyVehicleAndDriverAndPassengers(CVehicle *vehicle);

VTABLE_DESC(CVehicle, 0x6028A8, 35);
VALIDATE_SIZE(CVehicle, 0x288);

#include "meta/meta.CVehicle.h"
