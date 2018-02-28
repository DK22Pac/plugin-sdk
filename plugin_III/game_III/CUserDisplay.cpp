/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CUserDisplay.h"

CPager &CUserDisplay::Pager = *(CPager *)0x8F2744;
CCurrentVehicle &CUserDisplay::CurrentVehicle = *(CCurrentVehicle *)0x8F5FE8;
CPlaceName &CUserDisplay::PlaceName = *(CPlaceName *)0x8F29BC;
COnscreenTimer &CUserDisplay::OnscnTimer = *(COnscreenTimer *)0x862238;

// Converted from cdecl void CUserDisplay::Init(void) 0x4AD660 
void CUserDisplay::Init() {
    plugin::Call<0x4AD660>();
}

// Converted from cdecl void CUserDisplay::Process(void) 0x4AD690 
void CUserDisplay::Process() {
    plugin::Call<0x4AD690>();
}
