/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CBuilding.h"
#include "CObject.h"
#include "CVector.h"
#include "CVector2D.h"
#include "CVehicle.h"
#include "CPtrList.h"

enum PLUGIN_API eCraneState : unsigned char {
    IDLE = 0,
    GOING_TOWARDS_TARGET = 1,
    LIFTING_TARGET = 2,
    GOING_TOWARDS_TARGET_ONLY_HEIGHT = 3,
    ROTATING_TARGET = 4,
    DROPPING_TARGET = 5
};

enum PLUGIN_API eCraneStatus : unsigned char {
    NONE = 0,
    ACTIVATED = 1,
    DEACTIVATED = 2
};

class PLUGIN_API CCrane {
public:
    CBuilding *m_pCraneEntity;
    CObject *m_pHook;
    int m_nAudioEntity;
    float m_fPickupX1;
    float m_fPickupX2;
    float m_fPickupY1;
    float m_fPickupY2;
    CVector m_vecDropoffTarget;
    float m_fDropoffHeading;
    float m_fPickupAngle;
    float m_fDropoffAngle;
    float m_fPickupDistance;
    float m_fDropoffDistance;
    float m_fPickupHeight;
    float m_fDropoffHeight;
    float m_fHookAngle;
    float m_fHookOffset;
    float m_fHookHeight;
    CVector m_vecHookInitPos;
    CVector m_vecHookCurPos;
    CVector2D m_vecHookVelocity;
    CVehicle *m_pVehiclePickedUp;
    unsigned int m_nTimeForNextCheck;
    unsigned char m_nCraneStatus; //!< see eCraneStatus
    unsigned char m_nCraneState; //!< see eCraneState
    unsigned char m_nVehiclesCollected;
    bool m_bIsCrusher;
    bool m_bIsMilitaryCrane;
    bool m_bWasMilitaryCrane;
    bool m_bIsTop;

    SUPPORTED_10EN_11EN_STEAM void CalcHookCoordinates(float *pX, float *pY, float *pZ);
    SUPPORTED_10EN_11EN_STEAM bool DoesCranePickUpThisCarType(unsigned int vehicleModelIndex);
    SUPPORTED_10EN_11EN_STEAM void FindCarInSectorList(CPtrList *list);
    SUPPORTED_10EN_11EN_STEAM void FindParametersForTarget(float x, float y, float z, float *pAngle, float *pDistance, float *pHeight);
    SUPPORTED_10EN_11EN_STEAM bool GoTowardsHeightTarget(float targetHeight, float speedMultiplier);
    SUPPORTED_10EN_11EN_STEAM bool GoTowardsTarget(float angleToTarget, float distanceToTarget, float targetHeight, float speedMultiplier);
    SUPPORTED_10EN_11EN_STEAM bool RotateCarriedCarProperly();
    SUPPORTED_10EN_11EN_STEAM void SetHookMatrix();
    SUPPORTED_10EN_11EN_STEAM void Update();
};
VALIDATE_OFFSET(CCrane, m_pCraneEntity, 0x0);
VALIDATE_OFFSET(CCrane, m_pHook, 0x4);
VALIDATE_OFFSET(CCrane, m_nAudioEntity, 0x8);
VALIDATE_OFFSET(CCrane, m_fPickupX1, 0xC);
VALIDATE_OFFSET(CCrane, m_fPickupX2, 0x10);
VALIDATE_OFFSET(CCrane, m_fPickupY1, 0x14);
VALIDATE_OFFSET(CCrane, m_fPickupY2, 0x18);
VALIDATE_OFFSET(CCrane, m_vecDropoffTarget, 0x1C);
VALIDATE_OFFSET(CCrane, m_fDropoffHeading, 0x28);
VALIDATE_OFFSET(CCrane, m_fPickupAngle, 0x2C);
VALIDATE_OFFSET(CCrane, m_fDropoffAngle, 0x30);
VALIDATE_OFFSET(CCrane, m_fPickupDistance, 0x34);
VALIDATE_OFFSET(CCrane, m_fDropoffDistance, 0x38);
VALIDATE_OFFSET(CCrane, m_fPickupHeight, 0x3C);
VALIDATE_OFFSET(CCrane, m_fDropoffHeight, 0x40);
VALIDATE_OFFSET(CCrane, m_fHookAngle, 0x44);
VALIDATE_OFFSET(CCrane, m_fHookOffset, 0x48);
VALIDATE_OFFSET(CCrane, m_fHookHeight, 0x4C);
VALIDATE_OFFSET(CCrane, m_vecHookInitPos, 0x50);
VALIDATE_OFFSET(CCrane, m_vecHookCurPos, 0x5C);
VALIDATE_OFFSET(CCrane, m_vecHookVelocity, 0x68);
VALIDATE_OFFSET(CCrane, m_pVehiclePickedUp, 0x70);
VALIDATE_OFFSET(CCrane, m_nTimeForNextCheck, 0x74);
VALIDATE_OFFSET(CCrane, m_nCraneStatus, 0x78);
VALIDATE_OFFSET(CCrane, m_nCraneState, 0x79);
VALIDATE_OFFSET(CCrane, m_nVehiclesCollected, 0x7A);
VALIDATE_OFFSET(CCrane, m_bIsCrusher, 0x7B);
VALIDATE_OFFSET(CCrane, m_bIsMilitaryCrane, 0x7C);
VALIDATE_OFFSET(CCrane, m_bWasMilitaryCrane, 0x7D);
VALIDATE_OFFSET(CCrane, m_bIsTop, 0x7E);
VALIDATE_SIZE(CCrane, 0x80);

#include "meta/meta.CCrane.h"
