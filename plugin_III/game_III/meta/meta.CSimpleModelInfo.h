/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CSimpleModelInfo::GetRwObject)
static int address;
static int global_address;
static const int id = 0x4A9BA0;
static const bool is_virtual = true;
static const int vtable_index = 5;
using mv_addresses_t = MvAddresses<0x4A9BA0, 0x4A9C90, 0x4A9C20>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5FDFAC,100,2,0x5FDF98,1, 0x5FDFCC,100,2,0x5FDFB8,1, 0x5FDD80,110,2,0x5FDD80,1, 0x5FDDA0,110,2,0x5FDDA0,1, 0x60AD78,120,2,0x60AD78,1, 0x60AD98,120,2,0x60AD98,1>;
using def_t = RwObject *(CSimpleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSimpleModelInfo *>, 0>;
META_END

DTOR_META_BEGIN(CSimpleModelInfo)
static int address;
static int global_address;
static const int id = 0x50C140;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50C140, 0x50C230, 0x50C1C0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x50BC08,100,2,0,1, 0x50C12E,100,2,0,1, 0x50C1E3,100,2,0,1, 0x50BCF8,110,2,0,1, 0x50C21E,110,2,0,1, 0x50C2D3,110,2,0,1, 0x50BC88,120,2,0,1, 0x50C1AE,120,2,0,1, 0x50C263,120,2,0,1>;
using def_t = void(CSimpleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSimpleModelInfo *>, 0>;
META_END

CTOR_META_BEGIN(CSimpleModelInfo)
static int address;
static int global_address;
static const int id = 0x50C150;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50C150, 0x50C240, 0x50C1D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50BC0D,100,2,0,1, 0x50BCFD,110,2,0,1, 0x50BC8D,120,2,0,1>;
using def_t = CSimpleModelInfo *(CSimpleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSimpleModelInfo *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CSimpleModelInfo)
static int address;
static int global_address;
static const int id = 0x50C1D0;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x50C1D0, 0x50C2C0, 0x50C250>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FDF98,100,2,0x5FDF98,1, 0x5FDD80,110,2,0x5FDD80,1, 0x60AD78,120,2,0x60AD78,1>;
using def_t = void(CSimpleModelInfo *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSimpleModelInfo *,char>, 0,1>;
META_END

META_BEGIN(CSimpleModelInfo::SetAtomic)
static int address;
static int global_address;
static const int id = 0x517950;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x517950, 0x517B60, 0x517AF0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x476707,100,0,0x4766C0,1, 0x4768F1,100,0,0x4768C0,1, 0x476707,110,0,0x4766C0,1, 0x4768F1,110,0,0x4768C0,1, 0x476707,120,0,0x4766C0,1, 0x4768F1,120,0,0x4768C0,1>;
using def_t = void(CSimpleModelInfo *, int, RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSimpleModelInfo *,int,RpAtomic *>, 0,1,2>;
META_END

META_BEGIN(CSimpleModelInfo::Init)
static int address;
static int global_address;
static const int id = 0x517990;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x517990, 0x517BA0, 0x517B30>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x50B95D,100,0,0x50B920,1, 0x50B9F7,100,0,0x50B9C0,1, 0x50BA4D,110,0,0x50BA10,1, 0x50BAE7,110,0,0x50BAB0,1, 0x50B9DD,120,0,0x50B9A0,1, 0x50BA77,120,0,0x50BA40,1>;
using def_t = void(CSimpleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSimpleModelInfo *>, 0>;
META_END

META_BEGIN(CSimpleModelInfo::DeleteRwObject)
static int address;
static int global_address;
static const int id = 0x5179B0;
static const bool is_virtual = true;
static const int vtable_index = 2;
using mv_addresses_t = MvAddresses<0x5179B0, 0x517BC0, 0x517B50>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5FDFA0,100,2,0x5FDF98,1, 0x5FDFC0,100,2,0x5FDFB8,1, 0x5FDD80,110,2,0x5FDD80,1, 0x5FDDA0,110,2,0x5FDDA0,1, 0x60AD78,120,2,0x60AD78,1, 0x60AD98,120,2,0x60AD98,1>;
using def_t = void(CSimpleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSimpleModelInfo *>, 0>;
META_END

META_BEGIN(CSimpleModelInfo::GetAtomicFromDistance)
static int address;
static int global_address;
static const int id = 0x517A00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x517A00, 0x517C10, 0x517BA0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x4A9631,100,0,0x4A9350,1, 0x4A9768,100,0,0x4A9350,2, 0x4A9A7E,100,0,0x4A9920,1, 0x4A9B29,100,0,0x4A9920,2, 0x527FCE,100,0,0x527F70,1, 0x528124,100,0,0x528100,1, 0x4A9721,110,0,0x4A9440,1, 0x4A9858,110,0,0x4A9440,2, 0x4A9B6E,110,0,0x4A9A10,1, 0x4A9C19,110,0,0x4A9A10,2, 0x52820E,110,0,0x5281B0,1, 0x528364,110,0,0x528340,1, 0x4A96B1,120,0,0x4A93D0,1, 0x4A97E8,120,0,0x4A93D0,2, 0x4A9AFE,120,0,0x4A99A0,1, 0x4A9BA9,120,0,0x4A99A0,2, 0x52819E,120,0,0x528140,1, 0x5282F4,120,0,0x5282D0,1>;
using def_t = RpAtomic *(CSimpleModelInfo *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSimpleModelInfo *,float>, 0,1>;
META_END

META_BEGIN(CSimpleModelInfo::GetLargestLodDistance)
static int address;
static int global_address;
static const int id = 0x517A60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x517A60, 0x517C70, 0x517C00>;
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x407CE2,100,0,0x407C50,1, 0x47897E,100,0,0x4786B0,1, 0x4A95F8,100,0,0x4A9350,1, 0x4A960A,100,0,0x4A9350,2, 0x4A9721,100,0,0x4A9350,3, 0x4A97F6,100,0,0x4A9350,4, 0x4A98C5,100,0,0x4A9840,1, 0x4A98EC,100,0,0x4A9840,2, 0x517BD3,100,0,0x517B90,1, 0x528168,100,0,0x528100,1, 0x407CE2,110,0,0x407C50,1, 0x47897E,110,0,0x4786B0,1, 0x4A96E8,110,0,0x4A9440,1, 0x4A96FA,110,0,0x4A9440,2, 0x4A9811,110,0,0x4A9440,3, 0x4A98E6,110,0,0x4A9440,4, 0x4A99B5,110,0,0x4A9930,1, 0x4A99DC,110,0,0x4A9930,2, 0x517DE3,110,0,0x517DA0,1, 0x5283A8,110,0,0x528340,1, 0x407CE2,120,0,0x407C50,1, 0x47897E,120,0,0x4786B0,1, 0x4A9678,120,0,0x4A93D0,1, 0x4A968A,120,0,0x4A93D0,2, 0x4A97A1,120,0,0x4A93D0,3, 0x4A9876,120,0,0x4A93D0,4, 0x4A9945,120,0,0x4A98C0,1, 0x4A996C,120,0,0x4A98C0,2, 0x517D73,120,0,0x517D30,1, 0x528338,120,0,0x5282D0,1>;
using def_t = float(CSimpleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSimpleModelInfo *>, 0>;
META_END

META_BEGIN(CSimpleModelInfo::GetNearDistance)
static int address;
static int global_address;
static const int id = 0x517A90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x517A90, 0x517CA0, 0x517C30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A9A0B,100,0,0x4A9920,1, 0x4A9AFB,110,0,0x4A9A10,1, 0x4A9A8B,120,0,0x4A99A0,1>;
using def_t = float(CSimpleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSimpleModelInfo *>, 0>;
META_END

META_BEGIN(CSimpleModelInfo::SetLodDistances)
static int address;
static int global_address;
static const int id = 0x517AA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x517AA0, 0x517CB0, 0x517C40>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4771BE,100,0,0x477040,1, 0x4773F7,100,0,0x4772B0,1, 0x47763E,100,0,0x4774B0,1, 0x4771BE,110,0,0x477040,1, 0x4773F7,110,0,0x4772B0,1, 0x47763E,110,0,0x4774B0,1, 0x4771BE,120,0,0x477040,1, 0x4773F7,120,0,0x4772B0,1, 0x47763E,120,0,0x4774B0,1>;
using def_t = void(CSimpleModelInfo *, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSimpleModelInfo *,float *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CSimpleModelInfo::CreateInstance, RwObject *(CSimpleModelInfo::*)(RwMatrix *))
static int address;
static int global_address;
static const int id = 0x517AC0;
static const bool is_virtual = true;
static const int vtable_index = 4;
using mv_addresses_t = MvAddresses<0x517AC0, 0x517CD0, 0x517C60>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5FDFA8,100,2,0x5FDF98,1, 0x5FDFC8,100,2,0x5FDFB8,1, 0x5FDD80,110,2,0x5FDD80,1, 0x5FDDA0,110,2,0x5FDDA0,1, 0x60AD78,120,2,0x60AD78,1, 0x60AD98,120,2,0x60AD98,1>;
using def_t = RwObject *(CSimpleModelInfo *, RwMatrix *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSimpleModelInfo *,RwMatrix *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CSimpleModelInfo::CreateInstance, RwObject *(CSimpleModelInfo::*)())
static int address;
static int global_address;
static const int id = 0x517B60;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x517B60, 0x517D70, 0x517D00>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5FDFA4,100,2,0x5FDF98,1, 0x5FDFC4,100,2,0x5FDFB8,1, 0x5FDD80,110,2,0x5FDD80,1, 0x5FDDA0,110,2,0x5FDDA0,1, 0x60AD78,120,2,0x60AD78,1, 0x60AD98,120,2,0x60AD98,1>;
using def_t = RwObject *(CSimpleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSimpleModelInfo *>, 0>;
META_END

META_BEGIN(CSimpleModelInfo::SetupBigBuilding)
static int address;
static int global_address;
static const int id = 0x517B90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x517B90, 0x517DA0, 0x517D30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x476D96,100,0,0x476AC0,1, 0x476D96,110,0,0x476AC0,1, 0x476D96,120,0,0x476AC0,1>;
using def_t = void(CSimpleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSimpleModelInfo *>, 0>;
META_END

META_BEGIN(CSimpleModelInfo::FindRelatedModel)
static int address;
static int global_address;
static const int id = 0x517C00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x517C00, 0x517E10, 0x517DA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x517BC7,100,0,0x517B90,1, 0x517DD7,110,0,0x517DA0,1, 0x517D67,120,0,0x517D30,1>;
using def_t = void(CSimpleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSimpleModelInfo *>, 0>;
META_END

META_BEGIN(CSimpleModelInfo::IncreaseAlpha)
static int address;
static int global_address;
static const int id = 0x517C60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x517C60, 0x517E70, 0x517E00>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4A966B,100,0,0x4A9350,1, 0x4A979E,100,0,0x4A9350,2, 0x4A975B,110,0,0x4A9440,1, 0x4A988E,110,0,0x4A9440,2, 0x4A96EB,120,0,0x4A93D0,1, 0x4A981E,120,0,0x4A93D0,2>;
using def_t = void(CSimpleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSimpleModelInfo *>, 0>;
META_END

}
