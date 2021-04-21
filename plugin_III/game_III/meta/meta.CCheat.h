/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(WeaponCheat)
static int address;
static int global_address;
static const int id = 0x490D90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x490D90, 0x490E50, 0x490DE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x492492,100,0,0x492450,1, 0x492552,110,0,0x492510,1, 0x4924E2,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(HealthCheat)
static int address;
static int global_address;
static const int id = 0x490E70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x490E70, 0x490F30, 0x490EC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4924CC,100,0,0x492450,1, 0x49258C,110,0,0x492510,1, 0x49251C,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(TankCheat)
static int address;
static int global_address;
static const int id = 0x490EE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x490EE0, 0x490FA0, 0x490F30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x492523,100,0,0x492450,1, 0x4925E3,110,0,0x492510,1, 0x492573,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(BlowUpCarsCheat)
static int address;
static int global_address;
static const int id = 0x491040;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x491040, 0x491100, 0x491090>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x492540,100,0,0x492450,1, 0x492600,110,0,0x492510,1, 0x492590,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(ChangePlayerCheat)
static int address;
static int global_address;
static const int id = 0x4910B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4910B0, 0x491170, 0x491100>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x49255D,100,0,0x492450,1, 0x49261D,110,0,0x492510,1, 0x4925AD,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(MayhemCheat)
static int address;
static int global_address;
static const int id = 0x4911C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4911C0, 0x491280, 0x491210>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x49257A,100,0,0x492450,1, 0x49263A,110,0,0x492510,1, 0x4925CA,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(EverybodyAttacksPlayerCheat)
static int address;
static int global_address;
static const int id = 0x491270;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x491270, 0x491330, 0x4912C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x492597,100,0,0x492450,1, 0x492657,110,0,0x492510,1, 0x4925E7,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(WeaponsForAllCheat)
static int address;
static int global_address;
static const int id = 0x491370;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x491370, 0x491430, 0x4913C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4925B4,100,0,0x492450,1, 0x492674,110,0,0x492510,1, 0x492604,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(FastTimeCheat)
static int address;
static int global_address;
static const int id = 0x4913A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4913A0, 0x491460, 0x4913F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4925D1,100,0,0x492450,1, 0x492691,110,0,0x492510,1, 0x492621,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(SlowTimeCheat)
static int address;
static int global_address;
static const int id = 0x4913F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4913F0, 0x4914B0, 0x491440>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4925EE,100,0,0x492450,1, 0x4926AE,110,0,0x492510,1, 0x49263E,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(MoneyCheat)
static int address;
static int global_address;
static const int id = 0x491430;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x491430, 0x4914F0, 0x491480>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4924AF,100,0,0x492450,1, 0x49256F,110,0,0x492510,1, 0x4924FF,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(ArmourCheat)
static int address;
static int global_address;
static const int id = 0x491460;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x491460, 0x491520, 0x4914B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x49260B,100,0,0x492450,1, 0x4926CB,110,0,0x492510,1, 0x49265B,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(WantedLevelUpCheat)
static int address;
static int global_address;
static const int id = 0x491490;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x491490, 0x491550, 0x4914E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4924E9,100,0,0x492450,1, 0x4925A9,110,0,0x492510,1, 0x492539,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(WantedLevelDownCheat)
static int address;
static int global_address;
static const int id = 0x4914F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4914F0, 0x4915B0, 0x491540>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x492506,100,0,0x492450,1, 0x4925C6,110,0,0x492510,1, 0x492556,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(SunnyWeatherCheat)
static int address;
static int global_address;
static const int id = 0x491520;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x491520, 0x4915E0, 0x491570>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x492628,100,0,0x492450,1, 0x4926E8,110,0,0x492510,1, 0x492678,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CloudyWeatherCheat)
static int address;
static int global_address;
static const int id = 0x491550;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x491550, 0x491610, 0x4915A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x492645,100,0,0x492450,1, 0x492705,110,0,0x492510,1, 0x492695,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(RainyWeatherCheat)
static int address;
static int global_address;
static const int id = 0x491580;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x491580, 0x491640, 0x4915D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x492662,100,0,0x492450,1, 0x492722,110,0,0x492510,1, 0x4926B2,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(FoggyWeatherCheat)
static int address;
static int global_address;
static const int id = 0x4915B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4915B0, 0x491670, 0x491600>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x49267F,100,0,0x492450,1, 0x49273F,110,0,0x492510,1, 0x4926CF,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(FastWeatherCheat)
static int address;
static int global_address;
static const int id = 0x4915E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4915E0, 0x4916A0, 0x491630>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x49269C,100,0,0x492450,1, 0x49275C,110,0,0x492510,1, 0x4926EC,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(OnlyRenderWheelsCheat)
static int address;
static int global_address;
static const int id = 0x491610;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x491610, 0x4916D0, 0x491660>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4926B9,100,0,0x492450,1, 0x492779,110,0,0x492510,1, 0x492709,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(ChittyChittyBangBangCheat)
static int address;
static int global_address;
static const int id = 0x491640;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x491640, 0x491700, 0x491690>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4926D6,100,0,0x492450,1, 0x492796,110,0,0x492510,1, 0x492726,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(StrongGripCheat)
static int address;
static int global_address;
static const int id = 0x491670;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x491670, 0x491730, 0x4916C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4926F3,100,0,0x492450,1, 0x4927B3,110,0,0x492510,1, 0x492743,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(NastyLimbsCheat)
static int address;
static int global_address;
static const int id = 0x4916A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4916A0, 0x491760, 0x4916F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x492710,100,0,0x492450,1, 0x4927D0,110,0,0x492510,1, 0x492760,120,0,0x4924A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
