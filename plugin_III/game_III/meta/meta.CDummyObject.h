/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CDummyObject)
static int address;
static int global_address;
static const int id = 0x4BAAF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BAAF0, 0x4BABE0, 0x4BAB70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4787C8,100,0,0x4786B0,1, 0x4787C8,110,0,0x4786B0,1, 0x4787C8,120,0,0x4786B0,1>;
using def_t = CDummyObject *(CDummyObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDummyObject *>, 0>;
META_END

CTOR_META_BEGIN_OVERLOADED(CDummyObject, void(CObject *))
static int address;
static int global_address;
static const int id = 0x4BAB10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BAB10, 0x4BAC00, 0x4BAB90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F45B7,100,0,0x4F45A0,1, 0x4F4667,110,0,0x4F4650,1, 0x4F45F7,120,0,0x4F45E0,1>;
using def_t = CDummyObject *(CDummyObject *, CObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDummyObject *,CObject *>, 0,1>;
META_END

DTOR_META_BEGIN(CDummyObject)
static int address;
static int global_address;
static const int id = 0x4BAB70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BAB70, 0x4BAC60, 0x4BABF0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4BABB3,100,0,0x4BAB90,1, 0x4BABA4,100,2,0,1, 0x4BACA3,110,0,0x4BAC80,1, 0x4BAC94,110,2,0,1, 0x4BAC33,120,0,0x4BAC10,1, 0x4BAC24,120,2,0,1>;
using def_t = void(CDummyObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDummyObject *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CDummyObject)
static int address;
static int global_address;
static const int id = 0x4BAB90;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x4BAB90, 0x4BAC80, 0x4BAC10>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F7CEC,100,2,0x5F7CEC,1, 0x5F7AD4,110,2,0x5F7AD4,1, 0x604ACC,120,2,0x604ACC,1>;
using def_t = void(CDummyObject *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDummyObject *,int>, 0,1>;
META_END

}
