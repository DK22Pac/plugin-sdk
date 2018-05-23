/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CGenericGameStorage::ReportError)
    static int address;
    static int global_address;
    static const int id = 0x5D08C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D08C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D1A71, GAME_10US_COMPACT, H_CALL, 0x5D17B0, 1,
        0x5D1AD1, GAME_10US_COMPACT, H_CALL, 0x5D17B0, 2>;
    using def_t = void(eSaveLoadBlocks, eSaveLoadError);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<eSaveLoadBlocks,eSaveLoadError>, 0,1>;
META_END

META_BEGIN(CGenericGameStorage::OpenFileForReading)
    static int address;
    static int global_address;
    static const int id = 0x5D0D20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D0D20, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D118B, GAME_10US_COMPACT, H_CALL, 0x5D1170, 1,
        0x5D17D4, GAME_10US_COMPACT, H_CALL, 0x5D17B0, 1>;
    using def_t = bool(char *, unsigned int *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char *,unsigned int *>, 0,1>;
META_END

META_BEGIN(CGenericGameStorage::OpenFileForWriting)
    static int address;
    static int global_address;
    static const int id = 0x5D0DD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D0DD0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D13ED, GAME_10US_COMPACT, H_CALL, 0x5D13E0, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGenericGameStorage::MakeValidSaveName)
    static int address;
    static int global_address;
    static const int id = 0x5D0E90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D0E90, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x619066, GAME_10US_COMPACT, H_CALL, 0x619060, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CGenericGameStorage::GetNameOfSavedGame)
    static int address;
    static int global_address;
    static const int id = 0x5D0F40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D0F40, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x579BE4, GAME_10US_COMPACT, H_CALL, 0x5794A0, 1>;
    using def_t = char *(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CGenericGameStorage::GetCurrentVersionNumber)
    static int address;
    static int global_address;
    static const int id = 0x5D0F50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D0F50, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D18E6, GAME_10US_COMPACT, H_CALL, 0x5D17B0, 1,
        0x5D1C12, GAME_10US_COMPACT, H_CALL, 0x5D1B80, 1>;
    using def_t = int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGenericGameStorage::SaveWorkBuffer)
    static int address;
    static int global_address;
    static const int id = 0x5D0F80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D0F80, 0, 0, 0, 0, 0>;
    // total references count: 10us (5), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D0FDA, GAME_10US_COMPACT, H_CALL, 0x5D0F80, 1,
        0x5D12BC, GAME_10US_COMPACT, H_CALL, 0x5D1270, 1,
        0x5D145E, GAME_10US_COMPACT, H_CALL, 0x5D13E0, 1,
        0x5D1604, GAME_10US_COMPACT, H_CALL, 0x5D13E0, 2,
        0x5D16A2, GAME_10US_COMPACT, H_CALL, 0x5D13E0, 3>;
    using def_t = bool(bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(CGenericGameStorage::LoadWorkBuffer)
    static int address;
    static int global_address;
    static const int id = 0x5D10B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D10B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D119C, GAME_10US_COMPACT, H_CALL, 0x5D1170, 1,
        0x5D11C2, GAME_10US_COMPACT, H_CALL, 0x5D1170, 2,
        0x5D134C, GAME_10US_COMPACT, H_CALL, 0x5D1300, 1,
        0x5D1846, GAME_10US_COMPACT, H_CALL, 0x5D17B0, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGenericGameStorage::CheckDataNotCorrupt)
    static int address;
    static int global_address;
    static const int id = 0x5D1170;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D1170, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D13A4, GAME_10US_COMPACT, H_CALL, 0x5D1380, 1,
        0x61925C, GAME_10US_COMPACT, H_CALL, 0x619140, 1>;
    using def_t = bool(int, char *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,char *>, 0,1>;
META_END

META_BEGIN(CGenericGameStorage::_SaveDataToWorkBuffer)
    static int address;
    static int global_address;
    static const int id = 0x5D1270;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D1270, 0, 0, 0, 0, 0>;
    // total references count: 10us (176), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D12A4, GAME_10US_COMPACT, H_CALL, 0x5D1270, 1,
        0x5D1444, GAME_10US_COMPACT, H_CALL, 0x5D13E0, 1,
        0x5D14BD, GAME_10US_COMPACT, H_CALL, 0x5D13E0, 2,
        0x5D284C, GAME_10US_COMPACT, H_CALL, 0x5D2830, 1,
        0x5D2858, GAME_10US_COMPACT, H_CALL, 0x5D2830, 2,
        0x5D29C8, GAME_10US_COMPACT, H_CALL, 0x5D29A0, 1,
        0x5D2E68, GAME_10US_COMPACT, H_CALL, 0x5D2E60, 1,
        0x5D2E74, GAME_10US_COMPACT, H_CALL, 0x5D2E60, 2,
        0x5D2E80, GAME_10US_COMPACT, H_CALL, 0x5D2E60, 3,
        0x5D2E8C, GAME_10US_COMPACT, H_CALL, 0x5D2E60, 4,
        0x5D2EAE, GAME_10US_COMPACT, H_CALL, 0x5D2E60, 5,
        0x5D2EDF, GAME_10US_COMPACT, H_CALL, 0x5D2E60, 6,
        0x5D2F0F, GAME_10US_COMPACT, H_CALL, 0x5D2E60, 7,
        0x5D2F28, GAME_10US_COMPACT, H_CALL, 0x5D2E60, 8,
        0x5D2F34, GAME_10US_COMPACT, H_CALL, 0x5D2E60, 9,
        0x5D3171, GAME_10US_COMPACT, H_CALL, 0x5D3160, 1,
        0x5D317D, GAME_10US_COMPACT, H_CALL, 0x5D3160, 2,
        0x5D3189, GAME_10US_COMPACT, H_CALL, 0x5D3160, 3,
        0x5D3195, GAME_10US_COMPACT, H_CALL, 0x5D3160, 4,
        0x5D31A1, GAME_10US_COMPACT, H_CALL, 0x5D3160, 5,
        0x5D31AD, GAME_10US_COMPACT, H_CALL, 0x5D3160, 6,
        0x5D31B9, GAME_10US_COMPACT, H_CALL, 0x5D3160, 7,
        0x5D31C9, GAME_10US_COMPACT, H_CALL, 0x5D3160, 8,
        0x5D31E4, GAME_10US_COMPACT, H_CALL, 0x5D3160, 9,
        0x5D31FB, GAME_10US_COMPACT, H_CALL, 0x5D3160, 10,
        0x5D3241, GAME_10US_COMPACT, H_CALL, 0x5D3160, 11,
        0x5D33C8, GAME_10US_COMPACT, H_CALL, 0x5D33C0, 1,
        0x5D33D4, GAME_10US_COMPACT, H_CALL, 0x5D33C0, 2,
        0x5D33E0, GAME_10US_COMPACT, H_CALL, 0x5D33C0, 3,
        0x5D33EC, GAME_10US_COMPACT, H_CALL, 0x5D33C0, 4,
        0x5D33F8, GAME_10US_COMPACT, H_CALL, 0x5D33C0, 5,
        0x5D341A, GAME_10US_COMPACT, H_CALL, 0x5D33C0, 6,
        0x5D3422, GAME_10US_COMPACT, H_CALL, 0x5D33C0, 7,
        0x5D34CE, GAME_10US_COMPACT, H_CALL, 0x5D34C0, 1,
        0x5D34E7, GAME_10US_COMPACT, H_CALL, 0x5D34C0, 2,
        0x5D354A, GAME_10US_COMPACT, H_CALL, 0x5D3540, 1,
        0x5D3564, GAME_10US_COMPACT, H_CALL, 0x5D3540, 2,
        0x5D3570, GAME_10US_COMPACT, H_CALL, 0x5D3540, 3,
        0x5D3585, GAME_10US_COMPACT, H_CALL, 0x5D3540, 4,
        0x5D3629, GAME_10US_COMPACT, H_CALL, 0x5D3620, 1,
        0x5D3650, GAME_10US_COMPACT, H_CALL, 0x5D3620, 2,
        0x5D365F, GAME_10US_COMPACT, H_CALL, 0x5D3620, 3,
        0x5D366E, GAME_10US_COMPACT, H_CALL, 0x5D3620, 4,
        0x5D3687, GAME_10US_COMPACT, H_CALL, 0x5D3620, 5,
        0x5D36B0, GAME_10US_COMPACT, H_CALL, 0x5D3620, 6,
        0x5D36BF, GAME_10US_COMPACT, H_CALL, 0x5D3620, 7,
        0x5D36CE, GAME_10US_COMPACT, H_CALL, 0x5D3620, 8,
        0x5D36E7, GAME_10US_COMPACT, H_CALL, 0x5D3620, 9,
        0x5D36F3, GAME_10US_COMPACT, H_CALL, 0x5D3620, 10,
        0x5D36FF, GAME_10US_COMPACT, H_CALL, 0x5D3620, 11,
        0x5D370B, GAME_10US_COMPACT, H_CALL, 0x5D3620, 12,
        0x5D3717, GAME_10US_COMPACT, H_CALL, 0x5D3620, 13,
        0x5D3723, GAME_10US_COMPACT, H_CALL, 0x5D3620, 14,
        0x5D372F, GAME_10US_COMPACT, H_CALL, 0x5D3620, 15,
        0x5D373B, GAME_10US_COMPACT, H_CALL, 0x5D3620, 16,
        0x5D374A, GAME_10US_COMPACT, H_CALL, 0x5D3620, 17,
        0x5D3756, GAME_10US_COMPACT, H_CALL, 0x5D3620, 18,
        0x5D38F6, GAME_10US_COMPACT, H_CALL, 0x5D38C0, 1,
        0x5D3902, GAME_10US_COMPACT, H_CALL, 0x5D38C0, 2,
        0x5D390E, GAME_10US_COMPACT, H_CALL, 0x5D38C0, 3,
        0x5D3941, GAME_10US_COMPACT, H_CALL, 0x5D38C0, 4,
        0x5D3957, GAME_10US_COMPACT, H_CALL, 0x5D38C0, 5,
        0x5D3976, GAME_10US_COMPACT, H_CALL, 0x5D38C0, 6,
        0x5D3992, GAME_10US_COMPACT, H_CALL, 0x5D38C0, 7,
        0x5D3A73, GAME_10US_COMPACT, H_CALL, 0x5D3A60, 1,
        0x5D3ADC, GAME_10US_COMPACT, H_CALL, 0x5D3AC0, 1,
        0x5D3AE8, GAME_10US_COMPACT, H_CALL, 0x5D3AC0, 2,
        0x5D3B6F, GAME_10US_COMPACT, H_CALL, 0x5D3B40, 1,
        0x5D3B7E, GAME_10US_COMPACT, H_CALL, 0x5D3B40, 2,
        0x5D3B8D, GAME_10US_COMPACT, H_CALL, 0x5D3B40, 3,
        0x5D3B99, GAME_10US_COMPACT, H_CALL, 0x5D3B40, 4,
        0x5D3BAA, GAME_10US_COMPACT, H_CALL, 0x5D3B40, 5,
        0x5D3BB9, GAME_10US_COMPACT, H_CALL, 0x5D3B40, 6,
        0x5D3BD3, GAME_10US_COMPACT, H_CALL, 0x5D3B40, 7,
        0x5D3C77, GAME_10US_COMPACT, H_CALL, 0x5D3C70, 1,
        0x5D3C86, GAME_10US_COMPACT, H_CALL, 0x5D3C70, 2,
        0x5D3CF0, GAME_10US_COMPACT, H_CALL, 0x5D3CD0, 1,
        0x5D3D68, GAME_10US_COMPACT, H_CALL, 0x5D3D60, 1,
        0x5D3D84, GAME_10US_COMPACT, H_CALL, 0x5D3D60, 2,
        0x5D3DA8, GAME_10US_COMPACT, H_CALL, 0x5D3DA0, 1,
        0x5D3DE8, GAME_10US_COMPACT, H_CALL, 0x5D3DE0, 1,
        0x5D3E04, GAME_10US_COMPACT, H_CALL, 0x5D3DE0, 2,
        0x5D3E21, GAME_10US_COMPACT, H_CALL, 0x5D3DE0, 3,
        0x5D3E31, GAME_10US_COMPACT, H_CALL, 0x5D3DE0, 4,
        0x5D3F08, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 1,
        0x5D3F23, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 2,
        0x5D3F39, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 3,
        0x5D3F56, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 4,
        0x5D3F82, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 5,
        0x5D3F8E, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 6,
        0x5D3F9A, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 7,
        0x5D3FA6, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 8,
        0x5D3FB2, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 9,
        0x5D3FBE, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 10,
        0x5D3FCA, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 11,
        0x5D3FD6, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 12,
        0x5D3FE5, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 13,
        0x5D3FF1, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 14,
        0x5D3FFD, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 15,
        0x5D4009, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 16,
        0x5D4015, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 17,
        0x5D4021, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 18,
        0x5D402D, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 19,
        0x5D4039, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 20,
        0x5D4048, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 21,
        0x5D4054, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 22,
        0x5D4060, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 23,
        0x5D406C, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 24,
        0x5D4078, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 25,
        0x5D4084, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 26,
        0x5D4090, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 27,
        0x5D409C, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 28,
        0x5D40AB, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 29,
        0x5D40B7, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 30,
        0x5D40C3, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 31,
        0x5D40CF, GAME_10US_COMPACT, H_CALL, 0x5D3EE0, 32,
        0x5D4309, GAME_10US_COMPACT, H_CALL, 0x5D4300, 1,
        0x5D479F, GAME_10US_COMPACT, H_CALL, 0x5D4760, 1,
        0x5D47AB, GAME_10US_COMPACT, H_CALL, 0x5D4760, 2,
        0x5D47F1, GAME_10US_COMPACT, H_CALL, 0x5D47E0, 1,
        0x5D487F, GAME_10US_COMPACT, H_CALL, 0x5D4800, 1,
        0x5D48FE, GAME_10US_COMPACT, H_CALL, 0x5D4800, 2,
        0x5D490A, GAME_10US_COMPACT, H_CALL, 0x5D4800, 3,
        0x5D498E, GAME_10US_COMPACT, H_CALL, 0x5D4940, 1,
        0x5D49D6, GAME_10US_COMPACT, H_CALL, 0x5D4940, 2,
        0x5D49E2, GAME_10US_COMPACT, H_CALL, 0x5D4940, 3,
        0x5D4A03, GAME_10US_COMPACT, H_CALL, 0x5D4940, 4,
        0x5D4A0F, GAME_10US_COMPACT, H_CALL, 0x5D4940, 5,
        0x5D4B99, GAME_10US_COMPACT, H_CALL, 0x5D4B40, 1,
        0x5D4BF7, GAME_10US_COMPACT, H_CALL, 0x5D4B40, 2,
        0x5D4C03, GAME_10US_COMPACT, H_CALL, 0x5D4B40, 3,
        0x5D4C0F, GAME_10US_COMPACT, H_CALL, 0x5D4B40, 4,
        0x5D4C5B, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 1,
        0x5D4C9E, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 2,
        0x5D4CB7, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 3,
        0x5D4CD3, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 4,
        0x5D4CE7, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 5,
        0x5D4CF2, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 6,
        0x5D4D45, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 7,
        0x5D4D50, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 8,
        0x5D4D5D, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 9,
        0x5D4D6A, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 10,
        0x5D4E0E, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 11,
        0x5D4E19, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 12,
        0x5D4E38, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 13,
        0x5D4E53, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 14,
        0x5D4E73, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 15,
        0x5D4E88, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 16,
        0x5D4E94, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 17,
        0x5D4E9F, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 18,
        0x5D4EAA, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 19,
        0x5D4EB6, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 20,
        0x5D4EC2, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 21,
        0x5D4ECD, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 22,
        0x5D4F08, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 23,
        0x5D4F53, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 24,
        0x5D4F5E, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 25,
        0x5D4F76, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 26,
        0x5D4FA2, GAME_10US_COMPACT, H_CALL, 0x5D4C40, 27,
        0x5D5434, GAME_10US_COMPACT, H_CALL, 0x5D5420, 1,
        0x5D5483, GAME_10US_COMPACT, H_CALL, 0x5D5420, 2,
        0x5D554B, GAME_10US_COMPACT, H_CALL, 0x5D5530, 1,
        0x5D5557, GAME_10US_COMPACT, H_CALL, 0x5D5530, 2,
        0x5D5579, GAME_10US_COMPACT, H_CALL, 0x5D5570, 1,
        0x5D55A1, GAME_10US_COMPACT, H_CALL, 0x5D5570, 2,
        0x5D578A, GAME_10US_COMPACT, H_CALL, 0x5D5730, 1,
        0x5D5799, GAME_10US_COMPACT, H_CALL, 0x5D5730, 2,
        0x5D583F, GAME_10US_COMPACT, H_CALL, 0x5D57E0, 1,
        0x5D584E, GAME_10US_COMPACT, H_CALL, 0x5D57E0, 2,
        0x5D58E1, GAME_10US_COMPACT, H_CALL, 0x5D5860, 1,
        0x5D597E, GAME_10US_COMPACT, H_CALL, 0x5D5970, 1,
        0x5D59BF, GAME_10US_COMPACT, H_CALL, 0x5D5970, 2,
        0x5D5A36, GAME_10US_COMPACT, H_CALL, 0x5D5970, 3,
        0x5D5A41, GAME_10US_COMPACT, H_CALL, 0x5D5970, 4,
        0x5D5A4D, GAME_10US_COMPACT, H_CALL, 0x5D5970, 5,
        0x5D5A7A, GAME_10US_COMPACT, H_CALL, 0x5D5970, 6>;
    using def_t = bool(void *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<void *,int>, 0,1>;
META_END

META_BEGIN(CGenericGameStorage::_LoadDataFromWorkBuffer)
    static int address;
    static int global_address;
    static const int id = 0x5D1300;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D1300, 0, 0, 0, 0, 0>;
    // total references count: 10us (174), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D1336, GAME_10US_COMPACT, H_CALL, 0x5D1300, 1,
        0x5D1830, GAME_10US_COMPACT, H_CALL, 0x5D17B0, 1,
        0x5D18BF, GAME_10US_COMPACT, H_CALL, 0x5D17B0, 2,
        0x5D287D, GAME_10US_COMPACT, H_CALL, 0x5D2870, 1,
        0x5D2889, GAME_10US_COMPACT, H_CALL, 0x5D2870, 2,
        0x5D2930, GAME_10US_COMPACT, H_CALL, 0x5D2900, 1,
        0x5D293C, GAME_10US_COMPACT, H_CALL, 0x5D2900, 2,
        0x5D2991, GAME_10US_COMPACT, H_CALL, 0x5D2980, 1,
        0x5D29EE, GAME_10US_COMPACT, H_CALL, 0x5D29E0, 1,
        0x5D2A47, GAME_10US_COMPACT, H_CALL, 0x5D2A20, 1,
        0x5D2A67, GAME_10US_COMPACT, H_CALL, 0x5D2A20, 2,
        0x5D2A73, GAME_10US_COMPACT, H_CALL, 0x5D2A20, 3,
        0x5D2D95, GAME_10US_COMPACT, H_CALL, 0x5D2D70, 1,
        0x5D2DB7, GAME_10US_COMPACT, H_CALL, 0x5D2D70, 2,
        0x5D2DC3, GAME_10US_COMPACT, H_CALL, 0x5D2D70, 3,
        0x5D2DCF, GAME_10US_COMPACT, H_CALL, 0x5D2D70, 4,
        0x5D2F4D, GAME_10US_COMPACT, H_CALL, 0x5D2F40, 1,
        0x5D2F59, GAME_10US_COMPACT, H_CALL, 0x5D2F40, 2,
        0x5D2F65, GAME_10US_COMPACT, H_CALL, 0x5D2F40, 3,
        0x5D2F71, GAME_10US_COMPACT, H_CALL, 0x5D2F40, 4,
        0x5D2F92, GAME_10US_COMPACT, H_CALL, 0x5D2F40, 5,
        0x5D2FBF, GAME_10US_COMPACT, H_CALL, 0x5D2F40, 6,
        0x5D2FEF, GAME_10US_COMPACT, H_CALL, 0x5D2F40, 7,
        0x5D3008, GAME_10US_COMPACT, H_CALL, 0x5D2F40, 8,
        0x5D3014, GAME_10US_COMPACT, H_CALL, 0x5D2F40, 9,
        0x5D3282, GAME_10US_COMPACT, H_CALL, 0x5D3270, 1,
        0x5D328E, GAME_10US_COMPACT, H_CALL, 0x5D3270, 2,
        0x5D329A, GAME_10US_COMPACT, H_CALL, 0x5D3270, 3,
        0x5D32A6, GAME_10US_COMPACT, H_CALL, 0x5D3270, 4,
        0x5D32B2, GAME_10US_COMPACT, H_CALL, 0x5D3270, 5,
        0x5D32BE, GAME_10US_COMPACT, H_CALL, 0x5D3270, 6,
        0x5D32CA, GAME_10US_COMPACT, H_CALL, 0x5D3270, 7,
        0x5D32DA, GAME_10US_COMPACT, H_CALL, 0x5D3270, 8,
        0x5D32F4, GAME_10US_COMPACT, H_CALL, 0x5D3270, 9,
        0x5D330B, GAME_10US_COMPACT, H_CALL, 0x5D3270, 10,
        0x5D3347, GAME_10US_COMPACT, H_CALL, 0x5D3270, 11,
        0x5D3448, GAME_10US_COMPACT, H_CALL, 0x5D3440, 1,
        0x5D3454, GAME_10US_COMPACT, H_CALL, 0x5D3440, 2,
        0x5D3460, GAME_10US_COMPACT, H_CALL, 0x5D3440, 3,
        0x5D346C, GAME_10US_COMPACT, H_CALL, 0x5D3440, 4,
        0x5D3478, GAME_10US_COMPACT, H_CALL, 0x5D3440, 5,
        0x5D349A, GAME_10US_COMPACT, H_CALL, 0x5D3440, 6,
        0x5D34A2, GAME_10US_COMPACT, H_CALL, 0x5D3440, 7,
        0x5D350E, GAME_10US_COMPACT, H_CALL, 0x5D3500, 1,
        0x5D3527, GAME_10US_COMPACT, H_CALL, 0x5D3500, 2,
        0x5D35AD, GAME_10US_COMPACT, H_CALL, 0x5D35A0, 1,
        0x5D35EA, GAME_10US_COMPACT, H_CALL, 0x5D35A0, 2,
        0x5D35F6, GAME_10US_COMPACT, H_CALL, 0x5D35A0, 3,
        0x5D360B, GAME_10US_COMPACT, H_CALL, 0x5D35A0, 4,
        0x5D377E, GAME_10US_COMPACT, H_CALL, 0x5D3770, 1,
        0x5D37A1, GAME_10US_COMPACT, H_CALL, 0x5D3770, 2,
        0x5D37B0, GAME_10US_COMPACT, H_CALL, 0x5D3770, 3,
        0x5D37BF, GAME_10US_COMPACT, H_CALL, 0x5D3770, 4,
        0x5D37D8, GAME_10US_COMPACT, H_CALL, 0x5D3770, 5,
        0x5D3800, GAME_10US_COMPACT, H_CALL, 0x5D3770, 6,
        0x5D380F, GAME_10US_COMPACT, H_CALL, 0x5D3770, 7,
        0x5D381E, GAME_10US_COMPACT, H_CALL, 0x5D3770, 8,
        0x5D3837, GAME_10US_COMPACT, H_CALL, 0x5D3770, 9,
        0x5D3843, GAME_10US_COMPACT, H_CALL, 0x5D3770, 10,
        0x5D384F, GAME_10US_COMPACT, H_CALL, 0x5D3770, 11,
        0x5D385B, GAME_10US_COMPACT, H_CALL, 0x5D3770, 12,
        0x5D3867, GAME_10US_COMPACT, H_CALL, 0x5D3770, 13,
        0x5D3873, GAME_10US_COMPACT, H_CALL, 0x5D3770, 14,
        0x5D387F, GAME_10US_COMPACT, H_CALL, 0x5D3770, 15,
        0x5D388B, GAME_10US_COMPACT, H_CALL, 0x5D3770, 16,
        0x5D389A, GAME_10US_COMPACT, H_CALL, 0x5D3770, 17,
        0x5D38A6, GAME_10US_COMPACT, H_CALL, 0x5D3770, 18,
        0x5D39BF, GAME_10US_COMPACT, H_CALL, 0x5D39B0, 1,
        0x5D39CB, GAME_10US_COMPACT, H_CALL, 0x5D39B0, 2,
        0x5D39D7, GAME_10US_COMPACT, H_CALL, 0x5D39B0, 3,
        0x5D39F7, GAME_10US_COMPACT, H_CALL, 0x5D39B0, 4,
        0x5D3A19, GAME_10US_COMPACT, H_CALL, 0x5D39B0, 5,
        0x5D3A35, GAME_10US_COMPACT, H_CALL, 0x5D39B0, 6,
        0x5D3A4A, GAME_10US_COMPACT, H_CALL, 0x5D39B0, 7,
        0x5D3AA3, GAME_10US_COMPACT, H_CALL, 0x5D3A90, 1,
        0x5D3B0D, GAME_10US_COMPACT, H_CALL, 0x5D3B00, 1,
        0x5D3B19, GAME_10US_COMPACT, H_CALL, 0x5D3B00, 2,
        0x5D3BFC, GAME_10US_COMPACT, H_CALL, 0x5D3BF0, 1,
        0x5D3C0B, GAME_10US_COMPACT, H_CALL, 0x5D3BF0, 2,
        0x5D3C1A, GAME_10US_COMPACT, H_CALL, 0x5D3BF0, 3,
        0x5D3C26, GAME_10US_COMPACT, H_CALL, 0x5D3BF0, 4,
        0x5D3C32, GAME_10US_COMPACT, H_CALL, 0x5D3BF0, 5,
        0x5D3C41, GAME_10US_COMPACT, H_CALL, 0x5D3BF0, 6,
        0x5D3C56, GAME_10US_COMPACT, H_CALL, 0x5D3BF0, 7,
        0x5D3CA7, GAME_10US_COMPACT, H_CALL, 0x5D3CA0, 1,
        0x5D3CB6, GAME_10US_COMPACT, H_CALL, 0x5D3CA0, 2,
        0x5D3D1E, GAME_10US_COMPACT, H_CALL, 0x5D3D10, 1,
        0x5D3DC4, GAME_10US_COMPACT, H_CALL, 0x5D3DA0, 1,
        0x5D3E48, GAME_10US_COMPACT, H_CALL, 0x5D3E40, 1,
        0x5D3E64, GAME_10US_COMPACT, H_CALL, 0x5D3E40, 2,
        0x5D3E81, GAME_10US_COMPACT, H_CALL, 0x5D3E40, 3,
        0x5D3E91, GAME_10US_COMPACT, H_CALL, 0x5D3E40, 4,
        0x5D3EBA, GAME_10US_COMPACT, H_CALL, 0x5D3EB0, 1,
        0x5D3EC6, GAME_10US_COMPACT, H_CALL, 0x5D3EB0, 2,
        0x5D4108, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 1,
        0x5D4123, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 2,
        0x5D4139, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 3,
        0x5D4156, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 4,
        0x5D4182, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 5,
        0x5D418E, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 6,
        0x5D419A, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 7,
        0x5D41A6, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 8,
        0x5D41B2, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 9,
        0x5D41BE, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 10,
        0x5D41CA, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 11,
        0x5D41D6, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 12,
        0x5D41E5, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 13,
        0x5D41F1, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 14,
        0x5D41FD, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 15,
        0x5D4209, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 16,
        0x5D4215, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 17,
        0x5D4221, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 18,
        0x5D422D, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 19,
        0x5D4239, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 20,
        0x5D4248, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 21,
        0x5D4254, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 22,
        0x5D4260, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 23,
        0x5D426C, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 24,
        0x5D4278, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 25,
        0x5D4284, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 26,
        0x5D4290, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 27,
        0x5D429C, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 28,
        0x5D42AB, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 29,
        0x5D42B7, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 30,
        0x5D42C3, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 31,
        0x5D42CF, GAME_10US_COMPACT, H_CALL, 0x5D40E0, 32,
        0x5D42E9, GAME_10US_COMPACT, H_CALL, 0x5D42E0, 1,
        0x5D4688, GAME_10US_COMPACT, H_CALL, 0x5D4640, 1,
        0x5D4697, GAME_10US_COMPACT, H_CALL, 0x5D4640, 2,
        0x5D4701, GAME_10US_COMPACT, H_CALL, 0x5D46E0, 1,
        0x5D4710, GAME_10US_COMPACT, H_CALL, 0x5D46E0, 2,
        0x5D4A55, GAME_10US_COMPACT, H_CALL, 0x5D4A40, 1,
        0x5D4A77, GAME_10US_COMPACT, H_CALL, 0x5D4A40, 2,
        0x5D4A83, GAME_10US_COMPACT, H_CALL, 0x5D4A40, 3,
        0x5D4AFE, GAME_10US_COMPACT, H_CALL, 0x5D4A40, 4,
        0x5D4B0A, GAME_10US_COMPACT, H_CALL, 0x5D4A40, 5,
        0x5D4FE3, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 1,
        0x5D502C, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 2,
        0x5D5045, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 3,
        0x5D505A, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 4,
        0x5D506F, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 5,
        0x5D507B, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 6,
        0x5D508C, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 7,
        0x5D5098, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 8,
        0x5D50A6, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 9,
        0x5D50B4, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 10,
        0x5D514F, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 11,
        0x5D515B, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 12,
        0x5D5217, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 13,
        0x5D5233, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 14,
        0x5D5253, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 15,
        0x5D527C, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 16,
        0x5D5288, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 17,
        0x5D5294, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 18,
        0x5D52A0, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 19,
        0x5D52AC, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 20,
        0x5D52B8, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 21,
        0x5D52C4, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 22,
        0x5D52F6, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 23,
        0x5D5317, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 24,
        0x5D5335, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 25,
        0x5D5346, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 26,
        0x5D536A, GAME_10US_COMPACT, H_CALL, 0x5D4FD0, 27,
        0x5D53D8, GAME_10US_COMPACT, H_CALL, 0x5D53C0, 1,
        0x5D54AD, GAME_10US_COMPACT, H_CALL, 0x5D54A0, 1,
        0x5D54DD, GAME_10US_COMPACT, H_CALL, 0x5D54A0, 2,
        0x5D55CC, GAME_10US_COMPACT, H_CALL, 0x5D55C0, 1,
        0x5D55E7, GAME_10US_COMPACT, H_CALL, 0x5D55C0, 2,
        0x5D5627, GAME_10US_COMPACT, H_CALL, 0x5D55C0, 3,
        0x5D5666, GAME_10US_COMPACT, H_CALL, 0x5D55C0, 4,
        0x5D5672, GAME_10US_COMPACT, H_CALL, 0x5D55C0, 5,
        0x5D56C5, GAME_10US_COMPACT, H_CALL, 0x5D55C0, 6,
        0x5D5929, GAME_10US_COMPACT, H_CALL, 0x5D5920, 1,
        0x5D594E, GAME_10US_COMPACT, H_CALL, 0x5D5920, 2>;
    using def_t = bool(void *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<void *,int>, 0,1>;
META_END

META_BEGIN(CGenericGameStorage::CheckSlotDataValid)
    static int address;
    static int global_address;
    static const int id = 0x5D1380;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D1380, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x578EF2, GAME_10US_COMPACT, H_CALL, 0x578D60, 1>;
    using def_t = bool(int, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,bool>, 0,1>;
META_END

META_BEGIN(CGenericGameStorage::GenericSave)
    static int address;
    static int global_address;
    static const int id = 0x5D13E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D13E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x619081, GAME_10US_COMPACT, H_CALL, 0x619060, 1>;
    using def_t = bool(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CGenericGameStorage::GenericLoad)
    static int address;
    static int global_address;
    static const int id = 0x5D17B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D17B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53C70B, GAME_10US_COMPACT, H_CALL, 0x53C680, 1>;
    using def_t = bool(bool *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool *>, 0>;
META_END

META_BEGIN(CGenericGameStorage::InitRadioStationPositionList)
    static int address;
    static int global_address;
    static const int id = 0x618E70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x618E70, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53C701, GAME_10US_COMPACT, H_CALL, 0x53C680, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGenericGameStorage::GetSavedRadioStationPosition)
    static int address;
    static int global_address;
    static const int id = 0x618E80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x618E80, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGenericGameStorage::DoGameSpecificStuffAfterSucessLoad)
    static int address;
    static int global_address;
    static const int id = 0x618E90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x618E90, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D1A1D, GAME_10US_COMPACT, H_CALL, 0x5D17B0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGenericGameStorage::DoGameSpecificStuffBeforeSave)
    static int address;
    static int global_address;
    static const int id = 0x618F50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x618F50, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x61907A, GAME_10US_COMPACT, H_CALL, 0x619060, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGenericGameStorage::InitNewSettingsAfterLoad)
    static int address;
    static int global_address;
    static const int id = 0x618FF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x618FF0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGenericGameStorage::RestoreForStartLoad)
    static int address;
    static int global_address;
    static const int id = 0x619000;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x619000, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53C6D1, GAME_10US_COMPACT, H_CALL, 0x53C680, 1>;
    using def_t = char();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGenericGameStorage::GetNameOfSavedGame_Alt)
    static int address;
    static int global_address;
    static const int id = 0x619030;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x619030, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = char *(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

}
