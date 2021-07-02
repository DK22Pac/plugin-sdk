/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGameLogic.h"

bool			&CGameLogic::bFinishedByScript				= *(bool*)0x96A894;
CVehicle*		&CGameLogic::SkipVehicle					= *(CVehicle**)0x96A898;
unsigned int	&CGameLogic::SkipTimer						= *(unsigned int*)0x96A89C;
int				&CGameLogic::SkipState						= *(int*)0x96A8A0;
float			&CGameLogic::fSkipAngle						= *(float*)0x96A8A4;
bool			&CGameLogic::bScriptCoopGameGoingOn			= *(bool*)0x96A8A8;
unsigned int	&CGameLogic::TimeOfLastEvent				= *(unsigned int*)0x96A8AC;
char			&CGameLogic::GameState						= *(char*)0x96A8B0;
char			&CGameLogic::bPlayersCannotTargetEachother	= *(char*)0x96A8B2;


//Converted from int __cdecl CGameLogic::InitAtStartOfGame() 0x441210
void CGameLogic::InitAtStartOfGame() {
	plugin::Call<0x441210>();
}

//Converted from bool __cdecl CGameLogic::IsCoopGameGoingOn() 0x441390
bool CGameLogic::IsCoopGameGoingOn() {
	return plugin::CallAndReturn<bool, 0x441390>();
}

//Converted from CPed *CGameLogic::Remove2ndPlayerIfPresent() 0x4413C0
void CGameLogic::Remove2ndPlayerIfPresent() {
	plugin::Call<0x4413C0>();
}

//Converted from void __cdecl CGameLogic::SortOutStreamingAndMemory(CVector *translation, float angle) 0x441440
void CGameLogic::SortOutStreamingAndMemory(CVector *translation, float angle) {
	plugin::Call<0x441440, CVector*, float>(translation, angle);
}

//Converted from void __cdecl CGameLogic::PassTime(unsigned int time) 0x4414C0
void CGameLogic::PassTime(unsigned int time) {
	plugin::Call<0x4414C0, unsigned int>(time);
}

//Converted from CPad *__cdecl CGameLogic::ClearSkip(char a1) 0x441560
void CGameLogic::ClearSkip(char a1) {
	plugin::Call<0x441560, char>(a1);
}

//Converted from bool __cdecl CGameLogic::SkipCanBeActivated() 0x4415C0
bool CGameLogic::SkipCanBeActivated() {
	return plugin::CallAndReturn<bool, 0x4415C0>();
}

//Converted from int __cdecl CGameLogic::IsPointWithinLineArea(int a1, signed int a2, float a3, float a4) 0x4416E0
int CGameLogic::IsPointWithinLineArea(RwV3d* vectors, signed int sizeofvectors, float x, float y) {
	return plugin::CallAndReturn<int, 0x4416E0, RwV3d*, signed int, float, float>(vectors, sizeofvectors, x, y);
}

//Converted from void __cdecl CGameLogic::SetPlayerWantedLevelForForbiddenTerritories(char townNumber) 0x441770
void CGameLogic::SetPlayerWantedLevelForForbiddenTerritories(char townNumber) {
	 plugin::Call<0x441770, char>(townNumber);
}

//Converted from long double __cdecl CGameLogic::CalcDistanceToForbiddenTrainCrossing(float a1, float a2, float a3, float a4, float a5, float a6, char a7, int a8) 0x4418E0
long double CGameLogic::CalcDistanceToForbiddenTrainCrossing(float x1, float y1, float z1, float x2, float y2, float z2, char a7, CVector* a8) {
	return plugin::CallAndReturn<long double, 0x4418E0, float, float, float, float, float, float, char, CVector*>(x1, y1, z1, x2, y2, z2, a7, a8);
}

//Converted from bool __cdecl CGameLogic::LaRiotsActiveHere() 0x441C10
bool CGameLogic::LaRiotsActiveHere() {
	return plugin::CallAndReturn<bool, 0x441C10>();
}

//Converted from signed int __cdecl CGameLogic::RestorePedsWeapons(int a1) 0x441D30
signed int CGameLogic::RestorePedsWeapons(int a1) {
	return plugin::CallAndReturn<signed int, 0x441D30, int>(a1);
}

//Converted from char __cdecl CGameLogic::IsPlayerAllowedToGoInThisDirection(CPed *a1, float a2, float a3, float a4, float a5) 0x441E10
bool CGameLogic::IsPlayerAllowedToGoInThisDirection(CPed *a1, float a2, float a3, float a4, float a5) {
	return plugin::CallAndReturn<bool, 0x441E10, CPed*, float, float, float, float>(a1, a2, a3, a4, a5);
}

//Converted from void __cdecl CGameLogic::RestorePlayerStuffDuringResurrection(CPlayerPed *player, float x, float y, float z, float fAngle) 0x442060
void CGameLogic::RestorePlayerStuffDuringResurrection(CPlayerPed *player, float x, float y, float z, float fAngle) {
	plugin::Call<0x442060, CPlayerPed*, float, float, float, float>(player, x, y, z, fAngle);
}

//Converted from char CGameLogic::UpdateSkip() 0x442480
void CGameLogic::UpdateSkip() {
	plugin::Call<0x442480>();
}

//Converted from void CGameLogic::ResetStuffUponResurrection() 0x442980
void CGameLogic::ResetStuffUponResurrection() {
	plugin::Call<0x442980>();
}

//Converted from void CGameLogic::Update() 0x442AD0
void CGameLogic::Update() {
	plugin::Call<0x442AD0>();
}

//Converted from char CGameLogic::Save() 0x5D33C0
void CGameLogic::Save() {
	plugin::Call<0x5D33C0>();
}
