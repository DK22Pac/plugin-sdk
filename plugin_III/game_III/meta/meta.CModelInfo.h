/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CModelInfo::Initialise)
static int address;
static int global_address;
static const int id = 0x50B310;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50B310, 0x50B3F0, 0x50B380>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C019,100,0,0x48BED0,1, 0x48C109,110,0,0x48BFC0,1, 0x48C099,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CModelInfo::ReInit2dEffects)
static int address;
static int global_address;
static const int id = 0x50B580;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50B580, 0x50B660, 0x50B5F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x476F38,100,0,0x476F30,1, 0x476F38,110,0,0x476F30,1, 0x476F38,120,0,0x476F30,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CModelInfo::ShutDown)
static int address;
static int global_address;
static const int id = 0x50B5B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50B5B0, 0x50B690, 0x50B620>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C43C,100,0,0x48C3A0,1, 0x48C52C,110,0,0x48C490,1, 0x48C4BC,120,0,0x48C420,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CModelInfo::GetModelInfo)
static int address;
static int global_address;
static const int id = 0x50B860;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50B860, 0x50B950, 0x50B8E0>;
// total references count: 10en (20), 11en (20), steam (20)
using refs_t = RefList<0x406B77,100,0,0x406430,1, 0x406B88,100,0,0x406430,2, 0x406B99,100,0,0x406430,3, 0x406BAA,100,0,0x406430,4, 0x406BBB,100,0,0x406430,5, 0x406E83,100,0,0x406DA0,1, 0x40A913,100,0,0x40A890,1, 0x40AE11,100,0,0x40ADF0,1, 0x40AE34,100,0,0x40ADF0,2, 0x43563D,100,0,0x435630,1, 0x43566A,100,0,0x435630,2, 0x4766F2,100,0,0x4766C0,1, 0x476879,100,0,0x476810,1, 0x478B8D,100,0,0x478B20,1, 0x4910D2,100,0,0x4910B0,1, 0x4BC228,100,0,0x4BC0E0,1, 0x4F3950,100,0,0x4F3870,1, 0x5215D5,100,0,0x521260,1, 0x54F0B8,100,0,0x54F000,1, 0x5898F3,100,0,0x588490,1, 0x406B77,110,0,0x406430,1, 0x406B88,110,0,0x406430,2, 0x406B99,110,0,0x406430,3, 0x406BAA,110,0,0x406430,4, 0x406BBB,110,0,0x406430,5, 0x406E83,110,0,0x406DA0,1, 0x40A913,110,0,0x40A890,1, 0x40AE11,110,0,0x40ADF0,1, 0x40AE34,110,0,0x40ADF0,2, 0x43563D,110,0,0x435630,1, 0x43566A,110,0,0x435630,2, 0x4766F2,110,0,0x4766C0,1, 0x476879,110,0,0x476810,1, 0x478B8D,110,0,0x478B20,1, 0x491192,110,0,0x491170,1, 0x4BC318,110,0,0x4BC1D0,1, 0x4F3A00,110,0,0x4F3920,1, 0x521805,110,0,0x521490,1, 0x54F1F8,110,0,0x54F140,1, 0x589C33,110,0,0x5887D0,1, 0x406B77,120,0,0x406430,1, 0x406B88,120,0,0x406430,2, 0x406B99,120,0,0x406430,3, 0x406BAA,120,0,0x406430,4, 0x406BBB,120,0,0x406430,5, 0x406E83,120,0,0x406DA0,1, 0x40A913,120,0,0x40A890,1, 0x40AE11,120,0,0x40ADF0,1, 0x40AE34,120,0,0x40ADF0,2, 0x43563D,120,0,0x435630,1, 0x43566A,120,0,0x435630,2, 0x4766F2,120,0,0x4766C0,1, 0x476879,120,0,0x476810,1, 0x478B8D,120,0,0x478B20,1, 0x491122,120,0,0x491100,1, 0x4BC2A8,120,0,0x4BC160,1, 0x4F3990,120,0,0x4F38B0,1, 0x521795,120,0,0x521420,1, 0x54F1A8,120,0,0x54F0F0,1, 0x589B23,120,0,0x5886C0,1>;
using def_t = CBaseModelInfo *(char const *, int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<char const *,int *>, 0,1>;
META_END

META_BEGIN(CModelInfo::AddSimpleModel)
static int address;
static int global_address;
static const int id = 0x50B920;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50B920, 0x50BA10, 0x50B9A0>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x477198,100,0,0x477040,1, 0x50B400,100,0,0x50B310,1, 0x50B42F,100,0,0x50B310,2, 0x50B45E,100,0,0x50B310,3, 0x50B48D,100,0,0x50B310,4, 0x50B4BC,100,0,0x50B310,5, 0x50B4EB,100,0,0x50B310,6, 0x50B51A,100,0,0x50B310,7, 0x50B549,100,0,0x50B310,8, 0x477198,110,0,0x477040,1, 0x50B4E0,110,0,0x50B3F0,1, 0x50B50F,110,0,0x50B3F0,2, 0x50B53E,110,0,0x50B3F0,3, 0x50B56D,110,0,0x50B3F0,4, 0x50B59C,110,0,0x50B3F0,5, 0x50B5CB,110,0,0x50B3F0,6, 0x50B5FA,110,0,0x50B3F0,7, 0x50B629,110,0,0x50B3F0,8, 0x477198,120,0,0x477040,1, 0x50B470,120,0,0x50B380,1, 0x50B49F,120,0,0x50B380,2, 0x50B4CE,120,0,0x50B380,3, 0x50B4FD,120,0,0x50B380,4, 0x50B52C,120,0,0x50B380,5, 0x50B55B,120,0,0x50B380,6, 0x50B58A,120,0,0x50B380,7, 0x50B5B9,120,0,0x50B380,8>;
using def_t = CSimpleModelInfo *(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CModelInfo::AddMloModel)
static int address;
static int global_address;
static const int id = 0x50B970;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50B970, 0x50BA60, 0x50B9F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x47777F,100,0,0x477750,1, 0x47777F,110,0,0x477750,1, 0x47777F,120,0,0x477750,1>;
using def_t = CMloModelInfo *(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CModelInfo::AddTimeModel)
static int address;
static int global_address;
static const int id = 0x50B9C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50B9C0, 0x50BAB0, 0x50BA40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x477618,100,0,0x4774B0,1, 0x477618,110,0,0x4774B0,1, 0x477618,120,0,0x4774B0,1>;
using def_t = CTimeModelInfo *(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CModelInfo::AddClumpModel)
static int address;
static int global_address;
static const int id = 0x50BA10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BA10, 0x50BB00, 0x50BA90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x477955,100,0,0x477920,1, 0x477955,110,0,0x477920,1, 0x477955,120,0,0x477920,1>;
using def_t = CClumpModelInfo *(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CModelInfo::AddVehicleModel)
static int address;
static int global_address;
static const int id = 0x50BA60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BA60, 0x50BB50, 0x50BAE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4779FB,100,0,0x477990,1, 0x4779FB,110,0,0x477990,1, 0x4779FB,120,0,0x477990,1>;
using def_t = CVehicleModelInfo *(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CModelInfo::AddPedModel)
static int address;
static int global_address;
static const int id = 0x50BAD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BAD0, 0x50BBC0, 0x50BB50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x477E34,100,0,0x477DE0,1, 0x477E34,110,0,0x477DE0,1, 0x477E34,120,0,0x477DE0,1>;
using def_t = CPedModelInfo *(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CModelInfo::GetMloInstanceStore)
static int address;
static int global_address;
static const int id = 0x50BB20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BB20, 0x50BC10, 0x50BBA0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x47779E,100,0,0x477750,1, 0x47785E,100,0,0x4777C0,1, 0x50B1E0,100,0,0x50B1A0,1, 0x50B1E9,100,0,0x50B1A0,2, 0x47779E,110,0,0x477750,1, 0x47785E,110,0,0x4777C0,1, 0x50B2C0,110,0,0x50B280,1, 0x50B2C9,110,0,0x50B280,2, 0x47779E,120,0,0x477750,1, 0x47785E,120,0,0x4777C0,1, 0x50B250,120,0,0x50B210,1, 0x50B259,120,0,0x50B210,2>;
using def_t = CStore<CInstance, 1> *();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CModelInfo::Get2dEffectStore)
static int address;
static int global_address;
static const int id = 0x50BB30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BB30, 0x50BC20, 0x50BBB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x47814B,100,0,0x4780E0,1, 0x47814B,110,0,0x4780E0,1, 0x47814B,120,0,0x4780E0,1>;
using def_t = CStore<C2dEffect, 2000> *();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CModelInfo::ConstructMloClumps)
static int address;
static int global_address;
static const int id = 0x50BB40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BB40, 0x50BC30, 0x50BBC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x476468,100,0,0x476290,1, 0x476468,110,0,0x476290,1, 0x476468,120,0,0x476290,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CModelInfo::IsBoatModel)
static int address;
static int global_address;
static const int id = 0x50BB90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BB90, 0x50BC80, 0x50BC10>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x43C489,100,0,0x43AEA0,1, 0x542739,100,0,0x5426E0,1, 0x43C489,110,0,0x43AEA0,1, 0x542979,110,0,0x542920,1, 0x43C489,120,0,0x43AEA0,1, 0x542929,120,0,0x5428D0,1>;
using def_t = bool(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CModelInfo::RemoveColModelsFromOtherLevels)
static int address;
static int global_address;
static const int id = 0x50BBC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BBC0, 0x50BCB0, 0x50BC40>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x40B853,100,0,0x40B5B0,1, 0x40B910,100,0,0x40B900,1, 0x435656,100,0,0x435630,1, 0x48C35D,100,0,0x48BED0,1, 0x40B853,110,0,0x40B5B0,1, 0x40B910,110,0,0x40B900,1, 0x435656,110,0,0x435630,1, 0x48C44D,110,0,0x48BFC0,1, 0x40B853,120,0,0x40B5B0,1, 0x40B910,120,0,0x40B900,1, 0x435656,120,0,0x435630,1, 0x48C3DD,120,0,0x48BF50,1>;
using def_t = void(eLevelName);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<eLevelName>, 0>;
META_END

}
