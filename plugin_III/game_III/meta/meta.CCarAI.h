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
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x413F81,100,0,0x413E50,1, 0x41451C,100,0,0x413E50,2, 0x414FB1,100,0,0x413E50,3, 0x413F81,110,0,0x413E50,1, 0x41451C,110,0,0x413E50,2, 0x414FB1,110,0,0x413E50,3, 0x413F81,120,0,0x413E50,1, 0x41451C,120,0,0x413E50,2, 0x414FB1,120,0,0x413E50,3>;
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
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x41410E,100,0,0x413E50,1, 0x4146A9,100,0,0x413E50,2, 0x414E99,100,0,0x413E50,3, 0x415061,100,0,0x413E50,4, 0x41410E,110,0,0x413E50,1, 0x4146A9,110,0,0x413E50,2, 0x414E99,110,0,0x413E50,3, 0x415061,110,0,0x413E50,4, 0x41410E,120,0,0x413E50,1, 0x4146A9,120,0,0x413E50,2, 0x414E99,120,0,0x413E50,3, 0x415061,120,0,0x413E50,4>;
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
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x531A68,100,0,0x531470,1, 0x531B3E,100,0,0x531470,2, 0x531CA8,110,0,0x5316B0,1, 0x531D7E,110,0,0x5316B0,2, 0x531C38,120,0,0x531640,1, 0x531D0E,120,0,0x531640,2>;
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
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x419202,100,0,0x4191E0,1, 0x41EA5E,100,0,0x41E310,1, 0x41EA7A,100,0,0x41E310,2, 0x419202,110,0,0x4191E0,1, 0x41EA5E,110,0,0x41E310,1, 0x41EA7A,110,0,0x41E310,2, 0x419202,120,0,0x4191E0,1, 0x41EA5E,120,0,0x41E310,1, 0x41EA7A,120,0,0x41E310,2>;
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
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4DA5ED,100,0,0x4D94E0,1, 0x4DA68D,110,0,0x4D9580,1, 0x4DA61D,120,0,0x4D9510,1>;
using def_t = float(CVehicle *, CVector *);
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
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x417CE8,100,0,0x4165F0,1, 0x417CE8,110,0,0x4165F0,1, 0x417CE8,120,0,0x4165F0,1>;
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
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x420242,100,0,0x41FE50,1, 0x420242,110,0,0x41FE50,1, 0x420242,120,0,0x41FE50,1>;
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
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x420260,100,0,0x41FE50,1, 0x420260,110,0,0x41FE50,1, 0x420260,120,0,0x41FE50,1>;
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
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x41438E,100,0,0x413E50,1, 0x414880,100,0,0x413E50,2, 0x414C4F,100,0,0x413E50,3, 0x414CE6,100,0,0x413E50,4, 0x415288,100,0,0x413E50,5, 0x41F444,100,0,0x41F220,1, 0x41438E,110,0,0x413E50,1, 0x414880,110,0,0x413E50,2, 0x414C4F,110,0,0x413E50,3, 0x414CE6,110,0,0x413E50,4, 0x415288,110,0,0x413E50,5, 0x41F444,110,0,0x41F220,1, 0x41438E,120,0,0x413E50,1, 0x414880,120,0,0x413E50,2, 0x414C4F,120,0,0x413E50,3, 0x414CE6,120,0,0x413E50,4, 0x415288,120,0,0x413E50,5, 0x41F444,120,0,0x41F220,1>;
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
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x448B63,100,0,0x448240,1, 0x448B63,110,0,0x448240,1, 0x448B63,120,0,0x448240,1>;
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
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x448BBE,100,0,0x448240,1, 0x448BBE,110,0,0x448240,1, 0x448BBE,120,0,0x448240,1>;
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
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x415250,100,0,0x413E50,1, 0x416F33,100,0,0x4165F0,1, 0x4DAC2A,100,0,0x4D94E0,1, 0x415250,110,0,0x413E50,1, 0x416F33,110,0,0x4165F0,1, 0x4DACCA,110,0,0x4D9580,1, 0x415250,120,0,0x413E50,1, 0x416F33,120,0,0x4165F0,1, 0x4DAC5A,120,0,0x4D9510,1>;
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
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x413E80,100,0,0x413E50,1, 0x41523A,100,0,0x413E50,2, 0x416F02,100,0,0x4165F0,1, 0x413E80,110,0,0x413E50,1, 0x41523A,110,0,0x413E50,2, 0x416F02,110,0,0x4165F0,1, 0x413E80,120,0,0x413E50,1, 0x41523A,120,0,0x413E50,2, 0x416F02,120,0,0x4165F0,1>;
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
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x414444,100,0,0x413E50,1, 0x414934,100,0,0x413E50,2, 0x414444,110,0,0x413E50,1, 0x414934,110,0,0x413E50,2, 0x414444,120,0,0x413E50,1, 0x414934,120,0,0x413E50,2>;
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
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x53481D,100,0,0x531470,1, 0x534A5D,110,0,0x5316B0,1, 0x5349ED,120,0,0x531640,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

}
