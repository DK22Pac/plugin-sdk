/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CMloModelInfo::ConstructClump)
static int address;
static int global_address;
static const int id = 0x50B1A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50B1A0, 0x50B280, 0x50B210>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FDF68,100,2,0,1, 0x5FDD50,110,2,0,1, 0x60AD48,120,2,0,1>;
using def_t = void(CMloModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMloModelInfo *>, 0>;
META_END

DTOR_META_BEGIN(CMloModelInfo)
static int address;
static int global_address;
static const int id = 0x50C0E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50C0E0, 0x50C1D0, 0x50C160>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x50BC44,100,2,0,1, 0x50C0CB,100,2,0,1, 0x50C183,100,2,0,1, 0x50BD34,110,2,0,1, 0x50C1BB,110,2,0,1, 0x50C273,110,2,0,1, 0x50BCC4,120,2,0,1, 0x50C14B,120,2,0,1, 0x50C203,120,2,0,1>;
using def_t = void(CMloModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMloModelInfo *>, 0>;
META_END

CTOR_META_BEGIN(CMloModelInfo)
static int address;
static int global_address;
static const int id = 0x50C100;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50C100, 0x50C1F0, 0x50C180>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50BC49,100,2,0,1, 0x50BD39,110,2,0,1, 0x50BCC9,120,2,0,1>;
using def_t = CMloModelInfo *(CMloModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMloModelInfo *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CMloModelInfo)
static int address;
static int global_address;
static const int id = 0x50C170;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x50C170, 0x50C260, 0x50C1F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FDF74,100,2,0x5FDF74,1, 0x5FDD5C,110,2,0x5FDD5C,1, 0x60AD54,120,2,0x60AD54,1>;
using def_t = void(CMloModelInfo *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMloModelInfo *,char>, 0,1>;
META_END

}
