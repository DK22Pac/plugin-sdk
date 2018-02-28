/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CCheat.h"

// Converted from cdecl void CCheat::WeaponCheat(void) 0x490D90 
void CCheat::WeaponCheat() {
    plugin::Call<0x490D90>();
}

// Converted from cdecl void CCheat::HealthCheat(void) 0x490E70 
void CCheat::HealthCheat() {
    plugin::Call<0x490E70>();
}

// Converted from cdecl void CCheat::TankCheat(void) 0x490EE0 
void CCheat::TankCheat() {
    plugin::Call<0x490EE0>();
}

// Converted from cdecl void CCheat::BlowUpCarsCheat(void) 0x491040 
void CCheat::BlowUpCarsCheat() {
    plugin::Call<0x491040>();
}

// Converted from cdecl void CCheat::ChangePlayerCheat(void) 0x4910B0 
void CCheat::ChangePlayerCheat() {
    plugin::Call<0x4910B0>();
}

// Converted from cdecl void CCheat::MayhemCheat(void) 0x4911C0 
void CCheat::MayhemCheat() {
    plugin::Call<0x4911C0>();
}

// Converted from cdecl void CCheat::EverybodyAttacksPlayerCheat(void) 0x491270 
void CCheat::EverybodyAttacksPlayerCheat() {
    plugin::Call<0x491270>();
}

// Converted from cdecl bool CCheat::WeaponsForAllCheat(void) 0x491370 
bool CCheat::WeaponsForAllCheat() {
    return plugin::CallAndReturn<bool, 0x491370>();
}

// Converted from cdecl void CCheat::FastTimeCheat(void) 0x4913A0 
void CCheat::FastTimeCheat() {
    plugin::Call<0x4913A0>();
}

// Converted from cdecl void CCheat::SlowTimeCheat(void) 0x4913F0 
void CCheat::SlowTimeCheat() {
    plugin::Call<0x4913F0>();
}

// Converted from cdecl void CCheat::MoneyCheat(void) 0x491430 
void CCheat::MoneyCheat() {
    plugin::Call<0x491430>();
}

// Converted from cdecl void CCheat::ArmourCheat(void) 0x491460 
void CCheat::ArmourCheat() {
    plugin::Call<0x491460>();
}

// Converted from cdecl void CCheat::WantedLevelUpCheat(void) 0x491490 
void CCheat::WantedLevelUpCheat() {
    plugin::Call<0x491490>();
}

// Converted from cdecl void CCheat::WantedLevelDownCheat(void) 0x4914F0 
void CCheat::WantedLevelDownCheat() {
    plugin::Call<0x4914F0>();
}

// Converted from cdecl void CCheat::SunnyWeatherCheat(void) 0x491520 
void CCheat::SunnyWeatherCheat() {
    plugin::Call<0x491520>();
}

// Converted from cdecl void CCheat::CloudyWeatherCheat(void) 0x491550 
void CCheat::CloudyWeatherCheat() {
    plugin::Call<0x491550>();
}

// Converted from cdecl void CCheat::RainyWeatherCheat(void) 0x491580 
void CCheat::RainyWeatherCheat() {
    plugin::Call<0x491580>();
}

// Converted from cdecl void CCheat::FoggyWeatherCheat(void) 0x4915B0 
void CCheat::FoggyWeatherCheat() {
    plugin::Call<0x4915B0>();
}

// Converted from cdecl bool CCheat::FastWeatherCheat(void) 0x4915E0 
bool CCheat::FastWeatherCheat() {
    return plugin::CallAndReturn<bool, 0x4915E0>();
}

// Converted from cdecl bool CCheat::OnlyRenderWheelsCheat(void) 0x491610 
bool CCheat::OnlyRenderWheelsCheat() {
    return plugin::CallAndReturn<bool, 0x491610>();
}

// Converted from cdecl bool CCheat::ChittyChittyBangBangCheat(void) 0x491640 
bool CCheat::ChittyChittyBangBangCheat() {
    return plugin::CallAndReturn<bool, 0x491640>();
}

// Converted from cdecl void CCheat::StrongGripCheat(void) 0x491670 
void CCheat::StrongGripCheat() {
    plugin::Call<0x491670>();
}

// Converted from bool void CCheat::NastyLimbsCheat(void) 0x4916A0 
bool CCheat::NastyLimbsCheat() {
    return plugin::CallAndReturn<bool, 0x4916A0>();
}
