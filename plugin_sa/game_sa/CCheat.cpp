/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCheat.h"

PLUGIN_SOURCE_FILE

void(*(&CCheat::m_aCheatFunctions)[92])() = *reinterpret_cast<void(*(*)[92])()>(GLOBAL_ADDRESS_BY_VERSION(0x8A5B58, 0, 0, 0, 0, 0));

int(&CCheat::m_aCheatHashKeys)[92] = *reinterpret_cast<int(*)[92]>(GLOBAL_ADDRESS_BY_VERSION(0x8A5CC8, 0, 0, 0, 0, 0));
char(&CCheat::m_CheatString)[30] = *reinterpret_cast<char(*)[30]>(GLOBAL_ADDRESS_BY_VERSION(0x969110, 0, 0, 0, 0, 0));
bool(&CCheat::m_aCheatsActive)[92] = *reinterpret_cast<bool(*)[92]>(GLOBAL_ADDRESS_BY_VERSION(0x969130, 0, 0, 0, 0, 0));
bool &CCheat::m_bHasPlayerCheated = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x96918C, 0, 0, 0, 0, 0));

int addrof(CCheat::AddToCheatString) = ADDRESS_BY_VERSION(0x438480, 0, 0, 0, 0, 0);
int gaddrof(CCheat::AddToCheatString) = GLOBAL_ADDRESS_BY_VERSION(0x438480, 0, 0, 0, 0, 0);

void CCheat::AddToCheatString(char LastPressedKey) {
    plugin::CallDynGlobal<char>(gaddrof(CCheat::AddToCheatString), LastPressedKey);
}

int addrof(CCheat::AdrenalineCheat) = ADDRESS_BY_VERSION(0x439880, 0, 0, 0, 0, 0);
int gaddrof(CCheat::AdrenalineCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439880, 0, 0, 0, 0, 0);

void CCheat::AdrenalineCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::AdrenalineCheat));
}

int addrof(CCheat::AllCarsAreGreatCheat) = ADDRESS_BY_VERSION(0x4394E0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::AllCarsAreGreatCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4394E0, 0, 0, 0, 0, 0);

void CCheat::AllCarsAreGreatCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::AllCarsAreGreatCheat));
}

int addrof(CCheat::AllCarsAreShitCheat) = ADDRESS_BY_VERSION(0x4394B0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::AllCarsAreShitCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4394B0, 0, 0, 0, 0, 0);

void CCheat::AllCarsAreShitCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::AllCarsAreShitCheat));
}

int addrof(CCheat::ApacheCheat) = ADDRESS_BY_VERSION(0x43A550, 0, 0, 0, 0, 0);
int gaddrof(CCheat::ApacheCheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A550, 0, 0, 0, 0, 0);

void CCheat::ApacheCheat() {
    return plugin::CallDynGlobal(gaddrof(CCheat::ApacheCheat));
}

int addrof(CCheat::BeachPartyCheat) = ADDRESS_BY_VERSION(0x439230, 0, 0, 0, 0, 0);
int gaddrof(CCheat::BeachPartyCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439230, 0, 0, 0, 0, 0);

void CCheat::BeachPartyCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::BeachPartyCheat));
}

int addrof(CCheat::BlackCarsCheat) = ADDRESS_BY_VERSION(0x4390F0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::BlackCarsCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4390F0, 0, 0, 0, 0, 0);

void CCheat::BlackCarsCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::BlackCarsCheat));
}

int addrof(CCheat::BlowUpCarsCheat) = ADDRESS_BY_VERSION(0x439D80, 0, 0, 0, 0, 0);
int gaddrof(CCheat::BlowUpCarsCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439D80, 0, 0, 0, 0, 0);

void CCheat::BlowUpCarsCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::BlowUpCarsCheat));
}

int addrof(CCheat::CloudyWeatherCheat) = ADDRESS_BY_VERSION(0x438F60, 0, 0, 0, 0, 0);
int gaddrof(CCheat::CloudyWeatherCheat) = GLOBAL_ADDRESS_BY_VERSION(0x438F60, 0, 0, 0, 0, 0);

void CCheat::CloudyWeatherCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::CloudyWeatherCheat));
}

int addrof(CCheat::CountrysideInvasionCheat) = ADDRESS_BY_VERSION(0x439F60, 0, 0, 0, 0, 0);
int gaddrof(CCheat::CountrysideInvasionCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439F60, 0, 0, 0, 0, 0);

void CCheat::CountrysideInvasionCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::CountrysideInvasionCheat));
}

int addrof(CCheat::DozerCheat) = ADDRESS_BY_VERSION(0x43A660, 0, 0, 0, 0, 0);
int gaddrof(CCheat::DozerCheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A660, 0, 0, 0, 0, 0);

void CCheat::DozerCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::DozerCheat));
}

int addrof(CCheat::DrivebyCheat) = ADDRESS_BY_VERSION(0x4398D0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::DrivebyCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4398D0, 0, 0, 0, 0, 0);

void CCheat::DrivebyCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::DrivebyCheat));
}

int addrof(CCheat::DuskCheat) = ADDRESS_BY_VERSION(0x439540, 0, 0, 0, 0, 0);
int gaddrof(CCheat::DuskCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439540, 0, 0, 0, 0, 0);

void CCheat::DuskCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::DuskCheat));
}

int addrof(CCheat::ElvisLivesCheat) = ADDRESS_BY_VERSION(0x4391D0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::ElvisLivesCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4391D0, 0, 0, 0, 0, 0);

void CCheat::ElvisLivesCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::ElvisLivesCheat));
}

int addrof(CCheat::EverybodyAttacksPlayerCheat) = ADDRESS_BY_VERSION(0x439C70, 0, 0, 0, 0, 0);
int gaddrof(CCheat::EverybodyAttacksPlayerCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439C70, 0, 0, 0, 0, 0);

void CCheat::EverybodyAttacksPlayerCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::EverybodyAttacksPlayerCheat));
}

int addrof(CCheat::ExtraSunnyWeatherCheat) = ADDRESS_BY_VERSION(0x438F50, 0, 0, 0, 0, 0);
int gaddrof(CCheat::ExtraSunnyWeatherCheat) = GLOBAL_ADDRESS_BY_VERSION(0x438F50, 0, 0, 0, 0, 0);

void CCheat::ExtraSunnyWeatherCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::ExtraSunnyWeatherCheat));
}

int addrof(CCheat::FastTimeCheat) = ADDRESS_BY_VERSION(0x438F90, 0, 0, 0, 0, 0);
int gaddrof(CCheat::FastTimeCheat) = GLOBAL_ADDRESS_BY_VERSION(0x438F90, 0, 0, 0, 0, 0);

void CCheat::FastTimeCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::FastTimeCheat));
}

int addrof(CCheat::FatCheat) = ADDRESS_BY_VERSION(0x439110, 0, 0, 0, 0, 0);
int gaddrof(CCheat::FatCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439110, 0, 0, 0, 0, 0);

void CCheat::FatCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::FatCheat));
}

int addrof(CCheat::FlyboyCheat) = ADDRESS_BY_VERSION(0x43A530, 0, 0, 0, 0, 0);
int gaddrof(CCheat::FlyboyCheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A530, 0, 0, 0, 0, 0);

void CCheat::FlyboyCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::FlyboyCheat));
}

int addrof(CCheat::FoggyWeatherCheat) = ADDRESS_BY_VERSION(0x438F80, 0, 0, 0, 0, 0);
int gaddrof(CCheat::FoggyWeatherCheat) = GLOBAL_ADDRESS_BY_VERSION(0x438F80, 0, 0, 0, 0, 0);

void CCheat::FoggyWeatherCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::FoggyWeatherCheat));
}

int addrof(CCheat::FunhouseCheat) = ADDRESS_BY_VERSION(0x439720, 0, 0, 0, 0, 0);
int gaddrof(CCheat::FunhouseCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439720, 0, 0, 0, 0, 0);

void CCheat::FunhouseCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::FunhouseCheat));
}

int addrof(CCheat::GangLandCheat) = ADDRESS_BY_VERSION(0x4393D0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::GangLandCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4393D0, 0, 0, 0, 0, 0);

void CCheat::GangLandCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::GangLandCheat));
}

int addrof(CCheat::GangsCheat) = ADDRESS_BY_VERSION(0x439360, 0, 0, 0, 0, 0);
int gaddrof(CCheat::GangsCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439360, 0, 0, 0, 0, 0);

void CCheat::GangsCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::GangsCheat));
}

int addrof(CCheat::GolfcartCheat) = ADDRESS_BY_VERSION(0x43A520, 0, 0, 0, 0, 0);
int gaddrof(CCheat::GolfcartCheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A520, 0, 0, 0, 0, 0);

void CCheat::GolfcartCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::GolfcartCheat));
}

int addrof(CCheat::HandleSpecialCheats) = ADDRESS_BY_VERSION(0x439A10, 0, 0, 0, 0, 0);
int gaddrof(CCheat::HandleSpecialCheats) = GLOBAL_ADDRESS_BY_VERSION(0x439A10, 0, 0, 0, 0, 0);

void CCheat::HandleSpecialCheats(int CheatID) {
    plugin::CallDynGlobal<int>(gaddrof(CCheat::HandleSpecialCheats), CheatID);
}

int addrof(CCheat::HealthCheat) = ADDRESS_BY_VERSION(0x438D60, 0, 0, 0, 0, 0);
int gaddrof(CCheat::HealthCheat) = GLOBAL_ADDRESS_BY_VERSION(0x438D60, 0, 0, 0, 0, 0);

void CCheat::HealthCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::HealthCheat));
}

int addrof(CCheat::HearseCheat) = ADDRESS_BY_VERSION(0x43A4F0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::HearseCheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A4F0, 0, 0, 0, 0, 0);

void CCheat::HearseCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::HearseCheat));
}

int addrof(CCheat::JetpackCheat) = ADDRESS_BY_VERSION(0x439600, 0, 0, 0, 0, 0);
int gaddrof(CCheat::JetpackCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439600, 0, 0, 0, 0, 0);

void CCheat::JetpackCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::JetpackCheat));
}

int addrof(CCheat::LoveConquersAllCheat) = ADDRESS_BY_VERSION(0x4393F0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::LoveConquersAllCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4393F0, 0, 0, 0, 0, 0);

void CCheat::LoveConquersAllCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::LoveConquersAllCheat));
}

int addrof(CCheat::LovefistCheat) = ADDRESS_BY_VERSION(0x43A500, 0, 0, 0, 0, 0);
int gaddrof(CCheat::LovefistCheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A500, 0, 0, 0, 0, 0);

void CCheat::LovefistCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::LovefistCheat));
}

int addrof(CCheat::MayhemCheat) = ADDRESS_BY_VERSION(0x439B20, 0, 0, 0, 0, 0);
int gaddrof(CCheat::MayhemCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439B20, 0, 0, 0, 0, 0);

void CCheat::MayhemCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::MayhemCheat));
}

int addrof(CCheat::MidnightCheat) = ADDRESS_BY_VERSION(0x439510, 0, 0, 0, 0, 0);
int gaddrof(CCheat::MidnightCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439510, 0, 0, 0, 0, 0);

void CCheat::MidnightCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::MidnightCheat));
}

int addrof(CCheat::MoneyArmourHealthCheat) = ADDRESS_BY_VERSION(0x438E40, 0, 0, 0, 0, 0);
int gaddrof(CCheat::MoneyArmourHealthCheat) = GLOBAL_ADDRESS_BY_VERSION(0x438E40, 0, 0, 0, 0, 0);

void CCheat::MoneyArmourHealthCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::MoneyArmourHealthCheat));
}

int addrof(CCheat::MonsterTruckCheat) = ADDRESS_BY_VERSION(0x43A680, 0, 0, 0, 0, 0);
int gaddrof(CCheat::MonsterTruckCheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A680, 0, 0, 0, 0, 0);

void CCheat::MonsterTruckCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::MonsterTruckCheat));
}

int addrof(CCheat::MuscleCheat) = ADDRESS_BY_VERSION(0x439150, 0, 0, 0, 0, 0);
int gaddrof(CCheat::MuscleCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439150, 0, 0, 0, 0, 0);

void CCheat::MuscleCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::MuscleCheat));
}

int addrof(CCheat::NinjaCheat) = ADDRESS_BY_VERSION(0x439E50, 0, 0, 0, 0, 0);
int gaddrof(CCheat::NinjaCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439E50, 0, 0, 0, 0, 0);

void CCheat::NinjaCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::NinjaCheat));
}

int addrof(CCheat::NotWantedCheat) = ADDRESS_BY_VERSION(0x4396C0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::NotWantedCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4396C0, 0, 0, 0, 0, 0);

void CCheat::NotWantedCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::NotWantedCheat));
}

int addrof(CCheat::ParachuteCheat) = ADDRESS_BY_VERSION(0x4395B0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::ParachuteCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4395B0, 0, 0, 0, 0, 0);

void CCheat::ParachuteCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::ParachuteCheat));
}

int addrof(CCheat::PinkCarsCheat) = ADDRESS_BY_VERSION(0x4390D0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::PinkCarsCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4390D0, 0, 0, 0, 0, 0);

void CCheat::PinkCarsCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::PinkCarsCheat));
}

int addrof(CCheat::PredatorCheat) = ADDRESS_BY_VERSION(0x4395A0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::PredatorCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4395A0, 0, 0, 0, 0, 0);

void CCheat::PredatorCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::PredatorCheat));
}

int addrof(CCheat::QuadCheat) = ADDRESS_BY_VERSION(0x43A560, 0, 0, 0, 0, 0);
int gaddrof(CCheat::QuadCheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A560, 0, 0, 0, 0, 0);

void CCheat::QuadCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::QuadCheat));
}

int addrof(CCheat::RainyWeatherCheat) = ADDRESS_BY_VERSION(0x438F70, 0, 0, 0, 0, 0);
int gaddrof(CCheat::RainyWeatherCheat) = GLOBAL_ADDRESS_BY_VERSION(0x438F70, 0, 0, 0, 0, 0);

void CCheat::RainyWeatherCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::RainyWeatherCheat));
}

int addrof(CCheat::RiotCheat) = ADDRESS_BY_VERSION(0x439710, 0, 0, 0, 0, 0);
int gaddrof(CCheat::RiotCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439710, 0, 0, 0, 0, 0);

void CCheat::RiotCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::RiotCheat));
}

int addrof(CCheat::SandstormCheat) = ADDRESS_BY_VERSION(0x439590, 0, 0, 0, 0, 0);
int gaddrof(CCheat::SandstormCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439590, 0, 0, 0, 0, 0);

void CCheat::SandstormCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::SandstormCheat));
}

int addrof(CCheat::SkinnyCheat) = ADDRESS_BY_VERSION(0x439190, 0, 0, 0, 0, 0);
int gaddrof(CCheat::SkinnyCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439190, 0, 0, 0, 0, 0);

void CCheat::SkinnyCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::SkinnyCheat));
}

int addrof(CCheat::SlowTimeCheat) = ADDRESS_BY_VERSION(0x438FC0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::SlowTimeCheat) = GLOBAL_ADDRESS_BY_VERSION(0x438FC0, 0, 0, 0, 0, 0);

void CCheat::SlowTimeCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::SlowTimeCheat));
}

int addrof(CCheat::StaminaCheat) = ADDRESS_BY_VERSION(0x439930, 0, 0, 0, 0, 0);
int gaddrof(CCheat::StaminaCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439930, 0, 0, 0, 0, 0);

void CCheat::StaminaCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::StaminaCheat));
}

int addrof(CCheat::StockCar2Cheat) = ADDRESS_BY_VERSION(0x43A4C0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::StockCar2Cheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A4C0, 0, 0, 0, 0, 0);

void CCheat::StockCar2Cheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::StockCar2Cheat));
}

int addrof(CCheat::StockCar3Cheat) = ADDRESS_BY_VERSION(0x43A4D0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::StockCar3Cheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A4D0, 0, 0, 0, 0, 0);

void CCheat::StockCar3Cheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::StockCar3Cheat));
}

int addrof(CCheat::StockCar4Cheat) = ADDRESS_BY_VERSION(0x43A4E0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::StockCar4Cheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A4E0, 0, 0, 0, 0, 0);

void CCheat::StockCar4Cheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::StockCar4Cheat));
}

int addrof(CCheat::StockCarCheat) = ADDRESS_BY_VERSION(0x43A4B0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::StockCarCheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A4B0, 0, 0, 0, 0, 0);

void CCheat::StockCarCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::StockCarCheat));
}

int addrof(CCheat::StormCheat) = ADDRESS_BY_VERSION(0x439570, 0, 0, 0, 0, 0);
int gaddrof(CCheat::StormCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439570, 0, 0, 0, 0, 0);

void CCheat::StormCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::StormCheat));
}

int addrof(CCheat::StuntPlaneCheat) = ADDRESS_BY_VERSION(0x43A670, 0, 0, 0, 0, 0);
int gaddrof(CCheat::StuntPlaneCheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A670, 0, 0, 0, 0, 0);

void CCheat::StuntPlaneCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::StuntPlaneCheat));
}

int addrof(CCheat::SuicideCheat) = ADDRESS_BY_VERSION(0x438FF0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::SuicideCheat) = GLOBAL_ADDRESS_BY_VERSION(0x438FF0, 0, 0, 0, 0, 0);

void CCheat::SuicideCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::SuicideCheat));
}

int addrof(CCheat::SunnyWeatherCheat) = ADDRESS_BY_VERSION(0x438F40, 0, 0, 0, 0, 0);
int gaddrof(CCheat::SunnyWeatherCheat) = GLOBAL_ADDRESS_BY_VERSION(0x438F40, 0, 0, 0, 0, 0);

void CCheat::SunnyWeatherCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::SunnyWeatherCheat));
}

int addrof(CCheat::TankCheat) = ADDRESS_BY_VERSION(0x43A4A0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::TankCheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A4A0, 0, 0, 0, 0, 0);

void CCheat::TankCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::TankCheat));
}

int addrof(CCheat::TankerCheat) = ADDRESS_BY_VERSION(0x43A570, 0, 0, 0, 0, 0);
int gaddrof(CCheat::TankerCheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A570, 0, 0, 0, 0, 0);

void CCheat::TankerCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::TankerCheat));
}

int addrof(CCheat::TrashmasterCheat) = ADDRESS_BY_VERSION(0x43A510, 0, 0, 0, 0, 0);
int gaddrof(CCheat::TrashmasterCheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A510, 0, 0, 0, 0, 0);

void CCheat::TrashmasterCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::TrashmasterCheat));
}

int addrof(CCheat::VehicleCheat) = ADDRESS_BY_VERSION(0x43A0B0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::VehicleCheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A0B0, 0, 0, 0, 0, 0);

CVehicle* CCheat::VehicleCheat(int vehicleModelId) {
    return plugin::CallAndReturnDynGlobal<CVehicle*,int>(gaddrof(CCheat::VehicleCheat), vehicleModelId);
}

int addrof(CCheat::VehicleSkillsCheat) = ADDRESS_BY_VERSION(0x4399D0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::VehicleSkillsCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4399D0, 0, 0, 0, 0, 0);

void CCheat::VehicleSkillsCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::VehicleSkillsCheat));
}

int addrof(CCheat::VillagePeopleCheat) = ADDRESS_BY_VERSION(0x439DD0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::VillagePeopleCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439DD0, 0, 0, 0, 0, 0);

void CCheat::VillagePeopleCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::VillagePeopleCheat));
}

int addrof(CCheat::VortexCheat) = ADDRESS_BY_VERSION(0x43A540, 0, 0, 0, 0, 0);
int gaddrof(CCheat::VortexCheat) = GLOBAL_ADDRESS_BY_VERSION(0x43A540, 0, 0, 0, 0, 0);

void CCheat::VortexCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::VortexCheat));
}

int addrof(CCheat::WantedCheat) = ADDRESS_BY_VERSION(0x4396F0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::WantedCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4396F0, 0, 0, 0, 0, 0);

void CCheat::WantedCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::WantedCheat));
}

int addrof(CCheat::WantedLevelDownCheat) = ADDRESS_BY_VERSION(0x438F20, 0, 0, 0, 0, 0);
int gaddrof(CCheat::WantedLevelDownCheat) = GLOBAL_ADDRESS_BY_VERSION(0x438F20, 0, 0, 0, 0, 0);

void CCheat::WantedLevelDownCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::WantedLevelDownCheat));
}

int addrof(CCheat::WantedLevelUpCheat) = ADDRESS_BY_VERSION(0x438E90, 0, 0, 0, 0, 0);
int gaddrof(CCheat::WantedLevelUpCheat) = GLOBAL_ADDRESS_BY_VERSION(0x438E90, 0, 0, 0, 0, 0);

void CCheat::WantedLevelUpCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::WantedLevelUpCheat));
}

int addrof(CCheat::WeaponCheat1) = ADDRESS_BY_VERSION(0x4385B0, 0, 0, 0, 0, 0);
int gaddrof(CCheat::WeaponCheat1) = GLOBAL_ADDRESS_BY_VERSION(0x4385B0, 0, 0, 0, 0, 0);

void CCheat::WeaponCheat1() {
    plugin::CallDynGlobal(gaddrof(CCheat::WeaponCheat1));
}

int addrof(CCheat::WeaponCheat2) = ADDRESS_BY_VERSION(0x438890, 0, 0, 0, 0, 0);
int gaddrof(CCheat::WeaponCheat2) = GLOBAL_ADDRESS_BY_VERSION(0x438890, 0, 0, 0, 0, 0);

void CCheat::WeaponCheat2() {
    plugin::CallDynGlobal(gaddrof(CCheat::WeaponCheat2));
}

int addrof(CCheat::WeaponCheat3) = ADDRESS_BY_VERSION(0x438B30, 0, 0, 0, 0, 0);
int gaddrof(CCheat::WeaponCheat3) = GLOBAL_ADDRESS_BY_VERSION(0x438B30, 0, 0, 0, 0, 0);

void CCheat::WeaponCheat3() {
    plugin::CallDynGlobal(gaddrof(CCheat::WeaponCheat3));
}

int addrof(CCheat::WeaponSkillsCheat) = ADDRESS_BY_VERSION(0x439940, 0, 0, 0, 0, 0);
int gaddrof(CCheat::WeaponSkillsCheat) = GLOBAL_ADDRESS_BY_VERSION(0x439940, 0, 0, 0, 0, 0);

void CCheat::WeaponSkillsCheat() {
    plugin::CallDynGlobal(gaddrof(CCheat::WeaponSkillsCheat));
}
