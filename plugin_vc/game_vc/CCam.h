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

VALIDATE_SIZE(CCam, 0x1CC);
