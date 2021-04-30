/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

DTOR_META_BEGIN(CTimeModelInfo)
static int address;
static int global_address;
static const int id = 0x50C080;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50C080, 0x50C170, 0x50C100>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x50BC80,100,2,0,1, 0x50C06B,100,2,0,1, 0x50C223,100,2,0,1, 0x50BD70,110,2,0,1, 0x50C15B,110,2,0,1, 0x50C313,110,2,0,1, 0x50BD00,120,2,0,1, 0x50C0EB,120,2,0,1, 0x50C2A3,120,2,0,1>;
using def_t = void(CTimeModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTimeModelInfo *>, 0>;
META_END

CTOR_META_BEGIN(CTimeModelInfo)
static int address;
static int global_address;
static const int id = 0x50C0A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50C0A0, 0x50C190, 0x50C120>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50BC85,100,2,0,1, 0x50BD75,110,2,0,1, 0x50BD05,120,2,0,1>;
using def_t = CTimeModelInfo *(CTimeModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTimeModelInfo *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CTimeModelInfo)
static int address;
static int global_address;
static const int id = 0x50C210;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x50C210, 0x50C300, 0x50C290>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FDFB8,100,2,0x5FDFB8,1, 0x5FDDA0,110,2,0x5FDDA0,1, 0x60AD98,120,2,0x60AD98,1>;
using def_t = void(CTimeModelInfo *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTimeModelInfo *,int>, 0,1>;
META_END

META_BEGIN(CTimeModelInfo::FindOtherTimeModel)
static int address;
static int global_address;
static const int id = 0x517C80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x517C80, 0x517E90, 0x517E20>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x47770F,100,0,0x4774B0,1, 0x47770F,110,0,0x4774B0,1, 0x47770F,120,0,0x4774B0,1>;
using def_t = CTimeModelInfo *(CTimeModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTimeModelInfo *>, 0>;
META_END

}
