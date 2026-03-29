/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"
#include "tBikeHandlingData.h"
#include "eSkidmarkType.h"

enum eBikeNodes {
    BIKE_NODE_NONE = 0,
    BIKE_CHASSIS = 1,
    BIKE_FORKS_FRONT = 2,
    BIKE_FORKS_REAR = 3,
    BIKE_WHEEL_FRONT = 4,
    BIKE_WHEEL_REAR = 5,
    BIKE_MUDGUARD = 6,
    BIKE_HANDLEBARS = 7,
    BIKE_MISC_A = 8,
    BIKE_MISC_B = 9,
    BIKE_NUM_NODES
};

#pragma pack(push, 4)
class CBike : public CVehicle{
protected:
    CBike(plugin::dummy_func_t) : CVehicle(plugin::dummy), m_mLeanMatrix(plugin::dummy) {}

public:
    static constexpr auto NUM_WHEELS = 2;
    static constexpr auto NUM_SUSP_LINES = 4;

    RwFrame* m_aBikeNodes[BIKE_NUM_NODES];

    bool m_bLeanMatrixCalculated;
    CMatrix m_mLeanMatrix;

    union {
        struct {
            bool bShouldNotChangeColour : 1;
            bool bPanelsAreThougher : 1;
            bool bWaterTight : 1; // ignores water
            bool bGettingPickedUp : 1;
            bool bOnSideStand : 1; // is standing
            bool bPlayerBoost : 1;
            bool bEngineOnFire : 1;
            bool bWheelieForCamera : 1;
        };
        uint8_t m_nBikeFlags;
    };

    CVector m_vecAveGroundNormal;
    CVector m_vecGroundRight;
    CVector m_vecOldSpeedForPlayback;
    tBikeHandlingData* m_pBikeHandlingData;
    CRideAnimData m_rideAnimData;

    uint8_t         m_nWheelStatus[NUM_WHEELS];
    CColPoint       m_anWheelColPoint[NUM_SUSP_LINES];
    float           m_aWheelRatios[NUM_SUSP_LINES];
    float           m_aRatioHistory[NUM_SUSP_LINES];
    float           m_fWheelCounts[NUM_SUSP_LINES];
    float           m_fBrakeCount;
    eSkidmarkType   m_aWheelSkidmarkType[NUM_WHEELS];
    bool            m_bWheelBloody[NUM_WHEELS];
    bool            m_bMoreSkidMarks[NUM_WHEELS];
    float           m_aWheelPitchAngles[NUM_WHEELS];
    float           m_aWheelAngularVelocity[NUM_WHEELS];
    float           m_aWheelSuspensionHeights[NUM_WHEELS];
    float           m_aWheelOrigHeights[NUM_WHEELS];
    float           m_fSuspensionLength[NUM_SUSP_LINES];
    float           m_fLineLength[NUM_SUSP_LINES];
    float           m_fHeightAboveRoad;
    float           m_fExtraTractionMult;
    float           m_fSwingArmLength;
    float           m_fForkYOffset;
    float           m_fForkZOffset;
    float           m_fSteerAngleTan;
    uint16_t        m_nBrakesOn;
    float           m_fNitroValue; // m_fTyreTemp
    float           m_fBrakingSlide;
    uint8_t         m_nFixLeftHand;
    uint8_t         m_nFixRightHand;
    uint8_t         m_nTestPedCollision;
    float           m_fPrevSpeed;

    float m_fBurningTimer; // starts when vehicle health is lower than 250.0, bike blows up when it hits 5000.0

    CEntity*    m_apWheelCollisionEntity[NUM_SUSP_LINES];
    CVector     m_avTouchPointsLocalSpace[NUM_SUSP_LINES];
    CEntity*    m_pDamager;
    uint8_t     m_nNumContactWheels;
    uint8_t     m_nNumWheelsOnGround;
    uint8_t     m_nNumDriveWheelsOnGroundLastFrame;
    float       m_fGasPedalAudioRevs;
    eWheelState m_wheelState[NUM_WHEELS];

    //vtable

    void ProcessAI(unsigned int& arg0);

    //funcs

    CBike(int modelIndex, unsigned char createdBy);

    void SetupModelNodes();
    void dmgDrawCarCollidingParticles(CVector const& position, float power, eWeaponType weaponType); // dummy function
    static bool DamageKnockOffRider(CVehicle* arg0, float arg1, unsigned short arg2, CEntity* arg3, CVector& arg4, CVector& arg5);
    CPed* KnockOffRider(eWeaponType arg0, unsigned char arg1, CPed* arg2, bool arg3); // dummy function
    void SetRemoveAnimFlags(CPed* ped);
    void ReduceHornCounter();
    void ProcessBuoyancy();
    void ResetSuspension();
    bool GetAllWheelsOffGround();
    void DebugCode(); // dummy function
    void DoSoftGroundResistance(unsigned int& arg0);
    void PlayHornIfNecessary();
    void CalculateLeanMatrix();
    static void ProcessRiderAnims(CPed* rider, CVehicle* vehicle, CRideAnimData* rideData, tBikeHandlingData* handling);
    void FixHandsToBars(CPed* rider);
    void PlaceOnRoadProperly();
    void GetCorrectedWorldDoorPosition(CVector& out, CVector arg1, CVector arg2);
};
#pragma pack(pop)

VALIDATE_OFFSET(CBike, m_bLeanMatrixCalculated, 0x5C8);
VALIDATE_OFFSET(CBike, m_nBikeFlags, 0x614);
VALIDATE_OFFSET(CBike, m_vecOldSpeedForPlayback, 0x630);
VALIDATE_OFFSET(CBike, m_rideAnimData, 0x640);
VALIDATE_OFFSET(CBike, m_anWheelColPoint, 0x660);
VALIDATE_OFFSET(CBike, m_aWheelSkidmarkType, 0x744);
VALIDATE_OFFSET(CBike, m_fHeightAboveRoad, 0x790);
VALIDATE_OFFSET(CBike, m_apWheelCollisionEntity, 0x7C0);
VALIDATE_OFFSET(CBike, m_nNumWheelsOnGround, 0x805);
VALIDATE_OFFSET(CBike, m_wheelState, 0x80C);
VALIDATE_SIZE(CBike, 0x814);
