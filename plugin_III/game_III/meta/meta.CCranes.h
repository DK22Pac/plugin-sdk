/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCranes::InitCranes)
static int address;
static int global_address;
static const int id = 0x543360;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x543360, 0x5435A0, 0x543550>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x48C299,100,0,0x48BED0,1, 0x48C5D4,100,0,0x48C4B0,1, 0x48C684,100,0,0x48C620,1, 0x48C389,110,0,0x48BFC0,1, 0x48C6D4,110,0,0x48C5B0,1, 0x48C784,110,0,0x48C720,1, 0x48C319,120,0,0x48BF50,1, 0x48C664,120,0,0x48C540,1, 0x48C714,120,0,0x48C6B0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCranes::AddThisOneCrane)
static int address;
static int global_address;
static const int id = 0x543440;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x543440, 0x543680, 0x543630>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5433C8,100,0,0x543360,1, 0x54341E,100,0,0x543360,2, 0x543608,110,0,0x5435A0,1, 0x54365E,110,0,0x5435A0,2, 0x5435B8,120,0,0x543550,1, 0x54360E,120,0,0x543550,2>;
using def_t = void(CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *>, 0>;
META_END

META_BEGIN(CCranes::ActivateCrane)
static int address;
static int global_address;
static const int id = 0x543650;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x543650, 0x543890, 0x543840>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x442882,100,0,0x440CB0,1, 0x447880,100,0,0x4458A0,1, 0x44BAF4,100,0,0x448240,1, 0x442882,110,0,0x440CB0,1, 0x447880,110,0,0x4458A0,1, 0x44BAF4,110,0,0x448240,1, 0x442882,120,0,0x440CB0,1, 0x447880,120,0,0x4458A0,1, 0x44BAF4,120,0,0x448240,1>;
using def_t = void(float, float, float, float, float, float, float, float, bool, bool, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float,float,float,float,float,bool,bool,float,float>, 0,1,2,3,4,5,6,7,8,9,10,11>;
META_END

META_BEGIN(CCranes::DeActivateCrane)
static int address;
static int global_address;
static const int id = 0x543890;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x543890, 0x543AD0, 0x543A80>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4428B2,100,0,0x440CB0,1, 0x4428B2,110,0,0x440CB0,1, 0x4428B2,120,0,0x440CB0,1>;
using def_t = void(float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float>, 0,1>;
META_END

META_BEGIN(CCranes::IsThisCarPickedUp)
static int address;
static int global_address;
static const int id = 0x543940;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x543940, 0x543B80, 0x543B30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44DE25,100,0,0x44CB80,1, 0x44DE25,110,0,0x44CB80,1, 0x44DE25,120,0,0x44CB80,1>;
using def_t = bool(float, float, CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,CVehicle *>, 0,1,2>;
META_END

META_BEGIN(CCranes::UpdateCranes)
static int address;
static int global_address;
static const int id = 0x5439E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5439E0, 0x543C20, 0x543BD0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C95C,100,0,0x48C850,1, 0x48CA5C,110,0,0x48C950,1, 0x48C9EC,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCranes::DoesMilitaryCraneHaveThisOneAlready)
static int address;
static int global_address;
static const int id = 0x544B00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x544B00, 0x544D40, 0x544CF0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5449B5,100,0,0x544850,1, 0x544BF5,110,0,0x544A90,1, 0x544BA5,120,0,0x544A40,1>;
using def_t = bool(unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(CCranes::RegisterCarForMilitaryCrane)
static int address;
static int global_address;
static const int id = 0x544B80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x544B80, 0x544DC0, 0x544D70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x544265,100,0,0x543AC0,1, 0x5444A5,110,0,0x543D00,1, 0x544455,120,0,0x543CB0,1>;
using def_t = void(unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(CCranes::HaveAllCarsBeenCollectedByMilitaryCrane)
static int address;
static int global_address;
static const int id = 0x544BE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x544BE0, 0x544E20, 0x544DD0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x54426B,100,0,0x543AC0,1, 0x588538,100,0,0x588490,1, 0x5444AB,110,0,0x543D00,1, 0x588878,110,0,0x5887D0,1, 0x54445B,120,0,0x543CB0,1, 0x588768,120,0,0x5886C0,1>;
using def_t = bool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCranes::IsThisCarBeingCarriedByAnyCrane)
static int address;
static int global_address;
static const int id = 0x545190;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545190, 0x5453D0, 0x545380>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4A0E73,100,0,0x4A0CD0,1, 0x4E092E,100,0,0x4E0920,1, 0x4A0F63,110,0,0x4A0DC0,1, 0x4E09DE,110,0,0x4E09D0,1, 0x4A0EF3,120,0,0x4A0D50,1, 0x4E096E,120,0,0x4E0960,1>;
using def_t = bool(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCranes::IsThisCarBeingTargettedByAnyCrane)
static int address;
static int global_address;
static const int id = 0x5451E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5451E0, 0x545420, 0x5453D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x418469,100,0,0x418430,1, 0x418469,110,0,0x418430,1, 0x418469,120,0,0x418430,1>;
using def_t = bool(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCranes::Save)
static int address;
static int global_address;
static const int id = 0x545210;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545210, 0x545450, 0x545400>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x58FFD7,100,0,0x58F8D0,1, 0x5902C7,110,0,0x58FBC0,1, 0x5901B7,120,0,0x58FAB0,1>;
using def_t = void(unsigned char *, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int *>, 0,1>;
META_END

META_BEGIN(CranesLoad)
static int address;
static int global_address;
static const int id = 0x5454D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5454D0, 0x5456E0, 0x545690>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x591127,100,0,0x590A00,1, 0x5913E7,110,0,0x590CC0,1, 0x5912D7,120,0,0x590BB0,1>;
using def_t = void(unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int>, 0,1>;
META_END

}
