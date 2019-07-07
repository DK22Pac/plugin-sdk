/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCarAI::FindSwitchDistanceClose)
static int address;
static int global_address;
static const int id = 0x413E20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x413E20, 0x413E20, 0x413E20>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x413F81,100,0,0x413E50,1, 0x41451C,100,0,0x413E50,2, 0x414FB1,100,0,0x413E50,3>;
using def_t = float();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCarAI::FindSwitchDistanceFar)
static int address;
static int global_address;
static const int id = 0x413E30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x413E30, 0x413E30, 0x413E30>;
// total references count: 10en (4), 11en (0), steam (0)
using refs_t = RefList<0x41410E,100,0,0x413E50,1, 0x4146A9,100,0,0x413E50,2, 0x414E99,100,0,0x413E50,3, 0x415061,100,0,0x413E50,4>;
using def_t = float(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::UpdateCarAI)
static int address;
static int global_address;
static const int id = 0x413E50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x413E50, 0x413E50, 0x413E50>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x531A68,100,0,0x531470,1, 0x531B3E,100,0,0x531470,2>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::CarHasReasonToStop)
static int address;
static int global_address;
static const int id = 0x415B00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x415B00, 0x415B00, 0x415B00>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x419202,100,0,0x4191E0,1, 0x41EA5E,100,0,0x41E310,1, 0x41EA7A,100,0,0x41E310,2>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::GetCarToGoToCoors)
static int address;
static int global_address;
static const int id = 0x415B10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x415B10, 0x415B10, 0x415B10>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4DA5ED,100,0,0x4D94E0,1>;
using def_t = void(CVehicle *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,CVector *>, 0,1>;
META_END

META_BEGIN(CCarAI::AddPoliceCarOccupants)
static int address;
static int global_address;
static const int id = 0x415C60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x415C60, 0x415C60, 0x415C60>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x417CE8,100,0,0x4165F0,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::AddAmbulanceOccupants)
static int address;
static int global_address;
static const int id = 0x415CE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x415CE0, 0x415CE0, 0x415CE0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x420242,100,0,0x41FE50,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::AddFiretruckOccupants)
static int address;
static int global_address;
static const int id = 0x415D00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x415D00, 0x415D00, 0x415D00>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x420260,100,0,0x41FE50,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::TellOccupantsToLeaveCar)
static int address;
static int global_address;
static const int id = 0x415D20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x415D20, 0x415D20, 0x415D20>;
// total references count: 10en (6), 11en (0), steam (0)
using refs_t = RefList<0x41438E,100,0,0x413E50,1, 0x414880,100,0,0x413E50,2, 0x414C4F,100,0,0x413E50,3, 0x414CE6,100,0,0x413E50,4, 0x415288,100,0,0x413E50,5, 0x41F444,100,0,0x41F220,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::TellCarToRamOtherCar)
static int address;
static int global_address;
static const int id = 0x415D90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x415D90, 0x415D90, 0x415D90>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x448B63,100,0,0x448240,1>;
using def_t = void(CVehicle *, CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,CVehicle *>, 0,1>;
META_END

META_BEGIN(CCarAI::TellCarToBlockOtherCar)
static int address;
static int global_address;
static const int id = 0x415DE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x415DE0, 0x415DE0, 0x415DE0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x448BBE,100,0,0x448240,1>;
using def_t = void(CVehicle *, CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,CVehicle *>, 0,1>;
META_END

META_BEGIN(CCarAI::FindPoliceCarMissionForWantedLevel)
static int address;
static int global_address;
static const int id = 0x415E30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x415E30, 0x415E30, 0x415E30>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x415250,100,0,0x413E50,1, 0x416F33,100,0,0x4165F0,1, 0x4DAC2A,100,0,0x4D94E0,1>;
using def_t = eCarMission();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCarAI::FindPoliceCarSpeedForWantedLevel)
static int address;
static int global_address;
static const int id = 0x415EB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x415EB0, 0x415EB0, 0x415EB0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x413E80,100,0,0x413E50,1, 0x41523A,100,0,0x413E50,2, 0x416F02,100,0,0x4165F0,1>;
using def_t = int(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::MellowOutChaseSpeed)
static int address;
static int global_address;
static const int id = 0x416050;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x416050, 0x416050, 0x416050>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x414444,100,0,0x413E50,1, 0x414934,100,0,0x413E50,2>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarAI::MakeWayForCarWithSiren)
static int address;
static int global_address;
static const int id = 0x416280;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x416280, 0x416280, 0x416280>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x53481D,100,0,0x531470,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

}
