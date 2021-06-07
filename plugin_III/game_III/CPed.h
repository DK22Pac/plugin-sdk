/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPhysical.h"
#include "CStoredCollPoly.h"
#include "eObjective.h"
#include "eFormation.h"
#include "AssocGroupId.h"
#include "CAnimBlendAssociation.h"
#include "CPedIK.h"
#include "ePedState.h"
#include "eWaitState.h"
#include "CPathNode.h"
#include "eCrimeType.h"
#include "CAccident.h"
#include "ePedType.h"
#include "CPedStats.h"
#include "CRange2D.h"
#include "CWeapon.h"
class CFire;
class CVehicle;

enum PLUGIN_API eMoveState : unsigned int {
    PEDMOVE_NONE = 0,
    PEDMOVE_STILL = 1,
    PEDMOVE_WALK = 2,
    PEDMOVE_RUN = 3,
    PEDMOVE_SPRINT = 4
};

enum PLUGIN_API ePedRouteType : unsigned short {
    PEDROUTE_STOP_WHEN_DONE = 1,
    PEDROUTE_GO_BACKWARD_WHEN_DONE = 2,
    PEDROUTE_GO_TO_START_WHEN_DONE = 3
};

class PLUGIN_API CPed : public CPhysical {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPed)

public:
    CStoredCollPoly m_collPoly;
    float m_fCollisionSpeed;
    struct {
        unsigned char bIsStanding : 1;
        unsigned char bWasStanding : 1;
        unsigned char bIsAttacking : 1; //!< doesn't reset after fist fight
        unsigned char bIsPointingGunAt : 1;
        unsigned char bIsLooking : 1;
        unsigned char bKeepTryingToLook : 1; //!< if we can't look somewhere due to unreachable angles
        unsigned char bIsRestoringLook : 1;
        unsigned char bIsAimingGun : 1;

        unsigned char bIsRestoringGun : 1;
        unsigned char bCanPointGunAtTarget : 1;
        unsigned char bIsTalking : 1;
        unsigned char bIsInTheAir : 1;
        unsigned char bIsLanding : 1;
        unsigned char bIsRunning : 1; //!< on some conditions
        unsigned char bHitSomethingLastFrame : 1;
        unsigned char bVehEnterDoorIsBlocked : 1; //!< because someone else enters/exits from there

        unsigned char bCanPedEnterSeekedCar : 1;
        unsigned char bRespondsToThreats : 1;
        unsigned char bRenderPedInCar : 1;
        unsigned char bChangedSeat : 1;
        unsigned char bUpdateAnimHeading : 1;
        unsigned char bBodyPartJustCameOff : 1;
        unsigned char bIsShooting : 1;
        unsigned char bFindNewNodeAfterStateRestore : 1;

        unsigned char bHasACamera : 1; //!< does ped possess a camera to document accidents involves fire/explosion
        unsigned char bGonnaInvestigateEvent : 1;
        unsigned char bPedIsBleeding : 1;
        unsigned char bStopAndShoot : 1; //!< ped cannot reach target to attack with fist, need to use gun
        unsigned char bIsPedDieAnimPlaying : 1;
        unsigned char bUsePedNodeSeek : 1;
        unsigned char bObjectiveCompleted : 1;
        unsigned char bScriptObjectiveCompleted : 1;

        unsigned char bKindaStayInSamePlace : 1;
        unsigned char bBeingChasedByPolice : 1; //!< Unused VC leftover. Should've been set for criminal/gang members
        unsigned char bNotAllowedToDuck : 1;
        unsigned char bCrouchWhenShooting : 1;
        unsigned char bIsDucking : 1;
        unsigned char bGetUpAnimStarted : 1;
        unsigned char bDoBloodyFootprints : 1;
        unsigned char bFleeAfterExitingCar : 1;

        unsigned char bWanderPathAfterExitingCar : 1;
        unsigned char bIsLeader : 1;
        unsigned char bDontDragMeOutCar : 1; //!< unfinished feature
        unsigned char bPed_flag43 : 1;
        unsigned char bWillBeQuickJacked : 1;
        unsigned char bCancelEnteringCar : 1; //!< after door is opened or couldn't be opened due to it's locked
        unsigned char bObstacleShowedUpDuringKillObjective : 1;
        unsigned char bDuckAndCover : 1;

        unsigned char bStillOnValidPoly : 1; //!< set if the polygon the ped is on is still valid for collision
        unsigned char bAllowMedicsToReviveMe : 1;
        unsigned char bResetWalkAnims : 1;
        unsigned char bStartWanderPathOnFoot : 1; //!< exits the car if he's in it, reset after path found
        unsigned char bOnBoat : 1; //!< not just driver, may be just standing
        unsigned char bBusJacked : 1;
        unsigned char bGonnaKillTheCarJacker : 1; //!< only set when car is jacked from right door and when arrested by police
        unsigned char bFadeOut : 1;

        unsigned char bKnockedUpIntoAir : 1; //!< has ped been knocked up into the air by a car collision
        unsigned char bHitSteepSlope : 1; //!< has ped collided/is standing on a steep slope (surface type)
        unsigned char bCullExtraFarAway : 1; //!< special ped only gets culled if it's extra far away (for roadblocks)
        unsigned char bClearObjective : 1;
        unsigned char bTryingToReachDryLand : 1; //!< has ped just exited boat and trying to get to dry land
        unsigned char bCollidedWithMyVehicle : 1;
        unsigned char bRichFromMugging : 1; //!< ped has lots of cash cause they've been mugging people
        unsigned char bChrisCriminal : 1; //!< Is a criminal as killed during Chris' police mission (should be counted as such)

        unsigned char bShakeFist : 1; //!< test shake hand at look entity
        unsigned char bNoCriticalHits : 1; //!< if set, limbs won't came off
        unsigned char bVehExitWillBeInstant : 1;
        unsigned char bHasAlreadyBeenRecorded : 1;
        unsigned char bFallenDown : 1;
        unsigned char bSomeVCflag1 : 1;
        unsigned char bDontAcceptIKLookAts : 1;
        unsigned char bPed_flag71 : 1;
    } m_nPedFlags;
    char field_15D;
    char field_15E;
    char field_15F;
    unsigned char m_nCharCreatedBy;
    eObjective m_eObjective;
    eObjective m_ePrevObjective;
    CPed *m_pPedInObjective;
    CVehicle *m_pCarInObjective;
    CVector m_vecNextRoutePointPos;
    CPed *m_pGangLeader;
    eFormation m_ePedFormation;
    unsigned int m_nFearFlags;
    CEntity *m_pThreatEntity;
    CVector2D m_vec2dEventOrThreat;
    unsigned int m_nEventType;
    CEntity *m_pEventEntity;
    float m_fAngleToEvent;
    AnimBlendFrameData *m_apFrames[12];
    AssocGroupId m_nAnimGroupId;
    CAnimBlendAssociation *m_pVehicleAnim;
    CVector2D m_vec2dAnimMoveDelta;
    CVector m_vecOffsetSeek;
    CPedIK m_PedIK;
    CVector2D m_vec2dAction;
    unsigned int m_nPedStateTimer;
    ePedState m_ePedState;
    ePedState m_eLastPedState;
    eMoveState m_eMoveState;
    int m_nStoredMoveState;
    int m_nPrevMoveState;
    eWaitState m_eWaitState;
    unsigned int m_nWaitTimer;
    void *m_apPathNodesStates[8]; //!< unused, probably leftover from VC
    CVector2D m_aPathNodeStates[10];
    unsigned short m_nPathNodes;
    short m_nCurPathNode;
    char m_nPathDir;
    CPathNode *m_pLastPathNode;
    CPathNode *m_pNextPathNode;
    float m_fHealth;
    float m_fArmour;
    short m_nRouteLastPoint;
    unsigned short m_nRouteStartPoint;
    short m_nRoutePointsPassed;
    short m_nRouteType; //!< see ePedRouteType
    short m_nRoutePointsBeingPassed;
    CVector2D m_vec2dMoved;
    float m_fRotationCur;
    float m_fRotationDest;
    float m_fHeadingRate;
    unsigned short m_nVehicleDoor;
    short m_nWalkAroundType;
    CPhysical *m_pCurrentPhysSurface;
    CVector m_vecOffsetFromPhysSurface;
    CEntity *m_pCurSurface;
    CVector m_vecSeekPos;
    CEntity *m_pSeekTarget;
    CVehicle *m_pVehicle;
    bool m_bInVehicle;
    float m_fDistanceToCountSeekDone;
    bool m_bRunningToPhone;
    short m_nPhoneId;
    eCrimeType m_eCrimeToReportOnPhone;
    unsigned int m_nPhoneTalkTimer;
    CAccident *m_pLastAccident;
    ePedType m_ePedType;
    CPedStats *m_pPedStats;
    CVector2D m_vec2dFleeFromPos;
    CEntity *m_pFleeFrom;
    unsigned int m_nFleeTimer;
    CEntity *m_pCollidingEntityWhileFleeing;
    unsigned int m_nCollidingThingTimer;
    CEntity *m_pCollidingEntity;
    unsigned char m_nStateUnused;
    unsigned int m_nTimerUnused;
    CRange2D *m_pWanderRangeBounds;
    CWeapon m_aWeapons[13];
    eWeaponType m_eStoredWeapon;
    unsigned char m_nCurrentWeapon; //!< see eWeaponType
    unsigned char m_nMaxWeaponTypeAllowed; //!< see eWeaponType
    unsigned char m_nWepSkills;
    unsigned char m_nWepAccuracy;
    CEntity *m_pPointGunAt;
    CVector m_vecHitLastPos;
    unsigned int m_nCurFightMove;
    unsigned char m_nFightButtonPressure;
    char m_nFightState;
    bool m_bTakeAStepAfterAttack;
    CFire *m_pFire;
    CEntity *m_pLookTarget;
    float m_fLookDirection;
    int m_nWepModelID;
    unsigned int m_nLeaveCarTimer;
    unsigned int m_nGetUpTimer;
    unsigned int m_nLookTimer;
    unsigned int m_nChatTimer;
    unsigned int m_nAttackTimer;
    unsigned int m_nShootTimer; //!< shooting is a part of attack
    unsigned int m_nCarJackTimer;
    unsigned int m_nObjectiveTimer;
    unsigned int m_nDuckTimer;
    unsigned int m_nDuckAndCoverTimer;
    unsigned int m_nBloodyFootprintCountOrDeathTime; //!< Death time when bDoBloodyFootprints is false. Weird decision
    unsigned char m_nPanicCounter;
    bool m_bDeadBleeding;
    char m_nBodyPartBleeding; //!< PedNode, but -1 if there isn't
    CPed *m_apNearPeds[10];
    unsigned short m_nNumNearPeds;
    char m_nLastWepDam;
    unsigned int m_nLastSoundStart;
    unsigned int m_nSoundStart;
    unsigned short m_nLastQueuedSound;
    unsigned short m_nQueuedSound;
    CVector m_vecSeekPosEx; //!< used for OBJECTIVE_GUARD_SPOT
    float m_fDistanceToCountSeekDoneEx; //!< used for OBJECTIVE_GUARD_SPOT

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)


    // virtual function #2 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void SetModelIndex(unsigned int modelIndex);

    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)


    // virtual function #6 (not overriden)


    // virtual function #7 (not overriden)


    // virtual function #8 (not overriden)


    // virtual function #9 (not overriden)


    // virtual function #10 (not overriden)


    // virtual function #11 (not overriden)


    // virtual function #12 (not overriden)


    // virtual function #13 (not overriden)

    SUPPORTED_10EN_11EN_STEAM bool SetupLighting();
    SUPPORTED_10EN_11EN_STEAM void RemoveLighting(bool resetWorldColors);

    // virtual function #16 (not overriden)


    // virtual function #17 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void SetMoveAnim();
};

SUPPORTED_10EN_11EN_STEAM extern CVector &vecPedCarDoorAnimOffset;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecPedCarDoorLoAnimOffset;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecPedVanRearDoorAnimOffset;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecPedTrainDoorAnimOffset;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecPedDraggedOutCarAnimOffset;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecPedQuickDraggedOutCarAnimOffset;

VTABLE_DESC(CPed, 0x5F8C2C, 19);
VALIDATE_SIZE(CPed, 0x53C);

#include "meta/meta.CPed.h"
