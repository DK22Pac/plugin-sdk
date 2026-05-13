/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"

enum eDamageType {
	DAMAGETYPE_NONE,
	DAMAGETYPE_MELEE,
	DAMAGETYPE_BULLET,
	DAMAGETYPE_EXPLOSIVE,
	DAMAGETYPE_FIRE,
	DAMAGETYPE_COLLISION,
	DAMAGETYPE_FALL,
	DAMAGETYPE_DROWN,
	DAMAGETYPE_UNKNOWN,
};

enum eWeaponFire {
	WEAPONFIRE_WEAPONFIRE_MELEE,
	WEAPONFIRE_INSTANT_HIT,
	WEAPONFIRE_DELAYED_HIT,
	WEAPONFIRE_PROJECTILE,
	WEAPONFIRE_AREA_EFFECT,
	WEAPONFIRE_CAMERA,
	WEAPONFIRE_USE,
	WEAPONFIRE_UNKNOWN,
};

enum eWeaponSlot {
	WEAPONSLOT_UNARMED,
	WEAPONSLOT_MELEE,
	WEAPONSLOT_HANDGUN,
	WEAPONSLOT_SHOTGUN,
	WEAPONSLOT_SMG,
	WEAPONSLOT_RIFLE,
	WEAPONSLOT_SNIPER,
	WEAPONSLOT_HEAVY,
	WEAPONSLOT_THROWN,
	WEAPONSLOT_SPECIAL,
	WEAPONSLOT_GIFT,
	WEAPONSLOT_PARACHUTE,
	WEAPONSLOT_DETONATOR,
};

enum eWeaponType : uint32_t {
	WEAPONTYPE_UNARMED,
	WEAPONTYPE_BASEBALLBAT,
	WEAPONTYPE_POOLCUE,
	WEAPONTYPE_KNIFE,
	WEAPONTYPE_GRENADE,
	WEAPONTYPE_MOLOTOV,
	WEAPONTYPE_ROCKET,
	WEAPONTYPE_PISTOL,
	WEAPONTYPE_UNUSED0,
	WEAPONTYPE_DEAGLE,
	WEAPONTYPE_SHOTGUN,
	WEAPONTYPE_BERETTA,
	WEAPONTYPE_MICRO_UZI,
	WEAPONTYPE_MP5,
	WEAPONTYPE_AK47,
	WEAPONTYPE_M4,
	WEAPONTYPE_SNIPERRIFLE,
	WEAPONTYPE_M40A1,
	WEAPONTYPE_RLAUNCHER,
	WEAPONTYPE_FTHROWER,
	WEAPONTYPE_MINIGUN,
	WEAPONTYPE_GRENADE_LAUNCHER,  // EPISODIC_1
	WEAPONTYPE_ASSAULT_SHOTGUN,   // EPISODIC_2
	WEAPONTYPE_UNUSED_3,          // EPISODIC_3
	WEAPONTYPE_BROKEN_POOL_CUE,   // EPISODIC_4
	WEAPONTYPE_GRENADE_LAUNCHER_GRENADE, // EPISODIC_5
	WEAPONTYPE_SAWN_OFF_SHOTGUN,  // EPISODIC_6
	WEAPONTYPE_AUTOMATIC_PISTOL,  // EPISODIC_7
	WEAPONTYPE_PIPE_BOMB,         // EPISODIC_8
	WEAPONTYPE_PISTOL_44,         // EPISODIC_9
	WEAPONTYPE_AA12,              // EPISODIC_10
	WEAPONTYPE_AA12_EXPLOSIVE_SHELLS,    // EPISODIC_11
	WEAPONTYPE_P90,               // EPISODIC_12
	WEAPONTYPE_GOLDEN_UZI,        // EPISODIC_13
	WEAPONTYPE_M249,              // EPISODIC_14
	WEAPONTYPE_ADVANCED_SNIPER,   // EPISODIC_15
	WEAPONTYPE_STICKY_BOMB,       // EPISODIC_16
	WEAPONTYPE_BUZZARD_ROCKET_LAUNCHER,  // EPISODIC_17
	WEAPONTYPE_BUZZARD_ROCKET_LAUNCHER_ROCKETS,  // EPISODIC_18
	WEAPONTYPE_BUZZARD_MINIGUN,   // EPISODIC_19
	WEAPONTYPE_PARACHUTE,         // EPISODIC_20
	WEAPONTYPE_UNUSED_21,         // EPISODIC_21
	WEAPONTYPE_UNUSED_22,         // EPISODIC_22
	WEAPONTYPE_UNUSED_23,         // EPISODIC_23
	WEAPONTYPE_UNUSED_24,         // EPISODIC_24
	WEAPONTYPE_CAMERA,
	WEAPONTYPE_OBJECT,
	WEAPONTYPE_WEAPONTYPE_LAST_WEAPONTYPE,
	WEAPONTYPE_ARMOUR,
	WEAPONTYPE_RAMMEDBYCAR,
	WEAPONTYPE_RUNOVERBYCAR,
	WEAPONTYPE_EXPLOSION,
	WEAPONTYPE_UZI_DRIVEBY,
	WEAPONTYPE_DROWNING,
	WEAPONTYPE_FALL,
	WEAPONTYPE_UNIDENTIFIED,
	WEAPONTYPE_ANYMELEE,
	WEAPONTYPE_ANYWEAPON,
	NUM_WEAPONTYPES,
};

class CWeaponInfo {
public:
	uint32_t m_nWeaponType;
	int32_t m_nSlot;
	int32_t m_nWeaponFire;
	int32_t m_nDamageType;
	int32_t m_nGroup;
	float m_fTargetRange;
	float m_fWeaponRange;
	int32_t m_nStatType;

	uint32_t m_bCanAim : 1;
	uint32_t m_bCanAimWithArm : 1;
	uint32_t m_bCanFreeAim : 1;
	uint32_t m_b1stPerson : 1;
	uint32_t m_bKeepCameraBehind : 1;
	uint32_t m_bGun : 1;
	uint32_t m_bThrown : 1;
	uint32_t m_bHeavy : 1;
	uint32_t m_bSilenced : 1;
	uint32_t m_bMeleeClub : 1;
	uint32_t m_bMeleeBlade : 1;
	uint32_t m_bArmourPenetrating : 1;
	uint32_t m_b2Handed : 1;
	uint32_t m_bTreatAs2HandedIncover : 1;
	uint32_t m_bAnimReload : 1;
	uint32_t m_bAnimCrouchFire : 1;
	uint32_t m_bCreateVisibleOrdnance : 1;
	uint32_t m_bExplosionBasedOnImpact : 1;
	uint32_t m_bAddSmokeOnExplosion : 1;
	uint32_t m_bInstantKillInMP : 1;
	uint32_t m_bHigherBreakForce : 1;
	uint32_t m_bCanBeUsedAsDriveBy : 1;
	uint32_t m_bHeavyWeaponUsesRifleAnims : 1;
	uint32_t m_bMissionCanForceDriveByUse : 1;
	uint32_t m_bDontRumbleWhenDoingDriveBy : 1;

	int32_t m_nModelHash;
	int32_t m_nAnimGroup;
	float m_fFireRate;
	float m_fBlindFireRate;
	float m_fAccuracy;
	float m_fAccuracy1stPerson;
	int32_t field_128;
	rage::Vector3 m_vFireOffset;
	int32_t field_132;
	rage::Vector3 m_vCrouchOffset;
	int32_t field_142;
	int32_t field_146;
	float m_fReticuleStanding; 
	float m_fReticuleDucked;
	float m_fReticuleScale;
	int32_t m_nRumbleDuration;
	float m_fRumbleIntensity; 
	int32_t m_nPickupSpawnTime;
	int32_t field_172;
	int16_t m_nPickupAmmoOnStreet; 
	int16_t m_nDamage;
	int16_t m_nDamage1stPerson;
	int16_t m_nClipSize; 
	int32_t m_nMaxAmmo;
	int32_t m_nTimeBetweenShots;
	float m_fPhysicsForce;
	int32_t m_nReloadTimeNormal;
	int32_t m_nReloadTimeFast;
	int32_t m_nReloadTimeCrouch;
	int32_t m_nProjectileType;
	int32_t m_nProjectileFuseTime; 
	int32_t m_nProjectileToCreate; 
	int32_t m_nProjectilExplosionType; 
	rage::Vector3 m_vProjectileOffset;
	int32_t field_202;
	rage::Vector3 m_vProjectileRot;
	int32_t field_208;
	float m_fProjectilePhysicsExplodeImpactThreshold;
	float m_fProjectilePhysicsExplodeImpactWithVehicleThreshold; 
	float m_fProjectilePhysicsVehicleVelocity;
	int m_nMeleeAnim;
	int32_t field_222; 
	int32_t m_nMuzzlefx; 
	int32_t m_nShellfx; 
	int32_t m_nProjectileTrailFx;
	float m_fNetworkPlayerMod; 
	float m_fNetworkPedMod; 
	float m_fAimingAccuracyTime;
	int32_t m_nAimingPellets;
	int32_t m_nShotsFired;
	int32_t field_244; 
	int32_t field_248;
	int32_t field_252;

public:
	static void LoadWeaponData(const char* file);

	static CWeaponInfo* GetWeaponInfo(uint32_t weaponType);

};
VALIDATE_OFFSET(CWeaponInfo, m_nWeaponType, 0x0);
VALIDATE_OFFSET(CWeaponInfo, m_nSlot, 0x4);
VALIDATE_OFFSET(CWeaponInfo, m_nWeaponFire, 0x8);
VALIDATE_OFFSET(CWeaponInfo, m_nDamageType, 0xC);
VALIDATE_OFFSET(CWeaponInfo, m_nGroup, 0x10);
VALIDATE_OFFSET(CWeaponInfo, m_fTargetRange, 0x14);
VALIDATE_OFFSET(CWeaponInfo, m_fWeaponRange, 0x18);
VALIDATE_OFFSET(CWeaponInfo, m_nStatType, 0x1C);
VALIDATE_OFFSET(CWeaponInfo, m_nModelHash, 0x24);
VALIDATE_OFFSET(CWeaponInfo, m_nAnimGroup, 0x28);
VALIDATE_OFFSET(CWeaponInfo, m_fFireRate, 0x2C);
VALIDATE_OFFSET(CWeaponInfo, m_fBlindFireRate, 0x30);
VALIDATE_OFFSET(CWeaponInfo, m_fAccuracy, 0x34);
VALIDATE_OFFSET(CWeaponInfo, m_fAccuracy1stPerson, 0x38);
VALIDATE_OFFSET(CWeaponInfo, field_128, 0x3C);
VALIDATE_OFFSET(CWeaponInfo, m_vFireOffset, 0x40);
VALIDATE_OFFSET(CWeaponInfo, field_132, 0x4C);
VALIDATE_OFFSET(CWeaponInfo, m_vCrouchOffset, 0x50);
VALIDATE_OFFSET(CWeaponInfo, field_142, 0x5C);
VALIDATE_OFFSET(CWeaponInfo, field_146, 0x60);
VALIDATE_OFFSET(CWeaponInfo, m_fReticuleStanding, 0x64);
VALIDATE_OFFSET(CWeaponInfo, m_fReticuleDucked, 0x68);
VALIDATE_OFFSET(CWeaponInfo, m_fReticuleScale, 0x6C);
VALIDATE_OFFSET(CWeaponInfo, m_nRumbleDuration, 0x70);
VALIDATE_OFFSET(CWeaponInfo, m_fRumbleIntensity, 0x74);
VALIDATE_OFFSET(CWeaponInfo, m_nPickupSpawnTime, 0x78);
VALIDATE_OFFSET(CWeaponInfo, field_172, 0x7C);
VALIDATE_OFFSET(CWeaponInfo, m_nPickupAmmoOnStreet, 0x80);
VALIDATE_OFFSET(CWeaponInfo, m_nDamage, 0x82);
VALIDATE_OFFSET(CWeaponInfo, m_nDamage1stPerson, 0x84);
VALIDATE_OFFSET(CWeaponInfo, m_nClipSize, 0x86);
VALIDATE_OFFSET(CWeaponInfo, m_nMaxAmmo, 0x88);
VALIDATE_OFFSET(CWeaponInfo, m_nTimeBetweenShots, 0x8C);
VALIDATE_OFFSET(CWeaponInfo, m_fPhysicsForce, 0x90);
VALIDATE_OFFSET(CWeaponInfo, m_nReloadTimeNormal, 0x94);
VALIDATE_OFFSET(CWeaponInfo, m_nReloadTimeFast, 0x98);
VALIDATE_OFFSET(CWeaponInfo, m_nReloadTimeCrouch, 0x9C);
VALIDATE_OFFSET(CWeaponInfo, m_nProjectileType, 0xA0);
VALIDATE_OFFSET(CWeaponInfo, m_nProjectileFuseTime, 0xA4);
VALIDATE_OFFSET(CWeaponInfo, m_nProjectileToCreate, 0xA8);
VALIDATE_OFFSET(CWeaponInfo, m_nProjectilExplosionType, 0xAC);
VALIDATE_OFFSET(CWeaponInfo, m_vProjectileOffset, 0xB0);
VALIDATE_OFFSET(CWeaponInfo, field_202, 0xBC);
VALIDATE_OFFSET(CWeaponInfo, m_vProjectileRot, 0xC0);
VALIDATE_OFFSET(CWeaponInfo, field_208, 0xCC);
VALIDATE_OFFSET(CWeaponInfo, m_fProjectilePhysicsExplodeImpactThreshold, 0xD0);
VALIDATE_OFFSET(CWeaponInfo, m_fProjectilePhysicsExplodeImpactWithVehicleThreshold, 0xD4);
VALIDATE_OFFSET(CWeaponInfo, m_fProjectilePhysicsVehicleVelocity, 0xD8);
VALIDATE_OFFSET(CWeaponInfo, m_nMeleeAnim, 0xDC);
VALIDATE_OFFSET(CWeaponInfo, field_222, 0xE0);
VALIDATE_OFFSET(CWeaponInfo, m_nMuzzlefx, 0xE4);
VALIDATE_OFFSET(CWeaponInfo, m_nShellfx, 0xE8);
VALIDATE_OFFSET(CWeaponInfo, m_nProjectileTrailFx, 0xEC);
VALIDATE_OFFSET(CWeaponInfo, m_fNetworkPlayerMod, 0xF0);
VALIDATE_OFFSET(CWeaponInfo, m_fNetworkPedMod, 0xF4);
VALIDATE_OFFSET(CWeaponInfo, m_fAimingAccuracyTime, 0xF8);
VALIDATE_OFFSET(CWeaponInfo, m_nAimingPellets, 0xFC);
VALIDATE_OFFSET(CWeaponInfo, m_nShotsFired, 0x100);
VALIDATE_OFFSET(CWeaponInfo, field_244, 0x104);
VALIDATE_OFFSET(CWeaponInfo, field_248, 0x108);
VALIDATE_OFFSET(CWeaponInfo, field_252, 0x10C);
VALIDATE_SIZE(CWeaponInfo, 0x110);

extern CWeaponInfo* aWeaponInfo;
