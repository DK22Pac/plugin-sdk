/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CRestart::Initialise)
static int address;
static int global_address;
static const int id = 0x435E20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x435E20, 0x435E20, 0x435E20>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x436B25,100,0,0x436B20,1, 0x48BFF6,100,0,0x48BED0,1, 0x48C4E5,100,0,0x48C4B0,1, 0x436B25,110,0,0x436B20,1, 0x48C0E6,110,0,0x48BFC0,1, 0x48C5E5,110,0,0x48C5B0,1, 0x436B25,120,0,0x436B20,1, 0x48C076,120,0,0x48BF50,1, 0x48C575,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRestart::AddHospitalRestartPoint)
static int address;
static int global_address;
static const int id = 0x436100;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x436100, 0x436100, 0x436100>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43FCB6,100,0,0x43ED30,1, 0x43FCB6,110,0,0x43ED30,1, 0x43FCB6,120,0,0x43ED30,1>;
using def_t = void(CVector const &, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector const &,float>, 0,1>;
META_END

META_BEGIN(CRestart::AddPoliceRestartPoint)
static int address;
static int global_address;
static const int id = 0x436150;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x436150, 0x436150, 0x436150>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43FD59,100,0,0x43ED30,1, 0x43FD59,110,0,0x43ED30,1, 0x43FD59,120,0,0x43ED30,1>;
using def_t = void(CVector const &, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector const &,float>, 0,1>;
META_END

META_BEGIN(CRestart::FindClosestHospitalRestartPoint)
static int address;
static int global_address;
static const int id = 0x4361A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4361A0, 0x4361A0, 0x4361A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x42159D,100,0,0x421400,1, 0x42159D,110,0,0x421400,1, 0x42159D,120,0,0x421400,1>;
using def_t = void(CVector const &, CVector *, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector const &,CVector *,float *>, 0,1,2>;
META_END

META_BEGIN(CRestart::FindClosestPoliceRestartPoint)
static int address;
static int global_address;
static const int id = 0x436450;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x436450, 0x436450, 0x436450>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4217BA,100,0,0x421400,1, 0x421966,100,0,0x421400,2, 0x4217BA,110,0,0x421400,1, 0x421966,110,0,0x421400,2, 0x4217BA,120,0,0x421400,1, 0x421966,120,0,0x421400,2>;
using def_t = void(CVector const &, CVector *, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector const &,CVector *,float *>, 0,1,2>;
META_END

META_BEGIN(CRestart::OverrideNextRestart)
static int address;
static int global_address;
static const int id = 0x4366C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4366C0, 0x4366C0, 0x4366C0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x43FDFC,100,0,0x43ED30,1, 0x444A7D,100,0,0x4429C0,1, 0x43FDFC,110,0,0x43ED30,1, 0x444A7D,110,0,0x4429C0,1, 0x43FDFC,120,0,0x43ED30,1, 0x444A7D,120,0,0x4429C0,1>;
using def_t = void(CVector const &, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector const &,float>, 0,1>;
META_END

META_BEGIN(CRestart::CancelOverrideRestart)
static int address;
static int global_address;
static const int id = 0x4366F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4366F0, 0x4366F0, 0x4366F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x442A88,100,0,0x4429C0,1, 0x442A88,110,0,0x4429C0,1, 0x442A88,120,0,0x4429C0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRestart::SaveAllRestartPoints)
static int address;
static int global_address;
static const int id = 0x436700;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x436700, 0x436700, 0x436700>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5901D2,100,0,0x58F8D0,1, 0x5904C2,110,0,0x58FBC0,1, 0x5903B2,120,0,0x58FAB0,1>;
using def_t = void(unsigned char *, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int *>, 0,1>;
META_END

META_BEGIN(CRestart::LoadAllRestartPoints)
static int address;
static int global_address;
static const int id = 0x436B20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x436B20, 0x436B20, 0x436B20>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5912D7,100,0,0x590A00,1, 0x591597,110,0,0x590CC0,1, 0x591487,120,0,0x590BB0,1>;
using def_t = void(unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int>, 0,1>;
META_END

}
