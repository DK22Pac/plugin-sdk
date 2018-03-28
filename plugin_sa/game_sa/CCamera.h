/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CPlaceable.h"
#include "CCam.h"
#include "CQueuedMode.h"
#include "CEntity.h"
#include "CCamPathSplines.h"
#include "CMatrix.h"

class CGarage;
class CEntity;

class PLUGIN_API CCamera : public CPlaceable {
public:
    bool             m_bAboveGroundTrainNodesLoaded;
    bool             m_bBelowGroundTrainNodesLoaded;
    bool             m_bCamDirectlyBehind;
    bool             m_bCamDirectlyInFront;
    bool             m_bCameraJustRestored;
    bool             m_bcutsceneFinished;
    bool             m_bCullZoneChecksOn;
    bool             m_bFirstPersonBeingUsed;
    bool             m_bJustJumpedOutOf1stPersonBecauseOfTarget;
    bool             m_bIdleOn;
    bool             m_bInATunnelAndABigVehicle;
    bool             m_bInitialNodeFound;
    bool             m_bInitialNoNodeStaticsSet;
    bool             m_bIgnoreFadingStuffForMusic;
    bool             m_bPlayerIsInGarage;
    bool             m_bPlayerWasOnBike;
    bool             m_bJustCameOutOfGarage;
    bool             m_bJustInitalised;
    bool             m_bJust_Switched;
    bool             m_bLookingAtPlayer;
    bool             m_bLookingAtVector;
    bool             m_bMoveCamToAvoidGeom;
    bool             m_bObbeCinematicPedCamOn;
    bool             m_bObbeCinematicCarCamOn;
    bool             m_bRestoreByJumpCut;
    bool             m_bUseNearClipScript;
    bool             m_bStartInterScript;
    bool             m_bStartingSpline;
    bool             m_bTargetJustBeenOnTrain;
    bool             m_bTargetJustCameOffTrain;
    bool             m_bUseSpecialFovTrain;
    bool             m_bUseTransitionBeta;
    bool             m_bUseScriptZoomValuePed;
    bool             m_bUseScriptZoomValueCar;
    bool             m_bWaitForInterpolToFinish;
    bool             m_bItsOkToLookJustAtThePlayer;
    bool             m_bWantsToSwitchWidescreenOff;
    bool             m_bWideScreenOn;
    bool             m_b1rstPersonRunCloseToAWall;
    bool             m_bHeadBob;
    bool             m_bVehicleSuspenHigh;
    bool             m_bEnable1rstPersonCamCntrlsScript;
    bool             m_bAllow1rstPersonWeaponsCamera;
    bool             m_bCooperativeCamMode;
    bool             m_bAllowShootingWith2PlayersInCar;
    bool             m_bDisableFirstPersonInCar;
    unsigned short   m_nModeForTwoPlayersSeparateCars;
    unsigned short   m_nModeForTwoPlayersSameCarShootingAllowed;
    unsigned short   m_nModeForTwoPlayersSameCarShootingNotAllowed;
    unsigned short   m_nModeForTwoPlayersNotBothInCar;
    bool             m_bGarageFixedCamPositionSet;
    bool             m_bDoingSpecialInterPolation;
    bool             m_bScriptParametersSetForInterPol;
    bool             m_bFading;
    bool             m_bMusicFading;
    bool             m_bMusicFadedOut;
    bool             m_bFailedCullZoneTestPreviously;
    bool             m_bFadeTargetIsSplashScreen;
    bool             m_bWorldViewerBeingUsed;
    bool             m_bTransitionJUSTStarted;
    bool             m_bTransitionState;
    unsigned char             m_nActiveCam; // 0 or 1
private:
    char pad0[2];
public:
    unsigned int     m_nCamShakeStart;
    unsigned int     m_nFirstPersonCamLastInputTime;
    unsigned int     m_nLongestTimeInMill;
    unsigned int     m_nNumberOfTrainCamNodes;
    unsigned int     m_nTimeLastChange;
    unsigned int     m_nTimeWeLeftIdle_StillNoInput;
    unsigned int     m_nTimeWeEnteredIdle;
    unsigned int     m_nTimeTransitionStart;
    unsigned int     m_nTransitionDuration;
    unsigned int     m_nTransitionDurationTargetCoors;
    unsigned int     m_nBlurBlue;
    unsigned int     m_nBlurGreen;
    unsigned int     m_nBlurRed;
    unsigned int     m_nBlurType;
    unsigned int     m_nWorkOutSpeedThisNumFrames;
    unsigned int     m_nNumFramesSoFar;
    unsigned int     m_nCurrentTrainCamNode;
    unsigned int     m_nMotionBlur;
    unsigned int     m_nMotionBlurAddAlpha;
    unsigned int     m_nCheckCullZoneThisNumFrames;
    unsigned int     m_nZoneCullFrameNumWereAt;
    unsigned int     m_nWhoIsInControlOfTheCamera;
    unsigned int     m_nCarZoom;
    float            m_fCarZoomBase;
    float            m_fCarZoomTotal;
    float            m_fCarZoomSmoothed;
    float            m_fCarZoomValueScript;
    float            m_fPedZoom;
    float            m_fPedZoomBase;
    float            m_fPedZoomTotal;
    float            m_fPedZoomSmoothed;
    float            m_fPedZoomValueScript;
    float            m_fCamFrontXNorm;
    float            m_fCamFrontYNorm;
    float            m_fDistanceToWater;
    float            m_fHeightOfNearestWater;
    float            m_fFOVDuringInter;
    float            m_fLODDistMultiplier;
    float            m_fGenerationDistMultiplier;
    float            m_fAlphaSpeedAtStartInter;
    float            m_fAlphaWhenInterPol;
    float            m_fAlphaDuringInterPol;
    float            m_fBetaDuringInterPol;
    float            m_fBetaSpeedAtStartInter;
    float            m_fBetaWhenInterPol;
    float            m_fFOVWhenInterPol;
    float            m_fFOVSpeedAtStartInter;
    float            m_fStartingBetaForInterPol;
    float            m_fStartingAlphaForInterPol;
    float            m_fPedOrientForBehindOrInFront;
    float            m_fCameraAverageSpeed;
    float            m_fCameraSpeedSoFar;
    float            m_fCamShakeForce;
    float            m_fFovForTrain;
    float            m_fFOV_Wide_Screen;
    float            m_fNearClipScript;
    float            m_fOldBetaDiff;
    float            m_fPositionAlongSpline;
    float            m_fScreenReductionPercentage;
    float            m_fScreenReductionSpeed;
    float            m_fAlphaForPlayerAnim1rstPerson;
    float            m_fOrientation;
    float            m_fPlayerExhaustion;
    float            m_fSoundDistUp;
    float            m_fSoundDistUpAsRead;
    float            m_fSoundDistUpAsReadOld;
    float            m_fAvoidTheGeometryProbsTimer;
    unsigned short   m_nAvoidTheGeometryProbsDirn;
private:
    char pad1[2];
public:
    float            m_fWideScreenReductionAmount;
    float            m_fStartingFOVForInterPol;
    CCam             m_aCams[3];
    CGarage         *m_pToGarageWeAreIn;
    CGarage         *m_pToGarageWeAreInForHackAvoidFirstPerson;
    CQueuedMode      m_PlayerMode;
    CQueuedMode      m_PlayerWeaponMode;
    CVector          m_vecPreviousCameraPosition;
    CVector          m_vecRealPreviousCameraPosition;
    CVector          m_vecAimingTargetCoors;
    CVector          m_vecFixedModeVector;
    CVector          m_vecFixedModeSource;
    CVector          m_vecFixedModeUpOffSet;
    CVector          m_vecCutSceneOffset;
    CVector          m_vecStartingSourceForInterPol;
    CVector          m_vecStartingTargetForInterPol;
    CVector          m_vecStartingUpForInterPol;
    CVector          m_vecSourceSpeedAtStartInter;
    CVector          m_vecTargetSpeedAtStartInter;
    CVector          m_vecUpSpeedAtStartInter;
    CVector          m_vecSourceWhenInterPol;
    CVector          m_vecTargetWhenInterPol;
    CVector          m_vecUpWhenInterPol;
    CVector          m_vecClearGeometryVec;
    CVector          m_vecGameCamPos;
    CVector          m_vecSourceDuringInter;
    CVector          m_vecTargetDuringInter;
    CVector          m_vecUpDuringInter;
    CVector          m_vecAttachedCamOffset;
    CVector          m_vecAttachedCamLookAt;
    float            m_fAttachedCamAngle;
    RwCamera        *m_pRwCamera;
    CEntity   *m_pTargetEntity;
    CEntity   *m_pAttachedEntity;
    CCamPathSplines  m_aPathArray[4];
    bool             m_bMirrorActive;
    bool             m_bResetOldMatrix;
private:
    char pad2[2];
public:
    CMatrix          m_mCameraMatrix;
    CMatrix          m_mCameraMatrixOld;
    CMatrix          m_mViewMatrix;
    CMatrix          m_mMatInverse;
    CMatrix          m_mMatMirrorInverse;
    CMatrix          m_mMatMirror;
    CVector          m_avecFrustumNormals[4];
    CVector     m_avecFrustumWorldNormals[4];
    CVector m_avecFrustumWorldNormals_Mirror[4];
    float m_fFrustumPlaneOffsets[4];
    float m_fFrustumPlaneOffsets_Mirror[4];
    CVector m_vecRightFrustumNormal;
    int field_BE0;
    int field_BE4;
    int field_BE8;
    int field_BEC;
    int field_BF0;
    int field_BF4;
    int field_BF8;
    float            m_fFadeAlpha;
    int field_C00;
    float            m_fFadeDuration;
    float m_fTimeToFadeMusic;
    float m_fTimeToWaitToFadeMusic;
    float   m_fFractionInterToStopMoving;
    float 	m_fFractionInterToStopCatchUp;
    float   m_fFractionInterToStopMovingTarget;
    float 	m_fFractionInterToStopCatchUpTarget;
    float 	m_fGaitSwayBuffer;
    float   m_fScriptPercentageInterToStopMoving;
    float   m_fScriptPercentageInterToCatchUp;
    unsigned int	m_fScriptTimeForInterPolation;
    unsigned short   m_nFadeInOutFlag; // fading direction
private:
    short _padding;
public:
    int m_nModeObbeCamIsInForCar;
    short 	m_nModeToGoTo;
    short 	m_nMusicFadingDirection;
    short 	m_nTypeOfSwitch;
private:
    short _padding1;
public:
    unsigned int     m_nFadeStartTime;
    unsigned int m_nFadeTimeStartedMusic;
    int field_C48;
    int field_C4C;
    int field_C50;
    int field_C54;
    int field_C58;
    unsigned int     m_nTransverseStartTime;
    unsigned int     m_nTransverseEndTime;
    CVector          m_vecTransverseEndPoint;
    CVector          m_vecTransverseStartPoint;
    unsigned char    m_nTransverseMode;
    char field_C7D;
    char field_C7E;
    char field_C7F;
    CVector field_C80;
    char field_C8C;
    char field_C8D;
    char field_C8E;
    char field_C8F;
    int field_C90;
    unsigned int     m_nStartJiggleTime;
    unsigned int     m_nEndJiggleTime;
    int field_C9C;
    int field_CA0;
    unsigned int     m_nStartZoomTime;
    unsigned int     m_nEndZoomTime;
    float            m_fZoomInFactor;
    float            m_fZoomOutFactor;
    unsigned char    m_nZoomMode;
    char field_CB5;
    char field_CB6;
    char field_CB7;
    int field_CB8;
    int field_CBC;
    int field_CC0;
    CVector field_CC4;
    CVector field_CD0;
    char field_CDC;
    char field_CDD;
    char field_CDE;
    char field_CDF;
    CVector field_CE0;
    char field_CEC;
    bool             m_bBlockZoom;
    char field_CEE;
    char field_CEF;
    char field_CF0;
    char field_CF1;
    char field_CF2;
    char field_CF3;
    
    // CameraVehicleTweaks
    int field_CF4;
    float field_CF8;
    float field_CFC;
    float field_D00;
    int field_D04;
    float field_D08;
    float field_D0C;
    int field_D10;
    int field_D14;
    float field_D18;
    float field_D1C;
    int field_D20;
    int field_D24;
    float field_D28;
    float field_D2C;
    int field_D30;
    int field_D34;
    float field_D38;
    float field_D3C;
    int field_D40;

    char field_D44;
private:
    char _pad3[3];
public:
    float field_D48;
    float field_D4C;
    int field_D50;
    int field_D54;
    int field_D58;
    int field_D5C;
    int field_D60;
    int field_D64;
    int field_D68;
    int field_D6C;
    int field_D70;
    int field_D74;

    static float& m_fMouseAccelVertical;
    static float& m_fMouseAccelHorzntl;
};

VALIDATE_SIZE(CCamera, 0xD78);

extern PLUGIN_API CCamera &TheCamera;
