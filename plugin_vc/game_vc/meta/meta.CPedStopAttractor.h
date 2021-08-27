/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedStopAttractor::UpdatePedStateOnDeparture)
static int address;
static int global_address;
static const int id = 0x62ADA0;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x62ADA0, 0x62ADF0, 0x62AA60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE94,100,2,0x6DBE88,1, 0x6DBE84,110,2,0x6DBE78,1, 0x6DAE7C,120,2,0x6DAE70,1>;
using def_t = void(CPedStopAttractor *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedStopAttractor *,CPed *>, 0,1>;
META_END

DEL_DTOR_META_BEGIN(CPedStopAttractor)
static int address;
static int global_address;
static const int id = 0x62DB20;
static const bool is_virtual = true;
static const int vtable_index = 1;
using mv_addresses_t = MvAddresses<0x62DB20, 0x62DB70, 0x62D7E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE8C,100,2,0x6DBE88,1, 0x6DBE7C,110,2,0x6DBE78,1, 0x6DAE74,120,2,0x6DAE70,1>;
using def_t = void(CPedStopAttractor *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedStopAttractor *,unsigned char>, 0,1>;
META_END

DTOR_META_BEGIN(CPedStopAttractor)
static int address;
static int global_address;
static const int id = 0x62DB90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62DB90, 0x62DBE0, 0x62D850>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x62DB34,100,2,0,1, 0x62DB84,110,2,0,1, 0x62D7F4,120,2,0,1>;
using def_t = void(CPedStopAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedStopAttractor *>, 0>;
META_END

META_BEGIN(CPedStopAttractor::GetType)
static int address;
static int global_address;
static const int id = 0x62DBD0;
static const bool is_virtual = true;
static const int vtable_index = 2;
using mv_addresses_t = MvAddresses<0x62DBD0, 0x62DC20, 0x62D890>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE90,100,2,0x6DBE88,1, 0x6DBE80,110,2,0x6DBE78,1, 0x6DAE78,120,2,0x6DAE70,1>;
using def_t = ePedAttractorType(CPedStopAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedStopAttractor *>, 0>;
META_END

}
