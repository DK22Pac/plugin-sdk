/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CMovingThings::Init)
static int address;
static int global_address;
static const int id = 0x4FE7C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FE7C0, 0x4FE8A0, 0x4FE830>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C29E,100,0,0x48BED0,1, 0x48C599,100,0,0x48C4B0,1, 0x48C38E,110,0,0x48BFC0,1, 0x48C699,110,0,0x48C5B0,1, 0x48C31E,120,0,0x48BF50,1, 0x48C629,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CMovingThings::Shutdown)
static int address;
static int global_address;
static const int id = 0x4FF020;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FF020, 0x4FF100, 0x4FF090>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C3BD,100,0,0x48C3A0,1, 0x48C4AD,110,0,0x48C490,1, 0x48C43D,120,0,0x48C420,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CMovingThings::Update)
static int address;
static int global_address;
static const int id = 0x4FF0D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FF0D0, 0x4FF1B0, 0x4FF140>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C966,100,0,0x48C850,1, 0x48CA66,110,0,0x48C950,1, 0x48C9F6,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CMovingThings::Render)
static int address;
static int global_address;
static const int id = 0x4FF210;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FF210, 0x4FF2F0, 0x4FF280>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E0D1,100,0,0x48E090,1, 0x48E191,110,0,0x48E150,1, 0x48E121,120,0,0x48E0E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
