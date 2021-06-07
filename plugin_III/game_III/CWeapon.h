/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "eWeaponType.h"
#include "CEntity.h"
#include "CVector.h"
#include "CVector2D.h"
#include "CColPoint.h"
#include "CPhysical.h"
class CAutomobile;

enum PLUGIN_API eWeaponState : unsigned int {
    WEAPONSTATE_READY = 0,
    WEAPONSTATE_FIRING = 1,
    WEAPONSTATE_RELOADING = 2,
    WEAPONSTATE_OUT_OF_AMMO = 3,
    WEAPONSTATE_MELEE_MADECONTACT = 4
};

class PLUGIN_API CWeapon {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CWeapon)

public:
    eWeaponType m_eWeaponType;
    eWeaponState m_eWeaponState;
    int m_nAmmoInClip;
    int m_nAmmoTotal;
    unsigned int m_nTimer;
    bool m_bAddRotOffset;

    SUPPORTED_10EN_11EN_STEAM void AddGunshell(CEntity *shooter, CVector const &source, CVector2D const &direction, float size);
    SUPPORTED_10EN_11EN_STEAM void DoBulletImpact(CEntity *shooter, CEntity *victim, CVector *source, CVector *target, CColPoint *colPoint, CVector2D ahead);
    SUPPORTED_10EN_11EN_STEAM bool Fire(CEntity *shooter, CVector *fireSource);
    SUPPORTED_10EN_11EN_STEAM bool FireAreaEffect(CEntity *shooter, CVector *fireSource);
    SUPPORTED_10EN_11EN_STEAM bool FireFromCar(CAutomobile *shooter, bool left);
    SUPPORTED_10EN_11EN_STEAM bool FireInstantHit(CEntity *shooter, CVector *fireSource);
    SUPPORTED_10EN_11EN_STEAM bool FireInstantHitFromCar(CAutomobile *shooter, bool left);
    SUPPORTED_10EN_11EN_STEAM bool FireM16_1stPerson(CEntity *shooter);
    SUPPORTED_10EN_11EN_STEAM bool FireMelee(CEntity *shooter, CVector &fireSource);
    SUPPORTED_10EN_11EN_STEAM bool FireProjectile(CEntity *shooter, CVector *fireSource, float power);
    SUPPORTED_10EN_11EN_STEAM bool FireShotgun(CEntity *shooter, CVector *fireSource);
    SUPPORTED_10EN_11EN_STEAM bool FireSniper(CEntity *shooter);
    SUPPORTED_10EN_11EN_STEAM bool HasWeaponAmmoToBeUsed();
    SUPPORTED_10EN_11EN_STEAM bool HitsGround(CEntity *holder, CVector *fireSource, CEntity *aimingTo);
    SUPPORTED_10EN_11EN_STEAM void Initialise(eWeaponType type, int ammo);
    SUPPORTED_10EN_11EN_STEAM bool IsType2Handed();
    SUPPORTED_10EN_11EN_STEAM bool IsTypeMelee();
    SUPPORTED_10EN_11EN_STEAM void Reload();
    SUPPORTED_10EN_11EN_STEAM void Update(int audioEntity);

    SUPPORTED_10EN_11EN_STEAM static void BlowUpExplosiveThings(CEntity *thing);
    SUPPORTED_10EN_11EN_STEAM static void DoDoomAiming(CEntity *shooter, CVector *source, CVector *target);
    SUPPORTED_10EN_11EN_STEAM static void DoDriveByAutoAiming(CEntity *shooter, CVector *source, CVector *target);
    SUPPORTED_10EN_11EN_STEAM static void DoTankDoomAiming(CEntity *shooter, CEntity *driver, CVector *source, CVector *target);
    SUPPORTED_10EN_11EN_STEAM static void GenerateFlameThrowerParticles(CVector pos, CVector dir);
    SUPPORTED_10EN_11EN_STEAM static void InitialiseWeapons();
    SUPPORTED_10EN_11EN_STEAM static void MakePedsJumpAtShot(CPhysical *shooter, CVector *source, CVector *target);
    SUPPORTED_10EN_11EN_STEAM static bool ProcessLineOfSight(CVector const &origin, CVector const &target, CColPoint &point, CEntity **outEntity, eWeaponType type, CEntity *entity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck);
    SUPPORTED_10EN_11EN_STEAM static void ShutdownWeapons();
    SUPPORTED_10EN_11EN_STEAM static void UpdateWeapons();
};

SUPPORTED_10EN_11EN_STEAM void FireOneInstantHitRound(CVector *source, CVector *target, int damage);

VALIDATE_SIZE(CWeapon, 0x18);

#include "meta/meta.CWeapon.h"
