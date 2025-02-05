/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedShelterAttractor::UpdatePedStateOnDeparture)
static int address;
static int global_address;
static const int id = 0x62AD80;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x62AD80, 0x62ADD0, 0x62AA40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE44,100,2,0x6DBE38,1, 0x6DBE34,110,2,0x6DBE28,1, 0x6DAE2C,120,2,0x6DAE20,1>;
using def_t = void(CPedShelterAttractor *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedShelterAttractor *,CPed *>, 0,1>;
META_END

META_BEGIN(CPedShelterAttractor::BroadcastDeparture)
static int address;
static int global_address;
static const int id = 0x62C480;
static const bool is_virtual = true;
static const int vtable_index = 7;
using mv_addresses_t = MvAddresses<0x62C480, 0x62C4D0, 0x62C140>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE54,100,2,0x6DBE38,1, 0x6DBE44,110,2,0x6DBE28,1, 0x6DAE3C,120,2,0x6DAE20,1>;
using def_t = bool(CPedShelterAttractor *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedShelterAttractor *,CPed *>, 0,1>;
META_END

META_BEGIN(CPedShelterAttractor::ComputeAttractHeading)
static int address;
static int global_address;
static const int id = 0x62CC30;
static const bool is_virtual = true;
static const int vtable_index = 6;
using mv_addresses_t = MvAddresses<0x62CC30, 0x62CC80, 0x62C8F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE50,100,2,0x6DBE38,1, 0x6DBE40,110,2,0x6DBE28,1, 0x6DAE38,120,2,0x6DAE20,1>;
using def_t = void(CPedShelterAttractor *, int, float &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedShelterAttractor *,int,float &>, 0,1,2>;
META_END

META_BEGIN(CPedShelterAttractor::GetDisplacement)
static int address;
static int global_address;
static const int id = 0x62CD20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62CD20, 0x62CD70, 0x62C9E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x62CEE6,100,0,0x62CED0,1, 0x62CF36,110,0,0x62CF20,1, 0x62CBA6,120,0,0x62CB90,1>;
using def_t = CVector *(CVector *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *,int>, 0,1>;
META_END

META_BEGIN(CPedShelterAttractor::ComputeAttractPos)
static int address;
static int global_address;
static const int id = 0x62CED0;
static const bool is_virtual = true;
static const int vtable_index = 5;
using mv_addresses_t = MvAddresses<0x62CED0, 0x62CF20, 0x62CB90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE4C,100,2,0x6DBE38,1, 0x6DBE3C,110,2,0x6DBE28,1, 0x6DAE34,120,2,0x6DAE20,1>;
using def_t = void(CPedShelterAttractor *, int, CVector &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedShelterAttractor *,int,CVector &>, 0,1,2>;
META_END

META_BEGIN(CPedShelterAttractor::IsAtHeadOfQueue)
static int address;
static int global_address;
static const int id = 0x62D110;
static const bool is_virtual = true;
static const int vtable_index = 4;
using mv_addresses_t = MvAddresses<0x62D110, 0x62D160, 0x62CDD0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE48,100,2,0x6DBE38,1, 0x6DBE38,110,2,0x6DBE28,1, 0x6DAE30,120,2,0x6DAE20,1>;
using def_t = bool(CPedShelterAttractor *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedShelterAttractor *,CPed *>, 0,1>;
META_END

DEL_DTOR_META_BEGIN(CPedShelterAttractor)
static int address;
static int global_address;
static const int id = 0x62D980;
static const bool is_virtual = true;
static const int vtable_index = 1;
using mv_addresses_t = MvAddresses<0x62D980, 0x62D9D0, 0x62D640>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE3C,100,2,0x6DBE38,1, 0x6DBE2C,110,2,0x6DBE28,1, 0x6DAE24,120,2,0x6DAE20,1>;
using def_t = void(CPedShelterAttractor *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedShelterAttractor *,unsigned char>, 0,1>;
META_END

DTOR_META_BEGIN(CPedShelterAttractor)
static int address;
static int global_address;
static const int id = 0x62D9F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62D9F0, 0x62DA40, 0x62D6B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x62D994,100,2,0,1, 0x62D9E4,110,2,0,1, 0x62D654,120,2,0,1>;
using def_t = void(CPedShelterAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedShelterAttractor *>, 0>;
META_END

META_BEGIN(CPedShelterAttractor::GetType)
static int address;
static int global_address;
static const int id = 0x62DA30;
static const bool is_virtual = true;
static const int vtable_index = 2;
using mv_addresses_t = MvAddresses<0x62DA30, 0x62DA80, 0x62D6F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE40,100,2,0x6DBE38,1, 0x6DBE30,110,2,0x6DBE28,1, 0x6DAE28,120,2,0x6DAE20,1>;
using def_t = ePedAttractorType(CPedShelterAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedShelterAttractor *>, 0>;
META_END

}
