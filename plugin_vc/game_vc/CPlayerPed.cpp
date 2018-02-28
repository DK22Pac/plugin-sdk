/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPlayerPed.h"

// Converted from thiscall void CPlayerPed::AnnoyPlayerPed(bool) 0x531CF0 
void CPlayerPed::AnnoyPlayerPed(bool arg0) {
    plugin::CallMethod<0x531CF0, CPlayerPed *, bool>(this, arg0);
}

// Converted from thiscall void CPlayerPed::CPlayerPed(void) 0x5384B0 
CPlayerPed::CPlayerPed() : CPed(plugin::dummy) {
    plugin::CallMethod<0x5384B0, CPlayerPed *>(this);
}

// Converted from thiscall void CPlayerPed::ClearAdrenaline(void) 0x531CC0 
void CPlayerPed::ClearAdrenaline() {
    plugin::CallMethod<0x531CC0, CPlayerPed *>(this);
}

// Converted from thiscall void CPlayerPed::ClearWeaponTarget(void) 0x533B30 
void CPlayerPed::ClearWeaponTarget() {
    plugin::CallMethod<0x533B30, CPlayerPed *>(this);
}

// Converted from cdecl void CPlayerPed::DeactivatePlayerPed(int playerId) 0x5383C0
void CPlayerPed::DeactivatePlayerPed(int playerId) {
    plugin::Call<0x5383C0, int>(playerId);
}

// Converted from thiscall void CPlayerPed::DoStuffToGoOnFire(void) 0x531D20 
void CPlayerPed::DoStuffToGoOnFire() {
    plugin::CallMethod<0x531D20, CPlayerPed *>(this);
}

// Converted from thiscall float CPlayerPed::DoWeaponSmoothSpray(void) 0x536410 
float CPlayerPed::DoWeaponSmoothSpray() {
    return plugin::CallMethodAndReturn<float, 0x536410, CPlayerPed *>(this);
}

// Converted from thiscall bool CPlayerPed::DoesPlayerWantNewWeapon(eWeaponType weaponType,bool enable) 0x535240
bool CPlayerPed::DoesPlayerWantNewWeapon(eWeaponType weaponType, bool enable) {
    return plugin::CallMethodAndReturn<bool, 0x535240, CPlayerPed *, eWeaponType, bool>(this, weaponType, enable);
}

// Converted from thiscall void CPlayerPed::EvaluateNeighbouringTarget(CEntity *target,CEntity **outTarget,float *outTargetPriority,float maxDistance,float,bool,bool,bool) 0x5320B0
void CPlayerPed::EvaluateNeighbouringTarget(CEntity* target, CEntity** outTarget, float* outTargetPriority, float maxDistance, float arg4, bool arg5, bool arg6, bool arg7) {
    plugin::CallMethod<0x5320B0, CPlayerPed *, CEntity*, CEntity**, float*, float, float, bool, bool, bool>(this, target, outTarget, outTargetPriority, maxDistance, arg4, arg5, arg6, arg7);
}

// Converted from thiscall void CPlayerPed::EvaluateTarget(CEntity *target,CEntity **outTarget,float *outTargetPriority,float maxDistance,float,bool,bool) 0x532360
void CPlayerPed::EvaluateTarget(CEntity* target, CEntity** outTarget, float* outTargetPriority, float maxDistance, float arg4, bool arg5, bool arg6) {
    plugin::CallMethod<0x532360, CPlayerPed *, CEntity*, CEntity**, float*, float, float, bool, bool>(this, target, outTarget, outTargetPriority, maxDistance, arg4, arg5, arg6);
}

// Converted from thiscall int CPlayerPed::FindMeleeAttackPoint(CPed *,CVector &,uint &) 0x531390 
int CPlayerPed::FindMeleeAttackPoint(CPed* arg0, CVector& arg1, unsigned int& arg2) {
    return plugin::CallMethodAndReturn<int, 0x531390, CPlayerPed *, CPed*, CVector&, unsigned int&>(this, arg0, arg1, arg2);
}

// Converted from thiscall short CPlayerPed::FindNewAttackPoints(void) 0x531810
short CPlayerPed::FindNewAttackPoints() {
    return plugin::CallMethodAndReturn<short, 0x531810, CPlayerPed *>(this);
}

// Converted from thiscall bool CPlayerPed::FindNextWeaponLockOnTarget(CEntity *target,bool) 0x532590
bool CPlayerPed::FindNextWeaponLockOnTarget(CEntity* target, bool arg1) {
    return plugin::CallMethodAndReturn<bool, 0x532590, CPlayerPed *, CEntity*, bool>(this, target, arg1);
}

// Converted from thiscall bool CPlayerPed::FindWeaponLockOnTarget(void) 0x533030 
bool CPlayerPed::FindWeaponLockOnTarget() {
    return plugin::CallMethodAndReturn<bool, 0x533030, CPlayerPed *>(this);
}

// Converted from thiscall CPlayerInfo* CPlayerPed::GetPlayerInfoForThisPlayerPed(void) 0x531D40
CPlayerInfo* CPlayerPed::GetPlayerInfoForThisPlayerPed() {
    return plugin::CallMethodAndReturn<CPlayerInfo*, 0x531D40, CPlayerPed *>(this);
}

// Converted from thiscall void CPlayerPed::KeepAreaAroundPlayerClear(void) 0x531D60 
void CPlayerPed::KeepAreaAroundPlayerClear() {
    plugin::CallMethod<0x531D60, CPlayerPed *>(this);
}

// Converted from thiscall void CPlayerPed::MakeChangesForNewWeapon(eWeaponType weaponType) 0x534450
void CPlayerPed::MakeChangesForNewWeapon(eWeaponType weaponType) {
    plugin::CallMethod<0x534450, CPlayerPed *, eWeaponType>(this, weaponType);
}

// Converted from thiscall void CPlayerPed::MakeChangesForNewWeapon(int weaponSlot) 0x534580
void CPlayerPed::MakeChangesForNewWeapon(int weaponSlot) {
    plugin::CallMethod<0x534580, CPlayerPed *, int>(this, weaponSlot);
}

// Converted from thiscall void CPlayerPed::MakeObjectTargettable(int,bool) 0x531FD0 
void CPlayerPed::MakeObjectTargettable(int arg0, bool arg1) {
    plugin::CallMethod<0x531FD0, CPlayerPed *, int, bool>(this, arg0, arg1);
}

// Converted from thiscall void CPlayerPed::PlayIdleAnimations(CPad *pad) 0x535D10 
void CPlayerPed::PlayIdleAnimations(CPad* pad) {
    plugin::CallMethod<0x535D10, CPlayerPed *, CPad*>(this, pad);
}

// Converted from thiscall void CPlayerPed::PlayerControl1stPersonRunAround(CPad *pad) 0x5357D0 
void CPlayerPed::PlayerControl1stPersonRunAround(CPad* pad) {
    plugin::CallMethod<0x5357D0, CPlayerPed *, CPad*>(this, pad);
}

// Converted from thiscall void CPlayerPed::PlayerControlFighter(CPad *pad) 0x535BB0
void CPlayerPed::PlayerControlFighter(CPad* pad) {
    plugin::CallMethod<0x535BB0, CPlayerPed *, CPad*>(this, pad);
}

// Converted from thiscall void CPlayerPed::PlayerControlM16(CPad *pad) 0x5352B0
void CPlayerPed::PlayerControlM16(CPad* pad) {
    plugin::CallMethod<0x5352B0, CPlayerPed *, CPad*>(this, pad);
}

// Converted from thiscall void CPlayerPed::PlayerControlSniper(CPad *pad) 0x535550
void CPlayerPed::PlayerControlSniper(CPad* pad) {
    plugin::CallMethod<0x535550, CPlayerPed *, CPad*>(this, pad);
}

// Converted from thiscall void CPlayerPed::PlayerControlZelda(CPad *pad) 0x535F40
void CPlayerPed::PlayerControlZelda(CPad* pad) {
    plugin::CallMethod<0x535F40, CPlayerPed *, CPad*>(this, pad);
}

// Converted from thiscall void CPlayerPed::ProcessAnimGroups(void) 0x533B80 
void CPlayerPed::ProcessAnimGroups() {
    plugin::CallMethod<0x533B80, CPlayerPed *>(this);
}

// Converted from thiscall void CPlayerPed::ProcessPlayerWeapon(CPad *pad) 0x534890
void CPlayerPed::ProcessPlayerWeapon(CPad* pad) {
    plugin::CallMethod<0x534890, CPlayerPed *, CPad*>(this, pad);
}

// Converted from thiscall void CPlayerPed::ProcessWeaponSwitch(CPad *pad) 0x5345A0
void CPlayerPed::ProcessWeaponSwitch(CPad* pad) {
    plugin::CallMethod<0x5345A0, CPlayerPed *, CPad*>(this, pad);
}

// Converted from thiscall void CPlayerPed::ReApplyMoveAnims(void) 0x5371B0 
void CPlayerPed::ReApplyMoveAnims() {
    plugin::CallMethod<0x5371B0, CPlayerPed *>(this);
}

// Converted from cdecl void CPlayerPed::ReactivatePlayerPed(int playerId) 0x5383A0
void CPlayerPed::ReactivatePlayerPed(int playerId) {
    plugin::Call<0x5383A0, int>(playerId);
}

// Converted from thiscall void CPlayerPed::RemovePedFromMeleeList(CPed *ped) 0x5312A0
void CPlayerPed::RemovePedFromMeleeList(CPed* ped) {
    plugin::CallMethod<0x5312A0, CPlayerPed *, CPed*>(this, ped);
}

// Converted from thiscall void CPlayerPed::SetInitialState(void) 0x5381F0 
void CPlayerPed::SetInitialState() {
    plugin::CallMethod<0x5381F0, CPlayerPed *>(this);
}

// Converted from thiscall void CPlayerPed::SetNearbyPedsToInteractWithPlayer(void) 0x530FB0 
void CPlayerPed::SetNearbyPedsToInteractWithPlayer() {
    plugin::CallMethod<0x530FB0, CPlayerPed *>(this);
}

// Converted from thiscall void CPlayerPed::SetRealMoveAnim(void) 0x536620 
void CPlayerPed::SetRealMoveAnim() {
    plugin::CallMethod<0x536620, CPlayerPed *>(this);
}

// Converted from thiscall void CPlayerPed::SetWantedLevel(int level) 0x532090
void CPlayerPed::SetWantedLevel(int level) {
    plugin::CallMethod<0x532090, CPlayerPed *, int>(this, level);
}

// Converted from thiscall void CPlayerPed::SetWantedLevelNoDrop(int level) 0x532070
void CPlayerPed::SetWantedLevelNoDrop(int level) {
    plugin::CallMethod<0x532070, CPlayerPed *, int>(this, level);
}

// Converted from cdecl void CPlayerPed::SetupPlayerPed(int playerId) 0x5383E0
void CPlayerPed::SetupPlayerPed(int playerId) {
    plugin::Call<0x5383E0, int>(playerId);
}

// Converted from thiscall void CPlayerPed::UpdateMeleeAttackers(void) 0x531600 
void CPlayerPed::UpdateMeleeAttackers() {
    plugin::CallMethod<0x531600, CPlayerPed *>(this);
}

// Converted from thiscall int CPlayerPed::GetWantedLevel(void) 0x599B20
int CPlayerPed::GetWantedLevel() {
    return plugin::CallMethodAndReturn<int, 0x599B20, CPlayerPed *>(this);
}