/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPlaceable.h"
#include "CGarage.h"
#include "CCam.h"
#include "CQueuedMode.h"
#include "CPathSplines.h"
#include "CTrainCamNode.h"

class CCamera : CPlaceable {
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
    //char _pad77;
    unsigned int m_nCamShakeStart;
    unsigned int m_nFirstPersonCamLastInputTime;
    unsigned int m_nLongestTimeInMill;
    unsigned int m_nNumberOfTrainCamNodes;
    bool m_bTransitionJUSTStarted;
    unsigned char m_bTransitionState;
    //char _pad8A[2];
    unsigned int m_nTimeLastChange;
    unsigned int m_nTimeWeLeftIdle_StillNoInput;
    unsigned int m_nTimeTransitionStart;
    unsigned int m_nTransitionDuration;
    unsigned int m_nBlurBlue;
    unsigned int m_nBlurGreen;
    unsigned int m_nBlurRed;
    unsigned int m_nBlurType;
    int dwordAC;
    unsigned int m_nWorkOutSpeedThisNumFrames;
    unsigned int m_nNumFramesSoFar;
    unsigned int m_nCurrentTrainCamNode;
    unsigned int m_nMotionBlur;
    unsigned int m_nMotionBlurAlpha;
    int m_nCheckCullZoneThisNumFrames;
    int m_nZoneCullFrameNumWereAt;
    unsigned int m_nWhoIsInControlOfTheCamera;
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
    float m_fFOV_Wide_Screen;
    float m_fNearScreenScript;
    float m_fOldBetaDiff;
    float m_fPedZoomValue;
    float m_fPedZoomValueSmooth;
    float m_fPedZoomValueScript;
    float m_fPositionAlongSpline;
    float m_fScreenReductionPercentage;
    float m_fScreenReductionSpeed;
    float m_fAlphaForPlayerAnim1rstPerson;
    float m_fOrientation;
    float m_fPedZoomIndicator;
    float m_fPlayerExhaustion;
    float m_fSoundDistUp;
    float field_16C;
    float field_170;
    float m_fSoundDistUpAsRead;
    float field_178;
    float field_17C;
    float m_fSoundDistUpAsReadOld;
    float field_184;
    float field_188;
    float m_fWideScreenReductionAmount;
    float m_fStartingFOVForInterPol;
    float m_fMouseAccelHorzntal;
    float m_fMouseAccelVertical;
    float m_f3rdPersonCHairMultX;
    float m_f3rdPersonCHairMultY;
    CCam m_asCams[3];
    CGarage *m_pGaragePlayer;
    CVehicle *m_pGarageVehicle;
    CQueuedMode m_PlayerMode;
    CQueuedMode m_playerWeaponMode;
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
    CVector m_vecSourceSpeedOverOneFrame;
    CVector m_vecTargetSpeedOverOneFrame;
    CVector m_vecUpOverOneFrame;
    CVector m_vecSourceWhenInterPol;
    CVector m_vecUpWhenInterPol;
    CVector m_vecClearGeometryVec;
    CVector m_vecGameCamPos;
    CVector m_vecSourceDuringInter;
    CVector m_vecTargetDuringInter;
    CVector m_vecUpDuringInter;
    RwCamera *m_pRwCamera;
    CEntity *m_pTargetEntity;
    CPathSplines m_aPathSplines[4];
    CTrainCamNode m_asTrainCamNodes[800];
    CMatrix m_mMatInverse;
    bool m_bGarageFixedCamPositionSet;
    bool m_bDoingSpecialInterPolation;
    bool m_bScriptParametersSetForInterPol;
    bool m_bFading;
    bool m_bMusicFading;
    //char _padE8F5[3];
    CMatrix m_mViewMatrix;
    CVector m_avecFrustumNormals[4];
    CVector m_vecOldSourceForInter;
    CVector m_vecOldFrontForInter;
    CVector m_vecOldUpForInter;
    float m_fOldFOVForInter;
    float m_fFadeAlpha;
    float m_fEffectsFaderScalingFactor;
    float m_fFadeDuration;
    float m_fTimeToFadeMusic;
    float m_fFractionInterToStopMoving;
    float m_fFractionInterToStopCatchUp;
    float m_fGaitSwayBuffer;
    float m_fScriptPercentageInterToStopMoving;
    float m_fScriptPercentageInterToCatchUp;
    unsigned int m_nScriptTimeForInterPolation;
    unsigned short m_nFadeInOutFlag;
    //short _padE9C2;
    int m_nModeObbeCamIsInForCar;
    short m_nModeToGoTo;
    short m_nMusicFadingDirection;
    short m_nTypeOfSwitch;
    //short _padE9CE;
    unsigned int m_nFadeStartTime;
    unsigned int m_nTimeToWaitToFadeMusic;
        
        
    //funcs
    float Find3rdPersonQuickAimPitch();
};

extern CCamera &TheCamera;

VALIDATE_SIZE(CCamera, 0xE9D8);
