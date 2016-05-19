#pragma once
#include "plbase/PluginBase.h"
#include "CVehicle.h"
#include "CDoor.h"
#include "CPanel.h"
#include "CDamageManager.h"
#include "CColPoint.h"

class CObject;

enum eAutomobileModelNodes {
    AUTOMOBILE_NODE_NONE = 0,
    AUTOMOBILE_NODE_CHASSIS = 1,
    AUTOMOBILE_NODE_WHEEL_RF_DUMMY = 2,
    AUTOMOBILE_NODE_WHEEL_RM_DUMMY = 3,
    AUTOMOBILE_NODE_WHEEL_RB_DUMMY = 4,
    AUTOMOBILE_NODE_WHEEL_LF_DUMMY = 5,
    AUTOMOBILE_NODE_WHEEL_LM_DUMMY = 6,
    AUTOMOBILE_NODE_WHEEL_LB_DUMMY = 7,
    AUTOMOBILE_NODE_DOOR_RF_DUMMY = 8,
    AUTOMOBILE_NODE_DOOR_RR_DUMMY = 9,
    AUTOMOBILE_NODE_DOOR_LF_DUMMY = 10,
    AUTOMOBILE_NODE_DOOR_LR_DUMMY = 11,
    AUTOMOBILE_NODE_BUMP_FRONT_DUMMY = 12,
    AUTOMOBILE_NODE_BUMP_REAR_DUMMY = 13,
    AUTOMOBILE_NODE_WING_RF_DUMMY = 14,
    AUTOMOBILE_NODE_WING_LF_DUMMY = 15,
    AUTOMOBILE_NODE_bonnet_dummy = 16,
    AUTOMOBILE_NODE_BOOT_DUMMY = 17,
    AUTOMOBILE_NODE_WINDSCREEN_DUMMY = 18,
    AUTOMOBILE_NODE_EXHAUST_OK = 19,
    AUTOMOBILE_NODE_MISC_A = 20,
    AUTOMOBILE_NODE_MISC_B = 21,
    AUTOMOBILE_NODE_MISC_C = 22,
    AUTOMOBILE_NODE_MISC_D = 23,
    AUTOMOBILE_NODE_MISC_E = 24,
    AUTOMOBILE_NUM_NODES
};

#pragma pack(push, 1)
class PLUGIN_API  CAutomobile : public CVehicle {
public:
    CDamageManager m_damageManager;
    CDoor m_doors[6];
    RwFrame *m_modelNodes[AUTOMOBILE_NUM_NODES];
    CPanel m_panels[3];
    CDoor m_swingingChassis;
    CColPoint m_wheelColPoint[4];
    float wheelsDistancesToGround1[4];
    float wheelsDistancesToGround2[4];
    float field_7F4[4];
    float field_800;
    float field_804;
    float field_80C;
    int field_810[4];
    char field_81C[4];
    int field_820;
    float m_fWheelRotation[4];
    float field_838[4];
    int m_fWheelSpeed[4];
    int field_858[4];
    char taxiAvaliable;
    char field_869;
    char field_86A;
    char field_867;
    short m_wMiscComponentAngle;
    short field_86E;
    int m_dwBusDoorTimerEnd;
    int m_dwBusDoorTimerStart;
    float field_878;
    float wheelOffsetZ[4];
    int field_88C[3];
    float m_fFrontHeightAboveRoad;
    float m_fRearHeightAboveRoad;
    float m_fCarTraction;
    float m_fNitroValue;
    int field_8A4;
    int field_8A8;
    float m_fMoveDirection;
    int field_8B4[6];
    int field_8C8[6];
    int m_dwBurnTimer;
    CEntity *m_pWheelCollisionEntity[4];
    CVector m_vWheelCollisionPos[4];
    char field_924;
    char field_925;
    char field_926;
    char field_927;
    char field_928;
    char field_929;
    char field_92A;
    char field_92B;
    char field_92C;
    char field_92D;
    char field_92E;
    char field_92F;
    char field_930;
    char field_931;
    char field_932;
    char field_933;
    char field_934;
    char field_935;
    char field_936;
    char field_937;
    char field_938;
    char field_939;
    char field_93A;
    char field_93B;
    char field_93C;
    char field_93D;
    char field_93E;
    char field_93F;
    int field_940;
    int field_944;
    float m_fDoomVerticalRotation;
    float m_fDoomHorizontalRotation;
    float m_fForcedOrientation;
    float m_fUpDownLightAngle[2];
    unsigned char m_nNumContactWheels;
    unsigned char m_nWheelsOnGround;
    char field_962;
    char field_963;
    float field_964;
    int field_968[4];
    void *pNitroParticle[2];
    char field_980;
    char field_981;
    short field_982;
    float field_984;

    //vtable

    void ProcessAI(unsigned int& arg0);
    void ResetSuspension();
    void ProcessFlyingCarStuff();
    void DoHoverSuspensionRatios();
    void ProcessSuspension();

    //funcs

    // Find and save components ptrs (RwFrame) to m_modelNodes array
    void SetupModelNodes();
    // Process vehicle hydraulics
    void HydraulicControl();
    // Sets the angle of a vehicles extra. Called at 08A4 opcode (CONTROL_MOVABLE_VEHICLE_PART)
    bool UpdateMovingCollision(float angle);
    // Called at 098D opcode (GET_CAR_MOVING_COMPONENT_OFFSET)
    float GetMovingCollisionOffset();
    // Makes the helicopter fly to the specified location, keeping a specific Z height/altitude. This must be called for helis only.
    void TellHeliToGoToCoors(float x, float y, float z, float altitudeMin, float altitudeMax);
    // Force orientation for heli to specified angle (radians)
    void SetHeliOrientation(float angle);
    // Cancel orientation forcing (m_fForcedOrientation = -1.0f)
    void ClearHeliOrientation();
    // Makes the plane fly to the specified location, keeping a specific Z height/altitude.
    void TellPlaneToGoToCoors(float x, float y, float z, float altitudeMin, float altitudeMax);
    // Empty function
    void HideAllComps();
    // Empty function
    void ShowAllComps();
    // Set random damage to vehicle. Called when generating a vehicle @CCarCtrl::GenerateOneRandomCar
    void SetRandomDamage(bool arg0);
    // Make a vehicle fully damaged
    void SetTotalDamage(bool arg0);
    // if(m_nHornCounter) m_nHornCounter--;
    void ReduceHornCounter();
    // Apply custom car plate texture to vehicle
    void CustomCarPlate_BeforeRenderingStart(CVehicleModelInfo* model);
    // Reset car plate texture after rendering
    void CustomCarPlate_AfterRenderingStop(CVehicleModelInfo* model);
    // Check if vehicle is in air
    bool GetAllWheelsOffGround();
    // Some debug function
    void DebugCode();
    // Repair vehicle's tyre
    void FixTyre(eWheels wheel);
    // Repair vehicle's door. "nodeIndex" is an index of component in m_modelNodes array
    void FixDoor(int nodeIndex, eDoors door);
    // Repair vehicle's panel. "nodeIndex" is an index of component in m_modelNodes array
    void FixPanel(int nodeIndex, ePanels panel);
    // Enable/disable taxi light for taxi
    void SetTaxiLight(bool enable);
    // Enable taxi light for all taxis (CAutomobile::m_sAllTaxiLights = true;)
    static void SetAllTaxiLights(bool arg0);
    // Play horn for NPC vehicle (called @CAutomobile::ProcessAI)
    void PlayHornIfNecessary();
    void SetBusDoorTimer(unsigned int time, unsigned char arg1);
    void ProcessAutoBusDoors();
    // Make player vehicle jumps when pressing horn
    void BoostJumpControl();
    // Creates/updates nitro particle
    void DoNitroEffect(float state);
    // Remove nitro particle
    void StopNitroEffect();
    void NitrousControl(signed char);
    void TowTruckControl();
    // Empty function
    CPed* KnockPedOutCar(eWeaponType arg0, unsigned short arg1, CPed* arg2);
    void PopBootUsingPhysics();
    // Close all doors
    void CloseAllDoors();
    void DoSoftGroundResistance(unsigned int& arg0);
    void ProcessCarWheelPair(int arg0, int arg1, float arg2, CVector* arg3, CVector* arg4, float arg5, float arg6, float arg7, bool arg8);
    float GetCarRoll();
    float GetCarPitch();
    bool IsInAir();
    // Create colliding particles
    void dmgDrawCarCollidingParticles(CVector const&, float force, eWeaponType weapon);
    void ProcessCarOnFireAndExplode(unsigned char arg0);
    CObject* SpawnFlyingComponent(int nodeIndex, unsigned int collisionType);
    void ProcessBuoyancy();
    // Process combine
    void ProcessHarvester();
    void ProcessSwingingDoor(int nodeIndex, eDoors door);
    // Returns spawned flying component?
    CObject* RemoveBonnetInPedCollision();
    void UpdateWheelMatrix(int nodeIndex, int flags);
    void PopDoor(int nodeIndex, eDoors door, bool showVisualEffect);
    void PopPanel(int nodeIndex, ePanels panel, bool showVisualEffect);
    void ScanForCrimes();
    void TankControl();
    // Makes a vehicles acts like a tank on a road - blows up collided vehicles. Must be called in a loop
    void BlowUpCarsInPath();
    void PlaceOnRoadProperly();
    void PopBoot();
    void CloseBoot();
    void DoHeliDustEffect(float arg0, float arg1);
    void SetBumperDamage(ePanels panel, bool withoutVisualEffect);
    void SetPanelDamage(ePanels panel, bool createWindowGlass);
    void SetDoorDamage(eDoors door, bool withoutVisualEffect);
    bool RcbanditCheck1CarWheels(CPtrList& ptrlist);
    bool RcbanditCheckHitWheels();
    void FireTruckControl(float arg0);
    bool HasCarStoppedBecauseOfLight();
};
#pragma pack(pop)

VALIDATE_SIZE(CAutomobile, 0x988);

// Disable matfx (material effects) for material (callback), "data" parameter is unused
RpMaterial *DisableMatFx(RpMaterial* material, void* data);
// callback
RpAtomic* GetCurrentAtomicObjectCB(RwObject* object, void* data);