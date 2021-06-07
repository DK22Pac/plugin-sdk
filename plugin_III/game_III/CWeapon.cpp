/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWeapon.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CWeapon) = ADDRESS_BY_VERSION(0x4C50B0, 0x4C5150, 0x4C50E0);
int ctor_gaddr(CWeapon) = GLOBAL_ADDRESS_BY_VERSION(0x4C50B0, 0x4C5150, 0x4C50E0);

int dtor_addr(CWeapon) = ADDRESS_BY_VERSION(0x4C50A0, 0x4C5140, 0x4C50D0);
int dtor_gaddr(CWeapon) = GLOBAL_ADDRESS_BY_VERSION(0x4C50A0, 0x4C5140, 0x4C50D0);

int addrof(CWeapon::AddGunshell) = ADDRESS_BY_VERSION(0x55F770, 0x55F8A0, 0x55F850);
int gaddrof(CWeapon::AddGunshell) = GLOBAL_ADDRESS_BY_VERSION(0x55F770, 0x55F8A0, 0x55F850);

void CWeapon::AddGunshell(CEntity *shooter, CVector const &source, CVector2D const &direction, float size) {
    plugin::CallMethodDynGlobal<CWeapon *, CEntity *, CVector const &, CVector2D const &, float>(gaddrof(CWeapon::AddGunshell), this, shooter, source, direction, size);
}

int addrof(CWeapon::DoBulletImpact) = ADDRESS_BY_VERSION(0x55F950, 0x55FA80, 0x55FA30);
int gaddrof(CWeapon::DoBulletImpact) = GLOBAL_ADDRESS_BY_VERSION(0x55F950, 0x55FA80, 0x55FA30);

void CWeapon::DoBulletImpact(CEntity *shooter, CEntity *victim, CVector *source, CVector *target, CColPoint *colPoint, CVector2D ahead) {
    plugin::CallMethodDynGlobal<CWeapon *, CEntity *, CEntity *, CVector *, CVector *, CColPoint *, CVector2D>(gaddrof(CWeapon::DoBulletImpact), this, shooter, victim, source, target, colPoint, ahead);
}

int addrof(CWeapon::Fire) = ADDRESS_BY_VERSION(0x55C380, 0x55C4B0, 0x55C460);
int gaddrof(CWeapon::Fire) = GLOBAL_ADDRESS_BY_VERSION(0x55C380, 0x55C4B0, 0x55C460);

bool CWeapon::Fire(CEntity *shooter, CVector *fireSource) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWeapon *, CEntity *, CVector *>(gaddrof(CWeapon::Fire), this, shooter, fireSource);
}

int addrof(CWeapon::FireAreaEffect) = ADDRESS_BY_VERSION(0x561E00, 0x561F30, 0x561EE0);
int gaddrof(CWeapon::FireAreaEffect) = GLOBAL_ADDRESS_BY_VERSION(0x561E00, 0x561F30, 0x561EE0);

bool CWeapon::FireAreaEffect(CEntity *shooter, CVector *fireSource) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWeapon *, CEntity *, CVector *>(gaddrof(CWeapon::FireAreaEffect), this, shooter, fireSource);
}

int addrof(CWeapon::FireFromCar) = ADDRESS_BY_VERSION(0x55C940, 0x55CA70, 0x55CA20);
int gaddrof(CWeapon::FireFromCar) = GLOBAL_ADDRESS_BY_VERSION(0x55C940, 0x55CA70, 0x55CA20);

bool CWeapon::FireFromCar(CAutomobile *shooter, bool left) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWeapon *, CAutomobile *, bool>(gaddrof(CWeapon::FireFromCar), this, shooter, left);
}

int addrof(CWeapon::FireInstantHit) = ADDRESS_BY_VERSION(0x55D2E0, 0x55D410, 0x55D3C0);
int gaddrof(CWeapon::FireInstantHit) = GLOBAL_ADDRESS_BY_VERSION(0x55D2E0, 0x55D410, 0x55D3C0);

bool CWeapon::FireInstantHit(CEntity *shooter, CVector *fireSource) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWeapon *, CEntity *, CVector *>(gaddrof(CWeapon::FireInstantHit), this, shooter, fireSource);
}

int addrof(CWeapon::FireInstantHitFromCar) = ADDRESS_BY_VERSION(0x5624D0, 0x562600, 0x5625B0);
int gaddrof(CWeapon::FireInstantHitFromCar) = GLOBAL_ADDRESS_BY_VERSION(0x5624D0, 0x562600, 0x5625B0);

bool CWeapon::FireInstantHitFromCar(CAutomobile *shooter, bool left) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWeapon *, CAutomobile *, bool>(gaddrof(CWeapon::FireInstantHitFromCar), this, shooter, left);
}

int addrof(CWeapon::FireM16_1stPerson) = ADDRESS_BY_VERSION(0x562180, 0x5622B0, 0x562260);
int gaddrof(CWeapon::FireM16_1stPerson) = GLOBAL_ADDRESS_BY_VERSION(0x562180, 0x5622B0, 0x562260);

bool CWeapon::FireM16_1stPerson(CEntity *shooter) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWeapon *, CEntity *>(gaddrof(CWeapon::FireM16_1stPerson), this, shooter);
}

int addrof(CWeapon::FireMelee) = ADDRESS_BY_VERSION(0x55CA20, 0x55CB50, 0x55CB00);
int gaddrof(CWeapon::FireMelee) = GLOBAL_ADDRESS_BY_VERSION(0x55CA20, 0x55CB50, 0x55CB00);

bool CWeapon::FireMelee(CEntity *shooter, CVector &fireSource) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWeapon *, CEntity *, CVector &>(gaddrof(CWeapon::FireMelee), this, shooter, fireSource);
}

int addrof(CWeapon::FireProjectile) = ADDRESS_BY_VERSION(0x561900, 0x561A30, 0x5619E0);
int gaddrof(CWeapon::FireProjectile) = GLOBAL_ADDRESS_BY_VERSION(0x561900, 0x561A30, 0x5619E0);

bool CWeapon::FireProjectile(CEntity *shooter, CVector *fireSource, float power) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWeapon *, CEntity *, CVector *, float>(gaddrof(CWeapon::FireProjectile), this, shooter, fireSource, power);
}

int addrof(CWeapon::FireShotgun) = ADDRESS_BY_VERSION(0x560620, 0x560750, 0x560700);
int gaddrof(CWeapon::FireShotgun) = GLOBAL_ADDRESS_BY_VERSION(0x560620, 0x560750, 0x560700);

bool CWeapon::FireShotgun(CEntity *shooter, CVector *fireSource) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWeapon *, CEntity *, CVector *>(gaddrof(CWeapon::FireShotgun), this, shooter, fireSource);
}

int addrof(CWeapon::FireSniper) = ADDRESS_BY_VERSION(0x561FE0, 0x562110, 0x5620C0);
int gaddrof(CWeapon::FireSniper) = GLOBAL_ADDRESS_BY_VERSION(0x561FE0, 0x562110, 0x5620C0);

bool CWeapon::FireSniper(CEntity *shooter) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWeapon *, CEntity *>(gaddrof(CWeapon::FireSniper), this, shooter);
}

int addrof(CWeapon::HasWeaponAmmoToBeUsed) = ADDRESS_BY_VERSION(0x564B80, 0x564CB0, 0x564C60);
int gaddrof(CWeapon::HasWeaponAmmoToBeUsed) = GLOBAL_ADDRESS_BY_VERSION(0x564B80, 0x564CB0, 0x564C60);

bool CWeapon::HasWeaponAmmoToBeUsed() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWeapon *>(gaddrof(CWeapon::HasWeaponAmmoToBeUsed), this);
}

int addrof(CWeapon::HitsGround) = ADDRESS_BY_VERSION(0x564890, 0x5649C0, 0x564970);
int gaddrof(CWeapon::HitsGround) = GLOBAL_ADDRESS_BY_VERSION(0x564890, 0x5649C0, 0x564970);

bool CWeapon::HitsGround(CEntity *holder, CVector *fireSource, CEntity *aimingTo) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWeapon *, CEntity *, CVector *, CEntity *>(gaddrof(CWeapon::HitsGround), this, holder, fireSource, aimingTo);
}

int addrof(CWeapon::Initialise) = ADDRESS_BY_VERSION(0x55C330, 0x55C460, 0x55C410);
int gaddrof(CWeapon::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x55C330, 0x55C460, 0x55C410);

void CWeapon::Initialise(eWeaponType type, int ammo) {
    plugin::CallMethodDynGlobal<CWeapon *, eWeaponType, int>(gaddrof(CWeapon::Initialise), this, type, ammo);
}

int addrof(CWeapon::IsType2Handed) = ADDRESS_BY_VERSION(0x563FD0, 0x564100, 0x5640B0);
int gaddrof(CWeapon::IsType2Handed) = GLOBAL_ADDRESS_BY_VERSION(0x563FD0, 0x564100, 0x5640B0);

bool CWeapon::IsType2Handed() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWeapon *>(gaddrof(CWeapon::IsType2Handed), this);
}

int addrof(CWeapon::IsTypeMelee) = ADDRESS_BY_VERSION(0x563FB0, 0x5640E0, 0x564090);
int gaddrof(CWeapon::IsTypeMelee) = GLOBAL_ADDRESS_BY_VERSION(0x563FB0, 0x5640E0, 0x564090);

bool CWeapon::IsTypeMelee() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWeapon *>(gaddrof(CWeapon::IsTypeMelee), this);
}

int addrof(CWeapon::Reload) = ADDRESS_BY_VERSION(0x5639D0, 0x563B00, 0x563AB0);
int gaddrof(CWeapon::Reload) = GLOBAL_ADDRESS_BY_VERSION(0x5639D0, 0x563B00, 0x563AB0);

void CWeapon::Reload() {
    plugin::CallMethodDynGlobal<CWeapon *>(gaddrof(CWeapon::Reload), this);
}

int addrof(CWeapon::Update) = ADDRESS_BY_VERSION(0x563A10, 0x563B40, 0x563AF0);
int gaddrof(CWeapon::Update) = GLOBAL_ADDRESS_BY_VERSION(0x563A10, 0x563B40, 0x563AF0);

void CWeapon::Update(int audioEntity) {
    plugin::CallMethodDynGlobal<CWeapon *, int>(gaddrof(CWeapon::Update), this, audioEntity);
}

int addrof(CWeapon::BlowUpExplosiveThings) = ADDRESS_BY_VERSION(0x564A60, 0x564B90, 0x564B40);
int gaddrof(CWeapon::BlowUpExplosiveThings) = GLOBAL_ADDRESS_BY_VERSION(0x564A60, 0x564B90, 0x564B40);

void CWeapon::BlowUpExplosiveThings(CEntity *thing) {
    plugin::CallDynGlobal<CEntity *>(gaddrof(CWeapon::BlowUpExplosiveThings), thing);
}

int addrof(CWeapon::DoDoomAiming) = ADDRESS_BY_VERSION(0x562EB0, 0x562FE0, 0x562F90);
int gaddrof(CWeapon::DoDoomAiming) = GLOBAL_ADDRESS_BY_VERSION(0x562EB0, 0x562FE0, 0x562F90);

void CWeapon::DoDoomAiming(CEntity *shooter, CVector *source, CVector *target) {
    plugin::CallDynGlobal<CEntity *, CVector *, CVector *>(gaddrof(CWeapon::DoDoomAiming), shooter, source, target);
}

int addrof(CWeapon::DoDriveByAutoAiming) = ADDRESS_BY_VERSION(0x563660, 0x563790, 0x563740);
int gaddrof(CWeapon::DoDriveByAutoAiming) = GLOBAL_ADDRESS_BY_VERSION(0x563660, 0x563790, 0x563740);

void CWeapon::DoDriveByAutoAiming(CEntity *shooter, CVector *source, CVector *target) {
    plugin::CallDynGlobal<CEntity *, CVector *, CVector *>(gaddrof(CWeapon::DoDriveByAutoAiming), shooter, source, target);
}

int addrof(CWeapon::DoTankDoomAiming) = ADDRESS_BY_VERSION(0x563200, 0x563330, 0x5632E0);
int gaddrof(CWeapon::DoTankDoomAiming) = GLOBAL_ADDRESS_BY_VERSION(0x563200, 0x563330, 0x5632E0);

void CWeapon::DoTankDoomAiming(CEntity *shooter, CEntity *driver, CVector *source, CVector *target) {
    plugin::CallDynGlobal<CEntity *, CEntity *, CVector *, CVector *>(gaddrof(CWeapon::DoTankDoomAiming), shooter, driver, source, target);
}

int addrof(CWeapon::GenerateFlameThrowerParticles) = ADDRESS_BY_VERSION(0x561C70, 0x561DA0, 0x561D50);
int gaddrof(CWeapon::GenerateFlameThrowerParticles) = GLOBAL_ADDRESS_BY_VERSION(0x561C70, 0x561DA0, 0x561D50);

void CWeapon::GenerateFlameThrowerParticles(CVector pos, CVector dir) {
    plugin::CallDynGlobal<CVector, CVector>(gaddrof(CWeapon::GenerateFlameThrowerParticles), pos, dir);
}

int addrof(CWeapon::InitialiseWeapons) = ADDRESS_BY_VERSION(0x55C2D0, 0x55C400, 0x55C3B0);
int gaddrof(CWeapon::InitialiseWeapons) = GLOBAL_ADDRESS_BY_VERSION(0x55C2D0, 0x55C400, 0x55C3B0);

void CWeapon::InitialiseWeapons() {
    plugin::CallDynGlobal(gaddrof(CWeapon::InitialiseWeapons));
}

int addrof(CWeapon::MakePedsJumpAtShot) = ADDRESS_BY_VERSION(0x564680, 0x5647B0, 0x564760);
int gaddrof(CWeapon::MakePedsJumpAtShot) = GLOBAL_ADDRESS_BY_VERSION(0x564680, 0x5647B0, 0x564760);

void CWeapon::MakePedsJumpAtShot(CPhysical *shooter, CVector *source, CVector *target) {
    plugin::CallDynGlobal<CPhysical *, CVector *, CVector *>(gaddrof(CWeapon::MakePedsJumpAtShot), shooter, source, target);
}

int addrof(CWeapon::ProcessLineOfSight) = ADDRESS_BY_VERSION(0x564C00, 0x564D30, 0x564CE0);
int gaddrof(CWeapon::ProcessLineOfSight) = GLOBAL_ADDRESS_BY_VERSION(0x564C00, 0x564D30, 0x564CE0);

bool CWeapon::ProcessLineOfSight(CVector const &origin, CVector const &target, CColPoint &point, CEntity **outEntity, eWeaponType type, CEntity *entity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck) {
    return plugin::CallAndReturnDynGlobal<bool, CVector const &, CVector const &, CColPoint &, CEntity **, eWeaponType, CEntity *, bool, bool, bool, bool, bool, bool, bool>(gaddrof(CWeapon::ProcessLineOfSight), origin, target, point, outEntity, type, entity, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck, doCameraIgnoreCheck);
}

int addrof(CWeapon::ShutdownWeapons) = ADDRESS_BY_VERSION(0x55C2F0, 0x55C420, 0x55C3D0);
int gaddrof(CWeapon::ShutdownWeapons) = GLOBAL_ADDRESS_BY_VERSION(0x55C2F0, 0x55C420, 0x55C3D0);

void CWeapon::ShutdownWeapons() {
    plugin::CallDynGlobal(gaddrof(CWeapon::ShutdownWeapons));
}

int addrof(CWeapon::UpdateWeapons) = ADDRESS_BY_VERSION(0x55C310, 0x55C440, 0x55C3F0);
int gaddrof(CWeapon::UpdateWeapons) = GLOBAL_ADDRESS_BY_VERSION(0x55C310, 0x55C440, 0x55C3F0);

void CWeapon::UpdateWeapons() {
    plugin::CallDynGlobal(gaddrof(CWeapon::UpdateWeapons));
}

int addrof(FireOneInstantHitRound) = ADDRESS_BY_VERSION(0x563B00, 0x563C30, 0x563BE0);
int gaddrof(FireOneInstantHitRound) = GLOBAL_ADDRESS_BY_VERSION(0x563B00, 0x563C30, 0x563BE0);

void FireOneInstantHitRound(CVector *source, CVector *target, int damage) {
    plugin::CallDynGlobal<CVector *, CVector *, int>(gaddrof(FireOneInstantHitRound), source, target, damage);
}
