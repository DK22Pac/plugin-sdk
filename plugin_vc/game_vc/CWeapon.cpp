/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CWeapon.h"

// variables
// Converted from Bool CWeapon::bPhotographHasBeenTaken 0xA10AF4
bool& CWeapon::bPhotographHasBeenTaken = *(bool*)0xA10AF4;

// functions

CWeapon::CWeapon()
{
    ((void(__thiscall *)(CWeapon*))0x50EFA0)(this);
}

// Converted from void __thiscall CWeapon::CWeapon(eWeaponType type, int nAmmoTotal) 0x5D4E20
CWeapon::CWeapon(eWeaponType type, int nAmmoTotal)
{
	((void (__thiscall *)(CWeapon*, eWeaponType, int))0x5D4E20)(this, type, nAmmoTotal);
}

// Converted from static void __cdecl CWeapon::InitialiseWeapons(void) 0x5D4DF0
void CWeapon::InitialiseWeapons()
{
	((void (__cdecl *)())0x5D4DF0)();
}

// Converted from static void __cdecl CWeapon::ShutdownWeapons(void) 0x5D4DD0
void CWeapon::ShutdownWeapons()
{
	((void (__cdecl *)())0x5D4DD0)();
}

// Converted from static void __cdecl CWeapon::UpdateWeapons(void) 0x5D4DB0
void CWeapon::UpdateWeapons()
{
	((void (__cdecl *)())0x5D4DB0)();
}

// Converted from void __thiscall CWeapon::Initialise(eWeaponType type, int nAmmoTotal) 0x5D4D00
void CWeapon::Initialise(eWeaponType type, int nAmmoTotal)
{
	((void (__thiscall *)(CWeapon*, eWeaponType, int))0x5D4D00)(this, type, nAmmoTotal);
}

// Converted from void __thiscall CWeapon::Shutdown(void) 0x5D4C90
void CWeapon::Shutdown()
{
	((void (__thiscall *)(CWeapon*))0x5D4C90)(this);
}

// Converted from bool __thiscall CWeapon::Fire(CEntity *pFiringEntity, CVector *vecSourcePos) 0x5D45E0
bool CWeapon::Fire(CEntity* pFiringEntity, CVector* vecSourcePos)
{
	return ((bool (__thiscall *)(CWeapon*, CEntity*, CVector*))0x5D45E0)(this, pFiringEntity, vecSourcePos);
}

// Converted from bool __thiscall CWeapon::FireFromCar(CVehicle *pFiringVehicle, bool bLookLeft, bool bLookRight) 0x5D44E0
bool CWeapon::FireFromCar(CVehicle* pFiringVehicle, bool bLookLeft, bool bLookRight)
{
	return ((bool (__thiscall *)(CWeapon*, CVehicle*, bool, bool))0x5D44E0)(this, pFiringVehicle, bLookLeft, bLookRight);
}

// Converted from bool __thiscall CWeapon::FireMelee(CEntity *pFiringEntity, CVector &veSourcePos) 0x5D2CE0
bool CWeapon::FireMelee(CEntity* pFiringEntity, CVector& veSourcePos)
{
	return ((bool (__thiscall *)(CWeapon*, CEntity*, CVector&))0x5D2CE0)(this, pFiringEntity, veSourcePos);
}

// Converted from bool __thiscall CWeapon::FireInstantHit(CEntity *pFiringEntity, CVector *veSourcePos) 0x5D1140
bool CWeapon::FireInstantHit(CEntity* pFiringEntity, CVector* veSourcePos)
{
	return ((bool (__thiscall *)(CWeapon*, CEntity*, CVector*))0x5D1140)(this, pFiringEntity, veSourcePos);
}

// Converted from static void __cdecl CWeapon::AddGunFlashBigGuns(CVector vecStart,CVector vecEnd) 0x5D0740
void CWeapon::AddGunFlashBigGuns(CVector vecStart, CVector vecEnd)
{
	((void (__cdecl *)(CVector, CVector))0x5D0740)(vecStart, vecEnd);
}

// Converted from void __thiscall CWeapon::AddGunshell(CEntity *pFiringEntity, CVector const& veSourcePos, CVector2D const& vecDirection, float fSize) 0x5D0560
void CWeapon::AddGunshell(CEntity* pFiringEntity, CVector const& veSourcePos, CVector2D const& vecDirection, float fSize)
{
	((void (__thiscall *)(CWeapon*, CEntity*, CVector const&, CVector2D const&, float))0x5D0560)(this, pFiringEntity, veSourcePos, vecDirection, fSize);
}

// Converted from void __thiscall CWeapon::DoBulletImpact(CEntity *pFiringEntity, CEntity *pCollideEntity, CVector *vecStart, CVector *vecEnd, CColPoint *pColPoint, CVector2D vecAhead) 0x5CEE60
void CWeapon::DoBulletImpact(CEntity* pFiringEntity, CEntity* pCollideEntity, CVector* vecStart, CVector* vecEnd, CColPoint* pColPoint, CVector2D vecAhead)
{
	((void (__thiscall *)(CWeapon*, CEntity*, CEntity*, CVector*, CVector*, CColPoint*, CVector2D))0x5CEE60)(this, pFiringEntity, pCollideEntity, vecStart, vecEnd, pColPoint, vecAhead);
}

// Converted from bool __thiscall CWeapon::FireShotgun(CEntity *pFiringEntity, CVector *vecSourcePos) 0x5CD340
bool CWeapon::FireShotgun(CEntity* pFiringEntity, CVector* vecSourcePos)
{
	return ((bool (__thiscall *)(CWeapon*, CEntity*, CVector*))0x5CD340)(this, pFiringEntity, vecSourcePos);
}

// Converted from bool __thiscall CWeapon::FireProjectile(CEntity *pFiringEntity, CVector *vecSourcePos, float fForce) 0x5CCF90
bool CWeapon::FireProjectile(CEntity* pFiringEntity, CVector* vecSourcePos, float fForce)
{
	return ((bool (__thiscall *)(CWeapon*, CEntity*, CVector*, float))0x5CCF90)(this, pFiringEntity, vecSourcePos, fForce);
}

// Converted from bool __thiscall CWeapon::FireAreaEffect(CEntity *pFiringEntity, CVector *vecSourcePos) 0x5CCBB0
bool CWeapon::FireAreaEffect(CEntity* pFiringEntity, CVector* vecSourcePos)
{
	return ((bool (__thiscall *)(CWeapon*, CEntity*, CVector*))0x5CCBB0)(this, pFiringEntity, vecSourcePos);
}

// Converted from bool __thiscall CWeapon::LaserScopeDot(CVector *vecPos, float *fDist) 0x5CC9E0
bool CWeapon::LaserScopeDot(CVector* vecPos, float* fDist)
{
	return ((bool (__thiscall *)(CWeapon*, CVector*, float*))0x5CC9E0)(this, vecPos, fDist);
}

// Converted from bool __thiscall CWeapon::FireSniper(CEntity *pFiringEntity) 0x5CC730
bool CWeapon::FireSniper(CEntity* pFiringEntity)
{
	return ((bool (__thiscall *)(CWeapon*, CEntity*))0x5CC730)(this, pFiringEntity);
}

// Converted from bool __thiscall CWeapon::TakePhotograph(CEntity *pFiringEntity) 0x5CC450
bool CWeapon::TakePhotograph(CEntity* pFiringEntity)
{
	return ((bool (__thiscall *)(CWeapon*, CEntity*))0x5CC450)(this, pFiringEntity);
}

// Converted from bool __thiscall CWeapon::FireM16_1stPerson(CEntity *pFiringEntity) 0x5CBFF0
bool CWeapon::FireM16_1stPerson(CEntity* pFiringEntity)
{
	return ((bool (__thiscall *)(CWeapon*, CEntity*))0x5CBFF0)(this, pFiringEntity);
}

// Converted from bool __thiscall CWeapon::FireInstantHitFromCar(CVehicle *pFiringVehicle, bool bLookLeft, bool bLookRight) 0x5CB0A0
bool CWeapon::FireInstantHitFromCar(CVehicle* pFiringVehicle, bool bLookLeft, bool bLookRight)
{
	return ((bool (__thiscall *)(CWeapon*, CVehicle*, bool, bool))0x5CB0A0)(this, pFiringVehicle, bLookLeft, bLookRight);
}

// Converted from static void __cdecl CWeapon::DoDoomAiming(CEntity *pFiringEntity, CVector *vecStart, CVector *vecEnd) 0x5CAD20
void CWeapon::DoDoomAiming(CEntity* pFiringEntity, CVector* vecStart, CVector* vecEnd)
{
	((void (__cdecl *)(CEntity*, CVector*, CVector*))0x5CAD20)(pFiringEntity, vecStart, vecEnd);
}

// Converted from static void __cdecl CWeapon::DoTankDoomAiming(CEntity *pFiringEntity1, CEntity *pFiringEntity2, CVector *vecStart, CVector *vecEnd) 0x5CA8B0
void CWeapon::DoTankDoomAiming(CEntity* pFiringEntity1, CEntity* pFiringEntity2, CVector* vecStart, CVector* vecEnd)
{
	((void (__cdecl *)(CEntity*, CEntity*, CVector*, CVector*))0x5CA8B0)(pFiringEntity1, pFiringEntity2, vecStart, vecEnd);
}

// Converted from static void __cdecl CWeapon::DoDriveByAutoAiming(CEntity *pFiringEntity, CVehicle *pFiringVehicle, CVector *vecStart, CVector *vecEnd) 0x5CA400
void CWeapon::DoDriveByAutoAiming(CEntity* pFiringEntity, CVehicle* pFiringVehicle, CVector* vecStart, CVector* vecEnd)
{
	((void (__cdecl *)(CEntity*, CVehicle*, CVector*, CVector*))0x5CA400)(pFiringEntity, pFiringVehicle, vecStart, vecEnd);
}

// Converted from void __thiscall CWeapon::Reload(void) 0x5CA3C0
void CWeapon::Reload()
{
	((void (__thiscall *)(CWeapon*))0x5CA3C0)(this);
}

// Converted from void __thiscall CWeapon::Update(int nAudioEntityId, CPed *pPed) 0x5CA0B0
void CWeapon::Update(int nAudioEntityId, CPed* pPed)
{
	((void (__thiscall *)(CWeapon*, int, CPed*))0x5CA0B0)(this, nAudioEntityId, pPed);
}

// Converted from bool __thiscall CWeapon::IsTypeMelee(void) 0x5C9B90
bool CWeapon::IsTypeMelee()
{
	return ((bool (__thiscall *)(CWeapon*))0x5C9B90)(this);
}

// Converted from bool __thiscall CWeapon::IsType2Handed(void) 0x5C9B50
bool CWeapon::IsType2Handed()
{
	return ((bool (__thiscall *)(CWeapon*))0x5C9B50)(this);
}

// Converted from static void __cdecl CWeapon::MakePedsJumpAtShot(CPhysical *pFiringEntity, CVector *vecStart, CVector *vecEnd) 0x5C8C30
void CWeapon::MakePedsJumpAtShot(CPhysical* pFiringEntity, CVector* vecStart, CVector* vecEnd)
{
	((void (__cdecl *)(CPhysical*, CVector*, CVector*))0x5C8C30)(pFiringEntity, vecStart, vecEnd);
}

// Converted from static void __cdecl CWeapon::BlowUpExplosiveThings(CEntity *Thing) 0x5C8AE0
void CWeapon::BlowUpExplosiveThings(CEntity* Thing)
{
	((void (__cdecl *)(CEntity*))0x5C8AE0)(Thing);
}

// Converted from bool __thiscall CWeapon::HasWeaponAmmoToBeUsed(void) 0x5C8AB0
bool CWeapon::HasWeaponAmmoToBeUsed()
{
	return ((bool (__thiscall *)(CWeapon*))0x5C8AB0)(this);
}

// Converted from static void __cdecl CWeapon::CheckForShootingVehicleOccupant(CEntity **pCollideEntity, CColPoint *pColPoint, eWeaponType type, CVector const& vecStart, CVector const& vecEnd) 0x5C8520
void CWeapon::CheckForShootingVehicleOccupant(CEntity** pCollideEntity, CColPoint* pColPoint, eWeaponType type, CVector const& vecStart, CVector const& vecEnd)
{
	((void (__cdecl *)(CEntity**, CColPoint*, eWeaponType, CVector const&, CVector const&))0x5C8520)(pCollideEntity, pColPoint, type, vecStart, vecEnd);
}

// Converted from static void __cdecl FireOneInstantHitRound(CVector *vecStart, CVector *vecEnd, int nDamage) 0x5C9BB0
void FireOneInstantHitRound(CVector* vecStart, CVector* vecEnd, int nDamage)
{
	((void (__cdecl *)(CVector*, CVector*, int))0x5C9BB0)(vecStart, vecEnd, nDamage);
}