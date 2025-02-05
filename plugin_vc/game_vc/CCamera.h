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

extern CCamera &TheCamera;

VALIDATE_SIZE(CCamera, 0x958);
