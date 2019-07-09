/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CDraw::SetFOV)
static int address;
static int global_address;
static const int id = 0x4FE7B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FE7B0, 0x4FE890, 0x4FE820>;
// total references count: 10en (6), 11en (0), steam (0)
using refs_t = RefList<0x46E92E,100,0,0x46D3F0,1, 0x46EACE,100,0,0x46D3F0,2, 0x48C0DA,100,0,0x48BED0,1, 0x48C50B,100,0,0x48C4B0,1, 0x59BCA9,100,0,0x59BC70,1, 0x59BCCC,100,0,0x59BCB0,1>;
using def_t = void(float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float>, 0>;
META_END

}
