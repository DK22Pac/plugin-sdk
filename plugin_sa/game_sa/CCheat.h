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

    SUPPORTED_10US static void(*(&m_aCheatFunctions)[92])();
    SUPPORTED_10US static int(&m_aCheatHashKeys)[92]; // static int m_aCheatHashKeys[92]
    SUPPORTED_10US static char(&m_CheatString)[30]; // static char m_CheatString[30]
    SUPPORTED_10US static bool(&m_aCheatsActive)[92]; // static bool m_aCheatsActive[92]
    SUPPORTED_10US static bool &m_bHasPlayerCheated;

    SUPPORTED_10US static void AddToCheatString(char LastPressedKey);
    SUPPORTED_10US static void AdrenalineCheat();
    SUPPORTED_10US static void AllCarsAreGreatCheat();
    SUPPORTED_10US static void AllCarsAreShitCheat();
    SUPPORTED_10US static void ApacheCheat();
    SUPPORTED_10US static void BeachPartyCheat();
    SUPPORTED_10US static void BlackCarsCheat();
    SUPPORTED_10US static void BlowUpCarsCheat();
    SUPPORTED_10US static void CloudyWeatherCheat();
    SUPPORTED_10US static void CountrysideInvasionCheat();
    SUPPORTED_10US static void DozerCheat();
    SUPPORTED_10US static void DrivebyCheat();
    SUPPORTED_10US static void DuskCheat();
    SUPPORTED_10US static void ElvisLivesCheat();
    SUPPORTED_10US static void EverybodyAttacksPlayerCheat();
    SUPPORTED_10US static void ExtraSunnyWeatherCheat();
    SUPPORTED_10US static void FastTimeCheat();
    SUPPORTED_10US static void FatCheat();
    SUPPORTED_10US static void FlyboyCheat();
    SUPPORTED_10US static void FoggyWeatherCheat();
    SUPPORTED_10US static void FunhouseCheat();
    SUPPORTED_10US static void GangLandCheat();
    SUPPORTED_10US static void GangsCheat();
    SUPPORTED_10US static void GolfcartCheat();
    //! handles BeachParty, Funhouse, AllCarsAreGreat , AllCarsAreCheap cheats toggling
    SUPPORTED_10US static void HandleSpecialCheats(int CheatID);
    SUPPORTED_10US static void HealthCheat();
    SUPPORTED_10US static void HearseCheat();
    SUPPORTED_10US static void JetpackCheat();
    SUPPORTED_10US static void LoveConquersAllCheat();
    SUPPORTED_10US static void LovefistCheat();
    SUPPORTED_10US static void MayhemCheat();
    SUPPORTED_10US static void MidnightCheat();
    SUPPORTED_10US static void MoneyArmourHealthCheat();
    SUPPORTED_10US static void MonsterTruckCheat();
    SUPPORTED_10US static void MuscleCheat();
    SUPPORTED_10US static void NinjaCheat();
    SUPPORTED_10US static void NotWantedCheat();
    SUPPORTED_10US static void ParachuteCheat();
    SUPPORTED_10US static void PinkCarsCheat();
    //! unused
    //! does nothing (NOP)
    SUPPORTED_10US static void PredatorCheat();
    SUPPORTED_10US static void QuadCheat();
    SUPPORTED_10US static void RainyWeatherCheat();
    SUPPORTED_10US static void RiotCheat();
    SUPPORTED_10US static void SandstormCheat();
    SUPPORTED_10US static void SkinnyCheat();
    SUPPORTED_10US static void SlowTimeCheat();
    SUPPORTED_10US static void StaminaCheat();
    SUPPORTED_10US static void StockCar2Cheat();
    SUPPORTED_10US static void StockCar3Cheat();
    SUPPORTED_10US static void StockCar4Cheat();
    SUPPORTED_10US static void StockCarCheat();
    SUPPORTED_10US static void StormCheat();
    SUPPORTED_10US static void StuntPlaneCheat();
    SUPPORTED_10US static void SuicideCheat();
    SUPPORTED_10US static void SunnyWeatherCheat();
    SUPPORTED_10US static void TankCheat();
    SUPPORTED_10US static void TankerCheat();
    SUPPORTED_10US static void TrashmasterCheat();
    SUPPORTED_10US static CVehicle* VehicleCheat(int vehicleModelId);
    SUPPORTED_10US static void VehicleSkillsCheat();
    SUPPORTED_10US static void VillagePeopleCheat();
    SUPPORTED_10US static void VortexCheat();
    SUPPORTED_10US static void WantedCheat();
    SUPPORTED_10US static void WantedLevelDownCheat();
    SUPPORTED_10US static void WantedLevelUpCheat();
    SUPPORTED_10US static void WeaponCheat1();
    SUPPORTED_10US static void WeaponCheat2();
    SUPPORTED_10US static void WeaponCheat3();
    SUPPORTED_10US static void WeaponSkillsCheat();
    SUPPORTED_10US static void ResetCheats();

};

#include "meta/meta.CCheat.h"
