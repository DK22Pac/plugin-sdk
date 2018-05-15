/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(COnscreenTimerEntry::ProcessForDisplayClock)
    static int address;
    static int global_address;
    static const int id = 0x44CA40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44CA40, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(COnscreenTimerEntry *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<COnscreenTimerEntry *>, 0>;
META_END

META_BEGIN(COnscreenTimerEntry::Process)
    static int address;
    static int global_address;
    static const int id = 0x44CB10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44CB10, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x44CD43, GAME_10US_COMPACT, H_JUMP, 0x44CD30, 1>;
    using def_t = void(COnscreenTimerEntry *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<COnscreenTimerEntry *>, 0>;
META_END

}
