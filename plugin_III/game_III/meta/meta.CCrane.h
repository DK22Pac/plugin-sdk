/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCrane::Update)
static int address;
static int global_address;
static const int id = 0x543AC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x543AC0, 0x543D00, 0x543CB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x543A7F,100,0,0x5439E0,1, 0x543CBF,110,0,0x543C20,1, 0x543C6F,120,0,0x543BD0,1>;
using def_t = void(CCrane *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCrane *>, 0>;
META_END

META_BEGIN(CCrane::RotateCarriedCarProperly)
static int address;
static int global_address;
static const int id = 0x544700;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x544700, 0x544940, 0x5448F0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x54402A,100,0,0x543AC0,1, 0x54409A,100,0,0x543AC0,2, 0x54410C,100,0,0x543AC0,3, 0x54426A,110,0,0x543D00,1, 0x5442DA,110,0,0x543D00,2, 0x54434C,110,0,0x543D00,3, 0x54421A,120,0,0x543CB0,1, 0x54428A,120,0,0x543CB0,2, 0x5442FC,120,0,0x543CB0,3>;
using def_t = bool(CCrane *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCrane *>, 0>;
META_END

META_BEGIN(CCrane::FindCarInSectorList)
static int address;
static int global_address;
static const int id = 0x544850;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x544850, 0x544A90, 0x544A40>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x543FFC,100,0,0x543AC0,1, 0x544007,100,0,0x543AC0,2, 0x54423C,110,0,0x543D00,1, 0x544247,110,0,0x543D00,2, 0x5441EC,120,0,0x543CB0,1, 0x5441F7,120,0,0x543CB0,2>;
using def_t = void(CCrane *, CPtrList *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCrane *,CPtrList *>, 0,1>;
META_END

META_BEGIN(CCrane::DoesCranePickUpThisCarType)
static int address;
static int global_address;
static const int id = 0x544A90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x544A90, 0x544CD0, 0x544C80>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5449A1,100,0,0x544850,1, 0x5449F8,100,0,0x544850,2, 0x544BE1,110,0,0x544A90,1, 0x544C38,110,0,0x544A90,2, 0x544B91,120,0,0x544A40,1, 0x544BE8,120,0,0x544A40,2>;
using def_t = bool(CCrane *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCrane *,unsigned int>, 0,1>;
META_END

META_BEGIN(CCrane::GoTowardsTarget)
static int address;
static int global_address;
static const int id = 0x544C00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x544C00, 0x544E40, 0x544DF0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x543DAF,100,0,0x543AC0,1, 0x543EB7,100,0,0x543AC0,2, 0x5440D7,100,0,0x543AC0,3, 0x544126,100,0,0x543AC0,4, 0x5442F1,100,0,0x543AC0,5, 0x543FEF,110,0,0x543D00,1, 0x5440F7,110,0,0x543D00,2, 0x544317,110,0,0x543D00,3, 0x544366,110,0,0x543D00,4, 0x544531,110,0,0x543D00,5, 0x543F9F,120,0,0x543CB0,1, 0x5440A7,120,0,0x543CB0,2, 0x5442C7,120,0,0x543CB0,3, 0x544316,120,0,0x543CB0,4, 0x5444E1,120,0,0x543CB0,5>;
using def_t = bool(CCrane *, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCrane *,float,float,float,float>, 0,1,2,3,4>;
META_END

META_BEGIN(CCrane::GoTowardsHeightTarget)
static int address;
static int global_address;
static const int id = 0x544E50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x544E50, 0x545090, 0x545040>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x54405B,100,0,0x543AC0,1, 0x54429B,110,0,0x543D00,1, 0x54424B,120,0,0x543CB0,1>;
using def_t = bool(CCrane *, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCrane *,float,float>, 0,1,2>;
META_END

META_BEGIN(CCrane::FindParametersForTarget)
static int address;
static int global_address;
static const int id = 0x544EF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x544EF0, 0x545130, 0x5450E0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x543853,100,0,0x543650,1, 0x543872,100,0,0x543650,2, 0x543D96,100,0,0x543AC0,1, 0x543A93,110,0,0x543890,1, 0x543AB2,110,0,0x543890,2, 0x543FD6,110,0,0x543D00,1, 0x543A43,120,0,0x543840,1, 0x543A62,120,0,0x543840,2, 0x543F86,120,0,0x543CB0,1>;
using def_t = void(CCrane *, float, float, float, float *, float *, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCrane *,float,float,float,float *,float *,float *>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CCrane::CalcHookCoordinates)
static int address;
static int global_address;
static const int id = 0x544F80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x544F80, 0x5451C0, 0x545170>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x5435F6,100,0,0x543440,1, 0x543616,100,0,0x543440,2, 0x54431C,100,0,0x543AC0,1, 0x5445E0,100,0,0x543AC0,2, 0x543836,110,0,0x543680,1, 0x543856,110,0,0x543680,2, 0x54455C,110,0,0x543D00,1, 0x544820,110,0,0x543D00,2, 0x5437E6,120,0,0x543630,1, 0x543806,120,0,0x543630,2, 0x54450C,120,0,0x543CB0,1, 0x5447D0,120,0,0x543CB0,2>;
using def_t = void(CCrane *, float *, float *, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCrane *,float *,float *,float *>, 0,1,2,3>;
META_END

META_BEGIN(CCrane::SetHookMatrix)
static int address;
static int global_address;
static const int id = 0x545000;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545000, 0x545240, 0x5451F0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x54362A,100,0,0x543440,1, 0x544665,100,0,0x543AC0,1, 0x54386A,110,0,0x543680,1, 0x5448A5,110,0,0x543D00,1, 0x54381A,120,0,0x543630,1, 0x544855,120,0,0x543CB0,1>;
using def_t = void(CCrane *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCrane *>, 0>;
META_END

}
