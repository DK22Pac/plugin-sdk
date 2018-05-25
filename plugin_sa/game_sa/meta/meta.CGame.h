/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CGame::InitialiseOnceBeforeRW)
    static int address;
    static int global_address;
    static const int id = 0x53BB50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53BB50, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53EC2B, GAME_10US_COMPACT, H_CALL, 0x53EC10, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::ShutdownRenderWare)
    static int address;
    static int global_address;
    static const int id = 0x53BB80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53BB80, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53D910, GAME_10US_COMPACT, H_CALL, 0x53D910, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::FinalShutdown)
    static int address;
    static int global_address;
    static const int id = 0x53BC30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53BC30, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53EC96, GAME_10US_COMPACT, H_CALL, 0x53EC10, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::InitAfterLostFocus)
    static int address;
    static int global_address;
    static const int id = 0x53BC60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53BC60, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x748063, GAME_10US_COMPACT, H_CALL, 0x747EB0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x53BC80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53BC80, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53DF24, GAME_10US_COMPACT, H_CALL, 0x53DF10, 1,
        0x53E58E, GAME_10US_COMPACT, H_CALL, 0x53E580, 1>;
    using def_t = bool(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CGame::ReInitGameObjectVariables)
    static int address;
    static int global_address;
    static const int id = 0x53BCF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53BCF0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53C6DB, GAME_10US_COMPACT, H_CALL, 0x53C680, 1,
        0x53C76D, GAME_10US_COMPACT, H_CALL, 0x53C680, 2>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::ReloadIPLs)
    static int address;
    static int global_address;
    static const int id = 0x53BED0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53BED0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::Process)
    static int address;
    static int global_address;
    static const int id = 0x53BEE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53BEE0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53E981, GAME_10US_COMPACT, H_CALL, 0x53E920, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::GenerateTempPedAtStartOfNetworkGame)
    static int address;
    static int global_address;
    static const int id = 0x53C240;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53C240, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::CanSeeOutSideFromCurrArea)
    static int address;
    static int global_address;
    static const int id = 0x53C4A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53C4A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x6FC625, GAME_10US_COMPACT, H_CALL, 0x6FC5A0, 1,
        0x713953, GAME_10US_COMPACT, H_CALL, 0x713950, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::CanSeeWaterFromCurrArea)
    static int address;
    static int global_address;
    static const int id = 0x53C4B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53C4B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x6E7670, GAME_10US_COMPACT, H_JUMP, 0x6E7670, 1,
        0x6EB710, GAME_10US_COMPACT, H_CALL, 0x6EB710, 1,
        0x6EF657, GAME_10US_COMPACT, H_CALL, 0x6EF650, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::TidyUpMemory)
    static int address;
    static int global_address;
    static const int id = 0x53C500;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53C500, 0, 0, 0, 0, 0>;
    // total references count: 10us (5), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x440A83, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1,
        0x572EEB, GAME_10US_COMPACT, H_CALL, 0x572EC0, 1,
        0x572F82, GAME_10US_COMPACT, H_CALL, 0x572EC0, 2,
        0x618EE1, GAME_10US_COMPACT, H_CALL, 0x618E90, 1,
        0x618FE3, GAME_10US_COMPACT, H_CALL, 0x618F50, 1>;
    using def_t = void(bool, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool,bool>, 0,1>;
META_END

META_BEGIN(CGame::ShutDownForRestart)
    static int address;
    static int global_address;
    static const int id = 0x53C550;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53C550, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53C758, GAME_10US_COMPACT, H_CALL, 0x53C680, 1,
        0x748E04, GAME_10US_COMPACT, H_CALL, 0x748710, 1,
        0x748E3E, GAME_10US_COMPACT, H_CALL, 0x748710, 2>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::InitialiseWhenRestarting)
    static int address;
    static int global_address;
    static const int id = 0x53C680;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53C680, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x748E09, GAME_10US_COMPACT, H_CALL, 0x748710, 1,
        0x748E48, GAME_10US_COMPACT, H_CALL, 0x748710, 2>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::DrasticTidyUpMemory)
    static int address;
    static int global_address;
    static const int id = 0x53C810;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53C810, 0, 0, 0, 0, 0>;
    // total references count: 10us (5), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x44148E, GAME_10US_COMPACT, H_CALL, 0x441440, 1,
        0x4D5AFE, GAME_10US_COMPACT, H_CALL, 0x4D5AF0, 1,
        0x4D5BF4, GAME_10US_COMPACT, H_CALL, 0x4D5AF0, 2,
        0x5AFFB4, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 1,
        0x5B1434, GAME_10US_COMPACT, H_CALL, 0x5B13F0, 1>;
    using def_t = void(bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(CGame::Shutdown)
    static int address;
    static int global_address;
    static const int id = 0x53C900;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53C900, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x748E6B, GAME_10US_COMPACT, H_CALL, 0x748710, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::InitialiseEssentialsAfterRW)
    static int address;
    static int global_address;
    static const int id = 0x5BA160;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5BA160, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x748C30, GAME_10US_COMPACT, H_CALL, 0x748710, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::Init2)
    static int address;
    static int global_address;
    static const int id = 0x5BA1A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5BA1A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53BCA6, GAME_10US_COMPACT, H_CALL, 0x53BC80, 1>;
    using def_t = bool(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CGame::Init3)
    static int address;
    static int global_address;
    static const int id = 0x5BA400;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5BA400, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53BCD9, GAME_10US_COMPACT, H_CALL, 0x53BC80, 1>;
    using def_t = bool(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CGame::InitialiseRenderWare)
    static int address;
    static int global_address;
    static const int id = 0x5BD600;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5BD600, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5BF3A1, GAME_10US_COMPACT, H_CALL, 0x5BF390, 1,
        0x5BF3BE, GAME_10US_COMPACT, H_CALL, 0x5BF3B0, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::Init1)
    static int address;
    static int global_address;
    static const int id = 0x5BF840;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5BF840, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53BC86, GAME_10US_COMPACT, H_CALL, 0x53BC80, 1>;
    using def_t = bool(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CGame::InitialiseCoreDataAfterRW)
    static int address;
    static int global_address;
    static const int id = 0x5BFA90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5BFA90, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x748C3F, GAME_10US_COMPACT, H_CALL, 0x748710, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(MoveMem)
    static int address;
    static int global_address;
    static const int id = 0x53C250;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53C250, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53C352, GAME_10US_COMPACT, H_CALL, 0x53C290, 1,
        0x53C366, GAME_10US_COMPACT, H_CALL, 0x53C290, 2,
        0x53C37A, GAME_10US_COMPACT, H_CALL, 0x53C290, 3,
        0x53C38E, GAME_10US_COMPACT, H_CALL, 0x53C290, 4>;
    using def_t = bool(void **);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<void **>, 0>;
META_END

META_BEGIN(MoveColModelMemory)
    static int address;
    static int global_address;
    static const int id = 0x53C290;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53C290, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = bool(CColModel &, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CColModel &,bool>, 0,1>;
META_END

META_BEGIN(MoveGeometryMemory)
    static int address;
    static int global_address;
    static const int id = 0x53C3E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53C3E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53C46F, GAME_10US_COMPACT, H_CALL, 0x53C440, 1>;
    using def_t = RpGeometry *(RpGeometry *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RpGeometry *>, 0>;
META_END

META_BEGIN(TidyUpModelInfo2)
    static int address;
    static int global_address;
    static const int id = 0x53C440;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x53C440, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = bool(CEntity *, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CEntity *,bool>, 0,1>;
META_END

META_BEGIN(ValidateVersion)
    static int address;
    static int global_address;
    static const int id = 0x5BA060;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5BA060, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5BD606, GAME_10US_COMPACT, H_CALL, 0x5BD600, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(D3DDeviceRestoreCallback)
    static int address;
    static int global_address;
    static const int id = 0x5BA120;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5BA120, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5BD798, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(DoHaspChecks)
    static int address;
    static int global_address;
    static const int id = 0x5BA150;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5BA150, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
