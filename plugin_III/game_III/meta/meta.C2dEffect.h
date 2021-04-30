/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(C2dEffect::Shutdown)
static int address;
static int global_address;
static const int id = 0x50B820;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50B820, 0x50B900, 0x50B890>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FDF30,100,2,0,1, 0x5FDD18,110,2,0,1, 0x60AD10,120,2,0,1>;
using def_t = void(C2dEffect *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<C2dEffect *>, 0>;
META_END

}
