/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CGangs::Initialise)
static int address;
static int global_address;
static const int id = 0x4C3FB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C3FB0, 0x4C4050, 0x4C3FE0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x48C270,100,0,0x48BED0,1, 0x48C57A,100,0,0x48C4B0,1, 0x4C4105,100,0,0x4C4100,1, 0x48C360,110,0,0x48BFC0,1, 0x48C67A,110,0,0x48C5B0,1, 0x4C41A5,110,0,0x4C41A0,1, 0x48C2F0,120,0,0x48BF50,1, 0x48C60A,120,0,0x48C540,1, 0x4C4135,120,0,0x4C4130,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGangs::SetGangVehicleModel)
static int address;
static int global_address;
static const int id = 0x4C4010;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C4010, 0x4C40B0, 0x4C4040>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x443F11,100,0,0x4429C0,1, 0x443F11,110,0,0x4429C0,1, 0x443F11,120,0,0x4429C0,1>;
using def_t = void(short, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<short,int>, 0,1>;
META_END

META_BEGIN(CGangs::SetGangWeapons)
static int address;
static int global_address;
static const int id = 0x4C4030;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C4030, 0x4C40D0, 0x4C4060>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x443F47,100,0,0x4429C0,1, 0x443F47,110,0,0x4429C0,1, 0x443F47,120,0,0x4429C0,1>;
using def_t = void(short, int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<short,int,int>, 0,1,2>;
META_END

META_BEGIN(CGangs::SetGangPedModelOverride)
static int address;
static int global_address;
static const int id = 0x4C4050;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C4050, 0x4C40F0, 0x4C4080>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x588C25,100,0,0x588490,1, 0x588F65,110,0,0x5887D0,1, 0x588E55,120,0,0x5886C0,1>;
using def_t = void(short, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<short,char>, 0,1>;
META_END

META_BEGIN(CGangs::GetGangPedModelOverride)
static int address;
static int global_address;
static const int id = 0x4C4070;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C4070, 0x4C4110, 0x4C40A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F578F,100,0,0x4F5780,1, 0x4F583F,110,0,0x4F5830,1, 0x4F57CF,120,0,0x4F57C0,1>;
using def_t = char(short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<short>, 0>;
META_END

META_BEGIN(CGangs::SaveAllGangData)
static int address;
static int global_address;
static const int id = 0x4C4080;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C4080, 0x4C4120, 0x4C40B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5903C8,100,0,0x58F8D0,1, 0x5906B8,110,0,0x58FBC0,1, 0x5905A8,120,0,0x58FAB0,1>;
using def_t = void(unsigned char *, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int *>, 0,1>;
META_END

META_BEGIN(CGangs::LoadAllGangData)
static int address;
static int global_address;
static const int id = 0x4C4100;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C4100, 0x4C41A0, 0x4C4130>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x591484,100,0,0x590A00,1, 0x591744,110,0,0x590CC0,1, 0x591634,120,0,0x590BB0,1>;
using def_t = void(unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int>, 0,1>;
META_END

}
