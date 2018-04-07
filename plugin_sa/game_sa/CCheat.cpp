/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCheat.h"

char *CCheat::m_CheatString = (char *)0x969110;
int *CCheat::m_aCheatHashKeys = (int *)0x8A5CC8;
void(**CCheat::m_aCheatFunctions)() = (void(**)())0x8A5B58;
bool *CCheat::m_aCheatsActive = (bool *)0x969130;

bool &CCheat::m_bHasPlayerCheated = *(bool *)0x096918C;

// Converted from cdecl void CCheat::ResetCheats(void)	0x438450
void CCheat::ResetCheats() {
    plugin::Call<0x438450>();
}

// Converted from cdecl void CCheat::AddToCheatString(char LastPressedKey)	0x438480
void CCheat::AddToCheatString(char LastPressedKey) {
    plugin::Call<0x438480, char>(LastPressedKey);
}

// Converted from cdecl void CCheat::WeaponCheat1(void)	0x4385B0
void CCheat::WeaponCheat1() {
    plugin::Call<0x4385B0>();
}

// Converted from cdecl void CCheat::WeaponCheat2(void)	0x438890
void CCheat::WeaponCheat2() {
    plugin::Call<0x438890>();
}

// Converted from cdecl void CCheat::WeaponCheat3(void)	0x438B30
void CCheat::WeaponCheat3() {
    plugin::Call<0x438B30>();
}

// Converted from cdecl void CCheat::HealthCheat(void)	0x438D60
void CCheat::HealthCheat() {
    plugin::Call<0x438D60>();
}

// Converted from cdecl void CCheat::MoneyArmourHealthCheat(void)	0x438E40
void CCheat::MoneyArmourHealthCheat() {
    plugin::Call<0x438E40>();
}

// Converted from cdecl void CCheat::WantedLevelUpCheat(void)	0x438E90
void CCheat::WantedLevelUpCheat() {
    plugin::Call<0x438E90>();
}

// Converted from cdecl void CCheat::WantedLevelDownCheat(void)	0x438F20
void CCheat::WantedLevelDownCheat() {
    plugin::Call<0x438F20>();
}

// Converted from cdecl void CCheat::SunnyWeatherCheat(void)	0x438F40
void CCheat::SunnyWeatherCheat() {
    plugin::Call<0x438F40>();
}

// Converted from cdecl void CCheat::ExtraSunnyWeatherCheat(void)	0x438F50
void CCheat::ExtraSunnyWeatherCheat() {
    plugin::Call<0x438F50>();
}

// Converted from cdecl void CCheat::CloudyWeatherCheat(void)	0x438F60
void CCheat::CloudyWeatherCheat() {
    plugin::Call<0x438F60>();
}

// Converted from cdecl void CCheat::RainyWeatherCheat(void)	0x438F70
void CCheat::RainyWeatherCheat() {
    plugin::Call<0x438F70>();
}

// Converted from cdecl void CCheat::FoggyWeatherCheat(void)	0x438F80
void CCheat::FoggyWeatherCheat() {
    plugin::Call<0x438F80>();
}

// Converted from cdecl void CCheat::FastTimeCheat(void)	0x438F90
void CCheat::FastTimeCheat() {
    plugin::Call<0x438F90>();
}

// Converted from cdecl void CCheat::SlowTimeCheat(void)	0x438FC0
void CCheat::SlowTimeCheat() {
    plugin::Call<0x438FC0>();
}

// Converted from cdecl void CCheat::SuicideCheat(void)	0x438FF0
void CCheat::SuicideCheat() {
    plugin::Call<0x438FF0>();
}

// Converted from cdecl void CCheat::PinkCarsCheat(void)	0x4390D0
void CCheat::PinkCarsCheat() {
    plugin::Call<0x4390D0>();
}

// Converted from cdecl void CCheat::BlackCarsCheat(void)	0x4390F0
void CCheat::BlackCarsCheat() {
    plugin::Call<0x4390F0>();
}

// Converted from cdecl void CCheat::FatCheat(void)	0x439110
void CCheat::FatCheat() {
    plugin::Call<0x439110>();
}

// Converted from cdecl void CCheat::MuscleCheat(void)	0x439150
void CCheat::MuscleCheat() {
    plugin::Call<0x439150>();
}

// Converted from cdecl void CCheat::SkinnyCheat(void)	0x439190
void CCheat::SkinnyCheat() {
    plugin::Call<0x439190>();
}

// Converted from cdecl void CCheat::ElvisLivesCheat(void)	0x4391D0
void CCheat::ElvisLivesCheat() {
    plugin::Call<0x4391D0>();
}

// Converted from cdecl void CCheat::BeachPartyCheat(void)	0x439230
void CCheat::BeachPartyCheat() {
    plugin::Call<0x439230>();
}

// Converted from cdecl void CCheat::GangsCheat(void)	0x439360
void CCheat::GangsCheat() {
    plugin::Call<0x439360>();
}

// Converted from cdecl void CCheat::GangLandCheat(void)	0x4393D0
void CCheat::GangLandCheat() {
    plugin::Call<0x4393D0>();
}

// Converted from cdecl void CCheat::LoveConquersAllCheat(void)	0x4393F0
void CCheat::LoveConquersAllCheat() {
    plugin::Call<0x4393F0>();
}

// Converted from cdecl void CCheat::AllCarsAreShitCheat(void)	0x4394B0
void CCheat::AllCarsAreShitCheat() {
    plugin::Call<0x4394B0>();
}

// Converted from cdecl void CCheat::AllCarsAreGreatCheat(void)	0x4394E0
void CCheat::AllCarsAreGreatCheat() {
    plugin::Call<0x4394E0>();
}

// Converted from cdecl void CCheat::MidnightCheat(void)	0x439510
void CCheat::MidnightCheat() {
    plugin::Call<0x439510>();
}

// Converted from cdecl void CCheat::DuskCheat(void)	0x439540
void CCheat::DuskCheat() {
    plugin::Call<0x439540>();
}

// Converted from cdecl void CCheat::StormCheat(void)	0x439570
void CCheat::StormCheat() {
    plugin::Call<0x439570>();
}

// Converted from cdecl void CCheat::SandstormCheat(void)	0x439590
void CCheat::SandstormCheat() {
    plugin::Call<0x439590>();
}

// Converted from cdecl void CCheat::ParachuteCheat(void)	0x4395B0
void CCheat::ParachuteCheat() {
    plugin::Call<0x4395B0>();
}

// Converted from cdecl void CCheat::JetpackCheat(void)	0x439600
void CCheat::JetpackCheat() {
    plugin::Call<0x439600>();
}

// Converted from cdecl void CCheat::NotWantedCheat(void)	0x4396C0
void CCheat::NotWantedCheat() {
    plugin::Call<0x4396C0>();
}

// Converted from cdecl void CCheat::WantedCheat(void)	0x4396F0
void CCheat::WantedCheat() {
    plugin::Call<0x4396F0>();
}

// Converted from cdecl void CCheat::RiotCheat(void)	0x439710
void CCheat::RiotCheat() {
    plugin::Call<0x439710>();
}

// Converted from cdecl void CCheat::FunhouseCheat(void)	0x439720
void CCheat::FunhouseCheat() {
    plugin::Call<0x439720>();
}

// Converted from cdecl void CCheat::AdrenalineCheat(void)	0x439880
void CCheat::AdrenalineCheat() {
    plugin::Call<0x439880>();
}

// Converted from cdecl void CCheat::DrivebyCheat(void)	0x4398D0
void CCheat::DrivebyCheat() {
    plugin::Call<0x4398D0>();
}

// Converted from cdecl void CCheat::StaminaCheat(void)	0x439930
void CCheat::StaminaCheat() {
    plugin::Call<0x439930>();
}

// Converted from cdecl void CCheat::WeaponSkillsCheat(void)	0x439940
void CCheat::WeaponSkillsCheat() {
    plugin::Call<0x439940>();
}

// Converted from cdecl void CCheat::VehicleSkillsCheat(void)	0x4399D0
void CCheat::VehicleSkillsCheat() {
    plugin::Call<0x4399D0>();
}

// Converted from cdecl void CCheat::DoCheats(void)	0x439AF0
void CCheat::DoCheats() {
    plugin::Call<0x439AF0>();
}

// Converted from cdecl void CCheat::MayhemCheat(void)	0x439B20
void CCheat::MayhemCheat() {
    plugin::Call<0x439B20>();
}

// Converted from cdecl void CCheat::EverybodyAttacksPlayerCheat(void)	0x439C70
void CCheat::EverybodyAttacksPlayerCheat() {
    plugin::Call<0x439C70>();
}

// Converted from cdecl void CCheat::BlowUpCarsCheat(void)	0x439D80
void CCheat::BlowUpCarsCheat() {
    plugin::Call<0x439D80>();
}

// Converted from cdecl void CCheat::VillagePeopleCheat(void)	0x439DD0
void CCheat::VillagePeopleCheat() {
    plugin::Call<0x439DD0>();
}

// Converted from cdecl void CCheat::NinjaCheat(void)	0x439E50
void CCheat::NinjaCheat() {
    plugin::Call<0x439E50>();
}

// Converted from cdecl void CCheat::CountrysideInvasionCheat(void)	0x439F60
void CCheat::CountrysideInvasionCheat() {
    plugin::Call<0x439F60>();
}

// Converted from cdecl CVehicle* CCheat::VehicleCheat(int vehicleID)	0x43A0B0
CVehicle* CCheat::VehicleCheat(int vehicleID) {
    return plugin::CallAndReturn<CVehicle*, 0x43A0B0, int>(vehicleID);
}

// Converted from cdecl CVehicle* CCheat::TankCheat(void)	0x43A4A0
CVehicle* CCheat::TankCheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A4A0>();
}

// Converted from cdecl CVehicle* CCheat::StockCarCheat(void)	0x43A4B0
CVehicle* CCheat::StockCarCheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A4B0>();
}

// Converted from cdecl CVehicle* CCheat::StockCar2Cheat(void)	0x43A4C0
CVehicle* CCheat::StockCar2Cheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A4C0>();
}

// Converted from cdecl CVehicle* CCheat::StockCar3Cheat(void)	0x43A4D0
CVehicle* CCheat::StockCar3Cheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A4D0>();
}

// Converted from cdecl CVehicle* CCheat::StockCar4Cheat(void)	0x43A4E0
CVehicle* CCheat::StockCar4Cheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A4E0>();
}

// Converted from cdecl CVehicle* CCheat::HearseCheat(void)	0x43A4F0
CVehicle* CCheat::HearseCheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A4F0>();
}

// Converted from cdecl CVehicle* CCheat::LovefistCheat(void)	0x43A500
CVehicle* CCheat::LovefistCheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A500>();
}

// Converted from cdecl CVehicle* CCheat::TrashmasterCheat(void)	0x43A510
CVehicle* CCheat::TrashmasterCheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A510>();
}

// Converted from cdecl CVehicle* CCheat::GolfcartCheat(void)	0x43A520
CVehicle* CCheat::GolfcartCheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A520>();
}

// Converted from cdecl CVehicle* CCheat::FlyboyCheat(void)	0x43A530
CVehicle* CCheat::FlyboyCheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A530>();
}

// Converted from cdecl CVehicle* CCheat::VortexCheat(void)	0x43A540
CVehicle* CCheat::VortexCheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A540>();
}

// Converted from cdecl CVehicle* CCheat::ApacheCheat(void)	0x43A550
CVehicle* CCheat::ApacheCheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A550>();
}

// Converted from cdecl CVehicle* CCheat::QuadCheat(void)	0x43A560
CVehicle* CCheat::QuadCheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A560>();
}

// Converted from cdecl CVehicle* CCheat::TankerCheat(void)	0x43A570
CVehicle* CCheat::TankerCheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A570>();
}

// Converted from cdecl CVehicle* CCheat::DozerCheat(void)	0x43A660
CVehicle* CCheat::DozerCheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A660>();
}

// Converted from cdecl CVehicle* CCheat::StuntPlaneCheat(void)	0x43A670
CVehicle* CCheat::StuntPlaneCheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A670>();
}

// Converted from cdecl CVehicle* CCheat::MonsterTruckCheat(void)	0x43A680
CVehicle* CCheat::MonsterTruckCheat() {
    return plugin::CallAndReturn<CVehicle*, 0x43A680>();
}