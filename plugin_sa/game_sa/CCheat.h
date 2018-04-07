/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"

class PLUGIN_API CCheat {
public:
    static char *m_CheatString;    //  char m_CheatString[30]
    static int *m_aCheatHashKeys; // int m_aCheatHashKeys[92]
    static void(**m_aCheatFunctions)(); // (void*m_aCheatFunctions[92])()
    static bool *m_aCheatsActive; // int m_aCheatsActive[92]
    static bool &m_bHasPlayerCheated;

    //funcs

    static void ResetCheats();
    static void AddToCheatString(char LastPressedKey);
    static void WeaponCheat1();
    static void WeaponCheat2();
    static void WeaponCheat3();
    static void HealthCheat();
    static void MoneyArmourHealthCheat();
    static void WantedLevelUpCheat();
    static void WantedLevelDownCheat();
    static void SunnyWeatherCheat();
    static void ExtraSunnyWeatherCheat();
    static void CloudyWeatherCheat();
    static void RainyWeatherCheat();
    static void FoggyWeatherCheat();
    static void FastTimeCheat();
    static void SlowTimeCheat();
    static void SuicideCheat();
    static void PinkCarsCheat();
    static void BlackCarsCheat();
    static void FatCheat();
    static void MuscleCheat();
    static void SkinnyCheat();
    static void ElvisLivesCheat();
    static void BeachPartyCheat();
    static void GangsCheat();
    static void GangLandCheat();
    static void LoveConquersAllCheat();
    static void AllCarsAreShitCheat();
    static void AllCarsAreGreatCheat();
    static void MidnightCheat();
    static void DuskCheat();
    static void StormCheat();
    static void SandstormCheat();
    static void ParachuteCheat();
    static void JetpackCheat();
    static void NotWantedCheat();
    static void WantedCheat();
    static void RiotCheat();
    static void FunhouseCheat();
    static void AdrenalineCheat();
    static void DrivebyCheat();
    static void StaminaCheat();
    static void WeaponSkillsCheat();
    static void VehicleSkillsCheat();
    static void DoCheats();
    static void MayhemCheat();
    static void EverybodyAttacksPlayerCheat();
    static void BlowUpCarsCheat();
    static void VillagePeopleCheat();
    static void NinjaCheat();
    static void CountrysideInvasionCheat();
    static CVehicle* VehicleCheat(int vehicleID);
    static CVehicle* TankCheat();
    static CVehicle* StockCarCheat();
    static CVehicle* StockCar2Cheat();
    static CVehicle* StockCar3Cheat();
    static CVehicle* StockCar4Cheat();
    static CVehicle* HearseCheat();
    static CVehicle* LovefistCheat();
    static CVehicle* TrashmasterCheat();
    static CVehicle* GolfcartCheat();
    static CVehicle* FlyboyCheat();
    static CVehicle* VortexCheat();
    static CVehicle* ApacheCheat();
    static CVehicle* QuadCheat();
    static CVehicle* TankerCheat();
    static CVehicle* DozerCheat();
    static CVehicle* StuntPlaneCheat();
    static CVehicle* MonsterTruckCheat();
};
