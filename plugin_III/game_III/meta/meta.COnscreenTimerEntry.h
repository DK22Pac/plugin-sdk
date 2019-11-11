/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(COnscreenTimerEntry::ProcessForDisplayClock)
static int address;
static int global_address;
static const int id = 0x429080;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x429080, 0x429080, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x429131,100,0,0x429110,1, 0x429131,110,0,0x429110,1>;
using def_t = void(COnscreenTimerEntry *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<COnscreenTimerEntry *>, 0>;
META_END

META_BEGIN(COnscreenTimerEntry::ProcessForDisplayCounter)
static int address;
static int global_address;
static const int id = 0x4290F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4290F0, 0x4290F0, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x429142,100,0,0x429110,1, 0x429142,110,0,0x429110,1>;
using def_t = void(COnscreenTimerEntry *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<COnscreenTimerEntry *>, 0>;
META_END

META_BEGIN(COnscreenTimerEntry::ProcessForDisplay)
static int address;
static int global_address;
static const int id = 0x429110;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x429110, 0x429110, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x4292F8,100,0,0x4292E0,1, 0x4292F8,110,0,0x4292E0,1>;
using def_t = bool(COnscreenTimerEntry *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<COnscreenTimerEntry *>, 0>;
META_END

META_BEGIN(COnscreenTimerEntry::Process)
static int address;
static int global_address;
static const int id = 0x429160;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x429160, 0x429160, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x42933A,100,0,0x429320,1, 0x42933A,110,0,0x429320,1>;
using def_t = void(COnscreenTimerEntry *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<COnscreenTimerEntry *>, 0>;
META_END

}
