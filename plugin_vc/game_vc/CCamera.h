/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPlaceable.h"
#include "tCamPathSplines.h"
#include "CCam.h"
#include "tQueuedMode.h"
#include "CGarage.h"

#define MAX_NUM_OF_SPLINETYPES (4)

class CCamera : public CPlaceable {
public:
	bool    m_bAboveGroundTrainNodesLoaded;
	bool    m_bBelowGroundTrainNodesLoaded;
	bool    m_bCamDirectlyBehind;
	bool    m_bCamDirectlyInFront;
	bool    m_bCameraJustRestored;
	bool    m_bCutsceneFinished;
	bool    m_bCullZoneChecksOn;
	bool    m_bFirstPersonBeingUsed; // To indicate if the m_bFirstPersonBeingUsed viewer is being used.
	bool    m_bJustJumpedOutOf1stPersonBecauseOfTarget;
	bool    m_bIdleOn;
	bool    m_bInATunnelAndABigVehicle;
	bool    m_bInitialNodeFound;
	bool    m_bInitialNoNodeStaticsSet;
	bool    m_bIgnoreFadingStuffForMusic;
	bool    m_bPlayerIsInGarage;
	bool    m_bPlayerWasOnBike;
	bool    m_bJustCameOutOfGarage;
	bool    m_bJustInitalised;	//Just so the speed thingy doesn't go mad right at the start
	bool	m_bJust_Switched;	//Variable to indicate that we have jumped somewhere
	bool    m_bLookingAtPlayer;
	bool    m_bLookingAtVector;
	bool    m_bMoveCamToAvoidGeom;
	bool    m_bObbeCinematicPedCamOn;
	bool    m_bObbeCinematicCarCamOn;
	bool    m_bRestoreByJumpCut;
	bool    m_bUseNearClipScript;
	bool    m_bStartInterScript;
	bool	m_bStartingSpline;
	bool    m_bTargetJustBeenOnTrain;	//this variable is needed to be able to restore the camera
	bool    m_bTargetJustCameOffTrain;
	bool    m_bUseSpecialFovTrain;
	bool    m_bUseTransitionBeta;
	bool    m_bUseScriptZoomValuePed;
	bool    m_bUseScriptZoomValueCar;
	bool    m_bWaitForInterpolToFinish;
	bool    m_bItsOkToLookJustAtThePlayer;	 //Used when interpolating
	bool    m_bWantsToSwitchWidescreenOff;
	bool    m_bWideScreenOn;
	bool    m_b1stPersonRunCloseToAWall;
	bool    m_bHeadBob;
	bool    m_bVehicleSuspenHigh;
	bool    m_bEnable1rstPersonCamCntrlsScript;

	bool    m_bAllow1rstPersonWeaponsCamera;
	bool    m_bFailedCullZoneTestPreviously;
	bool    m_bFadeTargetIsSplashScreen;	//used as hack for fading 
	bool    m_bWorldViewerBeingUsed;	// To indicate if the world viewer is being used.                                      
	unsigned char   m_nActiveCam;				 // Which one at the moment (0 or 1)
											// Their is a fudge at the end when the renderware matrix will receive either
											// the active camera or the worldviewer camera
	unsigned int    m_nCamShakeStart;          // When did the camera shake start.
	unsigned int    m_nFirstPersonCamLastInputTime;
	unsigned int    m_nLongestTimeInMill;
	unsigned int    m_nNumberOfTrainCamNodes;

	unsigned char     m_nTransitionJUSTStarted;  // This is the first frame of a transition.
	unsigned char     m_nTransitionState;        // 0:one mode 1:transition
	unsigned int    m_nTimeLastChange;
	unsigned int    m_nTimeWeLeftIdle_StillNoInput;
	unsigned int    m_nTimeWeEnteredIdle;
	unsigned int    m_nTimeTransitionStart;    // When was the transition started ?
	unsigned int    m_nTransitionDuration;     // How long does the transition take ?
	unsigned int    m_nTransitionDurationTargetCoors;
	int     m_nBlurBlue;
	int     m_nBlurGreen;
	int     m_nBlurRed;
	int     m_nBlurType;
	int     m_nWorkOutSpeedThisNumFrames; 
	int     m_nNumFramesSoFar;				//counter
	int     m_nCurrentTrainCamNode;			//variable indicating which camera node we are at for the train
	int     m_nMotionBlur;					//to indicate that we are fading

	int     m_nMotionBlurAddAlpha;
	int     m_nCheckCullZoneThisNumFrames;
	int     m_nZoneCullFrameNumWereAt;
	int     m_nWhoIsInControlOfTheCamera;		//to discern between obbe and scripts
	float   m_fCamFrontXNorm, m_fCamFrontYNorm;
	float   m_fCarZoomIndicator;
	float   m_fCarZoomValue;
	float   m_fCarZoomValueSmooth;
	float   m_fDistanceToWater;
	float   m_fFOVDuringInter;
	float   m_fLODDistMultiplier;				 // This takes into account the FOV and the standard LOD multiplier Smaller aperture->bigger LOD multipliers.
	float   m_fGenerationDistMultiplier;		// This takes into account the FOV but noy the standard LOD multiplier

	float   m_fAlphaSpeedAtStartInter;
	float   m_fAlphaWhenInterPol;
	float   m_fAlphaDuringInterPol;
	float   m_fBetaDuringInterPol;
	float   m_fBetaSpeedAtStartInter;
	float   m_fBetaWhenInterPol;
	float   m_fFOVWhenInterPol;
	float   m_fFOVSpeedAtStartInter;
	float   m_fStartingBetaForInterPol;
	float   m_fStartingAlphaForInterPol;
	float   m_PedOrientForBehindOrInFront;

	float   m_fCameraAverageSpeed;		//this is an average depending on how many frames we work it out
	float   m_fCameraSpeedSoFar;		 //this is a running total
	float   m_fCamShakeForce;			 // How severe is the camera shake.
	float	m_fCarZoomValueScript;
	float   m_fFovForTrain;
	float   m_fFOV_Wide_Screen;
	float   m_fNearClipScript;
	float   m_fOldBetaDiff;						 // Needed for interpolation between 2 modes
	float   m_fPedZoomValue;
	float   m_fPedZoomValueSmooth;
	float   m_fPedZoomValueScript;
	float   m_fPositionAlongSpline;				//Variable used to indicate how far along the spline we are 0-1 for started to completed respectively
	float   m_fScreenReductionPercentage;
	float   m_fScreenReductionSpeed;
	float   m_fAlphaForPlayerAnim1rstPerson;
	float   m_fOrientation;            // The orientation of the camera. Used for peds walking.
	float   m_fPedZoomIndicator;
	float   m_fPlayerExhaustion;       // How tired is player (inaccurate sniping) 0.0f-1.0f
									// The following things are used by the sound code to
									// play reverb depending on the surroundings. From a point
									// in front of the camera the disance is measured to the
									// nearest obstacle (building)
	float   m_fSoundDistUp;			//, SoundDistLeft, SoundDistRight;     // These ones are buffered and should be used by the audio
	float   m_fSoundDistUpAsRead;		//, SoundDistLeftAsRead, SoundDistRightAsRead;
	float   m_fSoundDistUpAsReadOld;	 //, SoundDistLeftAsReadOld, SoundDistRightAsReadOld;
									 // Very rough distance to the nearest water for the sound to use
								  // Front vector X&Y normalised to 1. Used by loads of stuff.


	float   m_fAvoidTheGeometryProbsTimer;
	short   m_nAvoidTheGeometryProbsDirn;

	float   m_fWideScreenReductionAmount;	//0 for not reduced 1 for fully reduced (Variable for Les)
	float   m_fStartingFOVForInterPol;

	CCam m_asCams[3];                // The actual cameras (usually only one of the two is active)
								 // And to complicate this we have a third camera, this camera is 
								 // used for debugging when we want to have a look at the world.
								 // We can't change the camera mode because other objects depend on their

	CGarage *pToGarageWeAreIn;
	CGarage *pToGarageWeAreInForHackAvoidFirstPerson;
	tQueuedMode m_PlayerMode;

	// The higher priority player camera mode. This one is used
	// for the sniper mode and rocket launcher mode.
	// This one overwrites the m_PlayerMode above.
	tQueuedMode m_PlayerWeaponMode;
	CVector m_vecPreviousCameraPosition;		//needed to work out speed
	CVector m_vecRealPreviousCameraPosition;	// This cane be used by stuff outside the camera code. The one above is the same as the current coordinates outwidth the camera code.
											 // an active camera for range finding etc
	CVector m_vecAimingTargetCoors;        // Coors to look at with Gordons aiming thing
											// The player camera that is waiting to be used
											// This camera can replace the default camera where this is
											// needed (in tricky situations like tunnels for instance)
	CVector m_vecFixedModeVector;
	CVector m_vecFixedModeSource;
	CVector m_vecFixedModeUpOffSet;
	CVector m_vecCutSceneOffset;

	CVector m_vecStartingSourceForInterPol;
	CVector m_vecStartingTargetForInterPol;
	CVector m_vecStartingUpForInterPol;
	CVector m_vecSourceSpeedAtStartInter;
	CVector m_vecTargetSpeedAtStartInter;
	CVector m_vecUpSpeedAtStartInter;
	CVector m_vecSourceWhenInterPol;
	CVector m_vecTargetWhenInterPol;
	CVector m_vecUpWhenInterPol;
	CVector m_vecClearGeometryVec;
	CVector m_vecGameCamPos;

	CVector m_vecSourceDuringInter, m_vecTargetDuringInter, m_vecUpDuringInter;
	// RenderWare camera pointer
	RwCamera* m_pRwCamera;
						   
	CEntity *m_pTargetEntity;
	tCamPathSplines m_ArrPathArray[MAX_NUM_OF_SPLINETYPES]; //These only get created when the script calls the load splines function
	CMatrix m_CameraMatrix;
	bool    m_bGarageFixedCamPositionSet;
	bool    m_vecDoingSpecialInterPolation;
	bool    m_bScriptParametersSetForInterPol;
	bool    m_bFading;	//to indicate that we are fading 
	bool    m_bMusicFading;
	CMatrix m_ViewMatrix;
	CVector m_vecFrustumNormals[4];
	CVector m_vecOldSourceForInter;
	CVector m_vecOldFrontForInter;
	CVector m_vecOldUpForInter;
	float   m_vecOldFOVForInter;
	float   m_fFLOATingFade;	//variable representing the FLOAT version of CDraw::Fade. Necessary to stop loss of precision
	float   m_fFLOATingFadeMusic;
	float   m_fTimeToFadeOut;
	float   m_fTimeToFadeMusic;
	float   m_fFractionInterToStopMoving;
	float   m_fFractionInterToStopCatchUp;
	float   m_fFractionInterToStopMovingTarget;
	float   m_fFractionInterToStopCatchUpTarget;

	float   m_fGaitSwayBuffer;
	float   m_fScriptPercentageInterToStopMoving;
	float   m_fScriptPercentageInterToCatchUp;
	unsigned int  m_fScriptTimeForInterPolation;

	short   m_nFadingDirection;
	int     m_nModeObbeCamIsInForCar;
	short   m_nModeToGoTo;
	short   m_nMusicFadingDirection;
	short   m_nTypeOfSwitch;

	unsigned int  m_nFadeTimeStarted;
	unsigned int  m_nFadeTimeStartedMusic;

	static char& m_nFadeColorsSet;
	static bool& m_bUseMouse3rdPerson;
	static float& m_fMouseAccelVertical;
	static float& m_fMouseAccelHorzntal;
	static float& m_f3rdPersonCHairMultX;
	static float& m_f3rdPersonCHairMultY;

	void AvoidTheGeometry(CVector const& Vector1, CVector const& Vector2, CVector& Vector3, float arg4);
	void CalculateDerivedValues();
	void CamControl();
	void CamShake(float arg1, float x_coord, float y_coord, float z_coord);
	void ClearPlayerWeaponMode();
	void DeleteCutSceneCamDataMemory();
	static void DontProcessObbeCinemaCamera();
	void DrawBordersForWideScreen();
	void Fade(float timeToFade, short FadingDirection);
	bool Find3rdPersonCamTargetVector(float arg1, CVector vector1, CVector& vector2, CVector& vector3);
	float Find3rdPersonQuickAimPitch();
	void FinishCutscene();
	static bool GetArrPosForVehicleType(int vehicleType, int& ArrPos);
	int GetCutSceneFinishTime();
	bool GetFading();
	CVector* GetGameCamPosition();
	int GetLookDirection();
	bool GetLookingForwardFirstPerson();
	bool GetLookingLRBFirstPerson();
	float GetPositionAlongSpline();
	bool GetScreenFadeStatus();
	void GetScreenRect(CRect& Rect);
	bool Get_Just_Switched_Status();
	void Init();
	bool IsItTimeForNewcam(int arg1, int timer);
	static void LoadPathSplines(int FilePtr);
	void Process();
	void ProcessFade();
	void ProcessMusicFade();
	void ProcessObbeCinemaCameraCar();
	void ProcessObbeCinemaCameraHeli();
	void ProcessObbeCinemaCameraPed();
	void RenderMotionBlur();
	void Restore();
	void RestoreWithJumpCut();
	void SetCamCutSceneOffSet(CVector const& vecCutSceneOffset);
	void SetCamPositionForFixedMode(CVector const& vecFixedModeSource, CVector const& vecFixedModeUpOffSet);
	void SetCameraDirectlyBehindForFollowPed_CamOnAString();
	void SetCameraDirectlyInFrontForFollowPed_CamOnAString();
	void SetFadeColour(unsigned char red, unsigned char green, unsigned char blue);
	void SetMotionBlur(int red, int green, int blue, int motionblur, int blurtype);
	void SetMotionBlurAlpha(int alpha);
	void SetNearClipScript(float fNearClipScript);
	void SetNewPlayerWeaponMode(short Mode, short MinZoom, short MaxZoom);
	void SetParametersForScriptInterpolation(float fScriptInterToStopMoving, float fScriptInterToCatchUp, unsigned int fScriptTimeForInterPolation);
	void SetRwCamera(RwCamera* pRwCam);
	void SetWideScreenOff();
	void SetWideScreenOn();
	void SetZoomValueCamStringScript(short mode);
	void SetZoomValueFollowPedScript(short mode);
	void StartTransition(short mode);
	void StartTransitionWhenNotFinishedInter(short mode);
	void StoreValuesDuringInterPol(CVector& SourceDuringInter, CVector& TargetDuringInter, CVector& UpDuringInter, float& FOVDuringInter);
	void TakeControl(CEntity* pEntity, short mode, short TypeOfSwitch, int WhoIsInControlOfTheCamera);
	void TakeControlNoEntity(CVector const& vecFixedModeVector, short TypeOfSwitch, int WhoIsInControlOfTheCamera);
	void TakeControlWithSpline(short TypeOfSwitch);
	bool TryToStartNewCamMode(int mode);
	void UpdateAimingCoors(CVector const& vecAimingTarget);
	void UpdateSoundDistances();
	void UpdateTargetEntity();
	bool Using1stPersonWeaponMode();
};
VALIDATE_OFFSET(CCamera, m_bAboveGroundTrainNodesLoaded, 0x48);
VALIDATE_OFFSET(CCamera, m_bBelowGroundTrainNodesLoaded, 0x49);
VALIDATE_OFFSET(CCamera, m_bCamDirectlyBehind, 0x4A);
VALIDATE_OFFSET(CCamera, m_bCamDirectlyInFront, 0x4B);
VALIDATE_OFFSET(CCamera, m_bCameraJustRestored, 0x4C);
VALIDATE_OFFSET(CCamera, m_bCutsceneFinished, 0x4D);
VALIDATE_OFFSET(CCamera, m_bCullZoneChecksOn, 0x4E);
VALIDATE_OFFSET(CCamera, m_bFirstPersonBeingUsed, 0x4F);
VALIDATE_OFFSET(CCamera, m_bJustJumpedOutOf1stPersonBecauseOfTarget, 0x50);
VALIDATE_OFFSET(CCamera, m_bIdleOn, 0x51);
VALIDATE_OFFSET(CCamera, m_bInATunnelAndABigVehicle, 0x52);
VALIDATE_OFFSET(CCamera, m_bInitialNodeFound, 0x53);
VALIDATE_OFFSET(CCamera, m_bInitialNoNodeStaticsSet, 0x54);
VALIDATE_OFFSET(CCamera, m_bIgnoreFadingStuffForMusic, 0x55);
VALIDATE_OFFSET(CCamera, m_bPlayerIsInGarage, 0x56);
VALIDATE_OFFSET(CCamera, m_bPlayerWasOnBike, 0x57);
VALIDATE_OFFSET(CCamera, m_bJustCameOutOfGarage, 0x58);
VALIDATE_OFFSET(CCamera, m_bJustInitalised, 0x59);
VALIDATE_OFFSET(CCamera, m_bJust_Switched, 0x5A);
VALIDATE_OFFSET(CCamera, m_bLookingAtPlayer, 0x5B);
VALIDATE_OFFSET(CCamera, m_bLookingAtVector, 0x5C);
VALIDATE_OFFSET(CCamera, m_bMoveCamToAvoidGeom, 0x5D);
VALIDATE_OFFSET(CCamera, m_bObbeCinematicPedCamOn, 0x5E);
VALIDATE_OFFSET(CCamera, m_bObbeCinematicCarCamOn, 0x5F);
VALIDATE_OFFSET(CCamera, m_bRestoreByJumpCut, 0x60);
VALIDATE_OFFSET(CCamera, m_bUseNearClipScript, 0x61);
VALIDATE_OFFSET(CCamera, m_bStartInterScript, 0x62);
VALIDATE_OFFSET(CCamera, m_bStartingSpline, 0x63);
VALIDATE_OFFSET(CCamera, m_bTargetJustBeenOnTrain, 0x64);
VALIDATE_OFFSET(CCamera, m_bTargetJustCameOffTrain, 0x65);
VALIDATE_OFFSET(CCamera, m_bUseSpecialFovTrain, 0x66);
VALIDATE_OFFSET(CCamera, m_bUseTransitionBeta, 0x67);
VALIDATE_OFFSET(CCamera, m_bUseScriptZoomValuePed, 0x68);
VALIDATE_OFFSET(CCamera, m_bUseScriptZoomValueCar, 0x69);
VALIDATE_OFFSET(CCamera, m_bWaitForInterpolToFinish, 0x6A);
VALIDATE_OFFSET(CCamera, m_bItsOkToLookJustAtThePlayer, 0x6B);
VALIDATE_OFFSET(CCamera, m_bWantsToSwitchWidescreenOff, 0x6C);
VALIDATE_OFFSET(CCamera, m_bWideScreenOn, 0x6D);
VALIDATE_OFFSET(CCamera, m_b1stPersonRunCloseToAWall, 0x6E);
VALIDATE_OFFSET(CCamera, m_bHeadBob, 0x6F);
VALIDATE_OFFSET(CCamera, m_bVehicleSuspenHigh, 0x70);
VALIDATE_OFFSET(CCamera, m_bEnable1rstPersonCamCntrlsScript, 0x71);
VALIDATE_OFFSET(CCamera, m_bAllow1rstPersonWeaponsCamera, 0x72);
VALIDATE_OFFSET(CCamera, m_bFailedCullZoneTestPreviously, 0x73);
VALIDATE_OFFSET(CCamera, m_bFadeTargetIsSplashScreen, 0x74);
VALIDATE_OFFSET(CCamera, m_bWorldViewerBeingUsed, 0x75);
VALIDATE_OFFSET(CCamera, m_nActiveCam, 0x76);
VALIDATE_OFFSET(CCamera, m_nCamShakeStart, 0x78);
VALIDATE_OFFSET(CCamera, m_nFirstPersonCamLastInputTime, 0x7C);
VALIDATE_OFFSET(CCamera, m_nLongestTimeInMill, 0x80);
VALIDATE_OFFSET(CCamera, m_nNumberOfTrainCamNodes, 0x84);
VALIDATE_OFFSET(CCamera, m_nTransitionJUSTStarted, 0x88);
VALIDATE_OFFSET(CCamera, m_nTransitionState, 0x89);
VALIDATE_OFFSET(CCamera, m_nTimeLastChange, 0x8C);
VALIDATE_OFFSET(CCamera, m_nTimeWeLeftIdle_StillNoInput, 0x90);
VALIDATE_OFFSET(CCamera, m_nTimeWeEnteredIdle, 0x94);
VALIDATE_OFFSET(CCamera, m_nTimeTransitionStart, 0x98);
VALIDATE_OFFSET(CCamera, m_nTransitionDuration, 0x9C);
VALIDATE_OFFSET(CCamera, m_nTransitionDurationTargetCoors, 0xA0);
VALIDATE_OFFSET(CCamera, m_nBlurBlue, 0xA4);
VALIDATE_OFFSET(CCamera, m_nBlurGreen, 0xA8);
VALIDATE_OFFSET(CCamera, m_nBlurRed, 0xAC);
VALIDATE_OFFSET(CCamera, m_nBlurType, 0xB0);
VALIDATE_OFFSET(CCamera, m_nWorkOutSpeedThisNumFrames, 0xB4);
VALIDATE_OFFSET(CCamera, m_nNumFramesSoFar, 0xB8);
VALIDATE_OFFSET(CCamera, m_nCurrentTrainCamNode, 0xBC);
VALIDATE_OFFSET(CCamera, m_nMotionBlur, 0xC0);
VALIDATE_OFFSET(CCamera, m_nMotionBlurAddAlpha, 0xC4);
VALIDATE_OFFSET(CCamera, m_nCheckCullZoneThisNumFrames, 0xC8);
VALIDATE_OFFSET(CCamera, m_nZoneCullFrameNumWereAt, 0xCC);
VALIDATE_OFFSET(CCamera, m_nWhoIsInControlOfTheCamera, 0xD0);
VALIDATE_OFFSET(CCamera, m_fCamFrontXNorm, 0xD4);
VALIDATE_OFFSET(CCamera, m_fCamFrontYNorm, 0xD8);
VALIDATE_OFFSET(CCamera, m_fCarZoomIndicator, 0xDC);
VALIDATE_OFFSET(CCamera, m_fCarZoomValue, 0xE0);
VALIDATE_OFFSET(CCamera, m_fCarZoomValueSmooth, 0xE4);
VALIDATE_OFFSET(CCamera, m_fDistanceToWater, 0xE8);
VALIDATE_OFFSET(CCamera, m_fFOVDuringInter, 0xEC);
VALIDATE_OFFSET(CCamera, m_fLODDistMultiplier, 0xF0);
VALIDATE_OFFSET(CCamera, m_fGenerationDistMultiplier, 0xF4);
VALIDATE_OFFSET(CCamera, m_fAlphaSpeedAtStartInter, 0xF8);
VALIDATE_OFFSET(CCamera, m_fAlphaWhenInterPol, 0xFC);
VALIDATE_OFFSET(CCamera, m_fAlphaDuringInterPol, 0x100);
VALIDATE_OFFSET(CCamera, m_fBetaDuringInterPol, 0x104);
VALIDATE_OFFSET(CCamera, m_fBetaSpeedAtStartInter, 0x108);
VALIDATE_OFFSET(CCamera, m_fBetaWhenInterPol, 0x10C);
VALIDATE_OFFSET(CCamera, m_fFOVWhenInterPol, 0x110);
VALIDATE_OFFSET(CCamera, m_fFOVSpeedAtStartInter, 0x114);
VALIDATE_OFFSET(CCamera, m_fStartingBetaForInterPol, 0x118);
VALIDATE_OFFSET(CCamera, m_fStartingAlphaForInterPol, 0x11C);
VALIDATE_OFFSET(CCamera, m_PedOrientForBehindOrInFront, 0x120);
VALIDATE_OFFSET(CCamera, m_fCameraAverageSpeed, 0x124);
VALIDATE_OFFSET(CCamera, m_fCameraSpeedSoFar, 0x128);
VALIDATE_OFFSET(CCamera, m_fCamShakeForce, 0x12C);
VALIDATE_OFFSET(CCamera, m_fCarZoomValueScript, 0x130);
VALIDATE_OFFSET(CCamera, m_fFovForTrain, 0x134);
VALIDATE_OFFSET(CCamera, m_fFOV_Wide_Screen, 0x138);
VALIDATE_OFFSET(CCamera, m_fNearClipScript, 0x13C);
VALIDATE_OFFSET(CCamera, m_fOldBetaDiff, 0x140);
VALIDATE_OFFSET(CCamera, m_fPedZoomValue, 0x144);
VALIDATE_OFFSET(CCamera, m_fPedZoomValueSmooth, 0x148);
VALIDATE_OFFSET(CCamera, m_fPedZoomValueScript, 0x14C);
VALIDATE_OFFSET(CCamera, m_fPositionAlongSpline, 0x150);
VALIDATE_OFFSET(CCamera, m_fScreenReductionPercentage, 0x154);
VALIDATE_OFFSET(CCamera, m_fScreenReductionSpeed, 0x158);
VALIDATE_OFFSET(CCamera, m_fAlphaForPlayerAnim1rstPerson, 0x15C);
VALIDATE_OFFSET(CCamera, m_fOrientation, 0x160);
VALIDATE_OFFSET(CCamera, m_fPedZoomIndicator, 0x164);
VALIDATE_OFFSET(CCamera, m_fPlayerExhaustion, 0x168);
VALIDATE_OFFSET(CCamera, m_fSoundDistUp, 0x16C);
VALIDATE_OFFSET(CCamera, m_fSoundDistUpAsRead, 0x170);
VALIDATE_OFFSET(CCamera, m_fSoundDistUpAsReadOld, 0x174);
VALIDATE_OFFSET(CCamera, m_fAvoidTheGeometryProbsTimer, 0x178);
VALIDATE_OFFSET(CCamera, m_nAvoidTheGeometryProbsDirn, 0x17C);
VALIDATE_OFFSET(CCamera, m_fWideScreenReductionAmount, 0x180);
VALIDATE_OFFSET(CCamera, m_fStartingFOVForInterPol, 0x184);
VALIDATE_OFFSET(CCamera, m_asCams, 0x188);
VALIDATE_OFFSET(CCamera, pToGarageWeAreIn, 0x6EC);
VALIDATE_OFFSET(CCamera, pToGarageWeAreInForHackAvoidFirstPerson, 0x6F0);
VALIDATE_OFFSET(CCamera, m_PlayerMode, 0x6F4);
VALIDATE_OFFSET(CCamera, m_PlayerWeaponMode, 0x700);
VALIDATE_OFFSET(CCamera, m_vecPreviousCameraPosition, 0x70C);
VALIDATE_OFFSET(CCamera, m_vecRealPreviousCameraPosition, 0x718);
VALIDATE_OFFSET(CCamera, m_vecAimingTargetCoors, 0x724);
VALIDATE_OFFSET(CCamera, m_vecFixedModeVector, 0x730);
VALIDATE_OFFSET(CCamera, m_vecFixedModeSource, 0x73C);
VALIDATE_OFFSET(CCamera, m_vecFixedModeUpOffSet, 0x748);
VALIDATE_OFFSET(CCamera, m_vecCutSceneOffset, 0x754);
VALIDATE_OFFSET(CCamera, m_vecStartingSourceForInterPol, 0x760);
VALIDATE_OFFSET(CCamera, m_vecStartingTargetForInterPol, 0x76C);
VALIDATE_OFFSET(CCamera, m_vecStartingUpForInterPol, 0x778);
VALIDATE_OFFSET(CCamera, m_vecSourceSpeedAtStartInter, 0x784);
VALIDATE_OFFSET(CCamera, m_vecTargetSpeedAtStartInter, 0x790);
VALIDATE_OFFSET(CCamera, m_vecUpSpeedAtStartInter, 0x79C);
VALIDATE_OFFSET(CCamera, m_vecSourceWhenInterPol, 0x7A8);
VALIDATE_OFFSET(CCamera, m_vecTargetWhenInterPol, 0x7B4);
VALIDATE_OFFSET(CCamera, m_vecUpWhenInterPol, 0x7C0);
VALIDATE_OFFSET(CCamera, m_vecClearGeometryVec, 0x7CC);
VALIDATE_OFFSET(CCamera, m_vecGameCamPos, 0x7D8);
VALIDATE_OFFSET(CCamera, m_vecSourceDuringInter, 0x7E4);
VALIDATE_OFFSET(CCamera, m_vecTargetDuringInter, 0x7F0);
VALIDATE_OFFSET(CCamera, m_vecUpDuringInter, 0x7FC);
VALIDATE_OFFSET(CCamera, m_pRwCamera, 0x808);
VALIDATE_OFFSET(CCamera, m_pTargetEntity, 0x80C);
VALIDATE_OFFSET(CCamera, m_ArrPathArray, 0x810);
VALIDATE_OFFSET(CCamera, m_CameraMatrix, 0x820);
VALIDATE_OFFSET(CCamera, m_bGarageFixedCamPositionSet, 0x868);
VALIDATE_OFFSET(CCamera, m_vecDoingSpecialInterPolation, 0x869);
VALIDATE_OFFSET(CCamera, m_bScriptParametersSetForInterPol, 0x86A);
VALIDATE_OFFSET(CCamera, m_bFading, 0x86B);
VALIDATE_OFFSET(CCamera, m_bMusicFading, 0x86C);
VALIDATE_OFFSET(CCamera, m_ViewMatrix, 0x870);
VALIDATE_OFFSET(CCamera, m_vecFrustumNormals, 0x8B8);
VALIDATE_OFFSET(CCamera, m_vecOldSourceForInter, 0x8E8);
VALIDATE_OFFSET(CCamera, m_vecOldFrontForInter, 0x8F4);
VALIDATE_OFFSET(CCamera, m_vecOldUpForInter, 0x900);
VALIDATE_OFFSET(CCamera, m_vecOldFOVForInter, 0x90C);
VALIDATE_OFFSET(CCamera, m_fFLOATingFade, 0x910);
VALIDATE_OFFSET(CCamera, m_fFLOATingFadeMusic, 0x914);
VALIDATE_OFFSET(CCamera, m_fTimeToFadeOut, 0x918);
VALIDATE_OFFSET(CCamera, m_fTimeToFadeMusic, 0x91C);
VALIDATE_OFFSET(CCamera, m_fFractionInterToStopMoving, 0x920);
VALIDATE_OFFSET(CCamera, m_fFractionInterToStopCatchUp, 0x924);
VALIDATE_OFFSET(CCamera, m_fFractionInterToStopMovingTarget, 0x928);
VALIDATE_OFFSET(CCamera, m_fFractionInterToStopCatchUpTarget, 0x92C);
VALIDATE_OFFSET(CCamera, m_fGaitSwayBuffer, 0x930);
VALIDATE_OFFSET(CCamera, m_fScriptPercentageInterToStopMoving, 0x934);
VALIDATE_OFFSET(CCamera, m_fScriptPercentageInterToCatchUp, 0x938);
VALIDATE_OFFSET(CCamera, m_fScriptTimeForInterPolation, 0x93C);
VALIDATE_OFFSET(CCamera, m_nFadingDirection, 0x940);
VALIDATE_OFFSET(CCamera, m_nModeObbeCamIsInForCar, 0x944);
VALIDATE_OFFSET(CCamera, m_nModeToGoTo, 0x948);
VALIDATE_OFFSET(CCamera, m_nMusicFadingDirection, 0x94A);
VALIDATE_OFFSET(CCamera, m_nTypeOfSwitch, 0x94C);
VALIDATE_OFFSET(CCamera, m_nFadeTimeStarted, 0x950);
VALIDATE_OFFSET(CCamera, m_nFadeTimeStartedMusic, 0x954);
VALIDATE_SIZE(CCamera, 0x958);

extern CCamera &TheCamera;

VALIDATE_SIZE(CCamera, 0x958);
