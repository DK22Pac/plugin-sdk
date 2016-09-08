/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "eCamMode.h"
#include "CVector.h"

/* http://code.google.com/p/mtasa-blue/source/browse/tags/1.3.4/MTA10/game_sa/CCamSA.h */

#pragma pack(push, 4)
class PLUGIN_API CCam
{
public:
	bool              m_bBelowMinDist;
	bool              m_bBehindPlayerDesired;
	bool              m_bCamLookingAtVector;
	bool              m_bCollisionChecksOn;
	bool              m_bFixingBeta;
	bool              m_bTheHeightFixerVehicleIsATrain;
	bool              m_bLookBehindCamWasInFront;
	bool              m_bLookingBehind;
	bool              m_bLookingLeft;
	bool              m_bLookingRight;
	bool              m_bResetStatics;
	bool              m_bRotating;
	eCamMode          m_eMode;
	unsigned __int32  m_dwFinishTime;
	unsigned __int32  m_dwDoCollisionChecksOnFrameNum;
	unsigned __int32  m_dwDoCollisionCheckEveryNumOfFrames;
	unsigned __int32  m_dwFrameNumWereAt;
	unsigned __int32  m_dwRunningVectorArrayPos;
	unsigned __int32  m_dwRunningVectorCounter;
	unsigned __int32  m_dwDirectionWasLooking;
	float             m_fMaxRoleAngle;
	float             m_fRoll;
	float             m_fRollSpeed;
	float             m_fSyphonModeTargetZOffSet;
	float             m_fAmountFractionObscured;
	float             m_fAlphaSpeedOverOneFrame;
	float             m_fBetaSpeedOverOneFrame;
	float             m_fBufferedTargetBeta;
	float             m_fBufferedTargetOrientation;
	float             m_fBufferedTargetOrientationSpeed;
	float             m_fCamBufferedHeight;
	float             m_fCamBufferedHeightSpeed;
	float             m_fCloseInPedHeightOffset;
	float             m_fCloseInPedHeightOffsetSpeed;
	float             m_fCloseInCarHeightOffset;
	float             m_fCloseInCarHeightOffsetSpeed;
	float             m_fDimensionOfHighestNearCar;
	float             m_fDistanceBeforeChanges;
	float             m_fFovSpeedOverOneFrame;
	float             m_fMinDistAwayFromCamWhenInterPolating;
	float             m_fPedBetweenCameraHeightOffset;
	float             m_fPlayerInFrontSyphonAngleOffSet;
	float             m_fRadiusForDead;
	float             m_fRealGroundDist;
	float             m_fTargetBeta;
	float             m_fTimeElapsedFloat;
	float             m_fTilt;
	float             m_fTiltSpeed;
	float             m_fTransitionBeta;
	float             m_fTrueBeta;
	float             m_fTrueAlpha;
	float             m_fInitialPlayerOrientation;
	float             m_fVerticalAngle;
	float             m_fAlphaSpeed;
	float             m_fFOV;
	float             m_fFOVSpeed;
	float             m_fHorizontalAngle;
	float             m_fBetaSpeed;
	float             m_fDistance;
	float             m_fDistanceSpeed;
	float             m_fCaMinDistance;
	float             m_fCaMaxDistance;
	float             m_fSpeedVar;
	float             m_fCameraHeightMultiplier;
	float             m_fTargetZoomGroundOne;
	float             m_fTargetZoomGroundTwo;
	float             m_fTargetZoomGroundThree;
	float             m_fTargetZoomOneZExtra;
	float             m_fTargetZoomTwoZExtra;
	float             m_fTargetZoomTwoInteriorZExtra;
	float             m_fTargetZoomThreeZExtra;
	float             m_fTargetZoomZCloseIn;
	float             m_fMinRealGroundDist;
	float             m_fTargetCloseInDist;
	float             m_fBeta_Targeting;
	float             m_fX_Targetting;
	float             m_fY_Targetting;
	class CVehicle   *m_pCarWeAreFocussingOn;
	class CVehicle   *m_pCarWeAreFocussingOnI;
	float             m_fCamBumpedHorz;
	float             m_fCamBumpedVert;
	unsigned __int32  m_dwCamBumpedTime;
	CVector           m_vSourceSpeedOverOneFrame;
	CVector           m_vTargetSpeedOverOneFrame;
	CVector           m_vUpOverOneFrame;
	CVector           m_vTargetCoorsForFudgeInter;
	CVector           m_vCamFixedModeVector;
	CVector           m_vCamFixedModeSource;
	CVector           m_vCamFixedModeUpOffSet;
	CVector           m_vLastAboveWaterCamPosition;
	CVector           m_vBufferedPlayerBodyOffset;
	CVector           m_vFront;
	CVector           m_vSource;
	CVector           m_vSourceBeforeLookBehind;
	CVector           m_vUp;
	CVector           m_avPreviousVectors[2];
	CVector           m_avTargetHistoryPos[4];
	unsigned __int32  m_adwTargetHistoryTime[4];
	unsigned __int32  m_dwCurrentHistoryPoints;
	class CEntity    *m_pCamTargetEntity;
	float             m_fCameraDistance;
	float             m_fIdealAlpha;
	float             m_fPlayerVelocity;
	class CVehicle   *m_pLastCarEntered;
	class CPed       *m_pLastPedLookedAt;
	bool              m_bFirstPersonRunAboutActive;
};
#pragma pack(pop)

VALIDATE_SIZE(CCam, 0x238);
//VALIDATE_OFFSET(CCam, m_dwFinishTime, 0x10);