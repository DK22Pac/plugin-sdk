/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CDarkel.h"

//variables
short &CDarkel::RegisteredKills = *(short*)0x7D8E30;
int &CDarkel::PreviousTime = *(int*)0x974AFC;
int & CDarkel::ModelToKill = *(int*)0x97F2C8;
int & CDarkel::ModelToKill2 = *(int*)0x974B24;
int & CDarkel::ModelToKill3 = *(int*)0x974B20;
int & CDarkel::ModelToKill4 = *(int*)0x974B14;
int & CDarkel::TimeLimit = *(int*)0x974BE0;
int & CDarkel::AmmoInterruptedWeapon = *(int*)0x9751A4;
int & CDarkel::KillsNeeded = *(int*)0x978628;
int & CDarkel::pStartMessage = *(int*)0x97F248;
int & CDarkel::InterruptedWeaponTypeSelected = *(int*)0x9B6DFC;
int & CDarkel::InterruptedWeaponType = *(int*)0xA0D37C;
int & CDarkel::TimeOfFrenzyStart = *(int*)0xA0FDE0;
int & CDarkel::WeaponType = *(int*)0xA10244;
short &CDarkel::Status = *(short*)0xA10A72;
bool &CDarkel::bProperKillFrenzy = *(bool*)0xA10B55;
bool &CDarkel::bStandardSoundAndMessages = *(bool*)0xA10B80;
char &CDarkel::bNeedHeadShot = *(char*)0xA10B94;

// Converted from cdecl void CDarkel::DealWithWeaponChangeAtEndOfFrenzy(void) 0x429910
void CDarkel::DealWithWeaponChangeAtEndOfFrenzy() {
    plugin::Call<0x429910>();
}

// Converted from cdecl void CDarkel::DrawMessages(void) 0x429FE0
void CDarkel::DrawMessages() {
    plugin::Call<0x429FE0>();
}

// Converted from cdecl bool CDarkel::FrenzyOnGoing(void) 0x429FC0
bool CDarkel::FrenzyOnGoing() {
    return plugin::CallAndReturn<bool, 0x429FC0>();
}

// Converted from cdecl void CDarkel::Init(void) 0x42A7A0
void CDarkel::Init() {
    plugin::Call<0x42A7A0>();
}

// Converted from cdecl short CDarkel::QueryModelsKilledByPlayer(int) 0x429AF0
short CDarkel::QueryModelsKilledByPlayer(int arg0) {
    return plugin::CallAndReturn<short, 0x429AF0, int>(arg0);
}

// Converted from cdecl short CDarkel::ReadStatus(void) 0x429FD0
short CDarkel::ReadStatus() {
    return plugin::CallAndReturn<short, 0x429FD0>();
}

// Converted from cdecl int CDarkel::RegisterCarBlownUpByPlayer(CVehicle *vehicle) 0x429DF0
int CDarkel::RegisterCarBlownUpByPlayer(CVehicle* vehicle) {
    return plugin::CallAndReturn<int, 0x429DF0, CVehicle*>(vehicle);
}

// Converted from cdecl void CDarkel::RegisterKillByPlayer(CPed *ped, eWeaponType weaponType, bool) 0x429E90
void CDarkel::RegisterKillByPlayer(CPed* ped, eWeaponType weaponType, bool arg2) {
    plugin::Call<0x429E90, CPed*, eWeaponType, bool>(ped, weaponType, arg2);
}

// Converted from cdecl void CDarkel::RegisterKillNotByPlayer(CPed *, eWeaponType weaponType) 0x429E80
void CDarkel::RegisterKillNotByPlayer(CPed* arg0, eWeaponType weaponType) {
    plugin::Call<0x429E80, CPed*, eWeaponType>(arg0, weaponType);
}

// Converted from cdecl void CDarkel::ResetModelsKilledByPlayer(void) 0x429B00
void CDarkel::ResetModelsKilledByPlayer() {
    plugin::Call<0x429B00>();
}

// Converted from cdecl void CDarkel::ResetOnPlayerDeath(void) 0x429F90
void CDarkel::ResetOnPlayerDeath() {
    plugin::Call<0x429F90>();
}

// Converted from cdecl void CDarkel::StartFrenzy(eWeaponType weaponType, int, ushort, int, ushort *, int, int, int, bool, bool) 0x429B60
void CDarkel::StartFrenzy(eWeaponType weaponType, int arg1, unsigned short arg2, int arg3, unsigned short* arg4, int arg5, int arg6, int arg7, bool arg8, bool arg9) {
    plugin::Call<0x429B60, eWeaponType, int, unsigned short, int, unsigned short*, int, int, int, bool, bool>(weaponType, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

// Converted from cdecl void CDarkel::Update(void) 0x42A650
void CDarkel::Update() {
    plugin::Call<0x42A650>();
}