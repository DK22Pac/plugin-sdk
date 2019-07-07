/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCheat.h"

PLUGIN_SOURCE_FILE

int addrof(WeaponCheat) = ADDRESS_BY_VERSION(0x490D90, 0x490E50, 0x490DE0);
int gaddrof(WeaponCheat) = GLOBAL_ADDRESS_BY_VERSION(0x490D90, 0x490E50, 0x490DE0);

void WeaponCheat() {
    plugin::CallDynGlobal(gaddrof(WeaponCheat));
}

int addrof(HealthCheat) = ADDRESS_BY_VERSION(0x490E70, 0x490F30, 0x490EC0);
int gaddrof(HealthCheat) = GLOBAL_ADDRESS_BY_VERSION(0x490E70, 0x490F30, 0x490EC0);

void HealthCheat() {
    plugin::CallDynGlobal(gaddrof(HealthCheat));
}

int addrof(TankCheat) = ADDRESS_BY_VERSION(0x490EE0, 0x490FA0, 0x490F30);
int gaddrof(TankCheat) = GLOBAL_ADDRESS_BY_VERSION(0x490EE0, 0x490FA0, 0x490F30);

void TankCheat() {
    plugin::CallDynGlobal(gaddrof(TankCheat));
}

int addrof(BlowUpCarsCheat) = ADDRESS_BY_VERSION(0x491040, 0x491100, 0x491090);
int gaddrof(BlowUpCarsCheat) = GLOBAL_ADDRESS_BY_VERSION(0x491040, 0x491100, 0x491090);

void BlowUpCarsCheat() {
    plugin::CallDynGlobal(gaddrof(BlowUpCarsCheat));
}

int addrof(ChangePlayerCheat) = ADDRESS_BY_VERSION(0x4910B0, 0x491170, 0x491100);
int gaddrof(ChangePlayerCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4910B0, 0x491170, 0x491100);

void ChangePlayerCheat() {
    plugin::CallDynGlobal(gaddrof(ChangePlayerCheat));
}

int addrof(MayhemCheat) = ADDRESS_BY_VERSION(0x4911C0, 0x491280, 0x491210);
int gaddrof(MayhemCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4911C0, 0x491280, 0x491210);

void MayhemCheat() {
    plugin::CallDynGlobal(gaddrof(MayhemCheat));
}

int addrof(EverybodyAttacksPlayerCheat) = ADDRESS_BY_VERSION(0x491270, 0x491330, 0x4912C0);
int gaddrof(EverybodyAttacksPlayerCheat) = GLOBAL_ADDRESS_BY_VERSION(0x491270, 0x491330, 0x4912C0);

void EverybodyAttacksPlayerCheat() {
    plugin::CallDynGlobal(gaddrof(EverybodyAttacksPlayerCheat));
}

int addrof(WeaponsForAllCheat) = ADDRESS_BY_VERSION(0x491370, 0x491430, 0x4913C0);
int gaddrof(WeaponsForAllCheat) = GLOBAL_ADDRESS_BY_VERSION(0x491370, 0x491430, 0x4913C0);

void WeaponsForAllCheat() {
    plugin::CallDynGlobal(gaddrof(WeaponsForAllCheat));
}

int addrof(FastTimeCheat) = ADDRESS_BY_VERSION(0x4913A0, 0x491460, 0x4913F0);
int gaddrof(FastTimeCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4913A0, 0x491460, 0x4913F0);

void FastTimeCheat() {
    plugin::CallDynGlobal(gaddrof(FastTimeCheat));
}

int addrof(SlowTimeCheat) = ADDRESS_BY_VERSION(0x4913F0, 0x4914B0, 0x491440);
int gaddrof(SlowTimeCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4913F0, 0x4914B0, 0x491440);

void SlowTimeCheat() {
    plugin::CallDynGlobal(gaddrof(SlowTimeCheat));
}

int addrof(MoneyCheat) = ADDRESS_BY_VERSION(0x491430, 0x4914F0, 0x491480);
int gaddrof(MoneyCheat) = GLOBAL_ADDRESS_BY_VERSION(0x491430, 0x4914F0, 0x491480);

void MoneyCheat() {
    plugin::CallDynGlobal(gaddrof(MoneyCheat));
}

int addrof(ArmourCheat) = ADDRESS_BY_VERSION(0x491460, 0x491520, 0x4914B0);
int gaddrof(ArmourCheat) = GLOBAL_ADDRESS_BY_VERSION(0x491460, 0x491520, 0x4914B0);

void ArmourCheat() {
    plugin::CallDynGlobal(gaddrof(ArmourCheat));
}

int addrof(WantedLevelUpCheat) = ADDRESS_BY_VERSION(0x491490, 0x491550, 0x4914E0);
int gaddrof(WantedLevelUpCheat) = GLOBAL_ADDRESS_BY_VERSION(0x491490, 0x491550, 0x4914E0);

void WantedLevelUpCheat() {
    plugin::CallDynGlobal(gaddrof(WantedLevelUpCheat));
}

int addrof(WantedLevelDownCheat) = ADDRESS_BY_VERSION(0x4914F0, 0x4915B0, 0x491540);
int gaddrof(WantedLevelDownCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4914F0, 0x4915B0, 0x491540);

void WantedLevelDownCheat() {
    plugin::CallDynGlobal(gaddrof(WantedLevelDownCheat));
}

int addrof(SunnyWeatherCheat) = ADDRESS_BY_VERSION(0x491520, 0x4915E0, 0x491570);
int gaddrof(SunnyWeatherCheat) = GLOBAL_ADDRESS_BY_VERSION(0x491520, 0x4915E0, 0x491570);

void SunnyWeatherCheat() {
    plugin::CallDynGlobal(gaddrof(SunnyWeatherCheat));
}

int addrof(CloudyWeatherCheat) = ADDRESS_BY_VERSION(0x491550, 0x491610, 0x4915A0);
int gaddrof(CloudyWeatherCheat) = GLOBAL_ADDRESS_BY_VERSION(0x491550, 0x491610, 0x4915A0);

void CloudyWeatherCheat() {
    plugin::CallDynGlobal(gaddrof(CloudyWeatherCheat));
}

int addrof(RainyWeatherCheat) = ADDRESS_BY_VERSION(0x491580, 0x491640, 0x4915D0);
int gaddrof(RainyWeatherCheat) = GLOBAL_ADDRESS_BY_VERSION(0x491580, 0x491640, 0x4915D0);

void RainyWeatherCheat() {
    plugin::CallDynGlobal(gaddrof(RainyWeatherCheat));
}

int addrof(FoggyWeatherCheat) = ADDRESS_BY_VERSION(0x4915B0, 0x491670, 0x491600);
int gaddrof(FoggyWeatherCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4915B0, 0x491670, 0x491600);

void FoggyWeatherCheat() {
    plugin::CallDynGlobal(gaddrof(FoggyWeatherCheat));
}

int addrof(FastWeatherCheat) = ADDRESS_BY_VERSION(0x4915E0, 0x4916A0, 0x491630);
int gaddrof(FastWeatherCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4915E0, 0x4916A0, 0x491630);

void FastWeatherCheat() {
    plugin::CallDynGlobal(gaddrof(FastWeatherCheat));
}

int addrof(OnlyRenderWheelsCheat) = ADDRESS_BY_VERSION(0x491610, 0x4916D0, 0x491660);
int gaddrof(OnlyRenderWheelsCheat) = GLOBAL_ADDRESS_BY_VERSION(0x491610, 0x4916D0, 0x491660);

void OnlyRenderWheelsCheat() {
    plugin::CallDynGlobal(gaddrof(OnlyRenderWheelsCheat));
}

int addrof(ChittyChittyBangBangCheat) = ADDRESS_BY_VERSION(0x491640, 0x491700, 0x491690);
int gaddrof(ChittyChittyBangBangCheat) = GLOBAL_ADDRESS_BY_VERSION(0x491640, 0x491700, 0x491690);

void ChittyChittyBangBangCheat() {
    plugin::CallDynGlobal(gaddrof(ChittyChittyBangBangCheat));
}

int addrof(StrongGripCheat) = ADDRESS_BY_VERSION(0x491670, 0x491730, 0x4916C0);
int gaddrof(StrongGripCheat) = GLOBAL_ADDRESS_BY_VERSION(0x491670, 0x491730, 0x4916C0);

void StrongGripCheat() {
    plugin::CallDynGlobal(gaddrof(StrongGripCheat));
}

int addrof(NastyLimbsCheat) = ADDRESS_BY_VERSION(0x4916A0, 0x491760, 0x4916F0);
int gaddrof(NastyLimbsCheat) = GLOBAL_ADDRESS_BY_VERSION(0x4916A0, 0x491760, 0x4916F0);

void NastyLimbsCheat() {
    plugin::CallDynGlobal(gaddrof(NastyLimbsCheat));
}
