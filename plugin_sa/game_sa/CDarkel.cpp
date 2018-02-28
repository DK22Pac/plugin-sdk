/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDarkel.h"

short** CDarkel::RegisteredKills = (short**)0x969A50;
char* CDarkel::pStartMessage = (char*)0x96A6D0;
unsigned int& CDarkel::AmmoInterruptedWeapon = *(unsigned int*)0x96A6D4;
eWeaponType& CDarkel::InterruptedWeaponType = *(eWeaponType*)0x96A6D8;
eWeaponType& CDarkel::InterruptedWeaponTypeSelected = *(eWeaponType*)0x96A6DC;
unsigned int& CDarkel::TimeOfFrenzyStart = *(unsigned int*)0x96A6E0;
int* CDarkel::ModelToKill = (int*)0x96A6F0;
eWeaponType& CDarkel::WeaponType = *(eWeaponType*)0x96A700;
short& CDarkel::Status = *(short*)0x96A704;

bool CDarkel::FrenzyOnGoing()
{
	return ((bool (__cdecl *)())0x43D1F0)();
}

// Converted from cdecl void CDarkel::Init(void) 0x43CEB0 
void CDarkel::Init() {
	plugin::Call<0x43CEB0>();
}

// Converted from cdecl void CDarkel::DrawMessages(void) 0x43CEC0 
void CDarkel::DrawMessages() {
	plugin::Call<0x43CEC0>();
}

// Converted from cdecl short CDarkel::ReadStatus(void) 0x43D1E0 
short CDarkel::ReadStatus() {
	return plugin::CallAndReturn<short, 0x43D1E0>();
}

// Converted from cdecl void CDarkel::RegisterKillNotByPlayer(CPed const*pKilledPed) 0x43D210 
void CDarkel::RegisterKillNotByPlayer(CPed const* pKilledPed) {
	plugin::Call<0x43D210, CPed const*>(pKilledPed);
}

// Converted from cdecl bool CDarkel::ThisPedShouldBeKilledForFrenzy(CPed const*pPed) 0x43D2F0 
bool CDarkel::ThisPedShouldBeKilledForFrenzy(CPed const* pPed) {
	return plugin::CallAndReturn<bool, 0x43D2F0, CPed const*>(pPed);
}

// Converted from cdecl bool CDarkel::ThisVehicleShouldBeKilledForFrenzy(CVehicle const*pVehicle) 0x43D350 
bool CDarkel::ThisVehicleShouldBeKilledForFrenzy(CVehicle const* pVehicle) {
	return plugin::CallAndReturn<bool, 0x43D350, CVehicle const*>(pVehicle);
}

// Converted from cdecl void CDarkel::StartFrenzy(eWeaponType weapontype,int Timelimit,ushort KillsNeeded,int ModelToKill,ushort *pStartMessage,int ModelToKill2, int ModelToKill3,int ModelToKill4,bool bStandardSoundAndMessages, bool bNeedHeadShot) 0x43D3B0 
void CDarkel::StartFrenzy(eWeaponType weapontype, int Timelimit, unsigned short KillsNeeded, int ModelToKill, unsigned short* pStartMessage, int ModelToKill2, int ModelToKill3, int ModelToKill4, bool bStandardSoundAndMessages, bool bNeedHeadShot) {
	plugin::Call<0x43D3B0, eWeaponType, int, unsigned short, int, unsigned short*, int, int, int, bool, bool>(weapontype, Timelimit, KillsNeeded, ModelToKill, pStartMessage, ModelToKill2, ModelToKill3, ModelToKill4, bStandardSoundAndMessages, bNeedHeadShot);
}

// Converted from cdecl void CDarkel::ResetModelsKilledByPlayer(int playerid) 0x43D6A0 
void CDarkel::ResetModelsKilledByPlayer(int playerid) {
	plugin::Call<0x43D6A0, int>(playerid);
}

// Converted from cdecl int CDarkel::QueryModelsKilledByPlayer(int player,int modelid) 0x43D6C0 
int CDarkel::QueryModelsKilledByPlayer(int player, int modelid) {
	return plugin::CallAndReturn<int, 0x43D6C0, int, int>(player, modelid);
}

// Converted from cdecl int CDarkel::FindTotalPedsKilledByPlayer(int player) 0x43D6E0 
int CDarkel::FindTotalPedsKilledByPlayer(int player) {
	return plugin::CallAndReturn<int, 0x43D6E0, int>(player);
}

// Converted from cdecl void CDarkel::DealWithWeaponChangeAtEndOfFrenzy(void) 0x43D7A0 
void CDarkel::DealWithWeaponChangeAtEndOfFrenzy() {
	plugin::Call<0x43D7A0>();
}

// Converted from cdecl bool CDarkel::CheckDamagedWeaponType(int damageWeaponID, int expectedDamageWeaponID) 0x43D9E0 
bool CDarkel::CheckDamagedWeaponType(int damageWeaponID, int expectedDamageWeaponID) {
	return plugin::CallAndReturn<bool, 0x43D9E0, int, int>(damageWeaponID, expectedDamageWeaponID);
}

// Converted from cdecl void CDarkel::Update(void) 0x43DAC0 
void CDarkel::Update() {
	plugin::Call<0x43DAC0>();
}

// Converted from cdecl void CDarkel::ResetOnPlayerDeath(void) 0x43DC10 
void CDarkel::ResetOnPlayerDeath() {
	plugin::Call<0x43DC10>();
}

// Converted from cdecl void CDarkel::FailKillFrenzy(void) 0x43DC60 
void CDarkel::FailKillFrenzy() {
	plugin::Call<0x43DC60>();
}

// Converted from cdecl void CDarkel::RegisterKillByPlayer(CPed const*pKilledPed,eWeaponType damageWeaponID,bool bHeadShotted,int arg4) 0x43DCD0 
void CDarkel::RegisterKillByPlayer(CPed const* pKilledPed, eWeaponType damageWeaponID, bool bHeadShotted, int arg4) {
	plugin::Call<0x43DCD0, CPed const*, eWeaponType, bool, int>(pKilledPed, damageWeaponID, bHeadShotted, arg4);
}

// Converted from cdecl void CDarkel::RegisterCarBlownUpByPlayer(CVehicle *pVehicle,int arg2) 0x43DF20 
void CDarkel::RegisterCarBlownUpByPlayer(CVehicle* pVehicle, int arg2) {
	plugin::Call<0x43DF20, CVehicle*, int>(pVehicle, arg2);
}
