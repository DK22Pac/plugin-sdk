/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"

struct tHandlingData {
    char m_vehicleIdentifier[16];
    float m_fMass;
    float m_fDragMult;
    int32_t field_28;
    int32_t field_1C;
    rage::Vector3 m_vCentreOfMass;
    int32_t field_2C;
    int32_t m_nPercentSubmerged;
    int32_t field_34;
    float m_fDriveFront;
    float m_fDriveRear;
    int32_t m_nDriveGears;
    float m_fDriveForce;
    float m_fDriveInertia;
    int field_4C;
    float m_fV;
    int32_t field_54[8];
    float m_fBrakeForce;
    float m_fBrakeFront;
    float m_fBrakeRear;
    float m_fSteeringLock;
    float m_fTractionCurveMax;
    int32_t field_88;
    float m_fTractionCurveMin;
    int32_t field_90;
    float m_fTractionCurveLateral;
    int32_t field_98;
    float m_fTractionCurveLongitudinal;
    int32_t field_A0;
    float m_fTractionSpringDeltaMax;
    int32_t field_A8;
    float m_fTractionFront;
    float m_fTractionRear;
    float m_fSuspensionForce;
    float m_fSuspensionCompDamp;
    float m_fSuspensionReboundDamp;
    float m_fSuspensionUpperLimit;
    float m_fSuspensionLowerLimit;
    float m_fSuspensionRaise;
    float m_fSuspensionFront;
    float m_fSuspensionRear;
    float m_fCollisionDamageMult;
    float m_fWeaponDamageMult;
    float m_fDeformationDamageMult;
    float m_fEngineDamageMult;
    float m_fSeatOffsetDist;
    int32_t m_nMonetaryValue;
    int32_t m_nModelFlags;
    int32_t m_nHandlingFlags;
    uint8_t field_F4;
    uint8_t field_F5[3];
    int32_t m_pBikeHandling;
    int32_t m_pFlyingHandling;
    int32_t m_pBoatHandling;
    int32_t field_104;
    int32_t field_108;
    int32_t field_10C;
};

VALIDATE_SIZE(tHandlingData, 0x110);

class cHandlingDataMgr {
public:
    static int32_t GetHandlingId(const char* name);
    static tHandlingData* GetHandlingData(const char* name);
};
