/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CSkidmarks::Init)
static int address;
static int global_address;
static const int id = 0x517D70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x517D70, 0x517F80, 0x517F10>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C239,100,0,0x48BED0,1, 0x48C329,110,0,0x48BFC0,1, 0x48C2B9,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSkidmarks::Shutdown)
static int address;
static int global_address;
static const int id = 0x518100;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x518100, 0x518310, 0x5182A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C482,100,0,0x48C3A0,1, 0x48C572,110,0,0x48C490,1, 0x48C502,120,0,0x48C420,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSkidmarks::Clear)
static int address;
static int global_address;
static const int id = 0x518130;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x518130, 0x518360, 0x5182F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x596168,100,0,0x596030,1, 0x596418,110,0,0x5962E0,1, 0x596308,120,0,0x5961D0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSkidmarks::Update)
static int address;
static int global_address;
static const int id = 0x518200;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x518200, 0x518430, 0x5183C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C913,100,0,0x48C850,1, 0x48CA13,110,0,0x48C950,1, 0x48C9A3,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSkidmarks::Render)
static int address;
static int global_address;
static const int id = 0x5182E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5182E0, 0x518510, 0x5184A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E0A9,100,0,0x48E090,1, 0x48E169,110,0,0x48E150,1, 0x48E0F9,120,0,0x48E0E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSkidmarks::RegisterOne)
static int address;
static int global_address;
static const int id = 0x5185C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5185C0, 0x5187F0, 0x518780>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x536544,100,0,0x535B40,1, 0x536989,100,0,0x535B40,2, 0x536D81,100,0,0x535B40,3, 0x536784,110,0,0x535D80,1, 0x536BC9,110,0,0x535D80,2, 0x536FC1,110,0,0x535D80,3, 0x536714,120,0,0x535D10,1, 0x536B59,120,0,0x535D10,2, 0x536F51,120,0,0x535D10,3>;
using def_t = void(unsigned int, CVector, float, float, bool *, bool *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,CVector,float,float,bool *,bool *>, 0,1,2,3,4,5>;
META_END

}
