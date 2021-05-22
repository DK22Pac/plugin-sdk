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

VALIDATE_SIZE(CCrane, 0x80);

#include "meta/meta.CCrane.h"
