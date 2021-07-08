/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CAnimBlendAssociation)
static int address;
static int global_address;
static const int id = 0x401460;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401460, 0x401460, 0x401460>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x401164,100,2,0,1, 0x401259,100,2,0,1, 0x401164,110,2,0,1, 0x401259,110,2,0,1, 0x401164,120,2,0,1, 0x401259,120,2,0,1>;
using def_t = CAnimBlendAssociation *(CAnimBlendAssociation *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *>, 0>;
META_END

CTOR_META_BEGIN_OVERLOADED(CAnimBlendAssociation, void(CAnimBlendAssociation &))
static int address;
static int global_address;
static const int id = 0x4014C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4014C0, 0x4014C0, 0x4014C0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x40140A,100,0,0x4013E0,1, 0x40144A,100,0,0x401420,1, 0x40140A,110,0,0x4013E0,1, 0x40144A,110,0,0x401420,1, 0x40140A,120,0,0x4013E0,1, 0x40144A,120,0,0x401420,1>;
using def_t = CAnimBlendAssociation *(CAnimBlendAssociation *, CAnimBlendAssociation &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,CAnimBlendAssociation &>, 0,1>;
META_END

DTOR_META_BEGIN(CAnimBlendAssociation)
static int address;
static int global_address;
static const int id = 0x401520;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401520, 0x401520, 0x401520>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x401863,100,0,0x401840,1, 0x40115F,100,2,0,1, 0x401254,100,2,0,1, 0x4012DA,100,2,0,1, 0x401854,100,2,0,1, 0x401863,110,0,0x401840,1, 0x40115F,110,2,0,1, 0x401254,110,2,0,1, 0x4012DA,110,2,0,1, 0x401854,110,2,0,1, 0x401863,120,0,0x401840,1, 0x40115F,120,2,0,1, 0x401254,120,2,0,1, 0x4012DA,120,2,0,1, 0x401854,120,2,0,1>;
using def_t = void(CAnimBlendAssociation *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *>, 0>;
META_END

META_BEGIN_OVERLOADED(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(RpClump *, CAnimBlendHierarchy *))
static int address;
static int global_address;
static const int id = 0x401560;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401560, 0x401560, 0x401560>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4011DA,100,0,0x401130,1, 0x401299,100,0,0x401220,1, 0x4011DA,110,0,0x401130,1, 0x401299,110,0,0x401220,1, 0x4011DA,120,0,0x401130,1, 0x401299,120,0,0x401220,1>;
using def_t = void(CAnimBlendAssociation *, RpClump *, CAnimBlendHierarchy *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,RpClump *,CAnimBlendHierarchy *>, 0,1,2>;
META_END

META_BEGIN_OVERLOADED(CAnimBlendAssociation::Init, void (CAnimBlendAssociation::*)(CAnimBlendAssociation &))
static int address;
static int global_address;
static const int id = 0x401620;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401620, 0x401620, 0x401620>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x40150D,100,0,0x4014C0,1, 0x40150D,110,0,0x4014C0,1, 0x40150D,120,0,0x4014C0,1>;
using def_t = void(CAnimBlendAssociation *, CAnimBlendAssociation &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,CAnimBlendAssociation &>, 0,1>;
META_END

META_BEGIN(CAnimBlendAssociation::AllocateAnimBlendNodeArray)
static int address;
static int global_address;
static const int id = 0x4016A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4016A0, 0x4016A0, 0x4016A0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x401583,100,0,0x401560,1, 0x401646,100,0,0x401620,1, 0x401583,110,0,0x401560,1, 0x401646,110,0,0x401620,1, 0x401583,120,0,0x401560,1, 0x401646,120,0,0x401620,1>;
using def_t = void(CAnimBlendAssociation *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,int>, 0,1>;
META_END

META_BEGIN(CAnimBlendAssociation::FreeAnimBlendNodeArray)
static int address;
static int global_address;
static const int id = 0x4016F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4016F0, 0x4016F0, 0x4016F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x401529,100,0,0x401520,1, 0x401529,110,0,0x401520,1, 0x401529,120,0,0x401520,1>;
using def_t = void(CAnimBlendAssociation *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *>, 0>;
META_END

META_BEGIN(CAnimBlendAssociation::SetCurrentTime)
static int address;
static int global_address;
static const int id = 0x401700;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401700, 0x401700, 0x401700>;
// total references count: 10en (30), 11en (30), steam (30)
using refs_t = RefList<0x401798,100,0,0x401780,1, 0x4017D8,100,0,0x4017D0,1, 0x404D49,100,0,0x404D20,1, 0x4D0A26,100,0,0x4D09B0,1, 0x4D3C2A,100,0,0x4D3AC0,1, 0x4E6127,100,0,0x4E60B0,1, 0x4E642E,100,0,0x4E6220,1, 0x4E676F,100,0,0x4E6220,2, 0x4E728A,100,0,0x4E6BA0,1, 0x4E72EA,100,0,0x4E6BA0,2, 0x4E749B,100,0,0x4E6BA0,3, 0x4E7800,100,0,0x4E7780,1, 0x4E7B8D,100,0,0x4E7780,2, 0x4E7D26,100,0,0x4E7780,3, 0x4E7DA3,100,0,0x4E7780,4, 0x4E823B,100,0,0x4E7EE0,1, 0x4E8A88,100,0,0x4E7EE0,2, 0x4E8B08,100,0,0x4E7EE0,3, 0x4F091A,100,0,0x4F0880,1, 0x4F092B,100,0,0x4F0880,2, 0x4F093C,100,0,0x4F0880,3, 0x4F0D25,100,0,0x4F0880,4, 0x4F0D36,100,0,0x4F0880,5, 0x55890C,100,0,0x558550,1, 0x55FF34,100,0,0x55F950,1, 0x5942F9,100,0,0x5942A0,1, 0x5943CD,100,0,0x5942A0,2, 0x59448D,100,0,0x5942A0,3, 0x59451A,100,0,0x5944B0,1, 0x594613,100,0,0x5944B0,2, 0x401798,110,0,0x401780,1, 0x4017D8,110,0,0x4017D0,1, 0x404D49,110,0,0x404D20,1, 0x4D0AC6,110,0,0x4D0A50,1, 0x4D3CCA,110,0,0x4D3B60,1, 0x4E61D7,110,0,0x4E6160,1, 0x4E64DE,110,0,0x4E62D0,1, 0x4E681F,110,0,0x4E62D0,2, 0x4E733A,110,0,0x4E6C50,1, 0x4E739A,110,0,0x4E6C50,2, 0x4E754B,110,0,0x4E6C50,3, 0x4E78B0,110,0,0x4E7830,1, 0x4E7C3D,110,0,0x4E7830,2, 0x4E7DD6,110,0,0x4E7830,3, 0x4E7E53,110,0,0x4E7830,4, 0x4E82EB,110,0,0x4E7F90,1, 0x4E8B38,110,0,0x4E7F90,2, 0x4E8BB8,110,0,0x4E7F90,3, 0x4F09CA,110,0,0x4F0930,1, 0x4F09DB,110,0,0x4F0930,2, 0x4F09EC,110,0,0x4F0930,3, 0x4F0DD5,110,0,0x4F0930,4, 0x4F0DE6,110,0,0x4F0930,5, 0x558A3C,110,0,0x558680,1, 0x560064,110,0,0x55FA80,1, 0x5945A9,110,0,0x594550,1, 0x59467D,110,0,0x594550,2, 0x59473D,110,0,0x594550,3, 0x5947CA,110,0,0x594760,1, 0x5948C3,110,0,0x594760,2, 0x401798,120,0,0x401780,1, 0x4017D8,120,0,0x4017D0,1, 0x404D49,120,0,0x404D20,1, 0x4D0A56,120,0,0x4D09E0,1, 0x4D3C5A,120,0,0x4D3AF0,1, 0x4E6167,120,0,0x4E60F0,1, 0x4E646E,120,0,0x4E6260,1, 0x4E67AF,120,0,0x4E6260,2, 0x4E72CA,120,0,0x4E6BE0,1, 0x4E732A,120,0,0x4E6BE0,2, 0x4E74DB,120,0,0x4E6BE0,3, 0x4E7840,120,0,0x4E77C0,1, 0x4E7BCD,120,0,0x4E77C0,2, 0x4E7D66,120,0,0x4E77C0,3, 0x4E7DE3,120,0,0x4E77C0,4, 0x4E827B,120,0,0x4E7F20,1, 0x4E8AC8,120,0,0x4E7F20,2, 0x4E8B48,120,0,0x4E7F20,3, 0x4F095A,120,0,0x4F08C0,1, 0x4F096B,120,0,0x4F08C0,2, 0x4F097C,120,0,0x4F08C0,3, 0x4F0D65,120,0,0x4F08C0,4, 0x4F0D76,120,0,0x4F08C0,5, 0x5589EC,120,0,0x558630,1, 0x560014,120,0,0x55FA30,1, 0x594499,120,0,0x594440,1, 0x59456D,120,0,0x594440,2, 0x59462D,120,0,0x594440,3, 0x5946BA,120,0,0x594650,1, 0x5947B3,120,0,0x594650,2>;
using def_t = void(CAnimBlendAssociation *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,float>, 0,1>;
META_END

META_BEGIN(CAnimBlendAssociation::SyncAnimation)
static int address;
static int global_address;
static const int id = 0x401780;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401780, 0x401780, 0x401780>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x403669,100,0,0x403620,1, 0x4036D5,100,0,0x4036A0,1, 0x403669,110,0,0x403620,1, 0x4036D5,110,0,0x4036A0,1, 0x403669,120,0,0x403620,1, 0x4036D5,120,0,0x4036A0,1>;
using def_t = void(CAnimBlendAssociation *, CAnimBlendAssociation *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,CAnimBlendAssociation *>, 0,1>;
META_END

META_BEGIN(CAnimBlendAssociation::GetNode)
static int address;
static int global_address;
static const int id = 0x4017B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4017B0, 0x4017B0, 0x4017B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x402522,100,0,0x4024B0,1, 0x402522,110,0,0x4024B0,1, 0x402522,120,0,0x4024B0,1>;
using def_t = CAnimBlendNode *(CAnimBlendAssociation *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,int>, 0,1>;
META_END

META_BEGIN(CAnimBlendAssociation::Start)
static int address;
static int global_address;
static const int id = 0x4017D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4017D0, 0x4017D0, 0x4017D0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x40367C,100,0,0x403620,1, 0x4036E8,100,0,0x4036A0,1, 0x4038BC,100,0,0x403710,1, 0x40367C,110,0,0x403620,1, 0x4036E8,110,0,0x4036A0,1, 0x4038BC,110,0,0x403710,1, 0x40367C,120,0,0x403620,1, 0x4036E8,120,0,0x4036A0,1, 0x4038BC,120,0,0x403710,1>;
using def_t = void(CAnimBlendAssociation *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,float>, 0,1>;
META_END

META_BEGIN(CAnimBlendAssociation::SetBlend)
static int address;
static int global_address;
static const int id = 0x4017E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4017E0, 0x4017E0, 0x4017E0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x594325,100,0,0x5942A0,1, 0x5943E5,100,0,0x5942A0,2, 0x594552,100,0,0x5944B0,1, 0x59464B,100,0,0x5944B0,2, 0x5945D5,110,0,0x594550,1, 0x594695,110,0,0x594550,2, 0x594802,110,0,0x594760,1, 0x5948FB,110,0,0x594760,2, 0x5944C5,120,0,0x594440,1, 0x594585,120,0,0x594440,2, 0x5946F2,120,0,0x594650,1, 0x5947EB,120,0,0x594650,2>;
using def_t = void(CAnimBlendAssociation *, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,float,float>, 0,1,2>;
META_END

META_BEGIN(CAnimBlendAssociation::SetDeleteCallback)
static int address;
static int global_address;
static const int id = 0x401800;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401800, 0x401800, 0x401800>;
// total references count: 10en (11), 11en (11), steam (11)
using refs_t = RefList<0x4C689B,100,0,0x4C65B0,1, 0x4CF14F,100,0,0x4CF000,1, 0x4CF15E,100,0,0x4CF000,2, 0x4D5A6A,100,0,0x4D58D0,1, 0x4D5B03,100,0,0x4D58D0,2, 0x4D5C8D,100,0,0x4D58D0,3, 0x4D5D05,100,0,0x4D58D0,4, 0x4E6883,100,0,0x4E67F0,1, 0x4F0FD1,100,0,0x4F0880,1, 0x59459E,100,0,0x5944B0,1, 0x594690,100,0,0x5944B0,2, 0x4C693B,110,0,0x4C6650,1, 0x4CF1EF,110,0,0x4CF0A0,1, 0x4CF1FE,110,0,0x4CF0A0,2, 0x4D5B0A,110,0,0x4D5970,1, 0x4D5BA3,110,0,0x4D5970,2, 0x4D5D2D,110,0,0x4D5970,3, 0x4D5DA5,110,0,0x4D5970,4, 0x4E6933,110,0,0x4E68A0,1, 0x4F1081,110,0,0x4F0930,1, 0x59484E,110,0,0x594760,1, 0x594940,110,0,0x594760,2, 0x4C68CB,120,0,0x4C65E0,1, 0x4CF17F,120,0,0x4CF030,1, 0x4CF18E,120,0,0x4CF030,2, 0x4D5A9A,120,0,0x4D5900,1, 0x4D5B33,120,0,0x4D5900,2, 0x4D5CBD,120,0,0x4D5900,3, 0x4D5D35,120,0,0x4D5900,4, 0x4E68C3,120,0,0x4E6830,1, 0x4F1011,120,0,0x4F08C0,1, 0x59473E,120,0,0x594650,1, 0x594830,120,0,0x594650,2>;
using def_t = void(CAnimBlendAssociation *, void(*)(CAnimBlendAssociation *, void *), void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,void(*)(CAnimBlendAssociation *, void *),void *>, 0,1,2>;
META_END

META_BEGIN(CAnimBlendAssociation::SetFinishCallback)
static int address;
static int global_address;
static const int id = 0x401820;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401820, 0x401820, 0x401820>;
// total references count: 10en (45), 11en (45), steam (45)
using refs_t = RefList<0x42F85C,100,0,0x42F7A0,1, 0x42FB7D,100,0,0x42F7A0,2, 0x4A0008,100,0,0x49FD30,1, 0x4D0EF5,100,0,0x4D0E40,1, 0x4D11C1,100,0,0x4D0F20,1, 0x4D3352,100,0,0x4D30C0,1, 0x4D35FD,100,0,0x4D33A0,1, 0x4D365F,100,0,0x4D33A0,2, 0x4D38E5,100,0,0x4D37D0,1, 0x4D5AF6,100,0,0x4D58D0,1, 0x4D5B45,100,0,0x4D58D0,2, 0x4D6014,100,0,0x4D5D80,1, 0x4D61CC,100,0,0x4D5D80,2, 0x4D7470,100,0,0x4D73D0,1, 0x4D7601,100,0,0x4D7490,1, 0x4DE2F2,100,0,0x4DE130,1, 0x4DE4C5,100,0,0x4DE130,2, 0x4DE8A2,100,0,0x4DE500,1, 0x4DE9D2,100,0,0x4DE500,2, 0x4DEAA5,100,0,0x4DE500,3, 0x4DEC62,100,0,0x4DEAF0,1, 0x4DF18A,100,0,0x4DEC80,1, 0x4DF3D2,100,0,0x4DF1B0,1, 0x4DF8F0,100,0,0x4DF5C0,1, 0x4E062C,100,0,0x4E03F0,1, 0x4E0905,100,0,0x4E07D0,1, 0x4E0C70,100,0,0x4E0A40,1, 0x4E0D1C,100,0,0x4E0A40,2, 0x4E184B,100,0,0x4E1010,1, 0x4E3377,100,0,0x4E32D0,1, 0x4E36B3,100,0,0x4E3640,1, 0x4E643B,100,0,0x4E6220,1, 0x4E677C,100,0,0x4E6220,2, 0x4E6901,100,0,0x4E68A0,1, 0x4E7477,100,0,0x4E6BA0,1, 0x4E773F,100,0,0x4E7530,1, 0x4E7D33,100,0,0x4E7780,1, 0x4E7EAA,100,0,0x4E7780,2, 0x4E8224,100,0,0x4E7EE0,1, 0x4E8A5F,100,0,0x4E7EE0,2, 0x4E8B4F,100,0,0x4E7EE0,3, 0x4F002C,100,0,0x4EFD90,1, 0x4F328A,100,0,0x4F31D0,1, 0x594582,100,0,0x5944B0,1, 0x59467B,100,0,0x5944B0,2, 0x42F85C,110,0,0x42F7A0,1, 0x42FB7D,110,0,0x42F7A0,2, 0x4A00F8,110,0,0x49FE20,1, 0x4D0F95,110,0,0x4D0EE0,1, 0x4D1261,110,0,0x4D0FC0,1, 0x4D33F2,110,0,0x4D3160,1, 0x4D369D,110,0,0x4D3440,1, 0x4D36FF,110,0,0x4D3440,2, 0x4D3985,110,0,0x4D3870,1, 0x4D5B96,110,0,0x4D5970,1, 0x4D5BE5,110,0,0x4D5970,2, 0x4D60B4,110,0,0x4D5E20,1, 0x4D626C,110,0,0x4D5E20,2, 0x4D7510,110,0,0x4D7470,1, 0x4D76A1,110,0,0x4D7530,1, 0x4DE3A2,110,0,0x4DE1E0,1, 0x4DE575,110,0,0x4DE1E0,2, 0x4DE952,110,0,0x4DE5B0,1, 0x4DEA82,110,0,0x4DE5B0,2, 0x4DEB55,110,0,0x4DE5B0,3, 0x4DED12,110,0,0x4DEBA0,1, 0x4DF23A,110,0,0x4DED30,1, 0x4DF482,110,0,0x4DF260,1, 0x4DF9A0,110,0,0x4DF670,1, 0x4E06DC,110,0,0x4E04A0,1, 0x4E09B5,110,0,0x4E0880,1, 0x4E0D20,110,0,0x4E0AF0,1, 0x4E0DCC,110,0,0x4E0AF0,2, 0x4E18FB,110,0,0x4E10C0,1, 0x4E3427,110,0,0x4E3380,1, 0x4E3763,110,0,0x4E36F0,1, 0x4E64EB,110,0,0x4E62D0,1, 0x4E682C,110,0,0x4E62D0,2, 0x4E69B1,110,0,0x4E6950,1, 0x4E7527,110,0,0x4E6C50,1, 0x4E77EF,110,0,0x4E75E0,1, 0x4E7DE3,110,0,0x4E7830,1, 0x4E7F5A,110,0,0x4E7830,2, 0x4E82D4,110,0,0x4E7F90,1, 0x4E8B0F,110,0,0x4E7F90,2, 0x4E8BFF,110,0,0x4E7F90,3, 0x4F00DC,110,0,0x4EFE40,1, 0x4F333A,110,0,0x4F3280,1, 0x594832,110,0,0x594760,1, 0x59492B,110,0,0x594760,2, 0x42F85C,120,0,0x42F7A0,1, 0x42FB7D,120,0,0x42F7A0,2, 0x4A0088,120,0,0x49FDB0,1, 0x4D0F25,120,0,0x4D0E70,1, 0x4D11F1,120,0,0x4D0F50,1, 0x4D3382,120,0,0x4D30F0,1, 0x4D362D,120,0,0x4D33D0,1, 0x4D368F,120,0,0x4D33D0,2, 0x4D3915,120,0,0x4D3800,1, 0x4D5B26,120,0,0x4D5900,1, 0x4D5B75,120,0,0x4D5900,2, 0x4D6044,120,0,0x4D5DB0,1, 0x4D61FC,120,0,0x4D5DB0,2, 0x4D74A0,120,0,0x4D7400,1, 0x4D7631,120,0,0x4D74C0,1, 0x4DE332,120,0,0x4DE170,1, 0x4DE505,120,0,0x4DE170,2, 0x4DE8E2,120,0,0x4DE540,1, 0x4DEA12,120,0,0x4DE540,2, 0x4DEAE5,120,0,0x4DE540,3, 0x4DECA2,120,0,0x4DEB30,1, 0x4DF1CA,120,0,0x4DECC0,1, 0x4DF412,120,0,0x4DF1F0,1, 0x4DF930,120,0,0x4DF600,1, 0x4E066C,120,0,0x4E0430,1, 0x4E0945,120,0,0x4E0810,1, 0x4E0CB0,120,0,0x4E0A80,1, 0x4E0D5C,120,0,0x4E0A80,2, 0x4E188B,120,0,0x4E1050,1, 0x4E33B7,120,0,0x4E3310,1, 0x4E36F3,120,0,0x4E3680,1, 0x4E647B,120,0,0x4E6260,1, 0x4E67BC,120,0,0x4E6260,2, 0x4E6941,120,0,0x4E68E0,1, 0x4E74B7,120,0,0x4E6BE0,1, 0x4E777F,120,0,0x4E7570,1, 0x4E7D73,120,0,0x4E77C0,1, 0x4E7EEA,120,0,0x4E77C0,2, 0x4E8264,120,0,0x4E7F20,1, 0x4E8A9F,120,0,0x4E7F20,2, 0x4E8B8F,120,0,0x4E7F20,3, 0x4F006C,120,0,0x4EFDD0,1, 0x4F32CA,120,0,0x4F3210,1, 0x594722,120,0,0x594650,1, 0x59481B,120,0,0x594650,2>;
using def_t = void(CAnimBlendAssociation *, void(*)(CAnimBlendAssociation *, void *), void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,void(*)(CAnimBlendAssociation *, void *),void *>, 0,1,2>;
META_END

DEL_DTOR_META_BEGIN(CAnimBlendAssociation)
static int address;
static int global_address;
static const int id = 0x401840;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x401840, 0x401840, 0x401840>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5EA02C,100,2,0x5EA02C,1, 0x5EA02C,110,2,0x5EA02C,1, 0x5F702C,120,2,0x5F702C,1>;
using def_t = void(CAnimBlendAssociation *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,int>, 0,1>;
META_END

META_BEGIN(CAnimBlendAssociation::UpdateTime)
static int address;
static int global_address;
static const int id = 0x4031F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4031F0, 0x4031F0, 0x4031F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4025C3,100,0,0x4024B0,1, 0x4025C3,110,0,0x4024B0,1, 0x4025C3,120,0,0x4024B0,1>;
using def_t = void(CAnimBlendAssociation *, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,float,float>, 0,1,2>;
META_END

META_BEGIN(CAnimBlendAssociation::UpdateBlend)
static int address;
static int global_address;
static const int id = 0x4032B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4032B0, 0x4032B0, 0x4032B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x40250B,100,0,0x4024B0,1, 0x40250B,110,0,0x4024B0,1, 0x40250B,120,0,0x4024B0,1>;
using def_t = bool(CAnimBlendAssociation *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,float>, 0,1>;
META_END

template<>
struct stack_object<CAnimBlendAssociation> : stack_object_no_default<CAnimBlendAssociation> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CAnimBlendAssociation *>(ctor_gaddr(CAnimBlendAssociation), reinterpret_cast<CAnimBlendAssociation *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM stack_object(CAnimBlendAssociation &other) {
        plugin::CallMethodDynGlobal<CAnimBlendAssociation *, CAnimBlendAssociation &>(ctor_gaddr_o(CAnimBlendAssociation, void(CAnimBlendAssociation &)), reinterpret_cast<CAnimBlendAssociation *>(objBuff), other);
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CAnimBlendAssociation *>(dtor_gaddr(CAnimBlendAssociation), reinterpret_cast<CAnimBlendAssociation *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CAnimBlendAssociation *operator_new<CAnimBlendAssociation>() {
    void *objData = operator new(sizeof(CAnimBlendAssociation)); 
    CAnimBlendAssociation *obj = reinterpret_cast<CAnimBlendAssociation *>(objData);
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *>(ctor_gaddr(CAnimBlendAssociation), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CAnimBlendAssociation *operator_new_array<CAnimBlendAssociation>(unsigned int objCount) {
    void *objData = operator new(sizeof(CAnimBlendAssociation) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CAnimBlendAssociation *objArray = reinterpret_cast<CAnimBlendAssociation *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CAnimBlendAssociation *>(ctor_gaddr(CAnimBlendAssociation), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CAnimBlendAssociation *operator_new<CAnimBlendAssociation>(CAnimBlendAssociation &other) {
    void *objData = operator new(sizeof(CAnimBlendAssociation)); 
    CAnimBlendAssociation *obj = reinterpret_cast<CAnimBlendAssociation *>(objData);
    plugin::CallMethodDynGlobal<CAnimBlendAssociation *, CAnimBlendAssociation &>(ctor_gaddr_o(CAnimBlendAssociation, void(CAnimBlendAssociation &)), obj, other);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CAnimBlendAssociation>(CAnimBlendAssociation *obj) {
    if (obj == nullptr) return;
    plugin::CallVirtualMethod<0, CAnimBlendAssociation *, int>(obj, 1);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CAnimBlendAssociation>(CAnimBlendAssociation *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallVirtualMethod<0, CAnimBlendAssociation *, int>(&objArray[i], 1);
    operator delete(objData);
}

}
