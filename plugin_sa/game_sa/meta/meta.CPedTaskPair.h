/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedTaskPair::Flush)
    static int address;
    static int global_address;
    static const int id = 0x5E95B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5E95B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5F7366, GAME_10US_COMPACT, H_CALL, 0x5F7350, 1,
        0x5F736D, GAME_10US_COMPACT, H_CALL, 0x5F7350, 2,
        0x5F7378, GAME_10US_COMPACT, H_CALL, 0x5F7350, 3,
        0x5F7383, GAME_10US_COMPACT, H_CALL, 0x5F7350, 4>;
    using def_t = void(CPedTaskPair *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedTaskPair *>, 0>;
META_END

}
