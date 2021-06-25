/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CSpecialFX::Init)
static int address;
static int global_address;
static const int id = 0x5189E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5189E0, 0x518C10, 0x518BA0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C2BC,100,0,0x48BED0,1, 0x48C5B7,100,0,0x48C4B0,1, 0x48C3AC,110,0,0x48BFC0,1, 0x48C6B7,110,0,0x48C5B0,1, 0x48C33C,120,0,0x48BF50,1, 0x48C647,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSpecialFX::Shutdown)
static int address;
static int global_address;
static const int id = 0x518BE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x518BE0, 0x518E10, 0x518DA0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C3B3,100,0,0x48C3A0,1, 0x48C72C,100,0,0x48C6B0,1, 0x48C4A3,110,0,0x48C490,1, 0x48C82C,110,0,0x48C7B0,1, 0x48C433,120,0,0x48C420,1, 0x48C7BC,120,0,0x48C740,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSpecialFX::Update)
static int address;
static int global_address;
static const int id = 0x518D40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x518D40, 0x518F70, 0x518F00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C99D,100,0,0x48C850,1, 0x48CA9D,110,0,0x48C950,1, 0x48CA2D,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSpecialFX::Render)
static int address;
static int global_address;
static const int id = 0x518DC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x518DC0, 0x518FF0, 0x518F80>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E09A,100,0,0x48E090,1, 0x48E15A,110,0,0x48E150,1, 0x48E0EA,120,0,0x48E0E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(LookForBatCB)
static int address;
static int global_address;
static const int id = 0x518BF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x518BF0, 0x518E20, 0x518DB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x518DA3,100,2,0,1, 0x518FD3,110,2,0,1, 0x518F63,120,2,0,1>;
using def_t = RwObject *(RwObject *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwObject *,void *>, 0,1>;
META_END

}
