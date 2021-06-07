/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN_OVERLOADED(CBoat, void(int, unsigned char))
static int address;
static int global_address;
static const int id = 0x53E3E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53E3E0, 0x53E620, 0x53E5D0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x43C4B2,100,0,0x43AEA0,1, 0x4A1C13,100,0,0x4A1B40,1, 0x542760,100,0,0x5426E0,1, 0x595460,100,0,0x595240,1, 0x43C4B2,110,0,0x43AEA0,1, 0x4A1D03,110,0,0x4A1C30,1, 0x5429A0,110,0,0x542920,1, 0x595710,110,0,0x5954F0,1, 0x43C4B2,120,0,0x43AEA0,1, 0x4A1C93,120,0,0x4A1BC0,1, 0x542950,120,0,0x5428D0,1, 0x595600,120,0,0x5953E0,1>;
using def_t = CBoat *(CBoat *, int, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBoat *,int,unsigned char>, 0,1,2>;
META_END

DTOR_META_BEGIN(CBoat)
static int address;
static int global_address;
static const int id = 0x53E790;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53E790, 0x53E9D0, 0x53E980>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x542603,100,0,0x5425E0,1, 0x5425F4,100,2,0,1, 0x542843,110,0,0x542820,1, 0x542834,110,2,0,1, 0x5427F3,120,0,0x5427D0,1, 0x5427E4,120,2,0,1>;
using def_t = void(CBoat *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBoat *>, 0>;
META_END

META_BEGIN(CBoat::SetModelIndex)
static int address;
static int global_address;
static const int id = 0x53E7B0;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x53E7B0, 0x53E9F0, 0x53E9A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600EB0,100,2,0x600EA4,1, 0x600C8C,110,2,0x600C8C,1, 0x60DC84,120,2,0x60DC84,1>;
using def_t = void(CBoat *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBoat *,unsigned int>, 0,1>;
META_END

META_BEGIN(CBoat::SetupModelNodes)
static int address;
static int global_address;
static const int id = 0x53E7D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53E7D0, 0x53EA10, 0x53E9C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x53E7BF,100,0,0x53E7B0,1, 0x53E9FF,110,0,0x53E9F0,1, 0x53E9AF,120,0,0x53E9A0,1>;
using def_t = void(CBoat *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBoat *>, 0>;
META_END

META_BEGIN(CBoat::GetComponentWorldPosition)
static int address;
static int global_address;
static const int id = 0x53E810;
static const bool is_virtual = true;
static const int vtable_index = 19;
using mv_addresses_t = MvAddresses<0x53E810, 0x53EA50, 0x53EA00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600EF0,100,2,0x600EA4,1, 0x600C8C,110,2,0x600C8C,1, 0x60DC84,120,2,0x60DC84,1>;
using def_t = void(CBoat *, int, CVector &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBoat *,int,CVector &>, 0,1,2>;
META_END

META_BEGIN(CBoat::IsComponentPresent)
static int address;
static int global_address;
static const int id = 0x53E870;
static const bool is_virtual = true;
static const int vtable_index = 20;
using mv_addresses_t = MvAddresses<0x53E870, 0x53EAB0, 0x53EA60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600EF4,100,2,0x600EA4,1, 0x600C8C,110,2,0x600C8C,1, 0x60DC84,120,2,0x60DC84,1>;
using def_t = bool(CBoat *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBoat *,int>, 0,1>;
META_END

META_BEGIN(CBoat::PreRender)
static int address;
static int global_address;
static const int id = 0x53E880;
static const bool is_virtual = true;
static const int vtable_index = 12;
using mv_addresses_t = MvAddresses<0x53E880, 0x53EAC0, 0x53EA70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600ED4,100,2,0x600EA4,1, 0x600C8C,110,2,0x600C8C,1, 0x60DC84,120,2,0x60DC84,1>;
using def_t = void(CBoat *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBoat *>, 0>;
META_END

META_BEGIN(CBoat::Render)
static int address;
static int global_address;
static const int id = 0x53E890;
static const bool is_virtual = true;
static const int vtable_index = 13;
using mv_addresses_t = MvAddresses<0x53E890, 0x53EAD0, 0x53EA80>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600ED8,100,2,0x600EA4,1, 0x600C8C,110,2,0x600C8C,1, 0x60DC84,120,2,0x60DC84,1>;
using def_t = void(CBoat *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBoat *>, 0>;
META_END

META_BEGIN(CBoat::ProcessControlInputs)
static int address;
static int global_address;
static const int id = 0x53EC70;
static const bool is_virtual = true;
static const int vtable_index = 18;
using mv_addresses_t = MvAddresses<0x53EC70, 0x53EEB0, 0x53EE60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600EEC,100,2,0x600EA4,1, 0x600C8C,110,2,0x600C8C,1, 0x60DC84,120,2,0x60DC84,1>;
using def_t = void(CBoat *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBoat *,unsigned char>, 0,1>;
META_END

META_BEGIN(CBoat::ProcessControl)
static int address;
static int global_address;
static const int id = 0x53EF10;
static const bool is_virtual = true;
static const int vtable_index = 8;
using mv_addresses_t = MvAddresses<0x53EF10, 0x53F150, 0x53F100>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600EC4,100,2,0x600EA4,1, 0x600C8C,110,2,0x600C8C,1, 0x60DC84,120,2,0x60DC84,1>;
using def_t = void(CBoat *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBoat *>, 0>;
META_END

META_BEGIN(CBoat::Teleport)
static int address;
static int global_address;
static const int id = 0x541970;
static const bool is_virtual = true;
static const int vtable_index = 11;
using mv_addresses_t = MvAddresses<0x541970, 0x541BB0, 0x541B60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600ED0,100,2,0x600EA4,1, 0x600C8C,110,2,0x600C8C,1, 0x60DC84,120,2,0x60DC84,1>;
using def_t = void(CBoat *, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBoat *,CVector>, 0,1>;
META_END

META_BEGIN(CBoat::ApplyWaterResistance)
static int address;
static int global_address;
static const int id = 0x541A30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x541A30, 0x541C70, 0x541C20>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x540C97,100,0,0x53EF10,1, 0x540ED7,110,0,0x53F150,1, 0x540E87,120,0,0x53F100,1>;
using def_t = void(CBoat *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBoat *>, 0>;
META_END

META_BEGIN(CBoat::BlowUpCar)
static int address;
static int global_address;
static const int id = 0x541CB0;
static const bool is_virtual = true;
static const int vtable_index = 29;
using mv_addresses_t = MvAddresses<0x541CB0, 0x541EF0, 0x541EA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600F18,100,2,0x600EA4,1, 0x600C8C,110,2,0x600C8C,1, 0x60DC84,120,2,0x60DC84,1>;
using def_t = void(CBoat *, CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBoat *,CEntity *>, 0,1>;
META_END

META_BEGIN(CBoat::PruneWakeTrail)
static int address;
static int global_address;
static const int id = 0x5420D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5420D0, 0x542310, 0x5422C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x53EF7D,100,0,0x53EF10,1, 0x53F1BD,110,0,0x53F150,1, 0x53F16D,120,0,0x53F100,1>;
using def_t = void(CBoat *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBoat *>, 0>;
META_END

META_BEGIN(CBoat::AddWakePoint)
static int address;
static int global_address;
static const int id = 0x542140;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x542140, 0x542380, 0x542330>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x53FF6E,100,0,0x53EF10,1, 0x5401AE,110,0,0x53F150,1, 0x54015E,120,0,0x53F100,1>;
using def_t = void(CBoat *, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBoat *,CVector>, 0,1>;
META_END

META_BEGIN(CBoat::FillBoatList)
static int address;
static int global_address;
static const int id = 0x542250;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x542250, 0x542490, 0x542440>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5575CA,100,0,0x557570,1, 0x5576FA,110,0,0x5576A0,1, 0x5576AA,120,0,0x557650,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CBoat::IsSectorAffectedByWake)
static int address;
static int global_address;
static const int id = 0x542370;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x542370, 0x5425B0, 0x542560>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5577A6,100,0,0x557570,1, 0x5578D6,110,0,0x5576A0,1, 0x557886,120,0,0x557650,1>;
using def_t = bool(CVector2D, float, CBoat **);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector2D,float,CBoat **>, 0,1,2>;
META_END

META_BEGIN(CBoat::IsVertexAffectedByWake)
static int address;
static int global_address;
static const int id = 0x5424A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5424A0, 0x5426E0, 0x542690>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5579CC,100,0,0x557570,1, 0x557AFC,110,0,0x5576A0,1, 0x557AAC,120,0,0x557650,1>;
using def_t = float(CVector, CBoat *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,CBoat *>, 0,1>;
META_END

DEL_DTOR_META_BEGIN(CBoat)
static int address;
static int global_address;
static const int id = 0x5425E0;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x5425E0, 0x542820, 0x5427D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600EA4,100,2,0x600EA4,1, 0x600C8C,110,2,0x600C8C,1, 0x60DC84,120,2,0x60DC84,1>;
using def_t = void(CBoat *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBoat *,char>, 0,1>;
META_END

META_BEGIN(GetBoatAtomicObjectCB)
static int address;
static int global_address;
static const int id = 0x53E3C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53E3C0, 0x53E600, 0x53E5B0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x541DDC,100,2,0,1, 0x5420A1,100,2,0,1, 0x54201C,110,2,0,1, 0x5422E1,110,2,0,1, 0x541FCC,120,2,0,1, 0x542291,120,2,0,1>;
using def_t = RwObject *(RwObject *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwObject *,void *>, 0,1>;
META_END

}
