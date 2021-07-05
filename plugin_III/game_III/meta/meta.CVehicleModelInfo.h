/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

DTOR_META_BEGIN(CVehicleModelInfo)
static int address;
static int global_address;
static const int id = 0x50BFF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BFF0, 0x50C0E0, 0x50C070>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x50BCFB,100,2,0,1, 0x50BFDE,100,2,0,1, 0x50C273,100,2,0,1, 0x50BDEB,110,2,0,1, 0x50C0CE,110,2,0,1, 0x50C363,110,2,0,1, 0x50BD7B,120,2,0,1, 0x50C05E,120,2,0,1, 0x50C2F3,120,2,0,1>;
using def_t = void(CVehicleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CVehicleModelInfo)
static int address;
static int global_address;
static const int id = 0x50C260;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x50C260, 0x50C350, 0x50C2E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FDFD8,100,2,0x5FDFD8,1, 0x5FDDC0,110,2,0x5FDDC0,1, 0x60ADB8,120,2,0x60ADB8,1>;
using def_t = void(CVehicleModelInfo *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *,char>, 0,1>;
META_END

CTOR_META_BEGIN(CVehicleModelInfo)
static int address;
static int global_address;
static const int id = 0x51FB10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51FB10, 0x51FD40, 0x51FCD0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50BD00,100,2,0,1, 0x50BDF0,110,2,0,1, 0x50BD80,120,2,0,1>;
using def_t = CVehicleModelInfo *(CVehicleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *>, 0>;
META_END

META_BEGIN(CVehicleModelInfo::SetClump)
static int address;
static int global_address;
static const int id = 0x51FC60;
static const bool is_virtual = true;
static const int vtable_index = 6;
using mv_addresses_t = MvAddresses<0x51FC60, 0x51FE90, 0x51FE20>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FDFF0,100,2,0x5FDFD8,1, 0x5FDDC0,110,2,0x5FDDC0,1, 0x60ADB8,120,2,0x60ADB8,1>;
using def_t = void(CVehicleModelInfo *, RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *,RpClump *>, 0,1>;
META_END

META_BEGIN(CVehicleModelInfo::CreateInstance)
static int address;
static int global_address;
static const int id = 0x51FCB0;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x51FCB0, 0x51FEE0, 0x51FE70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FDFE4,100,2,0x5FDFD8,1, 0x5FDDC0,110,2,0x5FDDC0,1, 0x60ADB8,120,2,0x60ADB8,1>;
using def_t = RwObject *(CVehicleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *>, 0>;
META_END

META_BEGIN(CVehicleModelInfo::DeleteRwObject)
static int address;
static int global_address;
static const int id = 0x51FDC0;
static const bool is_virtual = true;
static const int vtable_index = 2;
using mv_addresses_t = MvAddresses<0x51FDC0, 0x51FFF0, 0x51FF80>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FDFE0,100,2,0x5FDFD8,1, 0x5FDDC0,110,2,0x5FDDC0,1, 0x60ADB8,120,2,0x60ADB8,1>;
using def_t = void(CVehicleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *>, 0>;
META_END

META_BEGIN(CVehicleModelInfo::CollapseFramesCB)
static int address;
static int global_address;
static const int id = 0x51FE10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51FE10, 0x520040, 0x51FFD0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x51FE1C,100,2,0,1, 0x52070A,100,2,0,1, 0x52004C,110,2,0,1, 0x52093A,110,2,0,1, 0x51FFDC,120,2,0,1, 0x5208CA,120,2,0,1>;
using def_t = RwFrame *(RwFrame *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwFrame *,void *>, 0,1>;
META_END

META_BEGIN(CVehicleModelInfo::MoveObjectsCB)
static int address;
static int global_address;
static const int id = 0x51FE50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51FE50, 0x520080, 0x520010>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51FE2B,100,2,0,1, 0x52005B,110,2,0,1, 0x51FFEB,120,2,0,1>;
using def_t = RwObject *(RwObject *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwObject *,void *>, 0,1>;
META_END

META_BEGIN(CVehicleModelInfo::HideDamagedAtomicCB)
static int address;
static int global_address;
static const int id = 0x51FE70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51FE70, 0x5200A0, 0x520030>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x520012,100,0,0x51FF10,1, 0x520105,100,0,0x520030,1, 0x5201FD,100,0,0x520120,1, 0x5202AD,100,0,0x520230,1, 0x520242,110,0,0x520140,1, 0x520335,110,0,0x520260,1, 0x52042D,110,0,0x520350,1, 0x5204DD,110,0,0x520460,1, 0x5201D2,120,0,0x5200D0,1, 0x5202C5,120,0,0x5201F0,1, 0x5203BD,120,0,0x5202E0,1, 0x52046D,120,0,0x5203F0,1>;
using def_t = RpAtomic *(RpAtomic *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,void *>, 0,1>;
META_END

META_BEGIN(CVehicleModelInfo::HideAllComponentsAtomicCB)
static int address;
static int global_address;
static const int id = 0x51FED0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51FED0, 0x520100, 0x520090>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x53C2B3,100,2,0,1, 0x53C4F3,110,2,0,1, 0x53C4A3,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,void *>, 0,1>;
META_END

META_BEGIN(CVehicleModelInfo::HasAlphaMaterialCB)
static int address;
static int global_address;
static const int id = 0x51FEF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51FEF0, 0x520120, 0x5200B0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x51FF34,100,2,0,1, 0x520054,100,2,0,1, 0x520253,100,2,0,1, 0x520164,110,2,0,1, 0x520284,110,2,0,1, 0x520483,110,2,0,1, 0x5200F4,120,2,0,1, 0x520214,120,2,0,1, 0x520413,120,2,0,1>;
using def_t = RpMaterial *(RpMaterial *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpMaterial *,void *>, 0,1>;
META_END

META_BEGIN(CVehicleModelInfo::SetAtomicRendererCB)
static int address;
static int global_address;
static const int id = 0x51FF10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51FF10, 0x520140, 0x5200D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x520326,100,2,0,1, 0x520556,110,2,0,1, 0x5204E6,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,void *>, 0,1>;
META_END

META_BEGIN(CVehicleModelInfo::SetAtomicRendererCB_BigVehicle)
static int address;
static int global_address;
static const int id = 0x520030;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520030, 0x520260, 0x5201F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x52030B,100,2,0,1, 0x52053B,110,2,0,1, 0x5204CB,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,void *>, 0,1>;
META_END

META_BEGIN(CVehicleModelInfo::SetAtomicRendererCB_Boat)
static int address;
static int global_address;
static const int id = 0x520120;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520120, 0x520350, 0x5202E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x52031B,100,2,0,1, 0x52054B,110,2,0,1, 0x5204DB,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,void *>, 0,1>;
META_END

META_BEGIN(CVehicleModelInfo::SetAtomicRendererCB_Heli)
static int address;
static int global_address;
static const int id = 0x520210;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520210, 0x520440, 0x5203D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5202EB,100,2,0,1, 0x52051B,110,2,0,1, 0x5204AB,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,void *>, 0,1>;
META_END

META_BEGIN(CVehicleModelInfo::SetAtomicRendererCB_Train)
static int address;
static int global_address;
static const int id = 0x520230;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520230, 0x520460, 0x5203F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5202CE,100,2,0,1, 0x5204FE,110,2,0,1, 0x52048E,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,void *>, 0,1>;
META_END

META_BEGIN(CVehicleModelInfo::SetAtomicRenderCallbacks)
static int address;
static int global_address;
static const int id = 0x5202C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5202C0, 0x5204F0, 0x520480>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51FC6F,100,0,0x51FC60,1, 0x51FE9F,110,0,0x51FE90,1, 0x51FE2F,120,0,0x51FE20,1>;
using def_t = void(CVehicleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *>, 0>;
META_END

META_BEGIN(CVehicleModelInfo::SetAtomicFlagCB)
static int address;
static int global_address;
static const int id = 0x520340;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520340, 0x520570, 0x520500>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x5203FB,100,2,0,1, 0x520417,100,2,0,1, 0x52046A,100,2,0,1, 0x520496,100,2,0,1, 0x5204AF,100,2,0,1, 0x52E812,100,2,0,1, 0x5302E1,100,2,0,1, 0x52062B,110,2,0,1, 0x520647,110,2,0,1, 0x52069A,110,2,0,1, 0x5206C6,110,2,0,1, 0x5206DF,110,2,0,1, 0x52EA52,110,2,0,1, 0x530521,110,2,0,1, 0x5205BB,120,2,0,1, 0x5205D7,120,2,0,1, 0x52062A,120,2,0,1, 0x520656,120,2,0,1, 0x52066F,120,2,0,1, 0x52E9E2,120,2,0,1, 0x5304B1,120,2,0,1>;
using def_t = RwObject *(RwObject *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwObject *,void *>, 0,1>;
META_END

META_BEGIN(CVehicleModelInfo::ClearAtomicFlagCB)
static int address;
static int global_address;
static const int id = 0x520360;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520360, 0x520590, 0x520520>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x52E7B9,100,2,0,1, 0x52E9F9,110,2,0,1, 0x52E989,120,2,0,1>;
using def_t = RwObject *(RwObject *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwObject *,void *>, 0,1>;
META_END

META_BEGIN(CVehicleModelInfo::SetVehicleComponentFlags)
static int address;
static int global_address;
static const int id = 0x5203C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5203C0, 0x5205F0, 0x520580>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x52064F,100,0,0x5204D0,1, 0x520772,100,0,0x5204D0,2, 0x52087F,110,0,0x520700,1, 0x5209A2,110,0,0x520700,2, 0x52080F,120,0,0x520690,1, 0x520932,120,0,0x520690,2>;
using def_t = void(CVehicleModelInfo *, RwFrame *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *,RwFrame *,unsigned int>, 0,1,2>;
META_END

META_BEGIN(CVehicleModelInfo::PreprocessHierarchy)
static int address;
static int global_address;
static const int id = 0x5204D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5204D0, 0x520700, 0x520690>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51FC88,100,0,0x51FC60,1, 0x51FEB8,110,0,0x51FE90,1, 0x51FE48,120,0,0x51FE20,1>;
using def_t = void(CVehicleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *>, 0>;
META_END

META_BEGIN(CVehicleModelInfo::GetWheelPosn)
static int address;
static int global_address;
static const int id = 0x520840;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520840, 0x520A70, 0x520A00>;
// total references count: 10en (8), 11en (8), steam (8)
using refs_t = RefList<0x52D23E,100,0,0x52D210,1, 0x52D7DA,100,0,0x52D4E0,1, 0x52D8E9,100,0,0x52D4E0,2, 0x52DB55,100,0,0x52D4E0,3, 0x52DCEA,100,0,0x52D4E0,4, 0x52E03F,100,0,0x52D4E0,5, 0x52E252,100,0,0x52D4E0,6, 0x53CCF1,100,0,0x53CBA0,1, 0x52D47E,110,0,0x52D450,1, 0x52DA1A,110,0,0x52D720,1, 0x52DB29,110,0,0x52D720,2, 0x52DD95,110,0,0x52D720,3, 0x52DF2A,110,0,0x52D720,4, 0x52E27F,110,0,0x52D720,5, 0x52E492,110,0,0x52D720,6, 0x53CF31,110,0,0x53CDE0,1, 0x52D40E,120,0,0x52D3E0,1, 0x52D9AA,120,0,0x52D6B0,1, 0x52DAB9,120,0,0x52D6B0,2, 0x52DD25,120,0,0x52D6B0,3, 0x52DEBA,120,0,0x52D6B0,4, 0x52E20F,120,0,0x52D6B0,5, 0x52E422,120,0,0x52D6B0,6, 0x53CEE1,120,0,0x53CD90,1>;
using def_t = void(CVehicleModelInfo *, int, CVector &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *,int,CVector &>, 0,1,2>;
META_END

META_BEGIN(CVehicleModelInfo::ChooseComponent)
static int address;
static int global_address;
static const int id = 0x520AB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520AB0, 0x520CE0, 0x520C70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51FCD9,100,0,0x51FCB0,1, 0x51FF09,110,0,0x51FEE0,1, 0x51FE99,120,0,0x51FE70,1>;
using def_t = int(CVehicleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *>, 0>;
META_END

META_BEGIN(CVehicleModelInfo::ChooseSecondComponent)
static int address;
static int global_address;
static const int id = 0x520BE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520BE0, 0x520E10, 0x520DA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51FD3E,100,0,0x51FCB0,1, 0x51FF6E,110,0,0x51FEE0,1, 0x51FEFE,120,0,0x51FE70,1>;
using def_t = int(CVehicleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *>, 0>;
META_END

META_BEGIN_OVERLOADED(CVehicleModelInfo::GetEditableMaterialListCB, RpMaterial *(*)(RpMaterial *, void *))
static int address;
static int global_address;
static const int id = 0x520D30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520D30, 0x520F60, 0x520EF0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x520DCE,100,2,0,1, 0x520FFE,110,2,0,1, 0x520F8E,120,2,0,1>;
using def_t = RpMaterial *(RpMaterial *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpMaterial *,void *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CVehicleModelInfo::GetEditableMaterialListCB, RpAtomic *(*)(RpAtomic *, void *))
static int address;
static int global_address;
static const int id = 0x520DC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520DC0, 0x520FF0, 0x520F80>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x520E22,100,0,0x520DE0,1, 0x520E04,100,2,0,1, 0x521052,110,0,0x521010,1, 0x521034,110,2,0,1, 0x520FE2,120,0,0x520FA0,1, 0x520FC4,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,void *>, 0,1>;
META_END

META_BEGIN(CVehicleModelInfo::FindEditableMaterialList)
static int address;
static int global_address;
static const int id = 0x520DE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520DE0, 0x521010, 0x520FA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51FC8F,100,0,0x51FC60,1, 0x51FEBF,110,0,0x51FE90,1, 0x51FE4F,120,0,0x51FE20,1>;
using def_t = void(CVehicleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *>, 0>;
META_END

META_BEGIN(CVehicleModelInfo::SetVehicleColour)
static int address;
static int global_address;
static const int id = 0x520E70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520E70, 0x5210A0, 0x521030>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4BB22B,100,0,0x4BB1E0,1, 0x53B238,100,0,0x539EA0,1, 0x53E96A,100,0,0x53E890,1, 0x4BB31B,110,0,0x4BB2D0,1, 0x53B478,110,0,0x53A0E0,1, 0x53EBAA,110,0,0x53EAD0,1, 0x4BB2AB,120,0,0x4BB260,1, 0x53B428,120,0,0x53A090,1, 0x53EB5A,120,0,0x53EA80,1>;
using def_t = void(CVehicleModelInfo *, unsigned char, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *,unsigned char,unsigned char>, 0,1,2>;
META_END

META_BEGIN(CVehicleModelInfo::ChooseVehicleColour)
static int address;
static int global_address;
static const int id = 0x520FD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520FD0, 0x521200, 0x521190>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x42287F,100,0,0x4222D0,1, 0x4228A8,100,0,0x4222D0,2, 0x4354B0,100,0,0x435330,1, 0x52C84E,100,0,0x52C6B0,1, 0x53E4B7,100,0,0x53E3E0,1, 0x42287F,110,0,0x4222D0,1, 0x4228A8,110,0,0x4222D0,2, 0x4354B0,110,0,0x435330,1, 0x52CA8E,110,0,0x52C8F0,1, 0x53E6F7,110,0,0x53E620,1, 0x42287F,120,0,0x4222D0,1, 0x4228A8,120,0,0x4222D0,2, 0x4354B0,120,0,0x435330,1, 0x52CA1E,120,0,0x52C880,1, 0x53E6A7,120,0,0x53E5D0,1>;
using def_t = void(CVehicleModelInfo *, unsigned char *, unsigned char *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *,unsigned char *,unsigned char *>, 0,1,2>;
META_END

META_BEGIN(CVehicleModelInfo::AvoidSameVehicleColour)
static int address;
static int global_address;
static const int id = 0x5210A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5210A0, 0x5212D0, 0x521260>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x417CD1,100,0,0x4165F0,1, 0x417CD1,110,0,0x4165F0,1, 0x417CD1,120,0,0x4165F0,1>;
using def_t = void(CVehicleModelInfo *, unsigned char *, unsigned char *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *,unsigned char *,unsigned char *>, 0,1,2>;
META_END

META_BEGIN(CVehicleModelInfo::LoadVehicleColours)
static int address;
static int global_address;
static const int id = 0x521260;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x521260, 0x521490, 0x521420>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C04A,100,0,0x48BED0,1, 0x48C13A,110,0,0x48BFC0,1, 0x48C0CA,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CVehicleModelInfo::DeleteVehicleColourTextures)
static int address;
static int global_address;
static const int id = 0x521650;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x521650, 0x521880, 0x521810>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C44B,100,0,0x48C3A0,1, 0x48C53B,110,0,0x48C490,1, 0x48C4CB,120,0,0x48C420,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CVehicleModelInfo::LoadEnvironmentMaps)
static int address;
static int global_address;
static const int id = 0x521680;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x521680, 0x5218B0, 0x521840>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C04F,100,0,0x48BED0,1, 0x48C13F,110,0,0x48BFC0,1, 0x48C0CF,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CVehicleModelInfo::ShutdownEnvironmentMaps)
static int address;
static int global_address;
static const int id = 0x521720;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x521720, 0x521950, 0x5218E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C450,100,0,0x48C3A0,1, 0x48C540,110,0,0x48C490,1, 0x48C4D0,120,0,0x48C420,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CVehicleModelInfo::HasSpecularMaterialCB)
static int address;
static int global_address;
static const int id = 0x521770;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x521770, 0x5219B0, 0x521940>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x521837,100,2,0,1, 0x521A77,110,2,0,1, 0x521A07,120,2,0,1>;
using def_t = RpMaterial *(RpMaterial *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpMaterial *,void *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CVehicleModelInfo::SetEnvironmentMapCB, RpMaterial *(*)(RpMaterial *, void *))
static int address;
static int global_address;
static const int id = 0x5217A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5217A0, 0x5219E0, 0x521970>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x521851,100,2,0,1, 0x521A91,110,2,0,1, 0x521A21,120,2,0,1>;
using def_t = RpMaterial *(RpMaterial *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpMaterial *,void *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CVehicleModelInfo::SetEnvironmentMapCB, RpAtomic *(*)(RpAtomic *, void *))
static int address;
static int global_address;
static const int id = 0x521820;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x521820, 0x521A60, 0x5219F0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5219B3,100,0,0x521890,1, 0x521987,100,2,0,1, 0x521BF3,110,0,0x521AD0,1, 0x521BC7,110,2,0,1, 0x521B83,120,0,0x521A60,1, 0x521B57,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,void *>, 0,1>;
META_END

META_BEGIN(CVehicleModelInfo::SetEnvironmentMap)
static int address;
static int global_address;
static const int id = 0x521890;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x521890, 0x521AD0, 0x521A60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51FCA0,100,0,0x51FC60,1, 0x51FED0,110,0,0x51FE90,1, 0x51FE60,120,0,0x51FE20,1>;
using def_t = void(CVehicleModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicleModelInfo *>, 0>;
META_END

META_BEGIN(CVehicleModelInfo::GetMaximumNumberOfPassengersFromNumberOfDoors)
static int address;
static int global_address;
static const int id = 0x5219D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5219D0, 0x521C10, 0x521BA0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x551196,100,0,0x551170,1, 0x58B564,100,0,0x589D00,1, 0x5512D6,110,0,0x5512B0,1, 0x58B8A4,110,0,0x58A040,1, 0x551286,120,0,0x551260,1, 0x58B794,120,0,0x589F30,1>;
using def_t = int(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(GetOkAndDamagedAtomicCB)
static int address;
static int global_address;
static const int id = 0x520380;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520380, 0x5205B0, 0x520540>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x52072C,100,2,0,1, 0x52095C,110,2,0,1, 0x5208EC,120,2,0,1>;
using def_t = RwObject *(RwObject *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwObject *,void *>, 0,1>;
META_END

META_BEGIN(IsValidCompRule)
static int address;
static int global_address;
static const int id = 0x520880;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520880, 0x520AB0, 0x520A40>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x5208EE,100,0,0x5208C0,1, 0x52092B,100,0,0x5208C0,2, 0x520AEA,100,0,0x520AB0,1, 0x520C16,100,0,0x520BE0,1, 0x520C67,100,0,0x520BE0,2, 0x520B1E,110,0,0x520AF0,1, 0x520B5B,110,0,0x520AF0,2, 0x520D1A,110,0,0x520CE0,1, 0x520E46,110,0,0x520E10,1, 0x520E97,110,0,0x520E10,2, 0x520AAE,120,0,0x520A80,1, 0x520AEB,120,0,0x520A80,2, 0x520CAA,120,0,0x520C70,1, 0x520DD6,120,0,0x520DA0,1, 0x520E27,120,0,0x520DA0,2>;
using def_t = bool(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(GetListOfComponentsNotUsedByRules)
static int address;
static int global_address;
static const int id = 0x5208C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5208C0, 0x520AF0, 0x520A80>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x520B77,100,0,0x520AB0,1, 0x520CCC,100,0,0x520BE0,1, 0x520DA7,110,0,0x520CE0,1, 0x520EFC,110,0,0x520E10,1, 0x520D37,120,0,0x520C70,1, 0x520E8C,120,0,0x520DA0,1>;
using def_t = int(unsigned int, int, int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,int,int *>, 0,1,2>;
META_END

META_BEGIN(CountCompsInRule)
static int address;
static int global_address;
static const int id = 0x520990;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x520990, 0x520BC0, 0x520B50>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5209E1,100,0,0x5209C0,1, 0x520A41,100,0,0x5209C0,2, 0x520C11,110,0,0x520BF0,1, 0x520C71,110,0,0x520BF0,2, 0x520BA1,120,0,0x520B80,1, 0x520C01,120,0,0x520B80,2>;
using def_t = int(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(ChooseComponent)
static int address;
static int global_address;
static const int id = 0x5209C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5209C0, 0x520BF0, 0x520B80>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x520B0C,100,0,0x520AB0,1, 0x520C3B,100,0,0x520BE0,1, 0x520D3C,110,0,0x520CE0,1, 0x520E6B,110,0,0x520E10,1, 0x520CCC,120,0,0x520C70,1, 0x520DFB,120,0,0x520DA0,1>;
using def_t = int(int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CreateCarColourTexture)
static int address;
static int global_address;
static const int id = 0x521160;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x521160, 0x521390, 0x521320>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x52154D,100,0,0x521260,1, 0x52177D,110,0,0x521490,1, 0x52170D,120,0,0x521420,1>;
using def_t = RwTexture *(unsigned char, unsigned char, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char,unsigned char,unsigned char>, 0,1,2>;
META_END

}
