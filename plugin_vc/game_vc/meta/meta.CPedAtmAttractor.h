/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedAtmAttractor::UpdatePedStateOnDeparture)
static int address;
static int global_address;
static const int id = 0x62ADB0;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x62ADB0, 0x62AE00, 0x62AA70>;
// total references count: 10en (2), 11en (1), steam (1)
using refs_t = RefList<0x6DBEE4,100,2,0x6DBED8,1, 0x6DBF0C,100,2,0x6DBF00,1, 0x6DBED4,110,2,0x6DBEC8,1, 0x6DAECC,120,2,0x6DAEC0,1>;
using def_t = void(CPedAtmAttractor *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAtmAttractor *,CPed *>, 0,1>;
META_END

DEL_DTOR_META_BEGIN(CPedAtmAttractor)
static int address;
static int global_address;
static const int id = 0x62DCA0;
static const bool is_virtual = true;
static const int vtable_index = 1;
using mv_addresses_t = MvAddresses<0x62DCA0, 0x62DCF0, 0x62D960>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBEDC,100,2,0x6DBED8,1, 0x6DBECC,110,2,0x6DBEC8,1, 0x6DAEC4,120,2,0x6DAEC0,1>;
using def_t = void(CPedAtmAttractor *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAtmAttractor *,unsigned char>, 0,1>;
META_END

DTOR_META_BEGIN(CPedAtmAttractor)
static int address;
static int global_address;
static const int id = 0x62DD10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62DD10, 0x62DD60, 0x62D9D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x62DCB4,100,2,0,1, 0x62DD04,110,2,0,1, 0x62D974,120,2,0,1>;
using def_t = void(CPedAtmAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAtmAttractor *>, 0>;
META_END

META_BEGIN(CPedAtmAttractor::GetType)
static int address;
static int global_address;
static const int id = 0x62DD50;
static const bool is_virtual = true;
static const int vtable_index = 2;
using mv_addresses_t = MvAddresses<0x62DD50, 0x62DDA0, 0x62DA10>;
// total references count: 10en (2), 11en (1), steam (1)
using refs_t = RefList<0x6DBEE0,100,2,0x6DBED8,1, 0x6DBF08,100,2,0x6DBF00,1, 0x6DBED0,110,2,0x6DBEC8,1, 0x6DAEC8,120,2,0x6DAEC0,1>;
using def_t = ePedAttractorType(CPedAtmAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAtmAttractor *>, 0>;
META_END

}
