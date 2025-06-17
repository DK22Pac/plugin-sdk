/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CText::Get)
    static int address;
    static int global_address;
    static const int id = 0x6A0050;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6A0050, 0, 0x6A0050, 0x6A0870, 0x6CCCE0, 0>;
    using refs_t = RefList<>;
    using def_t = const char* (CText*, const char*);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CText*, const char*>, 0, 1>;
META_END

}
