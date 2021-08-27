/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedIceCreamVanAttractor::UpdatePedStateOnDeparture)
static int address;
static int global_address;
static const int id = 0x62AD70;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x62AD70, 0x62ADC0, 0x62AA30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE1C,100,2,0x6DBE10,1, 0x6DBE0C,110,2,0x6DBE00,1, 0x6DAE04,120,2,0x6DADF8,1>;
using def_t = void(CPedIceCreamVanAttractor *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIceCreamVanAttractor *,CPed *>, 0,1>;
META_END

DTOR_META_BEGIN(CPedIceCreamVanAttractor)
static int address;
static int global_address;
static const int id = 0x62D2F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62D2F0, 0x62D340, 0x62CFB0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x62D953,100,0,0x62D930,1, 0x62D944,100,2,0,1, 0x62D9A3,110,0,0x62D980,1, 0x62D994,110,2,0,1, 0x62D613,120,0,0x62D5F0,1, 0x62D604,120,2,0,1>;
using def_t = void(CPedIceCreamVanAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIceCreamVanAttractor *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CPedIceCreamVanAttractor)
static int address;
static int global_address;
static const int id = 0x62D930;
static const bool is_virtual = true;
static const int vtable_index = 1;
using mv_addresses_t = MvAddresses<0x62D930, 0x62D980, 0x62D5F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE14,100,2,0x6DBE10,1, 0x6DBE04,110,2,0x6DBE00,1, 0x6DADFC,120,2,0x6DADF8,1>;
using def_t = void(CPedIceCreamVanAttractor *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIceCreamVanAttractor *,unsigned char>, 0,1>;
META_END

META_BEGIN(CPedIceCreamVanAttractor::GetType)
static int address;
static int global_address;
static const int id = 0x62D970;
static const bool is_virtual = true;
static const int vtable_index = 2;
using mv_addresses_t = MvAddresses<0x62D970, 0x62D9C0, 0x62D630>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBE18,100,2,0x6DBE10,1, 0x6DBE08,110,2,0x6DBE00,1, 0x6DAE00,120,2,0x6DADF8,1>;
using def_t = ePedAttractorType(CPedIceCreamVanAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIceCreamVanAttractor *>, 0>;
META_END

}
