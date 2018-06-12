/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedGroupPlacer::PlaceFormationGroup)
    static int address;
    static int global_address;
    static const int id = 0x5FC9B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FC9B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FD824, GAME_10US_COMPACT, H_JUMP, 0x5FD810, 1>;
    using def_t = bool(CPedGroupPlacer *, ePedType, int, CVector const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupPlacer *,ePedType,int,CVector const *,int>, 0,1,2,3,4>;
META_END

META_BEGIN(CPedGroupPlacer::PlaceChatGroup)
    static int address;
    static int global_address;
    static const int id = 0x5FCE80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FCE80, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FD82D, GAME_10US_COMPACT, H_JUMP, 0x5FD810, 1>;
    using def_t = bool(CPedGroupPlacer *, ePedType, int, CVector const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupPlacer *,ePedType,int,CVector const *,int>, 0,1,2,3,4>;
META_END

META_BEGIN(CPedGroupPlacer::PlaceRandomGroup)
    static int address;
    static int global_address;
    static const int id = 0x5FD330;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FD330, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FD83A, GAME_10US_COMPACT, H_JUMP, 0x5FD810, 1>;
    using def_t = bool(CPedGroupPlacer *, ePedType, int, CVector *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupPlacer *,ePedType,int,CVector *,int>, 0,1,2,3,4>;
META_END

META_BEGIN(CPedGroupPlacer::PlaceGroup)
    static int address;
    static int global_address;
    static const int id = 0x5FD810;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FD810, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x6117E6, GAME_10US_COMPACT, H_CALL, 0x6117D0, 1,
        0x613D4A, GAME_10US_COMPACT, H_CALL, 0x613CD0, 1>;
    using def_t = bool(CPedGroupPlacer *, ePedType, int, CVector const *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroupPlacer *,ePedType,int,CVector const *,int>, 0,1,2,3,4>;
META_END

}
