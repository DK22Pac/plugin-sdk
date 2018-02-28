/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPlayerPed.h"

// Converted from thiscall void CPlayerPed::AnnoyPlayerPed(bool) 0x4F3700 
void CPlayerPed::AnnoyPlayerPed(bool arg0) {
    plugin::CallMethod<0x4F3700, CPlayerPed *, bool>(this, arg0);
}

// Converted from thiscall void CPlayerPed::CPlayerPed(void) 0x4EF7E0 
CPlayerPed::CPlayerPed() : CPed(plugin::dummy) {
    plugin::CallMethod<0x4EF7E0, CPlayerPed *>(this);
}

// Converted from thiscall void CPlayerPed::ClearAdrenaline(void) 0x4F3730 
void CPlayerPed::ClearAdrenaline() {
    plugin::CallMethod<0x4F3730, CPlayerPed *>(this);
}

// Converted from thiscall void CPlayerPed::ClearWeaponTarget(void) 0x4F28A0 
void CPlayerPed::ClearWeaponTarget() {
    plugin::CallMethod<0x4F28A0, CPlayerPed *>(this);
}

// Converted from cdecl void CPlayerPed::DeactivatePlayerPed(int playerId) 0x4EFC00
void CPlayerPed::DeactivatePlayerPed(int playerId) {
    plugin::Call<0x4EFC00, int>(playerId);
}

// Converted from thiscall void CPlayerPed::DoStuffToGoOnFire(void) 0x4F36E0 
void CPlayerPed::DoStuffToGoOnFire() {
    plugin::CallMethod<0x4F36E0, CPlayerPed *>(this);
}

// Converted from thiscall bool CPlayerPed::DoWeaponSmoothSpray(void) 0x4F1380 
bool CPlayerPed::DoWeaponSmoothSpray() {
    return plugin::CallMethodAndReturn<bool, 0x4F1380, CPlayerPed *>(this);
}

// Converted from thiscall bool CPlayerPed::DoesTargetHaveToBeBroken(CVector,CWeapon *weapon) 0x4F3350
bool CPlayerPed::DoesTargetHaveToBeBroken(CVector arg0, CWeapon* weapon) {
    return plugin::CallMethodAndReturn<bool, 0x4F3350, CPlayerPed *, CVector, CWeapon*>(this, arg0, weapon);
}

// Converted from thiscall void CPlayerPed::EvaluateNeighbouringTarget(CEntity *target,CEntity **outTarget,float *outTargetPriority,float maxDistance,float,bool) 0x4F2FA0
void CPlayerPed::EvaluateNeighbouringTarget(CEntity* target, CEntity** outTarget, float* outTargetPriority, float maxDistance, float arg4, bool arg5) {
    plugin::CallMethod<0x4F2FA0, CPlayerPed *, CEntity*, CEntity**, float*, float, float, bool>(this, target, outTarget, outTargetPriority, maxDistance, arg4, arg5);
}

// Converted from thiscall void CPlayerPed::EvaluateTarget(CEntity *target, CEntity **outTarget, float *outTargetPriority, float maxDistance,float,bool) 0x4F2B60
void CPlayerPed::EvaluateTarget(CEntity* target, CEntity** outTarget, float* outTargetPriority, float maxDistance, float arg4, bool arg5) {
    plugin::CallMethod<0x4F2B60, CPlayerPed *, CEntity*, CEntity**, float*, float, float, bool>(this, target, outTarget, outTargetPriority, maxDistance, arg4, arg5);
}

// Converted from thiscall bool CPlayerPed::FindNextWeaponLockOnTarget(CEntity *target,bool) 0x4F2D50
bool CPlayerPed::FindNextWeaponLockOnTarget(CEntity* target, bool arg1) {
    return plugin::CallMethodAndReturn<bool, 0x4F2D50, CPlayerPed *, CEntity*, bool>(this, target, arg1);
}

// Converted from thiscall bool CPlayerPed::FindWeaponLockOnTarget(void) 0x4F28D0 
bool CPlayerPed::FindWeaponLockOnTarget() {
    return plugin::CallMethodAndReturn<bool, 0x4F28D0, CPlayerPed *>(this);
}

// Converted from thiscall CPlayerInfo* CPlayerPed::GetPlayerInfoForThisPlayerPed(void) 0x4F36C0
CPlayerInfo* CPlayerPed::GetPlayerInfoForThisPlayerPed() {
    return plugin::CallMethodAndReturn<CPlayerInfo*, 0x4F36C0, CPlayerPed *>(this);
}

// Converted from thiscall bool CPlayerPed::IsThisPedAttackingPlayer(CPed *ped) 0x4F2D00 
bool CPlayerPed::IsThisPedAttackingPlayer(CPed* ped) {
    return plugin::CallMethodAndReturn<bool, 0x4F2D00, CPlayerPed *, CPed*>(this, ped);
}

// Converted from thiscall void CPlayerPed::KeepAreaAroundPlayerClear(void) 0x4F3460 
void CPlayerPed::KeepAreaAroundPlayerClear() {
    plugin::CallMethod<0x4F3460, CPlayerPed *>(this);
}

// Converted from thiscall void CPlayerPed::MakeChangesForNewWeapon(signed char weaponSlot) 0x4F2560
void CPlayerPed::MakeChangesForNewWeapon(signed char weaponSlot) {
    plugin::CallMethod<0x4F2560, CPlayerPed *, signed>(this, weaponSlot);
}

// Converted from thiscall void CPlayerPed::MakeObjectTargettable(int) 0x4F32B0 
void CPlayerPed::MakeObjectTargettable(int arg0) {
    plugin::CallMethod<0x4F32B0, CPlayerPed *, int>(this, arg0);
}

// Converted from thiscall void CPlayerPed::PlayerControl1stPersonRunAround(CPad *pad) 0x4F1970 
void CPlayerPed::PlayerControl1stPersonRunAround(CPad* pad) {
    plugin::CallMethod<0x4F1970, CPlayerPed *, CPad*>(this, pad);
}

// Converted from thiscall void CPlayerPed::PlayerControlFighter(CPad *pad) 0x4F1810 
void CPlayerPed::PlayerControlFighter(CPad* pad) {
    plugin::CallMethod<0x4F1810, CPlayerPed *, CPad*>(this, pad);
}

// Converted from thiscall void CPlayerPed::PlayerControlM16(CPad *pad) 0x4F1DF0 
void CPlayerPed::PlayerControlM16(CPad* pad) {
    plugin::CallMethod<0x4F1DF0, CPlayerPed *, CPad*>(this, pad);
}

// Converted from thiscall void CPlayerPed::PlayerControlSniper(CPad *pad) 0x4F1CF0 
void CPlayerPed::PlayerControlSniper(CPad* pad) {
    plugin::CallMethod<0x4F1CF0, CPlayerPed *, CPad*>(this, pad);
}

// Converted from thiscall void CPlayerPed::PlayerControlZelda(CPad *pad) 0x4F13C0 
void CPlayerPed::PlayerControlZelda(CPad* pad) {
    plugin::CallMethod<0x4F13C0, CPlayerPed *, CPad*>(this, pad);
}

// Converted from thiscall void CPlayerPed::ProcessAnimGroups(void) 0x4F2640 
void CPlayerPed::ProcessAnimGroups() {
    plugin::CallMethod<0x4F2640, CPlayerPed *>(this);
}

// Converted from thiscall void CPlayerPed::ProcessPlayerWeapon(CPad *pad) 0x4F1EF0 
void CPlayerPed::ProcessPlayerWeapon(CPad* pad) {
    plugin::CallMethod<0x4F1EF0, CPlayerPed *, CPad*>(this, pad);
}

// Converted from thiscall void CPlayerPed::ProcessWeaponSwitch(CPad *pad) 0x4F2310 
void CPlayerPed::ProcessWeaponSwitch(CPad* pad) {
    plugin::CallMethod<0x4F2310, CPlayerPed *, CPad*>(this, pad);
}

// Converted from thiscall void CPlayerPed::ReApplyMoveAnims(void) 0x4F07C0 
void CPlayerPed::ReApplyMoveAnims() {
    plugin::CallMethod<0x4F07C0, CPlayerPed *>(this);
}

// Converted from cdecl void CPlayerPed::ReactivatePlayerPed(int playerId) 0x4EFC20
void CPlayerPed::ReactivatePlayerPed(int playerId) {
    plugin::Call<0x4EFC20, int>(playerId);
}

// Converted from thiscall void CPlayerPed::RestoreSprintEnergy(float) 0x4F1340 
void CPlayerPed::RestoreSprintEnergy(float arg0) {
    plugin::CallMethod<0x4F1340, CPlayerPed *, float>(this, arg0);
}

// Converted from thiscall void CPlayerPed::RunningLand(CPad *pad) 0x4F31D0 
void CPlayerPed::RunningLand(CPad* pad) {
    plugin::CallMethod<0x4F31D0, CPlayerPed *, CPad*>(this, pad);
}

// Converted from thiscall void CPlayerPed::SetInitialState(void) 0x4EFC40 
void CPlayerPed::SetInitialState() {
    plugin::CallMethod<0x4EFC40, CPlayerPed *>(this);
}

// Converted from thiscall void CPlayerPed::SetRealMoveAnim(void) 0x4F0880 
void CPlayerPed::SetRealMoveAnim() {
    plugin::CallMethod<0x4F0880, CPlayerPed *>(this);
}

// Converted from thiscall void CPlayerPed::SetWantedLevel(int level) 0x4F3190
void CPlayerPed::SetWantedLevel(int level) {
    plugin::CallMethod<0x4F3190, CPlayerPed *, int>(this, level);
}

// Converted from thiscall void CPlayerPed::SetWantedLevelNoDrop(int level) 0x4F31B0
void CPlayerPed::SetWantedLevelNoDrop(int level) {
    plugin::CallMethod<0x4F31B0, CPlayerPed *, int>(this, level);
}

// Converted from cdecl void CPlayerPed::SetupPlayerPed(int playerId) 0x4EFB60
void CPlayerPed::SetupPlayerPed(int playerId) {
    plugin::Call<0x4EFB60, int>(playerId);
}

// Converted from thiscall void CPlayerPed::UseSprintEnergy(void) 0x4F12A0 
void CPlayerPed::UseSprintEnergy() {
    plugin::CallMethod<0x4F12A0, CPlayerPed *>(this);
}
