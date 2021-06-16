/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CWaterCannons::Init)
static int address;
static int global_address;
static const int id = 0x522440;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x522440, 0x522680, 0x522610>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C2C1,100,0,0x48BED0,1, 0x48C5BC,100,0,0x48C4B0,1, 0x48C3B1,110,0,0x48BFC0,1, 0x48C6BC,110,0,0x48C5B0,1, 0x48C341,120,0,0x48BF50,1, 0x48C64C,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CWaterCannons::UpdateOne)
static int address;
static int global_address;
static const int id = 0x522470;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x522470, 0x5226B0, 0x522640>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x522B27,100,0,0x522590,1, 0x522D67,110,0,0x5227D0,1, 0x522CF7,120,0,0x522760,1>;
using def_t = void(unsigned int, CVector *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,CVector *,CVector *>, 0,1,2>;
META_END

META_BEGIN(CWaterCannons::Update)
static int address;
static int global_address;
static const int id = 0x522510;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x522510, 0x522750, 0x5226E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C96B,100,0,0x48C850,1, 0x48CA6B,110,0,0x48C950,1, 0x48C9FB,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CWaterCannons::Render)
static int address;
static int global_address;
static const int id = 0x522550;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x522550, 0x522790, 0x522720>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E095,100,0,0x48E090,1, 0x48E155,110,0,0x48E150,1, 0x48E0E5,120,0,0x48E0E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
