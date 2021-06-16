/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(NodeNameConstructor)
static int address;
static int global_address;
static const int id = 0x527010;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527010, 0x527250, 0x5271E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x52710B,100,2,0,1, 0x52734B,110,2,0,1, 0x5272DB,120,2,0,1>;
using def_t = void *(void *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,RwInt32,RwInt32>, 0,1,2>;
META_END

META_BEGIN(NodeNameDestructor)
static int address;
static int global_address;
static const int id = 0x527030;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527030, 0x527270, 0x527200>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x527106,100,2,0,1, 0x527346,110,2,0,1, 0x5272D6,120,2,0,1>;
using def_t = void *(void *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,RwInt32,RwInt32>, 0,1,2>;
META_END

META_BEGIN(NodeNameCopy)
static int address;
static int global_address;
static const int id = 0x527040;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527040, 0x527280, 0x527210>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x527101,100,2,0,1, 0x527341,110,2,0,1, 0x5272D1,120,2,0,1>;
using def_t = void *(void *, void const *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,void const *,RwInt32,RwInt32>, 0,1,2,3>;
META_END

META_BEGIN(NodeNameStreamWrite)
static int address;
static int global_address;
static const int id = 0x527070;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527070, 0x5272B0, 0x527240>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x527129,100,2,0,1, 0x527369,110,2,0,1, 0x5272F9,120,2,0,1>;
using def_t = RwStream *(RwStream *, RwInt32, void const *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwStream *,RwInt32,void const *,RwInt32,RwInt32>, 0,1,2,3,4>;
META_END

META_BEGIN(NodeNameStreamRead)
static int address;
static int global_address;
static const int id = 0x5270A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5270A0, 0x5272E0, 0x527270>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x52712E,100,2,0,1, 0x52736E,110,2,0,1, 0x5272FE,120,2,0,1>;
using def_t = RwStream *(RwStream *, RwInt32, void *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwStream *,RwInt32,void *,RwInt32,RwInt32>, 0,1,2,3,4>;
META_END

META_BEGIN(NodeNameStreamGetSize)
static int address;
static int global_address;
static const int id = 0x5270D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5270D0, 0x527310, 0x5272A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x527124,100,2,0,1, 0x527364,110,2,0,1, 0x5272F4,120,2,0,1>;
using def_t = RwInt32(void const *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void const *,RwInt32,RwInt32>, 0,1,2>;
META_END

META_BEGIN(NodeNamePluginAttach)
static int address;
static int global_address;
static const int id = 0x527100;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527100, 0x527340, 0x5272D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48D4B7,100,0,0x48D470,1, 0x48D5B7,110,0,0x48D570,1, 0x48D547,120,0,0x48D500,1>;
using def_t = RwBool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(GetFrameNodeName)
static int address;
static int global_address;
static const int id = 0x527150;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x527150, 0x527390, 0x527320>;
// total references count: 10en (14), 11en (14), steam (14)
using refs_t = RefList<0x40538E,100,0,0x405380,1, 0x4766DC,100,0,0x4766C0,1, 0x476863,100,0,0x476810,1, 0x4768D6,100,0,0x4768C0,1, 0x4F8970,100,0,0x4F8960,1, 0x4F8A2B,100,0,0x4F8A10,1, 0x5102F0,100,0,0x5102E0,1, 0x51042A,100,0,0x510390,1, 0x51FE7F,100,0,0x51FE70,1, 0x51FEA6,100,0,0x51FE70,2, 0x51FF1E,100,0,0x51FF10,1, 0x52003E,100,0,0x520030,1, 0x52012C,100,0,0x520120,1, 0x52023D,100,0,0x520230,1, 0x40538E,110,0,0x405380,1, 0x4766DC,110,0,0x4766C0,1, 0x476863,110,0,0x476810,1, 0x4768D6,110,0,0x4768C0,1, 0x4F8A50,110,0,0x4F8A40,1, 0x4F8B0B,110,0,0x4F8AF0,1, 0x5104E0,110,0,0x5104D0,1, 0x51061A,110,0,0x510580,1, 0x5200AF,110,0,0x5200A0,1, 0x5200D6,110,0,0x5200A0,2, 0x52014E,110,0,0x520140,1, 0x52026E,110,0,0x520260,1, 0x52035C,110,0,0x520350,1, 0x52046D,110,0,0x520460,1, 0x40538E,120,0,0x405380,1, 0x4766DC,120,0,0x4766C0,1, 0x476863,120,0,0x476810,1, 0x4768D6,120,0,0x4768C0,1, 0x4F89E0,120,0,0x4F89D0,1, 0x4F8A9B,120,0,0x4F8A80,1, 0x510470,120,0,0x510460,1, 0x5105AA,120,0,0x510510,1, 0x52003F,120,0,0x520030,1, 0x520066,120,0,0x520030,2, 0x5200DE,120,0,0x5200D0,1, 0x5201FE,120,0,0x5201F0,1, 0x5202EC,120,0,0x5202E0,1, 0x5203FD,120,0,0x5203F0,1>;
using def_t = char *(RwFrame *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwFrame *>, 0>;
META_END

}
