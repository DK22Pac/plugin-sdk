/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CClumpModelInfo::DeleteRwObject)
static int address;
static int global_address;
static const int id = 0x4F8800;
static const bool is_virtual = true;
static const int vtable_index = 2;
using mv_addresses_t = MvAddresses<0x4F8800, 0x4F88E0, 0x4F8870>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x510284,100,0,0x510280,1, 0x51FDFD,100,0,0x51FDC0,1, 0x5FDF7C,100,2,0x5FDF74,1, 0x5FE028,100,2,0x5FE020,1, 0x5FE04C,100,2,0x5FE044,1, 0x510474,110,0,0x510470,1, 0x52002D,110,0,0x51FFF0,1, 0x5FDD5C,110,2,0x5FDD5C,1, 0x5FDE08,110,2,0x5FDE08,1, 0x5FDE2C,110,2,0x5FDE2C,1, 0x510404,120,0,0x510400,1, 0x51FFBD,120,0,0x51FF80,1, 0x60AD54,120,2,0x60AD54,1, 0x60AE00,120,2,0x60AE00,1, 0x60AE24,120,2,0x60AE24,1>;
using def_t = void(CClumpModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CClumpModelInfo *>, 0>;
META_END

META_BEGIN(CClumpModelInfo::SetClump)
static int address;
static int global_address;
static const int id = 0x4F8830;
static const bool is_virtual = true;
static const int vtable_index = 6;
using mv_addresses_t = MvAddresses<0x4F8830, 0x4F8910, 0x4F88A0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x51021A,100,0,0x510210,1, 0x51FC68,100,0,0x51FC60,1, 0x5FDF8C,100,2,0x5FDF74,1, 0x5FE038,100,2,0x5FE020,1, 0x51040A,110,0,0x510400,1, 0x51FE98,110,0,0x51FE90,1, 0x5FDD5C,110,2,0x5FDD5C,1, 0x5FDE08,110,2,0x5FDE08,1, 0x51039A,120,0,0x510390,1, 0x51FE28,120,0,0x51FE20,1, 0x60AD54,120,2,0x60AD54,1, 0x60AE00,120,2,0x60AE00,1>;
using def_t = void(CClumpModelInfo *, RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CClumpModelInfo *,RpClump *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CClumpModelInfo::CreateInstance, RwObject *(CClumpModelInfo::*)(RwMatrix *))
static int address;
static int global_address;
static const int id = 0x4F88A0;
static const bool is_virtual = true;
static const int vtable_index = 4;
using mv_addresses_t = MvAddresses<0x4F88A0, 0x4F8980, 0x4F8910>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x5FDF84,100,2,0x5FDF74,1, 0x5FDFE8,100,2,0x5FDFD8,1, 0x5FE00C,100,2,0x5FDFFC,1, 0x5FE030,100,2,0x5FE020,1, 0x5FE054,100,2,0x5FE044,1, 0x5FDD5C,110,2,0x5FDD5C,1, 0x5FDDC0,110,2,0x5FDDC0,1, 0x5FDDE4,110,2,0x5FDDE4,1, 0x5FDE08,110,2,0x5FDE08,1, 0x5FDE2C,110,2,0x5FDE2C,1, 0x60AD54,120,2,0x60AD54,1, 0x60ADB8,120,2,0x60ADB8,1, 0x60ADDC,120,2,0x60ADDC,1, 0x60AE00,120,2,0x60AE00,1, 0x60AE24,120,2,0x60AE24,1>;
using def_t = RwObject *(CClumpModelInfo *, RwMatrix *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CClumpModelInfo *,RwMatrix *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CClumpModelInfo::CreateInstance, RwObject *(CClumpModelInfo::*)())
static int address;
static int global_address;
static const int id = 0x4F8920;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x4F8920, 0x4F8A00, 0x4F8990>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x51FCB9,100,0,0x51FCB0,1, 0x5FDF80,100,2,0x5FDF74,1, 0x5FE008,100,2,0x5FDFFC,1, 0x5FE02C,100,2,0x5FE020,1, 0x51FEE9,110,0,0x51FEE0,1, 0x5FDD5C,110,2,0x5FDD5C,1, 0x5FDDE4,110,2,0x5FDDE4,1, 0x5FDE08,110,2,0x5FDE08,1, 0x51FE79,120,0,0x51FE70,1, 0x60AD54,120,2,0x60AD54,1, 0x60ADDC,120,2,0x60ADDC,1, 0x60AE00,120,2,0x60AE00,1>;
using def_t = RwObject *(CClumpModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CClumpModelInfo *>, 0>;
META_END

META_BEGIN(CClumpModelInfo::SetAtomicRendererCB)
static int address;
static int global_address;
static const int id = 0x4F8940;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F8940, 0x4F8A20, 0x4F89B0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x4F8852,100,2,0,1, 0x4F8885,100,2,0,1, 0x51025E,100,2,0,1, 0x5103E6,100,2,0,1, 0x5103F9,100,2,0,1, 0x59BC80,100,2,0,1, 0x4F8932,110,2,0,1, 0x4F8965,110,2,0,1, 0x51044E,110,2,0,1, 0x5105D6,110,2,0,1, 0x5105E9,110,2,0,1, 0x59BF40,110,2,0,1, 0x4F88C2,120,2,0,1, 0x4F88F5,120,2,0,1, 0x5103DE,120,2,0,1, 0x510566,120,2,0,1, 0x510579,120,2,0,1, 0x599030,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,void *>, 0,1>;
META_END

META_BEGIN(CClumpModelInfo::FindFrameFromNameCB)
static int address;
static int global_address;
static const int id = 0x4F8960;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F8960, 0x4F8A40, 0x4F89D0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4F89E8,100,2,0,1, 0x510552,100,2,0,1, 0x4F8AC8,110,2,0,1, 0x510742,110,2,0,1, 0x4F8A58,120,2,0,1, 0x5106D2,120,2,0,1>;
using def_t = RwFrame *(RwFrame *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwFrame *,void *>, 0,1>;
META_END

META_BEGIN(CClumpModelInfo::FindFrameFromNameWithoutIdCB)
static int address;
static int global_address;
static const int id = 0x4F8A10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F8A10, 0x4F8AF0, 0x4F8A80>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4F8AA7,100,2,0,1, 0x4F8BE2,100,2,0,1, 0x520543,100,2,0,1, 0x4F8B87,110,2,0,1, 0x4F8CC2,110,2,0,1, 0x520773,110,2,0,1, 0x4F8B17,120,2,0,1, 0x4F8C52,120,2,0,1, 0x520703,120,2,0,1>;
using def_t = RwFrame *(RwFrame *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwFrame *,void *>, 0,1>;
META_END

META_BEGIN(CClumpModelInfo::FindFrameFromIdCB)
static int address;
static int global_address;
static const int id = 0x4F8AD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F8AD0, 0x4F8BB0, 0x4F8B40>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4F8AF2,100,2,0,1, 0x4F8B6E,100,2,0,1, 0x510580,100,2,0,1, 0x5206BE,100,2,0,1, 0x4F8BD2,110,2,0,1, 0x4F8C4E,110,2,0,1, 0x510770,110,2,0,1, 0x5208EE,110,2,0,1, 0x4F8B62,120,2,0,1, 0x4F8BDE,120,2,0,1, 0x510700,120,2,0,1, 0x52087E,120,2,0,1>;
using def_t = RwFrame *(RwFrame *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwFrame *,void *>, 0,1>;
META_END

META_BEGIN(CClumpModelInfo::FillFrameArrayCB)
static int address;
static int global_address;
static const int id = 0x4F8B20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F8B20, 0x4F8C00, 0x4F8B90>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4F8B3A,100,2,0,1, 0x4F8B9D,100,2,0,1, 0x4F8C1A,110,2,0,1, 0x4F8C7D,110,2,0,1, 0x4F8BAA,120,2,0,1, 0x4F8C0D,120,2,0,1>;
using def_t = RwFrame *(RwFrame *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwFrame *,void *>, 0,1>;
META_END

META_BEGIN(CClumpModelInfo::GetFrameFromId)
static int address;
static int global_address;
static const int id = 0x4F8B50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F8B50, 0x4F8C30, 0x4F8BC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x520855,100,0,0x520840,1, 0x520A85,110,0,0x520A70,1, 0x520A15,120,0,0x520A00,1>;
using def_t = RwFrame *(RpClump *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *,int>, 0,1>;
META_END

META_BEGIN(CClumpModelInfo::FillFrameArray)
static int address;
static int global_address;
static const int id = 0x4F8B90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F8B90, 0x4F8C70, 0x4F8C00>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x52D1FC,100,0,0x52D1B0,1, 0x53E803,100,0,0x53E7D0,1, 0x547528,100,0,0x5474C0,1, 0x54E4A6,100,0,0x54E470,1, 0x52D43C,110,0,0x52D3F0,1, 0x53EA43,110,0,0x53EA10,1, 0x547728,110,0,0x5476C0,1, 0x54E5E6,110,0,0x54E5B0,1, 0x52D3CC,120,0,0x52D380,1, 0x53E9F3,120,0,0x53E9C0,1, 0x5476D8,120,0,0x547670,1, 0x54E596,120,0,0x54E560,1>;
using def_t = void(RpClump *, RwFrame **);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *,RwFrame **>, 0,1>;
META_END

META_BEGIN(CClumpModelInfo::SetFrameIds)
static int address;
static int global_address;
static const int id = 0x4F8BB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F8BB0, 0x4F8C90, 0x4F8C20>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x510226,100,0,0x510210,1, 0x51FC81,100,0,0x51FC60,1, 0x510416,110,0,0x510400,1, 0x51FEB1,110,0,0x51FE90,1, 0x5103A6,120,0,0x510390,1, 0x51FE41,120,0,0x51FE20,1>;
using def_t = void(CClumpModelInfo *, RwObjectNameIdAssocation *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CClumpModelInfo *,RwObjectNameIdAssocation *>, 0,1>;
META_END

DTOR_META_BEGIN(CClumpModelInfo)
static int address;
static int global_address;
static const int id = 0x50C030;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50C030, 0x50C120, 0x50C0B0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x50BCBC,100,2,0,1, 0x50C01B,100,2,0,1, 0x50C333,100,2,0,1, 0x50BDAC,110,2,0,1, 0x50C10B,110,2,0,1, 0x50C423,110,2,0,1, 0x50BD3C,120,2,0,1, 0x50C09B,120,2,0,1, 0x50C3B3,120,2,0,1>;
using def_t = void(CClumpModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CClumpModelInfo *>, 0>;
META_END

CTOR_META_BEGIN(CClumpModelInfo)
static int address;
static int global_address;
static const int id = 0x50C040;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50C040, 0x50C130, 0x50C0C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50BCC1,100,2,0,1, 0x50BDB1,110,2,0,1, 0x50BD41,120,2,0,1>;
using def_t = CClumpModelInfo *(CClumpModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CClumpModelInfo *>, 0>;
META_END

META_BEGIN(CClumpModelInfo::GetRwObject)
static int address;
static int global_address;
static const int id = 0x50C1C0;
static const bool is_virtual = true;
static const int vtable_index = 5;
using mv_addresses_t = MvAddresses<0x50C1C0, 0x50C2B0, 0x50C240>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x5FDF88,100,2,0x5FDF74,1, 0x5FDFEC,100,2,0x5FDFD8,1, 0x5FE010,100,2,0x5FDFFC,1, 0x5FE034,100,2,0x5FE020,1, 0x5FE058,100,2,0x5FE044,1, 0x5FDD5C,110,2,0x5FDD5C,1, 0x5FDDC0,110,2,0x5FDDC0,1, 0x5FDDE4,110,2,0x5FDDE4,1, 0x5FDE08,110,2,0x5FDE08,1, 0x5FDE2C,110,2,0x5FDE2C,1, 0x60AD54,120,2,0x60AD54,1, 0x60ADB8,120,2,0x60ADB8,1, 0x60ADDC,120,2,0x60ADDC,1, 0x60AE00,120,2,0x60AE00,1, 0x60AE24,120,2,0x60AE24,1>;
using def_t = RwObject *(CClumpModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CClumpModelInfo *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CClumpModelInfo)
static int address;
static int global_address;
static const int id = 0x50C320;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x50C320, 0x50C410, 0x50C3A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FE020,100,2,0x5FE020,1, 0x5FDE08,110,2,0x5FDE08,1, 0x60AE00,120,2,0x60AE00,1>;
using def_t = void(CClumpModelInfo *, char *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CClumpModelInfo *,char *>, 0,1>;
META_END

}
