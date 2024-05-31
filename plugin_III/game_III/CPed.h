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
#include "AnimBlendFrameData.h"
#include "CAnimBlendAssociation.h"
#include "CPedIK.h"
#include "CPathNode.h"
#include "eCrimeType.h"
#include "CAccident.h"
#include "ePedType.h"
#include "CPedStats.h"
#include "CRange2D.h"
#include "CWeapon.h"
#include "ePedStats.h"
#include "CColPoint.h"
#include "eEventType.h"
#include "eAnimations.h"

class CFire;
class CVehicle;

enum PLUGIN_API eCharCreatedBy {
    RANDOM_CHAR = 1,
    MISSION_CHAR = 2
};

enum PLUGIN_API eFightMoveHitLevel : unsigned char {
    HITLEVEL_NULL = 0,
    HITLEVEL_GROUND = 1,
    HITLEVEL_LOW = 2,
    HITLEVEL_MEDIUM = 3,
    HITLEVEL_HIGH = 4
};

enum PLUGIN_API eFightState : char {
    FIGHTSTATE_MOVE_FINISHED = -2,
	FIGHTSTATE_JUST_ATTACKED,
	FIGHTSTATE_NO_MOVE,
	FIGHTSTATE_1
};

enum PLUGIN_API eFormation : unsigned int {
    FORMATION_UNDEFINED = 0,
    FORMATION_REAR = 1,
    FORMATION_REAR_LEFT = 2,
    FORMATION_REAR_RIGHT = 3,
    FORMATION_FRONT_LEFT = 4,
    FORMATION_FRONT_RIGHT = 5,
    FORMATION_LEFT = 6,
    FORMATION_RIGHT = 7,
    FORMATION_FRONT = 8
};

enum PLUGIN_API eMoveState {
    PEDMOVE_NONE = 0,
    PEDMOVE_STILL = 1,
    PEDMOVE_WALK = 2,
    PEDMOVE_RUN = 3,
    PEDMOVE_SPRINT = 4
};

enum PLUGIN_API eObjective : unsigned int {
    OBJECTIVE_NONE = 0,
    OBJECTIVE_WAIT_ON_FOOT = 1,
    OBJECTIVE_FLEE_ON_FOOT_TILL_SAFE = 2,
    OBJECTIVE_GUARD_SPOT = 3,
    OBJECTIVE_GUARD_AREA = 4,
    OBJECTIVE_WAIT_IN_CAR = 5,
    OBJECTIVE_WAIT_IN_CAR_THEN_GET_OUT = 6,
    OBJECTIVE_KILL_CHAR_ON_FOOT = 7,
    OBJECTIVE_KILL_CHAR_ANY_MEANS = 8,
    OBJECTIVE_FLEE_CHAR_ON_FOOT_TILL_SAFE = 9,
    OBJECTIVE_FLEE_CHAR_ON_FOOT_ALWAYS = 10,
    OBJECTIVE_GOTO_CHAR_ON_FOOT = 11,
    OBJECTIVE_FOLLOW_CHAR_IN_FORMATION = 12,
    OBJECTIVE_LEAVE_CAR = 13,
    OBJECTIVE_ENTER_CAR_AS_PASSENGER = 14,
    OBJECTIVE_ENTER_CAR_AS_DRIVER = 15,
    OBJECTIVE_FOLLOW_CAR_IN_CAR = 16,
    OBJECTIVE_FIRE_AT_OBJECT_FROM_VEHICLE = 17,
    OBJECTIVE_DESTROY_OBJECT = 18,
    OBJECTIVE_DESTROY_CAR = 19,
    OBJECTIVE_GOTO_AREA_ANY_MEANS = 20,
    OBJECTIVE_GOTO_AREA_ON_FOOT = 21,
    OBJECTIVE_RUN_TO_AREA = 22,
    OBJECTIVE_GOTO_AREA_IN_CAR = 23,
    OBJECTIVE_FOLLOW_CAR_ON_FOOT_WITH_OFFSET = 24,
    OBJECTIVE_GUARD_ATTACK = 25,
    OBJECTIVE_SET_LEADER = 26,
    OBJECTIVE_FOLLOW_ROUTE = 27,
    OBJECTIVE_SOLICIT_VEHICLE = 28,
    OBJECTIVE_HAIL_TAXI = 29,
    OBJECTIVE_CATCH_TRAIN = 30,
    OBJECTIVE_BUY_ICE_CREAM = 31,
    OBJECTIVE_STEAL_ANY_CAR = 32,
    OBJECTIVE_MUG_CHAR = 33,
    OBJECTIVE_FLEE_CAR = 34,
    OBJECTIVE_LEAVE_CAR_AND_DIE = 35
};

enum PLUGIN_API ePedFightMoves {
    FIGHTMOVE_NULL = 0,
    FIGHTMOVE_STDPUNCH = 1,
    FIGHTMOVE_IDLE = 2,
    FIGHTMOVE_SHUFFLE_F = 3,
    FIGHTMOVE_KNEE = 4,
    FIGHTMOVE_HEADBUTT = 5,
    FIGHTMOVE_PUNCHJAB = 6,
    FIGHTMOVE_PUNCHHOOK = 7,
    FIGHTMOVE_KICK = 8,
    FIGHTMOVE_LONGKICK = 9,
    FIGHTMOVE_ROUNDHOUSE = 10,
    FIGHTMOVE_BODYBLOW = 11,
    FIGHTMOVE_GROUNDKICK = 12,
    FIGHTMOVE_HITFRONT = 13,
    FIGHTMOVE_HITBACK = 14,
    FIGHTMOVE_HITRIGHT = 15,
    FIGHTMOVE_HITLEFT = 16,
    FIGHTMOVE_HITBODY = 17,
    FIGHTMOVE_HITCHEST = 18,
    FIGHTMOVE_HITHEAD = 19,
    FIGHTMOVE_HITBIGSTEP = 20,
    FIGHTMOVE_HITONFLOOR = 21,
    FIGHTMOVE_HITBEHIND = 22,
    FIGHTMOVE_IDLE2NORM = 23,
    NUM_FIGHTMOVES = 24
};

enum PLUGIN_API ePedLineUpPhase {
    LINE_UP_TO_CAR_START = 0,
    LINE_UP_TO_CAR_END = 1,
    LINE_UP_TO_CAR_2 = 2
};

enum PLUGIN_API ePedOnGroundState {
    NO_PED = 0,
    PED_IN_FRONT_OF_ATTACKER = 1,
    PED_ON_THE_FLOOR = 2,
    PED_DEAD_ON_THE_FLOOR = 3
};

enum PLUGIN_API ePedPieceTypes : unsigned int {
    PEDPIECE_TORSO = 0,
    PEDPIECE_MID = 1,
    PEDPIECE_LEFTARM = 2,
    PEDPIECE_RIGHTARM = 3,
    PEDPIECE_LEFTLEG = 4,
    PEDPIECE_RIGHTLEG = 5,
    PEDPIECE_HEAD = 6
};

enum PLUGIN_API ePedRouteType : unsigned short {
    PEDROUTE_STOP_WHEN_DONE = 1,
    PEDROUTE_GO_BACKWARD_WHEN_DONE = 2,
    PEDROUTE_GO_TO_START_WHEN_DONE = 3
};

enum PLUGIN_API ePedState : unsigned int {
    PEDSTATE_NONE = 0,
    PEDSTATE_IDLE = 1,
    PEDSTATE_LOOK_ENTITY = 2,
    PEDSTATE_LOOK_HEADING = 3,
    PEDSTATE_WANDER_RANGE = 4,
    PEDSTATE_WANDER_PATH = 5,
    PEDSTATE_SEEK_POSITION = 6,
    PEDSTATE_SEEK_ENTITY = 7,
    PEDSTATE_FLEE_POSITION = 8,
    PEDSTATE_FLEE_ENTITY = 9,
    PEDSTATE_PURSUE = 10,
    PEDSTATE_FOLLOW_PATH = 11,
    PEDSTATE_SNIPER_MODE = 12,
    PEDSTATE_ROCKET_MODE = 13,
    PEDSTATE_DUMMY = 14,
    PEDSTATE_PAUSE = 15,
    PEDSTATE_ATTACK = 16,
    PEDSTATE_FIGHT = 17,
    PEDSTATE_FACE_PHONE = 18,
    PEDSTATE_MAKE_PHONECALL = 19,
    PEDSTATE_CHAT = 20,
    PEDSTATE_MUG = 21,
    PEDSTATE_AIMGUN = 22,
    PEDSTATE_AI_CONTROL = 23,
    PEDSTATE_SEEK_CAR = 24,
    PEDSTATE_SEEK_IN_BOAT = 25,
    PEDSTATE_FOLLOW_ROUTE = 26,
    PEDSTATE_CPR = 27,
    PEDSTATE_SOLICIT = 28,
    PEDSTATE_BUY_ICECREAM = 29,
    PEDSTATE_INVESTIGATE = 30,
    PEDSTATE_STEP_AWAY = 31,
    PEDSTATE_ON_FIRE = 32,
    PEDSTATE_HANG_OUT = 33,
    PEDSTATE_STATES_NO_AI = 34,
    PEDSTATE_JUMP = 35,
    PEDSTATE_FALL = 36,
    PEDSTATE_GETUP = 37,
    PEDSTATE_STAGGER = 38,
    PEDSTATE_DIVE_AWAY = 39,
    PEDSTATE_CAN_SHOOT = 40,
    PEDSTATE_ENTER_TRAIN = 41,
    PEDSTATE_EXIT_TRAIN = 42,
    PEDSTATE_ARREST_PLAYER = 43,
    PEDSTATE_DRIVING = 44,
    PEDSTATE_PASSENGER = 45,
    PEDSTATE_TAXI_PASSENGER = 46,
    PEDSTATE_OPEN_DOOR = 47,
    PEDSTATE_DIE = 48,
    PEDSTATE_DEAD = 49,
    PEDSTATE_CARJACK = 50,
    PEDSTATE_DRAG_FROM_CAR = 51,
    PEDSTATE_ENTER_CAR = 52,
    PEDSTATE_STEAL_CAR = 53,
    PEDSTATE_EXIT_CAR = 54,
    PEDSTATE_HANDS_UP = 55,
    PEDSTATE_ARRESTED = 56
};

enum PLUGIN_API ePointBlankNecessity {
    NO_POINT_BLANK_PED = 0,
    POINT_BLANK_FOR_WANTED_PED = 1,
    POINT_BLANK_FOR_SOMEONE_ELSE = 2
};

enum PLUGIN_API eWaitState : unsigned int {
    WAITSTATE_FALSE = 0,
    WAITSTATE_TRAFFIC_LIGHTS = 1,
    WAITSTATE_CROSS_ROAD = 2,
    WAITSTATE_CROSS_ROAD_LOOK = 3,
    WAITSTATE_LOOK_PED = 4,
    WAITSTATE_LOOK_SHOP = 5,
    WAITSTATE_LOOK_ACCIDENT = 6,
    WAITSTATE_FACEOFF_GANG = 7,
    WAITSTATE_DOUBLEBACK = 8,
    WAITSTATE_HITWALL = 9,
    WAITSTATE_TURN180 = 10,
    WAITSTATE_SURPRISE = 11,
    WAITSTATE_STUCK = 12,
    WAITSTATE_LOOK_ABOUT = 13,
    WAITSTATE_PLAYANIM_DUCK = 14,
    WAITSTATE_PLAYANIM_COWER = 15,
    WAITSTATE_PLAYANIM_TAXI = 16,
    WAITSTATE_PLAYANIM_HANDSUP = 17,
    WAITSTATE_PLAYANIM_HANDSCOWER = 18,
    WAITSTATE_PLAYANIM_CHAT = 19,
    WAITSTATE_FINISH_FLEE = 20
};

struct PLUGIN_API FightMove {
    int m_nAnimId;
    float m_fStartFireTime;
    float m_fEndFireTime;
    float m_fComboFollowTime;
    float m_fStrikeRadius;
    unsigned char m_nHitLevel; //!< eFightMoveHitLevel
    unsigned char m_nDamage;
    unsigned char m_nFlags;
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
    int m_nAnimGroupId;
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
    unsigned char m_nWeaponSkill;
    unsigned char m_nWeaponAccuracy;
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

    SUPPORTED_10EN_11EN_STEAM static CVector2D &ms_vec2DFleePosition;
    SUPPORTED_10EN_11EN_STEAM static bool &bNastyLimbsCheat;
    SUPPORTED_10EN_11EN_STEAM static bool &bPedCheat3;
    SUPPORTED_10EN_11EN_STEAM static bool &bPedCheat2;

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)


    // virtual function #2 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void SetModelIndex(unsigned int modelIndex);

    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)


    // virtual function #6 (not overriden)


    // virtual function #7 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void ProcessControl();

    // virtual function #9 (not overriden)


    // virtual function #10 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void Teleport(CVector pos);
    SUPPORTED_10EN_11EN_STEAM void PreRender();
    SUPPORTED_10EN_11EN_STEAM void Render();
    SUPPORTED_10EN_11EN_STEAM bool SetupLighting();
    SUPPORTED_10EN_11EN_STEAM void RemoveLighting(bool resetWorldColors);
    SUPPORTED_10EN_11EN_STEAM void FlagToDestroyWhenNextProcessed();
    SUPPORTED_10EN_11EN_STEAM int ProcessEntityCollision(CEntity *entity, CColPoint *colPoint);
    SUPPORTED_10EN_11EN_STEAM void SetMoveAnim();

    SUPPORTED_10EN_11EN_STEAM void AddWeaponModel(int modelIndex);
    SUPPORTED_10EN_11EN_STEAM void AimGun();
    SUPPORTED_10EN_11EN_STEAM void ApplyHeadShot(eWeaponType type, CVector pos, unsigned char evenOnPlayer);
    SUPPORTED_10EN_11EN_STEAM void Attack();
    SUPPORTED_10EN_11EN_STEAM void Avoid();
    SUPPORTED_10EN_11EN_STEAM void BeingDraggedFromCar();
    SUPPORTED_10EN_11EN_STEAM void BuildPedLists();
    SUPPORTED_10EN_11EN_STEAM void CalculateNewOrientation();
    SUPPORTED_10EN_11EN_STEAM void CalculateNewVelocity();
    SUPPORTED_10EN_11EN_STEAM bool CanBeDeleted();
    SUPPORTED_10EN_11EN_STEAM bool CanPedDriveOff();
    SUPPORTED_10EN_11EN_STEAM bool CanPedJumpThis();
    SUPPORTED_10EN_11EN_STEAM bool CanPedReturnToState();
    SUPPORTED_10EN_11EN_STEAM bool CanSeeEntity(CEntity *entity, float threshold);
    SUPPORTED_10EN_11EN_STEAM bool CanSetPedState();
    SUPPORTED_10EN_11EN_STEAM bool CanStrafeOrMouseControl();
    SUPPORTED_10EN_11EN_STEAM void Chat();
    SUPPORTED_10EN_11EN_STEAM void CheckAroundForPossibleCollisions();
    SUPPORTED_10EN_11EN_STEAM CPed *CheckForDeadPeds();
    SUPPORTED_10EN_11EN_STEAM bool CheckForExplosions(CVector2D &area);
    SUPPORTED_10EN_11EN_STEAM CPed *CheckForGunShots();
    SUPPORTED_10EN_11EN_STEAM unsigned char CheckForPointBlankPeds(CPed *pedToVerify);
    SUPPORTED_10EN_11EN_STEAM bool CheckIfInTheAir();
    SUPPORTED_10EN_11EN_STEAM void ClearAimFlag();
    SUPPORTED_10EN_11EN_STEAM void ClearAll();
    SUPPORTED_10EN_11EN_STEAM void ClearAttack();
    SUPPORTED_10EN_11EN_STEAM void ClearAttackByRemovingAnim();
    SUPPORTED_10EN_11EN_STEAM void ClearChat();
    SUPPORTED_10EN_11EN_STEAM void ClearDuck();
    SUPPORTED_10EN_11EN_STEAM void ClearFall();
    SUPPORTED_10EN_11EN_STEAM void ClearFlee();
    SUPPORTED_10EN_11EN_STEAM void ClearInvestigateEvent();
    SUPPORTED_10EN_11EN_STEAM void ClearLeader();
    SUPPORTED_10EN_11EN_STEAM void ClearLook();
    SUPPORTED_10EN_11EN_STEAM void ClearLookFlag();
    SUPPORTED_10EN_11EN_STEAM void ClearObjective();
    SUPPORTED_10EN_11EN_STEAM void ClearPause();
    SUPPORTED_10EN_11EN_STEAM void ClearPointGunAt();
    SUPPORTED_10EN_11EN_STEAM void ClearSeek();
    SUPPORTED_10EN_11EN_STEAM void ClearWeapons();
    SUPPORTED_10EN_11EN_STEAM void CollideWithPed(CPed *collideWith);
    SUPPORTED_10EN_11EN_STEAM void CreateDeadPedMoney();
    SUPPORTED_10EN_11EN_STEAM void CreateDeadPedWeaponPickups();
    //! This is a perfectly empty function.
    SUPPORTED_10EN_11EN_STEAM void Die();
    SUPPORTED_10EN_11EN_STEAM unsigned char DoesLOSBulletHitPed(CColPoint &colPoint);
    SUPPORTED_10EN_11EN_STEAM void Duck();
    SUPPORTED_10EN_11EN_STEAM bool DuckAndCover();
    SUPPORTED_10EN_11EN_STEAM void EndFight(unsigned char endType);
    SUPPORTED_10EN_11EN_STEAM void EnterCar();
    SUPPORTED_10EN_11EN_STEAM void EnterTrain();
    SUPPORTED_10EN_11EN_STEAM void ExitCar();
    SUPPORTED_10EN_11EN_STEAM void ExitTrain();
    SUPPORTED_10EN_11EN_STEAM bool FacePhone();
    SUPPORTED_10EN_11EN_STEAM void Fall();
    SUPPORTED_10EN_11EN_STEAM void Fight();
    SUPPORTED_10EN_11EN_STEAM void FightStrike(CVector &touchedNodePos);
    SUPPORTED_10EN_11EN_STEAM bool FindBestCoordsFromNodes(CVector unused, CVector *bestCoords);
    SUPPORTED_10EN_11EN_STEAM void Flee();
    SUPPORTED_10EN_11EN_STEAM void FollowPath();
    SUPPORTED_10EN_11EN_STEAM void ForceStoredObjective(eObjective objective);
    SUPPORTED_10EN_11EN_STEAM CVector *GetFormationPosition();
    //! Actually GetLocalDirectionTo(Turn/Look)
    //! 0-forward, 1-left, 2-backward, 3-right
    SUPPORTED_10EN_11EN_STEAM int GetLocalDirection(CVector2D const &posOffset);
    SUPPORTED_10EN_11EN_STEAM void GetNearestDoor(CVehicle *vehicle, CVector &posToOpen);
    SUPPORTED_10EN_11EN_STEAM bool GetNearestPassengerDoor(CVehicle *vehicle, CVector &posToOpen);
    SUPPORTED_10EN_11EN_STEAM bool GetNearestTrainDoor(CVehicle *vehicle, CVector &doorPos);
    SUPPORTED_10EN_11EN_STEAM void GetNearestTrainPedPosition(CVehicle *vehicle, CVector &enterPos);
    SUPPORTED_10EN_11EN_STEAM short GetNextPointOnRoute();
    SUPPORTED_10EN_11EN_STEAM unsigned char GetPedRadioCategory(unsigned int modelIndex);
    SUPPORTED_10EN_11EN_STEAM int GetWeaponSlot(eWeaponType type);
    SUPPORTED_10EN_11EN_STEAM unsigned int GiveWeapon(eWeaponType type, unsigned int ammo);
    SUPPORTED_10EN_11EN_STEAM void GoToNearestDoor(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM void GrantAmmo(eWeaponType type, unsigned int ammo);
    SUPPORTED_10EN_11EN_STEAM bool HaveReachedNextPointOnRoute(float distToCountReached);
    SUPPORTED_10EN_11EN_STEAM void Idle();
    SUPPORTED_10EN_11EN_STEAM void InTheAir();
    SUPPORTED_10EN_11EN_STEAM bool InflictDamage(CEntity *damagedBy, eWeaponType type, float damage, ePedPieceTypes pedPiece, unsigned char direction);
    SUPPORTED_10EN_11EN_STEAM void InformMyGangOfAttack(CEntity *attacker);
    SUPPORTED_10EN_11EN_STEAM void InvestigateEvent();
    SUPPORTED_10EN_11EN_STEAM bool IsGangMember();
    SUPPORTED_10EN_11EN_STEAM bool IsPedHeadAbovePos(float zOffset);
    SUPPORTED_10EN_11EN_STEAM bool IsPedInControl();
    SUPPORTED_10EN_11EN_STEAM bool IsPedShootable();
    SUPPORTED_10EN_11EN_STEAM bool IsPlayer();
    SUPPORTED_10EN_11EN_STEAM bool IsPointerValid();
    SUPPORTED_10EN_11EN_STEAM bool IsRoomToBeCarJacked();
    SUPPORTED_10EN_11EN_STEAM bool IsTemporaryObjective(eObjective objective);
    SUPPORTED_10EN_11EN_STEAM void KillPedWithCar(CVehicle *vehicle, float impulse);
    SUPPORTED_10EN_11EN_STEAM void LineUpPedWithCar(unsigned int phase);
    SUPPORTED_10EN_11EN_STEAM void LineUpPedWithTrain();
    //! This is a perfectly empty function.
    SUPPORTED_10EN_11EN_STEAM void Look();
    SUPPORTED_10EN_11EN_STEAM bool LookForInterestingNodes();
    SUPPORTED_10EN_11EN_STEAM void LookForSexyCars();
    SUPPORTED_10EN_11EN_STEAM void LookForSexyPeds();
    SUPPORTED_10EN_11EN_STEAM bool MakePhonecall();
    SUPPORTED_10EN_11EN_STEAM void MoveHeadToLook();
    SUPPORTED_10EN_11EN_STEAM void Mug();
    SUPPORTED_10EN_11EN_STEAM bool OurPedCanSeeThisOne(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM void Pause();
    SUPPORTED_10EN_11EN_STEAM bool PlacePedOnDryLand();
    SUPPORTED_10EN_11EN_STEAM void PlayFootSteps();
    SUPPORTED_10EN_11EN_STEAM void PlayHitSound(CPed *hitTo);
    SUPPORTED_10EN_11EN_STEAM void PointGunAt();
    SUPPORTED_10EN_11EN_STEAM bool PositionPedOutOfCollision();
    SUPPORTED_10EN_11EN_STEAM bool PossiblyFindBetterPosToSeekCar(CVector *pos, CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM void ProcessBuoyancy();
    SUPPORTED_10EN_11EN_STEAM void ProcessObjective();
    SUPPORTED_10EN_11EN_STEAM void QuitEnteringCar();
    SUPPORTED_10EN_11EN_STEAM void ReactToAttack(CEntity *attacker);
    SUPPORTED_10EN_11EN_STEAM void ReactToPointGun(CEntity *entWithGun);
    SUPPORTED_10EN_11EN_STEAM void RegisterThreatWithGangPeds(CEntity *attacker);
    SUPPORTED_10EN_11EN_STEAM void RemoveBodyPart(int nodeId, char direction);
    SUPPORTED_10EN_11EN_STEAM void RemoveInCarAnims();
    SUPPORTED_10EN_11EN_STEAM void RemoveWeaponModel(int modelIndex);
    SUPPORTED_10EN_11EN_STEAM void RestartNonPartialAnims();
    SUPPORTED_10EN_11EN_STEAM void RestoreGunPosition();
    SUPPORTED_10EN_11EN_STEAM void RestoreHeadPosition();
    SUPPORTED_10EN_11EN_STEAM void RestoreHeadingRate();
    SUPPORTED_10EN_11EN_STEAM void RestorePreviousObjective();
    SUPPORTED_10EN_11EN_STEAM void RestorePreviousState();
    SUPPORTED_10EN_11EN_STEAM bool RunToReportCrime(eCrimeType type);
    SUPPORTED_10EN_11EN_STEAM void Say(unsigned short audio);
    SUPPORTED_10EN_11EN_STEAM void ScanForInterestingStuff();
    SUPPORTED_10EN_11EN_STEAM unsigned int ScanForThreats();
    SUPPORTED_10EN_11EN_STEAM bool Seek();
    SUPPORTED_10EN_11EN_STEAM void SeekBoatPosition();
    SUPPORTED_10EN_11EN_STEAM void SeekCar();
    SUPPORTED_10EN_11EN_STEAM bool SeekFollowingPath(CVector *unused);
    //! Only used while deciding which gun ped should switch to, if no ammo left.
    SUPPORTED_10EN_11EN_STEAM bool SelectGunIfArmed();
    SUPPORTED_10EN_11EN_STEAM void ServiceTalking();
    SUPPORTED_10EN_11EN_STEAM bool ServiceTalkingWhenDead();
    SUPPORTED_10EN_11EN_STEAM void SetAimFlag(float direction);
    SUPPORTED_10EN_11EN_STEAM void SetAimFlag(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM void SetAmmo(eWeaponType type, unsigned int ammo);
    SUPPORTED_10EN_11EN_STEAM void SetAttack(CEntity *victim);
    SUPPORTED_10EN_11EN_STEAM void SetAttackTimer(unsigned int time);
    SUPPORTED_10EN_11EN_STEAM void SetBeingDraggedFromCar(CVehicle *vehicle, unsigned int doorNode, bool quickJack);
    SUPPORTED_10EN_11EN_STEAM void SetBuyIceCream();
    SUPPORTED_10EN_11EN_STEAM void SetCarJack(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM void SetCarJack_AllClear(CVehicle *vehicle, unsigned int doorNode, unsigned int doorFlag);
    SUPPORTED_10EN_11EN_STEAM void SetChat(CEntity *chatWith, unsigned int time);
    SUPPORTED_10EN_11EN_STEAM void SetCurrentWeapon(int type);
    SUPPORTED_10EN_11EN_STEAM void SetDead();
    SUPPORTED_10EN_11EN_STEAM void SetDie(int animId, float delta, float speed);
    SUPPORTED_10EN_11EN_STEAM void SetDirectionToWalkAroundObject(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM void SetDuck(unsigned int time);
    SUPPORTED_10EN_11EN_STEAM void SetEnterCar(CVehicle *vehicle, unsigned int unused);
    SUPPORTED_10EN_11EN_STEAM void SetEnterCar_AllClear(CVehicle *vehicle, unsigned int doorNode, unsigned int doorFlag);
    SUPPORTED_10EN_11EN_STEAM void SetEnterTrain(CVehicle *train, unsigned int unused);
    SUPPORTED_10EN_11EN_STEAM void SetEvasiveDive(CPhysical *reason, unsigned char onlyRandomJump);
    SUPPORTED_10EN_11EN_STEAM void SetEvasiveStep(CPhysical *reason, unsigned char animType);
    SUPPORTED_10EN_11EN_STEAM void SetExitCar(CVehicle *vehicle, unsigned int doorNode);
    SUPPORTED_10EN_11EN_STEAM void SetExitTrain(CVehicle *train);
    SUPPORTED_10EN_11EN_STEAM void SetFall(int extraTime, int animId, unsigned char evenIfNotInControl);
    SUPPORTED_10EN_11EN_STEAM void SetFlee(CVector2D const &from, int time);
    SUPPORTED_10EN_11EN_STEAM void SetFlee(CEntity *fleeFrom, int time);
    SUPPORTED_10EN_11EN_STEAM bool SetFollowPath(CVector dest);
    SUPPORTED_10EN_11EN_STEAM void SetFollowRoute(short currentPoint, short routeType);
    SUPPORTED_10EN_11EN_STEAM void SetFormation(eFormation formation);
    SUPPORTED_10EN_11EN_STEAM void SetGetUp();
    SUPPORTED_10EN_11EN_STEAM void SetIdle();
    SUPPORTED_10EN_11EN_STEAM void SetInTheAir();
    SUPPORTED_10EN_11EN_STEAM void SetInvestigateEvent(eEventType type, CVector2D pos, float distanceToCountDone, unsigned short time, float angle);
    SUPPORTED_10EN_11EN_STEAM void SetJump();
    SUPPORTED_10EN_11EN_STEAM void SetLanding();
    SUPPORTED_10EN_11EN_STEAM void SetLeader(CPed *leader);
    SUPPORTED_10EN_11EN_STEAM void SetLookFlag(float direction, bool keepTryingToLook);
    SUPPORTED_10EN_11EN_STEAM void SetLookFlag(CEntity *target, bool keepTryingToLook);
    SUPPORTED_10EN_11EN_STEAM void SetLookTimer(unsigned int time);
    SUPPORTED_10EN_11EN_STEAM void SetMoveState(eMoveState state);
    SUPPORTED_10EN_11EN_STEAM void SetObjective(eObjective objective);
    SUPPORTED_10EN_11EN_STEAM void SetObjective(eObjective objective, void *entity);
    SUPPORTED_10EN_11EN_STEAM void SetObjective(eObjective objective, CVector dest, float safeDist);
    SUPPORTED_10EN_11EN_STEAM void SetObjective(eObjective objective, short routePoint, short routeType);
    SUPPORTED_10EN_11EN_STEAM void SetObjective(eObjective objective, CVector dest);
    SUPPORTED_10EN_11EN_STEAM void SetObjectiveTimer(unsigned int time);
    SUPPORTED_10EN_11EN_STEAM void SetPedPositionInCar();
    SUPPORTED_10EN_11EN_STEAM void SetPedPositionInTrain();
    SUPPORTED_10EN_11EN_STEAM void SetPedStats(ePedStats stat);
    SUPPORTED_10EN_11EN_STEAM void SetPointGunAt(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM void SetRadioStation();
    SUPPORTED_10EN_11EN_STEAM void SetSeek(CVector pos, float distanceToCountDone);
    SUPPORTED_10EN_11EN_STEAM void SetSeek(CEntity *seeking, float distanceToCountDone);
    SUPPORTED_10EN_11EN_STEAM void SetSeekBoatPosition(CVehicle *boat);
    SUPPORTED_10EN_11EN_STEAM void SetSeekCar(CVehicle *vehicle, unsigned int doorNode);
    SUPPORTED_10EN_11EN_STEAM void SetShootTimer(unsigned int time);
    SUPPORTED_10EN_11EN_STEAM void SetSolicit(unsigned int time);
    SUPPORTED_10EN_11EN_STEAM void SetStoredObjective();
    SUPPORTED_10EN_11EN_STEAM void SetStoredState();
    SUPPORTED_10EN_11EN_STEAM void SetWaitState(eWaitState state, void *time);
    SUPPORTED_10EN_11EN_STEAM bool SetWanderPath(char pathStateDest);
    SUPPORTED_10EN_11EN_STEAM void Solicit();
    //! Some kind of binary sort
    SUPPORTED_10EN_11EN_STEAM void SortPeds(CPed **list, int min, int max);
    SUPPORTED_10EN_11EN_STEAM void SpawnFlyingComponent(int nodeId, char direction);
    SUPPORTED_10EN_11EN_STEAM void StartFightAttack(unsigned char buttonPressure);
    SUPPORTED_10EN_11EN_STEAM void StartFightDefend(unsigned char direction, unsigned char hitLevel, unsigned char strength);
    SUPPORTED_10EN_11EN_STEAM void StopNonPartialAnims();
    SUPPORTED_10EN_11EN_STEAM bool TurnBody();
    SUPPORTED_10EN_11EN_STEAM void UpdateFromLeader();
    SUPPORTED_10EN_11EN_STEAM void UpdatePosition();
    SUPPORTED_10EN_11EN_STEAM bool UseGroundColModel();
    SUPPORTED_10EN_11EN_STEAM void Wait();
    SUPPORTED_10EN_11EN_STEAM void WanderPath();
    SUPPORTED_10EN_11EN_STEAM void WanderRange();
    SUPPORTED_10EN_11EN_STEAM void WarpPedIntoCar(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM bool WarpPedToNearEntityOffScreen(CEntity *warpTo);
    SUPPORTED_10EN_11EN_STEAM bool WarpPedToNearLeaderOffScreen();
    SUPPORTED_10EN_11EN_STEAM bool WillChat(CPed *stranger);
    SUPPORTED_10EN_11EN_STEAM float WorkOutHeadingForMovingFirstPerson(float offset);
    bool IsPedDoingDriveByShooting();

    SUPPORTED_10EN_11EN_STEAM static void FinishDieAnimCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void FinishFightMoveCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void FinishHitHeadCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void FinishJumpCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void FinishLaunchCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void FinishedAttackCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void FinishedWaitCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static CVector GetLocalPositionToOpenCarDoor(CVehicle *vehicle, unsigned int doorNode, float offset);
    SUPPORTED_10EN_11EN_STEAM static CVector GetPositionToOpenCarDoor(CVehicle *vehicle, unsigned int doorNode);
    SUPPORTED_10EN_11EN_STEAM static CVector GetPositionToOpenCarDoor_(CVehicle *vehicle, unsigned int doorNode, float offset);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void LoadFightData();
    SUPPORTED_10EN_11EN_STEAM static void PedAnimAlignCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedAnimDoorCloseCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedAnimDoorCloseRollingCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedAnimDoorOpenCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedAnimGetInCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedAnimPullPedOutCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedAnimStepOutCarCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedEvadeCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedGetupCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedLandCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedSetDraggedOutCarCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedSetDraggedOutCarPositionCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedSetInCarCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedSetInTrainCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedSetOutCarCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedSetOutTrainCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedSetQuickDraggedOutCarPositionCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void PedStaggerCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void RestoreHeadingRateCB(CAnimBlendAssociation *association, void *data);
    SUPPORTED_10EN_11EN_STEAM static void SetAnimOffsetForEnterOrExitVehicle();
    SUPPORTED_10EN_11EN_STEAM static void Stagger();
};

SUPPORTED_10EN_11EN_STEAM extern FightMove(&tFightMoves)[24]; // FightMove tFightMoves[24]
SUPPORTED_10EN_11EN_STEAM extern CVector &vecVehicleSeatPosOffset;
SUPPORTED_10EN_11EN_STEAM extern CColPoint(&aTempPedColPts_)[32]; // CColPoint aTempPedColPts[32]
SUPPORTED_10EN_11EN_STEAM extern CVector &vecPedCarDoorAnimOffset;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecPedCarDoorLoAnimOffset;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecPedVanRearDoorAnimOffset;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecPedTrainDoorAnimOffset;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecPedDraggedOutCarAnimOffset;
SUPPORTED_10EN_11EN_STEAM extern CVector &vecPedQuickDraggedOutCarAnimOffset;
SUPPORTED_10EN_11EN_STEAM extern CPed *(&gapTempPedList)[50]; // CPed *gapTempPedList[50]
SUPPORTED_10EN_11EN_STEAM extern RpClump *&pNastyClump;
SUPPORTED_10EN_11EN_STEAM extern unsigned short &nPlayerInComboMove;
SUPPORTED_10EN_11EN_STEAM extern unsigned short &gnNumTempPedList;

SUPPORTED_10EN_11EN_STEAM void FinishFuckUCB(CAnimBlendAssociation *anim, void *data);
SUPPORTED_10EN_11EN_STEAM void particleProduceFootSplash(CPed *ped, CVector const &pos, float size, int times);
SUPPORTED_10EN_11EN_STEAM void particleProduceFootDust(CPed *ped, CVector const &pos, float size, int times);
SUPPORTED_10EN_11EN_STEAM RwObject *RemoveAllModelCB(RwObject *object, void *data);
SUPPORTED_10EN_11EN_STEAM void AddYardieDoorSmoke(CVehicle *vehicle, unsigned int doorNode);
SUPPORTED_10EN_11EN_STEAM int CheckForPedsOnGroundToAttack(CPed *attacker, CPed **pedOnGround);
SUPPORTED_10EN_11EN_STEAM RwObject *SetPedAtomicVisibilityCB(RwObject *object, void *data);
SUPPORTED_10EN_11EN_STEAM RwFrame *RecurseFrameChildrenVisibilityCB(RwFrame *frame, void *data);
SUPPORTED_10EN_11EN_STEAM RwObject *CloneAtomicToFrameCB(RwObject *object, void *data);
SUPPORTED_10EN_11EN_STEAM RwFrame *RecurseFrameChildrenToCloneCB(RwFrame *frame, void *data);

VALIDATE_SIZE(FightMove, 0x18);
VTABLE_DESC(CPed, 0x5F8C2C, 19);
VALIDATE_SIZE(CPed, 0x53C);

#include "meta/meta.CPed.h"
