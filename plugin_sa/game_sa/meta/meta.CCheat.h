/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCheat::AddToCheatString)
    static int address;
    static int global_address;
    static const int id = 0x438480;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x438480, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x439B0A, GAME_10US_COMPACT, H_CALL, 0x439AF0, 1>;
    using def_t = void(char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char>, 0>;
META_END

META_BEGIN(CCheat::WeaponCheat1)
    static int address;
    static int global_address;
    static const int id = 0x4385B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4385B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x43857F, GAME_10US_COMPACT, H_CALL, 0x438480, 1,
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::WeaponCheat2)
    static int address;
    static int global_address;
    static const int id = 0x438890;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x438890, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::WeaponCheat3)
    static int address;
    static int global_address;
    static const int id = 0x438B30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x438B30, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::HealthCheat)
    static int address;
    static int global_address;
    static const int id = 0x438D60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x438D60, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x438E89, GAME_10US_COMPACT, H_JUMP, 0x438E40, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::MoneyArmourHealthCheat)
    static int address;
    static int global_address;
    static const int id = 0x438E40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x438E40, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::WantedLevelUpCheat)
    static int address;
    static int global_address;
    static const int id = 0x438E90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x438E90, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::WantedLevelDownCheat)
    static int address;
    static int global_address;
    static const int id = 0x438F20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x438F20, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::SunnyWeatherCheat)
    static int address;
    static int global_address;
    static const int id = 0x438F40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x438F40, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::ExtraSunnyWeatherCheat)
    static int address;
    static int global_address;
    static const int id = 0x438F50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x438F50, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::CloudyWeatherCheat)
    static int address;
    static int global_address;
    static const int id = 0x438F60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x438F60, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::RainyWeatherCheat)
    static int address;
    static int global_address;
    static const int id = 0x438F70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x438F70, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::FoggyWeatherCheat)
    static int address;
    static int global_address;
    static const int id = 0x438F80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x438F80, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::FastTimeCheat)
    static int address;
    static int global_address;
    static const int id = 0x438F90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x438F90, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::SlowTimeCheat)
    static int address;
    static int global_address;
    static const int id = 0x438FC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x438FC0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::SuicideCheat)
    static int address;
    static int global_address;
    static const int id = 0x438FF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x438FF0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::PinkCarsCheat)
    static int address;
    static int global_address;
    static const int id = 0x4390D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4390D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::BlackCarsCheat)
    static int address;
    static int global_address;
    static const int id = 0x4390F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4390F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::FatCheat)
    static int address;
    static int global_address;
    static const int id = 0x439110;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439110, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::MuscleCheat)
    static int address;
    static int global_address;
    static const int id = 0x439150;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439150, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::SkinnyCheat)
    static int address;
    static int global_address;
    static const int id = 0x439190;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439190, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::ElvisLivesCheat)
    static int address;
    static int global_address;
    static const int id = 0x4391D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4391D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::BeachPartyCheat)
    static int address;
    static int global_address;
    static const int id = 0x439230;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439230, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x439A23, GAME_10US_COMPACT, H_CALL, 0x439A10, 1,
        0x439EB5, GAME_10US_COMPACT, H_CALL, 0x439E50, 1,
        0x43A064, GAME_10US_COMPACT, H_CALL, 0x439F60, 1,
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::GangsCheat)
    static int address;
    static int global_address;
    static const int id = 0x439360;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439360, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::GangLandCheat)
    static int address;
    static int global_address;
    static const int id = 0x4393D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4393D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::LoveConquersAllCheat)
    static int address;
    static int global_address;
    static const int id = 0x4393F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4393F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::AllCarsAreShitCheat)
    static int address;
    static int global_address;
    static const int id = 0x4394B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4394B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::AllCarsAreGreatCheat)
    static int address;
    static int global_address;
    static const int id = 0x4394E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4394E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::MidnightCheat)
    static int address;
    static int global_address;
    static const int id = 0x439510;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439510, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::DuskCheat)
    static int address;
    static int global_address;
    static const int id = 0x439540;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439540, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::StormCheat)
    static int address;
    static int global_address;
    static const int id = 0x439570;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439570, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::SandstormCheat)
    static int address;
    static int global_address;
    static const int id = 0x439590;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439590, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::PredatorCheat)
    static int address;
    static int global_address;
    static const int id = 0x4395A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4395A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::ParachuteCheat)
    static int address;
    static int global_address;
    static const int id = 0x4395B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4395B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::JetpackCheat)
    static int address;
    static int global_address;
    static const int id = 0x439600;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439600, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::NotWantedCheat)
    static int address;
    static int global_address;
    static const int id = 0x4396C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4396C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::WantedCheat)
    static int address;
    static int global_address;
    static const int id = 0x4396F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4396F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::RiotCheat)
    static int address;
    static int global_address;
    static const int id = 0x439710;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439710, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::FunhouseCheat)
    static int address;
    static int global_address;
    static const int id = 0x439720;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439720, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x439A60, GAME_10US_COMPACT, H_CALL, 0x439A10, 1,
        0x439EDE, GAME_10US_COMPACT, H_CALL, 0x439E50, 1,
        0x43A092, GAME_10US_COMPACT, H_CALL, 0x439F60, 1,
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::AdrenalineCheat)
    static int address;
    static int global_address;
    static const int id = 0x439880;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439880, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::DrivebyCheat)
    static int address;
    static int global_address;
    static const int id = 0x4398D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4398D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::StaminaCheat)
    static int address;
    static int global_address;
    static const int id = 0x439930;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439930, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::WeaponSkillsCheat)
    static int address;
    static int global_address;
    static const int id = 0x439940;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439940, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::VehicleSkillsCheat)
    static int address;
    static int global_address;
    static const int id = 0x4399D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4399D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::HandleSpecialCheats)
    static int address;
    static int global_address;
    static const int id = 0x439A10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439A10, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x43934E, GAME_10US_COMPACT, H_CALL, 0x439230, 1,
        0x4394C6, GAME_10US_COMPACT, H_CALL, 0x4394B0, 1,
        0x4394F6, GAME_10US_COMPACT, H_CALL, 0x4394E0, 1,
        0x439856, GAME_10US_COMPACT, H_CALL, 0x439720, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CCheat::MayhemCheat)
    static int address;
    static int global_address;
    static const int id = 0x439B20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439B20, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::EverybodyAttacksPlayerCheat)
    static int address;
    static int global_address;
    static const int id = 0x439C70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439C70, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x439E2D, GAME_10US_COMPACT, H_CALL, 0x439DD0, 1,
        0x439E47, GAME_10US_COMPACT, H_JUMP, 0x439DD0, 2,
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::BlowUpCarsCheat)
    static int address;
    static int global_address;
    static const int id = 0x439D80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439D80, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::VillagePeopleCheat)
    static int address;
    static int global_address;
    static const int id = 0x439DD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439DD0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::NinjaCheat)
    static int address;
    static int global_address;
    static const int id = 0x439E50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439E50, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::CountrysideInvasionCheat)
    static int address;
    static int global_address;
    static const int id = 0x439F60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x439F60, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x439A74, GAME_10US_COMPACT, H_JUMP, 0x439A10, 1,
        0x439EEB, GAME_10US_COMPACT, H_CALL, 0x439E50, 1,
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::VehicleCheat)
    static int address;
    static int global_address;
    static const int id = 0x43A0B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A0B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (17), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x43A4A5, GAME_10US_COMPACT, H_CALL, 0x43A4A0, 1,
        0x43A4B5, GAME_10US_COMPACT, H_CALL, 0x43A4B0, 1,
        0x43A4C5, GAME_10US_COMPACT, H_CALL, 0x43A4C0, 1,
        0x43A4D5, GAME_10US_COMPACT, H_CALL, 0x43A4D0, 1,
        0x43A4E5, GAME_10US_COMPACT, H_CALL, 0x43A4E0, 1,
        0x43A4F5, GAME_10US_COMPACT, H_CALL, 0x43A4F0, 1,
        0x43A505, GAME_10US_COMPACT, H_CALL, 0x43A500, 1,
        0x43A515, GAME_10US_COMPACT, H_CALL, 0x43A510, 1,
        0x43A525, GAME_10US_COMPACT, H_CALL, 0x43A520, 1,
        0x43A535, GAME_10US_COMPACT, H_CALL, 0x43A530, 1,
        0x43A545, GAME_10US_COMPACT, H_CALL, 0x43A540, 1,
        0x43A555, GAME_10US_COMPACT, H_CALL, 0x43A550, 1,
        0x43A565, GAME_10US_COMPACT, H_CALL, 0x43A560, 1,
        0x43A58C, GAME_10US_COMPACT, H_CALL, 0x43A570, 1,
        0x43A665, GAME_10US_COMPACT, H_CALL, 0x43A660, 1,
        0x43A675, GAME_10US_COMPACT, H_CALL, 0x43A670, 1,
        0x43A685, GAME_10US_COMPACT, H_CALL, 0x43A680, 1>;
    using def_t = CVehicle*(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CCheat::TankCheat)
    static int address;
    static int global_address;
    static const int id = 0x43A4A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A4A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::StockCarCheat)
    static int address;
    static int global_address;
    static const int id = 0x43A4B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A4B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::StockCar2Cheat)
    static int address;
    static int global_address;
    static const int id = 0x43A4C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A4C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::StockCar3Cheat)
    static int address;
    static int global_address;
    static const int id = 0x43A4D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A4D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::StockCar4Cheat)
    static int address;
    static int global_address;
    static const int id = 0x43A4E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A4E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::HearseCheat)
    static int address;
    static int global_address;
    static const int id = 0x43A4F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A4F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::LovefistCheat)
    static int address;
    static int global_address;
    static const int id = 0x43A500;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A500, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::TrashmasterCheat)
    static int address;
    static int global_address;
    static const int id = 0x43A510;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A510, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::GolfcartCheat)
    static int address;
    static int global_address;
    static const int id = 0x43A520;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A520, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::FlyboyCheat)
    static int address;
    static int global_address;
    static const int id = 0x43A530;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A530, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::VortexCheat)
    static int address;
    static int global_address;
    static const int id = 0x43A540;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A540, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::ApacheCheat)
    static int address;
    static int global_address;
    static const int id = 0x43A550;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A550, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::QuadCheat)
    static int address;
    static int global_address;
    static const int id = 0x43A560;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A560, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::TankerCheat)
    static int address;
    static int global_address;
    static const int id = 0x43A570;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A570, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::DozerCheat)
    static int address;
    static int global_address;
    static const int id = 0x43A660;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A660, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::StuntPlaneCheat)
    static int address;
    static int global_address;
    static const int id = 0x43A670;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A670, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCheat::MonsterTruckCheat)
    static int address;
    static int global_address;
    static const int id = 0x43A680;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43A680, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x8A5B58, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
