/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAutomobile.h"

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

VALIDATE_SIZE(CCam, 0x1A4);
