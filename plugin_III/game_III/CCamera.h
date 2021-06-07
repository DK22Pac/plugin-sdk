/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPlaceable.h"
#include "CCam.h"
#include "CGarage.h"
#include "CVector.h"
#include "RenderWare.h"
#include "CEntity.h"
#include "CPathSplines.h"
#include "CTrainCamNode.h"
#include "CMatrix.h"

enum PLUGIN_API eCamControl {
    CAMCONTROL_GAME = 0,
    CAMCONTROL_SCRIPT = 1,
    CAMCONTROL_OBBE = 2
};

struct PLUGIN_API CQueuedMode {
    short Mode;
    float Duration;
    short MinZoom;
    short MaxZoom;
};

class PLUGIN_API CCamera : public CPlaceable {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CCamera)

public:
    bool m_bAboveGroundTrainNodesLoaded;
    bool m_bBelowGroundTrainNodesLoaded;
    bool m_bCamDirectlyBehind;
    bool m_bCamDirectlyInFront;
    bool m_bCameraJustRestored;
    bool m_bCutsceneFinished;
    bool m_bCullZoneChecksOn;
    bool m_bFirstPersonBeingUsed;
    bool m_bJustJumpedOutOf1stPersonBecauseOfTarget;
    bool m_bIdleOn;
    bool m_bInATunnelAndABigVehicle;
    bool m_bInitialNodeFound;
    bool m_bInitialNoNodeStaticsSet;
    bool m_bIgnoreFadingStuffForMusic;
    bool m_bPlayerIsInGarage;
    bool m_bJustCameOutOfGarage;
    bool m_bJustInitalised;
    bool m_bJust_Switched;
    bool m_bLookingAtPlayer;
    bool m_bLookingAtVector;
    bool m_bMoveCamToAvoidGeom;
    bool m_bObbeCinematicPedCamOn;
    bool m_bObbeCinematicCarCamOn;
    bool m_bRestoreByJumpCut;
    bool m_bUseNearClipScript;
    bool m_bStartInterScript;
    bool m_bStartingSpline;
    bool m_bTargetJustBeenOnTrain;
    bool m_bTargetJustCameOffTrain;
    bool m_bUseSpecialFovTrain;
    bool m_bUseTransitionBeta;
    bool m_bUseScriptZoomValuePed;
    bool m_bUseScriptZoomValueCar;
    bool m_bWaitForInterpolToFinish;
    bool m_bItsOkToLookJustAtThePlayer;
    bool m_bWantsToSwitchWidescreenOff;
    bool m_bWideScreenOn;
    bool m_b1rstPersonRunCloseToAWall;
    bool m_bHeadBob;
    bool m_bFailedCullZoneTestPreviously;
    bool m_bFadeTargetIsSplashScreen;
    bool m_bWorldViewerBeingUsed;
    unsigned char m_nActiveCam;
    unsigned int m_nCamShakeStart;
    unsigned int m_nFirstPersonCamLastInputTime;
    unsigned int m_nLongestTimeInMill;
    unsigned int m_nNumberOfTrainCamNodes;
    unsigned char m_nTransitionJUSTStarted;
    unsigned char m_nTransitionState; //!< 0:one mode 1:transition
    unsigned int m_nTimeLastChange;
    unsigned int m_nTimeWeEnteredIdle;
    unsigned int m_nTimeTransitionStart;
    unsigned int m_nTransitionDuration;
    int m_nBlurBlue;
    int m_nBlurGreen;
    int m_nBlurRed;
    int m_nBlurType;
    int field_AC; //!< some counter having to do with music
    int m_nWorkOutSpeedThisNumFrames;
    int m_nNumFramesSoFar;
    int m_nCurrentTrainCamNode;
    int m_nMotionBlur;
    int m_nMotionBlurAddAlpha;
    int m_nCheckCullZoneThisNumFrames;
    int m_nZoneCullFrameNumWereAt;
    int m_nWhoIsInControlOfTheCamera;
    float m_fCamFrontXNorm;
    float m_fCamFrontYNorm;
    float m_fCarZoomIndicator;
    float m_fCarZoomValue;
    float m_fCarZoomValueSmooth;
    float m_fDistanceToWater;
    float m_fFOVDuringInter;
    float m_fLODDistMultiplier;
    float m_fGenerationDistMultiplier;
    float m_fAlphaSpeedAtStartInter;
    float m_fAlphaWhenInterPol;
    float m_fAlphaDuringInterPol;
    float m_fBetaDuringInterPol;
    float m_fBetaSpeedAtStartInter;
    float m_fBetaWhenInterPol;
    float m_fFOVWhenInterPol;
    float m_fFOVSpeedAtStartInter;
    float m_fStartingBetaForInterPol;
    float m_fStartingAlphaForInterPol;
    float m_fPedOrientForBehindOrInFront;
    float m_fCameraAverageSpeed;
    float m_fCameraSpeedSoFar;
    float m_fCamShakeForce;
    float m_fCarZoomValueScript;
    float m_fFovForTrain;
    float m_fFOVWideScreen;
    float m_fNearClipScript;
    float m_fOldBetaDiff;
    float m_fPedZoomValue;
    float m_fPedZoomValueScript;
    float m_fPedZoomValueSmooth;
    float m_fPositionAlongSpline;
    float m_fScreenReductionPercentage;
    float m_fScreenReductionSpeed;
    float m_fAlphaForPlayerAnim1rstPerson;
    float m_fOrientation;
    float m_fPedZoomIndicator;
    float m_fPlayerExhaustion;
    float m_fSoundDistUp;
    float m_fSoundDistLeft;
    float m_fSoundDistRight;
    float m_fSoundDistUpAsRead;
    float m_fSoundDistLeftAsRead;
    float m_fSoundDistRightAsRead;
    float m_fSoundDistUpAsReadOld;
    float m_fSoundDistLeftAsReadOld;
    float m_fSoundDistRightAsReadOld;
    float m_fWideScreenReductionAmount;
    float m_fStartingFOVForInterPol;
    float m_fMouseAccelHorzntal; //!< acceleration multiplier for 1st person controls
    float m_fMouseAccelVertical; //!< acceleration multiplier for 1st person controls
    float m_f3rdPersonCHairMultX;
    float m_f3rdPersonCHairMultY;
    CCam m_asCams[3];
    CGarage *m_pToGarageWeAreIn;
    CGarage *m_pToGarageWeAreInForHackAvoidFirstPerson;
    CQueuedMode m_PlayerMode;
    CQueuedMode m_PlayerWeaponMode;
    CVector m_vecPreviousCameraPosition;
    CVector m_vecRealPreviousCameraPosition;
    CVector m_vecAimingTargetCoors;
    CVector m_vecFixedModeVector;
    CVector m_vecFixedModeSource;
    CVector m_vecFixedModeUpOffSet;
    CVector m_vCamCutSceneOffset;
    CVector m_vecStartingSourceForInterPol;
    CVector m_vecStartingTargetForInterPol;
    CVector m_vecStartingUpForInterPol;
    CVector m_vecSourceSpeedAtStartInter;
    CVector m_vecTargetSpeedAtStartInter;
    CVector m_vecUpSpeedAtStartInter;
    CVector m_vecSourceWhenInterPol;
    CVector m_vecTargetWhenInterPol;
    CVector m_vecUpWhenInterPol;
    CVector m_vecGameCamPos;
    CVector m_vecSourceDuringInter;
    CVector m_vecTargetDuringInter;
    CVector m_vecUpDuringInter;
    RwCamera *m_pRwCamera;
    CEntity *m_pTargetEntity;
    CPathSplines m_aPathSplines[4];
    CTrainCamNode m_aTrainCamNodes[800];
    CMatrix m_CameraMatrix;
    bool m_bGarageFixedCamPositionSet;
    bool m_bDoingSpecialInterPolation;
    bool m_bScriptParametersSetForInterPol;
    bool m_bFading;
    bool m_bMusicFading;
    CMatrix m_ViewMatrix;
    CVector m_avecFrustumNormals[4];
    CVector m_vecOldSourceForInter;
    CVector m_vecOldFrontForInter;
    CVector m_vecOldUpForInter;
    float m_fOldFOVForInter;
    float m_fFLOATingFade;
    float m_fFLOATingFadeMusic;
    float m_fTimeToFadeOut;
    float m_fTimeToFadeMusic;
    float m_fFractionInterToStopMoving;
    float m_fFractionInterToStopCatchUp;
    float m_fGaitSwayBuffer;
    float m_fScriptPercentageInterToStopMoving;
    float m_fScriptPercentageInterToCatchUp;
    unsigned int m_nScriptTimeForInterPolation;
    short m_nFadingDirection;
    int m_nModeObbeCamIsInForCar;
    short m_nModeToGoTo;
    short m_nMusicFadingDirection;
    short m_nTypeOfSwitch;
    unsigned int m_nFadeTimeStarted;
    unsigned int m_nFadeTimeStartedMusic;

    SUPPORTED_10EN_11EN_STEAM static bool &m_bUseMouse3rdPerson;

    // virtual function #0 (destructor)


    SUPPORTED_10EN_11EN_STEAM void CalculateDerivedValues();
    SUPPORTED_10EN_11EN_STEAM void CamControl();
    SUPPORTED_10EN_11EN_STEAM void CamShake(float strength, float x, float y, float z);
    SUPPORTED_10EN_11EN_STEAM void ClearPlayerWeaponMode();
    SUPPORTED_10EN_11EN_STEAM void DontProcessObbeCinemaCamera();
    SUPPORTED_10EN_11EN_STEAM void DrawBordersForWideScreen();
    SUPPORTED_10EN_11EN_STEAM void Fade(float timeOut, short direction);
    SUPPORTED_10EN_11EN_STEAM void Find3rdPersonCamTargetVector(float dist, CVector pos, CVector &source, CVector &target);
    SUPPORTED_10EN_11EN_STEAM float Find3rdPersonQuickAimPitch();
    SUPPORTED_10EN_11EN_STEAM void FinishCutscene();
    SUPPORTED_10EN_11EN_STEAM CMatrix *GetCameraMatrix();
    SUPPORTED_10EN_11EN_STEAM unsigned int GetCutSceneFinishTime();
    SUPPORTED_10EN_11EN_STEAM bool GetFading();
    SUPPORTED_10EN_11EN_STEAM int GetFadingDirection();
    SUPPORTED_10EN_11EN_STEAM CVector *GetGameCamPosition();
    SUPPORTED_10EN_11EN_STEAM int GetLookDirection();
    SUPPORTED_10EN_11EN_STEAM bool GetLookingForwardFirstPerson();
    SUPPORTED_10EN_11EN_STEAM bool GetLookingLRBFirstPerson();
    SUPPORTED_10EN_11EN_STEAM float GetPositionAlongSpline();
    SUPPORTED_10EN_11EN_STEAM int GetScreenFadeStatus();
    SUPPORTED_10EN_11EN_STEAM bool Get_Just_Switched_Status();
    SUPPORTED_10EN_11EN_STEAM void Init();
    SUPPORTED_10EN_11EN_STEAM void InitialiseCameraForDebugMode();
    SUPPORTED_10EN_11EN_STEAM bool IsItTimeForNewcam(int obbeMode, int time);
    SUPPORTED_10EN_11EN_STEAM bool IsSphereVisible(CVector const &center, float radius, CMatrix const *matrix);
    SUPPORTED_10EN_11EN_STEAM bool IsSphereVisible(CVector const &center, float radius);
    SUPPORTED_10EN_11EN_STEAM void LoadPathSplines(int file);
    SUPPORTED_10EN_11EN_STEAM void LoadTrainCamNodes(char const *name);
    SUPPORTED_10EN_11EN_STEAM void Process();
    SUPPORTED_10EN_11EN_STEAM void ProcessFade();
    SUPPORTED_10EN_11EN_STEAM void ProcessMusicFade();
    SUPPORTED_10EN_11EN_STEAM void ProcessObbeCinemaCameraCar();
    SUPPORTED_10EN_11EN_STEAM void ProcessObbeCinemaCameraPed();
    SUPPORTED_10EN_11EN_STEAM void ProcessWideScreenOn();
    SUPPORTED_10EN_11EN_STEAM void Process_Train_Camera_Control();
    SUPPORTED_10EN_11EN_STEAM void RenderMotionBlur();
    SUPPORTED_10EN_11EN_STEAM void Restore();
    SUPPORTED_10EN_11EN_STEAM void RestoreWithJumpCut();
    SUPPORTED_10EN_11EN_STEAM void SetCamCutSceneOffSet(CVector const &pos);
    SUPPORTED_10EN_11EN_STEAM void SetCamPositionForFixedMode(CVector const &source, CVector const &offset);
    SUPPORTED_10EN_11EN_STEAM void SetCameraDirectlyBehindForFollowPed_CamOnAString();
    SUPPORTED_10EN_11EN_STEAM void SetCameraDirectlyInFrontForFollowPed_CamOnAString();
    SUPPORTED_10EN_11EN_STEAM void SetFadeColour(unsigned char red, unsigned char green, unsigned char blue);
    SUPPORTED_10EN_11EN_STEAM void SetMotionBlur(int red, int green, int blue, int value, int type);
    SUPPORTED_10EN_11EN_STEAM void SetMotionBlurAlpha(int alpha);
    SUPPORTED_10EN_11EN_STEAM void SetNearClipScript(float clip);
    SUPPORTED_10EN_11EN_STEAM void SetNewPlayerWeaponMode(short mode, short minZoom, short maxZoom);
    SUPPORTED_10EN_11EN_STEAM void SetParametersForScriptInterpolation(float stopMoving, float catchUp, unsigned int time);
    SUPPORTED_10EN_11EN_STEAM void SetPercentAlongCutScene(float percent);
    SUPPORTED_10EN_11EN_STEAM void SetRwCamera(RwCamera *rwCamera);
    SUPPORTED_10EN_11EN_STEAM void SetWideScreenOff();
    SUPPORTED_10EN_11EN_STEAM void SetWideScreenOn();
    SUPPORTED_10EN_11EN_STEAM void SetZoomValueCamStringScript(short dist);
    SUPPORTED_10EN_11EN_STEAM void SetZoomValueFollowPedScript(short dist);
    SUPPORTED_10EN_11EN_STEAM void StartTransition(short newMode);
    SUPPORTED_10EN_11EN_STEAM void StartTransitionWhenNotFinishedInter(short mode);
    SUPPORTED_10EN_11EN_STEAM void StoreValuesDuringInterPol(CVector &source, CVector &target, CVector &up, float *fov);
    SUPPORTED_10EN_11EN_STEAM void TakeControl(CEntity *target, short mode, short typeOfSwitch, int controller);
    SUPPORTED_10EN_11EN_STEAM void TakeControlNoEntity(CVector const &pos, short typeOfSwitch, int controller);
    SUPPORTED_10EN_11EN_STEAM void TakeControlWithSpline(short typeOfSwitch);
    SUPPORTED_10EN_11EN_STEAM bool TryToStartNewCamMode(int obbeMode);
    SUPPORTED_10EN_11EN_STEAM void UpdateAimingCoors(CVector const &coors);
    SUPPORTED_10EN_11EN_STEAM void UpdateSoundDistances();
    SUPPORTED_10EN_11EN_STEAM void UpdateTargetEntity();
};

SUPPORTED_10EN_11EN_STEAM extern int(&SequenceOfCams)[15]; // int SequenceOfCams[15]
SUPPORTED_10EN_11EN_STEAM extern int(&SequenceOfPedCams)[5]; // int SequenceOfPedCams[5]
SUPPORTED_10EN_11EN_STEAM extern CCamera &TheCamera;
SUPPORTED_10EN_11EN_STEAM extern bool &bDidWeProcessAnyCinemaCam;

SUPPORTED_10EN_11EN_STEAM void CamShakeNoPos(CCamera *camera, float strength);

VALIDATE_SIZE(CQueuedMode, 0xC);
VTABLE_DESC(CCamera, 0x5F0EB8, 1);
VALIDATE_SIZE(CCamera, 0xE9D8);

#include "meta/meta.CCamera.h"
