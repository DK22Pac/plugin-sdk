/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CTimeCycle::Initialise)
static int address;
static int global_address;
static const int id = 0x4ABAE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ABAE0, 0x4ABBD0, 0x4ABB60>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48BD91,100,0,0x48BD50,1, 0x48C500,100,0,0x48C4B0,1, 0x48BE81,110,0,0x48BE40,1, 0x48C600,110,0,0x48C5B0,1, 0x48BE11,120,0,0x48BDD0,1, 0x48C590,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimeCycle::Update)
static int address;
static int global_address;
static const int id = 0x4ABF40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ABF40, 0x4AC030, 0x4ABFC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C9A2,100,0,0x48C850,1, 0x48CAA2,110,0,0x48C950,1, 0x48CA32,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
