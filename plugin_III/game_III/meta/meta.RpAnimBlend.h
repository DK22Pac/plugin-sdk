/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(RpAnimBlendClumpUpdateAnimations)
static int address;
static int global_address;
static const int id = 0x4024B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4024B0, 0x4024B0, 0x4024B0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4B1AD4,100,0,0x4B1A60,1, 0x4B1B64,100,0,0x4B1A60,2, 0x4B1BC4,110,0,0x4B1B50,1, 0x4B1C54,110,0,0x4B1B50,2, 0x4B1B54,120,0,0x4B1AE0,1, 0x4B1BE4,120,0,0x4B1AE0,2>;
using def_t = void(RpClump *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *,float>, 0,1>;
META_END

META_BEGIN(FrameUpdateCallBack)
static int address;
static int global_address;
static const int id = 0x4025F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4025F0, 0x4025F0, 0x4025F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x40257E,100,2,0,1, 0x40257E,110,2,0,1, 0x40257E,120,2,0,1>;
using def_t = void(AnimBlendFrameData *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<AnimBlendFrameData *,void *>, 0,1>;
META_END

META_BEGIN(FrameUpdateCallBackWithVelocityExtraction)
static int address;
static int global_address;
static const int id = 0x4028B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4028B0, 0x4028B0, 0x4028B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x40262B,100,0,0x4025F0,1, 0x40262B,110,0,0x4025F0,1, 0x40262B,120,0,0x4025F0,1>;
using def_t = void(AnimBlendFrameData *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<AnimBlendFrameData *,void *>, 0,1>;
META_END

META_BEGIN(FrameUpdateCallBackWith3dVelocityExtraction)
static int address;
static int global_address;
static const int id = 0x402D40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x402D40, 0x402D40, 0x402D40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x402620,100,0,0x4025F0,1, 0x402620,110,0,0x4025F0,1, 0x402620,120,0,0x4025F0,1>;
using def_t = void(AnimBlendFrameData *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<AnimBlendFrameData *,void *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(RpAnimBlendClumpGetFirstAssociation, CAnimBlendAssociation *(*)(RpClump *))
static int address;
static int global_address;
static const int id = 0x4031B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4031B0, 0x4031B0, 0x4031B0>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x404E13,100,0,0x404DC0,1, 0x44D7E5,100,0,0x44CB80,1, 0x4B1AA3,100,0,0x4B1A60,1, 0x4B1B32,100,0,0x4B1A60,2, 0x4C5D54,100,0,0x4C5D50,1, 0x4C5D84,100,0,0x4C5D80,1, 0x4CC6D0,100,0,0x4CC6C0,1, 0x404E13,110,0,0x404DC0,1, 0x44D7E5,110,0,0x44CB80,1, 0x4B1B93,110,0,0x4B1B50,1, 0x4B1C22,110,0,0x4B1B50,2, 0x4C5DF4,110,0,0x4C5DF0,1, 0x4C5E24,110,0,0x4C5E20,1, 0x4CC770,110,0,0x4CC760,1, 0x404E13,120,0,0x404DC0,1, 0x44D7E5,120,0,0x44CB80,1, 0x4B1B23,120,0,0x4B1AE0,1, 0x4B1BB2,120,0,0x4B1AE0,2, 0x4C5D84,120,0,0x4C5D80,1, 0x4C5DB4,120,0,0x4C5DB0,1, 0x4CC700,120,0,0x4CC6F0,1>;
using def_t = CAnimBlendAssociation *(RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *>, 0>;
META_END

META_BEGIN(AnimBlendClumpDestroy)
static int address;
static int global_address;
static const int id = 0x405240;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405240, 0x405240, 0x405240>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4052D6,100,2,0,1, 0x4052D6,110,2,0,1, 0x4052D6,120,2,0,1>;
using def_t = void *(void *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,RwInt32,RwInt32>, 0,1,2>;
META_END

META_BEGIN(AnimBlendClumpCreate)
static int address;
static int global_address;
static const int id = 0x405280;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405280, 0x405280, 0x405280>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4052DB,100,2,0,1, 0x4052DB,110,2,0,1, 0x4052DB,120,2,0,1>;
using def_t = void *(void *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,RwInt32,RwInt32>, 0,1,2>;
META_END

META_BEGIN(RpAnimBlendAllocateData)
static int address;
static int global_address;
static const int id = 0x4052A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4052A0, 0x4052A0, 0x4052A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x405492,100,0,0x405480,1, 0x405492,110,0,0x405480,1, 0x405492,120,0,0x405480,1>;
using def_t = void(RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *>, 0>;
META_END

META_BEGIN(AnimBlendClumpCopy)
static int address;
static int global_address;
static const int id = 0x4052C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4052C0, 0x4052C0, 0x4052C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4052D1,100,2,0,1, 0x4052D1,110,2,0,1, 0x4052D1,120,2,0,1>;
using def_t = void *(void *, void const *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,void const *,RwInt32,RwInt32>, 0,1,2,3>;
META_END

META_BEGIN(RpAnimBlendPluginAttach)
static int address;
static int global_address;
static const int id = 0x4052D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4052D0, 0x4052D0, 0x4052D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48D4E7,100,0,0x48D470,1, 0x48D5E7,110,0,0x48D570,1, 0x48D577,120,0,0x48D500,1>;
using def_t = RwBool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(FrameForAllChildrenCountCBnonskin)
static int address;
static int global_address;
static const int id = 0x405310;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405310, 0x405310, 0x405310>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x40531B,100,2,0,1, 0x4054AA,100,2,0,1, 0x40531B,110,2,0,1, 0x4054AA,110,2,0,1, 0x40531B,120,2,0,1, 0x4054AA,120,2,0,1>;
using def_t = RwFrame *(RwFrame *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwFrame *,void *>, 0,1>;
META_END

META_BEGIN(FrameForAllChildrenFillFrameArrayCBnonskin)
static int address;
static int global_address;
static const int id = 0x405330;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405330, 0x405330, 0x405330>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x405340,100,2,0,1, 0x4054D0,100,2,0,1, 0x405340,110,2,0,1, 0x4054D0,110,2,0,1, 0x405340,120,2,0,1, 0x4054D0,120,2,0,1>;
using def_t = RwFrame *(RwFrame *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwFrame *,void *>, 0,1>;
META_END

META_BEGIN(FrameInitCBnonskin)
static int address;
static int global_address;
static const int id = 0x405360;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405360, 0x405360, 0x405360>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4054E2,100,2,0,1, 0x4054E2,110,2,0,1, 0x4054E2,120,2,0,1>;
using def_t = void(AnimBlendFrameData *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<AnimBlendFrameData *,void *>, 0,1>;
META_END

META_BEGIN(FrameFindByNameCBnonskin)
static int address;
static int global_address;
static const int id = 0x405380;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405380, 0x405380, 0x405380>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x40544C,100,2,0,1, 0x40544C,110,2,0,1, 0x40544C,120,2,0,1>;
using def_t = void(AnimBlendFrameData *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<AnimBlendFrameData *,void *>, 0,1>;
META_END

META_BEGIN(FillFrameArrayCBnonskin)
static int address;
static int global_address;
static const int id = 0x405410;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405410, 0x405410, 0x405410>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x405472,100,2,0,1, 0x405472,110,2,0,1, 0x405472,120,2,0,1>;
using def_t = void(AnimBlendFrameData *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<AnimBlendFrameData *,void *>, 0,1>;
META_END

META_BEGIN(RpAnimBlendClumpFindFrame)
static int address;
static int global_address;
static const int id = 0x405430;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405430, 0x405430, 0x405430>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4015C3,100,0,0x401560,1, 0x4BA604,100,0,0x4BA5E0,1, 0x4015C3,110,0,0x401560,1, 0x4BA6F4,110,0,0x4BA6D0,1, 0x4015C3,120,0,0x401560,1, 0x4BA684,120,0,0x4BA660,1>;
using def_t = AnimBlendFrameData *(RpClump *, char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *,char const *>, 0,1>;
META_END

META_BEGIN(RpAnimBlendClumpFillFrameArray)
static int address;
static int global_address;
static const int id = 0x405460;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405460, 0x405460, 0x405460>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C52C3,100,0,0x4C52A0,1, 0x4C5363,110,0,0x4C5340,1, 0x4C52F3,120,0,0x4C52D0,1>;
using def_t = void(RpClump *, AnimBlendFrameData **);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *,AnimBlendFrameData **>, 0,1>;
META_END

META_BEGIN(RpAnimBlendClumpInit)
static int address;
static int global_address;
static const int id = 0x405480;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405480, 0x405480, 0x405480>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4011CC,100,0,0x401130,1, 0x403964,100,0,0x4038F0,1, 0x4BA991,100,0,0x4BA980,1, 0x4C52B2,100,0,0x4C52A0,1, 0x4011CC,110,0,0x401130,1, 0x403964,110,0,0x4038F0,1, 0x4BAA81,110,0,0x4BAA70,1, 0x4C5352,110,0,0x4C5340,1, 0x4011CC,120,0,0x401130,1, 0x403964,120,0,0x4038F0,1, 0x4BAA11,120,0,0x4BAA00,1, 0x4C52E2,120,0,0x4C52D0,1>;
using def_t = void(RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *>, 0>;
META_END

META_BEGIN(RpAnimBlendClumpIsInitialized)
static int address;
static int global_address;
static const int id = 0x405500;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405500, 0x405500, 0x405500>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4031C0,100,0,0x4031B0,1, 0x4031C0,110,0,0x4031B0,1, 0x4031C0,120,0,0x4031B0,1>;
using def_t = bool(RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *>, 0>;
META_END

META_BEGIN(RpAnimBlendClumpSetBlendDeltas)
static int address;
static int global_address;
static const int id = 0x405520;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405520, 0x405520, 0x405520>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4C831B,100,0,0x4C7FF0,1, 0x4CE82F,100,0,0x4CE810,1, 0x4D0E75,100,0,0x4D0E40,1, 0x4C83BB,110,0,0x4C8090,1, 0x4CE8CF,110,0,0x4CE8B0,1, 0x4D0F15,110,0,0x4D0EE0,1, 0x4C834B,120,0,0x4C8020,1, 0x4CE85F,120,0,0x4CE840,1, 0x4D0EA5,120,0,0x4D0E70,1>;
using def_t = void(RpClump *, unsigned int, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *,unsigned int,float>, 0,1,2>;
META_END

META_BEGIN(RpAnimBlendClumpRemoveAllAssociations)
static int address;
static int global_address;
static const int id = 0x405560;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405560, 0x405560, 0x405560>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x404D2A,100,0,0x404D20,1, 0x405255,100,0,0x405240,1, 0x4EFD09,100,0,0x4EFC40,1, 0x404D2A,110,0,0x404D20,1, 0x405255,110,0,0x405240,1, 0x4EFDB9,110,0,0x4EFCF0,1, 0x404D2A,120,0,0x404D20,1, 0x405255,120,0,0x405240,1, 0x4EFD49,120,0,0x4EFC80,1>;
using def_t = void(RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *>, 0>;
META_END

META_BEGIN(RpAnimBlendClumpRemoveAssociations)
static int address;
static int global_address;
static const int id = 0x405570;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405570, 0x405570, 0x405570>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x405567,100,0,0x405560,1, 0x4E75BD,100,0,0x4E7530,1, 0x4E7DFC,100,0,0x4E7780,1, 0x5943F7,100,0,0x5942A0,1, 0x405567,110,0,0x405560,1, 0x4E766D,110,0,0x4E75E0,1, 0x4E7EAC,110,0,0x4E7830,1, 0x5946A7,110,0,0x594550,1, 0x405567,120,0,0x405560,1, 0x4E75FD,120,0,0x4E7570,1, 0x4E7E3C,120,0,0x4E77C0,1, 0x594597,120,0,0x594440,1>;
using def_t = void(RpClump *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *,unsigned int>, 0,1>;
META_END

META_BEGIN(RpAnimBlendClumpGetAssociation)
static int address;
static int global_address;
static const int id = 0x4055C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4055C0, 0x4055C0, 0x4055C0>;
// total references count: 10en (173), 11en (173), steam (173)
using refs_t = RefList<0x42F81C,100,0,0x42F7A0,1, 0x4546F9,100,0,0x4546C0,1, 0x45470C,100,0,0x4546C0,2, 0x454722,100,0,0x4546C0,3, 0x454738,100,0,0x4546C0,4, 0x460BB4,100,0,0x45FF70,1, 0x460BC5,100,0,0x45FF70,2, 0x460BD6,100,0,0x45FF70,3, 0x460BE7,100,0,0x45FF70,4, 0x4C21BC,100,0,0x4C1B50,1, 0x4C2D39,100,0,0x4C2C90,1, 0x4C5AC2,100,0,0x4C5A40,1, 0x4C5AEA,100,0,0x4C5A40,2, 0x4C5B2A,100,0,0x4C5A40,3, 0x4C5B5A,100,0,0x4C5A40,4, 0x4C5C8D,100,0,0x4C5A40,5, 0x4C5CA4,100,0,0x4C5A40,6, 0x4C5CBB,100,0,0x4C5A40,7, 0x4C6623,100,0,0x4C65B0,1, 0x4C77D4,100,0,0x4C73F0,1, 0x4C77E3,100,0,0x4C73F0,2, 0x4C99E9,100,0,0x4C8910,1, 0x4C99FC,100,0,0x4C8910,2, 0x4CA8C4,100,0,0x4C8910,3, 0x4CA8D8,100,0,0x4C8910,4, 0x4CA919,100,0,0x4C8910,5, 0x4CA92D,100,0,0x4C8910,6, 0x4CB105,100,0,0x4C8910,7, 0x4CB151,100,0,0x4C8910,8, 0x4CB18C,100,0,0x4C8910,9, 0x4CB25A,100,0,0x4C8910,10, 0x4CB286,100,0,0x4C8910,11, 0x4CB295,100,0,0x4C8910,12, 0x4CB2A8,100,0,0x4C8910,13, 0x4CB2D4,100,0,0x4C8910,14, 0x4CB2E3,100,0,0x4C8910,15, 0x4CB2F2,100,0,0x4C8910,16, 0x4CB32C,100,0,0x4C8910,17, 0x4CB33F,100,0,0x4C8910,18, 0x4CC113,100,0,0x4CBB30,1, 0x4CF011,100,0,0x4CF000,1, 0x4D0267,100,0,0x4CFDD0,1, 0x4D076A,100,0,0x4D0690,1, 0x4D0779,100,0,0x4D0690,2, 0x4D0A11,100,0,0x4D09B0,1, 0x4D0DD8,100,0,0x4D0D10,1, 0x4D0E60,100,0,0x4D0E40,1, 0x4D111E,100,0,0x4D0F20,1, 0x4D1131,100,0,0x4D0F20,2, 0x4D32F2,100,0,0x4D30C0,1, 0x4D3316,100,0,0x4D30C0,2, 0x4D35C4,100,0,0x4D33A0,1, 0x4D3B62,100,0,0x4D3AC0,1, 0x4D3C89,100,0,0x4D3C80,1, 0x4D49A7,100,0,0x4D4970,1, 0x4D49BC,100,0,0x4D4970,2, 0x4D49D1,100,0,0x4D4970,3, 0x4D49E6,100,0,0x4D4970,4, 0x4D49FB,100,0,0x4D4970,5, 0x4D4A10,100,0,0x4D4970,6, 0x4D4A28,100,0,0x4D4970,7, 0x4D4A3C,100,0,0x4D4970,8, 0x4D4A50,100,0,0x4D4970,9, 0x4D4A64,100,0,0x4D4970,10, 0x4D4A78,100,0,0x4D4970,11, 0x4D4A8C,100,0,0x4D4970,12, 0x4D5E52,100,0,0x4D5D80,1, 0x4D5E98,100,0,0x4D5D80,2, 0x4D5FE8,100,0,0x4D5D80,3, 0x4D6063,100,0,0x4D5D80,4, 0x4D609C,100,0,0x4D5D80,5, 0x4D60B2,100,0,0x4D5D80,6, 0x4D60C8,100,0,0x4D5D80,7, 0x4D60DE,100,0,0x4D5D80,8, 0x4D6245,100,0,0x4D5D80,9, 0x4D63FA,100,0,0x4D5D80,10, 0x4D6479,100,0,0x4D5D80,11, 0x4D64A1,100,0,0x4D5D80,12, 0x4D690E,100,0,0x4D6780,1, 0x4D7630,100,0,0x4D7490,1, 0x4D7656,100,0,0x4D7490,2, 0x4D9840,100,0,0x4D94E0,1, 0x4DB7F1,100,0,0x4D94E0,2, 0x4DBEA0,100,0,0x4D94E0,3, 0x4DBEDB,100,0,0x4D94E0,4, 0x4DD229,100,0,0x4D94E0,5, 0x4DD24C,100,0,0x4D94E0,6, 0x4DF992,100,0,0x4DF940,1, 0x4DF9B7,100,0,0x4DF940,2, 0x4DF9DC,100,0,0x4DF940,3, 0x4DFA06,100,0,0x4DF940,4, 0x4E0838,100,0,0x4E07D0,1, 0x4E0849,100,0,0x4E07D0,2, 0x4E085A,100,0,0x4E07D0,3, 0x4E086B,100,0,0x4E07D0,4, 0x4E0E28,100,0,0x4E0E00,1, 0x4E4973,100,0,0x4E4920,1, 0x4E49A9,100,0,0x4E4920,2, 0x4E4A3C,100,0,0x4E4A30,1, 0x4E4A50,100,0,0x4E4A30,2, 0x4E4A81,100,0,0x4E4A30,3, 0x4E4E4D,100,0,0x4E4E20,1, 0x4E4E65,100,0,0x4E4E20,2, 0x4E4E7D,100,0,0x4E4E20,3, 0x4E4E95,100,0,0x4E4E20,4, 0x4E4EB6,100,0,0x4E4E20,5, 0x4E4ECE,100,0,0x4E4E20,6, 0x4E4EE6,100,0,0x4E4E20,7, 0x4E4EFE,100,0,0x4E4E20,8, 0x4E4F16,100,0,0x4E4E20,9, 0x4E6012,100,0,0x4E5F70,1, 0x4E6028,100,0,0x4E5F70,2, 0x4E60D7,100,0,0x4E60B0,1, 0x4E60FF,100,0,0x4E60B0,2, 0x4E61D9,100,0,0x4E6180,1, 0x4E6201,100,0,0x4E6180,2, 0x4E624C,100,0,0x4E6220,1, 0x4E6299,100,0,0x4E6220,2, 0x4E62C6,100,0,0x4E6220,3, 0x4E6832,100,0,0x4E67F0,1, 0x4E6845,100,0,0x4E67F0,2, 0x4E6861,100,0,0x4E67F0,3, 0x4E6BCD,100,0,0x4E6BA0,1, 0x4E6C4F,100,0,0x4E6BA0,2, 0x4E6CC7,100,0,0x4E6BA0,3, 0x4E6CF3,100,0,0x4E6BA0,4, 0x4E75CA,100,0,0x4E7530,1, 0x4E75E6,100,0,0x4E7530,2, 0x4E75F7,100,0,0x4E7530,3, 0x4E7B4E,100,0,0x4E7780,1, 0x4E7E09,100,0,0x4E7780,2, 0x4E7E25,100,0,0x4E7780,3, 0x4E7E36,100,0,0x4E7780,4, 0x4E7F36,100,0,0x4E7EE0,1, 0x4E8AF3,100,0,0x4E7EE0,2, 0x4E8D57,100,0,0x4E8D30,1, 0x4E9358,100,0,0x4E8EC0,1, 0x4E9D85,100,0,0x4E9B50,1, 0x4E9EBB,100,0,0x4E9B50,2, 0x4E9ECC,100,0,0x4E9B50,3, 0x4E9FEA,100,0,0x4E9B50,4, 0x4E9FFB,100,0,0x4E9B50,5, 0x4EA00F,100,0,0x4E9B50,6, 0x4EA250,100,0,0x4E9B50,7, 0x4EA2E8,100,0,0x4E9B50,8, 0x4EA319,100,0,0x4E9B50,9, 0x4EA36C,100,0,0x4EA360,1, 0x4EA380,100,0,0x4EA360,2, 0x4EA391,100,0,0x4EA360,3, 0x4EA3A2,100,0,0x4EA360,4, 0x4EFF36,100,0,0x4EFD90,1, 0x4EFF63,100,0,0x4EFD90,2, 0x4F07E9,100,0,0x4F07C0,1, 0x4F088F,100,0,0x4F0880,1, 0x4F08A0,100,0,0x4F0880,2, 0x4F08AF,100,0,0x4F0880,3, 0x4F08BE,100,0,0x4F0880,4, 0x4F08CF,100,0,0x4F0880,5, 0x4F08E0,100,0,0x4F0880,6, 0x4F08F1,100,0,0x4F0880,7, 0x4F095B,100,0,0x4F0880,8, 0x4F0972,100,0,0x4F0880,9, 0x4F0D50,100,0,0x4F0880,10, 0x4F0D6D,100,0,0x4F0880,11, 0x4F2616,100,0,0x4F2560,1, 0x4F31E5,100,0,0x4F31D0,1, 0x55CA57,100,0,0x55CA20,1, 0x5640C8,100,0,0x564000,1, 0x5640E0,100,0,0x564000,2, 0x56414A,100,0,0x564000,3, 0x564162,100,0,0x564000,4, 0x5641DE,100,0,0x564000,5, 0x5641F6,100,0,0x564000,6, 0x42F81C,110,0,0x42F7A0,1, 0x4546F9,110,0,0x4546C0,1, 0x45470C,110,0,0x4546C0,2, 0x454722,110,0,0x4546C0,3, 0x454738,110,0,0x4546C0,4, 0x460BB4,110,0,0x45FF70,1, 0x460BC5,110,0,0x45FF70,2, 0x460BD6,110,0,0x45FF70,3, 0x460BE7,110,0,0x45FF70,4, 0x4C225C,110,0,0x4C1BF0,1, 0x4C2DD9,110,0,0x4C2D30,1, 0x4C5B62,110,0,0x4C5AE0,1, 0x4C5B8A,110,0,0x4C5AE0,2, 0x4C5BCA,110,0,0x4C5AE0,3, 0x4C5BFA,110,0,0x4C5AE0,4, 0x4C5D2D,110,0,0x4C5AE0,5, 0x4C5D44,110,0,0x4C5AE0,6, 0x4C5D5B,110,0,0x4C5AE0,7, 0x4C66C3,110,0,0x4C6650,1, 0x4C7874,110,0,0x4C7490,1, 0x4C7883,110,0,0x4C7490,2, 0x4C9A89,110,0,0x4C89B0,1, 0x4C9A9C,110,0,0x4C89B0,2, 0x4CA964,110,0,0x4C89B0,3, 0x4CA978,110,0,0x4C89B0,4, 0x4CA9B9,110,0,0x4C89B0,5, 0x4CA9CD,110,0,0x4C89B0,6, 0x4CB1A5,110,0,0x4C89B0,7, 0x4CB1F1,110,0,0x4C89B0,8, 0x4CB22C,110,0,0x4C89B0,9, 0x4CB2FA,110,0,0x4C89B0,10, 0x4CB326,110,0,0x4C89B0,11, 0x4CB335,110,0,0x4C89B0,12, 0x4CB348,110,0,0x4C89B0,13, 0x4CB374,110,0,0x4C89B0,14, 0x4CB383,110,0,0x4C89B0,15, 0x4CB392,110,0,0x4C89B0,16, 0x4CB3CC,110,0,0x4C89B0,17, 0x4CB3DF,110,0,0x4C89B0,18, 0x4CC1B3,110,0,0x4CBBD0,1, 0x4CF0B1,110,0,0x4CF0A0,1, 0x4D0307,110,0,0x4CFE70,1, 0x4D080A,110,0,0x4D0730,1, 0x4D0819,110,0,0x4D0730,2, 0x4D0AB1,110,0,0x4D0A50,1, 0x4D0E78,110,0,0x4D0DB0,1, 0x4D0F00,110,0,0x4D0EE0,1, 0x4D11BE,110,0,0x4D0FC0,1, 0x4D11D1,110,0,0x4D0FC0,2, 0x4D3392,110,0,0x4D3160,1, 0x4D33B6,110,0,0x4D3160,2, 0x4D3664,110,0,0x4D3440,1, 0x4D3C02,110,0,0x4D3B60,1, 0x4D3D29,110,0,0x4D3D20,1, 0x4D4A47,110,0,0x4D4A10,1, 0x4D4A5C,110,0,0x4D4A10,2, 0x4D4A71,110,0,0x4D4A10,3, 0x4D4A86,110,0,0x4D4A10,4, 0x4D4A9B,110,0,0x4D4A10,5, 0x4D4AB0,110,0,0x4D4A10,6, 0x4D4AC8,110,0,0x4D4A10,7, 0x4D4ADC,110,0,0x4D4A10,8, 0x4D4AF0,110,0,0x4D4A10,9, 0x4D4B04,110,0,0x4D4A10,10, 0x4D4B18,110,0,0x4D4A10,11, 0x4D4B2C,110,0,0x4D4A10,12, 0x4D5EF2,110,0,0x4D5E20,1, 0x4D5F38,110,0,0x4D5E20,2, 0x4D6088,110,0,0x4D5E20,3, 0x4D6103,110,0,0x4D5E20,4, 0x4D613C,110,0,0x4D5E20,5, 0x4D6152,110,0,0x4D5E20,6, 0x4D6168,110,0,0x4D5E20,7, 0x4D617E,110,0,0x4D5E20,8, 0x4D62E5,110,0,0x4D5E20,9, 0x4D649A,110,0,0x4D5E20,10, 0x4D6519,110,0,0x4D5E20,11, 0x4D6541,110,0,0x4D5E20,12, 0x4D69AE,110,0,0x4D6820,1, 0x4D76D0,110,0,0x4D7530,1, 0x4D76F6,110,0,0x4D7530,2, 0x4D98E0,110,0,0x4D9580,1, 0x4DB8A1,110,0,0x4D9580,2, 0x4DBF50,110,0,0x4D9580,3, 0x4DBF8B,110,0,0x4D9580,4, 0x4DD2D9,110,0,0x4D9580,5, 0x4DD2FC,110,0,0x4D9580,6, 0x4DFA42,110,0,0x4DF9F0,1, 0x4DFA67,110,0,0x4DF9F0,2, 0x4DFA8C,110,0,0x4DF9F0,3, 0x4DFAB6,110,0,0x4DF9F0,4, 0x4E08E8,110,0,0x4E0880,1, 0x4E08F9,110,0,0x4E0880,2, 0x4E090A,110,0,0x4E0880,3, 0x4E091B,110,0,0x4E0880,4, 0x4E0ED8,110,0,0x4E0EB0,1, 0x4E4A23,110,0,0x4E49D0,1, 0x4E4A59,110,0,0x4E49D0,2, 0x4E4AEC,110,0,0x4E4AE0,1, 0x4E4B00,110,0,0x4E4AE0,2, 0x4E4B31,110,0,0x4E4AE0,3, 0x4E4EFD,110,0,0x4E4ED0,1, 0x4E4F15,110,0,0x4E4ED0,2, 0x4E4F2D,110,0,0x4E4ED0,3, 0x4E4F45,110,0,0x4E4ED0,4, 0x4E4F66,110,0,0x4E4ED0,5, 0x4E4F7E,110,0,0x4E4ED0,6, 0x4E4F96,110,0,0x4E4ED0,7, 0x4E4FAE,110,0,0x4E4ED0,8, 0x4E4FC6,110,0,0x4E4ED0,9, 0x4E60C2,110,0,0x4E6020,1, 0x4E60D8,110,0,0x4E6020,2, 0x4E6187,110,0,0x4E6160,1, 0x4E61AF,110,0,0x4E6160,2, 0x4E6289,110,0,0x4E6230,1, 0x4E62B1,110,0,0x4E6230,2, 0x4E62FC,110,0,0x4E62D0,1, 0x4E6349,110,0,0x4E62D0,2, 0x4E6376,110,0,0x4E62D0,3, 0x4E68E2,110,0,0x4E68A0,1, 0x4E68F5,110,0,0x4E68A0,2, 0x4E6911,110,0,0x4E68A0,3, 0x4E6C7D,110,0,0x4E6C50,1, 0x4E6CFF,110,0,0x4E6C50,2, 0x4E6D77,110,0,0x4E6C50,3, 0x4E6DA3,110,0,0x4E6C50,4, 0x4E767A,110,0,0x4E75E0,1, 0x4E7696,110,0,0x4E75E0,2, 0x4E76A7,110,0,0x4E75E0,3, 0x4E7BFE,110,0,0x4E7830,1, 0x4E7EB9,110,0,0x4E7830,2, 0x4E7ED5,110,0,0x4E7830,3, 0x4E7EE6,110,0,0x4E7830,4, 0x4E7FE6,110,0,0x4E7F90,1, 0x4E8BA3,110,0,0x4E7F90,2, 0x4E8E07,110,0,0x4E8DE0,1, 0x4E9408,110,0,0x4E8F70,1, 0x4E9E35,110,0,0x4E9C00,1, 0x4E9F6B,110,0,0x4E9C00,2, 0x4E9F7C,110,0,0x4E9C00,3, 0x4EA09A,110,0,0x4E9C00,4, 0x4EA0AB,110,0,0x4E9C00,5, 0x4EA0BF,110,0,0x4E9C00,6, 0x4EA300,110,0,0x4E9C00,7, 0x4EA398,110,0,0x4E9C00,8, 0x4EA3C9,110,0,0x4E9C00,9, 0x4EA41C,110,0,0x4EA410,1, 0x4EA430,110,0,0x4EA410,2, 0x4EA441,110,0,0x4EA410,3, 0x4EA452,110,0,0x4EA410,4, 0x4EFFE6,110,0,0x4EFE40,1, 0x4F0013,110,0,0x4EFE40,2, 0x4F0899,110,0,0x4F0870,1, 0x4F093F,110,0,0x4F0930,1, 0x4F0950,110,0,0x4F0930,2, 0x4F095F,110,0,0x4F0930,3, 0x4F096E,110,0,0x4F0930,4, 0x4F097F,110,0,0x4F0930,5, 0x4F0990,110,0,0x4F0930,6, 0x4F09A1,110,0,0x4F0930,7, 0x4F0A0B,110,0,0x4F0930,8, 0x4F0A22,110,0,0x4F0930,9, 0x4F0E00,110,0,0x4F0930,10, 0x4F0E1D,110,0,0x4F0930,11, 0x4F26C6,110,0,0x4F2610,1, 0x4F3295,110,0,0x4F3280,1, 0x55CB87,110,0,0x55CB50,1, 0x5641F8,110,0,0x564130,1, 0x564210,110,0,0x564130,2, 0x56427A,110,0,0x564130,3, 0x564292,110,0,0x564130,4, 0x56430E,110,0,0x564130,5, 0x564326,110,0,0x564130,6, 0x42F81C,120,0,0x42F7A0,1, 0x4546F9,120,0,0x4546C0,1, 0x45470C,120,0,0x4546C0,2, 0x454722,120,0,0x4546C0,3, 0x454738,120,0,0x4546C0,4, 0x460BB4,120,0,0x45FF70,1, 0x460BC5,120,0,0x45FF70,2, 0x460BD6,120,0,0x45FF70,3, 0x460BE7,120,0,0x45FF70,4, 0x4C21EC,120,0,0x4C1B80,1, 0x4C2D69,120,0,0x4C2CC0,1, 0x4C5AF2,120,0,0x4C5A70,1, 0x4C5B1A,120,0,0x4C5A70,2, 0x4C5B5A,120,0,0x4C5A70,3, 0x4C5B8A,120,0,0x4C5A70,4, 0x4C5CBD,120,0,0x4C5A70,5, 0x4C5CD4,120,0,0x4C5A70,6, 0x4C5CEB,120,0,0x4C5A70,7, 0x4C6653,120,0,0x4C65E0,1, 0x4C7804,120,0,0x4C7420,1, 0x4C7813,120,0,0x4C7420,2, 0x4C9A19,120,0,0x4C8940,1, 0x4C9A2C,120,0,0x4C8940,2, 0x4CA8F4,120,0,0x4C8940,3, 0x4CA908,120,0,0x4C8940,4, 0x4CA949,120,0,0x4C8940,5, 0x4CA95D,120,0,0x4C8940,6, 0x4CB135,120,0,0x4C8940,7, 0x4CB181,120,0,0x4C8940,8, 0x4CB1BC,120,0,0x4C8940,9, 0x4CB28A,120,0,0x4C8940,10, 0x4CB2B6,120,0,0x4C8940,11, 0x4CB2C5,120,0,0x4C8940,12, 0x4CB2D8,120,0,0x4C8940,13, 0x4CB304,120,0,0x4C8940,14, 0x4CB313,120,0,0x4C8940,15, 0x4CB322,120,0,0x4C8940,16, 0x4CB35C,120,0,0x4C8940,17, 0x4CB36F,120,0,0x4C8940,18, 0x4CC143,120,0,0x4CBB60,1, 0x4CF041,120,0,0x4CF030,1, 0x4D0297,120,0,0x4CFE00,1, 0x4D079A,120,0,0x4D06C0,1, 0x4D07A9,120,0,0x4D06C0,2, 0x4D0A41,120,0,0x4D09E0,1, 0x4D0E08,120,0,0x4D0D40,1, 0x4D0E90,120,0,0x4D0E70,1, 0x4D114E,120,0,0x4D0F50,1, 0x4D1161,120,0,0x4D0F50,2, 0x4D3322,120,0,0x4D30F0,1, 0x4D3346,120,0,0x4D30F0,2, 0x4D35F4,120,0,0x4D33D0,1, 0x4D3B92,120,0,0x4D3AF0,1, 0x4D3CB9,120,0,0x4D3CB0,1, 0x4D49D7,120,0,0x4D49A0,1, 0x4D49EC,120,0,0x4D49A0,2, 0x4D4A01,120,0,0x4D49A0,3, 0x4D4A16,120,0,0x4D49A0,4, 0x4D4A2B,120,0,0x4D49A0,5, 0x4D4A40,120,0,0x4D49A0,6, 0x4D4A58,120,0,0x4D49A0,7, 0x4D4A6C,120,0,0x4D49A0,8, 0x4D4A80,120,0,0x4D49A0,9, 0x4D4A94,120,0,0x4D49A0,10, 0x4D4AA8,120,0,0x4D49A0,11, 0x4D4ABC,120,0,0x4D49A0,12, 0x4D5E82,120,0,0x4D5DB0,1, 0x4D5EC8,120,0,0x4D5DB0,2, 0x4D6018,120,0,0x4D5DB0,3, 0x4D6093,120,0,0x4D5DB0,4, 0x4D60CC,120,0,0x4D5DB0,5, 0x4D60E2,120,0,0x4D5DB0,6, 0x4D60F8,120,0,0x4D5DB0,7, 0x4D610E,120,0,0x4D5DB0,8, 0x4D6275,120,0,0x4D5DB0,9, 0x4D642A,120,0,0x4D5DB0,10, 0x4D64A9,120,0,0x4D5DB0,11, 0x4D64D1,120,0,0x4D5DB0,12, 0x4D693E,120,0,0x4D67B0,1, 0x4D7660,120,0,0x4D74C0,1, 0x4D7686,120,0,0x4D74C0,2, 0x4D9870,120,0,0x4D9510,1, 0x4DB831,120,0,0x4D9510,2, 0x4DBEE0,120,0,0x4D9510,3, 0x4DBF1B,120,0,0x4D9510,4, 0x4DD269,120,0,0x4D9510,5, 0x4DD28C,120,0,0x4D9510,6, 0x4DF9D2,120,0,0x4DF980,1, 0x4DF9F7,120,0,0x4DF980,2, 0x4DFA1C,120,0,0x4DF980,3, 0x4DFA46,120,0,0x4DF980,4, 0x4E0878,120,0,0x4E0810,1, 0x4E0889,120,0,0x4E0810,2, 0x4E089A,120,0,0x4E0810,3, 0x4E08AB,120,0,0x4E0810,4, 0x4E0E68,120,0,0x4E0E40,1, 0x4E49B3,120,0,0x4E4960,1, 0x4E49E9,120,0,0x4E4960,2, 0x4E4A7C,120,0,0x4E4A70,1, 0x4E4A90,120,0,0x4E4A70,2, 0x4E4AC1,120,0,0x4E4A70,3, 0x4E4E8D,120,0,0x4E4E60,1, 0x4E4EA5,120,0,0x4E4E60,2, 0x4E4EBD,120,0,0x4E4E60,3, 0x4E4ED5,120,0,0x4E4E60,4, 0x4E4EF6,120,0,0x4E4E60,5, 0x4E4F0E,120,0,0x4E4E60,6, 0x4E4F26,120,0,0x4E4E60,7, 0x4E4F3E,120,0,0x4E4E60,8, 0x4E4F56,120,0,0x4E4E60,9, 0x4E6052,120,0,0x4E5FB0,1, 0x4E6068,120,0,0x4E5FB0,2, 0x4E6117,120,0,0x4E60F0,1, 0x4E613F,120,0,0x4E60F0,2, 0x4E6219,120,0,0x4E61C0,1, 0x4E6241,120,0,0x4E61C0,2, 0x4E628C,120,0,0x4E6260,1, 0x4E62D9,120,0,0x4E6260,2, 0x4E6306,120,0,0x4E6260,3, 0x4E6872,120,0,0x4E6830,1, 0x4E6885,120,0,0x4E6830,2, 0x4E68A1,120,0,0x4E6830,3, 0x4E6C0D,120,0,0x4E6BE0,1, 0x4E6C8F,120,0,0x4E6BE0,2, 0x4E6D07,120,0,0x4E6BE0,3, 0x4E6D33,120,0,0x4E6BE0,4, 0x4E760A,120,0,0x4E7570,1, 0x4E7626,120,0,0x4E7570,2, 0x4E7637,120,0,0x4E7570,3, 0x4E7B8E,120,0,0x4E77C0,1, 0x4E7E49,120,0,0x4E77C0,2, 0x4E7E65,120,0,0x4E77C0,3, 0x4E7E76,120,0,0x4E77C0,4, 0x4E7F76,120,0,0x4E7F20,1, 0x4E8B33,120,0,0x4E7F20,2, 0x4E8D97,120,0,0x4E8D70,1, 0x4E9398,120,0,0x4E8F00,1, 0x4E9DC5,120,0,0x4E9B90,1, 0x4E9EFB,120,0,0x4E9B90,2, 0x4E9F0C,120,0,0x4E9B90,3, 0x4EA02A,120,0,0x4E9B90,4, 0x4EA03B,120,0,0x4E9B90,5, 0x4EA04F,120,0,0x4E9B90,6, 0x4EA290,120,0,0x4E9B90,7, 0x4EA328,120,0,0x4E9B90,8, 0x4EA359,120,0,0x4E9B90,9, 0x4EA3AC,120,0,0x4EA3A0,1, 0x4EA3C0,120,0,0x4EA3A0,2, 0x4EA3D1,120,0,0x4EA3A0,3, 0x4EA3E2,120,0,0x4EA3A0,4, 0x4EFF76,120,0,0x4EFDD0,1, 0x4EFFA3,120,0,0x4EFDD0,2, 0x4F0829,120,0,0x4F0800,1, 0x4F08CF,120,0,0x4F08C0,1, 0x4F08E0,120,0,0x4F08C0,2, 0x4F08EF,120,0,0x4F08C0,3, 0x4F08FE,120,0,0x4F08C0,4, 0x4F090F,120,0,0x4F08C0,5, 0x4F0920,120,0,0x4F08C0,6, 0x4F0931,120,0,0x4F08C0,7, 0x4F099B,120,0,0x4F08C0,8, 0x4F09B2,120,0,0x4F08C0,9, 0x4F0D90,120,0,0x4F08C0,10, 0x4F0DAD,120,0,0x4F08C0,11, 0x4F2656,120,0,0x4F25A0,1, 0x4F3225,120,0,0x4F3210,1, 0x55CB37,120,0,0x55CB00,1, 0x5641A8,120,0,0x5640E0,1, 0x5641C0,120,0,0x5640E0,2, 0x56422A,120,0,0x5640E0,3, 0x564242,120,0,0x5640E0,4, 0x5642BE,120,0,0x5640E0,5, 0x5642D6,120,0,0x5640E0,6>;
using def_t = CAnimBlendAssociation *(RpClump *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *,unsigned int>, 0,1>;
META_END

META_BEGIN(RpAnimBlendClumpGetMainAssociation)
static int address;
static int global_address;
static const int id = 0x4055F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4055F0, 0x4055F0, 0x4055F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x59368B,100,0,0x593670,1, 0x59393B,110,0,0x593920,1, 0x59382B,120,0,0x593810,1>;
using def_t = CAnimBlendAssociation *(RpClump *, CAnimBlendAssociation **, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *,CAnimBlendAssociation **,float *>, 0,1,2>;
META_END

META_BEGIN(RpAnimBlendClumpGetMainPartialAssociation)
static int address;
static int global_address;
static const int id = 0x405680;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405680, 0x405680, 0x405680>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5939CE,100,0,0x593670,1, 0x593C7E,110,0,0x593920,1, 0x593B6E,120,0,0x593810,1>;
using def_t = CAnimBlendAssociation *(RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *>, 0>;
META_END

META_BEGIN(RpAnimBlendClumpGetMainAssociation_N)
static int address;
static int global_address;
static const int id = 0x4056D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4056D0, 0x4056D0, 0x4056D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x593BC6,100,0,0x593BB0,1, 0x593E76,110,0,0x593E60,1, 0x593D66,120,0,0x593D50,1>;
using def_t = CAnimBlendAssociation *(RpClump *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *,int>, 0,1>;
META_END

META_BEGIN(RpAnimBlendClumpGetMainPartialAssociation_N)
static int address;
static int global_address;
static const int id = 0x405710;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405710, 0x405710, 0x405710>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x593E05,100,0,0x593BB0,1, 0x5940B5,110,0,0x593E60,1, 0x593FA5,120,0,0x593D50,1>;
using def_t = CAnimBlendAssociation *(RpClump *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *,int>, 0,1>;
META_END

META_BEGIN_OVERLOADED(RpAnimBlendClumpGetFirstAssociation, CAnimBlendAssociation *(*)(RpClump *, unsigned int))
static int address;
static int global_address;
static const int id = 0x405750;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405750, 0x405750, 0x405750>;
// total references count: 10en (13), 11en (13), steam (13)
using refs_t = RefList<0x4C5AAF,100,0,0x4C5A40,1, 0x4C5BBF,100,0,0x4C5A40,2, 0x4D1178,100,0,0x4D0F20,1, 0x4D3BA4,100,0,0x4D3AC0,1, 0x4D3BDE,100,0,0x4D3AC0,2, 0x4E77C3,100,0,0x4E7780,1, 0x4E7919,100,0,0x4E7780,2, 0x4EA54F,100,0,0x4EA420,1, 0x4EA5EB,100,0,0x4EA420,2, 0x4EA6A3,100,0,0x4EA420,3, 0x4F03C5,100,0,0x4EFD90,1, 0x5588CF,100,0,0x558550,1, 0x55FEF3,100,0,0x55F950,1, 0x4C5B4F,110,0,0x4C5AE0,1, 0x4C5C5F,110,0,0x4C5AE0,2, 0x4D1218,110,0,0x4D0FC0,1, 0x4D3C44,110,0,0x4D3B60,1, 0x4D3C7E,110,0,0x4D3B60,2, 0x4E7873,110,0,0x4E7830,1, 0x4E79C9,110,0,0x4E7830,2, 0x4EA5FF,110,0,0x4EA4D0,1, 0x4EA69B,110,0,0x4EA4D0,2, 0x4EA753,110,0,0x4EA4D0,3, 0x4F0475,110,0,0x4EFE40,1, 0x5589FF,110,0,0x558680,1, 0x560023,110,0,0x55FA80,1, 0x4C5ADF,120,0,0x4C5A70,1, 0x4C5BEF,120,0,0x4C5A70,2, 0x4D11A8,120,0,0x4D0F50,1, 0x4D3BD4,120,0,0x4D3AF0,1, 0x4D3C0E,120,0,0x4D3AF0,2, 0x4E7803,120,0,0x4E77C0,1, 0x4E7959,120,0,0x4E77C0,2, 0x4EA58F,120,0,0x4EA460,1, 0x4EA62B,120,0,0x4EA460,2, 0x4EA6E3,120,0,0x4EA460,3, 0x4F0405,120,0,0x4EFDD0,1, 0x5589AF,120,0,0x558630,1, 0x55FFD3,120,0,0x55FA30,1>;
using def_t = CAnimBlendAssociation *(RpClump *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpClump *,unsigned int>, 0,1>;
META_END

META_BEGIN_OVERLOADED(RpAnimBlendGetNextAssociation, CAnimBlendAssociation *(*)(CAnimBlendAssociation *))
static int address;
static int global_address;
static const int id = 0x405780;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405780, 0x405780, 0x405780>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4C5D6D,100,0,0x4C5D50,1, 0x4C5D9D,100,0,0x4C5D80,1, 0x4CC774,100,0,0x4CC6C0,1, 0x4C5E0D,110,0,0x4C5DF0,1, 0x4C5E3D,110,0,0x4C5E20,1, 0x4CC814,110,0,0x4CC760,1, 0x4C5D9D,120,0,0x4C5D80,1, 0x4C5DCD,120,0,0x4C5DB0,1, 0x4CC7A4,120,0,0x4CC6F0,1>;
using def_t = CAnimBlendAssociation *(CAnimBlendAssociation *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *>, 0>;
META_END

META_BEGIN_OVERLOADED(RpAnimBlendGetNextAssociation, CAnimBlendAssociation *(*)(CAnimBlendAssociation *, unsigned int))
static int address;
static int global_address;
static const int id = 0x4057A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4057A0, 0x4057A0, 0x4057A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C5BE6,100,0,0x4C5A40,1, 0x4C5C86,110,0,0x4C5AE0,1, 0x4C5C16,120,0,0x4C5A70,1>;
using def_t = CAnimBlendAssociation *(CAnimBlendAssociation *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,unsigned int>, 0,1>;
META_END

}
