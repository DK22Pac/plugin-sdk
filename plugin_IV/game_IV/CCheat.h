/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"

enum eCheatFuncs {
    CHEAT_WEAPONS_1,
    CHEAT_WEAPONS_2,
    CHEAT_HEALTH_ARMOUR_AMMO,
    CHEAT_INCREASE_WANTED_LEVEL,
    CHEAT_CLEAR_WANTED_LEVEL,
    CHEAT_6,
    CHEAT_CHANGE_WEATHER,
    CHEAT_SPAWN_ANNIHILATOR,
    CHEAT_SPAWN_FCR900,
    CHEAT_SPAWN_FBIBUFFALO,
    CHEAT_SPAWN_JETMAX,
    CHEAT_SPAWN_COMET,
    CHEAT_SPAWN_TURISMO,
    CHEAT_SPAWN_COGNOSCENTI,
    CHEAT_SPAWN_SUPERGT,
    CHEAT_SPAWN_SANCHEZ,
    // TLAD
    CHEAT_SPAWN_INNOVATION,
    CHEAT_SPAWN_HEXER,
    CHEAT_SPAWN_HAKUCHOU_CUSTOM,
    CHEAT_SPAWN_DOUBLE_T_CUSTOM,
    CHEAT_SPAWN_GANG_BURRITO,
    CHEAT_SPAWN_SLAMVAN,
    // TBOGT
    CHEAT_WEAPONS_3,
    CHEAT_SPAWN_FLOATER,
    CHEAT_SPAWN_AKUMA,
    CHEAT_SPAWN_VADER,
    CHEAT_SPAWN_APC,
    CHEAT_SPAWN_BUZZARD,
    CHEAT_SPAWN_BULLETGT,
    CHEAT_PARACHUTE,
    CHEAT_SUPER_PUNCH,
    CHEAT_EXPLOSIVE_SNIPER,
};

class CCheat {
public:
    static void (**m_aCheatFunctions)();
    static int32_t* m_aCheatHashKeys;
    static wchar_t* m_CheatString;
    static bool* m_aCheatsActive;
    static bool& m_bHasPlayerCheated;

public:
    static void AddToCheatString(wchar_t lastPressedKey);
    static CVehicle* VehicleCheat(int32_t vehicleId);
    static void ActivateCheat(uint32_t id);

    static void WeaponCheat1();
    static void WeaponCheat2();
    static void HealthArmourAmmoCheat();
    static void IncreaseWantedLevelCheat();
    static void ClearWantedLevelCheat();
    static void ChangeWeatherCheat();
    static void SpawnAnnihilator();
};
