/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CStoredCar::StoreCar)
static int address;
static int global_address;
static const int id = 0x4275C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4275C0, 0x4275C0, 0x4275C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x42798E,100,0,0x427840,1, 0x42798E,110,0,0x427840,1, 0x42798E,120,0,0x427840,1>;
using def_t = void(CStoredCar *, CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CStoredCar *,CVehicle *>, 0,1>;
META_END

META_BEGIN(CStoredCar::RestoreCar)
static int address;
static int global_address;
static const int id = 0x427690;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x427690, 0x427690, 0x427690>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x427A5D,100,0,0x427A40,1, 0x427A5D,110,0,0x427A40,1, 0x427A5D,120,0,0x427A40,1>;
using def_t = CVehicle *(CStoredCar *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CStoredCar *>, 0>;
META_END

META_BEGIN(CStoredCar::SetExtras)
static int address;
static int global_address;
static const int id = 0x427820;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x427820, 0x427820, 0x427820>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4276BA,100,0,0x427690,1, 0x4276BA,110,0,0x427690,1, 0x4276BA,120,0,0x427690,1>;
using def_t = void(char, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<char,char>, 0,1>;
META_END

}
