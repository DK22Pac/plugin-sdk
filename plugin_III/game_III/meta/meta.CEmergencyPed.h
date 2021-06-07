/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN_OVERLOADED(CEmergencyPed, void(unsigned int))
static int address;
static int global_address;
static const int id = 0x4C2E40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C2E40, 0x4C2EE0, 0x4C2E70>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x43BAFA,100,0,0x43AEA0,1, 0x43E652,100,0,0x43D530,1, 0x441A02,100,0,0x440CB0,1, 0x4F5433,100,0,0x4F5280,1, 0x4F54BF,100,0,0x4F5280,2, 0x43BAFA,110,0,0x43AEA0,1, 0x43E652,110,0,0x43D530,1, 0x441A02,110,0,0x440CB0,1, 0x4F54E3,110,0,0x4F5330,1, 0x4F556F,110,0,0x4F5330,2, 0x43BAFA,120,0,0x43AEA0,1, 0x43E652,120,0,0x43D530,1, 0x441A02,120,0,0x440CB0,1, 0x4F5473,120,0,0x4F52C0,1, 0x4F54FF,120,0,0x4F52C0,2>;
using def_t = CEmergencyPed *(CEmergencyPed *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CEmergencyPed *,unsigned int>, 0,1>;
META_END

DTOR_META_BEGIN(CEmergencyPed)
static int address;
static int global_address;
static const int id = 0x4C2EF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C2EF0, 0x4C2F90, 0x4C2F20>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4C3F63,100,0,0x4C3F40,1, 0x4C3F54,100,2,0,1, 0x4C4003,110,0,0x4C3FE0,1, 0x4C3FF4,110,2,0,1, 0x4C3F93,120,0,0x4C3F70,1, 0x4C3F84,120,2,0,1>;
using def_t = void(CEmergencyPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CEmergencyPed *>, 0>;
META_END

META_BEGIN(CEmergencyPed::ProcessControl)
static int address;
static int global_address;
static const int id = 0x4C2F10;
static const bool is_virtual = true;
static const int vtable_index = 8;
using mv_addresses_t = MvAddresses<0x4C2F10, 0x4C2FB0, 0x4C2F40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F8394,100,2,0x5F8374,1, 0x5F815C,110,2,0x5F815C,1, 0x605154,120,2,0x605154,1>;
using def_t = void(CEmergencyPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CEmergencyPed *>, 0>;
META_END

META_BEGIN(CEmergencyPed::MedicAI)
static int address;
static int global_address;
static const int id = 0x4C30A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C30A0, 0x4C3140, 0x4C30D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C3064,100,0,0x4C2F10,1, 0x4C3104,110,0,0x4C2FB0,1, 0x4C3094,120,0,0x4C2F40,1>;
using def_t = void(CEmergencyPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CEmergencyPed *>, 0>;
META_END

META_BEGIN(CEmergencyPed::FiremanAI)
static int address;
static int global_address;
static const int id = 0x4C3CE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C3CE0, 0x4C3D80, 0x4C3D10>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C3078,100,0,0x4C2F10,1, 0x4C3118,110,0,0x4C2FB0,1, 0x4C30A8,120,0,0x4C2F40,1>;
using def_t = void(CEmergencyPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CEmergencyPed *>, 0>;
META_END

META_BEGIN(CEmergencyPed::InRange)
static int address;
static int global_address;
static const int id = 0x4C3EC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C3EC0, 0x4C3F60, 0x4C3EF0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C358C,100,0,0x4C30A0,1, 0x4C362C,110,0,0x4C3140,1, 0x4C35BC,120,0,0x4C30D0,1>;
using def_t = bool(CEmergencyPed *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CEmergencyPed *,CPed *>, 0,1>;
META_END

DEL_DTOR_META_BEGIN(CEmergencyPed)
static int address;
static int global_address;
static const int id = 0x4C3F40;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x4C3F40, 0x4C3FE0, 0x4C3F70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F8374,100,2,0x5F8374,1, 0x5F815C,110,2,0x5F815C,1, 0x605154,120,2,0x605154,1>;
using def_t = void(CEmergencyPed *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CEmergencyPed *,int>, 0,1>;
META_END

}
