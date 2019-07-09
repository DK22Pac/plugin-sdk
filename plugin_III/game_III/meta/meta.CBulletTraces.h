/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CBulletTraces::Init)
static int address;
static int global_address;
static const int id = 0x518DE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x518DE0, 0x519010, 0x518FA0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x5189E0,100,0,0x5189E0,1, 0x595259,100,0,0x595240,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CBulletTraces::AddTrace)
static int address;
static int global_address;
static const int id = 0x518E90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x518E90, 0x5190C0, 0x519050>;
// total references count: 10en (6), 11en (0), steam (0)
using refs_t = RefList<0x55F9C7,100,0,0x55F950,1, 0x560599,100,0,0x55F950,2, 0x560F21,100,0,0x560620,1, 0x56186B,100,0,0x560620,2, 0x562B07,100,0,0x5624D0,1, 0x562E4F,100,0,0x5624D0,2>;
using def_t = void(CVector *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *,CVector *>, 0,1>;
META_END

META_BEGIN(CBulletTraces::Render)
static int address;
static int global_address;
static const int id = 0x518F20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x518F20, 0x519150, 0x5190E0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x518DC5,100,0,0x518DC0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CBulletTraces::Update)
static int address;
static int global_address;
static const int id = 0x519240;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x519240, 0x519470, 0x519400>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x518D46,100,0,0x518D40,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
