/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CTrafficLights::ScanForLightsOnMap)
static int address;
static int global_address;
static const int id = 0x454F40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x454F40, 0x454F40, 0x454F40>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C200,100,0,0x48BED0,1, 0x48C67A,100,0,0x48C620,1, 0x48C2F0,110,0,0x48BFC0,1, 0x48C77A,110,0,0x48C720,1, 0x48C280,120,0,0x48BF50,1, 0x48C70A,120,0,0x48C6B0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTrafficLights::ShouldCarStopForLight)
static int address;
static int global_address;
static const int id = 0x455350;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x455350, 0x455350, 0x455350>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4186D4,100,0,0x418430,1, 0x4191EB,100,0,0x4191E0,1, 0x41EA52,100,0,0x41E310,1, 0x4186D4,110,0,0x418430,1, 0x4191EB,110,0,0x4191E0,1, 0x41EA52,110,0,0x41E310,1, 0x4186D4,120,0,0x418430,1, 0x4191EB,120,0,0x4191E0,1, 0x41EA52,120,0,0x41E310,1>;
using def_t = bool(CVehicle *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,bool>, 0,1>;
META_END

META_BEGIN(CTrafficLights::LightForCars1)
static int address;
static int global_address;
static const int id = 0x455760;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x455760, 0x455760, 0x455760>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4553BC,100,0,0x455350,1, 0x4554F1,100,0,0x455350,2, 0x455633,100,0,0x455350,3, 0x455851,100,0,0x455800,1, 0x4553BC,110,0,0x455350,1, 0x4554F1,110,0,0x455350,2, 0x455633,110,0,0x455350,3, 0x455851,110,0,0x455800,1, 0x4553BC,120,0,0x455350,1, 0x4554F1,120,0,0x455350,2, 0x455633,120,0,0x455350,3, 0x455851,120,0,0x455800,1>;
using def_t = unsigned char();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTrafficLights::LightForCars2)
static int address;
static int global_address;
static const int id = 0x455790;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x455790, 0x455790, 0x455790>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4553E2,100,0,0x455350,1, 0x455517,100,0,0x455350,2, 0x455659,100,0,0x455350,3, 0x455858,100,0,0x455800,1, 0x4553E2,110,0,0x455350,1, 0x455517,110,0,0x455350,2, 0x455659,110,0,0x455350,3, 0x455858,110,0,0x455800,1, 0x4553E2,120,0,0x455350,1, 0x455517,120,0,0x455350,2, 0x455659,120,0,0x455350,3, 0x455858,120,0,0x455800,1>;
using def_t = unsigned char();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTrafficLights::LightForPeds)
static int address;
static int global_address;
static const int id = 0x4557D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4557D0, 0x4557D0, 0x4557D0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x456105,100,0,0x455800,1, 0x4D5DE6,100,0,0x4D5D80,1, 0x456105,110,0,0x455800,1, 0x4D5E86,110,0,0x4D5E20,1, 0x456105,120,0,0x455800,1, 0x4D5E16,120,0,0x4D5DB0,1>;
using def_t = unsigned char();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTrafficLights::DisplayActualLight)
static int address;
static int global_address;
static const int id = 0x455800;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x455800, 0x455800, 0x455800>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x474A89,100,0,0x474350,1, 0x474A89,110,0,0x474350,1, 0x474A89,120,0,0x474350,1>;
using def_t = void(CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *>, 0>;
META_END

META_BEGIN(CTrafficLights::ShouldCarStopForBridge)
static int address;
static int global_address;
static const int id = 0x456460;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x456460, 0x456460, 0x456460>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x415454,100,0,0x413E50,1, 0x4186E0,100,0,0x418430,1, 0x4191F7,100,0,0x4191E0,1, 0x41EA6F,100,0,0x41E310,1, 0x415454,110,0,0x413E50,1, 0x4186E0,110,0,0x418430,1, 0x4191F7,110,0,0x4191E0,1, 0x41EA6F,110,0,0x41E310,1, 0x415454,120,0,0x413E50,1, 0x4186E0,120,0,0x418430,1, 0x4191F7,120,0,0x4191E0,1, 0x41EA6F,120,0,0x41E310,1>;
using def_t = bool(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CTrafficLights::FindTrafficLightType)
static int address;
static int global_address;
static const int id = 0x4564A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4564A0, 0x4564A0, 0x4564A0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4550A7,100,0,0x454F40,1, 0x455846,100,0,0x455800,1, 0x4550A7,110,0,0x454F40,1, 0x455846,110,0,0x455800,1, 0x4550A7,120,0,0x454F40,1, 0x455846,120,0,0x455800,1>;
using def_t = int(CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *>, 0>;
META_END

}
