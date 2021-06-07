/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CDummy)
static int address;
static int global_address;
static const int id = 0x4737E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4737E0, 0x4737E0, 0x4737E0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4BAAF3,100,0,0x4BAAF0,1, 0x4BAB1D,100,0,0x4BAB10,1, 0x4BABE3,110,0,0x4BABE0,1, 0x4BAC0D,110,0,0x4BAC00,1, 0x4BAB73,120,0,0x4BAB70,1, 0x4BAB9D,120,0,0x4BAB90,1>;
using def_t = CDummy *(CDummy *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDummy *>, 0>;
META_END

DTOR_META_BEGIN(CDummy)
static int address;
static int global_address;
static const int id = 0x473810;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x473810, 0x473810, 0x473810>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x473B73,100,0,0x473B50,1, 0x4BAB79,100,0,0x4BAB70,1, 0x473B64,100,2,0,1, 0x473B73,110,0,0x473B50,1, 0x4BAC69,110,0,0x4BAC60,1, 0x473B64,110,2,0,1, 0x473B73,120,0,0x473B50,1, 0x4BABF9,120,0,0x4BABF0,1, 0x473B64,120,2,0,1>;
using def_t = void(CDummy *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDummy *>, 0>;
META_END

OP_NEW_META_BEGIN(CDummy)
static int address;
static int global_address;
static const int id = 0x473830;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x473830, 0x473830, 0x473830>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4787BC,100,0,0x4786B0,1, 0x4F45A8,100,0,0x4F45A0,1, 0x4787BC,110,0,0x4786B0,1, 0x4F4658,110,0,0x4F4650,1, 0x4787BC,120,0,0x4786B0,1, 0x4F45E8,120,0,0x4F45E0,1>;
using def_t = void *(unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

OP_DELETE_META_BEGIN(CDummy)
static int address;
static int global_address;
static const int id = 0x473840;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x473840, 0x473840, 0x473840>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x473B80,100,0,0x473B50,1, 0x4BABC0,100,0,0x4BAB90,1, 0x473B80,110,0,0x473B50,1, 0x4BACB0,110,0,0x4BAC80,1, 0x473B80,120,0,0x473B50,1, 0x4BAC40,120,0,0x4BAC10,1>;
using def_t = void(void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *>, 0>;
META_END

META_BEGIN(CDummy::Add)
static int address;
static int global_address;
static const int id = 0x473860;
static const bool is_virtual = true;
static const int vtable_index = 1;
using mv_addresses_t = MvAddresses<0x473860, 0x473860, 0x473860>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5F0F44,100,2,0x5F0F40,1, 0x5F7CF0,100,2,0x5F7CEC,1, 0x5F0E38,110,2,0x5F0E38,1, 0x5F7AD4,110,2,0x5F7AD4,1, 0x5FDE38,120,2,0x5FDE38,1, 0x604ACC,120,2,0x604ACC,1>;
using def_t = void(CDummy *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDummy *>, 0>;
META_END

META_BEGIN(CDummy::Remove)
static int address;
static int global_address;
static const int id = 0x473AD0;
static const bool is_virtual = true;
static const int vtable_index = 2;
using mv_addresses_t = MvAddresses<0x473AD0, 0x473AD0, 0x473AD0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5F0F48,100,2,0x5F0F40,1, 0x5F7CF4,100,2,0x5F7CEC,1, 0x5F0E38,110,2,0x5F0E38,1, 0x5F7AD4,110,2,0x5F7AD4,1, 0x5FDE38,120,2,0x5FDE38,1, 0x604ACC,120,2,0x604ACC,1>;
using def_t = void(CDummy *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDummy *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CDummy)
static int address;
static int global_address;
static const int id = 0x473B50;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x473B50, 0x473B50, 0x473B50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F0F40,100,2,0x5F0F40,1, 0x5F0E38,110,2,0x5F0E38,1, 0x5FDE38,120,2,0x5FDE38,1>;
using def_t = void(CDummy *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDummy *,int>, 0,1>;
META_END

}
