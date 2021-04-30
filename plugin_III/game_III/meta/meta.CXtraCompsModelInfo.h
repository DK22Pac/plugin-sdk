/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

DTOR_META_BEGIN(CXtraCompsModelInfo)
static int address;
static int global_address;
static const int id = 0x50BEF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BEF0, 0x50BFE0, 0x50BF70>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x50BD73,100,2,0,1, 0x50BEDB,100,2,0,1, 0x50C373,100,2,0,1, 0x50BE63,110,2,0,1, 0x50BFCB,110,2,0,1, 0x50C463,110,2,0,1, 0x50BDF3,120,2,0,1, 0x50BF5B,120,2,0,1, 0x50C3F3,120,2,0,1>;
using def_t = void(CXtraCompsModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CXtraCompsModelInfo *>, 0>;
META_END

CTOR_META_BEGIN(CXtraCompsModelInfo)
static int address;
static int global_address;
static const int id = 0x50BF10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BF10, 0x50C000, 0x50BF90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50BD78,100,2,0,1, 0x50BE68,110,2,0,1, 0x50BDF8,120,2,0,1>;
using def_t = CXtraCompsModelInfo *(CXtraCompsModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CXtraCompsModelInfo *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CXtraCompsModelInfo)
static int address;
static int global_address;
static const int id = 0x50C360;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x50C360, 0x50C450, 0x50C3E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FE044,100,2,0x5FE044,1, 0x5FDE2C,110,2,0x5FDE2C,1, 0x60AE24,120,2,0x60AE24,1>;
using def_t = void(CXtraCompsModelInfo *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CXtraCompsModelInfo *,int>, 0,1>;
META_END

META_BEGIN(CXtraCompsModelInfo::CreateInstance)
static int address;
static int global_address;
static const int id = 0x50C3B0;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x50C3B0, 0x50C4A0, 0x50C430>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FE050,100,2,0x5FE044,1, 0x5FDE2C,110,2,0x5FDE2C,1, 0x60AE24,120,2,0x60AE24,1>;
using def_t = RwObject *(CXtraCompsModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CXtraCompsModelInfo *>, 0>;
META_END

META_BEGIN(CXtraCompsModelInfo::SetClump)
static int address;
static int global_address;
static const int id = 0x524BA0;
static const bool is_virtual = true;
static const int vtable_index = 6;
using mv_addresses_t = MvAddresses<0x524BA0, 0x524DE0, 0x524D70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FE05C,100,2,0x5FE044,1, 0x5FDE2C,110,2,0x5FDE2C,1, 0x60AE24,120,2,0x60AE24,1>;
using def_t = void(CXtraCompsModelInfo *, RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CXtraCompsModelInfo *,RpClump *>, 0,1>;
META_END

META_BEGIN(CXtraCompsModelInfo::Shutdown)
static int address;
static int global_address;
static const int id = 0x524BB0;
static const bool is_virtual = true;
static const int vtable_index = 1;
using mv_addresses_t = MvAddresses<0x524BB0, 0x524DF0, 0x524D80>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FE048,100,2,0x5FE044,1, 0x5FDE2C,110,2,0x5FDE2C,1, 0x60AE24,120,2,0x60AE24,1>;
using def_t = void(CXtraCompsModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CXtraCompsModelInfo *>, 0>;
META_END

}
