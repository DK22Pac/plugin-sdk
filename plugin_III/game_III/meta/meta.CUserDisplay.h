/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CUserDisplay::Init)
static int address;
static int global_address;
static const int id = 0x4AD660;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AD660, 0x4AD750, 0x4AD6E0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48BFE2,100,0,0x48BED0,1, 0x48C4DB,100,0,0x48C4B0,1, 0x48C0D2,110,0,0x48BFC0,1, 0x48C5DB,110,0,0x48C5B0,1, 0x48C062,120,0,0x48BF50,1, 0x48C56B,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CUserDisplay::Process)
static int address;
static int global_address;
static const int id = 0x4AD690;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AD690, 0x4AD780, 0x4AD710>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C970,100,0,0x48C850,1, 0x48CA70,110,0,0x48C950,1, 0x48CA00,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
