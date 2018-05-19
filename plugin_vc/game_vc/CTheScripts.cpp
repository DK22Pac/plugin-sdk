/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTheScripts.h"

unsigned int MAX_SCRIPT_SPACE_SIZE = 260512;

unsigned char *CTheScripts::ScriptSpace = (unsigned char *)0x821280;

int &CTheScripts::NumberOfIntroTextLinesThisFrame = *(int*)0xA10A48;

CTheScripts::tIntroText *CTheScripts::IntroTextLines = (CTheScripts::tIntroText*)0x7F0EA0;


bool CTheScripts::IsPlayerOnAMission() {
	return plugin::CallAndReturn<bool, 0x44FE30>();
}

bool CTheScripts::IsPlayerStopped(CPlayerInfo* playerinfo) {
	return plugin::CallAndReturn<bool, 0x45ED50, CPlayerInfo*>(playerinfo);
}

bool CTheScripts::IsVehicleStopped(CVehicle* vehicle) {
	return plugin::CallAndReturn<bool, 0x45ED20, CVehicle*>(vehicle);
}

void CTheScripts::Process() {
	plugin::Call<0x44FED0>();
}

signed int CTheScripts::Init() {
	
	return plugin::CallAndReturn<signed int, 0x450330>();
}

void CTheScripts::CleanUpThisPed(CPed* ped) {
	plugin::Call<0x45EB10, CPed*>(ped);
}

void CTheScripts::CleanUpThisVehicle(CVehicle* vehicle) {
	plugin::Call<0x45EAD0, CVehicle*>(vehicle);
}

void CTheScripts::CleanUpThisObject(CObject* object) {
	plugin::Call<0x45EB80, CObject*>(object);
}

void CTheScripts::RemoveThisPed(CPed* ped) {
	plugin::Call<0x45EC70, CPed*>(ped);
}
