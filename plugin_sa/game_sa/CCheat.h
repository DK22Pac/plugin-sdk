/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"


enum eCheats
{
    CHEAT_WEAPON_SET1,
    CHEAT_WEAPON_SET2,
    CHEAT_WEAPON_SET3,
    CHEAT_HEALTH_ARMOR_250K,
    CHEAT_WANTED_LEVEL_2STARS,
    CHEAT_CLEAR_WANTED_LEVEL,
    CHEAT_SUNNY_WEATHER,
    CHEAT_VERY_SUNNY_WEATHER,
    CHEAT_OVERCAST_WEATHER,
    CHEAT_RAINY_WEATHER,
    CHEAT_FOGGY_WEATHER,
    CHEAT_FASTER_CLOCK,
    CHEAT_FASTER_GAMEPLAY,
    CHEAT_SLOWER_GAMEPLAY,
    CHEAT_PEDS_ATTACK_OTHER_WITH_GOLFCLUB,
    CHEAT_HAVE_ABOUNTY_ON_YOUR_HEAD,
    CHEAT_EVERYONE_ARMED,
    CHEAT_SPAWN_RHINO,
    CHEAT_SPAWN_BLOODRINGBANGER,
    CHEAT_SPAWN_RANCHER,
    CHEAT_SPAWN_HOTRINGA,
    CHEAT_SPAWN_HOTRINGB,
    CHEAT_SPAWN_ROMERO,
    CHEAT_SPAWN_STRETCH,
    CHEAT_SPAWN_TRASHMASTER,
    CHEAT_SPAWN_CADDY,
    CHEAT_BLOW_UP_ALL_CARS,
    CHEAT_INVISIBLE_CAR,
    CHEAT_PERFECT_HANDLING,
    CHEAT_SUICIDE,
    CHEAT_BGREEN_LIGHTS_CHEAT,
    CHEAT_AGGRESSIVE_DRIVERS,
    CHEAT_PINK_TRAFFIC,
    CHEAT_BLACK_TRAFFIC,
    CHEAT_CARS_ON_WATER,
    CHEAT_BOATS_FLY,
    CHEAT_FAT_PLAYER,
    CHEAT_MAX_MUSCLE,
    CHEAT_SKINNY_PLAYER,
    CHEAT_ELVIS_IS_EVERYWHERE,
    CHEAT_PEDS_ATTACK_YOU_WITH_ROCKETS,
    CHEAT_BEACH_PARTY,
    CHEAT_GANGMEMBERS_EVERYWHERE,
    CHEAT_GANGS_CONTROLS_THE_STREETS,
    CHEAT_NINJA_THEME,
    CHEAT_SLUT_MAGNET,
    CHEAT_CHEAP_TRAFFIC,
    CHEAT_FAST_TRAFFIC,
    CHEAT_CARS_FLY,
    CHEAT_HUGE_BUNNY_HOP,
    CHEAT_SPAWN_HYDRA,
    CHEAT_SPAWN_VORTEX,
    CHEAT_SMASH_N_BOOM,
    CHEAT_ALL_CARS_HAVE_NITRO,
    CHEAT_CARS_FLOAT_AWAY_WHEN_HIT,
    CHEAT_ALWAYS_MIDNIGHT,
    CHEAT_STOP_GAME_CLOCK_ORANGE_SKY,
    CHEAT_THUNDER_STORM,
    CHEAT_SAND_STORM,
    CHEAT_UNUSED,
    CHEAT_MEGAJUMP,
    CHEAT_INFINITE_HEALTH,
    CHEAT_INFINITE_OXYGEN,
    CHEAT_GET_PARACHUTE,
    CHEAT_GET_JETPACK,
    CHEAT_I_DO_AS_I_PLEASE,
    CHEAT_SIX_WANTED_STARS,
    CHEAT_MEGA_PUNCH,
    CHEAT_NEVER_GET_HUNGRY,
    CHEAT_RIOT_MODE,
    CHEAT_FUNHOUSE_THEME,
    CHEAT_ADRENALINE_MODE,
    CHEAT_INFINITE_AMMO,
    CHEAT_WEAPON_AIMING_WHILE_DRIVING,
    CHEAT_REDUCED_TRAFFIC,
    CHEAT_COUNTRY_TRAFFIC,
    CHEAT_WANNA_BE_IN_MY_GANG,
    CHEAT_NO_ONE_CAN_STOP_US,
    CHEAT_ROCKET_MAYHEM,
    CHEAT_MAX_RESPECT,
    CHEAT_MAX_SEX_APPEAL,
    CHEAT_MAX_STAMINA,
    CHEAT_HITMAN_LEVEL_FOR_ALL_WEAPONS,
    CHEAT_MAX_DRIVING_SKILLS,
    CHEAT_SPAWN_HUNTER,
    CHEAT_SPAWN_QUAD,
    CHEAT_SPAWN_TANKER_TRUCK,
    CHEAT_SPAWN_DOZER,
    CHEAT_SPAWN_STUNT_PLANE,
    CHEAT_SPAWN_MONSTER,
    CHEAT_PROSTITUTES_PAY_YOU,
    CHEAT_ALL_TAXIS_NITRO,
    TOTAL_CHEATS
};


class PLUGIN_API CCheat {
public:

    SUPPORTED_10US static void(*(&m_aCheatFunctions)[TOTAL_CHEATS])();
    SUPPORTED_10US static int(&m_aCheatHashKeys)[TOTAL_CHEATS];
    SUPPORTED_10US static char(&m_CheatString)[30]; // static char m_CheatString[30]
    SUPPORTED_10US static bool(&m_aCheatsActive)[TOTAL_CHEATS];
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
