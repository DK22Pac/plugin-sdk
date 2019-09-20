/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCarAI::MakeWayForCarWithSiren)
static int address;
static int global_address;
static const int id = 0x419040;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x419040, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x598CDF,100,0,0x593030,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::MellowOutChaseSpeedBoat)
static int address;
static int global_address;
static const int id = 0x419350;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x419350, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x41B68E,100,0,0x419E80,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::MellowOutChaseSpeed)
static int address;
static int global_address;
static const int id = 0x4193C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4193C0, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x41A44D,100,0,0x419E80,1, 0x41A97D,100,0,0x419E80,2>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::FindPoliceCarSpeedForWantedLevel)
static int address;
static int global_address;
static const int id = 0x4196E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4196E0, 0, 0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x419EB0,100,0,0x419E80,1, 0x41B8B2,100,0,0x419E80,2, 0x427831,100,0,0x426DB0,1>;
using def_t = int(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::FindPoliceBoatMissionForWantedLevel)
static int address;
static int global_address;
static const int id = 0x419880;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x419880, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x427921,100,0,0x426DB0,1>;
using def_t = eCarMission();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCarAI::FindPoliceCarMissionForWantedLevel)
static int address;
static int global_address;
static const int id = 0x4198C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4198C0, 0, 0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x41B908,100,0,0x419E80,1, 0x427862,100,0,0x426DB0,1, 0x51F3F5,100,0,0x51CA70,1>;
using def_t = eCarMission();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCarAI::TellCarToRamOtherCar)
static int address;
static int global_address;
static const int id = 0x419940;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x419940, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x45B92E,100,0,0x45B220,1>;
using def_t = void(CVehicle *, CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,CVehicle *>, 0,1>;
META_END

META_BEGIN(CCarAI::TellOccupantsToFleeCar)
static int address;
static int global_address;
static const int id = 0x419990;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x419990, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x48EE0B,100,0,0x48EC30,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::TellOccupantsToLeaveCar)
static int address;
static int global_address;
static const int id = 0x419A80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x419A80, 0, 0>;
// total references count: 10en (12), 11en (0), steam (0)
using refs_t = RefList<0x41A414,100,0,0x419E80,1, 0x41A944,100,0,0x419E80,2, 0x41AB8B,100,0,0x419E80,3, 0x41AC9C,100,0,0x419E80,4, 0x41ADC7,100,0,0x419E80,5, 0x41AE65,100,0,0x419E80,6, 0x41B450,100,0,0x419E80,7, 0x41B4CC,100,0,0x419E80,8, 0x41B937,100,0,0x419E80,9, 0x41B99E,100,0,0x419E80,10, 0x41EA54,100,0,0x41E830,1, 0x606E88,100,0,0x606730,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::AddFiretruckOccupants)
static int address;
static int global_address;
static const int id = 0x419B70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x419B70, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x41C8C0,100,0,0x41C460,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::AddAmbulanceOccupants)
static int address;
static int global_address;
static const int id = 0x419B90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x419B90, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x41C8A2,100,0,0x41C460,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::AddPoliceCarOccupants)
static int address;
static int global_address;
static const int id = 0x419BB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x419BB0, 0, 0>;
// total references count: 10en (8), 11en (0), steam (0)
using refs_t = RefList<0x428D96,100,0,0x426DB0,1, 0x6334CE,100,0,0x633370,1, 0x63368A,100,0,0x633370,2, 0x6337CB,100,0,0x633370,3, 0x633AFB,100,0,0x633370,4, 0x633C11,100,0,0x633370,5, 0x633D4A,100,0,0x633370,6, 0x633E60,100,0,0x633370,7>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::GetCarToParkAtCoors)
static int address;
static int global_address;
static const int id = 0x419CC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x419CC0, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x5936A0,100,0,0x593030,1>;
using def_t = float(CVehicle *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,CVector *>, 0,1>;
META_END

META_BEGIN(CCarAI::GetCarToGoToCoors)
static int address;
static int global_address;
static const int id = 0x419D20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x419D20, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x419CCF,100,0,0x419CC0,1, 0x51E517,100,0,0x51CA70,1>;
using def_t = float(CVehicle *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,CVector *>, 0,1>;
META_END

META_BEGIN(CCarAI::CarHasReasonToStop)
static int address;
static int global_address;
static const int id = 0x419E70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x419E70, 0, 0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x41F806,100,0,0x41EEE0,1, 0x41F822,100,0,0x41EEE0,2, 0x4254E2,100,0,0x4254C0,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::UpdateCarAI)
static int address;
static int global_address;
static const int id = 0x419E80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x419E80, 0, 0>;
// total references count: 10en (6), 11en (0), steam (0)
using refs_t = RefList<0x593C6D,100,0,0x593030,1, 0x593D62,100,0,0x593030,2, 0x5A034E,100,0,0x59FE90,1, 0x5A03A8,100,0,0x59FE90,2, 0x60EB22,100,0,0x60E3E0,1, 0x60EC01,100,0,0x60E3E0,2>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

}
