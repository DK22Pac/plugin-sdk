/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPed.h"

// Converted from  void CPed::SetMoveAnim(void) 0x50CD50
void CPed::SetMoveAnim() {
    plugin::CallVirtualMethod<18, CPed *>(this);
}

// Converted from thiscall int CPed::AddInCarAnims(CVehicle *vehicle,bool) 0x512520
int CPed::AddInCarAnims(CVehicle* vehicle, bool arg1) {
    return plugin::CallMethodAndReturn<int, 0x512520, CPed *, CVehicle*, bool>(this, vehicle, arg1);
}

// Converted from thiscall void CPed::AddWeaponModel(int modelIndex) 0x4FFE40
void CPed::AddWeaponModel(int modelIndex) {
    plugin::CallMethod<0x4FFE40, CPed *, int>(this, modelIndex);
}

// Converted from thiscall char CPed::AimGun(void) 0x50B2C0 
char CPed::AimGun() {
    return plugin::CallMethodAndReturn<char, 0x50B2C0, CPed *>(this);
}

// Converted from thiscall void CPed::AnswerMobile(void) 0x4F5710 
void CPed::AnswerMobile() {
    plugin::CallMethod<0x4F5710, CPed *>(this);
}

// Converted from thiscall CEntity* CPed::AttachPedToEntity(CEntity *entity,CVector offset,ushort position,float angle,eWeaponType weaponType) 0x4EF490
CEntity* CPed::AttachPedToEntity(CEntity* entity, CVector offset, unsigned short position, float angle, eWeaponType weaponType) {
    return plugin::CallMethodAndReturn<CEntity*, 0x4EF490, CPed *, CEntity*, CVector, unsigned short, float, eWeaponType>(this, entity, offset, position, angle, weaponType);
}

// Converted from thiscall uint CPed::Attack(void) 0x52B070 
unsigned int CPed::Attack() {
    return plugin::CallMethodAndReturn<unsigned int, 0x52B070, CPed *>(this);
}

// Converted from thiscall void CPed::Avoid(void) 0x4FA2E0 
void CPed::Avoid() {
    plugin::CallMethod<0x4FA2E0, CPed *>(this);
}

// Converted from thiscall int CPed::BeingDraggedFromCar(void) 0x518250 
int CPed::BeingDraggedFromCar() {
    return plugin::CallMethodAndReturn<int, 0x518250, CPed *>(this);
}

// Converted from thiscall void CPed::BuildPedLists(void) 0x50D4B0 
void CPed::BuildPedLists() {
    plugin::CallMethod<0x50D4B0, CPed *>(this);
}

// Converted from thiscall void CPed::BuyIceCream(void) 0x4F10D0 
void CPed::BuyIceCream() {
    plugin::CallMethod<0x4F10D0, CPed *>(this);
}

// Converted from thiscall void CPed::CalculateNewOrientation(void) 0x509F80 
void CPed::CalculateNewOrientation() {
    plugin::CallMethod<0x509F80, CPed *>(this);
}

// Converted from thiscall void CPed::CalculateNewVelocity(void) 0x50A640 
void CPed::CalculateNewVelocity() {
    plugin::CallMethod<0x50A640, CPed *>(this);
}

// Converted from thiscall bool CPed::CanBeDamagedByThisGangMember(CPed* ped) 0x50F130 
bool CPed::CanBeDamagedByThisGangMember(CPed* ped) {
    return plugin::CallMethodAndReturn<bool, 0x50F130, CPed *, CPed*>(this, ped);
}

// Converted from thiscall bool CPed::CanBeDeleted(void) 0x4FFEF0 
bool CPed::CanBeDeleted() {
    return plugin::CallMethodAndReturn<bool, 0x4FFEF0, CPed *>(this);
}

// Converted from thiscall bool CPed::CanBeDeletedEvenInVehicle(void) 0x4FFEC0 
bool CPed::CanBeDeletedEvenInVehicle() {
    return plugin::CallMethodAndReturn<bool, 0x4FFEC0, CPed *>(this);
}

// Converted from thiscall bool CPed::CanPedDriveOff(void) 0x4EFC90 
bool CPed::CanPedDriveOff() {
    return plugin::CallMethodAndReturn<bool, 0x4EFC90, CPed *>(this);
}

// Converted from thiscall bool CPed::CanPedJumpThis(CEntity *entity,CVector *) 0x4F0590
bool CPed::CanPedJumpThis(CEntity* entity, CVector* arg1) {
    return plugin::CallMethodAndReturn<bool, 0x4F0590, CPed *, CEntity*, CVector*>(this, entity, arg1);
}

// Converted from thiscall bool CPed::CanSeeEntity(CEntity *entity,float limitAngle) 0x51C870
bool CPed::CanSeeEntity(CEntity* entity, float limitAngle) {
    return plugin::CallMethodAndReturn<bool, 0x51C870, CPed *, CEntity*, float>(this, entity, limitAngle);
}

// Converted from thiscall bool CPed::CanSetPedState(void) 0x5018D0 
bool CPed::CanSetPedState() {
    return plugin::CallMethodAndReturn<bool, 0x5018D0, CPed *>(this);
}

// Converted from thiscall bool CPed::CanStrafeOrMouseControl(void) 0x501890 
bool CPed::CanStrafeOrMouseControl() {
    return plugin::CallMethodAndReturn<bool, 0x501890, CPed *>(this);
}

// Converted from thiscall bool CPed::CanWeRunAndFireWithWeapon(void) 0x50B220 
bool CPed::CanWeRunAndFireWithWeapon() {
    return plugin::CallMethodAndReturn<bool, 0x50B220, CPed *>(this);
}

// Converted from thiscall uint CPed::Chat(void) 0x4F6050 
unsigned int CPed::Chat() {
    return plugin::CallMethodAndReturn<unsigned int, 0x4F6050, CPed *>(this);
}

// Converted from thiscall bool CPed::CheckForExplosions(CVector2D &) 0x4F4950 
bool CPed::CheckForExplosions(CVector2D& arg0) {
    return plugin::CallMethodAndReturn<bool, 0x4F4950, CPed *, CVector2D&>(this, arg0);
}

// Converted from thiscall char CPed::CheckForPointBlankPeds(CPed* ped) 0x52C670 
char CPed::CheckForPointBlankPeds(CPed* ped) {
    return plugin::CallMethodAndReturn<char, 0x52C670, CPed *, CPed*>(this, ped);
}

// Converted from thiscall bool CPed::CheckIfInTheAir(void) 0x4FD680 
bool CPed::CheckIfInTheAir() {
    return plugin::CallMethodAndReturn<bool, 0x4FD680, CPed *>(this);
}

// Converted from thiscall int CPed::CheckThreatValidity(void) 0x50BD00 
int CPed::CheckThreatValidity() {
    return plugin::CallMethodAndReturn<int, 0x50BD00, CPed *>(this);
}

// Converted from thiscall int CPed::ChooseAttackAI(uchar,bool) 0x529460 
int CPed::ChooseAttackAI(unsigned char arg0, bool arg1) {
    return plugin::CallMethodAndReturn<int, 0x529460, CPed *, unsigned char, bool>(this, arg0, arg1);
}

// Converted from thiscall int CPed::ChooseAttackPlayer(uchar,bool) 0x528AA0 
int CPed::ChooseAttackPlayer(unsigned char arg0, bool arg1) {
    return plugin::CallMethodAndReturn<int, 0x528AA0, CPed *, unsigned char, bool>(this, arg0, arg1);
}

// Converted from thiscall void CPed::ClearAimFlag(void) 0x50B4A0 
void CPed::ClearAimFlag() {
    plugin::CallMethod<0x50B4A0, CPed *>(this);
}

// Converted from thiscall void CPed::ClearAll(void) 0x509DF0 
void CPed::ClearAll() {
    plugin::CallMethod<0x509DF0, CPed *>(this);
}

// Converted from thiscall void CPed::ClearAnswerMobile(void) 0x4F58C0 
void CPed::ClearAnswerMobile() {
    plugin::CallMethod<0x4F58C0, CPed *>(this);
}

// Converted from thiscall void CPed::ClearAttack(void) 0x52D120 
void CPed::ClearAttack() {
    plugin::CallMethod<0x52D120, CPed *>(this);
}

// Converted from thiscall void CPed::ClearAttackByRemovingAnim(void) 0x52CF70 
void CPed::ClearAttackByRemovingAnim() {
    plugin::CallMethod<0x52CF70, CPed *>(this);
}

// Converted from thiscall void CPed::ClearChat(void) 0x4F5FA0 
void CPed::ClearChat() {
    plugin::CallMethod<0x4F5FA0, CPed *>(this);
}

// Converted from thiscall void CPed::ClearDuck(bool) 0x512A20 
void CPed::ClearDuck(bool arg0) {
    plugin::CallMethod<0x512A20, CPed *, bool>(this, arg0);
}

// Converted from thiscall void CPed::ClearFollowPath(void) 0x4F7920 
void CPed::ClearFollowPath() {
    plugin::CallMethod<0x4F7920, CPed *>(this);
}

// Converted from thiscall void CPed::ClearInvestigateEvent(void) 0x526BA0 
void CPed::ClearInvestigateEvent() {
    plugin::CallMethod<0x526BA0, CPed *>(this);
}

// Converted from thiscall void CPed::ClearLeader(void) 0x521670 
void CPed::ClearLeader() {
    plugin::CallMethod<0x521670, CPed *>(this);
}

// Converted from thiscall void CPed::ClearLookFlag(void) 0x50B9C0 
void CPed::ClearLookFlag() {
    plugin::CallMethod<0x50B9C0, CPed *>(this);
}

// Converted from thiscall void CPed::ClearObjective(void) 0x521720 
void CPed::ClearObjective() {
    plugin::CallMethod<0x521720, CPed *>(this);
}

// Converted from thiscall void CPed::ClearPointGunAt(void) 0x52DBE0 
void CPed::ClearPointGunAt() {
    plugin::CallMethod<0x52DBE0, CPed *>(this);
}

// Converted from thiscall void CPed::ClearSeek(void) 0x4FC450 
void CPed::ClearSeek() {
    plugin::CallMethod<0x4FC450, CPed *>(this);
}

// Converted from thiscall void CPed::ClearWaitState(void) 0x4F3130 
void CPed::ClearWaitState() {
    plugin::CallMethod<0x4F3130, CPed *>(this);
}

// Converted from thiscall void CPed::ClearWeapons(void) 0x4FF740 
void CPed::ClearWeapons() {
    plugin::CallMethod<0x4FF740, CPed *>(this);
}

// Converted from thiscall void CPed::CollideWithPed(CPed* ped) 0x524920 
void CPed::CollideWithPed(CPed* ped) {
    plugin::CallMethod<0x524920, CPed *, CPed*>(this, ped);
}

// Converted from thiscall void CPed::CreateDeadPedMoney(void) 0x43E2C0 
void CPed::CreateDeadPedMoney() {
    plugin::CallMethod<0x43E2C0, CPed *>(this);
}

// Converted from thiscall void CPed::CreateDeadPedPickupCoors(float *pX,float *pY,float *pZ) 0x43DAC0
void CPed::CreateDeadPedPickupCoors(float* pX, float* pY, float* pZ) {
    plugin::CallMethod<0x43DAC0, CPed *, float*, float*, float*>(this, pX, pY, pZ);
}

// Converted from thiscall void CPed::CreateDeadPedWeaponPickups(void) 0x43DF30 
void CPed::CreateDeadPedWeaponPickups() {
    plugin::CallMethod<0x43DF30, CPed *>(this);
}

// Converted from thiscall void CPed::DeadPedMakesTyresBloody(void) 0x587700 
void CPed::DeadPedMakesTyresBloody() {
    plugin::CallMethod<0x587700, CPed *>(this);
}

// Converted from thiscall void CPed::DettachPedFromEntity(void) 0x4EF370 
void CPed::DettachPedFromEntity() {
    plugin::CallMethod<0x4EF370, CPed *>(this);
}

// Converted from thiscall void CPed::Dress(void) 0x4EEFD0 
void CPed::Dress() {
    plugin::CallMethod<0x4EEFD0, CPed *>(this);
}

// Converted from thiscall void CPed::DriveVehicle(void) 0x522AA0 
void CPed::DriveVehicle() {
    plugin::CallMethod<0x522AA0, CPed *>(this);
}

// Converted from thiscall void CPed::Duck(void) 0x512A90 
void CPed::Duck() {
    plugin::CallMethod<0x512A90, CPed *>(this);
}

// Converted from thiscall void CPed::DuckAndCover(void) 0x513340 
void CPed::DuckAndCover() {
    plugin::CallMethod<0x513340, CPed *>(this);
}

// Converted from thiscall void CPed::EndFight(uchar) 0x5289A0 
void CPed::EndFight(unsigned char arg0) {
    plugin::CallMethod<0x5289A0, CPed *, unsigned char>(this, arg0);
}

// Converted from thiscall void CPed::EnterCar(void) 0x517BA0 
void CPed::EnterCar() {
    plugin::CallMethod<0x517BA0, CPed *>(this);
}

// Converted from thiscall void CPed::ExitCar(void) 0x516960 
void CPed::ExitCar() {
    plugin::CallMethod<0x516960, CPed *>(this);
}

// Converted from thiscall bool CPed::FacePhone(void) 0x4F5CA0 
bool CPed::FacePhone() {
    return plugin::CallMethodAndReturn<bool, 0x4F5CA0, CPed *>(this);
}

// Converted from thiscall void CPed::Fall(void) 0x4FD740 
void CPed::Fall() {
    plugin::CallMethod<0x4FD740, CPed *>(this);
}

// Converted from thiscall void CPed::Fight(void) 0x529A00 
void CPed::Fight() {
    plugin::CallMethod<0x529A00, CPed *>(this);
}

// Converted from thiscall void CPed::FightHitPed(CPed* ped,CVector &,CVector &,short) 0x527800 
void CPed::FightHitPed(CPed* ped, CVector& arg1, CVector& arg2, short arg3) {
    plugin::CallMethod<0x527800, CPed *, CPed*, CVector&, CVector&, short>(this, ped, arg1, arg2, arg3);
}

// Converted from thiscall void CPed::FightStrike(CVector &,bool) 0x5282E0 
void CPed::FightStrike(CVector& arg0, bool arg1) {
    plugin::CallMethod<0x5282E0, CPed *, CVector&, bool>(this, arg0, arg1);
}

// Converted from thiscall bool CPed::FindBestCoordsFromNodes(CVector,CVector*) 0x513DF0 
bool CPed::FindBestCoordsFromNodes(CVector arg0, CVector* arg1) {
    return plugin::CallMethodAndReturn<bool, 0x513DF0, CPed *, CVector, CVector*>(this, arg0, arg1);
}

// Converted from thiscall void CPed::Flee(void) 0x4FB130 
void CPed::Flee() {
    plugin::CallMethod<0x4FB130, CPed *>(this);
}

// Converted from thiscall short CPed::FollowPath(void) 0x4F76C0
short CPed::FollowPath() {
    return plugin::CallMethodAndReturn<short, 0x4F76C0, CPed *>(this);
}

// Converted from thiscall int CPed::GetFormationPosition(void) 0x519E30 
int CPed::GetFormationPosition() {
    return plugin::CallMethodAndReturn<int, 0x519E30, CPed *>(this);
}

// Converted from thiscall int CPed::GetLocalDirection(CVector2D const&) 0x5035F0 
int CPed::GetLocalDirection(CVector2D const& arg0) {
    return plugin::CallMethodAndReturn<int, 0x5035F0, CPed *, CVector2D const&>(this, arg0);
}

// Converted from cdecl int CPed::GetLocalPositionToOpenCarDoor(CVehicle *vehicle,uint,float) 0x512D10
int CPed::GetLocalPositionToOpenCarDoor(CVehicle* vehicle, unsigned int arg1, float arg2) {
    return plugin::CallAndReturn<int, 0x512D10, CVehicle*, unsigned int, float>(vehicle, arg1, arg2);
}

// Converted from thiscall int CPed::GetNearestDoor(CVehicle *vehicle,CVector &position) 0x5160E0
int CPed::GetNearestDoor(CVehicle* vehicle, CVector& position) {
    return plugin::CallMethodAndReturn<int, 0x5160E0, CPed *, CVehicle*, CVector&>(this, vehicle, position);
}

// Converted from thiscall bool CPed::GetNearestPassengerDoor(CVehicle *vehicle,CVector &position) 0x515CE0
bool CPed::GetNearestPassengerDoor(CVehicle* vehicle, CVector& position) {
    return plugin::CallMethodAndReturn<bool, 0x515CE0, CPed *, CVehicle*, CVector&>(this, vehicle, position);
}

// Converted from thiscall bool CPed::GetNearestTrainDoor(CVehicle *vehicle,CVector &position) 0x514A70
bool CPed::GetNearestTrainDoor(CVehicle* vehicle, CVector& position) {
    return plugin::CallMethodAndReturn<bool, 0x514A70, CPed *, CVehicle*, CVector&>(this, vehicle, position);
}

// Converted from thiscall bool CPed::GetNearestTrainPedPosition(CVehicle *vehicle,CVector &position) 0x514650
bool CPed::GetNearestTrainPedPosition(CVehicle* vehicle, CVector& position) {
    return plugin::CallMethodAndReturn<bool, 0x514650, CPed *, CVehicle*, CVector&>(this, vehicle, position);
}

// Converted from thiscall int CPed::GetNextPointOnRoute(void) 0x51C9E0 
int CPed::GetNextPointOnRoute() {
    return plugin::CallMethodAndReturn<int, 0x51C9E0, CPed *>(this);
}

// Converted from cdecl int CPed::GetPositionToOpenCarDoor(CVehicle *vehicle,uint) 0x5164D0
int CPed::GetPositionToOpenCarDoor(CVehicle* vehicle, unsigned int arg1) {
    return plugin::CallAndReturn<int, 0x5164D0, CVehicle*, unsigned int>(vehicle, arg1);
}

// Converted from cdecl int CPed::GetPositionToOpenCarDoor(CVehicle *vehicle,uint,float) 0x513080
int CPed::GetPositionToOpenCarDoor(CVehicle* vehicle, unsigned int arg1, float arg2) {
    return plugin::CallAndReturn<int, 0x513080, CVehicle*, unsigned int, float>(vehicle, arg1, arg2);
}

// Converted from thiscall int CPed::GetWeaponSlot(eWeaponType weaponType) 0x4FFA10
int CPed::GetWeaponSlot(eWeaponType weaponType) {
    return plugin::CallMethodAndReturn<int, 0x4FFA10, CPed *, eWeaponType>(this, weaponType);
}

// Converted from thiscall void CPed::GiveDelayedWeapon(eWeaponType weaponType,uint ammo) 0x4FFC30
void CPed::GiveDelayedWeapon(eWeaponType weaponType, unsigned int ammo) {
    plugin::CallMethod<0x4FFC30, CPed *, eWeaponType, unsigned int>(this, weaponType, ammo);
}

// Converted from thiscall void CPed::GiveWeapon(eWeaponType weaponType,uint ammo,bool likeUnused) 0x4FFA30
void CPed::GiveWeapon(eWeaponType weaponType, unsigned int ammo, bool likeUnused) {
    plugin::CallMethod<0x4FFA30, CPed *, eWeaponType, unsigned int, bool>(this, weaponType, ammo, likeUnused);
}

// Converted from thiscall void CPed::GrantAmmo(eWeaponType weaponType,uint ammo) 0x4FF840
void CPed::GrantAmmo(eWeaponType weaponType, unsigned int ammo) {
    plugin::CallMethod<0x4FF840, CPed *, eWeaponType, unsigned int>(this, weaponType, ammo);
}

// Converted from thiscall bool CPed::HasAttractor(void) 0x4EF8A0 
bool CPed::HasAttractor() {
    return plugin::CallMethodAndReturn<bool, 0x4EF8A0, CPed *>(this);
}

// Converted from thiscall bool CPed::HaveReachedNextPointOnRoute(float) 0x51C970 
bool CPed::HaveReachedNextPointOnRoute(float arg0) {
    return plugin::CallMethodAndReturn<bool, 0x51C970, CPed *, float>(this, arg0);
}

// Converted from thiscall void CPed::Idle(void) 0x4FDEB0 
void CPed::Idle() {
    plugin::CallMethod<0x4FDEB0, CPed *>(this);
}

// Converted from thiscall void CPed::InTheAir(void) 0x4FD4D0 
void CPed::InTheAir() {
    plugin::CallMethod<0x4FD4D0, CPed *>(this);
}

// Converted from thiscall void CPed::InflictDamage(void *,eWeaponType weaponType,float,ePedPieceTypes,uchar) 0x525B20
void CPed::InflictDamage(void* arg0, eWeaponType weaponType, float arg2, ePedPieceTypes arg3, unsigned char arg4) {
    plugin::CallMethod<0x525B20, CPed *, void*, eWeaponType, float, ePedPieceTypes, unsigned char>(this, arg0, weaponType, arg2, arg3, arg4);
}

// Converted from thiscall void CPed::InformMyGangOfAttack(CEntity *entity) 0x512950
void CPed::InformMyGangOfAttack(CEntity* entity) {
    plugin::CallMethod<0x512950, CPed *, CEntity*>(this, entity);
}

// Converted from cdecl void CPed::Initialise(void) 0x50D9F0
void CPed::Initialise() {
    plugin::Call<0x50D9F0>();
}

// Converted from thiscall void CPed::InvestigateEvent(void) 0x526C60 
void CPed::InvestigateEvent() {
    plugin::CallMethod<0x526C60, CPed *>(this);
}

// Converted from thiscall bool CPed::IsGangMember(void) 0x4F4910 
bool CPed::IsGangMember() {
    return plugin::CallMethodAndReturn<bool, 0x4F4910, CPed *>(this);
}

// Converted from thiscall bool CPed::IsPedDoingDriveByShooting(void) 0x5C84D0 
bool CPed::IsPedDoingDriveByShooting() {
    return plugin::CallMethodAndReturn<bool, 0x5C84D0, CPed *>(this);
}

// Converted from thiscall bool CPed::IsPedHeadAbovePos(float zPos) 0x525960
bool CPed::IsPedHeadAbovePos(float zPos) {
    return plugin::CallMethodAndReturn<bool, 0x525960, CPed *, float>(this, zPos);
}

// Converted from thiscall bool CPed::IsPedInControl(void) 0x501950 
bool CPed::IsPedInControl() {
    return plugin::CallMethodAndReturn<bool, 0x501950, CPed *>(this);
}

// Converted from thiscall bool CPed::IsPedShootable(void) 0x501930 
bool CPed::IsPedShootable() {
    return plugin::CallMethodAndReturn<bool, 0x501930, CPed *>(this);
}

// Converted from thiscall bool CPed::IsPlayer(void) 0x4F4930 
bool CPed::IsPlayer() {
    return plugin::CallMethodAndReturn<bool, 0x4F4930, CPed *>(this);
}

// Converted from thiscall bool CPed::IsPointerValid(void) 0x4F4860 
bool CPed::IsPointerValid() {
    return plugin::CallMethodAndReturn<bool, 0x4F4860, CPed *>(this);
}


// Converted from thiscall bool CPed::IsRoomToBeCarJacked(void) 0x512670 
bool CPed::IsRoomToBeCarJacked() {
    return plugin::CallMethodAndReturn<bool, 0x512670, CPed *>(this);
	
}

// Converted from thiscall void CPed::KillCharOnFootArmed(CVector &,CVector &,CVector &) 0x50FFC0 
void CPed::KillCharOnFootArmed(CVector& arg0, CVector& arg1, CVector& arg2) {
    plugin::CallMethod<0x50FFC0, CPed *, CVector&, CVector&, CVector&>(this, arg0, arg1, arg2);
}

// Converted from thiscall void CPed::KillCharOnFootMelee(CVector &,CVector &,CVector &) 0x50F170 
void CPed::KillCharOnFootMelee(CVector& arg0, CVector& arg1, CVector& arg2) {
    plugin::CallMethod<0x50F170, CPed *, CVector&, CVector&, CVector&>(this, arg0, arg1, arg2);
}

// Converted from thiscall void CPed::KillPedWithCar(CVehicle *vehicle,float) 0x523CD0
void CPed::KillPedWithCar(CVehicle* vehicle, float arg1) {
    plugin::CallMethod<0x523CD0, CPed *, CVehicle*, float>(this, vehicle, arg1);
}

// Converted from thiscall void CPed::LineUpPedWithCar(uint) 0x518AD0 
void CPed::LineUpPedWithCar(unsigned int arg0) {
    plugin::CallMethod<0x518AD0, CPed *, unsigned int>(this, arg0);
}

// Converted from cdecl void CPed::LoadFightData(void) 0x527570
void CPed::LoadFightData() {
    plugin::Call<0x527570>();
}

// Converted from thiscall void CPed::LookForInterestingNodes(void) 0x4F3540 
void CPed::LookForInterestingNodes() {
    plugin::CallMethod<0x4F3540, CPed *>(this);
}

// Converted from thiscall void CPed::LookForSexyCars(void) 0x4F3EB0 
void CPed::LookForSexyCars() {
    plugin::CallMethod<0x4F3EB0, CPed *>(this);
}

// Converted from thiscall void CPed::LookForSexyPeds(void) 0x4F4090 
void CPed::LookForSexyPeds() {
    plugin::CallMethod<0x4F4090, CPed *>(this);
}

// Converted from thiscall bool CPed::MakePhonecall(void) 0x4F5B40 
bool CPed::MakePhonecall() {
    return plugin::CallMethodAndReturn<bool, 0x4F5B40, CPed *>(this);
}

// Converted from thiscall void CPed::MakeTyresMuddySectorList(CPtrList &ptrList) 0x5870D0
void CPed::MakeTyresMuddySectorList(CPtrList& ptrList) {
    plugin::CallMethod<0x5870D0, CPed *, CPtrList&>(this, ptrList);
}

// Converted from thiscall void CPed::MoveHeadToLook(void) 0x50B700 
void CPed::MoveHeadToLook() {
    plugin::CallMethod<0x50B700, CPed *>(this);
}

// Converted from thiscall void CPed::Mug(void) 0x4FCD30 
void CPed::Mug() {
    plugin::CallMethod<0x4FCD30, CPed *>(this);
}

// Converted from thiscall bool CPed::OurPedCanSeeThisOne(CEntity *entity,bool) 0x50D360
bool CPed::OurPedCanSeeThisOne(CEntity* entity, bool arg1) {
    return plugin::CallMethodAndReturn<bool, 0x50D360, CPed *, CEntity*, bool>(this, entity, arg1);
}

// Converted from thiscall void CPed::Pause(void) 0x4FDE80 
void CPed::Pause() {
    plugin::CallMethod<0x4FDE80, CPed *>(this);
}

// Converted from thiscall void CPed::PedShuffle(void) 0x51A2F0 
void CPed::PedShuffle() {
    plugin::CallMethod<0x51A2F0, CPed *>(this);
}

// Converted from thiscall bool CPed::PlacePedOnDryLand(void) 0x5256A0 
bool CPed::PlacePedOnDryLand() {
    return plugin::CallMethodAndReturn<bool, 0x5256A0, CPed *>(this);
}

// Converted from thiscall void CPed::PlayFootSteps(void) 0x503680 
void CPed::PlayFootSteps() {
    plugin::CallMethod<0x503680, CPed *>(this);
}

// Converted from thiscall void CPed::PlayHitSound(CPed* ped) 0x528850 
void CPed::PlayHitSound(CPed* ped) {
    plugin::CallMethod<0x528850, CPed *, CPed*>(this, ped);
}

// Converted from thiscall short CPed::PointGunAt(void) 0x52DCD0
short CPed::PointGunAt() {
    return plugin::CallMethodAndReturn<short, 0x52DCD0, CPed *>(this);
}

// Converted from thiscall bool CPed::PositionAnyPedOutOfCollision(void) 0x511840 
bool CPed::PositionAnyPedOutOfCollision() {
    return plugin::CallMethodAndReturn<bool, 0x511840, CPed *>(this);
}

// Converted from thiscall void CPed::PositionAttachedPed(void) 0x4EF0A0 
void CPed::PositionAttachedPed() {
    plugin::CallMethod<0x4EF0A0, CPed *>(this);
}

// Converted from thiscall bool CPed::PositionPedOutOfCollision(void) 0x511B10 
bool CPed::PositionPedOutOfCollision() {
    return plugin::CallMethodAndReturn<bool, 0x511B10, CPed *>(this);
}

// Converted from thiscall bool CPed::PossiblyFindBetterPosToSeekCar(CVector *,CVehicle *vehicle) 0x4F0810
bool CPed::PossiblyFindBetterPosToSeekCar(CVector* arg0, CVehicle* vehicle) {
    return plugin::CallMethodAndReturn<bool, 0x4F0810, CPed *, CVector*, CVehicle*>(this, arg0, vehicle);
}

// Converted from thiscall void CPed::ProcessBuoyancy(void) 0x509460 
void CPed::ProcessBuoyancy() {
    plugin::CallMethod<0x509460, CPed *>(this);
}

// Converted from thiscall void CPed::ProcessObjective(void) 0x51CA70 
void CPed::ProcessObjective() {
    plugin::CallMethod<0x51CA70, CPed *>(this);
}

// Converted from thiscall void CPed::QuitEnteringCar(void) 0x5179D0 
void CPed::QuitEnteringCar() {
    plugin::CallMethod<0x5179D0, CPed *>(this);
}

// Converted from thiscall void CPed::ReactToAttack(CEntity *entity) 0x51BDA0
void CPed::ReactToAttack(CEntity* entity) {
    plugin::CallMethod<0x51BDA0, CPed *, CEntity*>(this, entity);
}

// Converted from thiscall void CPed::ReactToPointGun(CEntity *entity) 0x51C1E0
void CPed::ReactToPointGun(CEntity* entity) {
    plugin::CallMethod<0x51C1E0, CPed *, CEntity*>(this, entity);
}

// Converted from thiscall void CPed::RegisterThreatWithGangPeds(CEntity *entity) 0x514360
void CPed::RegisterThreatWithGangPeds(CEntity* entity) {
    plugin::CallMethod<0x514360, CPed *, CEntity*>(this, entity);
}

// Converted from thiscall void CPed::RemoveDrivebyAnims(void) 0x512480 
void CPed::RemoveDrivebyAnims() {
    plugin::CallMethod<0x512480, CPed *>(this);
}

// Converted from thiscall void CPed::RemoveInCarAnims(bool) 0x512440 
void CPed::RemoveInCarAnims(bool arg0) {
    plugin::CallMethod<0x512440, CPed *, bool>(this, arg0);
}

// Converted from thiscall void CPed::RemoveWeaponAnims(int likeUnused, float blendDelta) 0x5229B0
void CPed::RemoveWeaponAnims(int likeUnused, float blendDelta) {
    plugin::CallMethod<0x5229B0, CPed *, int, float>(this, likeUnused, blendDelta);
}

// Converted from thiscall void CPed::RemoveWeaponModel(int modelIndex) 0x4FFD80
void CPed::RemoveWeaponModel(int modelIndex) {
    plugin::CallMethod<0x4FFD80, CPed *, int>(this, modelIndex);
}

// Converted from thiscall void CPed::RemoveWeaponWhenEnteringVehicle(void) 0x4FF6A0 
void CPed::RemoveWeaponWhenEnteringVehicle() {
    plugin::CallMethod<0x4FF6A0, CPed *>(this);
}

// Converted from thiscall void CPed::ReplaceWeaponWhenExitingVehicle(void) 0x4FF5A0 
void CPed::ReplaceWeaponWhenExitingVehicle() {
    plugin::CallMethod<0x4FF5A0, CPed *>(this);
}

// Converted from thiscall void CPed::RequestDelayedWeapon(void) 0x4FFCE0 
void CPed::RequestDelayedWeapon() {
    plugin::CallMethod<0x4FFCE0, CPed *>(this);
}

// Converted from thiscall void CPed::RestartNonPartialAnims(void) 0x50CCF0 
void CPed::RestartNonPartialAnims() {
    plugin::CallMethod<0x50CCF0, CPed *>(this);
}

// Converted from thiscall void CPed::RestoreGunPosition(void) 0x50B250 
void CPed::RestoreGunPosition() {
    plugin::CallMethod<0x50B250, CPed *>(this);
}

// Converted from thiscall void CPed::RestoreHeadPosition(void) 0x50B650 
void CPed::RestoreHeadPosition() {
    plugin::CallMethod<0x50B650, CPed *>(this);
}

// Converted from thiscall void CPed::RestoreHeadingRate(void) 0x4F17D0 
void CPed::RestoreHeadingRate() {
    plugin::CallMethod<0x4F17D0, CPed *>(this);
}

// Converted from thiscall void CPed::RestorePreviousObjective(void) 0x520FE0 
void CPed::RestorePreviousObjective() {
    plugin::CallMethod<0x520FE0, CPed *>(this);
}

// Converted from thiscall void CPed::RestorePreviousState(void) 0x50C600 
void CPed::RestorePreviousState() {
    plugin::CallMethod<0x50C600, CPed *>(this);
}

// Converted from thiscall void CPed::Say(ushort) 0x5226B0 
void CPed::Say(unsigned short arg0) {
    plugin::CallMethod<0x5226B0, CPed *, unsigned short>(this, arg0);
}

// Converted from thiscall void CPed::Say(ushort,int) 0x4EEFA0 
void CPed::Say(unsigned short arg0, int arg1) {
    plugin::CallMethod<0x4EEFA0, CPed *, unsigned short, int>(this, arg0, arg1);
}

// Converted from thiscall void CPed::ScanForDelayedResponseThreats(void) 0x50BD80 
void CPed::ScanForDelayedResponseThreats() {
    plugin::CallMethod<0x50BD80, CPed *>(this);
}

// Converted from thiscall void CPed::ScanForInterestingStuff(void) 0x50AD50 
void CPed::ScanForInterestingStuff() {
    plugin::CallMethod<0x50AD50, CPed *>(this);
}

// Converted from thiscall void CPed::ScanForThreats(void) 0x50BE00 
void CPed::ScanForThreats() {
    plugin::CallMethod<0x50BE00, CPed *>(this);
}

// Converted from thiscall bool CPed::Seek(void) 0x4FBD00 
bool CPed::Seek() {
    return plugin::CallMethodAndReturn<bool, 0x4FBD00, CPed *>(this);
}

// Converted from thiscall void CPed::SeekBoatPosition(void) 0x512740 
void CPed::SeekBoatPosition() {
    plugin::CallMethod<0x512740, CPed *>(this);
}

// Converted from thiscall void CPed::SeekCar(void) 0x4F4AD0 
void CPed::SeekCar() {
    plugin::CallMethod<0x4F4AD0, CPed *>(this);
}

// Converted from thiscall void CPed::SeekFollowingPath(void) 0x4FA1C0 
void CPed::SeekFollowingPath() {
    plugin::CallMethod<0x4FA1C0, CPed *>(this);
}

// Converted from thiscall bool CPed::SelectGunIfArmed(void) 0x51C800 
bool CPed::SelectGunIfArmed() {
    return plugin::CallMethodAndReturn<bool, 0x51C800, CPed *>(this);
}

// Converted from thiscall void CPed::ServiceTalking(void) 0x522850 
void CPed::ServiceTalking() {
    plugin::CallMethod<0x522850, CPed *>(this);
}

// Converted from thiscall bool CPed::ServiceTalkingWhenDead(void) 0x522990 
bool CPed::ServiceTalkingWhenDead() {
    return plugin::CallMethodAndReturn<bool, 0x522990, CPed *>(this);
}

// Converted from thiscall void CPed::SetAimFlag(CEntity *aimingTo) 0x50B510
void CPed::SetAimFlag(CEntity* aimingTo) {
    plugin::CallMethod<0x50B510, CPed *, CEntity*>(this, aimingTo);
}

// Converted from thiscall void CPed::SetAimFlag(float heading) 0x50B5B0
void CPed::SetAimFlag(float heading) {
    plugin::CallMethod<0x50B5B0, CPed *, float>(this, heading);
}

// Converted from thiscall void CPed::SetAmmo(eWeaponType weaponType, uint ammo) 0x4FF780
void CPed::SetAmmo(eWeaponType weaponType, unsigned int ammo) {
    plugin::CallMethod<0x4FF780, CPed *, eWeaponType, unsigned int>(this, weaponType, ammo);
}

// Converted from cdecl void CPed::SetAnimOffsetForEnterOrExitVehicle(void) 0x5155E0
void CPed::SetAnimOffsetForEnterOrExitVehicle() {
    plugin::Call<0x5155E0>();
}

// Converted from thiscall void CPed::SetAnswerMobile(void) 0x4F59C0 
void CPed::SetAnswerMobile() {
    plugin::CallMethod<0x4F59C0, CPed *>(this);
}

// Converted from thiscall void CPed::SetAttack(CEntity *entity) 0x52D1C0
void CPed::SetAttack(CEntity* entity) {
    plugin::CallMethod<0x52D1C0, CPed *, CEntity*>(this, entity);
}

// Converted from thiscall void CPed::SetAttackTimer(uint time) 0x4FCAB0
void CPed::SetAttackTimer(unsigned int time) {
    plugin::CallMethod<0x4FCAB0, CPed *, unsigned int>(this, time);
}

// Converted from thiscall void CPed::SetBeingDraggedFromCar(CVehicle *vehicle,uint,bool) 0x518430
void CPed::SetBeingDraggedFromCar(CVehicle* vehicle, unsigned int arg1, bool arg2) {
    plugin::CallMethod<0x518430, CPed *, CVehicle*, unsigned int, bool>(this, vehicle, arg1, arg2);
}

// Converted from thiscall void CPed::SetCarJack(CVehicle *vehicle) 0x5188A0
void CPed::SetCarJack(CVehicle* vehicle) {
    plugin::CallMethod<0x5188A0, CPed *, CVehicle*>(this, vehicle);
}

// Converted from thiscall void CPed::SetCarJack_AllClear(CVehicle *vehicle,uint,uint) 0x518690
void CPed::SetCarJack_AllClear(CVehicle* vehicle, unsigned int arg1, unsigned int arg2) {
    plugin::CallMethod<0x518690, CPed *, CVehicle*, unsigned int, unsigned int>(this, vehicle, arg1, arg2);
}

// Converted from thiscall void CPed::SetChat(CEntity *entity,uint) 0x4F6220
void CPed::SetChat(CEntity* entity, unsigned int arg1) {
    plugin::CallMethod<0x4F6220, CPed *, CEntity*, unsigned int>(this, entity, arg1);
}

// Converted from thiscall void CPed::SetCurrentWeapon(eWeaponType weaponType) 0x4FF8E0
void CPed::SetCurrentWeapon(eWeaponType weaponType) {
    plugin::CallMethod<0x4FF8E0, CPed *, eWeaponType>(this, weaponType);
}

// Converted from thiscall void CPed::SetCurrentWeapon(int slot) 0x4FF900
void CPed::SetCurrentWeapon(int slot) {
    plugin::CallMethod<0x4FF900, CPed *, int>(this, slot);
}

// Converted from thiscall void CPed::SetDead(void) 0x4F6430 
void CPed::SetDead() {
    plugin::CallMethod<0x4F6430, CPed *>(this);
}

// Converted from thiscall void CPed::SetDie(AnimationId,float,float) 0x4F65C0 
//void CPed::SetDie(AnimationId arg0, float arg1, float arg2) {
//    plugin::CallMethod<0x4F65C0, CPed *, AnimationId, float, float>(this, arg0, arg1, arg2);
//}

// Converted from thiscall void CPed::SetDirectionToWalkAroundObject(CEntity *entity) 0x5019A0
void CPed::SetDirectionToWalkAroundObject(CEntity* entity) {
    plugin::CallMethod<0x5019A0, CPed *, CEntity*>(this, entity);
}

// Converted from thiscall void CPed::SetDirectionToWalkAroundVehicle(CVehicle *vehicle) 0x5035B0
void CPed::SetDirectionToWalkAroundVehicle(CVehicle* vehicle) {
    plugin::CallMethod<0x5035B0, CPed *, CVehicle*>(this, vehicle);
}

// Converted from thiscall void CPed::SetDuck(uint,bool) 0x512C10 
void CPed::SetDuck(unsigned int arg0, bool arg1) {
    plugin::CallMethod<0x512C10, CPed *, unsigned int, bool>(this, arg0, arg1);
}

// Converted from thiscall void CPed::SetEnterCar(CVehicle *vehicle,uint) 0x518080
void CPed::SetEnterCar(CVehicle* vehicle, unsigned int arg1) {
    plugin::CallMethod<0x518080, CPed *, CVehicle*, unsigned int>(this, vehicle, arg1);
}

// Converted from thiscall void CPed::SetEnterCar_AllClear(CVehicle *vehicle,uint,uint) 0x517DE0
void CPed::SetEnterCar_AllClear(CVehicle* vehicle, unsigned int arg1, unsigned int arg2) {
    plugin::CallMethod<0x517DE0, CPed *, CVehicle*, unsigned int, unsigned int>(this, vehicle, arg1, arg2);
}

// Converted from thiscall void CPed::SetEvasiveDive(CPhysical *,uchar) 0x4F6A20 
void CPed::SetEvasiveDive(CPhysical* arg0, unsigned char arg1) {
    plugin::CallMethod<0x4F6A20, CPed *, CPhysical*, unsigned char>(this, arg0, arg1);
}

// Converted from thiscall void CPed::SetEvasiveStep(CPhysical *,uchar) 0x4F7170 
void CPed::SetEvasiveStep(CPhysical* arg0, unsigned char arg1) {
    plugin::CallMethod<0x4F7170, CPed *, CPhysical*, unsigned char>(this, arg0, arg1);
}

// Converted from thiscall void CPed::SetExitBoat(CVehicle *boat) 0x517670 
void CPed::SetExitBoat(CVehicle* boat) {
    plugin::CallMethod<0x517670, CPed *, CVehicle*>(this, boat);
}

// Converted from thiscall void CPed::SetExitCar(CVehicle *vehicle,uint) 0x516C60
void CPed::SetExitCar(CVehicle* vehicle, unsigned int arg1) {
    plugin::CallMethod<0x516C60, CPed *, CVehicle*, unsigned int>(this, vehicle, arg1);
}

// Converted from thiscall void CPed::SetFall(int,AnimationId,uchar) 0x4FD9F0 
//void CPed::SetFall(int arg0, AnimationId arg1, unsigned char arg2) {
//    plugin::CallMethod<0x4FD9F0, CPed *, int, AnimationId, unsigned char>(this, arg0, arg1, arg2);
//}

// Converted from thiscall void CPed::SetFlee(CEntity *,int) 0x4FB820 
void CPed::SetFlee(CEntity* arg0, int arg1) {
    plugin::CallMethod<0x4FB820, CPed *, CEntity*, int>(this, arg0, arg1);
}

// Converted from thiscall void CPed::SetFlee(CVector2D const&,int) 0x4FBA90 
void CPed::SetFlee(CVector2D const& arg0, int arg1) {
    plugin::CallMethod<0x4FBA90, CPed *, CVector2D const&, int>(this, arg0, arg1);
}

// Converted from thiscall void CPed::SetFollowPath(CVector const&,float,eMoveState,CEntity *,CEntity *,int) 0x4F9F60 
void CPed::SetFollowPath(CVector const& arg0, float arg1, eMoveState arg2, CEntity* arg3, CEntity* arg4, int arg5) {
    plugin::CallMethod<0x4F9F60, CPed *, CVector const&, float, eMoveState, CEntity*, CEntity*, int>(this, arg0, arg1, arg2, arg3, arg4, arg5);
}

// Converted from thiscall bool CPed::SetFollowPathDynamic(void) 0x4F7990 
bool CPed::SetFollowPathDynamic() {
    return plugin::CallMethodAndReturn<bool, 0x4F7990, CPed *>(this);
}

// Converted from thiscall bool CPed::SetFollowPathStatic(void) 0x4F99F0 
bool CPed::SetFollowPathStatic() {
    return plugin::CallMethodAndReturn<bool, 0x4F99F0, CPed *>(this);
}

// Converted from thiscall void CPed::SetFormation(eFormation) 0x51A020 
void CPed::SetFormation(eFormation arg0) {
    plugin::CallMethod<0x51A020, CPed *, eFormation>(this, arg0);
}

// Converted from thiscall void CPed::SetGetUp(void) 0x4FCF60 
void CPed::SetGetUp() {
    plugin::CallMethod<0x4FCF60, CPed *>(this);
}

// Converted from thiscall void CPed::SetIdle(void) 0x4FDFD0 
void CPed::SetIdle() {
    plugin::CallMethod<0x4FDFD0, CPed *>(this);
}

// Converted from thiscall void CPed::SetInTheAir(void) 0x4FD610 
void CPed::SetInTheAir() {
    plugin::CallMethod<0x4FD610, CPed *>(this);
}

// Converted from thiscall void CPed::SetInvestigateEvent(eEventType eventType,CVector2D,float,ushort,float) 0x527490
void CPed::SetInvestigateEvent(eEventType eventType, CVector2D arg1, float arg2, unsigned short arg3, float arg4) {
    plugin::CallMethod<0x527490, CPed *, eEventType, CVector2D, float, unsigned short, float>(this, eventType, arg1, arg2, arg3, arg4);
}

// Converted from thiscall void CPed::SetJump(void) 0x4F03C0 
void CPed::SetJump() {
    plugin::CallMethod<0x4F03C0, CPed *>(this);
}

// Converted from thiscall void CPed::SetLanding(void) 0x4FD3A0 
void CPed::SetLanding() {
    plugin::CallMethod<0x4FD3A0, CPed *>(this);
}

// Converted from thiscall void CPed::SetLeader(CPed* ped) 0x4F07D0 
void CPed::SetLeader(CPed* ped) {
    plugin::CallMethod<0x4F07D0, CPed *, CPed*>(this, ped);
}

// Converted from thiscall void CPed::SetLook(CEntity *entity) 0x4FCB10
void CPed::SetLook(CEntity* entity) {
    plugin::CallMethod<0x4FCB10, CPed *, CEntity*>(this, entity);
}

// Converted from thiscall void CPed::SetLookFlag(CEntity *lookingTo,bool likeUnused,bool) 0x50BB70
void CPed::SetLookFlag(CEntity* lookingTo, bool likeUnused, bool arg2) {
    plugin::CallMethod<0x50BB70, CPed *, CEntity*, bool, bool>(this, lookingTo, likeUnused, arg2);
}

// Converted from thiscall void CPed::SetLookFlag(float lookHeading,bool likeUnused,bool) 0x50BC40
void CPed::SetLookFlag(float lookHeading, bool likeUnused, bool arg2) {
    plugin::CallMethod<0x50BC40, CPed *, float, bool, bool>(this, lookHeading, likeUnused, arg2);
}

// Converted from thiscall void CPed::SetLookTimer(uint time) 0x4FCAF0
void CPed::SetLookTimer(unsigned int time) {
    plugin::CallMethod<0x4FCAF0, CPed *, unsigned int>(this, time);
}

// Converted from thiscall void CPed::SetMoveState(eMoveState moveState) 0x50D110
void CPed::SetMoveState(eMoveState moveState) {
    plugin::CallMethod<0x50D110, CPed *, eMoveState>(this, moveState);
}

// Converted from thiscall void CPed::SetNewAttraction(CPedAttractor *,CVector const&,float,float,int) 0x4EF7C0 
//void CPed::SetNewAttraction(CPedAttractor* arg0, CVector const& arg1, float arg2, float arg3, int arg4) {
//    plugin::CallMethod<0x4EF7C0, CPed *, CPedAttractor*, CVector const&, float, float, int>(this, arg0, arg1, arg2, arg3, arg4);
//}

// Converted from thiscall void CPed::SetObjective(eObjective objective) 0x5224B0
void CPed::SetObjective(eObjective objective) {
    plugin::CallMethod<0x5224B0, CPed *, eObjective>(this, objective);
}

// Converted from thiscall void CPed::SetObjective(eObjective objective,CVector) 0x521840
void CPed::SetObjective(eObjective objective, CVector arg1) {
    plugin::CallMethod<0x521840, CPed *, eObjective, CVector>(this, objective, arg1);
}

// Converted from thiscall void CPed::SetObjective(eObjective objective,float,CVector const&) 0x5217E0
void CPed::SetObjective(eObjective objective, float arg1, CVector const& arg2) {
    plugin::CallMethod<0x5217E0, CPed *, eObjective, float, CVector const&>(this, objective, arg1, arg2);
}

// Converted from thiscall void CPed::SetObjective(eObjective objective,short,short) 0x521D10
void CPed::SetObjective(eObjective objective, short arg1, short arg2) {
    plugin::CallMethod<0x521D10, CPed *, eObjective, short, short>(this, objective, arg1, arg2);
}

// Converted from thiscall void CPed::SetObjective(eObjective objective,void *) 0x521F10
void CPed::SetObjective(eObjective objective, void* arg1) {
    plugin::CallMethod<0x521F10, CPed *, eObjective, void*>(this, objective, arg1);
}

// Converted from thiscall void CPed::SetObjectiveTimer(uint time) 0x522660
void CPed::SetObjectiveTimer(unsigned int time) {
    plugin::CallMethod<0x522660, CPed *, unsigned int>(this, time);
}

// Converted from thiscall void CPed::SetPedPositionInCar(void) 0x4F42F0 
void CPed::SetPedPositionInCar() {
    plugin::CallMethod<0x4F42F0, CPed *>(this);
}

// Converted from thiscall void CPed::SetPedStats(ePedStats statsType) 0x50D8E0
void CPed::SetPedStats(ePedStats statsType) {
    plugin::CallMethod<0x50D8E0, CPed *, ePedStats>(this, statsType);
}

// Converted from thiscall void CPed::SetPointGunAt(CEntity *entity) 0x52DDF0
void CPed::SetPointGunAt(CEntity* entity) {
    plugin::CallMethod<0x52DDF0, CPed *, CEntity*>(this, entity);
}

// Converted from thiscall void CPed::SetRadioStation(void) 0x4EFBD0 
void CPed::SetRadioStation() {
    plugin::CallMethod<0x4EFBD0, CPed *>(this);
}

// Converted from thiscall void CPed::SetSeek(CEntity *,float) 0x4FC570 
void CPed::SetSeek(CEntity* arg0, float arg1) {
    plugin::CallMethod<0x4FC570, CPed *, CEntity*, float>(this, arg0, arg1);
}

// Converted from thiscall void CPed::SetSeek(CVector,float) 0x4FC740 
void CPed::SetSeek(CVector arg0, float arg1) {
    plugin::CallMethod<0x4FC740, CPed *, CVector, float>(this, arg0, arg1);
}

// Converted from thiscall void CPed::SetSeekBoatPosition(CVehicle *boat) 0x512850 
void CPed::SetSeekBoatPosition(CVehicle* boat) {
    plugin::CallMethod<0x512850, CPed *, CVehicle*>(this, boat);
}

// Converted from thiscall void CPed::SetSeekCar(CVehicle *car,uint) 0x4F54D0 
void CPed::SetSeekCar(CVehicle* car, unsigned int arg1) {
    plugin::CallMethod<0x4F54D0, CPed *, CVehicle*, unsigned int>(this, car, arg1);
}

// Converted from thiscall void CPed::SetShootTimer(uint time) 0x4FCA90
void CPed::SetShootTimer(unsigned int time) {
    plugin::CallMethod<0x4FCA90, CPed *, unsigned int>(this, time);
}

// Converted from thiscall void CPed::SetSolicit(uint) 0x4F1400 
void CPed::SetSolicit(unsigned int arg0) {
    plugin::CallMethod<0x4F1400, CPed *, unsigned int>(this, arg0);
}

// Converted from thiscall void CPed::SetStoredObjective(void) 0x522620 
void CPed::SetStoredObjective() {
    plugin::CallMethod<0x522620, CPed *>(this);
}

// Converted from thiscall void CPed::SetStoredState(void) 0x50CC40 
void CPed::SetStoredState() {
    plugin::CallMethod<0x50CC40, CPed *>(this);
}

// Converted from thiscall void CPed::SetWaitState(eWaitState waitState,void *) 0x4F28A0
void CPed::SetWaitState(eWaitState waitState, void* arg1) {
    plugin::CallMethod<0x4F28A0, CPed *, eWaitState, void*>(this, waitState, arg1);
}

// Converted from thiscall void CPed::SetWanderPath(char arg0) 0x4FACC0 
void CPed::SetWanderPath(char arg0) {
    plugin::CallMethod<0x4FACC0, CPed *, signed>(this, arg0);
}

// Converted from thiscall void CPed::Solicit(void) 0x4F11D0 
void CPed::Solicit() {
    plugin::CallMethod<0x4F11D0, CPed *>(this);
}

// Converted from thiscall void CPed::SortPeds(CPed** pedList,int,int) 0x50D120
void CPed::SortPeds(CPed** pedList, int arg1, int arg2) {
    plugin::CallMethod<0x50D120, CPed *, CPed**, int, int>(this, pedList, arg1, arg2);
}

// Converted from thiscall void CPed::SpawnFlyingComponent(int,char arg1) 0x5259F0 
void CPed::SpawnFlyingComponent(int arg0, char arg1) {
    plugin::CallMethod<0x5259F0, CPed *, int, char>(this, arg0, arg1);
}

// Converted from thiscall void CPed::StartFightAttack(uchar) 0x52AD70 
void CPed::StartFightAttack(unsigned char arg0) {
    plugin::CallMethod<0x52AD70, CPed *, unsigned char>(this, arg0);
}

// Converted from thiscall void CPed::StartFightDefend(uchar,uchar,uchar) 0x52A340 
void CPed::StartFightDefend(unsigned char arg0, unsigned char arg1, unsigned char arg2) {
    plugin::CallMethod<0x52A340, CPed *, unsigned char, unsigned char, unsigned char>(this, arg0, arg1, arg2);
}

// Converted from thiscall void CPed::StopNonPartialAnims(void) 0x50CD20 
void CPed::StopNonPartialAnims() {
    plugin::CallMethod<0x50CD20, CPed *>(this);
}

// Converted from thiscall bool CPed::TurnBody(void) 0x4FC970 
bool CPed::TurnBody() {
    return plugin::CallMethodAndReturn<bool, 0x4FC970, CPed *>(this);
}

// Converted from thiscall void CPed::Undress(char const* modelName) 0x4EF030
void CPed::Undress(char const* modelName) {
    plugin::CallMethod<0x4EF030, CPed *, char const*>(this, modelName);
}

// Converted from thiscall void CPed::UpdateFromLeader(void) 0x521070 
void CPed::UpdateFromLeader() {
    plugin::CallMethod<0x521070, CPed *>(this);
}

// Converted from thiscall void CPed::UpdatePosition(void) 0x50A040 
void CPed::UpdatePosition() {
    plugin::CallMethod<0x50A040, CPed *>(this);
}

// Converted from thiscall bool CPed::UseGroundColModel(void) 0x501900 
bool CPed::UseGroundColModel() {
    return plugin::CallMethodAndReturn<bool, 0x501900, CPed *>(this);
}

// Converted from thiscall void CPed::Wait(void) 0x4F18A0 
void CPed::Wait() {
    plugin::CallMethod<0x4F18A0, CPed *>(this);
}

// Converted from thiscall void CPed::WanderPath(void) 0x4FA680 
void CPed::WanderPath() {
    plugin::CallMethod<0x4FA680, CPed *>(this);
}

// Converted from thiscall void CPed::WarpPedIntoCar(CVehicle *vehicle) 0x4EF8B0
void CPed::WarpPedIntoCar(CVehicle* vehicle) {
    plugin::CallMethod<0x4EF8B0, CPed *, CVehicle*>(this, vehicle);
}

// Converted from thiscall void CPed::WarpPedToNearEntityOffScreen(CEntity *entity) 0x5110C0
void CPed::WarpPedToNearEntityOffScreen(CEntity* entity) {
    plugin::CallMethod<0x5110C0, CPed *, CEntity*>(this, entity);
}

// Converted from thiscall void CPed::WarpPedToNearLeaderOffScreen(void) 0x511480 
void CPed::WarpPedToNearLeaderOffScreen() {
    plugin::CallMethod<0x511480, CPed *>(this);
}

// Converted from thiscall bool CPed::WillChat(CPed* ped) 0x50AC70 
bool CPed::WillChat(CPed* ped) {
    return plugin::CallMethodAndReturn<bool, 0x50AC70, CPed *, CPed*>(this, ped);
}

// Converted from thiscall float CPed::WorkOutHeadingForMovingFirstPerson(float heading) 0x50A530
float CPed::WorkOutHeadingForMovingFirstPerson(float heading) {
    return plugin::CallMethodAndReturn<float, 0x50A530, CPed *, float>(this, heading);
}

// Converted from cdecl void CPed::operator delete(void *data) 0x50DA20
void CPed::operator delete(void* data) {
    plugin::Call<0x50DA20, void*>(data);
}

// Converted from cdecl void* CPed::operator new(uint size) 0x50DA60
void* CPed::operator new(unsigned int size) {
    return plugin::CallAndReturn<void*, 0x50DA60, unsigned int>(size);
}

// Converted from cdecl void* CPed::operator new(uint size,int) 0x50DA40
void* CPed::operator new(unsigned int size, int arg1) {
    return plugin::CallAndReturn<void*, 0x50DA40, unsigned int, int>(size, arg1);
}


// Converted from thiscall void CPed::CPed(uint modelIndex) 0x50DC20
CPed::CPed(ePedType pedType) : CPhysical(plugin::dummy), m_aWeapons{ plugin::dummy, plugin::dummy, plugin::dummy,
plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy } {
    plugin::CallMethod<0x50DC20, CPed *, ePedType>(this, pedType);
}
