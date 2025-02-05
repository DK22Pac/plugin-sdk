/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CVisibilityPlugins::AtomicConstructor)
static int address;
static int global_address;
static const int id = 0x527CC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527CC0, 0x527F00, 0x527E90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x527DCB,100,2,0,1, 0x52800B,110,2,0,1, 0x527F9B,120,2,0,1>;
using def_t = void *(void *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,RwInt32,RwInt32>, 0,1,2>;
META_END

META_BEGIN(CVisibilityPlugins::AtomicCopyConstructor)
static int address;
static int global_address;
static const int id = 0x527CE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527CE0, 0x527F20, 0x527EB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x527DC1,100,2,0,1, 0x528001,110,2,0,1, 0x527F91,120,2,0,1>;
using def_t = void *(void *, void const *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,void const *,RwInt32,RwInt32>, 0,1,2,3>;
META_END

META_BEGIN(CVisibilityPlugins::AtomicDestructor)
static int address;
static int global_address;
static const int id = 0x527D00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527D00, 0x527F40, 0x527ED0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x527DC6,100,2,0,1, 0x528006,110,2,0,1, 0x527F96,120,2,0,1>;
using def_t = void *(void *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,RwInt32,RwInt32>, 0,1,2>;
META_END

META_BEGIN(CVisibilityPlugins::FrameConstructor)
static int address;
static int global_address;
static const int id = 0x527D10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527D10, 0x527F50, 0x527EE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x527DEE,100,2,0,1, 0x52802E,110,2,0,1, 0x527FBE,120,2,0,1>;
using def_t = void *(void *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,RwInt32,RwInt32>, 0,1,2>;
META_END

META_BEGIN(CVisibilityPlugins::FrameCopyConstructor)
static int address;
static int global_address;
static const int id = 0x527D30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527D30, 0x527F70, 0x527F00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x527DE4,100,2,0,1, 0x528024,110,2,0,1, 0x527FB4,120,2,0,1>;
using def_t = void *(void *, void const *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,void const *,RwInt32,RwInt32>, 0,1,2,3>;
META_END

META_BEGIN(CVisibilityPlugins::FrameDestructor)
static int address;
static int global_address;
static const int id = 0x527D50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527D50, 0x527F90, 0x527F20>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x527DE9,100,2,0,1, 0x528029,110,2,0,1, 0x527FB9,120,2,0,1>;
using def_t = void *(void *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,RwInt32,RwInt32>, 0,1,2>;
META_END

META_BEGIN(CVisibilityPlugins::ClumpConstructor)
static int address;
static int global_address;
static const int id = 0x527D60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527D60, 0x527FA0, 0x527F30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x527E11,100,2,0,1, 0x528051,110,2,0,1, 0x527FE1,120,2,0,1>;
using def_t = void *(void *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,RwInt32,RwInt32>, 0,1,2>;
META_END

META_BEGIN(CVisibilityPlugins::ClumpCopyConstructor)
static int address;
static int global_address;
static const int id = 0x527D90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527D90, 0x527FD0, 0x527F60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x527E07,100,2,0,1, 0x528047,110,2,0,1, 0x527FD7,120,2,0,1>;
using def_t = void *(void *, void const *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,void const *,RwInt32,RwInt32>, 0,1,2,3>;
META_END

META_BEGIN(CVisibilityPlugins::ClumpDestructor)
static int address;
static int global_address;
static const int id = 0x527DB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527DB0, 0x527FF0, 0x527F80>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x527E0C,100,2,0,1, 0x52804C,110,2,0,1, 0x527FDC,120,2,0,1>;
using def_t = void *(void *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,RwInt32,RwInt32>, 0,1,2>;
META_END

META_BEGIN(CVisibilityPlugins::PluginAttach)
static int address;
static int global_address;
static const int id = 0x527DC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527DC0, 0x528000, 0x527F90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48D4D0,100,0,0x48D470,1, 0x48D5D0,110,0,0x48D570,1, 0x48D560,120,0,0x48D500,1>;
using def_t = bool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CVisibilityPlugins::Initialise)
static int address;
static int global_address;
static const int id = 0x527E50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527E50, 0x528090, 0x528020>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48BBAD,100,0,0x48BBA0,1, 0x48BC9D,110,0,0x48BC90,1, 0x48BC2D,120,0,0x48BC20,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CVisibilityPlugins::Shutdown)
static int address;
static int global_address;
static const int id = 0x527EA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527EA0, 0x5280E0, 0x528070>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48BD39,100,0,0x48BCB0,1, 0x48BE29,110,0,0x48BDA0,1, 0x48BDB9,120,0,0x48BD30,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CVisibilityPlugins::SetAtomicModelInfo)
static int address;
static int global_address;
static const int id = 0x527EC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527EC0, 0x528100, 0x528090>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x476725,100,0,0x4766C0,1, 0x476918,100,0,0x4768C0,1, 0x476725,110,0,0x4766C0,1, 0x476918,110,0,0x4768C0,1, 0x476725,120,0,0x4766C0,1, 0x476918,120,0,0x4768C0,1>;
using def_t = void(RpAtomic *, CSimpleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,CSimpleModelInfo *>, 0,1>;
META_END

META_BEGIN(CVisibilityPlugins::GetAtomicModelInfo)
static int address;
static int global_address;
static const int id = 0x527F00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527F00, 0x528140, 0x5280D0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x4CF956,100,0,0x4CF950,1, 0x518C39,100,0,0x518BF0,1, 0x527F7A,100,0,0x527F70,1, 0x52800A,100,0,0x528000,1, 0x52810C,100,0,0x528100,1, 0x4CF9F6,110,0,0x4CF9F0,1, 0x518E69,110,0,0x518E20,1, 0x5281BA,110,0,0x5281B0,1, 0x52824A,110,0,0x528240,1, 0x52834C,110,0,0x528340,1, 0x4CF986,120,0,0x4CF980,1, 0x518DF9,120,0,0x518DB0,1, 0x52814A,120,0,0x528140,1, 0x5281DA,120,0,0x5281D0,1, 0x5282DC,120,0,0x5282D0,1>;
using def_t = CSimpleModelInfo *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::SetAtomicFlag)
static int address;
static int global_address;
static const int id = 0x527F10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527F10, 0x528150, 0x5280E0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x51FEBB,100,0,0x51FE70,1, 0x52034B,100,0,0x520340,1, 0x5200EB,110,0,0x5200A0,1, 0x52057B,110,0,0x520570,1, 0x52007B,120,0,0x520030,1, 0x52050B,120,0,0x520500,1>;
using def_t = void(RpAtomic *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,int>, 0,1>;
META_END

META_BEGIN(CVisibilityPlugins::ClearAtomicFlag)
static int address;
static int global_address;
static const int id = 0x527F30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527F30, 0x528170, 0x528100>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x52036B,100,0,0x520360,1, 0x52059B,110,0,0x520590,1, 0x52052B,120,0,0x520520,1>;
using def_t = void(RpAtomic *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,int>, 0,1>;
META_END

META_BEGIN(CVisibilityPlugins::GetAtomicId)
static int address;
static int global_address;
static const int id = 0x527F50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527F50, 0x528190, 0x528120>;
// total references count: 10en (14), 11en (14), steam (14)
using refs_t = RefList<0x51FED6,100,0,0x51FED0,1, 0x52038B,100,0,0x520380,1, 0x5203A1,100,0,0x520380,2, 0x528415,100,0,0x5283E0,1, 0x5284F1,100,0,0x5284B0,1, 0x528605,100,0,0x5285D0,1, 0x5286E1,100,0,0x5286A0,1, 0x528842,100,0,0x5287F0,1, 0x52885C,100,0,0x5287F0,2, 0x5288E1,100,0,0x5288A0,1, 0x5288FB,100,0,0x5288A0,2, 0x528991,100,0,0x528940,1, 0x528A51,100,0,0x528A10,1, 0x52C666,100,0,0x52C660,1, 0x520106,110,0,0x520100,1, 0x5205BB,110,0,0x5205B0,1, 0x5205D1,110,0,0x5205B0,2, 0x528655,110,0,0x528620,1, 0x528731,110,0,0x5286F0,1, 0x528845,110,0,0x528810,1, 0x528921,110,0,0x5288E0,1, 0x528A82,110,0,0x528A30,1, 0x528A9C,110,0,0x528A30,2, 0x528B21,110,0,0x528AE0,1, 0x528B3B,110,0,0x528AE0,2, 0x528BD1,110,0,0x528B80,1, 0x528C91,110,0,0x528C50,1, 0x52C8A6,110,0,0x52C8A0,1, 0x520096,120,0,0x520090,1, 0x52054B,120,0,0x520540,1, 0x520561,120,0,0x520540,2, 0x5285E5,120,0,0x5285B0,1, 0x5286C1,120,0,0x528680,1, 0x5287D5,120,0,0x5287A0,1, 0x5288B1,120,0,0x528870,1, 0x528A12,120,0,0x5289C0,1, 0x528A2C,120,0,0x5289C0,2, 0x528AB1,120,0,0x528A70,1, 0x528ACB,120,0,0x528A70,2, 0x528B61,120,0,0x528B10,1, 0x528C21,120,0,0x528BE0,1, 0x52C836,120,0,0x52C830,1>;
using def_t = int(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::RenderWheelAtomicCB)
static int address;
static int global_address;
static const int id = 0x527F70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527F70, 0x5281B0, 0x528140>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5207C1,100,2,0,1, 0x5209F1,110,2,0,1, 0x520981,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::RenderObjAlwaysAtomic)
static int address;
static int global_address;
static const int id = 0x528000;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528000, 0x528240, 0x5281D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x527EED,100,2,0,1, 0x52812D,110,2,0,1, 0x5280BD,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::RenderAlphaAtomic)
static int address;
static int global_address;
static const int id = 0x5280B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5280B0, 0x5282F0, 0x528280>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x528283,100,0,0x528240,1, 0x528BA3,100,0,0x528B60,1, 0x528C06,100,0,0x528BC0,1, 0x5284C3,110,0,0x528480,1, 0x528DE3,110,0,0x528DA0,1, 0x528E46,110,0,0x528E00,1, 0x528453,120,0,0x528410,1, 0x528D73,120,0,0x528D30,1, 0x528DD6,120,0,0x528D90,1>;
using def_t = RpAtomic *(RpAtomic *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,int>, 0,1>;
META_END

META_BEGIN(CVisibilityPlugins::RenderFadingAtomic)
static int address;
static int global_address;
static const int id = 0x528100;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528100, 0x528340, 0x5282D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5290D2,100,0,0x529070,1, 0x529312,110,0,0x5292B0,1, 0x5292A2,120,0,0x529240,1>;
using def_t = RpAtomic *(RpAtomic *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,float>, 0,1>;
META_END

META_BEGIN(CVisibilityPlugins::RenderVehicleReallyLowDetailCB)
static int address;
static int global_address;
static const int id = 0x528240;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528240, 0x528480, 0x528410>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51FFF8,100,2,0,1, 0x520228,110,2,0,1, 0x5201B8,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::GetDotProductWithCameraVector)
static int address;
static int global_address;
static const int id = 0x5282A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5282A0, 0x5284E0, 0x528470>;
// total references count: 10en (8), 11en (8), steam (8)
using refs_t = RefList<0x52844D,100,0,0x5283E0,1, 0x528503,100,0,0x5284B0,1, 0x52863D,100,0,0x5285D0,1, 0x5286F3,100,0,0x5286A0,1, 0x52886C,100,0,0x5287F0,1, 0x52890B,100,0,0x5288A0,1, 0x5289A3,100,0,0x528940,1, 0x528A63,100,0,0x528A10,1, 0x52868D,110,0,0x528620,1, 0x528743,110,0,0x5286F0,1, 0x52887D,110,0,0x528810,1, 0x528933,110,0,0x5288E0,1, 0x528AAC,110,0,0x528A30,1, 0x528B4B,110,0,0x528AE0,1, 0x528BE3,110,0,0x528B80,1, 0x528CA3,110,0,0x528C50,1, 0x52861D,120,0,0x5285B0,1, 0x5286D3,120,0,0x528680,1, 0x52880D,120,0,0x5287A0,1, 0x5288C3,120,0,0x528870,1, 0x528A3C,120,0,0x5289C0,1, 0x528ADB,120,0,0x528A70,1, 0x528B73,120,0,0x528B10,1, 0x528C33,120,0,0x528BE0,1>;
using def_t = float(RwMatrix *, RwMatrix *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwMatrix *,RwMatrix *,unsigned int>, 0,1,2>;
META_END

META_BEGIN(CVisibilityPlugins::RenderVehicleHiDetailCB)
static int address;
static int global_address;
static const int id = 0x5283E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5283E0, 0x528620, 0x5285B0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x51FFB4,100,2,0,1, 0x5201A2,100,2,0,1, 0x5201E4,110,2,0,1, 0x5203D2,110,2,0,1, 0x520174,120,2,0,1, 0x520362,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::RenderVehicleHiDetailAlphaCB)
static int address;
static int global_address;
static const int id = 0x5284B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5284B0, 0x5286F0, 0x528680>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x51FF8A,100,2,0,1, 0x51FFAD,100,2,0,1, 0x5201BA,110,2,0,1, 0x5201DD,110,2,0,1, 0x52014A,120,2,0,1, 0x52016D,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::RenderTrainHiDetailCB)
static int address;
static int global_address;
static const int id = 0x5285D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5285D0, 0x528810, 0x5287A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x520281,100,2,0,1, 0x5204B1,110,2,0,1, 0x520441,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::RenderTrainHiDetailAlphaCB)
static int address;
static int global_address;
static const int id = 0x5286A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5286A0, 0x5288E0, 0x528870>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x520279,100,2,0,1, 0x5204A9,110,2,0,1, 0x520439,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::RenderVehicleReallyLowDetailCB_BigVehicle)
static int address;
static int global_address;
static const int id = 0x5287B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5287B0, 0x5289F0, 0x528980>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x5200F2,100,2,0,1, 0x5201E2,100,2,0,1, 0x520299,100,2,0,1, 0x520322,110,2,0,1, 0x520412,110,2,0,1, 0x5204C9,110,2,0,1, 0x5202B2,120,2,0,1, 0x5203A2,120,2,0,1, 0x520459,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::RenderVehicleLowDetailCB_BigVehicle)
static int address;
static int global_address;
static const int id = 0x5287F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5287F0, 0x528A30, 0x5289C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5200D7,100,2,0,1, 0x520307,110,2,0,1, 0x520297,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::RenderVehicleHiDetailCB_BigVehicle)
static int address;
static int global_address;
static const int id = 0x5288A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5288A0, 0x528AE0, 0x528A70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5200B1,100,2,0,1, 0x5202E1,110,2,0,1, 0x520271,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::RenderVehicleLowDetailAlphaCB_BigVehicle)
static int address;
static int global_address;
static const int id = 0x528940;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528940, 0x528B80, 0x528B10>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5200D0,100,2,0,1, 0x520300,110,2,0,1, 0x520290,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::RenderVehicleHiDetailAlphaCB_BigVehicle)
static int address;
static int global_address;
static const int id = 0x528A10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528A10, 0x528C50, 0x528BE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5200AA,100,2,0,1, 0x5202DA,110,2,0,1, 0x52026A,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::RenderVehicleHiDetailCB_Boat)
static int address;
static int global_address;
static const int id = 0x528AD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528AD0, 0x528D10, 0x528CA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x520183,100,2,0,1, 0x5203B3,110,2,0,1, 0x520343,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::RenderPlayerCB)
static int address;
static int global_address;
static const int id = 0x528B30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528B30, 0x528D70, 0x528D00>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4F8880,100,2,0,1, 0x510259,100,2,0,1, 0x59BC7B,100,2,0,1, 0x4F8960,110,2,0,1, 0x510449,110,2,0,1, 0x59BF3B,110,2,0,1, 0x4F88F0,120,2,0,1, 0x5103D9,120,2,0,1, 0x59902B,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::RenderPedLowDetailCB)
static int address;
static int global_address;
static const int id = 0x528B60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528B60, 0x528DA0, 0x528D30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5103F4,100,2,0,1, 0x5105E4,110,2,0,1, 0x510574,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::RenderPedHiDetailCB)
static int address;
static int global_address;
static const int id = 0x528BC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528BC0, 0x528E00, 0x528D90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5103E1,100,2,0,1, 0x5105D1,110,2,0,1, 0x510561,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::SetAtomicRenderCallback)
static int address;
static int global_address;
static const int id = 0x528C20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528C20, 0x528E60, 0x528DF0>;
// total references count: 10en (18), 11en (18), steam (18)
using refs_t = RefList<0x47672F,100,0,0x4766C0,1, 0x476922,100,0,0x4768C0,1, 0x4EAE7F,100,0,0x4EAE50,1, 0x4F894B,100,0,0x4F8940,1, 0x51B0CC,100,0,0x51B070,1, 0x51FF8F,100,0,0x51FF10,1, 0x51FFFD,100,0,0x51FF10,2, 0x520008,100,0,0x51FF10,3, 0x5200FB,100,0,0x520030,1, 0x5201E7,100,0,0x520120,1, 0x5201F3,100,0,0x520120,2, 0x520218,100,0,0x520210,1, 0x5202A3,100,0,0x520230,1, 0x5207C6,100,0,0x5204D0,1, 0x527EF2,100,0,0x527EC0,1, 0x530515,100,0,0x530300,1, 0x541ED8,100,0,0x541CB0,1, 0x54AF95,100,0,0x54AE50,1, 0x47672F,110,0,0x4766C0,1, 0x476922,110,0,0x4768C0,1, 0x4EAF2F,110,0,0x4EAF00,1, 0x4F8A2B,110,0,0x4F8A20,1, 0x51B2FC,110,0,0x51B2A0,1, 0x5201BF,110,0,0x520140,1, 0x52022D,110,0,0x520140,2, 0x520238,110,0,0x520140,3, 0x52032B,110,0,0x520260,1, 0x520417,110,0,0x520350,1, 0x520423,110,0,0x520350,2, 0x520448,110,0,0x520440,1, 0x5204D3,110,0,0x520460,1, 0x5209F6,110,0,0x520700,1, 0x528132,110,0,0x528100,1, 0x530755,110,0,0x530540,1, 0x542118,110,0,0x541EF0,1, 0x54B115,110,0,0x54AFD0,1, 0x47672F,120,0,0x4766C0,1, 0x476922,120,0,0x4768C0,1, 0x4EAEBF,120,0,0x4EAE90,1, 0x4F89BB,120,0,0x4F89B0,1, 0x51B28C,120,0,0x51B230,1, 0x52014F,120,0,0x5200D0,1, 0x5201BD,120,0,0x5200D0,2, 0x5201C8,120,0,0x5200D0,3, 0x5202BB,120,0,0x5201F0,1, 0x5203A7,120,0,0x5202E0,1, 0x5203B3,120,0,0x5202E0,2, 0x5203D8,120,0,0x5203D0,1, 0x520463,120,0,0x5203F0,1, 0x520986,120,0,0x520690,1, 0x5280C2,120,0,0x528090,1, 0x5306E5,120,0,0x5304D0,1, 0x5420C8,120,0,0x541EA0,1, 0x54B0C5,120,0,0x54AF80,1>;
using def_t = void(RpAtomic *, RpAtomic *(*)(RpAtomic *));
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,RpAtomic *(*)(RpAtomic *)>, 0,1>;
META_END

META_BEGIN(CVisibilityPlugins::SetRenderWareCamera)
static int address;
static int global_address;
static const int id = 0x528C50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528C50, 0x528E90, 0x528E20>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x48CFB2,100,0,0x48CF10,1, 0x48D0A2,100,0,0x48D040,1, 0x48E69C,100,0,0x48E480,1, 0x48E781,100,0,0x48E700,1, 0x48D0B2,110,0,0x48D010,1, 0x48D1A2,110,0,0x48D140,1, 0x48E75C,110,0,0x48E540,1, 0x48E841,110,0,0x48E7C0,1, 0x48D042,120,0,0x48CFA0,1, 0x48D132,120,0,0x48D0D0,1, 0x48E6EC,120,0,0x48E4D0,1, 0x48E7D1,120,0,0x48E750,1>;
using def_t = void(RwCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwCamera *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::SetFrameHierarchyId)
static int address;
static int global_address;
static const int id = 0x528D60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528D60, 0x528FA0, 0x528F30>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4F8BFD,100,0,0x4F8BB0,1, 0x528EDF,100,0,0x528ED0,1, 0x4F8CDD,110,0,0x4F8C90,1, 0x52911F,110,0,0x529110,1, 0x4F8C6D,120,0,0x4F8C20,1, 0x5290AF,120,0,0x5290A0,1>;
using def_t = void(RwFrame *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwFrame *,int>, 0,1>;
META_END

META_BEGIN(CVisibilityPlugins::GetFrameHierarchyId)
static int address;
static int global_address;
static const int id = 0x528D80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528D80, 0x528FC0, 0x528F50>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x405419,100,0,0x405410,1, 0x4F8A20,100,0,0x4F8A10,1, 0x4F8ADB,100,0,0x4F8AD0,1, 0x4F8B2B,100,0,0x4F8B20,1, 0x528DAC,100,0,0x528DA0,1, 0x528E2E,100,0,0x528E20,1, 0x405419,110,0,0x405410,1, 0x4F8B00,110,0,0x4F8AF0,1, 0x4F8BBB,110,0,0x4F8BB0,1, 0x4F8C0B,110,0,0x4F8C00,1, 0x528FEC,110,0,0x528FE0,1, 0x52906E,110,0,0x529060,1, 0x405419,120,0,0x405410,1, 0x4F8A90,120,0,0x4F8A80,1, 0x4F8B4B,120,0,0x4F8B40,1, 0x4F8B9B,120,0,0x4F8B90,1, 0x528F7C,120,0,0x528F70,1, 0x528FFE,120,0,0x528FF0,1>;
using def_t = int(RwFrame *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwFrame *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::DefaultVisibilityCB)
static int address;
static int global_address;
static const int id = 0x528D90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528D90, 0x528FD0, 0x528F60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x527D6E,100,2,0,1, 0x527FAE,110,2,0,1, 0x527F3E,120,2,0,1>;
using def_t = bool(RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::FrustumSphereCB)
static int address;
static int global_address;
static const int id = 0x528DA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528DA0, 0x528FE0, 0x528F70>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x528E66,100,0,0x528E20,1, 0x528EB1,100,0,0x528E80,1, 0x528EC5,100,0,0x528EC0,1, 0x5290A6,110,0,0x529060,1, 0x5290F1,110,0,0x5290C0,1, 0x529105,110,0,0x529100,1, 0x529036,120,0,0x528FF0,1, 0x529081,120,0,0x529050,1, 0x529095,120,0,0x529090,1>;
using def_t = bool(RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::MloVisibilityCB)
static int address;
static int global_address;
static const int id = 0x528E20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528E20, 0x529060, 0x528FF0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x528F03,100,2,0,1, 0x529143,110,2,0,1, 0x5290D3,120,2,0,1>;
using def_t = bool(RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::VehicleVisibilityCB)
static int address;
static int global_address;
static const int id = 0x528E80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528E80, 0x5290C0, 0x529050>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x528F3A,100,2,0,1, 0x52917A,110,2,0,1, 0x52910A,120,2,0,1>;
using def_t = bool(RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::VehicleVisibilityCB_BigVehicle)
static int address;
static int global_address;
static const int id = 0x528EC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528EC0, 0x529100, 0x529090>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x528F25,100,2,0,1, 0x529165,110,2,0,1, 0x5290F5,120,2,0,1>;
using def_t = bool(RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::SetClumpModelInfo)
static int address;
static int global_address;
static const int id = 0x528ED0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528ED0, 0x529110, 0x5290A0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4F8841,100,0,0x4F8830,1, 0x50B2F6,100,0,0x50B1A0,1, 0x4F8921,110,0,0x4F8910,1, 0x50B3D6,110,0,0x50B280,1, 0x4F88B1,120,0,0x4F88A0,1, 0x50B366,120,0,0x50B210,1>;
using def_t = void(RpClump *, CClumpModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *,CClumpModelInfo *>, 0,1>;
META_END

META_BEGIN(CVisibilityPlugins::SetClumpAlpha)
static int address;
static int global_address;
static const int id = 0x528F50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528F50, 0x529190, 0x529120>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x417A79,100,0,0x4165F0,1, 0x4375B6,100,0,0x436FA0,1, 0x437A91,100,0,0x4376A0,1, 0x4C8981,100,0,0x4C8910,1, 0x4F520C,100,0,0x4F4A00,1, 0x531883,100,0,0x531470,1, 0x417A79,110,0,0x4165F0,1, 0x4375B6,110,0,0x436FA0,1, 0x437A91,110,0,0x4376A0,1, 0x4C8A21,110,0,0x4C89B0,1, 0x4F52BC,110,0,0x4F4AB0,1, 0x531AC3,110,0,0x5316B0,1, 0x417A79,120,0,0x4165F0,1, 0x4375B6,120,0,0x436FA0,1, 0x437A91,120,0,0x4376A0,1, 0x4C89B1,120,0,0x4C8940,1, 0x4F524C,120,0,0x4F4A40,1, 0x531A53,120,0,0x531640,1>;
using def_t = void(RpClump *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *,int>, 0,1>;
META_END

META_BEGIN(CVisibilityPlugins::GetClumpAlpha)
static int address;
static int global_address;
static const int id = 0x528F70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528F70, 0x5291B0, 0x529140>;
// total references count: 10en (8), 11en (8), steam (8)
using refs_t = RefList<0x418488,100,0,0x418430,1, 0x4A7984,100,0,0x4A7930,1, 0x4C8948,100,0,0x4C8910,1, 0x4F3F19,100,0,0x4F3B90,1, 0x52826C,100,0,0x528240,1, 0x528B8C,100,0,0x528B60,1, 0x528BEF,100,0,0x528BC0,1, 0x531849,100,0,0x531470,1, 0x418488,110,0,0x418430,1, 0x4A7A74,110,0,0x4A7A20,1, 0x4C89E8,110,0,0x4C89B0,1, 0x4F3FC9,110,0,0x4F3C40,1, 0x5284AC,110,0,0x528480,1, 0x528DCC,110,0,0x528DA0,1, 0x528E2F,110,0,0x528E00,1, 0x531A89,110,0,0x5316B0,1, 0x418488,120,0,0x418430,1, 0x4A7A04,120,0,0x4A79B0,1, 0x4C8978,120,0,0x4C8940,1, 0x4F3F59,120,0,0x4F3BD0,1, 0x52843C,120,0,0x528410,1, 0x528D5C,120,0,0x528D30,1, 0x528DBF,120,0,0x528D90,1, 0x531A19,120,0,0x531640,1>;
using def_t = int(RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *>, 0>;
META_END

META_BEGIN(CVisibilityPlugins::InitAlphaAtomicList)
static int address;
static int global_address;
static const int id = 0x528F80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528F80, 0x5291C0, 0x529150>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A7BD9,100,0,0x4A7BA0,1, 0x4A7CC9,110,0,0x4A7C90,1, 0x4A7C59,120,0,0x4A7C20,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CVisibilityPlugins::InitAlphaEntityList)
static int address;
static int global_address;
static const int id = 0x528F90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528F90, 0x5291D0, 0x529160>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A8A29,100,0,0x4A8970,1, 0x4A8B19,110,0,0x4A8A60,1, 0x4A8AA9,120,0,0x4A89F0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CVisibilityPlugins::InsertAtomicIntoSortedList)
static int address;
static int global_address;
static const int id = 0x528FA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528FA0, 0x5291E0, 0x529170>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x52857B,100,0,0x5284B0,1, 0x5285A5,100,0,0x5284B0,2, 0x528761,100,0,0x5286A0,1, 0x52878E,100,0,0x5286A0,2, 0x5289F0,100,0,0x528940,1, 0x528AB0,100,0,0x528A10,1, 0x5287BB,110,0,0x5286F0,1, 0x5287E5,110,0,0x5286F0,2, 0x5289A1,110,0,0x5288E0,1, 0x5289CE,110,0,0x5288E0,2, 0x528C30,110,0,0x528B80,1, 0x528CF0,110,0,0x528C50,1, 0x52874B,120,0,0x528680,1, 0x528775,120,0,0x528680,2, 0x528931,120,0,0x528870,1, 0x52895E,120,0,0x528870,2, 0x528BC0,120,0,0x528B10,1, 0x528C80,120,0,0x528BE0,1>;
using def_t = bool(RpAtomic *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,float>, 0,1>;
META_END

META_BEGIN(CVisibilityPlugins::InsertEntityIntoSortedList)
static int address;
static int global_address;
static const int id = 0x528FF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528FF0, 0x529230, 0x5291C0>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x4A7A64,100,0,0x4A7930,1, 0x4A94E5,100,0,0x4A9350,1, 0x4A96A6,100,0,0x4A9350,2, 0x4A96D9,100,0,0x4A9350,3, 0x4A97D0,100,0,0x4A9350,4, 0x4A9AD5,100,0,0x4A9920,1, 0x4A9B73,100,0,0x4A9920,2, 0x4A7B54,110,0,0x4A7A20,1, 0x4A95D5,110,0,0x4A9440,1, 0x4A9796,110,0,0x4A9440,2, 0x4A97C9,110,0,0x4A9440,3, 0x4A98C0,110,0,0x4A9440,4, 0x4A9BC5,110,0,0x4A9A10,1, 0x4A9C63,110,0,0x4A9A10,2, 0x4A7AE4,120,0,0x4A79B0,1, 0x4A9565,120,0,0x4A93D0,1, 0x4A9726,120,0,0x4A93D0,2, 0x4A9759,120,0,0x4A93D0,3, 0x4A9850,120,0,0x4A93D0,4, 0x4A9B55,120,0,0x4A99A0,1, 0x4A9BF3,120,0,0x4A99A0,2>;
using def_t = bool(CEntity *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *,float>, 0,1>;
META_END

META_BEGIN(CVisibilityPlugins::RenderAlphaAtomics)
static int address;
static int global_address;
static const int id = 0x529040;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x529040, 0x529280, 0x529210>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A7C3C,100,0,0x4A7BA0,1, 0x4A7D2C,110,0,0x4A7C90,1, 0x4A7CBC,120,0,0x4A7C20,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CVisibilityPlugins::RenderFadingEntities)
static int address;
static int global_address;
static const int id = 0x529070;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x529070, 0x5292B0, 0x529240>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A7925,100,0,0x4A7910,1, 0x4A7A15,110,0,0x4A7A00,1, 0x4A79A5,120,0,0x4A7990,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CVisibilityPlugins::GetDistanceSquaredFromCamera)
static int address;
static int global_address;
static const int id = 0x529120;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x529120, 0x529360, 0x5292F0>;
// total references count: 10en (15), 11en (15), steam (15)
using refs_t = RefList<0x528250,100,0,0x528240,1, 0x5283F2,100,0,0x5283E0,1, 0x5284C2,100,0,0x5284B0,1, 0x5285E2,100,0,0x5285D0,1, 0x5286B2,100,0,0x5286A0,1, 0x5287BF,100,0,0x5287B0,1, 0x528801,100,0,0x5287F0,1, 0x5288B1,100,0,0x5288A0,1, 0x528952,100,0,0x528940,1, 0x528A22,100,0,0x528A10,1, 0x528ADF,100,0,0x528AD0,1, 0x528B70,100,0,0x528B60,1, 0x528BD0,100,0,0x528BC0,1, 0x528E37,100,0,0x528E20,1, 0x528E8C,100,0,0x528E80,1, 0x528490,110,0,0x528480,1, 0x528632,110,0,0x528620,1, 0x528702,110,0,0x5286F0,1, 0x528822,110,0,0x528810,1, 0x5288F2,110,0,0x5288E0,1, 0x5289FF,110,0,0x5289F0,1, 0x528A41,110,0,0x528A30,1, 0x528AF1,110,0,0x528AE0,1, 0x528B92,110,0,0x528B80,1, 0x528C62,110,0,0x528C50,1, 0x528D1F,110,0,0x528D10,1, 0x528DB0,110,0,0x528DA0,1, 0x528E10,110,0,0x528E00,1, 0x529077,110,0,0x529060,1, 0x5290CC,110,0,0x5290C0,1, 0x528420,120,0,0x528410,1, 0x5285C2,120,0,0x5285B0,1, 0x528692,120,0,0x528680,1, 0x5287B2,120,0,0x5287A0,1, 0x528882,120,0,0x528870,1, 0x52898F,120,0,0x528980,1, 0x5289D1,120,0,0x5289C0,1, 0x528A81,120,0,0x528A70,1, 0x528B22,120,0,0x528B10,1, 0x528BF2,120,0,0x528BE0,1, 0x528CAF,120,0,0x528CA0,1, 0x528D40,120,0,0x528D30,1, 0x528DA0,120,0,0x528D90,1, 0x529007,120,0,0x528FF0,1, 0x52905C,120,0,0x529050,1>;
using def_t = float(RwFrame *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwFrame *>, 0>;
META_END

META_BEGIN(SetAlphaCB)
static int address;
static int global_address;
static const int id = 0x527F60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527F60, 0x5281A0, 0x528130>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x5280CB,100,2,0,1, 0x5280E5,100,2,0,1, 0x5281EC,100,2,0,1, 0x52821A,100,2,0,1, 0x52830B,110,2,0,1, 0x528325,110,2,0,1, 0x52842C,110,2,0,1, 0x52845A,110,2,0,1, 0x52829B,120,2,0,1, 0x5282B5,120,2,0,1, 0x5283BC,120,2,0,1, 0x5283EA,120,2,0,1>;
using def_t = RpMaterial *(RpMaterial *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpMaterial *,void *>, 0,1>;
META_END

META_BEGIN(SetTextureCB)
static int address;
static int global_address;
static const int id = 0x528B10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x528B10, 0x528D50, 0x528CE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x528B43,100,2,0,1, 0x528D83,110,2,0,1, 0x528D13,120,2,0,1>;
using def_t = RpMaterial *(RpMaterial *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpMaterial *,void *>, 0,1>;
META_END

}
