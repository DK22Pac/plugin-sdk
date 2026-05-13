/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPlaceable.h"
#include "CCam.h"
#include "CQueuedMode.h"
#include "CVector.h"
#include "RenderWare.h"
#include "CCamPathSplines.h"
#include "CMatrix.h"
#include "CVehicle.h"
#include "CRect.h"
#include "CPed.h"

class CGarage;

enum eSwitchType : unsigned short
{
    SWITCHTYPE_NONE,
    SWITCHTYPE_INTERPOLATION,
    SWITCHTYPE_JUMPCUT
};

class PLUGIN_API CCamera : public CPlaceable {
    //PLUGIN_NO_DEFAULT_CONSTRUCTION(CCamera)
public:
    bool m_bAboveGroundTrainNodesLoaded;
    bool m_bBelowGroundTrainNodesLoaded;
    bool m_bCamDirectlyBehind;
    bool m_bCamDirectlyInFront;
    bool m_bCameraJustRestored;
    bool m_bcutsceneFinished;
    bool m_bCullZoneChecksOn;
    bool m_bFirstPersonBeingUsed;
    bool m_bJustJumpedOutOf1stPersonBecauseOfTarget;
    bool m_bIdleOn;
    bool m_bInATunnelAndABigVehicle;
    bool m_bInitialNodeFound;
    bool m_bInitialNoNodeStaticsSet;
    bool m_bIgnoreFadingStuffForMusic;
    bool m_bPlayerIsInGarage;
    bool m_bPlayerWasOnBike;
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
    bool m_bVehicleSuspenHigh;
    bool m_bEnable1rstPersonCamCntrlsScript;
    bool m_bAllow1rstPersonWeaponsCamera;
    bool m_bCooperativeCamMode;
    bool m_bAllowShootingWith2PlayersInCar;
    bool m_bDisableFirstPersonInCar;
    unsigned short m_nModeForTwoPlayersSeparateCars;
    unsigned short m_nModeForTwoPlayersSameCarShootingAllowed;
    unsigned short m_nModeForTwoPlayersSameCarShootingNotAllowed;
    unsigned short m_nModeForTwoPlayersNotBothInCar;
    bool m_bGarageFixedCamPositionSet;
    bool m_bDoingSpecialInterPolation;
    bool m_bScriptParametersSetForInterPol;
    bool m_bFading;
    bool m_bMusicFading;
    bool m_bMusicFadedOut;
    bool m_bFailedCullZoneTestPreviously;
    bool m_bFadeTargetIsSplashScreen;
    bool m_bWorldViewerBeingUsed;
    bool m_bTransitionJUSTStarted;
    bool m_bTransitionState;
    unsigned char m_nActiveCam;
private:
    char _pad5A[2];
public:
    unsigned int m_nCamShakeStart;
    unsigned int m_nFirstPersonCamLastInputTime;
    unsigned int m_nLongestTimeInMill;
    unsigned int m_nNumberOfTrainCamNodes;
    unsigned int m_nTimeLastChange;
    unsigned int m_nTimeWeLeftIdle_StillNoInput;
    unsigned int m_nTimeWeEnteredIdle;
    unsigned int m_nTimeTransitionStart;
    unsigned int m_nTransitionDuration;
    unsigned int m_nTransitionDurationTargetCoors;
    unsigned int m_nBlurBlue;
    unsigned int m_nBlurGreen;
    unsigned int m_nBlurRed;
    unsigned int m_nBlurType;
    unsigned int m_nWorkOutSpeedThisNumFrames;
    unsigned int m_nNumFramesSoFar;
    unsigned int m_nCurrentTrainCamNode;
    unsigned int m_nMotionBlur;
    unsigned int m_nMotionBlurAddAlpha;
    unsigned int m_nCheckCullZoneThisNumFrames;
    unsigned int m_nZoneCullFrameNumWereAt;
    unsigned int m_nWhoIsInControlOfTheCamera;
    unsigned int m_nCarZoom;
    float m_fCarZoomBase;
    float m_fCarZoomTotal;
    float m_fCarZoomSmoothed;
    float m_fCarZoomValueScript;
    unsigned int m_nPedZoom;
    float m_fPedZoomBase;
    float m_fPedZoomTotal;
    float m_fPedZoomSmoothed;
    float m_fPedZoomValueScript;
    float m_fCamFrontXNorm;
    float m_fCamFrontYNorm;
    float m_fDistanceToWater;
    float m_fHeightOfNearestWater;
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
    float m_fFovForTrain;
    float m_fFOV_Wide_Screen;
    float m_fNearClipScript;
    float m_fOldBetaDiff;
    float m_fPositionAlongSpline;
    float m_fScreenReductionPercentage;
    float m_fScreenReductionSpeed;
    float m_fAlphaForPlayerAnim1rstPerson;
    float m_fOrientation;
    float m_fPlayerExhaustion;
    float m_fSoundDistUp;
    float m_fSoundDistUpAsRead;
    float m_fSoundDistUpAsReadOld;
    float m_fAvoidTheGeometryProbsTimer;
    unsigned short m_nAvoidTheGeometryProbsDirn;
private:
    char _pad16A[2];
public:
    float m_fWideScreenReductionAmount;
    float m_fStartingFOVForInterPol;
    CCam m_aCams[3];
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
    CVector m_vecSourceDuringInter;
    CVector m_vecTargetDuringInter;
    CVector m_vecUpDuringInter;
    CVector m_vecAttachedCamOffset;
    CVector m_vecAttachedCamLookAt;
    float m_fAttachedCamAngle;
    RwCamera *m_pRwCamera;
    CEntity *m_pTargetEntity;
    CEntity *m_pAttachedEntity;
    CCamPathSplines m_aPathArray[4];
    bool m_bMirrorActive;
    bool m_bResetOldMatrix;
private:
    char _pad972[2];
public:
    CMatrix m_mCameraMatrix;
    CMatrix m_mCameraMatrixOld;
    CMatrix m_mViewMatrix;
    CMatrix m_mMatInverse;
    CMatrix m_mMatMirrorInverse;
    CMatrix m_mMatMirror;
    CVector m_avecFrustumNormals[4];
    CVector m_avecFrustumWorldNormals[4];
    CVector m_avecFrustumWorldNormals_Mirror[4];
    float m_fFrustumPlaneOffsets[4];
    float m_fFrustumPlaneOffsets_Mirror[4];
    CVector m_vecRightFrustumNormal; //!< unused?
    CVector m_vecBottomFrustumNormal; //!< unused?
    CVector m_vecTopFrustumNormal; //!< unused?
    float field_BF8; //!< unused?
    float m_fFadeAlpha;
    float m_fEffectsFaderScalingFactor;
    float m_fFadeDuration;
    float m_fTimeToFadeMusic;
    float m_fTimeToWaitToFadeMusic;
    float m_fFractionInterToStopMoving;
    float m_fFractionInterToStopCatchUp;
    float m_fFractionInterToStopMovingTarget;
    float m_fFractionInterToStopCatchUpTarget;
    float m_fGaitSwayBuffer;
    float m_fScriptPercentageInterToStopMoving;
    float m_fScriptPercentageInterToCatchUp;
    unsigned int m_nScriptTimeForInterPolation;
    unsigned short m_nFadeInOutFlag;
private:
    char _padC32[2];
public:
    int m_nModeObbeCamIsInForCar;
    short m_nModeToGoTo;    // see eCamMode
    short m_nMusicFadingDirection;
    short m_nTypeOfSwitch; // see eSwitchType
private:
    char _padC3E[2];
public:
    unsigned int m_nFadeStartTime;
    unsigned int m_nFadeTimeStartedMusic;
    int m_nExtraEntitiesCount;
    CEntity *m_pExtraEntity[2];
    float m_fDuckCamMotionFactor;
    float m_fDuckAimCamMotionFactor;
    float m_fTrackLinearStartTime;
    float m_fTrackLinearEndTime;
    CVector m_vecTrackLinearEndPoint;
    CVector m_vecTrackLinearStartPoint;
    bool m_bTrackLinearWithEase;
    char field_C7D;
    char field_C7E;
    char field_C7F;
    CVector m_vecTrackLinear;
    bool m_bVecTrackLinearProcessed;
    char field_C8D;
    char field_C8E;
    char field_C8F;
    float m_fShakeIntensity;
    float m_fStartShakeTime;
    float m_fEndShakeTime;
    int field_C9C;
    int m_nShakeType;
    float m_fStartZoomTime;
    float m_fEndZoomTime;
    float m_fZoomInFactor;
    float m_fZoomOutFactor;
    unsigned char m_nZoomMode;
    bool m_bFOVLerpProcessed;
    char field_CB6;
    char field_CB7;
    float m_fFOVNew;
    float m_fMoveLinearStartTime;
    float m_fMoveLinearEndTime;
    CVector m_vecMoveLinearPosnStart;
    CVector m_vecMoveLinearPosnEnd;
    bool m_bMoveLinearWithEase;
    char field_CDD;
    char field_CDE;
    char field_CDF;
    CVector m_vecMoveLinear;
    bool m_bVecMoveLinearProcessed;
    bool m_bBlockZoom;
    bool m_bCameraPersistPosition;
    bool m_bCameraPersistTrack;
    bool m_bCinemaCamera;
    char field_CF1;
    char field_CF2;
    char field_CF3;

    struct {
        int m_nModelIndex;
        float m_fDistance;
        float m_fAltitude;
        float m_fAngle;
    } m_aCamTweak[5];

    bool m_bCameraVehicleTweaksInitialized;
private:
    char _padD45[3];
public:
    float m_fCurrentTweakDistance;
    float m_fCurrentTweakAltitude;
    float m_fCurrentTweakAngle;
    int m_nCurrentTweakModelIndex;
    // the following are unused?
    int field_D58;
    int field_D5C;
    int field_D60;
    int field_D64;
    int field_D68;
    int field_D6C;
    int field_D70;
    int field_D74;

    SUPPORTED_10US static float &m_f3rdPersonCHairMultY;
    SUPPORTED_10US static float &m_f3rdPersonCHairMultX;
    SUPPORTED_10US static float &m_fMouseAccelVertical;
    SUPPORTED_10US static float &m_fMouseAccelHorzntal;
    SUPPORTED_10US static bool &m_bUseMouse3rdPerson;
    /* virtual functions */

    // vtable function #0 (destructor)

    /* virtual functions - end */

    SUPPORTED_10US void AddShakeSimple(float duration, int type, float intensity);
    SUPPORTED_10US void AllowShootingWith2PlayersInCar(bool bAllowShootingWith2PlayersInCar);
    SUPPORTED_10US void ApplyVehicleCameraTweaks(CVehicle *vehicle);
    SUPPORTED_10US void AvoidTheGeometry(CVector const *arg2, CVector const *arg3, CVector *arg4, float FOV);
    SUPPORTED_10US void CalculateDerivedValues(bool bForMirror, bool bOriented);
    SUPPORTED_10US void CalculateFrustumPlanes(bool bForMirror);
    SUPPORTED_10US float CalculateGroundHeight(unsigned int type);
    SUPPORTED_10US void CalculateMirroredMatrix(CVector posn, float MirrorV, CMatrix *CamMat, CMatrix *MirrorMat);
    SUPPORTED_10US void CamControl();
    SUPPORTED_10US void CamShake(float arg2, float x, float y, float z);
    SUPPORTED_10US char CameraColDetAndReact(CVector *source, CVector *target);
    SUPPORTED_10US void CameraGenericModeSpecialCases(CPed *targetPed);
    SUPPORTED_10US void CameraPedAimModeSpecialCases(CPed *targPed);
    //! unused
    SUPPORTED_10US void CameraPedModeSpecialCases();
    SUPPORTED_10US void CameraVehicleModeSpecialCases(CVehicle *targVehicle);
    SUPPORTED_10US void ClearPlayerWeaponMode();
    SUPPORTED_10US bool ConeCastCollisionResolve(CVector *source, CVector *center, CVector *pVecOut, float radius, float arg5, float *pFloatOut);
    //! unused
    SUPPORTED_10US bool ConsiderPedAsDucking(CPed *ped);
    SUPPORTED_10US void CopyCameraMatrixToRWCam(bool bUpdateMatrix);
    SUPPORTED_10US void DealWithMirrorBeforeConstructRenderList(bool bActiveMirror, CVector MirrorNormal, float MirrorV, CMatrix *matMirror);
    SUPPORTED_10US void DeleteCutSceneCamDataMemory();
    SUPPORTED_10US void DrawBordersForWideScreen();
    //! unused
    SUPPORTED_10US void Enable1rstPersonCamCntrlsScript();
    //! unused
    SUPPORTED_10US void Enable1rstPersonWeaponsCamera();
    SUPPORTED_10US void Fade(float fadeDuration, short FadeInOutFlag);
    SUPPORTED_10US void Find3rdPersonCamTargetVector(float range, CVector source, CVector *pCamera, CVector *pPoint);
    SUPPORTED_10US float Find3rdPersonQuickAimPitch();
    SUPPORTED_10US float FindCamFOV();
    SUPPORTED_10US void FinishCutscene();
    SUPPORTED_10US void GetArrPosForVehicleType(int type, int *arrPos);
    SUPPORTED_10US unsigned int GetCutSceneFinishTime();
    SUPPORTED_10US bool GetFading();
    SUPPORTED_10US int GetFadingDirection();
    SUPPORTED_10US CVector *GetGameCamPosition();
    SUPPORTED_10US signed int GetLookDirection();
    SUPPORTED_10US bool GetLookingForwardFirstPerson();
    SUPPORTED_10US bool GetLookingLRBFirstPerson();
    SUPPORTED_10US float GetPositionAlongSpline();
    SUPPORTED_10US float GetRoughDistanceToGround();
    SUPPORTED_10US signed int GetScreenFadeStatus();
    SUPPORTED_10US void GetScreenRect(CRect *pRect);
    SUPPORTED_10US bool Get_Just_Switched_Status();
    //! arg5 always used as false
    SUPPORTED_10US void HandleCameraMotionForDucking(CPed *ped, CVector *source, CVector *targPosn, bool arg5);
    //! arg5 always used as false
    SUPPORTED_10US void HandleCameraMotionForDuckingDuringAim(CPed *ped, CVector *source, CVector *targPosn, bool arg5);
    SUPPORTED_10US void ImproveNearClip(CVehicle *pVehicle, CPed *pPed, CVector *source, CVector *targPosn);
    SUPPORTED_10US void Init();
    SUPPORTED_10US void InitCameraVehicleTweaks();
    SUPPORTED_10US int InitialiseScriptableComponents();
    SUPPORTED_10US bool IsExtraEntityToIgnore(CEntity *entity);
    SUPPORTED_10US bool IsItTimeForNewcam(int CamSequence, int StartTime);
    SUPPORTED_10US bool IsSphereVisible(CVector const &origin, float radius, RwMatrixTag *transformMatrix);
    SUPPORTED_10US bool IsSphereVisible(CVector const &origin, float radius);
    SUPPORTED_10US void LerpFOV(float zoomInFactor, float zoomOutFactor, float timelimit, bool bEase);
    SUPPORTED_10US void LoadPathSplines(int pFile);
    SUPPORTED_10US void Process();
    SUPPORTED_10US void ProcessFOVLerp(float ratio);
    SUPPORTED_10US void ProcessFOVLerp();
    SUPPORTED_10US void ProcessFade();
    SUPPORTED_10US void ProcessMusicFade();
    SUPPORTED_10US void ProcessObbeCinemaCameraBoat();
    SUPPORTED_10US void ProcessObbeCinemaCameraCar();
    SUPPORTED_10US void ProcessObbeCinemaCameraHeli();
    //! unused, empty
    SUPPORTED_10US unsigned int ProcessObbeCinemaCameraPed();
    SUPPORTED_10US void ProcessObbeCinemaCameraPlane();
    SUPPORTED_10US void ProcessObbeCinemaCameraTrain();
    //! unused
    SUPPORTED_10US void ProcessScriptedCommands();
    //! JiggleIntensity not used
    SUPPORTED_10US void ProcessShake(float JiggleIntensity);
    SUPPORTED_10US void ProcessShake();
    SUPPORTED_10US void ProcessVectorMoveLinear(float ratio);
    SUPPORTED_10US void ProcessVectorMoveLinear();
    SUPPORTED_10US void ProcessVectorTrackLinear(float ratio);
    SUPPORTED_10US void ProcessVectorTrackLinear();
    SUPPORTED_10US void ProcessWideScreenOn();
    SUPPORTED_10US void RenderMotionBlur();
    SUPPORTED_10US void ResetDuckingSystem(CPed *ped);
    SUPPORTED_10US void Restore();
    SUPPORTED_10US void RestoreCameraAfterMirror();
    SUPPORTED_10US void RestoreWithJumpCut();
    SUPPORTED_10US void SetCamCutSceneOffSet(CVector const *cutsceneOffset);
    SUPPORTED_10US void SetCamPositionForFixedMode(CVector const *fixedModeSource, CVector const *fixedModeUpOffset);
    SUPPORTED_10US void SetCameraDirectlyBehindForFollowPed_CamOnAString();
    //! unused
    SUPPORTED_10US void SetCameraDirectlyBehindForFollowPed_ForAPed_CamOnAString(CPed *targetPed);
    SUPPORTED_10US void SetCameraUpForMirror();
    SUPPORTED_10US void SetFadeColour(unsigned char Red, unsigned char Green, unsigned char Blue);
    SUPPORTED_10US void SetMotionBlur(int Red, int Green, int Blue, int value, int Blurtype);
    SUPPORTED_10US void SetMotionBlurAlpha(int Alpha);
    //! unused
    SUPPORTED_10US void SetNearClipBasedOnPedCollision(float arg2);
    SUPPORTED_10US void SetNearClipScript(float NearClip);
    SUPPORTED_10US void SetNewPlayerWeaponMode(short mode, short maxZoom, short minZoom);
    SUPPORTED_10US void SetParametersForScriptInterpolation(float InterpolationToStopMoving, float InterpolationToCatchUp, unsigned int TimeForInterPolation);
    SUPPORTED_10US void SetPercentAlongCutScene(float percent);
    SUPPORTED_10US void SetRwCamera(RwCamera *rwcamera);
    SUPPORTED_10US void SetWideScreenOff();
    SUPPORTED_10US void SetWideScreenOn();
    //! zoomMode : 0- ZOOM_ONE , 1- ZOOM_TWO , 2- ZOOM_THREE
    SUPPORTED_10US void SetZoomValueCamStringScript(short zoomMode);
    //! zoomMode : value between 0 - 2
    SUPPORTED_10US void SetZoomValueFollowPedScript(short zoomMode);
    SUPPORTED_10US void StartCooperativeCamMode();
    //! currentCamMode : see eCamMode
    SUPPORTED_10US void StartTransition(short currentCamMode);
    //! unused , see eCamMode
    SUPPORTED_10US void StartTransitionWhenNotFinishedInter(short currentCamMode);
    //! unused
    SUPPORTED_10US void StopCooperativeCamMode();
    SUPPORTED_10US void StoreValuesDuringInterPol(CVector *SourceDuringInter, CVector *TargetDuringInter, CVector *UpDuringInter, float *FOVDuringInter);
    //! TypeOfSwitch : see eSwitchType
    //! ModeToGoTo : see eCamMode
    SUPPORTED_10US void TakeControl(CEntity *target, short ModeToGoTo, short TypeOfSwitch, int WhoIsInControlOfTheCamera);
    //! TypeOfSwitch : see eSwitchType
    SUPPORTED_10US void TakeControlAttachToEntity(CEntity *target, CEntity *attached, CVector *AttachedCamOffset, CVector *AttachedCamLookAt, float AttachedCamAngle, short TypeOfSwitch, int WhoIsInControlOfTheCamera);
    //! TypeOfSwitch : see eSwitchType
    SUPPORTED_10US void TakeControlNoEntity(CVector const *FixedModeVector, short TypeOfSwitch, int WhoIsInControlOfTheCamera);
    //! TypeOfSwitch : see eSwitchType
    SUPPORTED_10US void TakeControlWithSpline(short TypeOfSwitch);
    SUPPORTED_10US bool TryToStartNewCamMode(int CamSequence);
    SUPPORTED_10US void UpdateAimingCoors(CVector const *AimingTargetCoors);
    SUPPORTED_10US void UpdateSoundDistances();
    SUPPORTED_10US void UpdateTargetEntity();
    SUPPORTED_10US bool Using1stPersonWeaponMode();
    SUPPORTED_10US void VectorMoveLinear(CVector *MoveLinearPosnEnd, CVector *MoveLinearPosnStart, float duration, bool bMoveLinearWithEase);
    SUPPORTED_10US bool VectorMoveRunning();
    SUPPORTED_10US void VectorTrackLinear(CVector *TrackLinearStartPoint, CVector *TrackLinearEndPoint, float duration, bool bEase);
    SUPPORTED_10US bool VectorTrackRunning();

    //! unused
    SUPPORTED_10US static void DontProcessObbeCinemaCamera();
    SUPPORTED_10US static void SetCamCollisionVarDataSet(int index);
    SUPPORTED_10US static void SetColVarsAimWeapon(int aimingType);
    SUPPORTED_10US static void SetColVarsPed(int pedtype, int nCamPedZoom);
    SUPPORTED_10US static void SetColVarsVehicle(int vehicletype, int CamVehicleZoom);
};
VALIDATE_OFFSET(CCamera, m_bAboveGroundTrainNodesLoaded, 0x18);
VALIDATE_OFFSET(CCamera, m_bBelowGroundTrainNodesLoaded, 0x19);
VALIDATE_OFFSET(CCamera, m_bCamDirectlyBehind, 0x1A);
VALIDATE_OFFSET(CCamera, m_bCamDirectlyInFront, 0x1B);
VALIDATE_OFFSET(CCamera, m_bCameraJustRestored, 0x1C);
VALIDATE_OFFSET(CCamera, m_bcutsceneFinished, 0x1D);
VALIDATE_OFFSET(CCamera, m_bCullZoneChecksOn, 0x1E);
VALIDATE_OFFSET(CCamera, m_bFirstPersonBeingUsed, 0x1F);
VALIDATE_OFFSET(CCamera, m_bJustJumpedOutOf1stPersonBecauseOfTarget, 0x20);
VALIDATE_OFFSET(CCamera, m_bIdleOn, 0x21);
VALIDATE_OFFSET(CCamera, m_bInATunnelAndABigVehicle, 0x22);
VALIDATE_OFFSET(CCamera, m_bInitialNodeFound, 0x23);
VALIDATE_OFFSET(CCamera, m_bInitialNoNodeStaticsSet, 0x24);
VALIDATE_OFFSET(CCamera, m_bIgnoreFadingStuffForMusic, 0x25);
VALIDATE_OFFSET(CCamera, m_bPlayerIsInGarage, 0x26);
VALIDATE_OFFSET(CCamera, m_bPlayerWasOnBike, 0x27);
VALIDATE_OFFSET(CCamera, m_bJustCameOutOfGarage, 0x28);
VALIDATE_OFFSET(CCamera, m_bJustInitalised, 0x29);
VALIDATE_OFFSET(CCamera, m_bJust_Switched, 0x2A);
VALIDATE_OFFSET(CCamera, m_bLookingAtPlayer, 0x2B);
VALIDATE_OFFSET(CCamera, m_bLookingAtVector, 0x2C);
VALIDATE_OFFSET(CCamera, m_bMoveCamToAvoidGeom, 0x2D);
VALIDATE_OFFSET(CCamera, m_bObbeCinematicPedCamOn, 0x2E);
VALIDATE_OFFSET(CCamera, m_bObbeCinematicCarCamOn, 0x2F);
VALIDATE_OFFSET(CCamera, m_bRestoreByJumpCut, 0x30);
VALIDATE_OFFSET(CCamera, m_bUseNearClipScript, 0x31);
VALIDATE_OFFSET(CCamera, m_bStartInterScript, 0x32);
VALIDATE_OFFSET(CCamera, m_bStartingSpline, 0x33);
VALIDATE_OFFSET(CCamera, m_bTargetJustBeenOnTrain, 0x34);
VALIDATE_OFFSET(CCamera, m_bTargetJustCameOffTrain, 0x35);
VALIDATE_OFFSET(CCamera, m_bUseSpecialFovTrain, 0x36);
VALIDATE_OFFSET(CCamera, m_bUseTransitionBeta, 0x37);
VALIDATE_OFFSET(CCamera, m_bUseScriptZoomValuePed, 0x38);
VALIDATE_OFFSET(CCamera, m_bUseScriptZoomValueCar, 0x39);
VALIDATE_OFFSET(CCamera, m_bWaitForInterpolToFinish, 0x3A);
VALIDATE_OFFSET(CCamera, m_bItsOkToLookJustAtThePlayer, 0x3B);
VALIDATE_OFFSET(CCamera, m_bWantsToSwitchWidescreenOff, 0x3C);
VALIDATE_OFFSET(CCamera, m_bWideScreenOn, 0x3D);
VALIDATE_OFFSET(CCamera, m_b1rstPersonRunCloseToAWall, 0x3E);
VALIDATE_OFFSET(CCamera, m_bHeadBob, 0x3F);
VALIDATE_OFFSET(CCamera, m_bVehicleSuspenHigh, 0x40);
VALIDATE_OFFSET(CCamera, m_bEnable1rstPersonCamCntrlsScript, 0x41);
VALIDATE_OFFSET(CCamera, m_bAllow1rstPersonWeaponsCamera, 0x42);
VALIDATE_OFFSET(CCamera, m_bCooperativeCamMode, 0x43);
VALIDATE_OFFSET(CCamera, m_bAllowShootingWith2PlayersInCar, 0x44);
VALIDATE_OFFSET(CCamera, m_bDisableFirstPersonInCar, 0x45);
VALIDATE_OFFSET(CCamera, m_nModeForTwoPlayersSeparateCars, 0x46);
VALIDATE_OFFSET(CCamera, m_nModeForTwoPlayersSameCarShootingAllowed, 0x48);
VALIDATE_OFFSET(CCamera, m_nModeForTwoPlayersSameCarShootingNotAllowed, 0x4A);
VALIDATE_OFFSET(CCamera, m_nModeForTwoPlayersNotBothInCar, 0x4C);
VALIDATE_OFFSET(CCamera, m_bGarageFixedCamPositionSet, 0x4E);
VALIDATE_OFFSET(CCamera, m_bDoingSpecialInterPolation, 0x4F);
VALIDATE_OFFSET(CCamera, m_bScriptParametersSetForInterPol, 0x50);
VALIDATE_OFFSET(CCamera, m_bFading, 0x51);
VALIDATE_OFFSET(CCamera, m_bMusicFading, 0x52);
VALIDATE_OFFSET(CCamera, m_bMusicFadedOut, 0x53);
VALIDATE_OFFSET(CCamera, m_bFailedCullZoneTestPreviously, 0x54);
VALIDATE_OFFSET(CCamera, m_bFadeTargetIsSplashScreen, 0x55);
VALIDATE_OFFSET(CCamera, m_bWorldViewerBeingUsed, 0x56);
VALIDATE_OFFSET(CCamera, m_bTransitionJUSTStarted, 0x57);
VALIDATE_OFFSET(CCamera, m_bTransitionState, 0x58);
VALIDATE_OFFSET(CCamera, m_nActiveCam, 0x59);
VALIDATE_OFFSET(CCamera, m_nCamShakeStart, 0x5C);
VALIDATE_OFFSET(CCamera, m_nFirstPersonCamLastInputTime, 0x60);
VALIDATE_OFFSET(CCamera, m_nLongestTimeInMill, 0x64);
VALIDATE_OFFSET(CCamera, m_nNumberOfTrainCamNodes, 0x68);
VALIDATE_OFFSET(CCamera, m_nTimeLastChange, 0x6C);
VALIDATE_OFFSET(CCamera, m_nTimeWeLeftIdle_StillNoInput, 0x70);
VALIDATE_OFFSET(CCamera, m_nTimeWeEnteredIdle, 0x74);
VALIDATE_OFFSET(CCamera, m_nTimeTransitionStart, 0x78);
VALIDATE_OFFSET(CCamera, m_nTransitionDuration, 0x7C);
VALIDATE_OFFSET(CCamera, m_nTransitionDurationTargetCoors, 0x80);
VALIDATE_OFFSET(CCamera, m_nBlurBlue, 0x84);
VALIDATE_OFFSET(CCamera, m_nBlurGreen, 0x88);
VALIDATE_OFFSET(CCamera, m_nBlurRed, 0x8C);
VALIDATE_OFFSET(CCamera, m_nBlurType, 0x90);
VALIDATE_OFFSET(CCamera, m_nWorkOutSpeedThisNumFrames, 0x94);
VALIDATE_OFFSET(CCamera, m_nNumFramesSoFar, 0x98);
VALIDATE_OFFSET(CCamera, m_nCurrentTrainCamNode, 0x9C);
VALIDATE_OFFSET(CCamera, m_nMotionBlur, 0xA0);
VALIDATE_OFFSET(CCamera, m_nMotionBlurAddAlpha, 0xA4);
VALIDATE_OFFSET(CCamera, m_nCheckCullZoneThisNumFrames, 0xA8);
VALIDATE_OFFSET(CCamera, m_nZoneCullFrameNumWereAt, 0xAC);
VALIDATE_OFFSET(CCamera, m_nWhoIsInControlOfTheCamera, 0xB0);
VALIDATE_OFFSET(CCamera, m_nCarZoom, 0xB4);
VALIDATE_OFFSET(CCamera, m_fCarZoomBase, 0xB8);
VALIDATE_OFFSET(CCamera, m_fCarZoomTotal, 0xBC);
VALIDATE_OFFSET(CCamera, m_fCarZoomSmoothed, 0xC0);
VALIDATE_OFFSET(CCamera, m_fCarZoomValueScript, 0xC4);
VALIDATE_OFFSET(CCamera, m_nPedZoom, 0xC8);
VALIDATE_OFFSET(CCamera, m_fPedZoomBase, 0xCC);
VALIDATE_OFFSET(CCamera, m_fPedZoomTotal, 0xD0);
VALIDATE_OFFSET(CCamera, m_fPedZoomSmoothed, 0xD4);
VALIDATE_OFFSET(CCamera, m_fPedZoomValueScript, 0xD8);
VALIDATE_OFFSET(CCamera, m_fCamFrontXNorm, 0xDC);
VALIDATE_OFFSET(CCamera, m_fCamFrontYNorm, 0xE0);
VALIDATE_OFFSET(CCamera, m_fDistanceToWater, 0xE4);
VALIDATE_OFFSET(CCamera, m_fHeightOfNearestWater, 0xE8);
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
VALIDATE_OFFSET(CCamera, m_fPedOrientForBehindOrInFront, 0x120);
VALIDATE_OFFSET(CCamera, m_fCameraAverageSpeed, 0x124);
VALIDATE_OFFSET(CCamera, m_fCameraSpeedSoFar, 0x128);
VALIDATE_OFFSET(CCamera, m_fCamShakeForce, 0x12C);
VALIDATE_OFFSET(CCamera, m_fFovForTrain, 0x130);
VALIDATE_OFFSET(CCamera, m_fFOV_Wide_Screen, 0x134);
VALIDATE_OFFSET(CCamera, m_fNearClipScript, 0x138);
VALIDATE_OFFSET(CCamera, m_fOldBetaDiff, 0x13C);
VALIDATE_OFFSET(CCamera, m_fPositionAlongSpline, 0x140);
VALIDATE_OFFSET(CCamera, m_fScreenReductionPercentage, 0x144);
VALIDATE_OFFSET(CCamera, m_fScreenReductionSpeed, 0x148);
VALIDATE_OFFSET(CCamera, m_fAlphaForPlayerAnim1rstPerson, 0x14C);
VALIDATE_OFFSET(CCamera, m_fOrientation, 0x150);
VALIDATE_OFFSET(CCamera, m_fPlayerExhaustion, 0x154);
VALIDATE_OFFSET(CCamera, m_fSoundDistUp, 0x158);
VALIDATE_OFFSET(CCamera, m_fSoundDistUpAsRead, 0x15C);
VALIDATE_OFFSET(CCamera, m_fSoundDistUpAsReadOld, 0x160);
VALIDATE_OFFSET(CCamera, m_fAvoidTheGeometryProbsTimer, 0x164);
VALIDATE_OFFSET(CCamera, m_nAvoidTheGeometryProbsDirn, 0x168);
VALIDATE_OFFSET(CCamera, m_fWideScreenReductionAmount, 0x16C);
VALIDATE_OFFSET(CCamera, m_fStartingFOVForInterPol, 0x170);
VALIDATE_OFFSET(CCamera, m_aCams, 0x174);
VALIDATE_OFFSET(CCamera, m_pToGarageWeAreIn, 0x81C);
VALIDATE_OFFSET(CCamera, m_pToGarageWeAreInForHackAvoidFirstPerson, 0x820);
VALIDATE_OFFSET(CCamera, m_PlayerMode, 0x824);
VALIDATE_OFFSET(CCamera, m_PlayerWeaponMode, 0x830);
VALIDATE_OFFSET(CCamera, m_vecPreviousCameraPosition, 0x83C);
VALIDATE_OFFSET(CCamera, m_vecRealPreviousCameraPosition, 0x848);
VALIDATE_OFFSET(CCamera, m_vecAimingTargetCoors, 0x854);
VALIDATE_OFFSET(CCamera, m_vecFixedModeVector, 0x860);
VALIDATE_OFFSET(CCamera, m_vecFixedModeSource, 0x86C);
VALIDATE_OFFSET(CCamera, m_vecFixedModeUpOffSet, 0x878);
VALIDATE_OFFSET(CCamera, m_vecCutSceneOffset, 0x884);
VALIDATE_OFFSET(CCamera, m_vecStartingSourceForInterPol, 0x890);
VALIDATE_OFFSET(CCamera, m_vecStartingTargetForInterPol, 0x89C);
VALIDATE_OFFSET(CCamera, m_vecStartingUpForInterPol, 0x8A8);
VALIDATE_OFFSET(CCamera, m_vecSourceSpeedAtStartInter, 0x8B4);
VALIDATE_OFFSET(CCamera, m_vecTargetSpeedAtStartInter, 0x8C0);
VALIDATE_OFFSET(CCamera, m_vecUpSpeedAtStartInter, 0x8CC);
VALIDATE_OFFSET(CCamera, m_vecSourceWhenInterPol, 0x8D8);
VALIDATE_OFFSET(CCamera, m_vecTargetWhenInterPol, 0x8E4);
VALIDATE_OFFSET(CCamera, m_vecUpWhenInterPol, 0x8F0);
VALIDATE_OFFSET(CCamera, m_vecClearGeometryVec, 0x8FC);
VALIDATE_OFFSET(CCamera, m_vecGameCamPos, 0x908);
VALIDATE_OFFSET(CCamera, m_vecSourceDuringInter, 0x914);
VALIDATE_OFFSET(CCamera, m_vecTargetDuringInter, 0x920);
VALIDATE_OFFSET(CCamera, m_vecUpDuringInter, 0x92C);
VALIDATE_OFFSET(CCamera, m_vecAttachedCamOffset, 0x938);
VALIDATE_OFFSET(CCamera, m_vecAttachedCamLookAt, 0x944);
VALIDATE_OFFSET(CCamera, m_fAttachedCamAngle, 0x950);
VALIDATE_OFFSET(CCamera, m_pRwCamera, 0x954);
VALIDATE_OFFSET(CCamera, m_pTargetEntity, 0x958);
VALIDATE_OFFSET(CCamera, m_pAttachedEntity, 0x95C);
VALIDATE_OFFSET(CCamera, m_aPathArray, 0x960);
VALIDATE_OFFSET(CCamera, m_bMirrorActive, 0x970);
VALIDATE_OFFSET(CCamera, m_bResetOldMatrix, 0x971);
VALIDATE_OFFSET(CCamera, m_mCameraMatrix, 0x974);
VALIDATE_OFFSET(CCamera, m_mCameraMatrixOld, 0x9BC);
VALIDATE_OFFSET(CCamera, m_mViewMatrix, 0xA04);
VALIDATE_OFFSET(CCamera, m_mMatInverse, 0xA4C);
VALIDATE_OFFSET(CCamera, m_mMatMirrorInverse, 0xA94);
VALIDATE_OFFSET(CCamera, m_mMatMirror, 0xADC);
VALIDATE_OFFSET(CCamera, m_avecFrustumNormals, 0xB24);
VALIDATE_OFFSET(CCamera, m_avecFrustumWorldNormals, 0xB54);
VALIDATE_OFFSET(CCamera, m_avecFrustumWorldNormals_Mirror, 0xB84);
VALIDATE_OFFSET(CCamera, m_fFrustumPlaneOffsets, 0xBB4);
VALIDATE_OFFSET(CCamera, m_fFrustumPlaneOffsets_Mirror, 0xBC4);
VALIDATE_OFFSET(CCamera, m_vecRightFrustumNormal, 0xBD4);
VALIDATE_OFFSET(CCamera, m_vecBottomFrustumNormal, 0xBE0);
VALIDATE_OFFSET(CCamera, m_vecTopFrustumNormal, 0xBEC);
VALIDATE_OFFSET(CCamera, field_BF8, 0xBF8);
VALIDATE_OFFSET(CCamera, m_fFadeAlpha, 0xBFC);
VALIDATE_OFFSET(CCamera, m_fEffectsFaderScalingFactor, 0xC00);
VALIDATE_OFFSET(CCamera, m_fFadeDuration, 0xC04);
VALIDATE_OFFSET(CCamera, m_fTimeToFadeMusic, 0xC08);
VALIDATE_OFFSET(CCamera, m_fTimeToWaitToFadeMusic, 0xC0C);
VALIDATE_OFFSET(CCamera, m_fFractionInterToStopMoving, 0xC10);
VALIDATE_OFFSET(CCamera, m_fFractionInterToStopCatchUp, 0xC14);
VALIDATE_OFFSET(CCamera, m_fFractionInterToStopMovingTarget, 0xC18);
VALIDATE_OFFSET(CCamera, m_fFractionInterToStopCatchUpTarget, 0xC1C);
VALIDATE_OFFSET(CCamera, m_fGaitSwayBuffer, 0xC20);
VALIDATE_OFFSET(CCamera, m_fScriptPercentageInterToStopMoving, 0xC24);
VALIDATE_OFFSET(CCamera, m_fScriptPercentageInterToCatchUp, 0xC28);
VALIDATE_OFFSET(CCamera, m_nScriptTimeForInterPolation, 0xC2C);
VALIDATE_OFFSET(CCamera, m_nFadeInOutFlag, 0xC30);
VALIDATE_OFFSET(CCamera, m_nModeObbeCamIsInForCar, 0xC34);
VALIDATE_OFFSET(CCamera, m_nModeToGoTo, 0xC38);
VALIDATE_OFFSET(CCamera, m_nMusicFadingDirection, 0xC3A);
VALIDATE_OFFSET(CCamera, m_nTypeOfSwitch, 0xC3C);
VALIDATE_OFFSET(CCamera, m_nFadeStartTime, 0xC40);
VALIDATE_OFFSET(CCamera, m_nFadeTimeStartedMusic, 0xC44);
VALIDATE_OFFSET(CCamera, m_nExtraEntitiesCount, 0xC48);
VALIDATE_OFFSET(CCamera, m_pExtraEntity, 0xC4C);
VALIDATE_OFFSET(CCamera, m_fDuckCamMotionFactor, 0xC54);
VALIDATE_OFFSET(CCamera, m_fDuckAimCamMotionFactor, 0xC58);
VALIDATE_OFFSET(CCamera, m_fTrackLinearStartTime, 0xC5C);
VALIDATE_OFFSET(CCamera, m_fTrackLinearEndTime, 0xC60);
VALIDATE_OFFSET(CCamera, m_vecTrackLinearEndPoint, 0xC64);
VALIDATE_OFFSET(CCamera, m_vecTrackLinearStartPoint, 0xC70);
VALIDATE_OFFSET(CCamera, m_bTrackLinearWithEase, 0xC7C);
VALIDATE_OFFSET(CCamera, field_C7D, 0xC7D);
VALIDATE_OFFSET(CCamera, field_C7E, 0xC7E);
VALIDATE_OFFSET(CCamera, field_C7F, 0xC7F);
VALIDATE_OFFSET(CCamera, m_vecTrackLinear, 0xC80);
VALIDATE_OFFSET(CCamera, m_bVecTrackLinearProcessed, 0xC8C);
VALIDATE_OFFSET(CCamera, field_C8D, 0xC8D);
VALIDATE_OFFSET(CCamera, field_C8E, 0xC8E);
VALIDATE_OFFSET(CCamera, field_C8F, 0xC8F);
VALIDATE_OFFSET(CCamera, m_fShakeIntensity, 0xC90);
VALIDATE_OFFSET(CCamera, m_fStartShakeTime, 0xC94);
VALIDATE_OFFSET(CCamera, m_fEndShakeTime, 0xC98);
VALIDATE_OFFSET(CCamera, field_C9C, 0xC9C);
VALIDATE_OFFSET(CCamera, m_nShakeType, 0xCA0);
VALIDATE_OFFSET(CCamera, m_fStartZoomTime, 0xCA4);
VALIDATE_OFFSET(CCamera, m_fEndZoomTime, 0xCA8);
VALIDATE_OFFSET(CCamera, m_fZoomInFactor, 0xCAC);
VALIDATE_OFFSET(CCamera, m_fZoomOutFactor, 0xCB0);
VALIDATE_OFFSET(CCamera, m_nZoomMode, 0xCB4);
VALIDATE_OFFSET(CCamera, m_bFOVLerpProcessed, 0xCB5);
VALIDATE_OFFSET(CCamera, field_CB6, 0xCB6);
VALIDATE_OFFSET(CCamera, field_CB7, 0xCB7);
VALIDATE_OFFSET(CCamera, m_fFOVNew, 0xCB8);
VALIDATE_OFFSET(CCamera, m_fMoveLinearStartTime, 0xCBC);
VALIDATE_OFFSET(CCamera, m_fMoveLinearEndTime, 0xCC0);
VALIDATE_OFFSET(CCamera, m_vecMoveLinearPosnStart, 0xCC4);
VALIDATE_OFFSET(CCamera, m_vecMoveLinearPosnEnd, 0xCD0);
VALIDATE_OFFSET(CCamera, m_bMoveLinearWithEase, 0xCDC);
VALIDATE_OFFSET(CCamera, field_CDD, 0xCDD);
VALIDATE_OFFSET(CCamera, field_CDE, 0xCDE);
VALIDATE_OFFSET(CCamera, field_CDF, 0xCDF);
VALIDATE_OFFSET(CCamera, m_vecMoveLinear, 0xCE0);
VALIDATE_OFFSET(CCamera, m_bVecMoveLinearProcessed, 0xCEC);
VALIDATE_OFFSET(CCamera, m_bBlockZoom, 0xCED);
VALIDATE_OFFSET(CCamera, m_bCameraPersistPosition, 0xCEE);
VALIDATE_OFFSET(CCamera, m_bCameraPersistTrack, 0xCEF);
VALIDATE_OFFSET(CCamera, m_bCinemaCamera, 0xCF0);
VALIDATE_OFFSET(CCamera, field_CF1, 0xCF1);
VALIDATE_OFFSET(CCamera, field_CF2, 0xCF2);
VALIDATE_OFFSET(CCamera, field_CF3, 0xCF3);
VALIDATE_OFFSET(CCamera, m_aCamTweak, 0xCF4);
VALIDATE_OFFSET(CCamera, m_bCameraVehicleTweaksInitialized, 0xD44);
VALIDATE_OFFSET(CCamera, m_fCurrentTweakDistance, 0xD48);
VALIDATE_OFFSET(CCamera, m_fCurrentTweakAltitude, 0xD4C);
VALIDATE_OFFSET(CCamera, m_fCurrentTweakAngle, 0xD50);
VALIDATE_OFFSET(CCamera, m_nCurrentTweakModelIndex, 0xD54);
VALIDATE_OFFSET(CCamera, field_D58, 0xD58);
VALIDATE_OFFSET(CCamera, field_D5C, 0xD5C);
VALIDATE_OFFSET(CCamera, field_D60, 0xD60);
VALIDATE_OFFSET(CCamera, field_D64, 0xD64);
VALIDATE_OFFSET(CCamera, field_D68, 0xD68);
VALIDATE_OFFSET(CCamera, field_D6C, 0xD6C);
VALIDATE_OFFSET(CCamera, field_D70, 0xD70);
VALIDATE_OFFSET(CCamera, field_D74, 0xD74);
VALIDATE_SIZE(CCamera, 0xD78);

VTABLE_DESC(CCamera, 0x8630E8, 1);

VALIDATE_SIZE(CCamera, 0xD78);

SUPPORTED_10US extern CCamera &TheCamera;

#include "meta/meta.CCamera.h"
