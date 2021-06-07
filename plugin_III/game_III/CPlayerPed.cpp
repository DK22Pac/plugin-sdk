/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlayerPed.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CPlayerPed) = ADDRESS_BY_VERSION(0x4EF7E0, 0x4EF890, 0x4EF820);
int ctor_gaddr(CPlayerPed) = GLOBAL_ADDRESS_BY_VERSION(0x4EF7E0, 0x4EF890, 0x4EF820);

int dtor_addr(CPlayerPed) = ADDRESS_BY_VERSION(0x4EFB30, 0x4EFBE0, 0x4EFB70);
int dtor_gaddr(CPlayerPed) = GLOBAL_ADDRESS_BY_VERSION(0x4EFB30, 0x4EFBE0, 0x4EFB70);

int del_dtor_addr(CPlayerPed) = ADDRESS_BY_VERSION(0x456920, 0x456920, 0x456920);
int del_dtor_gaddr(CPlayerPed) = GLOBAL_ADDRESS_BY_VERSION(0x456920, 0x456920, 0x456920);

int addrof(CPlayerPed::ProcessControl) = ADDRESS_BY_VERSION(0x4EFD90, 0x4EFE40, 0x4EFDD0);
int gaddrof(CPlayerPed::ProcessControl) = GLOBAL_ADDRESS_BY_VERSION(0x4EFD90, 0x4EFE40, 0x4EFDD0);

void CPlayerPed::ProcessControl() {
    plugin::CallVirtualMethod<8, CPlayerPed *>(this);
}

int addrof(CPlayerPed::SetMoveAnim) = ADDRESS_BY_VERSION(0x4F3760, 0x4F3810, 0x4F37A0);
int gaddrof(CPlayerPed::SetMoveAnim) = GLOBAL_ADDRESS_BY_VERSION(0x4F3760, 0x4F3810, 0x4F37A0);

void CPlayerPed::SetMoveAnim() {
    plugin::CallVirtualMethod<18, CPlayerPed *>(this);
}

int addrof(CPlayerPed::AnnoyPlayerPed) = ADDRESS_BY_VERSION(0x4F3700, 0x4F37B0, 0x4F3740);
int gaddrof(CPlayerPed::AnnoyPlayerPed) = GLOBAL_ADDRESS_BY_VERSION(0x4F3700, 0x4F37B0, 0x4F3740);

void CPlayerPed::AnnoyPlayerPed(bool annoyedByPassingEntity) {
    plugin::CallMethodDynGlobal<CPlayerPed *, bool>(gaddrof(CPlayerPed::AnnoyPlayerPed), this, annoyedByPassingEntity);
}

int addrof(CPlayerPed::ClearAdrenaline) = ADDRESS_BY_VERSION(0x4F3730, 0x4F37E0, 0x4F3770);
int gaddrof(CPlayerPed::ClearAdrenaline) = GLOBAL_ADDRESS_BY_VERSION(0x4F3730, 0x4F37E0, 0x4F3770);

void CPlayerPed::ClearAdrenaline() {
    plugin::CallMethodDynGlobal<CPlayerPed *>(gaddrof(CPlayerPed::ClearAdrenaline), this);
}

int addrof(CPlayerPed::ClearWeaponTarget) = ADDRESS_BY_VERSION(0x4F28A0, 0x4F2950, 0x4F28E0);
int gaddrof(CPlayerPed::ClearWeaponTarget) = GLOBAL_ADDRESS_BY_VERSION(0x4F28A0, 0x4F2950, 0x4F28E0);

void CPlayerPed::ClearWeaponTarget() {
    plugin::CallMethodDynGlobal<CPlayerPed *>(gaddrof(CPlayerPed::ClearWeaponTarget), this);
}

int addrof(CPlayerPed::DoStuffToGoOnFire) = ADDRESS_BY_VERSION(0x4F36E0, 0x4F3790, 0x4F3720);
int gaddrof(CPlayerPed::DoStuffToGoOnFire) = GLOBAL_ADDRESS_BY_VERSION(0x4F36E0, 0x4F3790, 0x4F3720);

void CPlayerPed::DoStuffToGoOnFire() {
    plugin::CallMethodDynGlobal<CPlayerPed *>(gaddrof(CPlayerPed::DoStuffToGoOnFire), this);
}

int addrof(CPlayerPed::DoWeaponSmoothSpray) = ADDRESS_BY_VERSION(0x4F1380, 0x4F1430, 0x4F13C0);
int gaddrof(CPlayerPed::DoWeaponSmoothSpray) = GLOBAL_ADDRESS_BY_VERSION(0x4F1380, 0x4F1430, 0x4F13C0);

bool CPlayerPed::DoWeaponSmoothSpray() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPlayerPed *>(gaddrof(CPlayerPed::DoWeaponSmoothSpray), this);
}

int addrof(CPlayerPed::DoesTargetHaveToBeBroken) = ADDRESS_BY_VERSION(0x4F3350, 0x4F3400, 0x4F3390);
int gaddrof(CPlayerPed::DoesTargetHaveToBeBroken) = GLOBAL_ADDRESS_BY_VERSION(0x4F3350, 0x4F3400, 0x4F3390);

bool CPlayerPed::DoesTargetHaveToBeBroken(CVector target, CWeapon *weapon) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPlayerPed *, CVector, CWeapon *>(gaddrof(CPlayerPed::DoesTargetHaveToBeBroken), this, target, weapon);
}

int addrof(CPlayerPed::EvaluateNeighbouringTarget) = ADDRESS_BY_VERSION(0x4F2FA0, 0x4F3050, 0x4F2FE0);
int gaddrof(CPlayerPed::EvaluateNeighbouringTarget) = GLOBAL_ADDRESS_BY_VERSION(0x4F2FA0, 0x4F3050, 0x4F2FE0);

void CPlayerPed::EvaluateNeighbouringTarget(CEntity *candidate, CEntity **targetPtr, float *lastCloseness, float distLimit, float angleOffset, bool lookToLeft) {
    plugin::CallMethodDynGlobal<CPlayerPed *, CEntity *, CEntity **, float *, float, float, bool>(gaddrof(CPlayerPed::EvaluateNeighbouringTarget), this, candidate, targetPtr, lastCloseness, distLimit, angleOffset, lookToLeft);
}

int addrof(CPlayerPed::EvaluateTarget) = ADDRESS_BY_VERSION(0x4F2B60, 0x4F2C10, 0x4F2BA0);
int gaddrof(CPlayerPed::EvaluateTarget) = GLOBAL_ADDRESS_BY_VERSION(0x4F2B60, 0x4F2C10, 0x4F2BA0);

void CPlayerPed::EvaluateTarget(CEntity *candidate, CEntity **targetPtr, float *lastCloseness, float distLimit, float angleOffset, bool priority) {
    plugin::CallMethodDynGlobal<CPlayerPed *, CEntity *, CEntity **, float *, float, float, bool>(gaddrof(CPlayerPed::EvaluateTarget), this, candidate, targetPtr, lastCloseness, distLimit, angleOffset, priority);
}

int addrof(CPlayerPed::FindNextWeaponLockOnTarget) = ADDRESS_BY_VERSION(0x4F2D50, 0x4F2E00, 0x4F2D90);
int gaddrof(CPlayerPed::FindNextWeaponLockOnTarget) = GLOBAL_ADDRESS_BY_VERSION(0x4F2D50, 0x4F2E00, 0x4F2D90);

bool CPlayerPed::FindNextWeaponLockOnTarget(CEntity *previousTarget, bool lookToLeft) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPlayerPed *, CEntity *, bool>(gaddrof(CPlayerPed::FindNextWeaponLockOnTarget), this, previousTarget, lookToLeft);
}

int addrof(CPlayerPed::FindWeaponLockOnTarget) = ADDRESS_BY_VERSION(0x4F28D0, 0x4F2980, 0x4F2910);
int gaddrof(CPlayerPed::FindWeaponLockOnTarget) = GLOBAL_ADDRESS_BY_VERSION(0x4F28D0, 0x4F2980, 0x4F2910);

bool CPlayerPed::FindWeaponLockOnTarget() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPlayerPed *>(gaddrof(CPlayerPed::FindWeaponLockOnTarget), this);
}

int addrof(CPlayerPed::GetPlayerInfoForThisPlayerPed) = ADDRESS_BY_VERSION(0x4F36C0, 0x4F3770, 0x4F3700);
int gaddrof(CPlayerPed::GetPlayerInfoForThisPlayerPed) = GLOBAL_ADDRESS_BY_VERSION(0x4F36C0, 0x4F3770, 0x4F3700);

CPlayerInfo *CPlayerPed::GetPlayerInfoForThisPlayerPed() {
    return plugin::CallMethodAndReturnDynGlobal<CPlayerInfo *, CPlayerPed *>(gaddrof(CPlayerPed::GetPlayerInfoForThisPlayerPed), this);
}

int addrof(CPlayerPed::IsThisPedAttackingPlayer) = ADDRESS_BY_VERSION(0x4F2D00, 0x4F2DB0, 0x4F2D40);
int gaddrof(CPlayerPed::IsThisPedAttackingPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x4F2D00, 0x4F2DB0, 0x4F2D40);

bool CPlayerPed::IsThisPedAttackingPlayer(CPed *ped) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPlayerPed *, CPed *>(gaddrof(CPlayerPed::IsThisPedAttackingPlayer), this, ped);
}

int addrof(CPlayerPed::KeepAreaAroundPlayerClear) = ADDRESS_BY_VERSION(0x4F3460, 0x4F3510, 0x4F34A0);
int gaddrof(CPlayerPed::KeepAreaAroundPlayerClear) = GLOBAL_ADDRESS_BY_VERSION(0x4F3460, 0x4F3510, 0x4F34A0);

void CPlayerPed::KeepAreaAroundPlayerClear() {
    plugin::CallMethodDynGlobal<CPlayerPed *>(gaddrof(CPlayerPed::KeepAreaAroundPlayerClear), this);
}

int addrof(CPlayerPed::MakeChangesForNewWeapon) = ADDRESS_BY_VERSION(0x4F2560, 0x4F2610, 0x4F25A0);
int gaddrof(CPlayerPed::MakeChangesForNewWeapon) = GLOBAL_ADDRESS_BY_VERSION(0x4F2560, 0x4F2610, 0x4F25A0);

void CPlayerPed::MakeChangesForNewWeapon(char weaponType) {
    plugin::CallMethodDynGlobal<CPlayerPed *, char>(gaddrof(CPlayerPed::MakeChangesForNewWeapon), this, weaponType);
}

int addrof(CPlayerPed::MakeObjectTargettable) = ADDRESS_BY_VERSION(0x4F32B0, 0x4F3360, 0x4F32F0);
int gaddrof(CPlayerPed::MakeObjectTargettable) = GLOBAL_ADDRESS_BY_VERSION(0x4F32B0, 0x4F3360, 0x4F32F0);

void CPlayerPed::MakeObjectTargettable(int handle) {
    plugin::CallMethodDynGlobal<CPlayerPed *, int>(gaddrof(CPlayerPed::MakeObjectTargettable), this, handle);
}

int addrof(CPlayerPed::PlayerControl1stPersonRunAround) = ADDRESS_BY_VERSION(0x4F1970, 0x4F1A20, 0x4F19B0);
int gaddrof(CPlayerPed::PlayerControl1stPersonRunAround) = GLOBAL_ADDRESS_BY_VERSION(0x4F1970, 0x4F1A20, 0x4F19B0);

void CPlayerPed::PlayerControl1stPersonRunAround(CPad *pad) {
    plugin::CallMethodDynGlobal<CPlayerPed *, CPad *>(gaddrof(CPlayerPed::PlayerControl1stPersonRunAround), this, pad);
}

int addrof(CPlayerPed::PlayerControlFighter) = ADDRESS_BY_VERSION(0x4F1810, 0x4F18C0, 0x4F1850);
int gaddrof(CPlayerPed::PlayerControlFighter) = GLOBAL_ADDRESS_BY_VERSION(0x4F1810, 0x4F18C0, 0x4F1850);

void CPlayerPed::PlayerControlFighter(CPad *pad) {
    plugin::CallMethodDynGlobal<CPlayerPed *, CPad *>(gaddrof(CPlayerPed::PlayerControlFighter), this, pad);
}

int addrof(CPlayerPed::PlayerControlM16) = ADDRESS_BY_VERSION(0x4F1DF0, 0x4F1EA0, 0x4F1E30);
int gaddrof(CPlayerPed::PlayerControlM16) = GLOBAL_ADDRESS_BY_VERSION(0x4F1DF0, 0x4F1EA0, 0x4F1E30);

void CPlayerPed::PlayerControlM16(CPad *pad) {
    plugin::CallMethodDynGlobal<CPlayerPed *, CPad *>(gaddrof(CPlayerPed::PlayerControlM16), this, pad);
}

int addrof(CPlayerPed::PlayerControlSniper) = ADDRESS_BY_VERSION(0x4F1CF0, 0x4F1DA0, 0x4F1D30);
int gaddrof(CPlayerPed::PlayerControlSniper) = GLOBAL_ADDRESS_BY_VERSION(0x4F1CF0, 0x4F1DA0, 0x4F1D30);

void CPlayerPed::PlayerControlSniper(CPad *pad) {
    plugin::CallMethodDynGlobal<CPlayerPed *, CPad *>(gaddrof(CPlayerPed::PlayerControlSniper), this, pad);
}

int addrof(CPlayerPed::PlayerControlZelda) = ADDRESS_BY_VERSION(0x4F13C0, 0x4F1470, 0x4F1400);
int gaddrof(CPlayerPed::PlayerControlZelda) = GLOBAL_ADDRESS_BY_VERSION(0x4F13C0, 0x4F1470, 0x4F1400);

void CPlayerPed::PlayerControlZelda(CPad *pad) {
    plugin::CallMethodDynGlobal<CPlayerPed *, CPad *>(gaddrof(CPlayerPed::PlayerControlZelda), this, pad);
}

int addrof(CPlayerPed::ProcessAnimGroups) = ADDRESS_BY_VERSION(0x4F2640, 0x4F26F0, 0x4F2680);
int gaddrof(CPlayerPed::ProcessAnimGroups) = GLOBAL_ADDRESS_BY_VERSION(0x4F2640, 0x4F26F0, 0x4F2680);

void CPlayerPed::ProcessAnimGroups() {
    plugin::CallMethodDynGlobal<CPlayerPed *>(gaddrof(CPlayerPed::ProcessAnimGroups), this);
}

int addrof(CPlayerPed::ProcessPlayerWeapon) = ADDRESS_BY_VERSION(0x4F1EF0, 0x4F1FA0, 0x4F1F30);
int gaddrof(CPlayerPed::ProcessPlayerWeapon) = GLOBAL_ADDRESS_BY_VERSION(0x4F1EF0, 0x4F1FA0, 0x4F1F30);

void CPlayerPed::ProcessPlayerWeapon(CPad *pad) {
    plugin::CallMethodDynGlobal<CPlayerPed *, CPad *>(gaddrof(CPlayerPed::ProcessPlayerWeapon), this, pad);
}

int addrof(CPlayerPed::ProcessWeaponSwitch) = ADDRESS_BY_VERSION(0x4F2310, 0x4F23C0, 0x4F2350);
int gaddrof(CPlayerPed::ProcessWeaponSwitch) = GLOBAL_ADDRESS_BY_VERSION(0x4F2310, 0x4F23C0, 0x4F2350);

void CPlayerPed::ProcessWeaponSwitch(CPad *pad) {
    plugin::CallMethodDynGlobal<CPlayerPed *, CPad *>(gaddrof(CPlayerPed::ProcessWeaponSwitch), this, pad);
}

int addrof(CPlayerPed::ReApplyMoveAnims) = ADDRESS_BY_VERSION(0x4F07C0, 0x4F0870, 0x4F0800);
int gaddrof(CPlayerPed::ReApplyMoveAnims) = GLOBAL_ADDRESS_BY_VERSION(0x4F07C0, 0x4F0870, 0x4F0800);

void CPlayerPed::ReApplyMoveAnims() {
    plugin::CallMethodDynGlobal<CPlayerPed *>(gaddrof(CPlayerPed::ReApplyMoveAnims), this);
}

int addrof(CPlayerPed::RestoreSprintEnergy) = ADDRESS_BY_VERSION(0x4F1340, 0x4F13F0, 0x4F1380);
int gaddrof(CPlayerPed::RestoreSprintEnergy) = GLOBAL_ADDRESS_BY_VERSION(0x4F1340, 0x4F13F0, 0x4F1380);

void CPlayerPed::RestoreSprintEnergy(float restoreSpeed) {
    plugin::CallMethodDynGlobal<CPlayerPed *, float>(gaddrof(CPlayerPed::RestoreSprintEnergy), this, restoreSpeed);
}

int addrof(CPlayerPed::RunningLand) = ADDRESS_BY_VERSION(0x4F31D0, 0x4F3280, 0x4F3210);
int gaddrof(CPlayerPed::RunningLand) = GLOBAL_ADDRESS_BY_VERSION(0x4F31D0, 0x4F3280, 0x4F3210);

void CPlayerPed::RunningLand(CPad *pad) {
    plugin::CallMethodDynGlobal<CPlayerPed *, CPad *>(gaddrof(CPlayerPed::RunningLand), this, pad);
}

int addrof(CPlayerPed::SetInitialState) = ADDRESS_BY_VERSION(0x4EFC40, 0x4EFCF0, 0x4EFC80);
int gaddrof(CPlayerPed::SetInitialState) = GLOBAL_ADDRESS_BY_VERSION(0x4EFC40, 0x4EFCF0, 0x4EFC80);

void CPlayerPed::SetInitialState() {
    plugin::CallMethodDynGlobal<CPlayerPed *>(gaddrof(CPlayerPed::SetInitialState), this);
}

int addrof(CPlayerPed::SetRealMoveAnim) = ADDRESS_BY_VERSION(0x4F0880, 0x4F0930, 0x4F08C0);
int gaddrof(CPlayerPed::SetRealMoveAnim) = GLOBAL_ADDRESS_BY_VERSION(0x4F0880, 0x4F0930, 0x4F08C0);

void CPlayerPed::SetRealMoveAnim() {
    plugin::CallMethodDynGlobal<CPlayerPed *>(gaddrof(CPlayerPed::SetRealMoveAnim), this);
}

int addrof(CPlayerPed::SetWantedLevel) = ADDRESS_BY_VERSION(0x4F3190, 0x4F3240, 0x4F31D0);
int gaddrof(CPlayerPed::SetWantedLevel) = GLOBAL_ADDRESS_BY_VERSION(0x4F3190, 0x4F3240, 0x4F31D0);

void CPlayerPed::SetWantedLevel(int level) {
    plugin::CallMethodDynGlobal<CPlayerPed *, int>(gaddrof(CPlayerPed::SetWantedLevel), this, level);
}

int addrof(CPlayerPed::SetWantedLevelNoDrop) = ADDRESS_BY_VERSION(0x4F31B0, 0x4F3260, 0x4F31F0);
int gaddrof(CPlayerPed::SetWantedLevelNoDrop) = GLOBAL_ADDRESS_BY_VERSION(0x4F31B0, 0x4F3260, 0x4F31F0);

void CPlayerPed::SetWantedLevelNoDrop(int level) {
    plugin::CallMethodDynGlobal<CPlayerPed *, int>(gaddrof(CPlayerPed::SetWantedLevelNoDrop), this, level);
}

int addrof(CPlayerPed::UseSprintEnergy) = ADDRESS_BY_VERSION(0x4F12A0, 0x4F1350, 0x4F12E0);
int gaddrof(CPlayerPed::UseSprintEnergy) = GLOBAL_ADDRESS_BY_VERSION(0x4F12A0, 0x4F1350, 0x4F12E0);

void CPlayerPed::UseSprintEnergy() {
    plugin::CallMethodDynGlobal<CPlayerPed *>(gaddrof(CPlayerPed::UseSprintEnergy), this);
}

int addrof(CPlayerPed::DeactivatePlayerPed) = ADDRESS_BY_VERSION(0x4EFC00, 0x4EFCB0, 0x4EFC40);
int gaddrof(CPlayerPed::DeactivatePlayerPed) = GLOBAL_ADDRESS_BY_VERSION(0x4EFC00, 0x4EFCB0, 0x4EFC40);

void CPlayerPed::DeactivatePlayerPed(int playerId) {
    plugin::CallDynGlobal<int>(gaddrof(CPlayerPed::DeactivatePlayerPed), playerId);
}

int addrof(CPlayerPed::ReactivatePlayerPed) = ADDRESS_BY_VERSION(0x4EFC20, 0x4EFCD0, 0x4EFC60);
int gaddrof(CPlayerPed::ReactivatePlayerPed) = GLOBAL_ADDRESS_BY_VERSION(0x4EFC20, 0x4EFCD0, 0x4EFC60);

void CPlayerPed::ReactivatePlayerPed(int playerId) {
    plugin::CallDynGlobal<int>(gaddrof(CPlayerPed::ReactivatePlayerPed), playerId);
}

int addrof(CPlayerPed::SetupPlayerPed) = ADDRESS_BY_VERSION(0x4EFB60, 0x4EFC10, 0x4EFBA0);
int gaddrof(CPlayerPed::SetupPlayerPed) = GLOBAL_ADDRESS_BY_VERSION(0x4EFB60, 0x4EFC10, 0x4EFBA0);

void CPlayerPed::SetupPlayerPed(int playerId) {
    plugin::CallDynGlobal<int>(gaddrof(CPlayerPed::SetupPlayerPed), playerId);
}
