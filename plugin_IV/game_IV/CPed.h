/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPhysical.h"
#include "CIkManager.h"
#include "CPedIntelligenceNY.h"
#include "CWeapon.h"
#include "CVehicle.h"
#include "CObject.h" 
#include "CAmmoData.h"
#include "CWeaponData.h"
#include "CControl.h"

enum eDeathState : int32_t {
    DeathState_Alive = 0x0,
    DeathState_Dying = 0x1,
    DeathState_Dead = 0x2,
    DeathState_Max = 0x3,
};

enum eRagdollState {
    RAGDOLLSTATE_RUNNING = 6,
};

enum ePedFlag {
    PED_FLAG_NONE,
    PED_FLAG_BOWLING,
    PED_FLAG_POOL,
    PED_FLAG_BASKETBALL,
    PED_FLAG_DRIVESPOORCAR,
    PED_FLAG_DRIVESAVERAGECAR,
    PED_FLAG_DRIVESRICHCAR,
    PED_FLAG_DRIVESBIGCAR,
    PED_FLAG_DRIVESMOTORCYCLE,
    PED_FLAG_DRIVESBOAT,
    PED_FLAG_ONFOOT,
    PED_FLAG_ARGUE,
    PED_FLAG_SMOKER,
    PED_FLAG_PHONEUSER,
    PED_FLAG_BUYDRUGS,
    PED_FLAG_GIVEBUMMONEY,
    PED_FLAG_INSULTBUM,
    PED_FLAG_REPLYTOHO,
    PED_FLAG_TAKETAXI,
    PED_FLAG_WATCHFIGHT,
    PED_FLAG_LATE,
    PED_FLAG_SOFTJACK,
    PED_FLAG_MURDERSHAKEFIST,
    PED_FLAG_MURDERCALLPOLICE,
    PED_FLAG_MURDERRUNAWAY,
    PED_FLAG_MURDERATTACK,
    PED_FLAG_TAXIDRIVER,
    PED_FLAG_POLICEOFFICER,
    PED_FLAG_SWAT,
    PED_FLAG_FBI,
    PED_FLAG_DEA,
    PED_FLAG_CSI,
    PED_FLAG_PARAMEDIC,
    PED_FLAG_FIREMAN,
    PED_FLAG_PROSTITUTE,
    PED_FLAG_PIMP,
    PED_FLAG_BUM,
    PED_FLAG_CANCARRYWEAPONS,
    PED_FLAG_LIKESART,
    PED_FLAG_DISLIKESART,
    PED_FLAG_TOURIST,
    PED_FLAG_OFFICE,
    PED_FLAG_GARDENING,
    PED_FLAG_JEWISH,
    PED_FLAG_CRIMINAL
};

enum eRelationship {
    RELATIONSHIP_COMPANION,
    RELATIONSHIP_RESPECT,
    RELATIONSHIP_LIKE,
    RELATIONSHIP_NEUTRAL,
    RELATIONSHIP_DISLIKE,
    RELATIONSHIP_HATE
};

enum eRelationshipGroup {
    RELATIONSHIP_GROUP_PLAYER,
    RELATIONSHIP_GROUP_CIVILIAN_MALE,
    RELATIONSHIP_GROUP_CIVILIAN_FEMALE,
    RELATIONSHIP_GROUP_COP,
    RELATIONSHIP_GROUP_GANG_ALBANIAN,
    RELATIONSHIP_GROUP_GANG_BIKER1,
    RELATIONSHIP_GROUP_GANG_BIKER2,
    RELATIONSHIP_GROUP_GANG_ITALIAN,
    RELATIONSHIP_GROUP_GANG_RUSSIAN1,
    RELATIONSHIP_GROUP_GANG_RUSSIAN2,
    RELATIONSHIP_GROUP_GANG_IRISH,
    RELATIONSHIP_GROUP_GANG_JAMAICAN,
    RELATIONSHIP_GROUP_GANG_AFRICAN_AMERICAN,
    RELATIONSHIP_GROUP_GANG_KOREAN,
    RELATIONSHIP_GROUP_GANG_CHINESE_JAPANESE,
    RELATIONSHIP_GROUP_GANG_PUERTO_RICAN,
    RELATIONSHIP_GROUP_DEALER,
    RELATIONSHIP_GROUP_MEDIC,
    RELATIONSHIP_GROUP_FIREMAN,
    RELATIONSHIP_GROUP_CRIMINAL,
    RELATIONSHIP_GROUP_BUM,
    RELATIONSHIP_GROUP_PROSTITUTE,
    RELATIONSHIP_GROUP_SPECIAL,
    RELATIONSHIP_GROUP_MISSION_1,
    RELATIONSHIP_GROUP_MISSION_2,
    RELATIONSHIP_GROUP_MISSION_3,
    RELATIONSHIP_GROUP_MISSION_4,
    RELATIONSHIP_GROUP_MISSION_5,
    RELATIONSHIP_GROUP_MISSION_6,
    RELATIONSHIP_GROUP_MISSION_7,
    RELATIONSHIP_GROUP_MISSION_8,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_01,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_02,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_03,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_04,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_05,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_06,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_07,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_08,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_09,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_10,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_11,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_12,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_13,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_14,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_15,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_16,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_17,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_18,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_19,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_20,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_21,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_22,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_23,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_24,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_25,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_26,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_27,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_28,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_29,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_30,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_31,
    RELATIONSHIP_GROUP_NETWORK_PLAYER_32,
    RELATIONSHIP_GROUP_NETWORK_TEAM_1,
    RELATIONSHIP_GROUP_NETWORK_TEAM_2,
    RELATIONSHIP_GROUP_NETWORK_TEAM_3,
    RELATIONSHIP_GROUP_NETWORK_TEAM_4,
    RELATIONSHIP_GROUP_NETWORK_TEAM_5,
    RELATIONSHIP_GROUP_NETWORK_TEAM_6,
    RELATIONSHIP_GROUP_NETWORK_TEAM_7,
    RELATIONSHIP_GROUP_NETWORK_TEAM_8
};

enum ePedType {
    PED_TYPE_CIV_MALE,
    PED_TYPE_CIV_FEMALE,
    PED_TYPE_COP,
    PED_TYPE_ALBANIAN_GANG,
    PED_TYPE_ANGELS_OF_DEATH,
    PED_TYPE_THE_LOST,
    PED_TYPE_ITALIAN_MAFIA,
    PED_TYPE_RUSSIAN_MOB,
    PED_TYPE_GANG_RUSSIAN_GANG,
    PED_TYPE_GANG_IRISH_GANG,
    PED_TYPE_GANG_JAMAICAN,
    PED_TYPE_GANG_AFRICAN_AMERICAN,
    PED_TYPE_GANG_KOREAN,
    PED_TYPE_GANG_CHINESE_JAPANESE,
    PED_TYPE_GANG_PUERTO_RICAN,
    PED_TYPE_DEALER,
    PED_TYPE_PARAMEDIC,
    PED_TYPE_FIREMAN,
    PED_TYPE_CRIMINAL,
    PED_TYPE_BUM,
    PED_TYPE_PROSTITUTE
};

class CPlayerInfo;

class CPed : public CPhysical {
public:
    uint8_t m_bDead;
    uint8_t m_bInjured;
    uint8_t m_bFatallyInjured;
    uint8_t field_4;
    float m_fHealth;
    uint8_t m_nPlayerIndex;
    uint8_t m_bIsPlayer;
    uint8_t field_10[2];
    void* m_pDrawableInfo;
    uint8_t field_16[4];
    CPedIntelligenceNY* m_pPedIntelligence;
    CPlayerInfo* m_pPlayerInfo;
    uint8_t field_18[52];

    // Ped Flags 1
    uint32_t m_bPedFlags1_1 : 1;
    uint32_t m_bCanBeShotInVehicle : 1;
    uint32_t m_bNoHeadshot : 1;
    uint32_t m_bPedFlags1_3 : 1;
    uint32_t m_bPedFlags1_4 : 1;
    uint32_t m_bPedFlags1_5 : 1;
    uint32_t m_bPedFlags1_6 : 1;
    uint32_t m_bBulletproofVest : 1;
    uint32_t m_bPedFlags1_8 : 1;
    uint32_t m_bPedFlags1_9 : 1;
    uint32_t m_bPedFlags1_10 : 1;
    uint32_t m_bPedFlags1_11 : 1;
    uint32_t m_bPedFlags1_12 : 1;
    uint32_t m_bPedFlags1_13 : 1;
    uint32_t m_bDropWeaponsWhenDead : 1;
    uint32_t m_bPedFlags1_15 : 1;
    uint32_t m_bPedFlags1_16 : 1;
    uint32_t m_bPedFlags1_17 : 1;
    uint32_t m_bPedFlags1_18 : 1;
    uint32_t m_bPedFlags1_19 : 1;
    uint32_t m_bPedFlags1_20 : 1;
    uint32_t m_bBleeding : 1;
    uint32_t m_bPedFlags1_22 : 1;
    uint32_t m_bPedFlags1_23 : 1;
    uint32_t m_bAllowedToDuck : 1;
    uint32_t m_bPedFlags1_25 : 1;
    uint32_t m_bPedFlags1_26 : 1;
    uint32_t m_bPedFlags1_27 : 1;
    uint32_t m_bPedFlags1_28 : 1;
    uint32_t m_bDraggedOut : 1;
    uint32_t m_bPedFlags1_30 : 1;
    uint32_t m_bPedFlags1_31 : 1;

    // Ped Flags 2
    uint32_t m_bPedFlags2_1 : 1;
    uint32_t m_bPedFlags2_2 : 1;
    uint32_t m_bWantedByPolice : 1;
    uint32_t m_bPedFlags2_4 : 1;
    uint32_t m_bPedFlags2_5 : 1;
    uint32_t m_bPedFlags2_6 : 1;
    uint32_t m_bCanSmashGlass : 1;
    uint32_t m_bPedFlags2_8 : 1;
    uint32_t m_bPedFlags2_9 : 1;
    uint32_t m_bPedFlags2_10 : 1;
    uint32_t m_bPedFlags2_11 : 1;
    uint32_t m_bPedFlags2_12 : 1;
    uint32_t m_bPedFlags2_13 : 1;
    uint32_t m_bPedFlags2_14 : 1;
    uint32_t m_bPedFlags2_15 : 1;
    uint32_t m_bPedFlags2_16 : 1;
    uint32_t m_bPedFlags2_17 : 1;
    uint32_t m_bPedFlags2_18 : 1;
    uint32_t m_bPedFlags2_19 : 1;
    uint32_t m_bIsEnemy : 1;
    uint32_t m_bPedFlags2_21 : 1;
    uint32_t m_bWontAttackWithoutWantedLevel : 1;
    uint32_t m_bPedFlags2_23 : 1;
    uint32_t m_bPedFlags2_24 : 1;
    uint32_t m_bPedFlags2_25 : 1;
    uint32_t m_bPedFlags2_26 : 1;
    uint32_t m_bPedFlags2_27 : 1;
    uint32_t m_bPedFlags2_28 : 1;
    uint32_t m_bPedFlags2_29 : 1;
    uint32_t m_bPedFlags2_30 : 1;
    uint32_t m_bCanSwitchWeapons : 1;

    // Ped Flags 3
    uint32_t m_bPedFlags3_1 : 1;
    uint32_t m_bPedFlags3_2 : 1;
    uint32_t m_bPedFlags3_3 : 1;
    uint32_t m_bPedFlags3_4 : 1;
    uint32_t m_bPedFlags3_5 : 1;
    uint32_t m_bPedFlags3_6 : 1;
    uint32_t m_bPedFlags3_7 : 1;
    uint32_t m_bPedFlags3_8 : 1;
    uint32_t m_bPedFlags3_9 : 1;
    uint32_t m_bPedFlags3_10 : 1;
    uint32_t m_bPedFlags3_11 : 1;
    uint32_t m_bPedFlags3_12 : 1;
    uint32_t m_bPedFlags3_13 : 1;
    uint32_t m_bPedFlags3_14 : 1;
    uint32_t m_bPedFlags3_15 : 1;
    uint32_t m_bPedFlags3_16 : 1;
    uint32_t m_bPedFlags3_17 : 1;
    uint32_t m_bPedFlags3_18 : 1;
    uint32_t m_bPedFlags3_19 : 1;
    uint32_t m_bPedFlags3_20 : 1;
    uint32_t m_bPedFlags3_21 : 1;
    uint32_t m_bPedFlags3_22 : 1;
    uint32_t m_bPedFlags3_23 : 1;
    uint32_t m_bPedFlags3_24 : 1;
    uint32_t m_bPedFlags3_25 : 1;
    uint32_t m_bPedFlags3_26 : 1;
    uint32_t m_bPedFlags3_27 : 1;
    uint32_t m_bPedFlags3_28 : 1;
    uint32_t m_bPedFlags3_29 : 1;
    uint32_t m_bPedFlags3_30 : 1;
    uint32_t m_bPedFlags3_31 : 1;

    // Ped Flags 4
    uint32_t m_bPedFlags4_1 : 1;
    uint32_t m_bPedFlags4_2 : 1;
    uint32_t m_bNotInVehicle : 1;
    uint32_t m_bPedFlags4_4 : 1;
    uint32_t m_bPedFlags4_5 : 1;
    uint32_t m_bPedFlags4_6 : 1;
    uint32_t m_bPedFlags4_7 : 1;
    uint32_t m_bPedFlags4_8 : 1;
    uint32_t m_bPedFlags4_9 : 1;
    uint32_t m_bPedFlags4_10 : 1;
    uint32_t m_bPedFlags4_11 : 1;
    uint32_t m_bPedFlags4_12 : 1;
    uint32_t m_bPedFlags4_13 : 1;
    uint32_t m_bInAir : 1;
    uint32_t m_bPedFlags4_15 : 1;
    uint32_t m_bPedFlags4_16 : 1;
    uint32_t m_bPedFlags4_17 : 1;
    uint32_t m_bPedFlags4_18 : 1;
    uint32_t m_bPedFlags4_19 : 1;
    uint32_t m_bPedFlags4_20 : 1;
    uint32_t m_bPedFlags4_21 : 1;
    uint32_t m_bPedFlags4_22 : 1;
    uint32_t m_bPedFlags4_23 : 1;
    uint32_t m_bPedFlags4_24 : 1;
    uint32_t m_bPedFlags4_25 : 1;
    uint32_t m_bPedFlags4_26 : 1;
    uint32_t m_bPedFlags4_27 : 1;
    uint32_t m_bPedFlags4_28 : 1;
    uint32_t m_bPedFlags4_29 : 1;
    uint32_t m_bPedFlags4_30 : 1;
    uint32_t m_bPedFlags4_31 : 1;

    // Ped Flags 5
    uint32_t m_bPedFlags5_1 : 1;
    uint32_t m_bPedFlags5_2 : 1;
    uint32_t m_bPedFlags5_3 : 1;
    uint32_t m_bPedFlags5_4 : 1;
    uint32_t m_bPedFlags5_5 : 1;
    uint32_t m_bPedFlags5_6 : 1;
    uint32_t m_bPedFlags5_7 : 1;
    uint32_t m_bPedFlags5_8 : 1;
    uint32_t m_bPedFlags5_9 : 1;
    uint32_t m_bPedFlags5_10 : 1;
    uint32_t m_bPedFlags5_11 : 1;
    uint32_t m_bPedFlags5_12 : 1;
    uint32_t m_bPedFlags5_13 : 1;
    uint32_t m_bPedFlags5_14 : 1;
    uint32_t m_bPedFlags5_15 : 1;
    uint32_t m_bPedFlags5_16 : 1;
    uint32_t m_bPedFlags5_17 : 1;
    uint32_t m_bPedFlags5_18 : 1;
    uint32_t m_bPedFlags5_19 : 1;
    uint32_t m_bNoRagdollFromImpact : 1;
    uint32_t m_bPedFlags5_21 : 1;
    uint32_t m_bPedFlags5_22 : 1;
    uint32_t m_bPedFlags5_23 : 1;
    uint32_t m_bLoadCover : 1;
    uint32_t m_bFleeWhilstDrivingVehicle : 1;
    uint32_t m_bPedFlags5_26 : 1;
    uint32_t m_bPedFlags5_27 : 1;
    uint32_t m_bPedFlags5_28 : 1;
    uint32_t m_bPedFlags5_29 : 1;
    uint32_t m_bPedFlags5_30 : 1;
    uint32_t m_bPedFlags5_31 : 1;

    // Ped Flags 6
    uint8_t m_bPedFlags6_1 : 1;
    uint8_t m_bPedFlags6_2 : 1;
    uint8_t m_bPedFlags6_3 : 1;
    uint8_t m_bPedFlags6_4 : 1;
    uint8_t m_bPedFlags6_5 : 1;
    uint8_t m_bKilledByHeadshot : 1;
    uint8_t m_bSteerAroundPeds : 1;
    uint8_t m_bSteerAroundObject : 1;

    uint8_t field_77[3];
    float m_fClimbAnimRate;
    uint8_t field_32[32];

    // IK Flags
    uint32_t m_bIkFlags_1 : 1;
    uint32_t m_bIkFlags_2 : 1;
    uint32_t m_bIkFlags_3 : 1;
    uint32_t m_bIkFlags_4 : 1;
    uint32_t m_bIkFlags_5 : 1;
    uint32_t m_bIkFlags_6 : 1;
    uint32_t m_bIkFlags_7 : 1;
    uint32_t m_bIkFlags_8 : 1;
    uint32_t m_bIkFlags_9 : 1;
    uint32_t m_bStuckUnderCar : 1;
    uint32_t m_bIkFlags_11 : 1;
    uint32_t m_bIkFlags_12 : 1;
    uint32_t m_bIkFlags_13 : 1;
    uint32_t m_bIkFlags_14 : 1;
    uint32_t m_bIkFlags_15 : 1;
    uint32_t m_bIkFlags_16 : 1;
    uint32_t m_bIkFlags_17 : 1;
    uint32_t m_bIkFlags_18 : 1;
    uint32_t m_bIkFlags_19 : 1;
    uint32_t m_bIkFlags_20 : 1;
    uint32_t m_bBlockCharHead : 1;
    uint32_t m_bIkFlags_22 : 1;
    uint32_t m_bIkFlags_23 : 1;
    uint32_t m_bIkFlags_24 : 1;
    uint32_t m_bIkFlags_25 : 1;
    uint32_t m_bIkFlags_26 : 1;
    uint32_t m_bIsShooting : 1;
    uint32_t m_bIkFlags_28 : 1;
    uint32_t m_bIkFlags_29 : 1;
    uint32_t m_bIkFlags_30 : 1;
    uint32_t m_bIkFlags_31 : 1;

    int32_t field_38;
    int32_t field_42;
    int32_t field_46;
    int32_t field_50;
    CWeaponData m_WeaponData;
    uint8_t field_56[55];
    uint8_t field_156[155];
    CEntity* m_pStandingOnEntity;
    uint8_t field_204[404];
    uint32_t m_nVoiceHash;
    uint8_t field_208[336];
    uint8_t m_bIsDrunk;
    uint8_t field_210[70];
    uint32_t m_nRagdollState;
    uint32_t m_nRagdollTime;
    uint8_t field_216[16];
    uint8_t field_233[33];
    uint8_t m_nWeaponObjectVisible;
    uint8_t field_332[622];
    uint32_t m_nPedType;
    uint8_t field_338[10];
    uint8_t m_bHasBeenArrested;
    uint32_t field_350;
    eDeathState m_nDeathState;
    int32_t m_nLastDamageBone;
    uint8_t field_360[6];
    float m_fMaxHealth;
    uint8_t field_370[6];
    void* m_pPedMoveBlendOnFoot;
    uint8_t field_378[12];
    float m_fCurrentHeading;
    float m_fDesiredHeading;
    uint8_t field_388[14];
    uint8_t field_394[112];
    float m_fMaxTimeInWater;
    float m_fMaxTimeUnderwater;
    CVehicle* m_pVehicle;
    uint8_t field_402[16];
    uint8_t field_404[64];
    float m_fArmour;
    uint32_t m_nMoney;
    uint8_t field_414[84];
    uint32_t m_nLegIK;
    uint8_t field_422[328];
    uint32_t m_nCellphoneRingTime;
    int8_t m_nCellphoneState;
    uint8_t field_450[20];
    float m_fHeadingLimitForAttachedPed;
    float m_fHeadingLimitForAttachedPed2;
    uint8_t field_788[188];
    float m_fWindyClothingScale;
    uint8_t field_800[116];
    uint8_t field_819[19];
    uint8_t m_bIsCop;
    uint8_t field_832[13];
    void* m_pComponentModels;
    uint8_t field_840[84];

public:
    bool CanSeePed(CPed* ped, bool spotted);
    void SetLastDamageEntity(CEntity* e);
    void SetDuck(bool on, int32_t time);
    void SetMoney(int32_t money);
    void SetArmour(float armour);
    void WarpIntoVehicle(CVehicle* veh, bool arg1);
    void RemoveHelmet(bool arg1);
    bool CanStartMission();
    void SetRelationship(int32_t level, int32_t group);
    CControl* GetControlFromPlayer();

public:
    static CVehicle* GetVehiclePedWouldEnter(CPed* ped, rage::Vector3 const& pos, bool arg2);
    static bool IsPedDead(CPed* ped);
};

VALIDATE_SIZE(CPed, 0xF00);
