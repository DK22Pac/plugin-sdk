/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAutomobile.h"

enum eCamMode {
    MODE_NONE = 0,
    MODE_TOP_DOWN,
    MODE_GTA_CLASSIC,
    MODE_BEHIND_CAR,
    MODE_FOLLOW_PED,
    MODE_AIMING,
    MODE_DEBUG,
    MODE_SNIPER,
    MODE_ROCKET_LAUNCHER,
    MODE_MODELVIEW,
    MODE_BILL,
    MODE_SYPHON,
    MODE_CIRCLE,
    MODE_CHEESY_ZOOM,
    MODE_WHEEL_CAM,
    MODE_FIXED,
    MODE_1ST_PERSON,
    MODE_FLYBY,
    MODE_CAM_ON_A_STRING,
    MODE_REACTION,
    MODE_FOLLOW_PED_WITH_BIND,
    MODE_CHRIS,
    MODE_BEHIND_BOAT,
    MODE_PLAYER_FALLEN_WATER,
    MODE_CAM_ON_TRAIN_ROOF,
    MODE_CAM_RUNNING_SIDE_TRAIN,
    MODE_BLOOD_ON_THE_TRACKS,
    MODE_IM_THE_PASSENGER_WOOWOO,
    MODE_SYPHON_CRIM_IN_FRONT,
    MODE_PED_DEAD_BABY,
    MODE_PILLOWS_PAPS,
    MODE_LOOK_AT_CARS,
    MODE_ARREST_CAM_ONE,
    MODE_ARREST_CAM_TWO,
    MODE_M16_1ST_PERSON,
    MODE_SPECIAL_FIXED_FOR_SYPHON,
    MODE_FIGHT_CAM,
    MODE_TOP_DOWN_PED,
    MODE_SNIPER_RUNABOUT,
    MODE_ROCKET_LAUNCHER_RUNABOUT,
    MODE_1ST_PERSON_RUNABOUT,
    MODE_M16_1STPERSON_RUNABOUT,
    MODE_FIGHT_CAM_RUNABOUT,
    MODE_EDITOR,
    MODE_HELI_CANNON_1ST_PERSON,
};

class CCam {
public:
    bool m_bBelowMinDist;
    bool m_bBehindPlayerDesired;
    bool m_bCamLookingAtVector;
    bool m_bCollisionChecksOn;
    bool m_bFixingBeta;
    bool m_bTheHeightFixerVehicleIsATrain;
    bool m_bLookBehindCamWasInFront;
    bool m_bLookingBehind;
    bool m_bLookingLeft;
    bool m_bLookingRight;
    bool m_bResetStatics;
    bool m_bRotating;
    short m_nCamMode;
    //short _padE;
    unsigned int m_nFinishTime;
    int m_nDoCollisionChecksOnFrameNum;
    int m_nDoCollisionCheckEveryNumOfFrames;
    int m_nFrameNumWereAt;
    int m_nRunningVectorArrayPos;
    int m_nRunningVectorCounter;
    int m_nDirectionWasLooking;
    float m_fMaxRoleAngle;
    float m_fRoll;
    float m_fRollSpeed;
    float m_fSyphonModeTargetZOffSet;
    float m_fAmountFractionObscured;
    float field_40;
    float m_fAlphaSpeedOverOneFrame;
    float m_fBetaSpeedOverOneFrame;
    float m_fBufferedTargetBeta;
    float m_fBufferedTargetOrientation;
    float m_fBufferedTargetOrientationSpeed;
    float m_fCamBufferedHeight;
    float m_fCamBufferedHeightSpeed;
    float m_fCloseInPedHeightOffset;
    float m_fCloseInPedHeightOffsetSpeed;
    float m_fCloseInCarHeightOffset;
    float m_fCloseInCarHeightOffsetSpeed;
    float m_fDimensionOfHighestNearCar;
    float m_fDistanceBeforeChanges;
    float m_fFovSpeedOverOneFrame;
    float m_fMinDistAwayFromCamWhenInterPolating;
    float m_fPedBetweenCameraHeightOffset;
    float m_fPlayerInFrontSyphonAngleOffSet;
    float m_fRadiusForDead;
    float m_fRealGroundDist;
    float m_fTargetBeta;
    float m_fTimeElapsedFloat;
    float m_fTransitionBeta;
    float m_fTrueBeta;
    float m_fTrueAlpha;
    float m_fInitialPlayerOrientation;
    float m_fVerticalAngle;
    float m_fAlphaSpeed;
    float m_fFOV;
    float m_fFOVSpeed;
    float m_fHorizontalAngle;
    float m_fBetaSpeed;
    float m_fDistance;
    float m_fDistanceSpeed;
    float m_fCaMinDistance;
    float m_fCaMaxDistance;
    float m_fSpeedVar;
    CVector m_vecCamSourceSpeedOverOneFrame;
    CVector m_vecCamTargetSpeedOverOneFrame;
    CVector m_vecCamUpOverOneFrame;
    CVector m_vecTargetCoorsForFudgeInter;
    CVector m_vecCamFixedModeVector;
    CVector m_vecCamFixedModeSource;
    CVector m_vecCamFixedModeUpOffSet;
    CVector m_vecLastAboveWaterCamPosition;
    CVector m_vecBufferedPlayerBodyOffset;
    CVector m_vecFront;
    CVector m_vecSource;
    CVector m_vecSourceBeforeLookBehind;
    CVector m_vecUp;
    CVector m_avecPreviousVectors[2];
    CEntity *m_pCamTargetEntity;
    float m_fCameraDistance;
    float m_fIdealAlpha;
    float m_fPlayerVelocity;
    CAutomobile *m_pLastCarEntered;
    CPed *m_pLastPedLookedAt;
    int m_bFirstPersonRunAboutActive;

};
VALIDATE_OFFSET(CCam, m_bBelowMinDist, 0x0);
VALIDATE_OFFSET(CCam, m_bBehindPlayerDesired, 0x1);
VALIDATE_OFFSET(CCam, m_bCamLookingAtVector, 0x2);
VALIDATE_OFFSET(CCam, m_bCollisionChecksOn, 0x3);
VALIDATE_OFFSET(CCam, m_bFixingBeta, 0x4);
VALIDATE_OFFSET(CCam, m_bTheHeightFixerVehicleIsATrain, 0x5);
VALIDATE_OFFSET(CCam, m_bLookBehindCamWasInFront, 0x6);
VALIDATE_OFFSET(CCam, m_bLookingBehind, 0x7);
VALIDATE_OFFSET(CCam, m_bLookingLeft, 0x8);
VALIDATE_OFFSET(CCam, m_bLookingRight, 0x9);
VALIDATE_OFFSET(CCam, m_bResetStatics, 0xA);
VALIDATE_OFFSET(CCam, m_bRotating, 0xB);
VALIDATE_OFFSET(CCam, m_nCamMode, 0xC);
VALIDATE_OFFSET(CCam, m_nFinishTime, 0x10);
VALIDATE_OFFSET(CCam, m_nDoCollisionChecksOnFrameNum, 0x14);
VALIDATE_OFFSET(CCam, m_nDoCollisionCheckEveryNumOfFrames, 0x18);
VALIDATE_OFFSET(CCam, m_nFrameNumWereAt, 0x1C);
VALIDATE_OFFSET(CCam, m_nRunningVectorArrayPos, 0x20);
VALIDATE_OFFSET(CCam, m_nRunningVectorCounter, 0x24);
VALIDATE_OFFSET(CCam, m_nDirectionWasLooking, 0x28);
VALIDATE_OFFSET(CCam, m_fMaxRoleAngle, 0x2C);
VALIDATE_OFFSET(CCam, m_fRoll, 0x30);
VALIDATE_OFFSET(CCam, m_fRollSpeed, 0x34);
VALIDATE_OFFSET(CCam, m_fSyphonModeTargetZOffSet, 0x38);
VALIDATE_OFFSET(CCam, m_fAmountFractionObscured, 0x3C);
VALIDATE_OFFSET(CCam, field_40, 0x40);
VALIDATE_OFFSET(CCam, m_fAlphaSpeedOverOneFrame, 0x44);
VALIDATE_OFFSET(CCam, m_fBetaSpeedOverOneFrame, 0x48);
VALIDATE_OFFSET(CCam, m_fBufferedTargetBeta, 0x4C);
VALIDATE_OFFSET(CCam, m_fBufferedTargetOrientation, 0x50);
VALIDATE_OFFSET(CCam, m_fBufferedTargetOrientationSpeed, 0x54);
VALIDATE_OFFSET(CCam, m_fCamBufferedHeight, 0x58);
VALIDATE_OFFSET(CCam, m_fCamBufferedHeightSpeed, 0x5C);
VALIDATE_OFFSET(CCam, m_fCloseInPedHeightOffset, 0x60);
VALIDATE_OFFSET(CCam, m_fCloseInPedHeightOffsetSpeed, 0x64);
VALIDATE_OFFSET(CCam, m_fCloseInCarHeightOffset, 0x68);
VALIDATE_OFFSET(CCam, m_fCloseInCarHeightOffsetSpeed, 0x6C);
VALIDATE_OFFSET(CCam, m_fDimensionOfHighestNearCar, 0x70);
VALIDATE_OFFSET(CCam, m_fDistanceBeforeChanges, 0x74);
VALIDATE_OFFSET(CCam, m_fFovSpeedOverOneFrame, 0x78);
VALIDATE_OFFSET(CCam, m_fMinDistAwayFromCamWhenInterPolating, 0x7C);
VALIDATE_OFFSET(CCam, m_fPedBetweenCameraHeightOffset, 0x80);
VALIDATE_OFFSET(CCam, m_fPlayerInFrontSyphonAngleOffSet, 0x84);
VALIDATE_OFFSET(CCam, m_fRadiusForDead, 0x88);
VALIDATE_OFFSET(CCam, m_fRealGroundDist, 0x8C);
VALIDATE_OFFSET(CCam, m_fTargetBeta, 0x90);
VALIDATE_OFFSET(CCam, m_fTimeElapsedFloat, 0x94);
VALIDATE_OFFSET(CCam, m_fTransitionBeta, 0x98);
VALIDATE_OFFSET(CCam, m_fTrueBeta, 0x9C);
VALIDATE_OFFSET(CCam, m_fTrueAlpha, 0xA0);
VALIDATE_OFFSET(CCam, m_fInitialPlayerOrientation, 0xA4);
VALIDATE_OFFSET(CCam, m_fVerticalAngle, 0xA8);
VALIDATE_OFFSET(CCam, m_fAlphaSpeed, 0xAC);
VALIDATE_OFFSET(CCam, m_fFOV, 0xB0);
VALIDATE_OFFSET(CCam, m_fFOVSpeed, 0xB4);
VALIDATE_OFFSET(CCam, m_fHorizontalAngle, 0xB8);
VALIDATE_OFFSET(CCam, m_fBetaSpeed, 0xBC);
VALIDATE_OFFSET(CCam, m_fDistance, 0xC0);
VALIDATE_OFFSET(CCam, m_fDistanceSpeed, 0xC4);
VALIDATE_OFFSET(CCam, m_fCaMinDistance, 0xC8);
VALIDATE_OFFSET(CCam, m_fCaMaxDistance, 0xCC);
VALIDATE_OFFSET(CCam, m_fSpeedVar, 0xD0);
VALIDATE_OFFSET(CCam, m_vecCamSourceSpeedOverOneFrame, 0xD4);
VALIDATE_OFFSET(CCam, m_vecCamTargetSpeedOverOneFrame, 0xE0);
VALIDATE_OFFSET(CCam, m_vecCamUpOverOneFrame, 0xEC);
VALIDATE_OFFSET(CCam, m_vecTargetCoorsForFudgeInter, 0xF8);
VALIDATE_OFFSET(CCam, m_vecCamFixedModeVector, 0x104);
VALIDATE_OFFSET(CCam, m_vecCamFixedModeSource, 0x110);
VALIDATE_OFFSET(CCam, m_vecCamFixedModeUpOffSet, 0x11C);
VALIDATE_OFFSET(CCam, m_vecLastAboveWaterCamPosition, 0x128);
VALIDATE_OFFSET(CCam, m_vecBufferedPlayerBodyOffset, 0x134);
VALIDATE_OFFSET(CCam, m_vecFront, 0x140);
VALIDATE_OFFSET(CCam, m_vecSource, 0x14C);
VALIDATE_OFFSET(CCam, m_vecSourceBeforeLookBehind, 0x158);
VALIDATE_OFFSET(CCam, m_vecUp, 0x164);
VALIDATE_OFFSET(CCam, m_avecPreviousVectors, 0x170);
VALIDATE_OFFSET(CCam, m_pCamTargetEntity, 0x188);
VALIDATE_OFFSET(CCam, m_fCameraDistance, 0x18C);
VALIDATE_OFFSET(CCam, m_fIdealAlpha, 0x190);
VALIDATE_OFFSET(CCam, m_fPlayerVelocity, 0x194);
VALIDATE_OFFSET(CCam, m_pLastCarEntered, 0x198);
VALIDATE_OFFSET(CCam, m_pLastPedLookedAt, 0x19C);
VALIDATE_OFFSET(CCam, m_bFirstPersonRunAboutActive, 0x1A0);
VALIDATE_SIZE(CCam, 0x1A4);
