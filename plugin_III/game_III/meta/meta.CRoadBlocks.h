/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CRoadBlocks::Init)
static int address;
static int global_address;
static const int id = 0x436F50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x436F50, 0x436F50, 0x436F50>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C205,100,0,0x48BED0,1, 0x48C67F,100,0,0x48C620,1, 0x48C2F5,110,0,0x48BFC0,1, 0x48C77F,110,0,0x48C720,1, 0x48C285,120,0,0x48BF50,1, 0x48C70F,120,0,0x48C6B0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRoadBlocks::GenerateRoadBlocks)
static int address;
static int global_address;
static const int id = 0x436FA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x436FA0, 0x436FA0, 0x436FA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C9FE,100,0,0x48C850,1, 0x48CAFE,110,0,0x48C950,1, 0x48CA8E,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRoadBlocks::GenerateRoadBlockCopsForCar)
static int address;
static int global_address;
static const int id = 0x4376A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4376A0, 0x4376A0, 0x4376A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4183EC,100,0,0x418320,1, 0x4183EC,110,0,0x418320,1, 0x4183EC,120,0,0x418320,1>;
using def_t = void(CVehicle *, int, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,int,short>, 0,1,2>;
META_END

}
