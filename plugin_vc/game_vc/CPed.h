/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "RenderWare.h"
#include "CPhysical.h"
#include "CStoredCollPoly.h"
#include "CPedIK.h"
#include "CPathNode.h"
#include "CWeapon.h"

class CVehicle;

class CPed : public CPhysical {
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
        unsigned char b32 : 1;

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
        unsigned char b61 : 1;
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
    unsigned char m_nPedStatus;
private:
    char _pad161[3];
public:
    int m_dwObjective;
    int m_dwPrevObjective;
    CEntity *m_pObjectiveEntity;
    CVehicle *m_pObjectiveVehicle;
    CVector m_vecObjective;
    float m_fObjectiveAngle;
    CPed *m_pGangLeader;
    int m_dwPedFormation;
    unsigned int m_dwFearFlags;
    CEntity *m_pThreatEntity;
    float m_fEventOrThreatX;
    float m_fEventOrThreatY;
    unsigned int m_dwEventType;
    CEntity *m_pEventEntity;
    float m_fAngleToEvent;
    void *m_apFrames[18];
    RpAtomic *m_pCurWeaponAtomic;
    int m_dwAnimGroupId;
    void *m_pVehicleAnim;
    CVector2D m_vecAnimMoveDelta;
    CVector m_vecOffsetSeek;
    CPedIK m_pedIK;
    float m_fActionX;
    float m_fActionY;
    int m_dwActionTimer;
    int m_dwAction;
    int m_dwLastAction;
    int m_dwMoveState;
    int m_dwStoredActionState;
    int m_dwPrevActionState;
    int m_dwWaitState;
    int m_dwWaitTimer;
    CPathNode *m_apPathNodesStates[8];
    unsigned short m_wPathNodes;
    short m_wCurPathNode;
    CEntity *m_pPathRelEntity;
    CEntity *m_pNextNodeEntity;
    int m_dwPathNodeTimer;
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
    unsigned int m_dwPathNodeType;
    float m_fHealth;
    float m_fArmour;
    int m_dwShadowUpdateTimer;
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
    unsigned short m_nEnterType;
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
    unsigned int m_dwSeatType;
    bool m_bHasPhone;
private:
    char _pad3C5;
public:
    short m_wPhoneId;
    int m_dwLookingForPhone;
    int m_dwPhoneTalkTimer;
    void *m_pLastAccident;
    unsigned int m_dwPedType;
    void *m_pPedStats;
    float m_fFleeFromPosX;
    float m_fFleeFromPosY;
    void *m_pFleeFrom;
    int m_dwFleeTimer;
    void *m_pThreatEx;
    void *m_pLastThreatAt;
    int m_dwLastThreatTimer;
    CVehicle *m_pVehicleColliding;
    unsigned char m_nStateUnused;
private:
    char _pad3FD[3];
public:
    int m_dwTimerUnused;
    void *m_pTargetUnused;
    CWeapon m_aWeapons[10];
    int m_dwAtchStoredWep;
    int m_dwStoredGiveWep;
    int m_dwStoredGiveAmmo;
    unsigned char m_nWepSlot;
    unsigned char m_nWepSkills;
    unsigned char m_nWepAccuracy;
    unsigned char m_nBodyPart;
    CEntity *m_pPointGunAt;
    CVector m_vecHitLastPos;
    int m_dwHitCounter;
    int m_dwLastHitState;
    unsigned char m_nFightFlags1;
    unsigned char m_nFightFlags2;
    unsigned char m_nFightFlags3;
    unsigned char m_nBleedCounter;
    void *m_pPedFire; // CFire ptr
    void *m_pPedFight;
    float m_fLookDirection;
    int m_dwWepModelID;
    int m_dwLeaveCarTimer;
    int m_dwGetUpTimer;
    int m_dwLookTimer;
    int m_dwStandardTimer;
    int m_dwAttackTimer;
    int m_dwLastHitTime;
    int m_dwHitRecoverTimer;
    int m_dwObjectiveTimer;
    int m_dwDuckTimer;
    int m_dwDuckAndCoverTimer;
    int m_dwBloodyTimer;
    int m_dwShotTime;
    int m_dwShotTimeAdd;
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
    unsigned int m_dwAttachWepAmmo;
    unsigned int m_dwThreatFlags;
    int m_dwThreatCheck;
    int m_dwLastThreatCheck;
    unsigned int m_dwSayType;
    int m_dwSayTimer;
    int m_dwTalkTimerLast;
    int m_dwTalkTimer;
    short m_wTalkTypeLast;
    unsigned short m_wTalkType;
    bool m_bCanPedTalk;
private:
    char _pad5DD[3];
public:
    int m_dwPedLastComment;
    CVector m_vecSeekPosEx;
    float m_fSeekExAngle;
};

VALIDATE_SIZE(CPed, 0x5F4);