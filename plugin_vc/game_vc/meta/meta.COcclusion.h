/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(COcclusion::IsAABoxOccluded)
static int address;
static int global_address;
static const int id = 0x634150;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x634150, 0x6341A0, 0x633E10>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x5BE744,100,0,0x5BE6D0,1, 0x5C0B9E,100,0,0x5BFF00,1, 0x5C0D6D,100,0,0x5BFF00,2, 0x5C0F43,100,0,0x5BFF00,3, 0x5C1118,100,0,0x5BFF00,4, 0x5BE764,110,0,0x5BE6F0,1, 0x5C0BBE,110,0,0x5BFF20,1, 0x5C0D8D,110,0,0x5BFF20,2, 0x5C0F63,110,0,0x5BFF20,3, 0x5C1138,110,0,0x5BFF20,4, 0x5BE574,120,0,0x5BE500,1, 0x5C09CE,120,0,0x5BFD30,1, 0x5C0B9D,120,0,0x5BFD30,2, 0x5C0D73,120,0,0x5BFD30,3, 0x5C0F48,120,0,0x5BFD30,4>;
using def_t = bool(CVector, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,float,float,float>, 0,1,2,3>;
META_END

META_BEGIN(COcclusion::IsPositionOccluded)
static int address;
static int global_address;
static const int id = 0x634930;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x634930, 0x634980, 0x6345F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5A6ED3,100,0,0x5A6D00,1, 0x5A6EF3,110,0,0x5A6D20,1, 0x5A6D03,120,0,0x5A6B30,1>;
using def_t = bool(CVector, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,float>, 0,1>;
META_END

META_BEGIN(COcclusion::ProcessBeforeRendering)
static int address;
static int global_address;
static const int id = 0x6363E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x6363E0, 0x636430, 0x6360A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4CA267,100,0,0x4CA260,1, 0x4CA287,110,0,0x4CA280,1, 0x4CA127,120,0,0x4CA120,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(COcclusion::AddOne)
static int address;
static int global_address;
static const int id = 0x636960;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x636960, 0x6369B0, 0x636620>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48B3D2,100,0,0x48B050,1, 0x48B3E2,110,0,0x48B060,1, 0x48B2C2,120,0,0x48AF40,1>;
using def_t = void(float, float, float, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float,float,float,float>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(COcclusion::Init)
static int address;
static int global_address;
static const int id = 0x636B30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x636B30, 0x636B80, 0x6367F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A4C2F,100,0,0x4A4B10,1, 0x4A4C4F,110,0,0x4A4B30,1, 0x4A4AF6,120,0,0x4A49D0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(COccluder::ProcessLineSegment)
static int address;
static int global_address;
static const int id = 0x635270;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x635270, 0x6352C0, 0x634F30>;
// total references count: 10en (12), 11en (12), steam (12)
using refs_t = RefList<0x63610E,100,0,0x6358D0,1, 0x636145,100,0,0x6358D0,2, 0x63617F,100,0,0x6358D0,3, 0x6361B4,100,0,0x6358D0,4, 0x6361EB,100,0,0x6358D0,5, 0x636219,100,0,0x6358D0,6, 0x636247,100,0,0x6358D0,7, 0x636274,100,0,0x6358D0,8, 0x6362A8,100,0,0x6358D0,9, 0x6362DE,100,0,0x6358D0,10, 0x636314,100,0,0x6358D0,11, 0x63634E,100,0,0x6358D0,12, 0x63615E,110,0,0x635920,1, 0x636195,110,0,0x635920,2, 0x6361CF,110,0,0x635920,3, 0x636204,110,0,0x635920,4, 0x63623B,110,0,0x635920,5, 0x636269,110,0,0x635920,6, 0x636297,110,0,0x635920,7, 0x6362C4,110,0,0x635920,8, 0x6362F8,110,0,0x635920,9, 0x63632E,110,0,0x635920,10, 0x636364,110,0,0x635920,11, 0x63639E,110,0,0x635920,12, 0x635DCE,120,0,0x635590,1, 0x635E05,120,0,0x635590,2, 0x635E3F,120,0,0x635590,3, 0x635E74,120,0,0x635590,4, 0x635EAB,120,0,0x635590,5, 0x635ED9,120,0,0x635590,6, 0x635F07,120,0,0x635590,7, 0x635F34,120,0,0x635590,8, 0x635F68,120,0,0x635590,9, 0x635F9E,120,0,0x635590,10, 0x635FD4,120,0,0x635590,11, 0x63600E,120,0,0x635590,12>;
using def_t = bool(COccluder *, int, int, CActiveOccluder *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<COccluder *,int,int,CActiveOccluder *>, 0,1,2,3>;
META_END

META_BEGIN(COccluder::ProcessOneOccluder)
static int address;
static int global_address;
static const int id = 0x6358D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x6358D0, 0x635920, 0x635590>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6365DD,100,0,0x6363E0,1, 0x63662D,110,0,0x636430,1, 0x63629D,120,0,0x6360A0,1>;
using def_t = bool(COccluder *, CActiveOccluder *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<COccluder *,CActiveOccluder *>, 0,1>;
META_END

META_BEGIN(DoesInfiniteLineTouchScreen)
static int address;
static int global_address;
static const int id = 0x636B60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x636B60, 0x636BB0, 0x636820>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x635830,100,0,0x635270,1, 0x635880,110,0,0x6352C0,1, 0x6354F0,120,0,0x634F30,1>;
using def_t = bool(float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float>, 0,1,2,3>;
META_END

}
