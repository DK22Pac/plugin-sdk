/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPools::Initialise)
static int address;
static int global_address;
static const int id = 0x4A1770;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A1770, 0x4A1860, 0x4A17F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48BEE8,100,0,0x48BED0,1, 0x48BFD8,110,0,0x48BFC0,1, 0x48BF68,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPools::ShutDown)
static int address;
static int global_address;
static const int id = 0x4A1880;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A1880, 0x4A1970, 0x4A1900>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C491,100,0,0x48C3A0,1, 0x48C581,110,0,0x48C490,1, 0x48C511,120,0,0x48C420,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPools::CheckPoolsEmpty)
static int address;
static int global_address;
static const int id = 0x4A1A50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A1A50, 0x4A1B40, 0x4A1AD0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4AE921,100,0,0x4AE850,1, 0x4AEA11,110,0,0x4AE940,1, 0x4AE9A1,120,0,0x4AE8D0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPools::GetPedRef)
static int address;
static int global_address;
static const int id = 0x4A1A80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A1A80, 0x4A1B70, 0x4A1B00>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x475C73,100,0,0x475C50,1, 0x4A2AD2,100,0,0x4A29B0,1, 0x475C73,110,0,0x475C50,1, 0x4A2BC2,110,0,0x4A2AA0,1, 0x475C73,120,0,0x475C50,1, 0x4A2B52,120,0,0x4A2A30,1>;
using def_t = int(CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPed *>, 0>;
META_END

META_BEGIN(CPools::GetPed)
static int address;
static int global_address;
static const int id = 0x4A1AA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A1AA0, 0x4A1B90, 0x4A1B20>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x456737,100,0,0x456710,1, 0x4D46D1,100,0,0x4D4650,1, 0x4D4823,100,0,0x4D47D0,1, 0x4D48B5,100,0,0x4D4860,1, 0x456737,110,0,0x456710,1, 0x4D4771,110,0,0x4D46F0,1, 0x4D48C3,110,0,0x4D4870,1, 0x4D4955,110,0,0x4D4900,1, 0x456737,120,0,0x456710,1, 0x4D4701,120,0,0x4D4680,1, 0x4D4853,120,0,0x4D4800,1, 0x4D48E5,120,0,0x4D4890,1>;
using def_t = CPed *(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPools::GetVehicleRef)
static int address;
static int global_address;
static const int id = 0x4A1AC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A1AC0, 0x4A1BB0, 0x4A1B40>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x475C98,100,0,0x475C50,1, 0x4A2235,100,0,0x4A2080,1, 0x4A2283,100,0,0x4A2080,2, 0x475C98,110,0,0x475C50,1, 0x4A2325,110,0,0x4A2170,1, 0x4A2373,110,0,0x4A2170,2, 0x475C98,120,0,0x475C50,1, 0x4A22B5,120,0,0x4A2100,1, 0x4A2303,120,0,0x4A2100,2>;
using def_t = int(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CPools::GetVehicle)
static int address;
static int global_address;
static const int id = 0x4A1AE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A1AE0, 0x4A1BD0, 0x4A1B60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4D46DC,100,0,0x4D4650,1, 0x4D477C,110,0,0x4D46F0,1, 0x4D470C,120,0,0x4D4680,1>;
using def_t = CVehicle *(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPools::GetObjectRef)
static int address;
static int global_address;
static const int id = 0x4A1B00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A1B00, 0x4A1BF0, 0x4A1B80>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x475CA6,100,0,0x475C50,1, 0x4A2455,100,0,0x4A22D0,1, 0x475CA6,110,0,0x475C50,1, 0x4A2545,110,0,0x4A23C0,1, 0x475CA6,120,0,0x475C50,1, 0x4A24D5,120,0,0x4A2350,1>;
using def_t = int(CObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CObject *>, 0>;
META_END

META_BEGIN(CPools::GetObject)
static int address;
static int global_address;
static const int id = 0x4A1B20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A1B20, 0x4A1C10, 0x4A1BA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4D46E7,100,0,0x4D4650,1, 0x4D4787,110,0,0x4D46F0,1, 0x4D4717,120,0,0x4D4680,1>;
using def_t = CObject *(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPools::LoadVehiclePool)
static int address;
static int global_address;
static const int id = 0x4A1B40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A1B40, 0x4A1C30, 0x4A1BC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x590F6D,100,0,0x590A00,1, 0x59122D,110,0,0x590CC0,1, 0x59111D,120,0,0x590BB0,1>;
using def_t = void(unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int>, 0,1>;
META_END

META_BEGIN(CPools::SaveVehiclePool)
static int address;
static int global_address;
static const int id = 0x4A2080;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A2080, 0x4A2170, 0x4A2100>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x58FDD2,100,0,0x58F8D0,1, 0x5900C2,110,0,0x58FBC0,1, 0x58FFB2,120,0,0x58FAB0,1>;
using def_t = void(unsigned char *, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int *>, 0,1>;
META_END

META_BEGIN(CPools::SaveObjectPool)
static int address;
static int global_address;
static const int id = 0x4A22D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A22D0, 0x4A23C0, 0x4A2350>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x58FE78,100,0,0x58F8D0,1, 0x590168,110,0,0x58FBC0,1, 0x590058,120,0,0x58FAB0,1>;
using def_t = void(unsigned char *, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int *>, 0,1>;
META_END

META_BEGIN(CPools::LoadObjectPool)
static int address;
static int global_address;
static const int id = 0x4A2550;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A2550, 0x4A2640, 0x4A25D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x591006,100,0,0x590A00,1, 0x5912C6,110,0,0x590CC0,1, 0x5911B6,120,0,0x590BB0,1>;
using def_t = void(unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int>, 0,1>;
META_END

META_BEGIN(CPools::SavePedPool)
static int address;
static int global_address;
static const int id = 0x4A29B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A29B0, 0x4A2AA0, 0x4A2A30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x58FC82,100,0,0x58F8D0,1, 0x58FF72,110,0,0x58FBC0,1, 0x58FE62,120,0,0x58FAB0,1>;
using def_t = void(unsigned char *, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int *>, 0,1>;
META_END

META_BEGIN(CPools::LoadPedPool)
static int address;
static int global_address;
static const int id = 0x4A2B50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A2B50, 0x4A2C40, 0x4A2BD0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x590E4F,100,0,0x590A00,1, 0x59110F,110,0,0x590CC0,1, 0x590FFF,120,0,0x590BB0,1>;
using def_t = void(unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int>, 0,1>;
META_END

META_BEGIN(CPools::GetCCutsceneHeadSize)
static int address;
static int global_address;
static const int id = 0x4A2DA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A2DA0, 0x4A2E90, 0x4A2E20>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A2E43,100,0,0x4A2DB0,1, 0x4A2F33,110,0,0x4A2EA0,1, 0x4A2EC3,120,0,0x4A2E30,1>;
using def_t = int();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPools::MakeSureSlotInObjectPoolIsEmpty)
static int address;
static int global_address;
static const int id = 0x4A2DB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A2DB0, 0x4A2EA0, 0x4A2E30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x433BB2,100,0,0x433BA0,1, 0x433BB2,110,0,0x433BA0,1, 0x433BB2,120,0,0x433BA0,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPools::GetVehiclePool)
static int address;
static int global_address;
static const int id = 0x545300;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545300, 0x545540, 0x5454F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5452CF,100,0,0x545210,1, 0x54550F,110,0,0x545450,1, 0x5454BF,120,0,0x545400,1>;
using def_t = CPool<CVehicle, CAutomobile> *();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPools::GetObjectPool)
static int address;
static int global_address;
static const int id = 0x545310;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545310, 0x545550, 0x545500>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5452AC,100,0,0x545210,1, 0x5454EC,110,0,0x545450,1, 0x54549C,120,0,0x545400,1>;
using def_t = CPool<CObject, CCutsceneObject> *();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPools::GetBuildingPool)
static int address;
static int global_address;
static const int id = 0x545320;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545320, 0x545560, 0x545510>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x54528A,100,0,0x545210,1, 0x5454CA,110,0,0x545450,1, 0x54547A,120,0,0x545400,1>;
using def_t = CPool<CBuilding> *();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
