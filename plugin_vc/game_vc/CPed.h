/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CPhysical.h"
#include "CStoredCollPoly.h"
#include "CPedIK.h"
#include "CPathNode.h"
#include "CPedStats.h"
#include "CWeapon.h"
#include "ePedStats.h"
#include "eFormation.h"
#include "eWaitState.h"
#include "ePedPieceTypes.h"
#include "eEventType.h"
#include "eObjective.h"
#include "CFire.h"
#include "ePedType.h"
#include "ePedAction.h"
#include "AnimBlendFrameData.h"
#include "eAnimations.h"

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
    PEDSTATE_SEEK_BOAT = 25,
    PEDSTATE_FOLLOW_ROUTE = 26,
    PEDSTATE_CPR = 27,
    PEDSTATE_SOLICIT = 28,
    PEDSTATE_BUY_ICECREAM = 29,
    PEDSTATE_INVESTIGATE = 30,
    PEDSTATE_STEP_AWAY = 31,
    PEDSTATE_ON_FIRE = 32,
    PEDSTATE_HANG_OUT = 33,
    PEDSTATE_JUMP = 41,
    PEDSTATE_FALL = 42,
    PEDSTATE_GETUP = 43,
    PEDSTATE_JUMP_FROM_VEHICLE = 44,
    PEDSTATE_DRIVING = 50,
    PEDSTATE_DIE = 54,
    PEDSTATE_DEAD = 55,
    PEDSTATE_CAR_JACK = 56,
    PEDSTATE_ENTER_CAR = 58,
    PEDSTATE_EXIT_CAR = 60
};

enum PLUGIN_API eMoveState {
    PEDMOVE_NONE,
    PEDMOVE_STILL,
    PEDMOVE_WALK,
    PEDMOVE_RUN = 4,
    PEDMOVE_SPRINT = 5
};

class CVehicle;

class CPed : public CPhysical {
protected:
    CPed(plugin::dummy_func_t) : CPhysical(plugin::dummy), m_aWeapons{ plugin::dummy, plugin::dummy, plugin::dummy,
        plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy } {}
public:
    CStoredCollPoly m_polyColliding;
    float m_fCollisionSpeed;
    struct {
        unsigned char bIsStanding : 1;
        unsigned char bWasStanding : 1;
        unsigned char b03 : 1;
        unsigned char bIsPointingGunAt : 1;
        unsigned char bIsLooking : 1;
        unsigned char b06 : 1;
        unsigned char bIsRestoringLook : 1;
        unsigned char bIsAimingGun : 1;

        unsigned char bIsRestoringGun : 1;
        unsigned char bCanPointGunAtTarget : 1;
        unsigned char bIsTalking : 1;
        unsigned char bIsInTheAir : 1;
        unsigned char bIsLanding : 1;
        unsigned char bIsRunning : 1;
        unsigned char b15 : 1;
        unsigned char b16 : 1;

        unsigned char bCanPedEnterSeekedCar : 1;
        unsigned char bRespondsToThreats : 1;
        unsigned char bRenderPedInCar : 1;
        unsigned char b20 : 1;
        unsigned char bUpdateAnimHeading : 1;
        unsigned char bRemoveHead : 1;
        unsigned char bFiringWeapon : 1;
        unsigned char b24 : 1;

        unsigned char b25a : 1;
        unsigned char b25b : 1;
        unsigned char bPedIsBleeding : 1;
        unsigned char bStopAndShoot : 1;
        unsigned char bIsPedDieAnimPlaying : 1;
        unsigned char b30 : 1;
        unsigned char b31 : 1;
        unsigned char bHasObjectiveCompleted : 1;

        unsigned char bKindaStayInSamePlace : 1;
        unsigned char bBeingChasedByPolice : 1;
        unsigned char bNotAllowedToDuck : 1;
        unsigned char bCrouchWhenShooting : 1;
        unsigned char bIsDucking : 1;
        unsigned char bGetUpAnimStarted : 1;
        unsigned char bDoBloodyFootprints : 1;
        unsigned char b40 : 1;

        unsigned char b41 : 1;
        unsigned char b42 : 1;
        unsigned char b43 : 1;
        unsigned char b44 : 1;
        unsigned char b45 : 1;
        unsigned char b46 : 1;
        unsigned char b47 : 1;
        unsigned char b48 : 1;

        unsigned char b49 : 1;
        unsigned char b50 : 1;
        unsigned char b51 : 1;
        unsigned char b52 : 1;
        unsigned char b53 : 1;
        unsigned char b54 : 1;
        unsigned char bIsBeingJacked : 1;
        unsigned char bFadeOut : 1;

        unsigned char b57 : 1;
        unsigned char b58 : 1;
        unsigned char b59 : 1;
        unsigned char bClearObjective : 1;
        unsigned char bTryingToReachDryLand : 1;
        unsigned char b62 : 1;
        unsigned char b63 : 1;
        unsigned char b64 : 1;

        unsigned char bShakeFist : 1;
        unsigned char bNoCriticalHits : 1;
        unsigned char b67 : 1;
        unsigned char bHasAlreadyBeenRecorded : 1;
        unsigned char bFallenDown : 1;
        unsigned char bUpdateMatricesRequired : 1;
        unsigned char b71 : 1;
        unsigned char b72 : 1;

        unsigned char b73 : 1;
        unsigned char b74 : 1;
        unsigned char b75 : 1;
        unsigned char b76 : 1;
        unsigned char b77 : 1;
        unsigned char bMiamiViceCop : 1;
        unsigned char bMoneyHasBeenGivenByScript : 1;
        unsigned char bHasBeenPhotographed : 1;

        unsigned char bIsDrowning : 1;
        unsigned char bDrownsInWater : 1;
        unsigned char bStayBehindIfLeaderTooFar : 1;
        unsigned char bUsingExitCarTimer : 1;
        unsigned char bScriptPedIsPlayerAlly : 1;
        unsigned char bKnockedUpIntoAir : 1;
        unsigned char bDeadPedInFrontOfCar : 1;
        unsigned char bStayInCarOnJack : 1;

        unsigned char b89 : 1;
        unsigned char bDoomAim : 1;
        unsigned char bCanBeShotInVehicle : 1;
        unsigned char b92 : 1;
        unsigned char b93 : 1;
        unsigned char b94 : 1;
        unsigned char b95 : 1;
        unsigned char b96 : 1;

        unsigned char b97 : 1;
        unsigned char bCrouchWhenScared : 1;
        unsigned char b99 : 1;
        unsigned char b100 : 1;
        unsigned char b101 : 1;
        unsigned char b102 : 1;
        unsigned char bPedWasSetOutOfCollision : 1;
        unsigned char bGangMemberReturnsFire : 1;
    } m_nPedFlags;
private:
    char _pad159[3];
public:
    unsigned char m_nGangFlags;
private:
    char _pad15D[3];
public:
    unsigned char m_nPedStatus; //1 - normal ped, can be removed, 2 - script ped
private:
    char _pad161[3];
public:
    eObjective m_nObjective;
    eObjective m_nPrevObjective;
    CEntity *m_pObjectiveEntity;
    CVehicle *m_pObjectiveVehicle;
    CVector m_vecObjective;
    float m_fObjectiveAngle;
    CPed *m_pGangLeader;
    int m_nPedFormation;
    unsigned int m_nFearFlags;
    CEntity *m_pThreatEntity;
    CVector2D m_EventOrThreatPos;
    unsigned int m_nEventType;
    CEntity *m_pEventEntity;
    float m_fAngleToEvent;
    AnimBlendFrameData* m_apFrames[18];
    RpAtomic *m_pCurWeaponAtomic;
    int m_nAnimGroupId;
    void *m_pVehicleAnim;
    CVector2D m_vecAnimMoveDelta;
    CVector m_vecOffsetSeek;
    CPedIK m_PedIK;
    CVector2D m_ActionPos;
    int m_nActionTimer;
    ePedState m_ePedState;
    ePedState m_eLastPedState;
    eMoveState m_eMoveState;
    eMoveState m_eStoredMoveState;
    eMoveState m_ePrevActionState;
    int m_nWaitState;
    int m_nWaitTimer;
    CPathNode *m_apPathNodesStates[8];
    unsigned short m_wPathNodes;
    short m_wCurPathNode;
    CEntity *m_pPathRelEntity;
    CEntity *m_pNextNodeEntity;
    int m_nPathNodeTimer;
    CPathNode m_aPathNodeStates[8];
    CPathNode *m_pCurNodeState;
    char m_nPathState;
private:
    char _pad335[3];
public:
    CPathNode *m_pNextPathNode;
    CPathNode *m_pLastPathNode;
    CVector m_vecPathNextNode;
    float m_fPathNextNodeDir;
    unsigned int m_nPathNodeType;
    float m_fHealth;
    float m_fArmour;
    int m_nShadowUpdateTimer;
    short wRouteLastPoint;
    unsigned short wRoutePoints;
    short wRoutePos;
    unsigned short wRouteType;
    short wRouteCurDir;
private:
    char _pad36A[2];
public:
    float m_fMovedX;
    float m_fMovedY;
    float m_fRotationCur;
    float m_fRotationDest;
    float m_fHeadingRate;
    unsigned short m_nEnterType; //shows how the ped enters the vehicle (from the driver side or passenger side, from the back, etc : 11 - passenger side 15 - driver side)
    unsigned short m_nWalkAroundType;
    CPhysical *m_pCurPhysSurface;
    CVector m_vecOffsetFromPhysSurface;
    CEntity *m_pCurSurface;
    CVector vecSeekVehicle;
    CEntity *m_pSeekTarget;
    CVehicle *m_pVehicle;
    bool m_bInVehicle;
private:
    char _pad3AD[3];
public:
    float m_fSeatPrecisionX;
    float m_fSeatPrecisionY;
    CVehicle *m_pFromVehicle;
    void *m_pSeat;
    unsigned int m_nSeatType; //specify seat type, is -1 when not sitting
    bool m_bHasPhone;
private:
    char _pad3C5;
public:
    short m_wPhoneId;
    int m_nLookingForPhone;
    int m_nPhoneTalkTimer;
    void *m_pLastAccident;
    ePedType m_nPedType;
    CPedStats *m_pPedStats;
    float m_fFleeFromPosX;
    float m_fFleeFromPosY;
    CEntity *m_pFleeFrom;
    int m_nFleeTimer;
    CEntity *m_pThreatEx;
    CEntity *m_pLastThreatAt;
    int m_nLastThreatTimer;
    CVehicle *m_pVehicleColliding;
    unsigned char m_nStateUnused;
private:
    char _pad3FD[3];
public:
    int m_nTimerUnused;
    void *m_pTargetUnused;
    CWeapon m_aWeapons[10];
    int m_nAtchStoredWep;
    int m_nStoredGiveWep;
    int m_nStoredGiveAmmo;
    unsigned char m_nCurrentWeapon;
    unsigned char m_nWepSkills;
    unsigned char m_nWeaponAccuracy;
    unsigned char m_nBodyPart;
    CEntity *m_pPointGunAt;
    CVector m_vecHitLastPos;
    int m_nHitCounter;
    int m_nLastHitState; //state after a hit, 2 - just received a hit, 24 - recovered after a hit, 8 - just hit someone, this is not always accurate though  
    unsigned char m_nFightFlags1; //FF - looking behind while hitting or getting hit, 00 - normal mode (not sure exactly)
    unsigned char m_nFightFlags2; //flag 01 - you are hitting, flags FE - normal position (?)
    unsigned char m_nFightFlags3; 
    unsigned char m_nBleedCounter;
    CFire *m_pPedFire;
    void *m_pPedFight;
    float m_fLookDirection;
    int m_nWepModelID;
    int m_nLeaveCarTimer;
    int m_nGetUpTimer;
    int m_nLookTimer;
    int m_nStandardTimer;
    int m_nAttackTimer;
    int m_nLastHitTime;
    int m_nHitRecoverTimer;
    int m_nObjectiveTimer;
    int m_nDuckTimer;
    int m_nDuckAndCoverTimer;
    int m_nBloodyTimer;
    int m_nShotTime;
    int m_nShotTimeAdd;
    unsigned char m_nPanicCounter;
    unsigned char m_nDeadBleeding;
    unsigned char m_nBodyPartBleeding;
private:
    char _pad56B;
public:
    CPed *m_apNearPeds[10];
    unsigned short m_nNumNearPeds;
    unsigned short m_nPedMoney;
    unsigned char m_nLastDamWep;
private:
    char _pad599[3];
public:
    CEntity *m_pLastDamEntity;
    CEntity *m_pAttachedTo;
    CVector m_vecAttachOffset;
    unsigned short m_nAttachType;
private:
    char _pad5B2[2];
public:
    float m_fAttachRot;
    unsigned int m_nAttachWepAmmo;
    unsigned int m_nThreatFlags;
    int m_nThreatCheck;
    int m_nLastThreatCheck;
    unsigned int m_nSayType;
    int m_nSayTimer;
    int m_nTalkTimerLast;
    int m_nTalkTimer;
    short m_wTalkTypeLast;
    unsigned short m_wTalkType;
    bool m_bCanPedTalk;
private:
    char _pad5DD[3];
public:
    int m_nPedLastComment;
    CVector m_vecSeekPosEx;
    float m_fSeekExAngle;

    //vtable
    void SetMoveAnim();

    //funcs
    int AddInCarAnims(CVehicle* vehicle, bool arg1);
    void AddWeaponModel(int modelIndex);
    char AimGun();
    void AnswerMobile();
    CEntity* AttachPedToEntity(CEntity* entity, float offsetX, float offsetY, float offsetZ, unsigned short position, float angle, eWeaponType weaponType);
    unsigned int Attack();
    void Avoid();
    int BeingDraggedFromCar();
    void BuildPedLists();
    void BuyIceCream();
    void CalculateNewOrientation();
    void CalculateNewVelocity();
    bool CanBeDamagedByThisGangMember(CPed* ped);
    bool CanBeDeleted();
    bool CanBeDeletedEvenInVehicle();
    bool CanPedDriveOff();
    bool CanPedJumpThis(CEntity* entity, CVector* arg1);
    bool CanSeeEntity(CEntity* entity, float limitAngle);
    bool CanSetPedState();
    bool CanStrafeOrMouseControl();
    bool CanWeRunAndFireWithWeapon();
    unsigned int Chat();
    bool CheckForExplosions(CVector2D& arg0);
    char CheckForPointBlankPeds(CPed* ped);
    bool CheckIfInTheAir();
    int CheckThreatValidity();
    int ChooseAttackAI(unsigned char arg0, bool arg1);
    int ChooseAttackPlayer(unsigned char arg0, bool arg1);
    void ClearAimFlag();
    void ClearAll();
    void ClearAnswerMobile();
    void ClearAttack();
    void ClearAttackByRemovingAnim();
    void ClearChat();
    void ClearDuck(bool arg0);
    void ClearFollowPath();
    void ClearInvestigateEvent();
    void ClearLeader();
    void ClearLookFlag();
    void ClearObjective();
    void ClearPointGunAt();
    void ClearSeek();
    void ClearWaitState();
    void ClearWeapons();
    void CollideWithPed(CPed* ped);
    void CreateDeadPedMoney();
    void CreateDeadPedPickupCoors(float* pX, float* pY, float* pZ);
    void CreateDeadPedWeaponPickups();
    void DeadPedMakesTyresBloody();
    void DettachPedFromEntity();
    void Dress();
    void DriveVehicle();
    void Duck();
    void DuckAndCover();
    void EndFight(unsigned char arg0);
    void EnterCar();
    void ExitCar();
    bool FacePhone();
    void Fall();
    void Fight();
    void FightHitPed(CPed* ped, CVector& arg1, CVector& arg2, short arg3);
    void FightStrike(CVector& arg0, bool arg1);
    bool FindBestCoordsFromNodes(CVector arg0, CVector* arg1);
    void Flee();
    short FollowPath();
    int GetFormationPosition();
    int GetLocalDirection(CVector2D const& arg0);
    static int GetLocalPositionToOpenCarDoor(CVehicle* vehicle, unsigned int arg1, float arg2);
    int GetNearestDoor(CVehicle* vehicle, CVector& position);
    bool GetNearestPassengerDoor(CVehicle* vehicle, CVector& position);
    bool GetNearestTrainDoor(CVehicle* vehicle, CVector& position);
    bool GetNearestTrainPedPosition(CVehicle* vehicle, CVector& position);
    int GetNextPointOnRoute();
    static int GetPositionToOpenCarDoor(CVehicle* vehicle, unsigned int arg1);
    static int GetPositionToOpenCarDoor(CVehicle* vehicle, unsigned int arg1, float arg2);
    int GetWeaponSlot(eWeaponType weaponType);
    void GiveDelayedWeapon(eWeaponType weaponType, unsigned int ammo);
    void GiveWeapon(eWeaponType weaponType, unsigned int ammo, bool likeUnused);
    void GrantAmmo(eWeaponType weaponType, unsigned int ammo);
    bool HasAttractor();
    bool HaveReachedNextPointOnRoute(float arg0);
    void Idle();
    void InTheAir();
    void InflictDamage(void* arg0, eWeaponType weaponType, float arg2, ePedPieceTypes arg3, unsigned char arg4);
    void InformMyGangOfAttack(CEntity* entity);
    static void Initialise();
    void InvestigateEvent();
    bool IsGangMember();
    bool IsPedDoingDriveByShooting();
    bool IsPedHeadAbovePos(float zPos);
    bool IsPedInControl();
    bool IsPedShootable();
    bool IsPlayer();
    bool IsPointerValid();
    bool IsRoomToBeCarJacked();
    void KillCharOnFootArmed(CVector& arg0, CVector& arg1, CVector& arg2);
    void KillCharOnFootMelee(CVector& arg0, CVector& arg1, CVector& arg2);
    void KillPedWithCar(CVehicle* vehicle, float arg1);
    void LineUpPedWithCar(unsigned int arg0);
    static void LoadFightData();
    void LookForInterestingNodes();
    void LookForSexyCars();
    void LookForSexyPeds();
    bool MakePhonecall();
    void MakeTyresMuddySectorList(CPtrList& ptrList);
    void MoveHeadToLook();
    void Mug();
    bool OurPedCanSeeThisOne(CEntity* entity, bool arg1);
    void Pause();
    void PedShuffle();
    bool PlacePedOnDryLand();
    void PlayFootSteps();
    void PlayHitSound(CPed* ped);
    short PointGunAt();
    bool PositionAnyPedOutOfCollision();
    void PositionAttachedPed();
    bool PositionPedOutOfCollision();
    bool PossiblyFindBetterPosToSeekCar(CVector* arg0, CVehicle* vehicle);
    void ProcessBuoyancy();
    void ProcessObjective();
    void QuitEnteringCar();
    void ReactToAttack(CEntity* entity);
    void ReactToPointGun(CEntity* entity);
    void RegisterThreatWithGangPeds(CEntity* entity);
    void RemoveDrivebyAnims();
    void RemoveInCarAnims(bool arg0);
    void RemoveWeaponAnims(int likeUnused, float blendDelta);
    void RemoveWeaponModel(int modelIndex);
    void RemoveWeaponWhenEnteringVehicle();
    void ReplaceWeaponWhenExitingVehicle();
    void RequestDelayedWeapon();
    void RestartNonPartialAnims();
    void RestoreGunPosition();
    void RestoreHeadPosition();
    void RestoreHeadingRate();
    void RestorePreviousObjective();
    void RestorePreviousState();
    void Say(unsigned short arg0);
    void Say(unsigned short arg0, int arg1);
    void ScanForDelayedResponseThreats();
    void ScanForInterestingStuff();
    void ScanForThreats();
    bool Seek();
    void SeekBoatPosition();
    void SeekCar();
    void SeekFollowingPath();
    bool SelectGunIfArmed();
    void ServiceTalking();
    bool ServiceTalkingWhenDead();
    void SetAimFlag(CEntity* aimingTo);
    void SetAimFlag(float heading);
    void SetAmmo(eWeaponType weaponType, unsigned int ammo);
    static void SetAnimOffsetForEnterOrExitVehicle();
    void SetAnswerMobile();
    void SetAttack(CEntity* entity);
    void SetAttackTimer(unsigned int time);
    void SetBeingDraggedFromCar(CVehicle* vehicle, unsigned int arg1, bool arg2);
    void SetCarJack(CVehicle* vehicle);
    void SetCarJack_AllClear(CVehicle* vehicle, unsigned int arg1, unsigned int arg2);
    void SetChat(CEntity* entity, unsigned int arg1);
    void SetCurrentWeapon(eWeaponType weaponType);
    void SetCurrentWeapon(int slot);
    void SetDead();
    //void SetDie(AnimationId arg0, float arg1, float arg2);
    void SetDirectionToWalkAroundObject(CEntity* entity);
    void SetDirectionToWalkAroundVehicle(CVehicle* vehicle);
    void SetDuck(unsigned int arg0, bool arg1);
    void SetEnterCar(CVehicle* vehicle, unsigned int arg1);
    void SetEnterCar_AllClear(CVehicle* vehicle, unsigned int arg1, unsigned int arg2);
    void SetEvasiveDive(CPhysical* arg0, unsigned char arg1);
    void SetEvasiveStep(CPhysical* arg0, unsigned char arg1);
    void SetExitBoat(CVehicle* boat);
    void SetExitCar(CVehicle* vehicle, unsigned int arg1);
    //void SetFall(int arg0, AnimationId arg1, unsigned char arg2);
    void SetFlee(CEntity* arg0, int arg1);
    void SetFlee(CVector2D const& arg0, int arg1);
    void SetFollowPath(CVector const& arg0, float arg1, eMoveState arg2, CEntity* arg3, CEntity* arg4, int arg5);
    bool SetFollowPathDynamic();
    bool SetFollowPathStatic();
    void SetFormation(eFormation arg0);
    void SetGetUp();
    void SetIdle();
    void SetInTheAir();
    void SetInvestigateEvent(eEventType eventType, CVector2D arg1, float arg2, unsigned short arg3, float arg4);
    void SetJump();
    void SetLanding();
    void SetLeader(CPed* ped);
    void SetLook(CEntity* entity);
    void SetLookFlag(CEntity* lookingTo, bool likeUnused, bool arg2);
    void SetLookFlag(float lookHeading, bool likeUnused, bool arg2);
    void SetLookTimer(unsigned int time);
    void SetMoveState(eMoveState moveState);
    //void SetNewAttraction(CPedAttractor* arg0, CVector const& arg1, float arg2, float arg3, int arg4);
    void SetObjective(eObjective objective);
    void SetObjective(eObjective objective, CVector arg1);
    void SetObjective(eObjective objective, float arg1, CVector const& arg2);
    void SetObjective(eObjective objective, short arg1, short arg2);
    void SetObjective(eObjective objective, void* arg1);
    void SetObjectiveTimer(unsigned int time);
    void SetPedPositionInCar();
    void SetPedStats(ePedStats statsType);
    void SetPointGunAt(CEntity* entity);
    void SetRadioStation();
    void SetSeek(CEntity* arg0, float arg1);
    void SetSeek(CVector arg0, float arg1);
    void SetSeekBoatPosition(CVehicle* boat);
    void SetSeekCar(CVehicle* car, unsigned int arg1);
    void SetShootTimer(unsigned int time);
    void SetSolicit(unsigned int arg0);
    void SetStoredObjective();
    void SetStoredState();
    void SetWaitState(eWaitState waitState, void* arg1);
    void SetWanderPath(char arg0);
    void Solicit();
    void SortPeds(CPed** pedList, int arg1, int arg2);
    void SpawnFlyingComponent(int arg0, char arg1);
    void StartFightAttack(unsigned char arg0);
    void StartFightDefend(unsigned char arg0, unsigned char arg1, unsigned char arg2);
    void StopNonPartialAnims();
    bool TurnBody();
    void Undress(char const* modelName);
    void UpdateFromLeader();
    void UpdatePosition();
    bool UseGroundColModel();
    void Wait();
    void WanderPath();
    void WarpPedIntoCar(CVehicle* vehicle);
    void WarpPedToNearEntityOffScreen(CEntity* entity);
    void WarpPedToNearLeaderOffScreen();
    bool WillChat(CPed* ped);
    float WorkOutHeadingForMovingFirstPerson(float heading);
    static void operator delete(void* data);
    static void* operator new(unsigned int size);
    static void* operator new(unsigned int size, int arg1);
    CPed(ePedType pedType);
};

VALIDATE_SIZE(CPed, 0x5F4);
