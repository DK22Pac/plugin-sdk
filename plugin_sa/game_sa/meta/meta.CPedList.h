/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedList::Empty)
    static int address;
    static int global_address;
    static const int id = 0x699DB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x699DB0, 0, 0, 0, 0, 0>;
    // total references count: 10us (5), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5F68A3, GAME_10US_COMPACT, H_CALL, 0x5F68A0, 1,
        0x5FAB8E, GAME_10US_COMPACT, H_CALL, 0x5FAB60, 1,
        0x69BCCC, GAME_10US_COMPACT, H_CALL, 0x69BCA0, 1,
        0x69BCD8, GAME_10US_COMPACT, H_CALL, 0x69BCA0, 2,
        0x69C4F5, GAME_10US_COMPACT, H_CALL, 0x69C4D0, 1>;
    using def_t = void(CPedList *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedList *>, 0>;
META_END

META_BEGIN(CPedList::BuildListFromGroup_NoLeader)
    static int address;
    static int global_address;
    static const int id = 0x699DD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x699DD0, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x69BCFD, GAME_10US_COMPACT, H_CALL, 0x69BCA0, 1,
        0x69C52C, GAME_10US_COMPACT, H_CALL, 0x69C4D0, 1>;
    using def_t = void(CPedList *, CPedGroupMembership *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedList *,CPedGroupMembership *>, 0,1>;
META_END

META_BEGIN(CPedList::FillUpHoles)
    static int address;
    static int global_address;
    static const int id = 0x699E20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x699E20, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x69A44A, GAME_10US_COMPACT, H_JUMP, 0x69A420, 1,
        0x69A4A8, GAME_10US_COMPACT, H_CALL, 0x69A450, 1,
        0x69A520, GAME_10US_COMPACT, H_CALL, 0x69A4C0, 1>;
    using def_t = void(CPedList *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedList *>, 0>;
META_END

META_BEGIN(CPedList::BuildListFromGroup_NotInCar_NoLeader)
    static int address;
    static int global_address;
    static const int id = 0x69A340;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x69A340, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FAB98, GAME_10US_COMPACT, H_CALL, 0x5FAB60, 1>;
    using def_t = void(CPedList *, CPedGroupMembership *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedList *,CPedGroupMembership *>, 0,1>;
META_END

META_BEGIN(CPedList::BuildListOfPedsOfPedType)
    static int address;
    static int global_address;
    static const int id = 0x69A3B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x69A3B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x69C575, GAME_10US_COMPACT, H_CALL, 0x69C4D0, 1>;
    using def_t = void(CPedList *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedList *,int>, 0,1>;
META_END

META_BEGIN(CPedList::RemovePedsThatDontListenToPlayer)
    static int address;
    static int global_address;
    static const int id = 0x69A420;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x69A420, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x69BD2C, GAME_10US_COMPACT, H_CALL, 0x69BCA0, 1,
        0x69C55A, GAME_10US_COMPACT, H_CALL, 0x69C4D0, 1>;
    using def_t = void(CPedList *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedList *>, 0>;
META_END

META_BEGIN(CPedList::RemovePedsAttackingPedType)
    static int address;
    static int global_address;
    static const int id = 0x69A450;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x69A450, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x69C567, GAME_10US_COMPACT, H_CALL, 0x69C4D0, 1>;
    using def_t = void(CPedList *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedList *,int>, 0,1>;
META_END

META_BEGIN(CPedList::ExtractPedsWithGuns)
    static int address;
    static int global_address;
    static const int id = 0x69A4C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x69A4C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x69BD74, GAME_10US_COMPACT, H_CALL, 0x69BCA0, 1>;
    using def_t = void(CPedList *, CPedList *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedList *,CPedList *>, 0,1>;
META_END

}
