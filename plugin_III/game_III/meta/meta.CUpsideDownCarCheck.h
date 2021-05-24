/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CUpsideDownCarCheck::Init)
static int address;
static int global_address;
static const int id = 0x437DC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x437DC0, 0x437DC0, 0x437DC0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x437D24,100,0,0x437C10,1, 0x438845,100,0,0x438790,1, 0x437D24,110,0,0x437C10,1, 0x438845,110,0,0x438790,1, 0x437D24,120,0,0x437C10,1, 0x438845,120,0,0x438790,1>;
using def_t = void(CUpsideDownCarCheck *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CUpsideDownCarCheck *>, 0>;
META_END

META_BEGIN(CUpsideDownCarCheck::IsCarUpsideDown)
static int address;
static int global_address;
static const int id = 0x437E10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x437E10, 0x437E10, 0x437E10>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x437F3C,100,0,0x437EE0,1, 0x437F3C,110,0,0x437EE0,1, 0x437F3C,120,0,0x437EE0,1>;
using def_t = bool(CUpsideDownCarCheck *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CUpsideDownCarCheck *,int>, 0,1>;
META_END

META_BEGIN(CUpsideDownCarCheck::UpdateTimers)
static int address;
static int global_address;
static const int id = 0x437EE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x437EE0, 0x437EE0, 0x437EE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4390A2,100,0,0x439040,1, 0x4390A2,110,0,0x439040,1, 0x4390A2,120,0,0x439040,1>;
using def_t = void(CUpsideDownCarCheck *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CUpsideDownCarCheck *>, 0>;
META_END

META_BEGIN(CUpsideDownCarCheck::AreAnyCarsUpsideDown)
static int address;
static int global_address;
static const int id = 0x437F80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x437F80, 0x437F80, 0x437F80>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x452AA4,100,0,0x452A30,1, 0x452AA4,110,0,0x452A30,1, 0x452AA4,120,0,0x452A30,1>;
using def_t = bool(CUpsideDownCarCheck *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CUpsideDownCarCheck *>, 0>;
META_END

META_BEGIN(CUpsideDownCarCheck::AddCarToCheck)
static int address;
static int global_address;
static const int id = 0x437FB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x437FB0, 0x437FB0, 0x437FB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x440D04,100,0,0x440CB0,1, 0x440D04,110,0,0x440CB0,1, 0x440D04,120,0,0x440CB0,1>;
using def_t = void(CUpsideDownCarCheck *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CUpsideDownCarCheck *,int>, 0,1>;
META_END

META_BEGIN(CUpsideDownCarCheck::RemoveCarFromCheck)
static int address;
static int global_address;
static const int id = 0x437FE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x437FE0, 0x437FE0, 0x437FE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x440D41,100,0,0x440CB0,1, 0x440D41,110,0,0x440CB0,1, 0x440D41,120,0,0x440CB0,1>;
using def_t = void(CUpsideDownCarCheck *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CUpsideDownCarCheck *,int>, 0,1>;
META_END

META_BEGIN(CUpsideDownCarCheck::HasCarBeenUpsideDownForAWhile)
static int address;
static int global_address;
static const int id = 0x438010;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x438010, 0x438010, 0x438010>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x440C7B,100,0,0x43ED30,1, 0x440C7B,110,0,0x43ED30,1, 0x440C7B,120,0,0x43ED30,1>;
using def_t = bool(CUpsideDownCarCheck *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CUpsideDownCarCheck *,int>, 0,1>;
META_END

}
