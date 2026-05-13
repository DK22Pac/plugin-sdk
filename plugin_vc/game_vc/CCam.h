/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
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
	MODE_MODEL_VIEW,
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
	MODE_LIGHT_HOUSE,
	MODE_SNIPER_RUNABOUT,
	MODE_ROCKET_LAUNCHER_RUNABOUT,
	MODE_1ST_PERSON_RUNABOUT,
	MODE_M16_1ST_PERSON_RUNABOUT,
	MODE_FIGHT_CAM_RUNABOUT,
	MODE_EDITOR,
	MODE_HELI_CANNON_1ST_PERSON,
	MODE_CAMERA,
};


#define NUMBER_OF_VECTORS_FOR_AVERAGE (2)

class CCam {
public:
	bool m_bBelowMinDist; //used for follow ped mode
	bool m_bBehindPlayerDesired; //used for follow ped mode
	bool m_bCamLookingAtVector;
	bool m_bCollisionChecksOn;
	bool m_bFixingBeta; //used for camera on a string
	bool m_bTheHeightFixerVehicleIsATrain;
	bool m_bLookBehindCamWasInFront;
	bool m_bLookingBehind;
	bool m_bLookingLeft; // 32
	bool m_bLookingRight;
	bool m_bResetStatics; //for interpolation type stuff to work
	bool m_bRotating;

	short m_nCamMode; // CameraMode
	unsigned int m_nFinishTime; // 52

	int m_nDoCollisionChecksOnFrameNum; 
	int m_nDoCollisionCheckEveryNumOfFrames;
	int m_nFrameNumWereAt;  // 64
	int m_nRunningVectorArrayPos;
	int m_nRunningVectorCounter;
	int DirectionWasLooking;

	float m_fMaxRoleAngle; //=DEGTORAD(5.0f);    
	float m_fRoll; //used for adding a slight roll to the camera in the
	float m_fRollSpeed; //camera on a string mode
	float m_fSyphonModeTargetZOffSet;
	float m_fAmountFractionObscured;
	float m_fAlphaSpeedOverOneFrame; // 100
	float m_fBetaSpeedOverOneFrame;
	float m_fBufferedTargetBeta;
	float m_fBufferedTargetOrientation;
	float m_fBufferedTargetOrientationSpeed;
	float m_fCamBufferedHeight;
	float m_fCamBufferedHeightSpeed;
	float m_fCloseInPedHeightOffset;
	float m_fCloseInPedHeightOffsetSpeed; // 132
	float m_fCloseInCarHeightOffset;
	float m_fCloseInCarHeightOffsetSpeed;
	float m_fDimensionOfHighestNearCar;       
	float m_fDistanceBeforeChanges;
	float m_fFovSpeedOverOneFrame;
	float m_fMinDistAwayFromCamWhenInterPolating;
	float m_fPedBetweenCameraHeightOffset;
	float m_fPlayerInFrontSyphonAngleOffSet; // 164
	float m_fRadiusForDead;
	float m_fRealGroundDist; //used for follow ped mode
	float m_fTargetBeta;
	float m_fTimeElapsedFloat;    
	float m_fTilt;
	float m_fTiltSpeed;
		  
	float m_fTransitionBeta;
	float m_fTrueBeta;
	float m_fTrueAlpha; // 200
	float m_fInitialPlayerOrientation; //used for first person
		  
	float m_fVerticalAngle;
	float m_fAlphaSpeed;
	float m_fFOV;
	float m_fFOVSpeed;
	float m_fHorizontalAngle;
	float m_fBetaSpeed;
	float m_fDistance; // 232
	float m_fDistanceSpeed;
	float m_fCA_MIN_DISTANCE;
	float m_fCA_MAX_DISTANCE;
	float m_fSpeedVar;

	// ped onfoot zoom distance
	float m_fTargetZoomGroundOne;
	float m_fTargetZoomGroundTwo; // 256
	float m_fTargetZoomGroundThree;
	// ped onfoot alpha angle offset
	float m_fTargetZoomOneZExtra;
	float m_fTargetZoomTwoZExtra;
	float m_fTargetZoomThreeZExtra;
    
	float m_fTargetZoomZCloseIn;
	float m_fMinRealGroundDist;
	float m_fTargetCloseInDist;

	CVector m_vecSourceSpeedOverOneFrame; // 324
	CVector m_vecTargetSpeedOverOneFrame; // 336
	CVector m_vecUpOverOneFrame; // 348
    
	CVector m_vecTargetCoorsForFudgeInter; // 360
	CVector m_vecCamFixedModeVector; // 372
	CVector m_vecCamFixedModeSource; // 384
	CVector m_vecCamFixedModeUpOffSet; // 396
	CVector m_vecLastAboveWaterCamPosition; //408  //helper for when the player has gone under the water

	CVector m_vecBufferedPlayerBodyOffset; // 420

	// The three vectors that determine this camera for this frame
	CVector m_vecFront;  // 432                                              // Direction of looking in
	CVector m_vecSource;                                                 // Coors in world space
	CVector m_vecSourceBeforeLookBehind;
	CVector m_vecUp;                                                     // Just that
	CVector m_arrPreviousVectors[NUMBER_OF_VECTORS_FOR_AVERAGE];    // used to average stuff
	CEntity *m_pCamTargetEntity;

	float m_fCameraDistance;
	float m_fIdealAlpha;
	float m_fPlayerVelocity;
	CAutomobile *m_pLastCarEntered; // So interpolation works
	CPed *m_pLastPedLookedAt;// So interpolation works 
	bool m_bFirstPersonRunAboutActive;
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
VALIDATE_OFFSET(CCam, DirectionWasLooking, 0x28);
VALIDATE_OFFSET(CCam, m_fMaxRoleAngle, 0x2C);
VALIDATE_OFFSET(CCam, m_fRoll, 0x30);
VALIDATE_OFFSET(CCam, m_fRollSpeed, 0x34);
VALIDATE_OFFSET(CCam, m_fSyphonModeTargetZOffSet, 0x38);
VALIDATE_OFFSET(CCam, m_fAmountFractionObscured, 0x3C);
VALIDATE_OFFSET(CCam, m_fAlphaSpeedOverOneFrame, 0x40);
VALIDATE_OFFSET(CCam, m_fBetaSpeedOverOneFrame, 0x44);
VALIDATE_OFFSET(CCam, m_fBufferedTargetBeta, 0x48);
VALIDATE_OFFSET(CCam, m_fBufferedTargetOrientation, 0x4C);
VALIDATE_OFFSET(CCam, m_fBufferedTargetOrientationSpeed, 0x50);
VALIDATE_OFFSET(CCam, m_fCamBufferedHeight, 0x54);
VALIDATE_OFFSET(CCam, m_fCamBufferedHeightSpeed, 0x58);
VALIDATE_OFFSET(CCam, m_fCloseInPedHeightOffset, 0x5C);
VALIDATE_OFFSET(CCam, m_fCloseInPedHeightOffsetSpeed, 0x60);
VALIDATE_OFFSET(CCam, m_fCloseInCarHeightOffset, 0x64);
VALIDATE_OFFSET(CCam, m_fCloseInCarHeightOffsetSpeed, 0x68);
VALIDATE_OFFSET(CCam, m_fDimensionOfHighestNearCar, 0x6C);
VALIDATE_OFFSET(CCam, m_fDistanceBeforeChanges, 0x70);
VALIDATE_OFFSET(CCam, m_fFovSpeedOverOneFrame, 0x74);
VALIDATE_OFFSET(CCam, m_fMinDistAwayFromCamWhenInterPolating, 0x78);
VALIDATE_OFFSET(CCam, m_fPedBetweenCameraHeightOffset, 0x7C);
VALIDATE_OFFSET(CCam, m_fPlayerInFrontSyphonAngleOffSet, 0x80);
VALIDATE_OFFSET(CCam, m_fRadiusForDead, 0x84);
VALIDATE_OFFSET(CCam, m_fRealGroundDist, 0x88);
VALIDATE_OFFSET(CCam, m_fTargetBeta, 0x8C);
VALIDATE_OFFSET(CCam, m_fTimeElapsedFloat, 0x90);
VALIDATE_OFFSET(CCam, m_fTilt, 0x94);
VALIDATE_OFFSET(CCam, m_fTiltSpeed, 0x98);
VALIDATE_OFFSET(CCam, m_fTransitionBeta, 0x9C);
VALIDATE_OFFSET(CCam, m_fTrueBeta, 0xA0);
VALIDATE_OFFSET(CCam, m_fTrueAlpha, 0xA4);
VALIDATE_OFFSET(CCam, m_fInitialPlayerOrientation, 0xA8);
VALIDATE_OFFSET(CCam, m_fVerticalAngle, 0xAC);
VALIDATE_OFFSET(CCam, m_fAlphaSpeed, 0xB0);
VALIDATE_OFFSET(CCam, m_fFOV, 0xB4);
VALIDATE_OFFSET(CCam, m_fFOVSpeed, 0xB8);
VALIDATE_OFFSET(CCam, m_fHorizontalAngle, 0xBC);
VALIDATE_OFFSET(CCam, m_fBetaSpeed, 0xC0);
VALIDATE_OFFSET(CCam, m_fDistance, 0xC4);
VALIDATE_OFFSET(CCam, m_fDistanceSpeed, 0xC8);
VALIDATE_OFFSET(CCam, m_fCA_MIN_DISTANCE, 0xCC);
VALIDATE_OFFSET(CCam, m_fCA_MAX_DISTANCE, 0xD0);
VALIDATE_OFFSET(CCam, m_fSpeedVar, 0xD4);
VALIDATE_OFFSET(CCam, m_fTargetZoomGroundOne, 0xD8);
VALIDATE_OFFSET(CCam, m_fTargetZoomGroundTwo, 0xDC);
VALIDATE_OFFSET(CCam, m_fTargetZoomGroundThree, 0xE0);
VALIDATE_OFFSET(CCam, m_fTargetZoomOneZExtra, 0xE4);
VALIDATE_OFFSET(CCam, m_fTargetZoomTwoZExtra, 0xE8);
VALIDATE_OFFSET(CCam, m_fTargetZoomThreeZExtra, 0xEC);
VALIDATE_OFFSET(CCam, m_fTargetZoomZCloseIn, 0xF0);
VALIDATE_OFFSET(CCam, m_fMinRealGroundDist, 0xF4);
VALIDATE_OFFSET(CCam, m_fTargetCloseInDist, 0xF8);
VALIDATE_OFFSET(CCam, m_vecSourceSpeedOverOneFrame, 0xFC);
VALIDATE_OFFSET(CCam, m_vecTargetSpeedOverOneFrame, 0x108);
VALIDATE_OFFSET(CCam, m_vecUpOverOneFrame, 0x114);
VALIDATE_OFFSET(CCam, m_vecTargetCoorsForFudgeInter, 0x120);
VALIDATE_OFFSET(CCam, m_vecCamFixedModeVector, 0x12C);
VALIDATE_OFFSET(CCam, m_vecCamFixedModeSource, 0x138);
VALIDATE_OFFSET(CCam, m_vecCamFixedModeUpOffSet, 0x144);
VALIDATE_OFFSET(CCam, m_vecLastAboveWaterCamPosition, 0x150);
VALIDATE_OFFSET(CCam, m_vecBufferedPlayerBodyOffset, 0x15C);
VALIDATE_OFFSET(CCam, m_vecFront, 0x168);
VALIDATE_OFFSET(CCam, m_vecSource, 0x174);
VALIDATE_OFFSET(CCam, m_vecSourceBeforeLookBehind, 0x180);
VALIDATE_OFFSET(CCam, m_vecUp, 0x18C);
VALIDATE_OFFSET(CCam, m_arrPreviousVectors, 0x198);
VALIDATE_OFFSET(CCam, m_pCamTargetEntity, 0x1B0);
VALIDATE_OFFSET(CCam, m_fCameraDistance, 0x1B4);
VALIDATE_OFFSET(CCam, m_fIdealAlpha, 0x1B8);
VALIDATE_OFFSET(CCam, m_fPlayerVelocity, 0x1BC);
VALIDATE_OFFSET(CCam, m_pLastCarEntered, 0x1C0);
VALIDATE_OFFSET(CCam, m_pLastPedLookedAt, 0x1C4);
VALIDATE_OFFSET(CCam, m_bFirstPersonRunAboutActive, 0x1C8);
VALIDATE_SIZE(CCam, 0x1CC);
