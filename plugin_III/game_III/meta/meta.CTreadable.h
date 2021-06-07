/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CTreadable)
static int address;
static int global_address;
static const int id = 0x4059F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4059F0, 0x4059F0, 0x4059F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4788F5,100,0,0x4786B0,1, 0x4788F5,110,0,0x4786B0,1, 0x4788F5,120,0,0x4786B0,1>;
using def_t = CTreadable *(CTreadable *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTreadable *>, 0>;
META_END

DTOR_META_BEGIN(CTreadable)
static int address;
static int global_address;
static const int id = 0x405A10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405A10, 0x405A10, 0x405A10>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x405A83,100,0,0x405A60,1, 0x405A74,100,2,0,1, 0x405A83,110,0,0x405A60,1, 0x405A74,110,2,0,1, 0x405A83,120,0,0x405A60,1, 0x405A74,120,2,0,1>;
using def_t = void(CTreadable *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTreadable *>, 0>;
META_END

OP_NEW_META_BEGIN(CTreadable)
static int address;
static int global_address;
static const int id = 0x405A30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405A30, 0x405A30, 0x405A30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4788E9,100,0,0x4786B0,1, 0x4788E9,110,0,0x4786B0,1, 0x4788E9,120,0,0x4786B0,1>;
using def_t = void *(unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

OP_DELETE_META_BEGIN(CTreadable)
static int address;
static int global_address;
static const int id = 0x405A40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405A40, 0x405A40, 0x405A40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x405A90,100,0,0x405A60,1, 0x405A90,110,0,0x405A60,1, 0x405A90,120,0,0x405A60,1>;
using def_t = void(void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CTreadable)
static int address;
static int global_address;
static const int id = 0x405A60;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x405A60, 0x405A60, 0x405A60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5EBFB4,100,2,0x5EBFB4,1, 0x5EBFB4,110,2,0x5EBFB4,1, 0x5F8FB4,120,2,0x5F8FB4,1>;
using def_t = void(CTreadable *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTreadable *,int>, 0,1>;
META_END

META_BEGIN(CTreadable::GetIsATreadable)
static int address;
static int global_address;
static const int id = 0x405AA0;
static const bool is_virtual = true;
static const int vtable_index = 17;
using mv_addresses_t = MvAddresses<0x405AA0, 0x405AA0, 0x405AA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5EBFF8,100,2,0x5EBFB4,1, 0x5EBFB4,110,2,0x5EBFB4,1, 0x5F8FB4,120,2,0x5F8FB4,1>;
using def_t = bool(CTreadable *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTreadable *>, 0>;
META_END

}
