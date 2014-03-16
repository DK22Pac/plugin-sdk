#pragma once
#include "plugin/plugin.h"
#include "CPhysical.h"
#include "CAEVehicleAudioEntity.h"
#include "tHandlingData.h"
#include "tFlyingHandlingData.h"
#include "CAutoPilot.h"
#include "eVehicleHandlingFlags.h"
#include "CStoredCollPoly.h"
#include "CVehicleModelInfo.h"
#include "tBoatHandlingData.h"
#include "CPtrList.h"
#include "CRideAnimData.h"

/*  Thanks to MTA team for https://code.google.com/p/mtasa-blue/source/browse/tags/1.3.4/MTA10/game_sa/CVehicleSA.h */

enum eCarWeapon
{
    CAR_WEAPON_NOT_USED,
    CAR_WEAPON_HEAVY_GUN,
    CAR_WEAPON_FREEFALL_BOMB,
    CAR_WEAPON_LOCK_ON_ROCKET,
    CAR_WEAPON_DOUBLE_ROCKET
};

enum eCarLock
{
    CARLOCK_NOT_USED,
    CARLOCK_UNLOCKED,
    CARLOCK_LOCKED,
    CARLOCK_LOCKOUT_PLAYER_ONLY,
    CARLOCK_LOCKED_PLAYER_INSIDE,
    CARLOCK_COP_CAR,
    CARLOCK_FORCE_SHUT_DOORS,
    CARLOCK_SKIP_SHUT_DOORS
};

enum eVehicleType
{
    VEHICLE_AUTOMOBILE,
    VEHICLE_MTRUCK,
    VEHICLE_QUAD,
    VEHICLE_HELI,
    VEHICLE_PLANE,
    VEHICLE_BOAT,
    VEHICLE_TRAIN,
    VEHICLE_FHELI,
    VEHICLE_FPLANE,
    VEHICLE_BIKE,
    VEHICLE_BMX,
    VEHICLE_TRAILER
};

enum eOrdnanceType;
enum eFlightModel;
enum eDoors;
enum eBikeWheelSpecial;

class CWeapon;
typedef int tWheelState;

#pragma pack(push, 4)
class PLUGIN_API  CVehicle : public CPhysical
{
public:
    CAEVehicleAudioEntity      m_vehicleAudio;
    tHandlingData             *m_pHandlingData;
    tFlyingHandlingData       *m_pFlyingHandlingData;
    union{
        eVehicleHandlingFlags  m_dwHandlingFlags;
        struct {
            UInt32 m_b1gBoost : 1;
            UInt32 m_b2gBoost : 1;
            UInt32 m_bNpcAntiRoll : 1;
            UInt32 m_bNpcNeutralHandl : 1;
            UInt32 m_bNoHandbrake : 1;
            UInt32 m_bSteerRearwheels : 1;
            UInt32 m_bHbRearwheelSteer : 1;
            UInt32 m_bAltSteerOpt : 1;
            UInt32 m_bWheelFNarrow2 : 1;
            UInt32 m_bWheelFNarrow : 1;
            UInt32 m_bWheelFWide : 1;
            UInt32 m_bWheelFWide2 : 1;
            UInt32 m_bWheelRNarrow2 : 1;
            UInt32 m_bWheelRNarrow : 1;
            UInt32 m_bWheelRWide : 1;
            UInt32 m_bWheelRWide2 : 1;
            UInt32 m_bHydraulicGeom : 1;
            UInt32 m_bHydraulicInst : 1;
            UInt32 m_bHydraulicNone : 1;
            UInt32 m_bNosInst : 1;
            UInt32 m_bOffroadAbility : 1;
            UInt32 m_bOffroadAbility2 : 1;
            UInt32 m_bHalogenLights : 1;
            UInt32 m_bProcRearwheelFirst : 1;
            UInt32 m_bUseMaxspLimit : 1;
            UInt32 m_bLowRider : 1;
            UInt32 m_bStreetRacer : 1;
            UInt32 m_bSwingingChassis : 1;
        } m_handlingFlags;
    };
    CAutoPilot                 m_autoPilot;
    UInt8  m_bIsLawEnforcer: 1; // Is this guy chasing the player at the moment
    UInt8  m_bIsAmbulanceOnDuty: 1; // Ambulance trying to get to an accident
    UInt8  m_bIsFireTruckOnDuty: 1; // Firetruck trying to get to a fire
    UInt8  m_bIsLocked: 1; // Is this guy locked by the script (cannot be removed)
    UInt8  m_bEngineOn: 1; // For sound purposes. Parked cars have their engines switched off (so do destroyed cars)
    UInt8  m_bIsHandbrakeOn: 1; // How's the handbrake doing ?
    UInt8  m_bLightsOn: 1; // Are the lights switched on ?
    UInt8  m_bFreebies: 1; // Any freebies left in this vehicle ?
    UInt8  m_bIsVan: 1; // Is this vehicle a van (doors at back of vehicle)
    UInt8  m_bIsBus: 1; // Is this vehicle a bus
    UInt8  m_bIsBig: 1; // Is this vehicle a bus
    UInt8  m_bLowVehicle: 1; // Need this for sporty type cars to use low getting-in/out anims
    UInt8  m_bComedyControls: 1; // Will make the car hard to control (hopefully in a funny way)
    UInt8  m_bWarnedPeds: 1; // Has scan and warn peds of danger been processed?
    UInt8  m_bCraneMessageDone: 1; // A crane message has been printed for this car allready
    UInt8  m_bTakeLessDamage: 1; // This vehicle is stronger (takes about 1/4 of damage)
    UInt8  m_bIsDamaged: 1; // This vehicle has been damaged and is displaying all its components
    UInt8  m_bHasBeenOwnedByPlayer : 1;// To work out whether stealing it is a crime
    UInt8  m_bFadeOut: 1; // Fade vehicle out
    UInt8  m_bIsBeingCarJacked: 1; // Fade vehicle out
    UInt8  m_bCreateRoadBlockPeds : 1;// If this vehicle gets close enough we will create peds (coppers or gang members) round it
    UInt8  m_bCanBeDamaged: 1; // Set to FALSE during cut scenes to avoid explosions
    UInt8  m_bOccupantsHaveBeenGenerated : 1; // Is true if the occupants have already been generated. (Shouldn't happen again)
    UInt8  m_bGunSwitchedOff: 1; // Level designers can use this to switch off guns on boats
    UInt8  m_bVehicleColProcessed : 1;// Has ProcessEntityCollision been processed for this car?
    UInt8  m_bIsCarParkVehicle: 1; // Car has been created using the special CAR_PARK script command
    UInt8  m_bHasAlreadyBeenRecorded : 1; // Used for replays
    UInt8  m_bPartOfConvoy: 1;
    UInt8  m_bHeliMinimumTilt: 1; // This heli should have almost no tilt really
    UInt8  m_bAudioChangingGear: 1; // sounds like vehicle is changing gear
    UInt8  m_bIsDrowning: 1; // is vehicle occupants taking damage in water (i.e. vehicle is dead in water)
    UInt8  m_bTyresDontBurst: 1; // If this is set the tyres are invincible
    UInt8  m_bCreatedAsPoliceVehicle : 1;// True if this guy was created as a police vehicle (enforcer, policecar, miamivice car etc)
    UInt8  m_bRestingOnPhysical: 1; // Dont go static cause car is sitting on a physical object that might get removed
    UInt8  m_bParking : 1;
    UInt8  m_bCanPark : 1;
    UInt8  m_bFireGun: 1; // Does the ai of this vehicle want to fire it's gun?
    UInt8  m_bDriverLastFrame: 1; // Was there a driver present last frame ?
    UInt8  m_bNeverUseSmallerRemovalRange: 1;// Some vehicles (like planes) we don't want to remove just behind the camera.
    UInt8  m_bIsRCVehicle: 1; // Is this a remote controlled (small) vehicle. True whether the player or AI controls it.
    UInt8  m_bAlwaysSkidMarks: 1; // This vehicle leaves skidmarks regardless of the wheels' states.
    UInt8  m_bEngineBroken: 1; // Engine doesn't work. Player can get in but the vehicle won't drive
    UInt8  m_bVehicleCanBeTargetted : 1;// The ped driving this vehicle can be targetted, (for Torenos plane mission)
    UInt8  m_bPartOfAttackWave: 1; // This car is used in an attack during a gang war
    UInt8  m_bWinchCanPickMeUp: 1; // This car cannot be picked up by any ropes.
    UInt8  m_bImpounded: 1; // Has this vehicle been in a police impounding garage
    UInt8  m_bVehicleCanBeTargettedByHS  : 1;// Heat seeking missiles will not target this vehicle.
    UInt8  m_bSirenOrAlarm: 1; // Set to TRUE if siren or alarm active, else FALSE
    UInt8  m_bHasGangLeaningOn: 1;
    UInt8  m_bGangMembersForRoadBlock : 1;// Will generate gang members if NumPedsForRoadBlock > 0
    UInt8  m_bDoesProvideCover: 1; // If this is false this particular vehicle can not be used to take cover behind.
    UInt8  m_bMadDriver: 1; // This vehicle is driving like a lunatic
    UInt8  m_bUpgradedStereo: 1; // This vehicle has an upgraded stereo
    UInt8  m_bConsideredByPlayer: 1; // This vehicle is considered by the player to enter
    UInt8  m_bPetrolTankIsWeakPoint : 1;// If false shootong the petrol tank will NOT Blow up the car
    UInt8  m_bDisableParticles: 1; // Disable particles from this car. Used in garage.
    UInt8  m_bHasBeenResprayed: 1; // Has been resprayed in a respray garage. Reset after it has been checked.
    UInt8  m_bUseCarCheats: 1; // If this is true will set the car cheat stuff up in ProcessControl()
    UInt8  m_bDontSetColourWhenRemapping : 1;// If the texture gets remapped we don't want to change the colour with it.
    UInt8  m_bUsedForReplay: 1; // This car is controlled by replay and should be removed when replay is done.
    UInt32 m_dwCreationTime;
    UInt8  m_nPrimaryColor;
    UInt8  m_nSecondaryColor;
    UInt8  m_nTertiaryColor;
    UInt8  m_nQuaternaryColor;
    Int8   m_anExtras[2];
    Int16  m_awUpgrades[15];
    Float  m_fWheelScale;
    UInt16 m_wAlarmState;
    Int16  m_wForcedRandomRouteSeed; // if this is non-zero the random wander gets deterministic
    class CPed *m_pDriver;
    class CPed *m_apPassengers[8];
    UInt8  m_nNumPassengers;
    UInt8  m_nNumGettingIn;
    UInt8  m_nGettingInFlags;
    UInt8  m_nGettingOutFlags;
    UInt8  m_nMaxPassengers;
    UInt8  m_nWindowsOpenFlags; // initialised, but not used?
    UInt8  m_nNitroBoosts;
    UInt8  m_nSpecialColModel;
    CEntity *m_pEntityWeAreOn; // we get it from CWorld::ProcessVerticalLine or ProcessEntityCollision, it's entity under us, 
                               //only static entities (buildings or roads)
    class CFire *m_pFire;
    Float  m_fSteerAngle;
    Float  m_f2ndSteerAngle; // used for steering 2nd set of wheels or elevators etc..
    Float  m_fGasPedal;
    Float  m_fBreakPedal;
    UInt8  m_nCreatedBy; // 1 - RANDOM_VEHICLE
                         // 2 - MISSION_VEHICLE
                         // 3 - PARKED_VEHICLE
                         // 4 - PERMANENT_VEHICLE
    Int16 m_wExtendedRemovalRange; // when game wants to delete a vehicle, it gets min(m_wExtendedRemovalRange, 170.0)
    UInt8 m_nBombOnBoard : 3; // 0 = None
                              // 1 = Timed
                              // 2 = On ignition
                              // 3 = remotely set ?
                              // 4 = Timed Bomb has been activated
                              // 5 = On ignition has been activated
    UInt8 m_nOverrideLights : 2; // uses enum NO_CAR_LIGHT_OVERRIDE, FORCE_CAR_LIGHTS_OFF, FORCE_CAR_LIGHTS_ON
    UInt8 m_nWinchType : 2; // Does this vehicle use a winch?
    UInt8 m_nGunsCycleIndex : 2; // Cycle through alternate gun hardpoints on planes/helis
    UInt8 m_nOrdnanceCycleIndex : 2; // Cycle through alternate ordnance hardpoints on planes/helis
    UInt8 m_nUsedForCover; // Has n number of cops hiding/attempting to hid behind it
    UInt8 m_nAmmoInClip; // Used to make the guns on boat do a reload (20 by default).
    UInt8 m_nPacMansCollected; // initialised, but not used?
    UInt8 m_nPedsPositionForRoadBlock; // 0, 1 or 2
    UInt8 m_nNumCopsForRoadBlock;
    Float m_fDirtLevel; // Dirt level of vehicle body texture: 0.0f=fully clean, 15.0f=maximum dirt visible
    UInt8 m_nCurrentGear;
    Float m_fGearChangeCount; // used as parameter for cTransmission::CalculateDriveAcceleration, but doesn't change
    Float m_fWheelSpinForAudio;
    Float m_fHealth; // 1000.0f = full health. 0 -> explode
    class CVehicle *m_pTrailer;
    class CVehicle *m_pTractor;
    class CPed *m_pWhoInstalledBombOnMe;
    UInt32 m_dwTimeTillWeNeedThisCar; // game won't try to delete this car while this time won't reach
    UInt32 m_dwGunFiringTime; // last time when gun on vehicle was fired (used on boats)
    UInt32 m_dwTimeWhenBlowedUp; // game will delete vehicle when 60 seconds after this time will expire
    Int16  m_wCopsInCarTimer; // timer for police car (which is following player) occupants to stay in car. If this timer reachs 
                             // some value, they will leave a car. The timer increases each frame if player is stopped in car, 
                             // otherway it resets
    Int16  m_wBombTimer;     // goes down with each frame
    class CPed *m_pWhoDetonatedMe; // if vehicle was detonated, game copies m_pWhoInstalledBombOnMe here
    Float  m_fVehicleFrontGroundZ; // we get these values from CCollision::IsStoredPolyStillValidVerticalLine
    Float  m_fVehicleRearGroundZ;  // or CWorld::ProcessVerticalLine
    Int8 field_4EC; // initialised, but not used?
    Int8 field_4ED[11]; // possibly non-used data?
    UInt32 m_dwDoorLock; // see enum eCarLock
    UInt32 m_dwProjectileWeaponFiringTime; // manual-aimed projectiles for hunter, lock-on projectile for hydra
    UInt32 m_dwAdditionalProjectileWeaponFiringTime; // manual-aimed projectiles for hydra
    UInt32 m_dwTimeForMinigunFiring; // minigun on hunter
    UInt8 m_nLastWeaponDamageType; // see eWeaponType, -1 if no damage
    CEntity *m_pLastDamageEntity;
    Int8 field_510; // not used?
    Int8 field_511; // initialised, but not used?
    Int8 field_512; // initialised, but not used?
    Int8 m_nVehicleWeaponInUse; // see enum eCarWeapon
    UInt32     m_nHornCounter;
    Int8 field_518; // random id related to siren
    Int8 field_519; // car horn related
    Int8 field_51A;
    Int8       m_nHasslePosId;
    CStoredCollPoly m_FrontCollPoly; // poly which is under front part of car
    CStoredCollPoly m_RearCollPoly; // poly which is under rear part of car
    UInt8      m_anCollisionLighting[4]; // left front, left rear, right front, right rear
    class FxSystem_c *m_pOverheatParticle;
    class FxSystem_c *m_pFireParticle;
    class FxSystem_c *m_pDustParticle;
    union{
        UInt8     m_dwRenderLights;
        struct{
            UInt8 m_bRightFront : 1;
            UInt8 m_bRightRear : 1;
            UInt8 m_bLeftFront : 1;
            UInt8 m_bLeftRear : 1;
        } m_renderLights;
    };
    RwTexture *m_pCustomCarPlate;
    class CVehicle *field_58C;
    UInt32     m_dwVehicleClass; // see enum eVehicleType
    UInt32     m_dwVehicleSubClass; // see enum eVehicleType
    Int16      m_wPreviousRemapTxd;
    Int16      m_wRemapTxd;
    RwTexture *m_pRemapTexture;

    // static CColModel m_aSpecialColModel[4]
    static CColModel *m_aSpecialColModel;

    CVehicle();
    ~CVehicle();
    
    // originally vtable functions

    void ProcessControlCollisionCheck();
    void ProcessControlInputs(unsigned char playerNum);
    // component index in m_apModelNodes array
    void GetComponentWorldPosition(int componentId, CVector& posnOut);
    // component index in m_apModelNodes array
    bool IsComponentPresent(int componentId);
    void OpenDoor(CPed* ped, int componentId, eDoors door, float doorOpenRatio, bool playSound);
    void ProcessOpenDoor(CPed* ped, unsigned int doorComponentId, unsigned int arg2, unsigned int arg3, float arg4);
    float GetDooorAngleOpenRatio(unsigned int door);
    float GetDooorAngleOpenRatio(eDoors door);
    bool IsDoorReady(unsigned int door);
    bool IsDoorReady(eDoors door);
    bool IsDoorFullyOpen(unsigned int door);
    bool IsDoorFullyOpen(eDoors door);
    bool IsDoorClosed(unsigned int door);
    bool IsDoorClosed(eDoors door);
    bool IsDoorMissing(unsigned int door);
    bool IsDoorMissing(eDoors door);
    // check if car has roof as extra
    bool IsOpenTopCar();
    // remove ref to this entity
    void RemoveRefsToVehicle(CEntity* entity);
    void BlowUpCar(CEntity* damager, unsigned char bHideExplosion);
    void BlowUpCarCutSceneNoExtras(bool bNoCamShake, bool bNoSpawnFlyingComps, bool bDetachWheels, bool bExplosionSound);
    bool SetUpWheelColModel(CColModel* wheelCol);
    // returns false if it's not possible to burst vehicle's tyre or it is already damaged. bPhysicalEffect=true applies random moving force to vehicle
    bool BurstTyre(unsigned char tyreComponentId, bool bPhysicalEffect);
    bool IsRoomForPedToLeaveCar(unsigned int arg0, CVector* arg1);
    void ProcessDrivingAnims(CPed* driver, unsigned char arg1);
    // get special ride anim data for bile or quad
    CRideAnimData* GetRideAnimData();
    void SetupSuspensionLines();
    CVector AddMovingCollisionSpeed(CVector& arg0);
    void Fix();
    void SetupDamageAfterLoad();
    void DoBurstAndSoftGroundRatios();
    float GetHeightAboveRoad();
    void PlayCarHorn();
    int GetNumContactWheels();
    void VehicleDamage(float damageIntensity, unsigned short collisionComponent, CEntity* damager, CVector* vecCollisionCoors, CVector* vecCollisionDirection, eWeaponType weapon);
    bool CanPedStepOutCar(bool arg0);
    bool CanPedJumpOutCar(CPed* ped);
    bool GetTowHitchPos(CVector& posnOut, bool arg1, CVehicle* arg2);
    bool GetTowBarPos(CVector& posnOut, bool arg1, CVehicle* arg2);
    // always return true
    bool SetTowLink(CVehicle* arg0, bool arg1);
    bool BreakTowLink();
    float FindWheelWidth(bool bRear);
    // always return true
    bool Save();
    // always return true
    bool Load();

    //funcs

    static void Shutdown();
    // -1 if no remap index
    int GetRemapIndex();
    void SetRemapTexDictionary(int txdId);
    // index for m_awRemapTxds[] array
    void SetRemap(int remapIndex);
    void SetCollisionLighting(unsigned char lighting);
    void UpdateLightingFromStoredPolys();
    void CalculateLightingFromCollision();
    void ResetAfterRender();
    // 2 - bike, 3 - heli, 4 - boat, 5 - plane
    int GetVehicleAppearance();
    // returns false if vehicle model has no car plate material
    bool CustomCarPlate_TextureCreate(CVehicleModelInfo* model);
    void CustomCarPlate_TextureDestroy();
    bool CanBeDeleted();
    float ProcessWheelRotation(tWheelState wheelState, CVector const& arg1, CVector const& arg2, float arg3);
    bool CanVehicleBeDamaged(CEntity* damager, eWeaponType weapon, unsigned char* arg2);
    void ProcessDelayedExplosion();
    bool AddPassenger(CPed* passenger);
    bool AddPassenger(CPed* passenger, unsigned char seatNumber);
    void RemovePassenger(CPed* passenger);
    void SetDriver(CPed* driver);
    void RemoveDriver(bool arg0);
    CPed* SetUpDriver(int pedType, bool arg1, bool arg2);
    CPed* SetupPassenger(int seatNumber, int pedType, bool arg2, bool arg3);
    bool IsPassenger(CPed* ped);
    bool IsPassenger(int modelIndex);
    bool IsDriver(CPed* ped);
    bool IsDriver(int modelIndex);
    void KillPedsInVehicle();
    // return this->m_pCoords->matrix.at.z <= -0.9;
    bool IsUpsideDown();
    // return this->m_pCoords->matrix.right.z >= 0.8 || this->m_pCoords->matrix.right.z <= -0.8;
    bool IsOnItsSide();
    bool CanPedOpenLocks(CPed* ped);
    bool CanDoorsBeDamaged();
    bool CanPedEnterCar();
    void ProcessCarAlarm();
    bool IsVehicleNormal();
    void ChangeLawEnforcerState(unsigned char state);
    bool IsLawEnforcementVehicle();
    bool ShufflePassengersToMakeSpace();
    void ExtinguishCarFire();
    void ActivateBomb();
    void ActivateBombWhenEntered();
    bool CarHasRoof();
    float HeightAboveCeiling(float arg0, eFlightModel arg1);
    void SetComponentVisibility(RwFrame* component, unsigned int visibilityState);
    void ApplyBoatWaterResistance(tBoatHandlingData* boatHandling, float arg1);
    static void SetComponentAtomicAlpha(RpAtomic* atomic, int alpha);
    void UpdateClumpAlpha();
    void UpdatePassengerList();
    CPed* PickRandomPassenger();
    void AddDamagedVehicleParticles();
    void MakeDirty(CColPoint& colPoint);
    bool AddWheelDirtAndWater(CColPoint& colPoint, unsigned int arg1, unsigned char arg2, unsigned char arg3);
    void SetGettingInFlags(unsigned char doorId);
    void SetGettingOutFlags(unsigned char doorId);
    void ClearGettingInFlags(unsigned char doorId);
    void ClearGettingOutFlags(unsigned char doorId);
    void SetWindowOpenFlag(unsigned char doorId);
    void ClearWindowOpenFlag(unsigned char doorId);
    bool SetVehicleUpgradeFlags(int upgradeModelIndex, int componentIndex, int& resultModelIndex);
    bool ClearVehicleUpgradeFlags(int arg0, int componentIndex);
    RpAtomic* CreateUpgradeAtomic(CBaseModelInfo* model, UpgradePosnDesc const* upgradePosn, RwFrame* parentComponent, bool isDamaged);
    void RemoveUpgrade(int upgradeId);
    // return upgrade model id or -1 if not present
    int GetUpgrade(int upgradeId);
    RpAtomic* CreateReplacementAtomic(CBaseModelInfo* model, RwFrame* component, int arg2, bool bDamaged, bool bIsWheel);
    void AddReplacementUpgrade(int modelIndex, int nodeId);
    void RemoveReplacementUpgrade(int nodeId);
    // return upgrade model id or -1 if not present
    void GetReplacementUpgrade(int nodeId);
    void RemoveAllUpgrades();
    int GetSpareHasslePosId();
    void SetHasslePosId(int hasslePos, bool enable);
    void InitWinch(int arg0);
    void UpdateWinch();
    void RemoveWinch();
    void ReleasePickedUpEntityWithWinch();
    void PickUpEntityWithWinch(CEntity* arg0);
    CEntity* QueryPickedUpEntityWithWinch();
    float GetRopeHeightForHeli();
    void SetRopeHeightForHeli(float height);
    void RenderDriverAndPassengers();
    void PreRenderDriverAndPassengers();
    float GetPlaneGunsAutoAimAngle();
    int GetPlaneNumGuns();
    void SetFiringRateMultiplier(float multiplier);
    float GetFiringRateMultiplier();
    unsigned int GetPlaneGunsRateOfFire();
    CVector GetPlaneGunsPosition(int gunId);
    unsigned int GetPlaneOrdnanceRateOfFire(eOrdnanceType ordnanceType);
    CVector GetPlaneOrdnancePosition(eOrdnanceType ordnanceType);
    void SelectPlaneWeapon(bool bChange, eOrdnanceType ordnanceType);
    void DoPlaneGunFireFX(CWeapon* weapon, CVector& particlePos, CVector& gunshellPos, int particleIndex);
    void FirePlaneGuns();
    void FireUnguidedMissile(eOrdnanceType ordnanceType, bool bCheckTime);
    bool CanBeDriven();
    void ReactToVehicleDamage(CPed* ped);
    bool GetVehicleLightsStatus();
    bool CanPedLeanOut(CPed* ped);
    void SetVehicleCreatedBy(int createdBy);
    void SetupRender();
    void ProcessWheel(CVector& arg0, CVector& arg1, CVector& arg2, CVector& arg3, int arg4, float arg5, float arg6, float arg7, char arg8, float* arg9, tWheelState* arg10, unsigned short arg11);
    void ProcessBikeWheel(CVector& arg0, CVector& arg1, CVector& arg2, CVector& arg3, int arg4, float arg5, float arg6, float arg7, float arg8, char arg9, float* arg10, tWheelState* arg11, eBikeWheelSpecial arg12, unsigned short arg13);
    // return nearest wheel?
    int FindTyreNearestPoint(float x, float y);
    void InflictDamage(CEntity* damager, eWeaponType weapon, float intensity, CVector coords);
    void KillPedsGettingInVehicle();
    bool UsesSiren();
    bool IsSphereTouchingVehicle(float x, float y, float z, float radius);
    void FlyingControl(eFlightModel flightModel, float arg1, float arg2, float arg3, float arg4);
    // always return false?
    void BladeColSectorList(CPtrList& ptrList, CColModel& colModel, CMatrix& matrix, short arg3, float arg4);
    void SetComponentRotation(RwFrame* component, int axis, float angle, bool bResetPosition);
    void SetTransmissionRotation(RwFrame* component, float arg1, float arg2, CVector posn, bool isFront);
    void ProcessBoatControl(tBoatHandlingData* boatHandling, float& arg1, bool arg2, bool arg3);
    void DoBoatSplashes(float arg0);
    void DoSunGlare();
    void AddWaterSplashParticles();
    void AddExhaustParticles();
    // always return false?
    bool AddSingleWheelParticles(tWheelState arg0, unsigned int arg1, float arg2, float arg3, CColPoint* arg4, CVector* arg5, float arg6, int arg7, unsigned int surfaceType, bool* bloodState, unsigned int arg10);
    bool GetSpecialColModel();
    void RemoveVehicleUpgrade(int upgradeModelIndex);
    void AddUpgrade(int modelIndex, int upgradeIndex);
    void UpdateTrailerLink(bool arg0, bool arg1);
    void UpdateTractorLink(bool arg0, bool arg1);
    CEntity* ScanAndMarkTargetForHeatSeekingMissile(CEntity* entity);
    void FireHeatSeakingMissile(CEntity* targetEntity, eOrdnanceType ordnanceType, bool arg2);
    void PossiblyDropFreeFallBombForPlayer(eOrdnanceType ordnanceType, bool arg1);
    void ProcessSirenAndHorn(bool arg0);
    bool DoHeadLightEffect(int dummyId, CMatrix& vehicleMatrix, unsigned char lightId, unsigned char lightState);
    void DoHeadLightBeam(int arg0, CMatrix& matrix, unsigned char arg2);
    void DoHeadLightReflectionSingle(CMatrix& matrix, unsigned char lightId);
    void DoHeadLightReflectionTwin(CMatrix& matrix);
    void DoHeadLightReflection(CMatrix& arg0, unsigned int arg1, unsigned char arg2, unsigned char arg3);
    bool DoTailLightEffect(int lightId, CMatrix& matrix, unsigned char arg2, unsigned char arg3, unsigned int arg4, unsigned char arg5);
    void DoVehicleLights(CMatrix& matrix, unsigned int flags);
    void FillVehicleWithPeds(bool bSetClothesToAfro);
    static void* operator new(unsigned int size);
    static void operator delete(void* data);
    static void operator delete(void* data, int arg1);
    void DoBladeCollision(CVector arg0, CMatrix& matrix, short arg2, float arg3, float arg4);
    void AddVehicleUpgrade(int modelId);
    void SetupUpgradesAfterLoad();
    void GetPlaneWeaponFiringStatus(bool& status, eOrdnanceType& ordnanceType);
    void ProcessWeapons();
};
#pragma pack(pop)

VALIDATE_SIZE(CVehicle, 0x5A0);

bool IsVehiclePointerValid(CVehicle* vehicle);
RpAtomic* RemoveUpgradeCB(RpAtomic* atomic, void* data);
RpAtomic* FindUpgradeCB(RpAtomic* atomic, void* data);
RwObject* RemoveObjectsCB(RwObject* object, void* data);
RwFrame* RemoveObjectsCB(RwFrame* component, void* data);
RwObject* CopyObjectsCB(RwObject* object, void* data);
RwObject* FindReplacementUpgradeCB(RwObject* object, void* data);
RpAtomic* RemoveAllUpgradesCB(RpAtomic* atomic, void* data);
RpMaterial* SetCompAlphaCB(RpMaterial* material, void* data);
RwObject* SetVehicleAtomicVisibilityCB(RwObject* object, void* data);
RwFrame* SetVehicleAtomicVisibilityCB(RwFrame* component, void* data);
void DestroyVehicleAndDriverAndPassengers(CVehicle* vehicle);