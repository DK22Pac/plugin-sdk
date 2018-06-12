/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPointList::Empty)
    static int address;
    static int global_address;
    static const int id = 0x699F00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x699F00, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x6986E3, GAME_10US_COMPACT, H_CALL, 0x6986E0, 1,
        0x6995E3, GAME_10US_COMPACT, H_CALL, 0x699570, 1,
        0x69BCE4, GAME_10US_COMPACT, H_CALL, 0x69BCA0, 1>;
    using def_t = void(CPointList *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPointList *>, 0>;
META_END

}
