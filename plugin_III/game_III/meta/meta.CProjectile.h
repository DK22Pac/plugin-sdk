/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN_OVERLOADED(CProjectile, void(int))
static int address;
static int global_address;
static const int id = 0x4BFE30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BFE30, 0x4BFF20, 0x4BFEB0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x55B58C,100,0,0x55B030,1, 0x55B5B0,100,0,0x55B030,2, 0x55B5D4,100,0,0x55B030,3, 0x55B6BC,110,0,0x55B160,1, 0x55B6E0,110,0,0x55B160,2, 0x55B704,110,0,0x55B160,3, 0x55B66C,120,0,0x55B110,1, 0x55B690,120,0,0x55B110,2, 0x55B6B4,120,0,0x55B110,3>;
using def_t = CProjectile *(CProjectile *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CProjectile *,int>, 0,1>;
META_END

DTOR_META_BEGIN(CProjectile)
static int address;
static int global_address;
static const int id = 0x4BFED0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BFED0, 0x4BFFC0, 0x4BFF50>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4BFF13,100,0,0x4BFEF0,1, 0x4BFF04,100,2,0,1, 0x4C0003,110,0,0x4BFFE0,1, 0x4BFFF4,110,2,0,1, 0x4BFF93,120,0,0x4BFF70,1, 0x4BFF84,120,2,0,1>;
using def_t = void(CProjectile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CProjectile *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CProjectile)
static int address;
static int global_address;
static const int id = 0x4BFEF0;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x4BFEF0, 0x4BFFE0, 0x4BFF70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F8048,100,2,0x5F8048,1, 0x5F7E30,110,2,0x5F7E30,1, 0x604E28,120,2,0x604E28,1>;
using def_t = CProjectile *(CProjectile *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CProjectile *,char>, 0,1>;
META_END

}
