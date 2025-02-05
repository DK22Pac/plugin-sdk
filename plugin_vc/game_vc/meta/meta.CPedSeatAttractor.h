/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedSeatAttractor::UpdatePedStateOnDeparture)
static int address;
static int global_address;
static const int id = 0x62AD90;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x62AD90, 0x62ADE0, 0x62AA50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBEBC,100,2,0x6DBEB0,1, 0x6DBEAC,110,2,0x6DBEA0,1, 0x6DAEA4,120,2,0x6DAE98,1>;
using def_t = void(CPedSeatAttractor *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedSeatAttractor *,CPed *>, 0,1>;
META_END

DEL_DTOR_META_BEGIN(CPedSeatAttractor)
static int address;
static int global_address;
static const int id = 0x62DBE0;
static const bool is_virtual = true;
static const int vtable_index = 1;
using mv_addresses_t = MvAddresses<0x62DBE0, 0x62DC30, 0x62D8A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBEB4,100,2,0x6DBEB0,1, 0x6DBEA4,110,2,0x6DBEA0,1, 0x6DAE9C,120,2,0x6DAE98,1>;
using def_t = void(CPedSeatAttractor *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedSeatAttractor *,unsigned char>, 0,1>;
META_END

DTOR_META_BEGIN(CPedSeatAttractor)
static int address;
static int global_address;
static const int id = 0x62DC50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62DC50, 0x62DCA0, 0x62D910>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x62DBF4,100,2,0,1, 0x62DC44,110,2,0,1, 0x62D8B4,120,2,0,1>;
using def_t = void(CPedSeatAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedSeatAttractor *>, 0>;
META_END

META_BEGIN(CPedSeatAttractor::GetType)
static int address;
static int global_address;
static const int id = 0x62DC90;
static const bool is_virtual = true;
static const int vtable_index = 2;
using mv_addresses_t = MvAddresses<0x62DC90, 0x62DCE0, 0x62D950>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBEB8,100,2,0x6DBEB0,1, 0x6DBEA8,110,2,0x6DBEA0,1, 0x6DAEA0,120,2,0x6DAE98,1>;
using def_t = ePedAttractorType(CPedSeatAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedSeatAttractor *>, 0>;
META_END

}
