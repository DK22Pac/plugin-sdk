/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CGangWarsSaveStructure::Construct)
    static int address;
    static int global_address;
    static const int id = 0x5D2620;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D2620, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D553F, GAME_10US_COMPACT, H_CALL, 0x5D5530, 1>;
    using def_t = void(CGangWarsSaveStructure *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CGangWarsSaveStructure *>, 0>;
META_END

META_BEGIN(CGangWarsSaveStructure::Extract)
    static int address;
    static int global_address;
    static const int id = 0x5D2740;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5D2740, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5D3ED2, GAME_10US_COMPACT, H_CALL, 0x5D3EB0, 1>;
    using def_t = void(CGangWarsSaveStructure *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CGangWarsSaveStructure *>, 0>;
META_END

}
