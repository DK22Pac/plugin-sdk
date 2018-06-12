/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedGroups::RegisterKillByPlayer)
    static int address;
    static int global_address;
    static const int id = 0x5F7E30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7E30, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4B93B4, GAME_10US_COMPACT, H_JUMP, 0x4B9340, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPedGroups::IsGroupLeader)
    static int address;
    static int global_address;
    static const int id = 0x5F7E40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7E40, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x63A90A, GAME_10US_COMPACT, H_CALL, 0x63A890, 1,
        0x63AA87, GAME_10US_COMPACT, H_CALL, 0x63A890, 2>;
    using def_t = bool(CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed *>, 0>;
META_END

META_BEGIN(CPedGroups::GetPedsGroup)
    static int address;
    static int global_address;
    static const int id = 0x5F7E80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7E80, 0, 0, 0, 0, 0>;
    // total references count: 10us (76), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x440607, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1,
        0x440ADF, GAME_10US_COMPACT, H_CALL, 0x4404A0, 2,
        0x464EBB, GAME_10US_COMPACT, H_CALL, 0x464DC0, 1,
        0x465C6C, GAME_10US_COMPACT, H_CALL, 0x465C20, 1,
        0x46E238, GAME_10US_COMPACT, H_CALL, 0x46D050, 1,
        0x474ABF, GAME_10US_COMPACT, H_CALL, 0x474900, 1,
        0x475A71, GAME_10US_COMPACT, H_CALL, 0x474900, 2,
        0x47A3E6, GAME_10US_COMPACT, H_CALL, 0x479DA0, 1,
        0x480404, GAME_10US_COMPACT, H_CALL, 0x47FA30, 1,
        0x482AE6, GAME_10US_COMPACT, H_CALL, 0x481300, 1,
        0x486491, GAME_10US_COMPACT, H_CALL, 0x486300, 1,
        0x48AA03, GAME_10US_COMPACT, H_CALL, 0x48A320, 1,
        0x497D19, GAME_10US_COMPACT, H_CALL, 0x496E00, 1,
        0x4ACB97, GAME_10US_COMPACT, H_CALL, 0x4ACB10, 1,
        0x4B2A28, GAME_10US_COMPACT, H_CALL, 0x4B29E0, 1,
        0x4B5015, GAME_10US_COMPACT, H_CALL, 0x4B4FD0, 1,
        0x4B7DFA, GAME_10US_COMPACT, H_CALL, 0x4B7DF0, 1,
        0x4B9736, GAME_10US_COMPACT, H_CALL, 0x4B96D0, 1,
        0x4BA59A, GAME_10US_COMPACT, H_CALL, 0x4B9FF0, 1,
        0x4BD944, GAME_10US_COMPACT, H_CALL, 0x4BD6A0, 1,
        0x4BDC5B, GAME_10US_COMPACT, H_CALL, 0x4BDB80, 1,
        0x4BDC7E, GAME_10US_COMPACT, H_CALL, 0x4BDB80, 2,
        0x563D4E, GAME_10US_COMPACT, H_CALL, 0x563D00, 1,
        0x56A18E, GAME_10US_COMPACT, H_CALL, 0x56A0D0, 1,
        0x56A211, GAME_10US_COMPACT, H_CALL, 0x56A0D0, 2,
        0x5E4BC7, GAME_10US_COMPACT, H_CALL, 0x5E4A00, 1,
        0x5E4BDC, GAME_10US_COMPACT, H_CALL, 0x5E4A00, 2,
        0x5F882F, GAME_10US_COMPACT, H_CALL, 0x5F87A0, 1,
        0x5FB4CC, GAME_10US_COMPACT, H_CALL, 0x5FB470, 1,
        0x600E40, GAME_10US_COMPACT, H_CALL, 0x600E20, 1,
        0x601771, GAME_10US_COMPACT, H_CALL, 0x601640, 1,
        0x601FCA, GAME_10US_COMPACT, H_CALL, 0x601E00, 1,
        0x603B5A, GAME_10US_COMPACT, H_CALL, 0x603AF0, 1,
        0x606D23, GAME_10US_COMPACT, H_CALL, 0x606BA0, 1,
        0x608686, GAME_10US_COMPACT, H_CALL, 0x6085E0, 1,
        0x60B973, GAME_10US_COMPACT, H_CALL, 0x60B650, 1,
        0x60C9E1, GAME_10US_COMPACT, H_CALL, 0x60C840, 1,
        0x60E979, GAME_10US_COMPACT, H_CALL, 0x60E530, 1,
        0x62130B, GAME_10US_COMPACT, H_CALL, 0x621300, 1,
        0x62247B, GAME_10US_COMPACT, H_CALL, 0x622450, 1,
        0x622D68, GAME_10US_COMPACT, H_CALL, 0x622D50, 1,
        0x6261B9, GAME_10US_COMPACT, H_CALL, 0x625E70, 1,
        0x6261C9, GAME_10US_COMPACT, H_CALL, 0x625E70, 2,
        0x62748C, GAME_10US_COMPACT, H_CALL, 0x626FC0, 1,
        0x627587, GAME_10US_COMPACT, H_CALL, 0x626FC0, 2,
        0x62C96C, GAME_10US_COMPACT, H_CALL, 0x62C190, 1,
        0x62CF5A, GAME_10US_COMPACT, H_CALL, 0x62CCE0, 1,
        0x62D21B, GAME_10US_COMPACT, H_CALL, 0x62CCE0, 2,
        0x63529F, GAME_10US_COMPACT, H_CALL, 0x635200, 1,
        0x63A92A, GAME_10US_COMPACT, H_CALL, 0x63A890, 1,
        0x63AA94, GAME_10US_COMPACT, H_CALL, 0x63A890, 2,
        0x63E729, GAME_10US_COMPACT, H_CALL, 0x63E040, 1,
        0x63EF9B, GAME_10US_COMPACT, H_CALL, 0x63E990, 1,
        0x63F0DF, GAME_10US_COMPACT, H_CALL, 0x63E990, 2,
        0x63FBA2, GAME_10US_COMPACT, H_CALL, 0x63F970, 1,
        0x63FD90, GAME_10US_COMPACT, H_CALL, 0x63F970, 2,
        0x63FEA6, GAME_10US_COMPACT, H_CALL, 0x63F970, 3,
        0x640040, GAME_10US_COMPACT, H_CALL, 0x63F970, 4,
        0x64078D, GAME_10US_COMPACT, H_CALL, 0x640730, 1,
        0x642075, GAME_10US_COMPACT, H_CALL, 0x641FC0, 1,
        0x643AF8, GAME_10US_COMPACT, H_CALL, 0x643A60, 1,
        0x6444FC, GAME_10US_COMPACT, H_CALL, 0x644470, 1,
        0x644BC7, GAME_10US_COMPACT, H_CALL, 0x644470, 2,
        0x64BACA, GAME_10US_COMPACT, H_CALL, 0x64B950, 1,
        0x6511A1, GAME_10US_COMPACT, H_CALL, 0x6510D0, 1,
        0x65E458, GAME_10US_COMPACT, H_CALL, 0x65E200, 1,
        0x670125, GAME_10US_COMPACT, H_CALL, 0x670100, 1,
        0x670218, GAME_10US_COMPACT, H_CALL, 0x670100, 2,
        0x686B5C, GAME_10US_COMPACT, H_CALL, 0x6859A0, 1,
        0x68980A, GAME_10US_COMPACT, H_CALL, 0x689640, 1,
        0x68981B, GAME_10US_COMPACT, H_CALL, 0x689640, 2,
        0x696AD6, GAME_10US_COMPACT, H_CALL, 0x696940, 1,
        0x69D1CF, GAME_10US_COMPACT, H_CALL, 0x69D170, 1,
        0x69D4C3, GAME_10US_COMPACT, H_CALL, 0x69D460, 1,
        0x6CD537, GAME_10US_COMPACT, H_CALL, 0x6CD2F0, 1,
        0x6F832C, GAME_10US_COMPACT, H_CALL, 0x6F8170, 1>;
    using def_t = char *(CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed *>, 0>;
META_END

META_BEGIN(CPedGroups::GetGroupId)
    static int address;
    static int global_address;
    static const int id = 0x5F7EE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7EE0, 0, 0, 0, 0, 0>;
    // total references count: 10us (5), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4B2A37, GAME_10US_COMPACT, H_CALL, 0x4B29E0, 1,
        0x5FB4D9, GAME_10US_COMPACT, H_CALL, 0x5FB470, 1,
        0x65E4F4, GAME_10US_COMPACT, H_CALL, 0x65E200, 1,
        0x69D1E0, GAME_10US_COMPACT, H_CALL, 0x69D170, 1,
        0x69D4D4, GAME_10US_COMPACT, H_CALL, 0x69D460, 1>;
    using def_t = signed int(CPedGroup *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPedGroup *>, 0>;
META_END

META_BEGIN(CPedGroups::IsInPlayersGroup)
    static int address;
    static int global_address;
    static const int id = 0x5F7F10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7F10, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4BF6C0, GAME_10US_COMPACT, H_CALL, 0x4BF2B0, 1,
        0x5E4BBA, GAME_10US_COMPACT, H_CALL, 0x5E4A00, 1,
        0x5F3494, GAME_10US_COMPACT, H_CALL, 0x5F32D0, 1,
        0x67DA6C, GAME_10US_COMPACT, H_CALL, 0x67D980, 1>;
    using def_t = char(CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed *>, 0>;
META_END

META_BEGIN(CPedGroups::AreInSameGroup)
    static int address;
    static int global_address;
    static const int id = 0x5F7F40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7F40, 0, 0, 0, 0, 0>;
    // total references count: 10us (27), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x46F84D, GAME_10US_COMPACT, H_CALL, 0x46F800, 1,
        0x4967AD, GAME_10US_COMPACT, H_CALL, 0x496760, 1,
        0x4AD492, GAME_10US_COMPACT, H_CALL, 0x4AD430, 1,
        0x4AD50B, GAME_10US_COMPACT, H_CALL, 0x4AD430, 2,
        0x4AFA72, GAME_10US_COMPACT, H_CALL, 0x4AFA30, 1,
        0x4B2CFA, GAME_10US_COMPACT, H_CALL, 0x4B2CD0, 1,
        0x4B385D, GAME_10US_COMPACT, H_CALL, 0x4B35A0, 1,
        0x4B4F63, GAME_10US_COMPACT, H_CALL, 0x4B4EE0, 1,
        0x609E4E, GAME_10US_COMPACT, H_CALL, 0x609DE0, 1,
        0x60B983, GAME_10US_COMPACT, H_CALL, 0x60B650, 1,
        0x60E0B2, GAME_10US_COMPACT, H_CALL, 0x60DC50, 1,
        0x60E6B9, GAME_10US_COMPACT, H_CALL, 0x60E530, 1,
        0x60E98D, GAME_10US_COMPACT, H_CALL, 0x60E530, 2,
        0x62251C, GAME_10US_COMPACT, H_CALL, 0x622450, 1,
        0x629684, GAME_10US_COMPACT, H_CALL, 0x629630, 1,
        0x63EEAF, GAME_10US_COMPACT, H_CALL, 0x63E990, 1,
        0x63FC41, GAME_10US_COMPACT, H_CALL, 0x63F970, 1,
        0x640176, GAME_10US_COMPACT, H_CALL, 0x63F970, 2,
        0x64023D, GAME_10US_COMPACT, H_CALL, 0x63F970, 3,
        0x651194, GAME_10US_COMPACT, H_CALL, 0x6510D0, 1,
        0x652CF0, GAME_10US_COMPACT, H_CALL, 0x6528F0, 1,
        0x652D91, GAME_10US_COMPACT, H_CALL, 0x6528F0, 2,
        0x6657AD, GAME_10US_COMPACT, H_CALL, 0x665760, 1,
        0x6720F9, GAME_10US_COMPACT, H_CALL, 0x672080, 1,
        0x67358D, GAME_10US_COMPACT, H_CALL, 0x673540, 1,
        0x686B6C, GAME_10US_COMPACT, H_CALL, 0x6859A0, 1,
        0x73B835, GAME_10US_COMPACT, H_CALL, 0x73B550, 1>;
    using def_t = bool(CPed *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed *,CPed *>, 0,1>;
META_END

META_BEGIN(CPedGroups::AddGroup)
    static int address;
    static int global_address;
    static const int id = 0x5FB800;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB800, 0, 0, 0, 0, 0>;
    // total references count: 10us (5), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x492279, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1,
        0x5FC9CB, GAME_10US_COMPACT, H_CALL, 0x5FC9B0, 1,
        0x5FCEAF, GAME_10US_COMPACT, H_CALL, 0x5FCE80, 1,
        0x5FD35F, GAME_10US_COMPACT, H_CALL, 0x5FD330, 1,
        0x60D659, GAME_10US_COMPACT, H_CALL, 0x60D5B0, 1>;
    using def_t = signed int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPedGroups::RemoveGroup)
    static int address;
    static int global_address;
    static const int id = 0x5FB870;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB870, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x468BDE, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x492754, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1,
        0x609462, GAME_10US_COMPACT, H_CALL, 0x6093B0, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPedGroups::RemoveAllFollowersFromGroup)
    static int address;
    static int global_address;
    static const int id = 0x5FB8A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB8A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x492744, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPedGroups::Init)
    static int address;
    static int global_address;
    static const int id = 0x5FB8C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB8C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x469371, GAME_10US_COMPACT, H_CALL, 0x468D50, 1,
        0x5BA3C0, GAME_10US_COMPACT, H_CALL, 0x5BA1A0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPedGroups::CleanUpForShutDown)
    static int address;
    static int global_address;
    static const int id = 0x5FB930;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB930, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x53CA48, GAME_10US_COMPACT, H_CALL, 0x53C900, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPedGroups::Process)
    static int address;
    static int global_address;
    static const int id = 0x5FC800;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FC800, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x568AA1, GAME_10US_COMPACT, H_CALL, 0x5684A0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
