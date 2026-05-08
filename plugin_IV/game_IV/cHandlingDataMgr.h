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
VALIDATE_OFFSET(tHandlingData, m_vehicleIdentifier, 0x0);
VALIDATE_OFFSET(tHandlingData, m_fMass, 0x10);
VALIDATE_OFFSET(tHandlingData, m_fDragMult, 0x14);
VALIDATE_OFFSET(tHandlingData, field_28, 0x18);
VALIDATE_OFFSET(tHandlingData, field_1C, 0x1C);
VALIDATE_OFFSET(tHandlingData, m_vCentreOfMass, 0x20);
VALIDATE_OFFSET(tHandlingData, field_2C, 0x2C);
VALIDATE_OFFSET(tHandlingData, m_nPercentSubmerged, 0x30);
VALIDATE_OFFSET(tHandlingData, field_34, 0x34);
VALIDATE_OFFSET(tHandlingData, m_fDriveFront, 0x38);
VALIDATE_OFFSET(tHandlingData, m_fDriveRear, 0x3C);
VALIDATE_OFFSET(tHandlingData, m_nDriveGears, 0x40);
VALIDATE_OFFSET(tHandlingData, m_fDriveForce, 0x44);
VALIDATE_OFFSET(tHandlingData, m_fDriveInertia, 0x48);
VALIDATE_OFFSET(tHandlingData, field_4C, 0x4C);
VALIDATE_OFFSET(tHandlingData, m_fV, 0x50);
VALIDATE_OFFSET(tHandlingData, field_54, 0x54);
VALIDATE_OFFSET(tHandlingData, m_fBrakeForce, 0x74);
VALIDATE_OFFSET(tHandlingData, m_fBrakeFront, 0x78);
VALIDATE_OFFSET(tHandlingData, m_fBrakeRear, 0x7C);
VALIDATE_OFFSET(tHandlingData, m_fSteeringLock, 0x80);
VALIDATE_OFFSET(tHandlingData, m_fTractionCurveMax, 0x84);
VALIDATE_OFFSET(tHandlingData, field_88, 0x88);
VALIDATE_OFFSET(tHandlingData, m_fTractionCurveMin, 0x8C);
VALIDATE_OFFSET(tHandlingData, field_90, 0x90);
VALIDATE_OFFSET(tHandlingData, m_fTractionCurveLateral, 0x94);
VALIDATE_OFFSET(tHandlingData, field_98, 0x98);
VALIDATE_OFFSET(tHandlingData, m_fTractionCurveLongitudinal, 0x9C);
VALIDATE_OFFSET(tHandlingData, field_A0, 0xA0);
VALIDATE_OFFSET(tHandlingData, m_fTractionSpringDeltaMax, 0xA4);
VALIDATE_OFFSET(tHandlingData, field_A8, 0xA8);
VALIDATE_OFFSET(tHandlingData, m_fTractionFront, 0xAC);
VALIDATE_OFFSET(tHandlingData, m_fTractionRear, 0xB0);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionForce, 0xB4);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionCompDamp, 0xB8);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionReboundDamp, 0xBC);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionUpperLimit, 0xC0);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionLowerLimit, 0xC4);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionRaise, 0xC8);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionFront, 0xCC);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionRear, 0xD0);
VALIDATE_OFFSET(tHandlingData, m_fCollisionDamageMult, 0xD4);
VALIDATE_OFFSET(tHandlingData, m_fWeaponDamageMult, 0xD8);
VALIDATE_OFFSET(tHandlingData, m_fDeformationDamageMult, 0xDC);
VALIDATE_OFFSET(tHandlingData, m_fEngineDamageMult, 0xE0);
VALIDATE_OFFSET(tHandlingData, m_fSeatOffsetDist, 0xE4);
VALIDATE_OFFSET(tHandlingData, m_nMonetaryValue, 0xE8);
VALIDATE_OFFSET(tHandlingData, m_nModelFlags, 0xEC);
VALIDATE_OFFSET(tHandlingData, m_nHandlingFlags, 0xF0);
VALIDATE_OFFSET(tHandlingData, field_F4, 0xF4);
VALIDATE_OFFSET(tHandlingData, field_F5, 0xF5);
VALIDATE_OFFSET(tHandlingData, m_pBikeHandling, 0xF8);
VALIDATE_OFFSET(tHandlingData, m_pFlyingHandling, 0xFC);
VALIDATE_OFFSET(tHandlingData, m_pBoatHandling, 0x100);
VALIDATE_OFFSET(tHandlingData, field_104, 0x104);
VALIDATE_OFFSET(tHandlingData, field_108, 0x108);
VALIDATE_OFFSET(tHandlingData, field_10C, 0x10C);
VALIDATE_SIZE(tHandlingData, 0x110);

class cHandlingDataMgr {
public:
    static int32_t GetHandlingId(const char* name);
    static tHandlingData* GetHandlingData(const char* name);
};
VALIDATE_SIZE(cHandlingDataMgr, 0x1);
