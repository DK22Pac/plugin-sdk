/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CPedGroupMembership)
    static int address;
    static int global_address;
    static const int id = 0x5F6930;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F6930, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = unsigned int *(CPedGroupMembership *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *>, 0>;
META_END

META_BEGIN(CPedGroupMembership::GetObjectForPedToHold)
    static int address;
    static int global_address;
    static const int id = 0x5F6950;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F6950, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5F80B6, GAME_10US_COMPACT, H_CALL, 0x5F8020, 1,
        0x5FBA3D, GAME_10US_COMPACT, H_CALL, 0x5FB9C0, 1>;
    using def_t = signed int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPedGroupMembership::GetLeader)
    static int address;
    static int global_address;
    static const int id = 0x5F69A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F69A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (50), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x472F89, GAME_10US_COMPACT, H_CALL, 0x472310, 1,
        0x492478, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1,
        0x492483, GAME_10US_COMPACT, H_CALL, 0x490DB0, 2,
        0x4924B1, GAME_10US_COMPACT, H_CALL, 0x490DB0, 3,
        0x492728, GAME_10US_COMPACT, H_CALL, 0x490DB0, 4,
        0x492733, GAME_10US_COMPACT, H_CALL, 0x490DB0, 5,
        0x4AD3C8, GAME_10US_COMPACT, H_CALL, 0x4AD3C0, 1,
        0x4AF9D6, GAME_10US_COMPACT, H_CALL, 0x4AF970, 1,
        0x4AF9E1, GAME_10US_COMPACT, H_CALL, 0x4AF970, 2,
        0x4B0FB5, GAME_10US_COMPACT, H_CALL, 0x4B0F80, 1,
        0x4B23B1, GAME_10US_COMPACT, H_CALL, 0x4B23A0, 1,
        0x4B24DC, GAME_10US_COMPACT, H_CALL, 0x4B24D0, 1,
        0x4B5503, GAME_10US_COMPACT, H_CALL, 0x4B54E0, 1,
        0x4B57C6, GAME_10US_COMPACT, H_CALL, 0x4B57A0, 1,
        0x4B585D, GAME_10US_COMPACT, H_CALL, 0x4B57A0, 2,
        0x4B5868, GAME_10US_COMPACT, H_CALL, 0x4B57A0, 3,
        0x4B587A, GAME_10US_COMPACT, H_CALL, 0x4B57A0, 4,
        0x4BA5CD, GAME_10US_COMPACT, H_CALL, 0x4B9FF0, 1,
        0x4BDC70, GAME_10US_COMPACT, H_CALL, 0x4BDB80, 1,
        0x4BDC8F, GAME_10US_COMPACT, H_CALL, 0x4BDB80, 2,
        0x563D5D, GAME_10US_COMPACT, H_CALL, 0x563D00, 1,
        0x5E4BD2, GAME_10US_COMPACT, H_CALL, 0x5E4A00, 1,
        0x5E4BE7, GAME_10US_COMPACT, H_CALL, 0x5E4A00, 2,
        0x603B6B, GAME_10US_COMPACT, H_CALL, 0x603AF0, 1,
        0x603B76, GAME_10US_COMPACT, H_CALL, 0x603AF0, 2,
        0x603B8E, GAME_10US_COMPACT, H_CALL, 0x603AF0, 3,
        0x621326, GAME_10US_COMPACT, H_CALL, 0x621300, 1,
        0x62248A, GAME_10US_COMPACT, H_CALL, 0x622450, 1,
        0x622CDB, GAME_10US_COMPACT, H_CALL, 0x622CC0, 1,
        0x6261D4, GAME_10US_COMPACT, H_CALL, 0x625E70, 1,
        0x6352B0, GAME_10US_COMPACT, H_CALL, 0x635200, 1,
        0x6352BB, GAME_10US_COMPACT, H_CALL, 0x635200, 2,
        0x6352EC, GAME_10US_COMPACT, H_CALL, 0x635200, 3,
        0x64079C, GAME_10US_COMPACT, H_CALL, 0x640730, 1,
        0x66073B, GAME_10US_COMPACT, H_CALL, 0x6605C0, 1,
        0x66074E, GAME_10US_COMPACT, H_CALL, 0x6605C0, 2,
        0x666097, GAME_10US_COMPACT, H_CALL, 0x665E00, 1,
        0x689829, GAME_10US_COMPACT, H_CALL, 0x689640, 1,
        0x696540, GAME_10US_COMPACT, H_CALL, 0x6962A0, 1,
        0x69BD07, GAME_10US_COMPACT, H_CALL, 0x69BCA0, 1,
        0x69BD15, GAME_10US_COMPACT, H_CALL, 0x69BCA0, 2,
        0x69C537, GAME_10US_COMPACT, H_CALL, 0x69C4D0, 1,
        0x69C546, GAME_10US_COMPACT, H_CALL, 0x69C4D0, 2,
        0x69CA76, GAME_10US_COMPACT, H_CALL, 0x69C850, 1,
        0x69CE50, GAME_10US_COMPACT, H_CALL, 0x69CC30, 1,
        0x69D068, GAME_10US_COMPACT, H_CALL, 0x69CC30, 2,
        0x69D2DE, GAME_10US_COMPACT, H_CALL, 0x69D170, 1,
        0x69D42E, GAME_10US_COMPACT, H_CALL, 0x69D170, 2,
        0x69D6A0, GAME_10US_COMPACT, H_CALL, 0x69D460, 1,
        0x69D8AC, GAME_10US_COMPACT, H_CALL, 0x69D460, 2>;
    using def_t = CPed *(CPedGroupMembership *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *>, 0>;
META_END

META_BEGIN(CPedGroupMembership::GetMember)
    static int address;
    static int global_address;
    static const int id = 0x5F69B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F69B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (38), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x43F247, GAME_10US_COMPACT, H_CALL, 0x43F1F0, 1,
        0x476E37, GAME_10US_COMPACT, H_CALL, 0x4762D0, 1,
        0x4B0F15, GAME_10US_COMPACT, H_CALL, 0x4B0EF0, 1,
        0x4B0F93, GAME_10US_COMPACT, H_CALL, 0x4B0F80, 1,
        0x4B24F7, GAME_10US_COMPACT, H_CALL, 0x4B24D0, 1,
        0x4B2553, GAME_10US_COMPACT, H_CALL, 0x4B2530, 1,
        0x4B3953, GAME_10US_COMPACT, H_CALL, 0x4B38D0, 1,
        0x4B57ED, GAME_10US_COMPACT, H_CALL, 0x4B57A0, 1,
        0x4E5479, GAME_10US_COMPACT, H_CALL, 0x4E53B0, 1,
        0x60A466, GAME_10US_COMPACT, H_CALL, 0x60A440, 1,
        0x60A4D6, GAME_10US_COMPACT, H_CALL, 0x60A4B0, 1,
        0x60F806, GAME_10US_COMPACT, H_CALL, 0x60EA90, 1,
        0x6224D3, GAME_10US_COMPACT, H_CALL, 0x622450, 1,
        0x622D10, GAME_10US_COMPACT, H_CALL, 0x622CC0, 1,
        0x622D83, GAME_10US_COMPACT, H_CALL, 0x622D50, 1,
        0x65E070, GAME_10US_COMPACT, H_CALL, 0x65DFF0, 1,
        0x65E5AA, GAME_10US_COMPACT, H_CALL, 0x65E200, 1,
        0x6625DC, GAME_10US_COMPACT, H_CALL, 0x662370, 1,
        0x662FB9, GAME_10US_COMPACT, H_CALL, 0x662A10, 1,
        0x666086, GAME_10US_COMPACT, H_CALL, 0x665E00, 1,
        0x69652B, GAME_10US_COMPACT, H_CALL, 0x6962A0, 1,
        0x699DE4, GAME_10US_COMPACT, H_CALL, 0x699DD0, 1,
        0x699DF0, GAME_10US_COMPACT, H_CALL, 0x699DD0, 2,
        0x69A354, GAME_10US_COMPACT, H_CALL, 0x69A340, 1,
        0x69A36F, GAME_10US_COMPACT, H_CALL, 0x69A340, 2,
        0x69C37B, GAME_10US_COMPACT, H_CALL, 0x69C340, 1,
        0x69C387, GAME_10US_COMPACT, H_CALL, 0x69C340, 2,
        0x69C8A5, GAME_10US_COMPACT, H_CALL, 0x69C850, 1,
        0x69C8D5, GAME_10US_COMPACT, H_CALL, 0x69C850, 2,
        0x69CA5A, GAME_10US_COMPACT, H_CALL, 0x69C850, 3,
        0x69CA93, GAME_10US_COMPACT, H_CALL, 0x69C850, 4,
        0x69CAC5, GAME_10US_COMPACT, H_CALL, 0x69C850, 5,
        0x69CCFB, GAME_10US_COMPACT, H_CALL, 0x69CC30, 1,
        0x69CE6E, GAME_10US_COMPACT, H_CALL, 0x69CC30, 2,
        0x69D236, GAME_10US_COMPACT, H_CALL, 0x69D170, 1,
        0x69D2F6, GAME_10US_COMPACT, H_CALL, 0x69D170, 2,
        0x69D539, GAME_10US_COMPACT, H_CALL, 0x69D460, 1,
        0x69D6BE, GAME_10US_COMPACT, H_CALL, 0x69D460, 2>;
    using def_t = CPed *(CPedGroupMembership *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *,int>, 0,1>;
META_END

META_BEGIN(CPedGroupMembership::IsLeader)
    static int address;
    static int global_address;
    static const int id = 0x5F69C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F69C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (22), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x43F227, GAME_10US_COMPACT, H_CALL, 0x43F1F0, 1,
        0x464ECD, GAME_10US_COMPACT, H_CALL, 0x464DC0, 1,
        0x48AA15, GAME_10US_COMPACT, H_CALL, 0x48A320, 1,
        0x497D31, GAME_10US_COMPACT, H_CALL, 0x496E00, 1,
        0x4987E0, GAME_10US_COMPACT, H_CALL, 0x496E00, 2,
        0x4ACBAE, GAME_10US_COMPACT, H_CALL, 0x4ACB10, 1,
        0x4B5025, GAME_10US_COMPACT, H_CALL, 0x4B4FD0, 1,
        0x4BA5B4, GAME_10US_COMPACT, H_CALL, 0x4B9FF0, 1,
        0x4BA683, GAME_10US_COMPACT, H_CALL, 0x4B9FF0, 2,
        0x63A93C, GAME_10US_COMPACT, H_CALL, 0x63A890, 1,
        0x63AAA6, GAME_10US_COMPACT, H_CALL, 0x63A890, 2,
        0x63E73B, GAME_10US_COMPACT, H_CALL, 0x63E040, 1,
        0x63EFB4, GAME_10US_COMPACT, H_CALL, 0x63E990, 1,
        0x63F0F4, GAME_10US_COMPACT, H_CALL, 0x63E990, 2,
        0x63FBBB, GAME_10US_COMPACT, H_CALL, 0x63F970, 1,
        0x63FDA5, GAME_10US_COMPACT, H_CALL, 0x63F970, 2,
        0x63FEBB, GAME_10US_COMPACT, H_CALL, 0x63F970, 3,
        0x640059, GAME_10US_COMPACT, H_CALL, 0x63F970, 4,
        0x642087, GAME_10US_COMPACT, H_CALL, 0x641FC0, 1,
        0x643B15, GAME_10US_COMPACT, H_CALL, 0x643A60, 1,
        0x64457A, GAME_10US_COMPACT, H_CALL, 0x644470, 1,
        0x64BAE1, GAME_10US_COMPACT, H_CALL, 0x64B950, 1>;
    using def_t = bool(CPedGroupMembership *, CPed const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *,CPed const *>, 0,1>;
META_END

META_BEGIN(CPedGroupMembership::IsFollower)
    static int address;
    static int global_address;
    static const int id = 0x5F69E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F69E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (5), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x482AF8, GAME_10US_COMPACT, H_CALL, 0x481300, 1,
        0x4864A3, GAME_10US_COMPACT, H_CALL, 0x486300, 1,
        0x56A19E, GAME_10US_COMPACT, H_CALL, 0x56A0D0, 1,
        0x56A23E, GAME_10US_COMPACT, H_CALL, 0x56A0D0, 2,
        0x5DF12E, GAME_10US_COMPACT, H_CALL, 0x5DF100, 1>;
    using def_t = bool(CPedGroupMembership *, CPed const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *,CPed const *>, 0,1>;
META_END

META_BEGIN(CPedGroupMembership::IsMember)
    static int address;
    static int global_address;
    static const int id = 0x5F6A10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F6A10, 0, 0, 0, 0, 0>;
    // total references count: 10us (23), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x43D243, GAME_10US_COMPACT, H_CALL, 0x43D210, 1,
        0x43DD64, GAME_10US_COMPACT, H_CALL, 0x43DCD0, 1,
        0x46FDF3, GAME_10US_COMPACT, H_CALL, 0x46F800, 1,
        0x496D53, GAME_10US_COMPACT, H_CALL, 0x496760, 1,
        0x49878F, GAME_10US_COMPACT, H_CALL, 0x496E00, 1,
        0x4AE0EB, GAME_10US_COMPACT, H_CALL, 0x4AE0E0, 1,
        0x4AF98C, GAME_10US_COMPACT, H_CALL, 0x4AF970, 1,
        0x4AFA14, GAME_10US_COMPACT, H_CALL, 0x4AF970, 2,
        0x4B5CD6, GAME_10US_COMPACT, H_CALL, 0x4B5AC0, 1,
        0x4B7D86, GAME_10US_COMPACT, H_CALL, 0x4B7CD0, 1,
        0x5E90FA, GAME_10US_COMPACT, H_CALL, 0x5E8CD0, 1,
        0x5F74C5, GAME_10US_COMPACT, H_CALL, 0x5F7470, 1,
        0x5F77E8, GAME_10US_COMPACT, H_CALL, 0x5F77A0, 1,
        0x5F7F85, GAME_10US_COMPACT, H_CALL, 0x5F7F40, 1,
        0x5FB330, GAME_10US_COMPACT, H_CALL, 0x5FB2D0, 1,
        0x5FB341, GAME_10US_COMPACT, H_CALL, 0x5FB2D0, 2,
        0x5FB40F, GAME_10US_COMPACT, H_CALL, 0x5FB390, 1,
        0x60C254, GAME_10US_COMPACT, H_CALL, 0x60C1E0, 1,
        0x60C6BF, GAME_10US_COMPACT, H_CALL, 0x60C5F0, 1,
        0x60C8EB, GAME_10US_COMPACT, H_CALL, 0x60C840, 1,
        0x65E494, GAME_10US_COMPACT, H_CALL, 0x65E200, 1,
        0x665D53, GAME_10US_COMPACT, H_CALL, 0x665760, 1,
        0x673B33, GAME_10US_COMPACT, H_CALL, 0x673540, 1>;
    using def_t = bool(CPedGroupMembership *, CPed const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *,CPed const *>, 0,1>;
META_END

META_BEGIN(CPedGroupMembership::CountMembers)
    static int address;
    static int global_address;
    static const int id = 0x5F6A50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F6A50, 0, 0, 0, 0, 0>;
    // total references count: 10us (5), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4BE93D, GAME_10US_COMPACT, H_CALL, 0x4BE7D0, 1,
        0x65E013, GAME_10US_COMPACT, H_CALL, 0x65DFF0, 1,
        0x662EB9, GAME_10US_COMPACT, H_CALL, 0x662A10, 1,
        0x666070, GAME_10US_COMPACT, H_CALL, 0x665E00, 1,
        0x696514, GAME_10US_COMPACT, H_CALL, 0x6962A0, 1>;
    using def_t = int(CPedGroupMembership *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *>, 0>;
META_END

META_BEGIN(CPedGroupMembership::CountMembersExcludingLeader)
    static int address;
    static int global_address;
    static const int id = 0x5F6AA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F6AA0, 0, 0, 0, 0, 0>;
    // total references count: 10us (19), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x43AD65, GAME_10US_COMPACT, H_CALL, 0x43AC40, 1,
        0x472F98, GAME_10US_COMPACT, H_CALL, 0x472310, 1,
        0x475FED, GAME_10US_COMPACT, H_CALL, 0x474900, 1,
        0x47AD91, GAME_10US_COMPACT, H_CALL, 0x47A760, 1,
        0x48AA20, GAME_10US_COMPACT, H_CALL, 0x48A320, 1,
        0x49246C, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1,
        0x4E5437, GAME_10US_COMPACT, H_CALL, 0x4E53B0, 1,
        0x58BDB6, GAME_10US_COMPACT, H_CALL, 0x58B6E0, 1,
        0x60A0B8, GAME_10US_COMPACT, H_CALL, 0x60A0A0, 1,
        0x60A150, GAME_10US_COMPACT, H_CALL, 0x60A110, 1,
        0x60A22D, GAME_10US_COMPACT, H_CALL, 0x60A1D0, 1,
        0x60A372, GAME_10US_COMPACT, H_CALL, 0x60A1D0, 2,
        0x60C992, GAME_10US_COMPACT, H_CALL, 0x60C840, 1,
        0x60C9B1, GAME_10US_COMPACT, H_CALL, 0x60C840, 2,
        0x60C9D3, GAME_10US_COMPACT, H_CALL, 0x60C840, 3,
        0x60CC68, GAME_10US_COMPACT, H_CALL, 0x60CC50, 1,
        0x60F74E, GAME_10US_COMPACT, H_CALL, 0x60EA90, 1,
        0x65E504, GAME_10US_COMPACT, H_CALL, 0x65E200, 1,
        0x670227, GAME_10US_COMPACT, H_CALL, 0x670100, 1>;
    using def_t = int(CPedGroupMembership *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *>, 0>;
META_END

META_BEGIN(CPedGroupMembership::AddMember)
    static int address;
    static int global_address;
    static const int id = 0x5F6AE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F6AE0, 0, 0, 0, 0, 0>;
    // total references count: 10us (5), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5F7FF6, GAME_10US_COMPACT, H_CALL, 0x5F7FE0, 1,
        0x5F8090, GAME_10US_COMPACT, H_CALL, 0x5F8020, 1,
        0x5FB277, GAME_10US_COMPACT, H_CALL, 0x5FB240, 1,
        0x5FBA17, GAME_10US_COMPACT, H_CALL, 0x5FB9C0, 1,
        0x5FBAC8, GAME_10US_COMPACT, H_CALL, 0x5FBA60, 1>;
    using def_t = void(CPedGroupMembership *, CPed *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *,CPed *,int>, 0,1,2>;
META_END

META_BEGIN(CPedGroupMembership::From)
    static int address;
    static int global_address;
    static const int id = 0x5F7FE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7FE0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FB148, GAME_10US_COMPACT, H_CALL, 0x5FB140, 1>;
    using def_t = void(CPedGroupMembership *, CPedGroupMembership const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *,CPedGroupMembership const *>, 0,1>;
META_END

META_BEGIN(CPedGroupMembership::AddFollower)
    static int address;
    static int global_address;
    static const int id = 0x5F8020;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F8020, 0, 0, 0, 0, 0>;
    // total references count: 10us (6), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x49249F, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1,
        0x5FCDED, GAME_10US_COMPACT, H_CALL, 0x5FC9B0, 1,
        0x5FD2A7, GAME_10US_COMPACT, H_CALL, 0x5FCE80, 1,
        0x5FD709, GAME_10US_COMPACT, H_CALL, 0x5FD330, 1,
        0x60CA71, GAME_10US_COMPACT, H_CALL, 0x60C840, 1,
        0x65E575, GAME_10US_COMPACT, H_CALL, 0x65E200, 1>;
    using def_t = void(CPedGroupMembership *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *,CPed *>, 0,1>;
META_END

META_BEGIN(CPedGroupMembership::RemoveMember)
    static int address;
    static int global_address;
    static const int id = 0x5F80D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F80D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (17), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FB178, GAME_10US_COMPACT, H_CALL, 0x5FB160, 1,
        0x5FB1BB, GAME_10US_COMPACT, H_CALL, 0x5FB190, 1,
        0x5FB1F6, GAME_10US_COMPACT, H_CALL, 0x5FB1D0, 1,
        0x5FB23B, GAME_10US_COMPACT, H_JUMP, 0x5FB210, 1,
        0x5FB26D, GAME_10US_COMPACT, H_CALL, 0x5FB240, 1,
        0x5FB7A8, GAME_10US_COMPACT, H_CALL, 0x5FB790, 1,
        0x5FB7ED, GAME_10US_COMPACT, H_CALL, 0x5FB7D0, 1,
        0x5FB83F, GAME_10US_COMPACT, H_CALL, 0x5FB800, 1,
        0x5FB8EF, GAME_10US_COMPACT, H_CALL, 0x5FB8C0, 1,
        0x5FB94F, GAME_10US_COMPACT, H_CALL, 0x5FB930, 1,
        0x5FB9A8, GAME_10US_COMPACT, H_CALL, 0x5FB990, 1,
        0x5FB9FD, GAME_10US_COMPACT, H_CALL, 0x5FB9C0, 1,
        0x5FBA0D, GAME_10US_COMPACT, H_CALL, 0x5FB9C0, 2,
        0x5FBA8B, GAME_10US_COMPACT, H_CALL, 0x5FBA60, 1,
        0x5FBABE, GAME_10US_COMPACT, H_CALL, 0x5FBA60, 2,
        0x5FBB54, GAME_10US_COMPACT, H_CALL, 0x5FBA60, 3,
        0x5FC1D8, GAME_10US_COMPACT, H_CALL, 0x5FC190, 1>;
    using def_t = void(CPedGroupMembership *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *,int>, 0,1>;
META_END

CTOR_META_BEGIN_OVERLOADED(CPedGroupMembership, void(CPedGroupMembership const *))
    static int address;
    static int global_address;
    static const int id = 0x5FB140;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB140, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = CPedGroupMembership *(CPedGroupMembership *, CPedGroupMembership const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *,CPedGroupMembership const *>, 0,1>;
META_END

META_BEGIN(CPedGroupMembership::Flush)
    static int address;
    static int global_address;
    static const int id = 0x5FB160;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB160, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CPedGroupMembership *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *>, 0>;
META_END

META_BEGIN(CPedGroupMembership::RemoveAllFollowers)
    static int address;
    static int global_address;
    static const int id = 0x5FB190;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB190, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x60A0FD, GAME_10US_COMPACT, H_CALL, 0x60A0A0, 1>;
    using def_t = void(CPedGroupMembership *, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *,bool>, 0,1>;
META_END

META_BEGIN(CPedGroupMembership::RemoveNFollowers)
    static int address;
    static int global_address;
    static const int id = 0x5FB1D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB1D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x476003, GAME_10US_COMPACT, H_CALL, 0x474900, 1,
        0x47ADAD, GAME_10US_COMPACT, H_CALL, 0x47A760, 1,
        0x492497, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1>;
    using def_t = char(CPedGroupMembership *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *,int>, 0,1>;
META_END

META_BEGIN(CPedGroupMembership::AppointNewLeader)
    static int address;
    static int global_address;
    static const int id = 0x5FB240;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB240, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CPedGroupMembership *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *>, 0>;
META_END

DTOR_META_BEGIN(CPedGroupMembership)
    static int address;
    static int global_address;
    static const int id = 0x5FB990;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB990, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x83E4B6, GAME_10US_COMPACT, H_JUMP, 0x83E4B0, 1>;
    using def_t = void(CPedGroupMembership *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *>, 0>;
META_END

META_BEGIN(CPedGroupMembership::SetLeader)
    static int address;
    static int global_address;
    static const int id = 0x5FB9C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB9C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (6), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4923A3, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1,
        0x571B3C, GAME_10US_COMPACT, H_CALL, 0x571AD0, 1,
        0x5FCB5A, GAME_10US_COMPACT, H_CALL, 0x5FC9B0, 1,
        0x5FD232, GAME_10US_COMPACT, H_CALL, 0x5FCE80, 1,
        0x5FD6FB, GAME_10US_COMPACT, H_CALL, 0x5FD330, 1,
        0x60D6A9, GAME_10US_COMPACT, H_CALL, 0x60D5B0, 1>;
    using def_t = void(CPedGroupMembership *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *,CPed *>, 0,1>;
META_END

META_BEGIN(CPedGroupMembership::Process)
    static int address;
    static int global_address;
    static const int id = 0x5FBA60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FBA60, 0, 0, 0, 0, 0>;
    // total references count: 10us (7), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FC7E6, GAME_10US_COMPACT, H_CALL, 0x5FC7E0, 1,
        0x5FC81B, GAME_10US_COMPACT, H_CALL, 0x5FC800, 1,
        0x5FCB61, GAME_10US_COMPACT, H_CALL, 0x5FC9B0, 1,
        0x5FCDF4, GAME_10US_COMPACT, H_CALL, 0x5FC9B0, 2,
        0x5FD239, GAME_10US_COMPACT, H_CALL, 0x5FCE80, 1,
        0x5FD2AE, GAME_10US_COMPACT, H_CALL, 0x5FCE80, 2,
        0x5FD710, GAME_10US_COMPACT, H_CALL, 0x5FD330, 1>;
    using def_t = void(CPedGroupMembership *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupMembership *>, 0>;
META_END

template<>
struct stack_object<CPedGroupMembership> : stack_object_no_default<CPedGroupMembership> {
    SUPPORTED_10US stack_object() {
        plugin::CallMethodDynGlobal<CPedGroupMembership *>(ctor_gaddr(CPedGroupMembership), reinterpret_cast<CPedGroupMembership *>(objBuff));
    }
    SUPPORTED_10US stack_object(CPedGroupMembership const *Obj) {
        plugin::CallMethodDynGlobal<CPedGroupMembership *, CPedGroupMembership const *>(ctor_gaddr_o(CPedGroupMembership, void(CPedGroupMembership const *)), reinterpret_cast<CPedGroupMembership *>(objBuff), Obj);
    }
    SUPPORTED_10US ~stack_object() {
        plugin::CallMethodDynGlobal<CPedGroupMembership *>(dtor_gaddr(CPedGroupMembership), reinterpret_cast<CPedGroupMembership *>(objBuff));
    }
};

template <>
SUPPORTED_10US inline CPedGroupMembership *operator_new<CPedGroupMembership>() {
    void *objData = operator new(sizeof(CPedGroupMembership)); 
    CPedGroupMembership *obj = reinterpret_cast<CPedGroupMembership *>(objData);
    plugin::CallMethodDynGlobal<CPedGroupMembership *>(ctor_gaddr(CPedGroupMembership), obj);
    return obj;
}
template <>
SUPPORTED_10US inline CPedGroupMembership *operator_new_array<CPedGroupMembership>(unsigned int objCount) {
    void *objData = operator new(sizeof(CPedGroupMembership) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CPedGroupMembership *objArray = reinterpret_cast<CPedGroupMembership *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CPedGroupMembership *>(ctor_gaddr(CPedGroupMembership), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10US inline CPedGroupMembership *operator_new<CPedGroupMembership>(CPedGroupMembership const *Obj) {
    void *objData = operator new(sizeof(CPedGroupMembership)); 
    CPedGroupMembership *obj = reinterpret_cast<CPedGroupMembership *>(objData);
    plugin::CallMethodDynGlobal<CPedGroupMembership *, CPedGroupMembership const *>(ctor_gaddr_o(CPedGroupMembership, void(CPedGroupMembership const *)), obj, Obj);
    return obj;
}
template <>
SUPPORTED_10US inline void operator_delete<CPedGroupMembership>(CPedGroupMembership *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CPedGroupMembership *>(dtor_gaddr(CPedGroupMembership), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10US inline void operator_delete_array<CPedGroupMembership>(CPedGroupMembership *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CPedGroupMembership *>(dtor_gaddr(CPedGroupMembership), &objArray[i]);
    operator delete(objData);
}

}
