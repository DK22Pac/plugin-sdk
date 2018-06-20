/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCoverPoint::CanAccomodateAnotherPed)
    static int address;
    static int global_address;
    static const int id = 0x698E70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x698E70, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = bool(CCoverPoint *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCoverPoint *>, 0>;
META_END

META_BEGIN(CCoverPoint::ReserveCoverPointForPed)
    static int address;
    static int global_address;
    static const int id = 0x698EB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x698EB0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CCoverPoint *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCoverPoint *,CPed *>, 0,1>;
META_END

META_BEGIN(CCoverPoint::ReleaseCoverPointForPed)
    static int address;
    static int global_address;
    static const int id = 0x698EF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x698EF0, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5E027E, GAME_10US_COMPACT, H_CALL, 0x5E0270, 1,
        0x5E451D, GAME_10US_COMPACT, H_CALL, 0x5E4500, 1,
        0x5E7C42, GAME_10US_COMPACT, H_CALL, 0x5E7B70, 1,
        0x5E8724, GAME_10US_COMPACT, H_CALL, 0x5E8620, 1>;
    using def_t = void(CCoverPoint *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCoverPoint *,CPed *>, 0,1>;
META_END

}
