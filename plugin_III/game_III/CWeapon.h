/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "eWeaponType.h"
#include "CAutomobile.h"

class CWeapon {
public:
    eWeaponType m_nType;
    unsigned int m_nState;
    unsigned int m_nAmmoInClip;
    unsigned int m_nTotalAmmo;
    unsigned int m_nNextShotTime;
    bool m_bAddRotOffset;
private:
    char _pad15[3];
public:

    // functions
    CWeapon(plugin::dummy_func_t) {}

    void AddGunshell(CEntity* pFiringEntity, CVector const& posn, CVector2D const& direction, float size);
    static void BlowUpExplosiveThings(CEntity* thing);
    CWeapon();
    void DoBulletImpact(CEntity* pFiringEntity, CEntity* pCollideEntity, CVector* start, CVector* end, CColPoint* colPoint, CVector2D ahead);
    static void DoDoomAiming(CEntity* pFiringEntity, CVector* start, CVector* end);
    static void DoDriveByAutoAiming(CEntity* pFiringEntity, CVector* start, CVector* end);
    static void DoTankDoomAiming(CEntity* pFiringEntity1, CEntity* pFiringEntity2, CVector* start, CVector* end);
    bool Fire(CEntity* pFiringEntity, CVector* posn);
    bool FireAreaEffect(CEntity* pFiringEntity, CVector* posn);
    bool FireFromCar(CAutomobile* car, bool look);
    bool FireInstantHit(CEntity* pFiringEntity, CVector* posn);
    bool FireInstantHitFromCar(CAutomobile* car, bool look);
    bool FireM16_1stPerson(CEntity* pFiringEntity);
    bool FireMelee(CEntity* pFiringEntity, CVector& posn);
    bool FireProjectile(CEntity* pFiringEntity, CVector* posn, float force);
    bool FireShotgun(CEntity* pFiringEntity, CVector* posn);
    bool FireSniper(CEntity* pFiringEntity);
    static void GenerateFlameThrowerParticles(CVector origin, CVector target);
    bool HasWeaponAmmoToBeUsed();
    bool HitsGround(CEntity* ped, CVector* posn, CEntity* entity);
    void Initialise(eWeaponType weaponType, int totalAmmo);
    static void InitialiseWeapons();
    bool IsType2Handed();
    bool IsTypeMelee();
    static void MakePedsJumpAtShot(CPhysical* pFiringEntity, CVector* start, CVector* end);
    static bool ProcessLineOfSight(CVector const& origin, CVector const& target, CColPoint& outColPoint, CEntity*& outEntity, eWeaponType weaponType, CEntity* entity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck);
    void Reload();
    static void ShutdownWeapons();
    void Update(int audioEntityId);
    static void UpdateWeapons();
    ~CWeapon();
};

VALIDATE_SIZE(CWeapon, 0x18);

void FireOneInstantHitRound(CVector* start, CVector* end, int damage);
