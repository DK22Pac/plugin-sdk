/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CGangWars::InitAtStartOfGame)
    static int address;
    static int global_address;
    static const int id = 0x443920;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x443920, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53BD02, GAME_10US_COMPACT, H_CALL, 0x53BCF0, 1,
        0x5BF8D6, GAME_10US_COMPACT, H_CALL, 0x5BF840, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::AddKillToProvocation)
    static int address;
    static int global_address;
    static const int id = 0x443950;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x443950, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x43DEE9, GAME_10US_COMPACT, H_CALL, 0x43DCD0, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CGangWars::DontCreateCivilians)
    static int address;
    static int global_address;
    static const int id = 0x4439C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4439C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4341D1, GAME_10US_COMPACT, H_CALL, 0x4341C0, 1,
        0x61477A, GAME_10US_COMPACT, H_CALL, 0x614720, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::PedStreamedInForThisGang)
    static int address;
    static int global_address;
    static const int id = 0x4439D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4439D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (5), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4448BE, GAME_10US_COMPACT, H_CALL, 0x444810, 1,
        0x4448FB, GAME_10US_COMPACT, H_CALL, 0x444810, 2,
        0x444A53, GAME_10US_COMPACT, H_CALL, 0x444810, 3,
        0x444A69, GAME_10US_COMPACT, H_CALL, 0x444810, 4,
        0x4453F3, GAME_10US_COMPACT, H_CALL, 0x4453D0, 1>;
    using def_t = bool(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CGangWars::PickStreamedInPedForThisGang)
    static int address;
    static int global_address;
    static const int id = 0x443A20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x443A20, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x444D8A, GAME_10US_COMPACT, H_CALL, 0x444810, 1,
        0x44554B, GAME_10US_COMPACT, H_CALL, 0x4453D0, 1>;
    using def_t = bool(int, int *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,int *>, 0,1>;
META_END

META_BEGIN(CGangWars::GangWarGoingOn)
    static int address;
    static int global_address;
    static const int id = 0x443AA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x443AA0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x471A66, GAME_10US_COMPACT, H_CALL, 0x470A90, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::GangWarFightingGoingOn)
    static int address;
    static int global_address;
    static const int id = 0x443AC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x443AC0, 0, 0, 0, 0, 0>;
    // total references count: 10us (9), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x424DEE, GAME_10US_COMPACT, H_CALL, 0x424CE0, 1,
        0x42F9D1, GAME_10US_COMPACT, H_CALL, 0x42F9C0, 1,
        0x4301C1, GAME_10US_COMPACT, H_CALL, 0x430050, 1,
        0x47B677, GAME_10US_COMPACT, H_CALL, 0x47A760, 1,
        0x562167, GAME_10US_COMPACT, H_CALL, 0x562120, 1,
        0x56218E, GAME_10US_COMPACT, H_CALL, 0x562120, 2,
        0x60FCC2, GAME_10US_COMPACT, H_CALL, 0x60FBD0, 1,
        0x612045, GAME_10US_COMPACT, H_CALL, 0x611FC0, 1,
        0x6147F5, GAME_10US_COMPACT, H_CALL, 0x614720, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::DoesPlayerControlThisZone)
    static int address;
    static int global_address;
    static const int id = 0x443AE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x443AE0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = bool(CZoneInfo *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CZoneInfo *>, 0>;
META_END

META_BEGIN(CGangWars::PickZoneToAttack)
    static int address;
    static int global_address;
    static const int id = 0x443B00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x443B00, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x444303, GAME_10US_COMPACT, H_CALL, 0x444300, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::TellStreamingWhichGangsAreNeeded)
    static int address;
    static int global_address;
    static const int id = 0x443D50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x443D50, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x40AABF, GAME_10US_COMPACT, H_CALL, 0x40AA10, 1>;
    using def_t = void(int *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int *>, 0>;
META_END

META_BEGIN(CGangWars::CalculateTimeTillNextAttack)
    static int address;
    static int global_address;
    static const int id = 0x443DB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x443DB0, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x446B25, GAME_10US_COMPACT, H_CALL, 0x446610, 1,
        0x446BCB, GAME_10US_COMPACT, H_CALL, 0x446610, 2,
        0x446D49, GAME_10US_COMPACT, H_CALL, 0x446610, 3>;
    using def_t = unsigned int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::UpdateTerritoryUnderControlPercentage)
    static int address;
    static int global_address;
    static const int id = 0x443DE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x443DE0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x44665D, GAME_10US_COMPACT, H_CALL, 0x446610, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::CanPlayerStartAGangWarHere)
    static int address;
    static int global_address;
    static const int id = 0x443F80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x443F80, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4460A0, GAME_10US_COMPACT, H_CALL, 0x446050, 1,
        0x5724F9, GAME_10US_COMPACT, H_CALL, 0x572440, 1,
        0x5866F7, GAME_10US_COMPACT, H_CALL, 0x586650, 1>;
    using def_t = bool(CZoneInfo *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CZoneInfo *>, 0>;
META_END

META_BEGIN(CGangWars::ClearSpecificZonesToTriggerGangWar)
    static int address;
    static int global_address;
    static const int id = 0x443FF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x443FF0, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x468601, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x476646, GAME_10US_COMPACT, H_CALL, 0x4762D0, 1,
        0x618F26, GAME_10US_COMPACT, H_CALL, 0x618E90, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::SetSpecificZoneToTriggerGangWar)
    static int address;
    static int global_address;
    static const int id = 0x444010;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x444010, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x476630, GAME_10US_COMPACT, H_CALL, 0x4762D0, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CGangWars::CheerVictory)
    static int address;
    static int global_address;
    static const int id = 0x444040;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x444040, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x446411, GAME_10US_COMPACT, H_CALL, 0x446400, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::StartDefensiveGangWar)
    static int address;
    static int global_address;
    static const int id = 0x444300;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x444300, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x446E46, GAME_10US_COMPACT, H_CALL, 0x446610, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::ClearTheStreets)
    static int address;
    static int global_address;
    static const int id = 0x4444B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4444B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4462E8, GAME_10US_COMPACT, H_CALL, 0x446050, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::TellGangMembersTo)
    static int address;
    static int global_address;
    static const int id = 0x444530;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x444530, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x446395, GAME_10US_COMPACT, H_CALL, 0x446050, 1,
        0x446470, GAME_10US_COMPACT, H_CALL, 0x446400, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CGangWars::CreateAttackWave)
    static int address;
    static int global_address;
    static const int id = 0x444810;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x444810, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x446710, GAME_10US_COMPACT, H_CALL, 0x446610, 1,
        0x4467F4, GAME_10US_COMPACT, H_CALL, 0x446610, 2,
        0x4468D3, GAME_10US_COMPACT, H_CALL, 0x446610, 3>;
    using def_t = bool(int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CGangWars::CreateDefendingGroup)
    static int address;
    static int global_address;
    static const int id = 0x4453D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4453D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x446CA1, GAME_10US_COMPACT, H_CALL, 0x446610, 1>;
    using def_t = bool(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CGangWars::AttackWaveOvercome)
    static int address;
    static int global_address;
    static const int id = 0x445B30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x445B30, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x446739, GAME_10US_COMPACT, H_CALL, 0x446610, 1,
        0x44681F, GAME_10US_COMPACT, H_CALL, 0x446610, 2,
        0x4468F5, GAME_10US_COMPACT, H_CALL, 0x446610, 3,
        0x446B12, GAME_10US_COMPACT, H_CALL, 0x446610, 4>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::ReleasePedsInAttackWave)
    static int address;
    static int global_address;
    static const int id = 0x445C30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x445C30, 0, 0, 0, 0, 0>;
    // total references count: 10us (8), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x446404, GAME_10US_COMPACT, H_CALL, 0x446400, 1,
        0x446524, GAME_10US_COMPACT, H_CALL, 0x4464C0, 1,
        0x446554, GAME_10US_COMPACT, H_CALL, 0x4464C0, 2,
        0x446748, GAME_10US_COMPACT, H_CALL, 0x446610, 1,
        0x44682E, GAME_10US_COMPACT, H_CALL, 0x446610, 2,
        0x446A32, GAME_10US_COMPACT, H_CALL, 0x446610, 3,
        0x446B95, GAME_10US_COMPACT, H_CALL, 0x446610, 4,
        0x446C2E, GAME_10US_COMPACT, H_CALL, 0x446610, 5>;
    using def_t = int(bool, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool,bool>, 0,1>;
META_END

META_BEGIN(CGangWars::ReleaseCarsInAttackWave)
    static int address;
    static int global_address;
    static const int id = 0x445E20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x445E20, 0, 0, 0, 0, 0>;
    // total references count: 10us (5), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x44640C, GAME_10US_COMPACT, H_CALL, 0x446400, 1,
        0x44655C, GAME_10US_COMPACT, H_JUMP, 0x4464C0, 1,
        0x44674D, GAME_10US_COMPACT, H_CALL, 0x446610, 1,
        0x446833, GAME_10US_COMPACT, H_CALL, 0x446610, 2,
        0x446A37, GAME_10US_COMPACT, H_CALL, 0x446610, 3>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::MakePlayerGainInfluenceInZone)
    static int address;
    static int global_address;
    static const int id = 0x445E80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x445E80, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x446757, GAME_10US_COMPACT, H_CALL, 0x446610, 1,
        0x44683D, GAME_10US_COMPACT, H_CALL, 0x446610, 2,
        0x446903, GAME_10US_COMPACT, H_CALL, 0x446610, 3>;
    using def_t = bool(float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<float>, 0>;
META_END

META_BEGIN(CGangWars::StrengthenPlayerInfluenceInZone)
    static int address;
    static int global_address;
    static const int id = 0x445F50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x445F50, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x446B87, GAME_10US_COMPACT, H_CALL, 0x446610, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CGangWars::MakeEnemyGainInfluenceInZone)
    static int address;
    static int global_address;
    static const int id = 0x445FD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x445FD0, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x446534, GAME_10US_COMPACT, H_CALL, 0x4464C0, 1,
        0x446C3D, GAME_10US_COMPACT, H_CALL, 0x446610, 1,
        0x446D3E, GAME_10US_COMPACT, H_CALL, 0x446610, 2>;
    using def_t = void(int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CGangWars::StartOffensiveGangWar)
    static int address;
    static int global_address;
    static const int id = 0x446050;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x446050, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4466DC, GAME_10US_COMPACT, H_CALL, 0x446610, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::DoStuffWhenPlayerVictorious)
    static int address;
    static int global_address;
    static const int id = 0x446400;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x446400, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x44690B, GAME_10US_COMPACT, H_CALL, 0x446610, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::EndGangWar)
    static int address;
    static int global_address;
    static const int id = 0x4464C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4464C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (5), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4465D4, GAME_10US_COMPACT, H_CALL, 0x446570, 1,
        0x446631, GAME_10US_COMPACT, H_CALL, 0x446610, 1,
        0x56E5C3, GAME_10US_COMPACT, H_CALL, 0x56E580, 1,
        0x56E5FE, GAME_10US_COMPACT, H_CALL, 0x56E5D0, 1,
        0x618F87, GAME_10US_COMPACT, H_CALL, 0x618F50, 1>;
    using def_t = void(bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(CGangWars::SetGangWarsActive)
    static int address;
    static int global_address;
    static const int id = 0x446570;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x446570, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4465FC, GAME_10US_COMPACT, H_CALL, 0x4465F0, 1,
        0x471A41, GAME_10US_COMPACT, H_CALL, 0x470A90, 1,
        0x471A52, GAME_10US_COMPACT, H_CALL, 0x470A90, 2>;
    using def_t = void(bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(CGangWars::SwitchGangWarsActive)
    static int address;
    static int global_address;
    static const int id = 0x4465F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4465F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::Update)
    static int address;
    static int global_address;
    static const int id = 0x446610;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x446610, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53C122, GAME_10US_COMPACT, H_CALL, 0x53BEE0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::Load)
    static int address;
    static int global_address;
    static const int id = 0x5D3EB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D3EB0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D19B2, GAME_10US_COMPACT, H_CALL, 0x5D17B0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangWars::Save)
    static int address;
    static int global_address;
    static const int id = 0x5D5530;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D5530, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D158A, GAME_10US_COMPACT, H_CALL, 0x5D13E0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
