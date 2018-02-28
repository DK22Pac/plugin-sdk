/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CWeapon.h"

// Converted from thiscall void CWeapon::AddGunshell(CEntity *pFiringEntity,CVector const&posn,CVector2D const&direction,float size) 0x55F770
void CWeapon::AddGunshell(CEntity* pFiringEntity, CVector const& posn, CVector2D const& direction, float size) {
    plugin::CallMethod<0x55F770, CWeapon *, CEntity*, CVector const&, CVector2D const&, float>(this, pFiringEntity, posn, direction, size);
}

// Converted from cdecl void CWeapon::BlowUpExplosiveThings(CEntity *thing) 0x564A60
void CWeapon::BlowUpExplosiveThings(CEntity* thing) {
    plugin::Call<0x564A60, CEntity*>(thing);
}

// Converted from thiscall void CWeapon::CWeapon(void) 0x4C50B0
CWeapon::CWeapon() {
    plugin::CallMethod<0x4C50B0, CWeapon *>(this);
}

// Converted from thiscall void CWeapon::DoBulletImpact(CEntity *pFiringEntity,CEntity *pCollideEntity,CVector *start,CVector *end,CColPoint *colPoint,CVector2D ahead) 0x55F950
void CWeapon::DoBulletImpact(CEntity* pFiringEntity, CEntity* pCollideEntity, CVector* start, CVector* end, CColPoint* colPoint, CVector2D ahead) {
    plugin::CallMethod<0x55F950, CWeapon *, CEntity*, CEntity*, CVector*, CVector*, CColPoint*, CVector2D>(this, pFiringEntity, pCollideEntity, start, end, colPoint, ahead);
}

// Converted from cdecl void CWeapon::DoDoomAiming(CEntity *pFiringEntity,CVector *start,CVector *end) 0x562EB0
void CWeapon::DoDoomAiming(CEntity* pFiringEntity, CVector* start, CVector* end) {
    plugin::Call<0x562EB0, CEntity*, CVector*, CVector*>(pFiringEntity, start, end);
}

// Converted from cdecl void CWeapon::DoDriveByAutoAiming(CEntity *pFiringEntity,CVector *start,CVector *end) 0x563660
void CWeapon::DoDriveByAutoAiming(CEntity* pFiringEntity, CVector* start, CVector* end) {
    plugin::Call<0x563660, CEntity*, CVector*, CVector*>(pFiringEntity, start, end);
}

// Converted from cdecl void CWeapon::DoTankDoomAiming(CEntity *pFiringEntity1,CEntity *pFiringEntity2,CVector *start,CVector *end) 0x563200
void CWeapon::DoTankDoomAiming(CEntity* pFiringEntity1, CEntity* pFiringEntity2, CVector* start, CVector* end) {
    plugin::Call<0x563200, CEntity*, CEntity*, CVector*, CVector*>(pFiringEntity1, pFiringEntity2, start, end);
}

// Converted from thiscall bool CWeapon::Fire(CEntity *pFiringEntity,CVector *posn) 0x55C380
bool CWeapon::Fire(CEntity* pFiringEntity, CVector* posn) {
    return plugin::CallMethodAndReturn<bool, 0x55C380, CWeapon *, CEntity*, CVector*>(this, pFiringEntity, posn);
}

// Converted from thiscall bool CWeapon::FireAreaEffect(CEntity *pFiringEntity,CVector *posn) 0x561E00
bool CWeapon::FireAreaEffect(CEntity* pFiringEntity, CVector* posn) {
    return plugin::CallMethodAndReturn<bool, 0x561E00, CWeapon *, CEntity*, CVector*>(this, pFiringEntity, posn);
}

// Converted from thiscall bool CWeapon::FireFromCar(CAutomobile *car,bool look) 0x55C940
bool CWeapon::FireFromCar(CAutomobile* car, bool look) {
    return plugin::CallMethodAndReturn<bool, 0x55C940, CWeapon *, CAutomobile*, bool>(this, car, look);
}

// Converted from thiscall bool CWeapon::FireInstantHit(CEntity *pFiringEntity,CVector *posn) 0x55D2E0
bool CWeapon::FireInstantHit(CEntity* pFiringEntity, CVector* posn) {
    return plugin::CallMethodAndReturn<bool, 0x55D2E0, CWeapon *, CEntity*, CVector*>(this, pFiringEntity, posn);
}

// Converted from thiscall bool CWeapon::FireInstantHitFromCar(CAutomobile *car,bool look) 0x5624D0
bool CWeapon::FireInstantHitFromCar(CAutomobile* car, bool look) {
    return plugin::CallMethodAndReturn<bool, 0x5624D0, CWeapon *, CAutomobile*, bool>(this, car, look);
}

// Converted from thiscall bool CWeapon::FireM16_1stPerson(CEntity *pFiringEntity) 0x562180
bool CWeapon::FireM16_1stPerson(CEntity* pFiringEntity) {
    return plugin::CallMethodAndReturn<bool, 0x562180, CWeapon *, CEntity*>(this, pFiringEntity);
}

// Converted from thiscall bool CWeapon::FireMelee(CEntity *pFiringEntity,CVector &posn) 0x55CA20
bool CWeapon::FireMelee(CEntity* pFiringEntity, CVector& posn) {
    return plugin::CallMethodAndReturn<bool, 0x55CA20, CWeapon *, CEntity*, CVector&>(this, pFiringEntity, posn);
}

// Converted from thiscall bool CWeapon::FireProjectile(CEntity *pFiringEntity,CVector *posn,float force) 0x561900
bool CWeapon::FireProjectile(CEntity* pFiringEntity, CVector* posn, float force) {
    return plugin::CallMethodAndReturn<bool, 0x561900, CWeapon *, CEntity*, CVector*, float>(this, pFiringEntity, posn, force);
}

// Converted from thiscall bool CWeapon::FireShotgun(CEntity *pFiringEntity,CVector *posn) 0x560620
bool CWeapon::FireShotgun(CEntity* pFiringEntity, CVector* posn) {
    return plugin::CallMethodAndReturn<bool, 0x560620, CWeapon *, CEntity*, CVector*>(this, pFiringEntity, posn);
}

// Converted from thiscall bool CWeapon::FireSniper(CEntity *pFiringEntity) 0x561FE0
bool CWeapon::FireSniper(CEntity* pFiringEntity) {
    return plugin::CallMethodAndReturn<bool, 0x561FE0, CWeapon *, CEntity*>(this, pFiringEntity);
}

// Converted from cdecl void CWeapon::GenerateFlameThrowerParticles(CVector origin,CVector target) 0x561C70
void CWeapon::GenerateFlameThrowerParticles(CVector origin, CVector target) {
    plugin::Call<0x561C70, CVector, CVector>(origin, target);
}

// Converted from thiscall bool CWeapon::HasWeaponAmmoToBeUsed(void) 0x564B80
bool CWeapon::HasWeaponAmmoToBeUsed() {
    return plugin::CallMethodAndReturn<bool, 0x564B80, CWeapon *>(this);
}

// Converted from thiscall bool CWeapon::HitsGround(CEntity *ped,CVector *posn,CEntity *entity) 0x564890
bool CWeapon::HitsGround(CEntity* ped, CVector* posn, CEntity* entity) {
    return plugin::CallMethodAndReturn<bool, 0x564890, CWeapon *, CEntity*, CVector*, CEntity*>(this, ped, posn, entity);
}

// Converted from thiscall void CWeapon::Initialise(eWeaponType weaponType,int totalAmmo) 0x55C330
void CWeapon::Initialise(eWeaponType weaponType, int totalAmmo) {
    plugin::CallMethod<0x55C330, CWeapon *, eWeaponType, int>(this, weaponType, totalAmmo);
}

// Converted from cdecl void CWeapon::InitialiseWeapons(void) 0x55C2D0
void CWeapon::InitialiseWeapons() {
    plugin::Call<0x55C2D0>();
}

// Converted from thiscall bool CWeapon::IsType2Handed(void) 0x563FD0
bool CWeapon::IsType2Handed() {
    return plugin::CallMethodAndReturn<bool, 0x563FD0, CWeapon *>(this);
}

// Converted from thiscall bool CWeapon::IsTypeMelee(void) 0x563FB0 
bool CWeapon::IsTypeMelee() {
    return plugin::CallMethodAndReturn<bool, 0x563FB0, CWeapon *>(this);
}

// Converted from cdecl void CWeapon::MakePedsJumpAtShot(CPhysical *pFiringEntity,CVector *start,CVector *end) 0x564680
void CWeapon::MakePedsJumpAtShot(CPhysical* pFiringEntity, CVector* start, CVector* end) {
    plugin::Call<0x564680, CPhysical*, CVector*, CVector*>(pFiringEntity, start, end);
}

// Converted from cdecl bool CWeapon::ProcessLineOfSight(CVector const&origin,CVector const&target,CColPoint &outColPoint,CEntity *&outEntity,eWeaponType weaponType,CEntity *entity,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck,bool doCameraIgnoreCheck) 0x564C00
bool CWeapon::ProcessLineOfSight(CVector const& origin, CVector const& target, CColPoint& outColPoint, CEntity*& outEntity, eWeaponType weaponType, CEntity* entity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck) {
    return plugin::CallAndReturn<bool, 0x564C00, CVector const&, CVector const&, CColPoint&, CEntity*&, eWeaponType, CEntity*, bool, bool, bool, bool, bool, bool, bool>(origin, target, outColPoint, outEntity, weaponType, entity, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck, doCameraIgnoreCheck);
}

// Converted from thiscall void CWeapon::Reload(void) 0x5639D0
void CWeapon::Reload() {
    plugin::CallMethod<0x5639D0, CWeapon *>(this);
}

// Converted from cdecl void CWeapon::ShutdownWeapons(void) 0x55C2F0
void CWeapon::ShutdownWeapons() {
    plugin::Call<0x55C2F0>();
}

// Converted from thiscall void CWeapon::Update(int audioEntityId) 0x563A10
void CWeapon::Update(int audioEntityId) {
    plugin::CallMethod<0x563A10, CWeapon *, int>(this, audioEntityId);
}

// Converted from cdecl void CWeapon::UpdateWeapons(void) 0x55C310 
void CWeapon::UpdateWeapons() {
    plugin::Call<0x55C310>();
}

// Converted from thiscall void CWeapon::~CWeapon() 0x4C50A0
CWeapon::~CWeapon() {
    plugin::CallMethod<0x4C50A0, CWeapon *>(this);
}

// Converted from cdecl void FireOneInstantHitRound(CVector *start,CVector *end,int damage) 0x563B00
void FireOneInstantHitRound(CVector* start, CVector* end, int damage) {
    plugin::Call<0x563B00, CVector*, CVector*, int>(start, end, damage);
}

