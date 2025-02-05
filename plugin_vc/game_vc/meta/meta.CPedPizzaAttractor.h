/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedPizzaAttractor::UpdatePedStateOnDeparture)
static int address;
static int global_address;
static const int id = 0x62AD40;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x62AD40, 0x62AD90, 0x62AA00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE6C,100,2,0x6DBE60,1, 0x6DBE5C,110,2,0x6DBE50,1, 0x6DAE54,120,2,0x6DAE48,1>;
using def_t = void(CPedPizzaAttractor *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedPizzaAttractor *,CPed *>, 0,1>;
META_END

DEL_DTOR_META_BEGIN(CPedPizzaAttractor)
static int address;
static int global_address;
static const int id = 0x62DA40;
static const bool is_virtual = true;
static const int vtable_index = 1;
using mv_addresses_t = MvAddresses<0x62DA40, 0x62DA90, 0x62D700>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE64,100,2,0x6DBE60,1, 0x6DBE54,110,2,0x6DBE50,1, 0x6DAE4C,120,2,0x6DAE48,1>;
using def_t = void(CPedPizzaAttractor *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedPizzaAttractor *,unsigned char>, 0,1>;
META_END

DTOR_META_BEGIN(CPedPizzaAttractor)
static int address;
static int global_address;
static const int id = 0x62DAB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62DAB0, 0x62DB00, 0x62D770>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x62DA54,100,2,0,1, 0x62DAA4,110,2,0,1, 0x62D714,120,2,0,1>;
using def_t = void(CPedPizzaAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedPizzaAttractor *>, 0>;
META_END

META_BEGIN(CPedPizzaAttractor::GetType)
static int address;
static int global_address;
static const int id = 0x62DAF0;
static const bool is_virtual = true;
static const int vtable_index = 2;
using mv_addresses_t = MvAddresses<0x62DAF0, 0x62DB40, 0x62D7B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE68,100,2,0x6DBE60,1, 0x6DBE58,110,2,0x6DBE50,1, 0x6DAE50,120,2,0x6DAE48,1>;
using def_t = ePedAttractorType(CPedPizzaAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedPizzaAttractor *>, 0>;
META_END

META_BEGIN(CPedPizzaAttractor::GetHeadOfQueueWaitTime)
static int address;
static int global_address;
static const int id = 0x62DB00;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x62DB00, 0x62DB50, 0x62D7C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE60,100,2,0x6DBE60,1, 0x6DBE50,110,2,0x6DBE50,1, 0x6DAE48,120,2,0x6DAE48,1>;
using def_t = float(CPedPizzaAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedPizzaAttractor *>, 0>;
META_END

}
