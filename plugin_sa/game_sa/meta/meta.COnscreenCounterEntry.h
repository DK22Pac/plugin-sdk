/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(COnscreenCounterEntry::ProcessForDisplayCounter)
    static int address;
    static int global_address;
    static const int id = 0x44CA90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44CA90, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(COnscreenCounterEntry *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<COnscreenCounterEntry *,int>, 0,1>;
META_END

META_BEGIN(COnscreenCounterEntry::SetColourID)
    static int address;
    static int global_address;
    static const int id = 0x44CB00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44CB00, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(COnscreenCounterEntry *, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<COnscreenCounterEntry *,unsigned char>, 0,1>;
META_END

}
