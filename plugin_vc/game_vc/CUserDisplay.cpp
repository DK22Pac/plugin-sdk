/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CUserDisplay.h"

COnscreenTimer &CUserDisplay::OnscnTimer = *(COnscreenTimer *)0x9B6CF8;
CCurrentVehicle &CUserDisplay::CurrentVehicle = *(CCurrentVehicle *)0x9B6A80;

// Converted from cdecl void CUserDisplay::Init(void) 0x4D1490
void CUserDisplay::Init() {
    plugin::Call<0x4D1490>();
}

// Converted from cdecl void CUserDisplay::Process(void) 0x4D1400
void CUserDisplay::Process() {
    plugin::Call<0x4D1400>();
}