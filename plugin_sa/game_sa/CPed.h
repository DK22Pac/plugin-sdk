/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "ePedType.h"
#include "CPhysical.h"
#include "CAEPedAudioEntity.h"
#include "CAEPedSpeechAudioEntity.h"
#include "CAEWeaponAudioEntity.h"
#include "CPedIntelligence.h"
#include "CPlayerData.h"
#include "AnimBlendFrameData.h"
#include "CPedAcquaintance.h"
#include "CPedIK.h"
#include "CWeapon.h"
#include "CVector2D.h"
#include "eWeaponType.h"
#include "ePedState.h"
#include "CAnimBlendAssociation.h"
#include "CFire.h"

enum PLUGIN_API ePedStats {

};

enum PLUGIN_API eMoveState {
    PEDMOVE_NONE = 0,
    PEDMOVE_STILL,
    PEDMOVE_TURN_L,
    PEDMOVE_TURN_R,
    PEDMOVE_WALK,
    PEDMOVE_JOG,
    PEDMOVE_RUN,
    PEDMOVE_SPRINT
};

enum PLUGIN_API eFightingStyle : char
{
    STYLE_STANDARD = 4,
    STYLE_BOXING,
    STYLE_KUNG_FU,
    STYLE_KNEE_HEAD,
    STYLE_MELEE,
    STYLE_KNIFE,
    STYLE_BAT,
    STYLE_KATANA_CANE,
    STYLE_CHAINSAW,
    STYLE_DILDO,
    STYLE_FLOWER,
    STYLE_GRAB_KICK,
    STYLE_ELBOWS
};

class CObject;
class CVehicle;

class PLUGIN_API CPed : public CPhysical {
protected:
    CPed(plugin::dummy_func_t) : CPhysical(plugin::dummy), m_aWeapons{ plugin::dummy, plugin::dummy, plugin::dummy,
        plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy,
        plugin::dummy, plugin::dummy, plugin::dummy } {
    }
public:
    CAEPedAudioEntity        m_pedAudio;
    CAEPedSpeechAudioEntity  m_pedSpeech;
    CAEWeaponAudioEntity     m_weaponAudio;
    char field_43C[36];
    CPed* m_roadRageWith;
    char field_464[4];
    int field_468;
    /* https://code.google.com/p/mtasa-blue/source/browse/tags/1.3.4/MTA10/game_sa/CPedSA.h */

#pragma pack(push, 1)
    bool bIsStanding : 1;         // is ped standing on something
    bool bWasStanding : 1;        // was ped standing on something
    bool bIsLooking : 1;          // is ped looking at something or in a direction
    bool bIsRestoringLook : 1;    // is ped restoring head postion from a look
    bool bIsAimingGun : 1;        // is ped aiming gun
    bool bIsRestoringGun : 1;     // is ped moving gun back to default posn
    bool bCanPointGunAtTarget : 1;// can ped point gun at target
    bool bIsTalking : 1;          // is ped talking(see Chat())

    bool bInVehicle : 1;          // is in a vehicle
    bool bIsInTheAir : 1;         // is in the air
    bool bIsLanding : 1;          // is landing after being in the air
    bool bHitSomethingLastFrame : 1; // has been in a collision last fram
    bool bIsNearCar : 1;          // has been in a collision last fram
    bool bRenderPedInCar : 1;     // has been in a collision last fram
    bool bUpdateAnimHeading : 1;  // update ped heading due to heading change during anim sequence
    bool bRemoveHead : 1;         // waiting on AntiSpazTimer to remove head

    bool bFiringWeapon : 1;       // is pulling trigger
    bool bHasACamera : 1;         // does ped possess a camera to document accidents
    bool bPedIsBleeding : 1;      // ped loses a lot of blood if true
    bool bStopAndShoot : 1;       // ped cannot reach target to attack with fist, need to use gun
    bool bIsPedDieAnimPlaying : 1;// is ped die animation finished so can dead now
    bool bStayInSamePlace : 1;    // when set, ped stays put
    bool bKindaStayInSamePlace : 1; // when set, ped doesn't seek out opponent or cover large distances. Will still shuffle and look for cover
    bool bBeingChasedByPolice : 1;// use nodes for routefind

    bool bNotAllowedToDuck : 1;   // ss this ped allowed to duck at all?
    bool bCrouchWhenShooting : 1; // duck behind cars etc
    bool bIsDucking : 1;          // duck behind cars etc
    bool bGetUpAnimStarted : 1;   // don't want to play getup anim if under something
    bool bDoBloodyFootprints : 1; // bool bIsLeader :1;
    bool bDontDragMeOutCar : 1;
    bool bStillOnValidPoly : 1;   // set if the polygon the ped is on is still valid for collision
    bool bAllowMedicsToReviveMe : 1;

    bool bResetWalkAnims : 1;
    bool bOnBoat : 1;             // flee but only using nodes
    bool bBusJacked : 1;          // flee but only using nodes
    bool bFadeOut : 1;            // set if you want ped to fade out
    bool bKnockedUpIntoAir : 1;   // has ped been knocked up into the air by a car collision
    bool bHitSteepSlope : 1;      // has ped collided/is standing on a steep slope (surface type)
    bool bCullExtraFarAway : 1;   // special ped only gets culled if it's extra far away (for roadblocks)
    bool bTryingToReachDryLand : 1; // has ped just exited boat and trying to get to dry land

    bool bCollidedWithMyVehicle : 1;
    bool bRichFromMugging : 1;    // ped has lots of cash cause they've been mugging people
    bool bChrisCriminal : 1;      // is a criminal as killed during Chris' police mission (should be counted as such)
    bool bShakeFist : 1;          // test shake hand at look entity
    bool bNoCriticalHits : 1;     // ped cannot be killed by a single bullet
    bool bHasAlreadyBeenRecorded : 1; // used for replays
    bool bUpdateMatricesRequired : 1; // if PedIK has altered bones so matrices need updated this frame
    bool bFleeWhenStanding : 1;

    bool bMiamiViceCop : 1;
    bool bMoneyHasBeenGivenByScript : 1;
    bool bHasBeenPhotographed : 1;
    bool bIsDrowning : 1;
    bool bDrownsInWater : 1;
    bool bHeadStuckInCollision : 1;
    bool bDeadPedInFrontOfCar : 1;
    bool bStayInCarOnJack : 1;

    bool bDontFight : 1;
    bool bDoomAim : 1;
    bool bCanBeShotInVehicle : 1;
    bool bPushedAlongByCar : 1; // ped is getting pushed along by car collision (so don't take damage from horz velocity)
    bool bNeverEverTargetThisPed : 1;
    bool bThisPedIsATargetPriority : 1;
    bool bCrouchWhenScared : 1;
    bool bKnockedOffBike : 1;

    bool bDonePositionOutOfCollision : 1;
    bool bDontRender : 1;
    bool bHasBeenAddedToPopulation : 1;
    bool bHasJustLeftCar : 1;
    bool bIsInDisguise : 1;
    bool bDoesntListenToPlayerGroupCommands : 1;
    bool bIsBeingArrested : 1;
    bool bHasJustSoughtCover : 1;

    bool bKilledByStealth : 1;
    bool bDoesntDropWeaponsWhenDead : 1;
    bool bCalledPreRender : 1;
    bool bBloodPuddleCreated : 1; // has a static puddle of blood been created yet
    bool bPartOfAttackWave : 1;
    bool bClearRadarBlipOnDeath : 1;
    bool bNeverLeavesGroup : 1; // flag that we want to test 3 extra spheres on col model
    bool bTestForBlockedPositions : 1; // this sets these indicator flags for various posisions on the front of the ped

    bool bRightArmBlocked : 1;
    bool bLeftArmBlocked : 1;
    bool bDuckRightArmBlocked : 1;
    bool bMidriffBlockedForJump : 1;
    bool bFallenDown : 1;
    bool bUseAttractorInstantly : 1;
    bool bDontAcceptIKLookAts : 1;
    bool bHasAScriptBrain : 1;

    bool bWaitingForScriptBrainToLoad : 1;
    bool bHasGroupDriveTask : 1;
    bool bCanExitCar : 1;
    unsigned char CantBeKnockedOffBike : 2; // 0=Default(harder for mission peds) 1=Never 2=Always normal(also for mission peds)
    bool bHasBeenRendered : 1;
    bool bIsCached : 1;
    bool bPushOtherPeds : 1; // GETS RESET EVERY FRAME - SET IN TASK: want to push other peds around (eg. leader of a group or ped trying to get in a car)

    bool bHasBulletProofVest : 1;
    bool bUsingMobilePhone : 1;
    bool bUpperBodyDamageAnimsOnly : 1;
    bool bStuckUnderCar : 1;
    bool bKeepTasksAfterCleanUp : 1; // if true ped will carry on with task even after cleanup
    bool bIsDyingStuck : 1;
    bool bIgnoreHeightCheckOnGotoPointTask : 1; // set when walking round buildings, reset when task quits
    bool bForceDieInCar : 1;

    bool bCheckColAboveHead : 1;
    bool bIgnoreWeaponRange : 1;
    bool bDruggedUp : 1;
    bool bWantedByPolice : 1; // if this is set, the cops will always go after this ped when they are doing a KillCriminal task
    bool bSignalAfterKill : 1;
    bool bCanClimbOntoBoat : 1;
    bool bPedHitWallLastFrame : 1; // useful to store this so that AI knows (normal will still be available)
    bool bIgnoreHeightDifferenceFollowingNodes : 1;

    bool bMoveAnimSpeedHasBeenSetByTask : 1;
    bool bGetOutUpsideDownCar : 1;
    bool bJustGotOffTrain : 1;
    bool bDeathPickupsPersist : 1;
    bool bTestForShotInVehicle : 1;
    bool bUsedForReplay : 1; // this ped is controlled by replay and should be removed when replay is done
#pragma pack(pop)

    CPedIntelligence   *m_pIntelligence;
    CPlayerData        *m_pPlayerData;
    unsigned char       m_nCreatedBy;
    char field_485[3];  // padding
    AnimBlendFrameData *m_apBones[19];
    unsigned int        m_nAnimGroup;
    CVector2D           m_vecAnimMovingShiftLocal;
    CPedAcquaintance    m_acquaintance;
    RwObject           *m_pWeaponObject;
    RwFrame            *m_pGunflashObject;
    RwObject           *m_pGogglesObject;
    unsigned char      *m_pGogglesState;
    short               m_nWeaponGunflashAlphaMP1; // AKA m_nWeaponGunflashStateRightHand
    short               m_nWeaponGunFlashAlphaProgMP1;
    short               m_nWeaponGunflashAlphaMP2; // AKA m_nWeaponGunflashStateLeftHand
    short               m_nWeaponGunFlashAlphaProgMP2;
    CPedIK              m_pedIK;
    int                 m_nAntiSpazTimer;
    ePedState           m_ePedState;
    eMoveState          m_nMoveState;
    eMoveState          m_nSwimmingMoveState; // used for swimming in CTaskSimpleSwim::ProcessPed
    int                 field_53C;
    float               m_fHealth;
    float               m_fMaxHealth;
    float               m_fArmour;
    unsigned int        m_nTimeTillWeNeedThisPed;
    CVector2D           m_vecAnimMovingShift;
    float               m_fCurrentRotation;
    float               m_fAimingRotation;
    float               m_fHeadingChangeRate;
    int                 m_fMoveAnim;
    CEntity*            m_standingOnEntity;
    CVector field_56C;
    CVector field_578;
    CEntity*            m_pContactEntity;
    float field_588;
    CVehicle*           m_pVehicle;
    CVehicle*           m_VehDeadInFrontOf; // set if bDeadPedInFrontOfCar
    int field_594;
    int                 m_nPedType;
    void*               m_pStats; // CPedStat *
    CWeapon             m_aWeapons[13];
    eWeaponType         m_nSavedWeapon; // when we need to hide ped weapon, we save it temporary here
    eWeaponType         m_nDelayedWeapon; // 'delayed' weapon is like an additional weapon, f.e., simple cop has a nitestick as current and pistol as delayed weapons
    unsigned int        m_nDelayedWeaponAmmo;
    unsigned char       m_nSelectedWepSlot;
    unsigned char       m_nWeaponShootingRate;
    unsigned char       m_nWeaponAccuracy;
    CObject*            m_pTargetedObject; // lock-on target
    int field_720;
    int field_724;
    int field_728;
    char                m_nWeaponSkill;
    eFightingStyle      m_nFightingStyle;
    char                m_nAllowedAttackMoves;
    char field_72F;
    CFire*              m_pFire;
    float               m_fireDmgMult;
    CEntity*            m_pLookTarget;
    float               m_fLookDirection; // radians
    int                 m_nWeaponModelId;
    unsigned int        m_nUnconsciousTimer;
    unsigned int        m_nLookTime;
    unsigned int        m_nAttackTimer;
    int                 m_nDeathTime;
    char                m_nBodypartToRemove;
    char field_755;
    short               m_nMoneyCount;
    float               m_Wobble;
    float               m_WobbleSpeed;
    eWeaponType         m_nLastWeaponDamage;
    CEntity*            m_pLastEntityDamage;
    int field_768;
    CVector             m_vecTurretOffset;
    float               m_fTurretAngleA;
    float               m_fTurretAngleB;
    int                 m_nTurretPosnMode;
    int                 m_nTurretAmmo;
    void*               m_pCoverPoint; // CCoverPoint *
    void*               m_pEnex; // CEnEx *
    float               m_fRemovalDistMultiplier; // 1.0 by default
    short               m_StreamedScriptBrainToLoad;
    char field_796[2];  // padding
    int field_798;

    // class virtual functions

    // Process applied anim
    void SetMoveAnim();
    // always returns true
    bool Save();
    // always returns true
    bool Load();

    // class functions


    CPed(ePedType);
    bool PedIsInvolvedInConversation();
    bool PedIsReadyForConversation(bool arg0);
    bool PedCanPickUpPickUp();
    void CreateDeadPedMoney();
    void CreateDeadPedPickupCoors(float* pX, float* pY, float* pZ);
    void CreateDeadPedWeaponPickups();
    static void Initialise();
    void SetPedStats(ePedStats statsType);
    void Update();
    void SetMoveState(eMoveState moveState);
    void SetMoveAnimSpeed(CAnimBlendAssociation* association);
    void StopNonPartialAnims();
    void RestartNonPartialAnims();
    bool CanUseTorsoWhenLooking();
    void SetLookFlag(float lookHeading, bool likeUnused, bool arg2);
    void SetLookFlag(CEntity* lookingTo, bool likeUnused, bool arg2);
    void SetAimFlag(CEntity* aimingTo);
    void ClearAimFlag();
    // Gets point direction relatively to ped
    int GetLocalDirection(CVector2D const& arg0);
    bool IsPedShootable();
    bool UseGroundColModel();
    bool CanPedReturnToState();
    bool CanSetPedState();
    bool CanBeArrested();
    bool CanStrafeOrMouseControl();
    bool CanBeDeleted();
    bool CanBeDeletedEvenInVehicle();
    void RemoveGogglesModel();
    int GetWeaponSlot(eWeaponType weaponType);
    void GrantAmmo(eWeaponType weaponType, unsigned int ammo);
    void SetAmmo(eWeaponType weaponType, unsigned int ammo);
    bool DoWeHaveWeaponAvailable(eWeaponType weaponType);
    bool DoGunFlash(int arg0, bool arg1);
    void SetGunFlashAlpha(bool rightHand);
    void ResetGunFlashAlpha();
    float GetBikeRidingSkill();
    void ShoulderBoneRotation(RpClump* clump);
    void SetLookTimer(unsigned int time);
    bool IsPlayer();
    void SetPedPositionInCar();
    void RestoreHeadingRate();
    static void RestoreHeadingRateCB(CAnimBlendAssociation* association, void* data);
    void SetRadioStation();
    void PositionAttachedPed();
    void Undress(char* modelName);
    void Dress();
    bool IsAlive();
    // dummy function
    void UpdateStatEnteringVehicle();
    // dummy function
    void UpdateStatLeavingVehicle();
    void GetTransformedBonePosition(RwV3d& inOffsetOutPosn, unsigned int boneId, bool updateSkinBones);
    void ReleaseCoverPoint();
    CTask* GetHoldingTask();
    CEntity* GetEntityThatThisPedIsHolding();
    void DropEntityThatThisPedIsHolding(unsigned char arg0);
    bool CanThrowEntityThatThisPedIsHolding();
    bool IsPlayingHandSignal();
    void StopPlayingHandSignal();
    float GetWalkAnimSpeed();
    void SetPedDefaultDecisionMaker();
    // limitAngle in radians
    bool CanSeeEntity(CEntity* entity, float limitAngle);
    bool PositionPedOutOfCollision(int arg0, CVehicle* arg1, bool arg2);
    bool PositionAnyPedOutOfCollision();
    bool OurPedCanSeeThisEntity(CEntity* entity, bool isSpotted);
    void SortPeds(CPed** pedList, int arg1, int arg2);
    void ClearLookFlag();
    float WorkOutHeadingForMovingFirstPerson(float heading);
    void UpdatePosition();
    void ProcessBuoyancy();
    bool IsPedInControl();
    void RemoveWeaponModel(int modelIndex);
    void AddGogglesModel(int modelIndex, bool* pGogglesType);
    void PutOnGoggles();
    char GetWeaponSkill(eWeaponType weaponType);
    void SetWeaponSkill(eWeaponType weaponType, char skill);
    void ClearLook();
    bool TurnBody();
    bool IsPointerValid();
    void GetBonePosition(RwV3d& outPosition, unsigned int boneId, bool updateSkinBones);
    CObject* GiveObjectToPedToHold(int modelIndex, unsigned char replace);
    void SetPedState(ePedState pedState);
    //1 = default, 2 = scm/mission script
    void SetCharCreatedBy(unsigned char createdBy);
    void CalculateNewVelocity();
    void CalculateNewOrientation();
    void ClearAll();
    void DoFootLanded(bool leftFoot, unsigned char arg1);
    void PlayFootSteps();
    void AddWeaponModel(int modelIndex);
    void TakeOffGoggles();
    void GiveWeapon(eWeaponType weaponType, unsigned int ammo, bool likeUnused);
    void SetCurrentWeapon(int slot);
    void SetCurrentWeapon(eWeaponType weaponType);
    void ClearWeapon(eWeaponType weaponType);
    void ClearWeapons();
    void RemoveWeaponWhenEnteringVehicle(int arg0);
    void ReplaceWeaponWhenExitingVehicle();
    void ReplaceWeaponForScriptedCutscene();
    void RemoveWeaponForScriptedCutscene();
    char GetWeaponSkill();
    void PreRenderAfterTest();
    void SetIdle();
    void SetLook(float heading);
    void SetLook(CEntity* entity);
    void Look();
    CEntity* AttachPedToEntity(CEntity* entity, CVector offset, unsigned short arg2, float arg3, eWeaponType weaponType);
    CEntity* AttachPedToBike(CEntity* entity, CVector offset, unsigned short arg2, float arg3, float arg4, eWeaponType weaponType);
    void DettachPedFromEntity();
    void SetAimFlag(float heading);
    bool CanWeRunAndFireWithWeapon();
    void RequestDelayedWeapon();
    void GiveDelayedWeapon(eWeaponType weaponType, unsigned int ammo);
    void GiveWeaponAtStartOfFight();
    void GiveWeaponWhenJoiningGang();
    bool GetPedTalking();
    void DisablePedSpeech(short arg0);
    void EnablePedSpeech();
    void DisablePedSpeechForScriptSpeech(short arg0);
    void EnablePedSpeechForScriptSpeech();
    void CanPedHoldConversation();
    void SayScript(int arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3);
    void Say(unsigned short arg0, unsigned int arg1, float arg2, unsigned char arg3, unsigned char arg4, unsigned char arg5);
    void RemoveBodyPart(int boneId, char localDir);
    void SpawnFlyingComponent(int arg0, char arg1);
    bool DoesLOSBulletHitPed(CColPoint& colPoint);
    void RemoveWeaponAnims(int likeUnused, float blendDelta);
    bool IsPedHeadAbovePos(float zPos);
    void KillPedWithCar(CVehicle* car, float arg1, bool arg2);
    void MakeTyresMuddySectorList(CPtrList& ptrList);
    void DeadPedMakesTyresBloody();
    void SetModelIndex(unsigned int modelIndex);

public:
    inline CWeapon* GetWeapon() {
        return &m_aWeapons[m_nSelectedWepSlot];
    }

    static void* operator new(unsigned int size);
    static void operator delete(void* data);
};

VALIDATE_SIZE(CPed, 0x79C);

bool IsPedPointerValid(CPed* ped);
RwObject* SetPedAtomicVisibilityCB(RwObject* rwObject, void* data);
