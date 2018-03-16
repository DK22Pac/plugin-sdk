/*
Plugin-SDK (Grand Theft Auto Vice City) header file
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


enum eWeaponState : unsigned int
{
    WEAPONSTATE_READY,
    WEAPONSTATE_FIRING,
    WEAPONSTATE_RELOADING,
    WEAPONSTATE_OUT_OF_AMMO
};

class CPed;
class CPhysical;
class CVehicle;

class CWeapon {
public:
    eWeaponType m_nType;
    eWeaponState m_nState;
    unsigned int m_nAmmoInClip;
    unsigned int m_nTotalAmmo;
    unsigned int m_nNextShotTime;
    bool m_bAddRotOffset;
private:
    char _pad15[3];
public:

	// variables
	static bool& bPhotographHasBeenTaken;		// Bool CWeapon::bPhotographHasBeenTaken

	// functions
    CWeapon();
	CWeapon(eWeaponType type, int nAmmoTotal);
    CWeapon(plugin::dummy_func_t) {}

	static void InitialiseWeapons();
	static void ShutdownWeapons();
	static void UpdateWeapons();
	void Initialise(eWeaponType type, int nAmmoTotal);
	void Shutdown();
	bool Fire(CEntity* pFiringEntity, CVector* vecSourcePos);
	bool FireFromCar(CVehicle* pFiringVehicle, bool bLookLeft, bool bLookRight);
	bool FireMelee(CEntity* pFiringEntity, CVector& veSourcePos);
	bool FireInstantHit(CEntity* pFiringEntity, CVector* veSourcePos);
	static void AddGunFlashBigGuns(CVector vecStart, CVector vecEnd);
	void AddGunshell(CEntity* pFiringEntity, CVector const& veSourcePos, CVector2D const& vecDirection, float fSize);
	void DoBulletImpact(CEntity* pFiringEntity, CEntity* pCollideEntity, CVector* vecStart, CVector* vecEnd, CColPoint* pColPoint, CVector2D vecAhead);
	bool FireShotgun(CEntity* pFiringEntity, CVector* vecSourcePos);
	bool FireProjectile(CEntity* pFiringEntity, CVector* vecSourcePos, float fForce);
	bool FireAreaEffect(CEntity* pFiringEntity, CVector* vecSourcePos);
	bool LaserScopeDot(CVector* vecPos, float* fDist);
	bool FireSniper(CEntity* pFiringEntity);
	bool TakePhotograph(CEntity* pFiringEntity);
	bool FireM16_1stPerson(CEntity* pFiringEntity);
	bool FireInstantHitFromCar(CVehicle* pFiringVehicle, bool bLookLeft, bool bLookRight);
	static void DoDoomAiming(CEntity* pFiringEntity, CVector* vecStart, CVector* vecEnd);
	static void DoTankDoomAiming(CEntity* pFiringEntity1, CEntity* pFiringEntity2, CVector* vecStart, CVector* vecEnd);
	static void DoDriveByAutoAiming(CEntity* pFiringEntity, CVehicle* pFiringVehicle, CVector* vecStart, CVector* vecEnd);
	void Reload();
	void Update(int nAudioEntityId, CPed* pPed);
	bool IsTypeMelee();
	bool IsType2Handed();
	static void MakePedsJumpAtShot(CPhysical* pFiringEntity, CVector* vecStart, CVector* vecEnd);
	static void BlowUpExplosiveThings(CEntity* Thing);
	bool HasWeaponAmmoToBeUsed();
	static void CheckForShootingVehicleOccupant(CEntity** pCollideEntity, CColPoint* pColPoint, eWeaponType type, CVector const& vecStart, CVector const& vecEnd);
};

void FireOneInstantHitRound(CVector* vecStart, CVector* vecEnd, int nDamage);

VALIDATE_SIZE(CWeapon, 0x18);