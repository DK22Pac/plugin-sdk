/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGame.h"

int& CGame::currArea = *(int*)0xB72914;
char* CGame::aDatFile = (char*)0xB728EC; 
int& CGame::currLevel = *(int*)0xB7290C;
bool& CGame::bMissionPackGame = *(bool*)0xB72910;

void CGame::TidyUpMemory(bool arg1, bool arg2)
{
	((void (__cdecl *)(bool, bool))0x53C500)(arg1, arg2);
}

// Converted from cdecl void CGame::InitialiseOnceBeforeRW(void) 0x53BB50
void CGame::InitialiseOnceBeforeRW() {
	plugin::Call<0x53BB50>();
}

// Converted from cdecl void CGame::ShutdownRenderWare(void) 0x53BB80
void CGame::ShutdownRenderWare() {
	plugin::Call<0x53BB80>();
}

// Converted from cdecl void CGame::FinalShutdown(void) 0x53BC30
void CGame::FinalShutdown() {
	plugin::Call<0x53BC30>();
}

// Converted from cdecl void CGame::Initialise(char const *filename) 0x53BC80
void CGame::Initialise(char const* filename) {
	plugin::Call<0x53BC80, char const*>(filename);
}

// Converted from cdecl void CGame::ReInitGameObjectVariables(void) 0x53BCF0
void CGame::ReInitGameObjectVariables() {
	plugin::Call<0x53BCF0>();
}

// Converted from cdecl void CGame::Process(void) 0x53BEE0
void CGame::Process() {
	plugin::Call<0x53BEE0>();
}

// Converted from cdecl bool CGame::CanSeeOutSideFromCurrArea(void) 0x53C4A0
bool CGame::CanSeeOutSideFromCurrArea() {
	return plugin::CallAndReturn<bool, 0x53C4A0>();
}

// Converted from cdecl bool CGame::CanSeeWaterFromCurrArea(void) 0x53C4B0
bool CGame::CanSeeWaterFromCurrArea() {
	return plugin::CallAndReturn<bool, 0x53C4B0>();
}

// Converted from cdecl void CGame::ShutDownForRestart(void) 0x53C550
void CGame::ShutDownForRestart() {
	plugin::Call<0x53C550>();
}

// Converted from cdecl void CGame::InitialiseWhenRestarting(void) 0x53C680
void CGame::InitialiseWhenRestarting() {
	plugin::Call<0x53C680>();
}

// Converted from cdecl void CGame::DrasticTidyUpMemory(bool) 0x53C810
void CGame::DrasticTidyUpMemory(bool arg0) {
	plugin::Call<0x53C810, bool>(arg0);
}

// Converted from cdecl void CGame::Shutdown(void) 0x53C900
void CGame::Shutdown() {
	plugin::Call<0x53C900>();
}

// Converted from cdecl bool CGame::InitialiseEssentialsAfterRW(void) 0x5BA160
bool CGame::InitialiseEssentialsAfterRW() {
	return plugin::CallAndReturn<bool, 0x5BA160>();
}

// Converted from cdecl void CGame::Init2(void) 0x5BA1A0
void CGame::Init2() {
	plugin::Call<0x5BA1A0>();
}

// Converted from cdecl void CGame::Init3(void) 0x5BA400
void CGame::Init3() {
	plugin::Call<0x5BA400>();
}

// Converted from cdecl bool CGame::InitialiseRenderWare(void) 0x5BD600
bool CGame::InitialiseRenderWare() {
	return plugin::CallAndReturn<bool, 0x5BD600>();
}

// Converted from cdecl bool CGame::Init1(char const *filename) 0x5BF840
bool CGame::Init1(char const* filename) {
	return plugin::CallAndReturn<bool, 0x5BF840, char const*>(filename);
}

// Converted from cdecl bool CGame::InitialiseCoreDataAfterRW(void) 0x5BFA90
bool CGame::InitialiseCoreDataAfterRW() {
	return plugin::CallAndReturn<bool, 0x5BFA90>();
}

// Converted from cdecl void CGame::InitAfterLostFocus(void) 0x53BC60
void CGame::InitAfterLostFocus() {
	plugin::Call<0x53BC60>();
}
