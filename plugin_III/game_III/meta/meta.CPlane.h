/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN_OVERLOADED(CPlane, void(int, unsigned char))
static int address;
static int global_address;
static const int id = 0x54B170;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54B170, 0x54B2F0, 0x54B2A0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x54BBDA,100,0,0x54B820,1, 0x54BC6A,100,0,0x54B820,2, 0x54E048,100,0,0x54E000,1, 0x54E1A8,100,0,0x54E160,1, 0x5953EB,100,0,0x595240,1, 0x54BD5A,110,0,0x54B9A0,1, 0x54BDEA,110,0,0x54B9A0,2, 0x54E198,110,0,0x54E150,1, 0x54E2E8,110,0,0x54E2A0,1, 0x59569B,110,0,0x5954F0,1, 0x54BD0A,120,0,0x54B950,1, 0x54BD9A,120,0,0x54B950,2, 0x54E148,120,0,0x54E100,1, 0x54E298,120,0,0x54E250,1, 0x59558B,120,0,0x5953E0,1>;
using def_t = CPlane *(CPlane *, int, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlane *,int,unsigned char>, 0,1,2>;
META_END

DTOR_META_BEGIN(CPlane)
static int address;
static int global_address;
static const int id = 0x54B270;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54B270, 0x54B3F0, 0x54B3A0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x54E123,100,0,0x54E100,1, 0x54E114,100,2,0,1, 0x54E263,110,0,0x54E240,1, 0x54E254,110,2,0,1, 0x54E213,120,0,0x54E1F0,1, 0x54E204,120,2,0,1>;
using def_t = void(CPlane *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlane *>, 0>;
META_END

META_BEGIN(CPlane::SetModelIndex)
static int address;
static int global_address;
static const int id = 0x54B290;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x54B290, 0x54B410, 0x54B3C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6021E8,100,2,0x6021DC,1, 0x601BA4,110,2,0x601BA4,1, 0x60EB9C,120,2,0x60EB9C,1>;
using def_t = void(CPlane *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlane *,unsigned int>, 0,1>;
META_END

META_BEGIN(CPlane::DeleteRwObject)
static int address;
static int global_address;
static const int id = 0x54B2A0;
static const bool is_virtual = true;
static const int vtable_index = 6;
using mv_addresses_t = MvAddresses<0x54B2A0, 0x54B420, 0x54B3D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6021F4,100,2,0x6021DC,1, 0x601BA4,110,2,0x601BA4,1, 0x60EB9C,120,2,0x60EB9C,1>;
using def_t = void(CPlane *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlane *>, 0>;
META_END

META_BEGIN(CPlane::PreRender)
static int address;
static int global_address;
static const int id = 0x54B2F0;
static const bool is_virtual = true;
static const int vtable_index = 12;
using mv_addresses_t = MvAddresses<0x54B2F0, 0x54B470, 0x54B420>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x60220C,100,2,0x6021DC,1, 0x601BA4,110,2,0x601BA4,1, 0x60EB9C,120,2,0x60EB9C,1>;
using def_t = void(CPlane *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlane *>, 0>;
META_END

META_BEGIN(CPlane::Render)
static int address;
static int global_address;
static const int id = 0x54B810;
static const bool is_virtual = true;
static const int vtable_index = 13;
using mv_addresses_t = MvAddresses<0x54B810, 0x54B990, 0x54B940>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x602210,100,2,0x6021DC,1, 0x601BA4,110,2,0x601BA4,1, 0x60EB9C,120,2,0x60EB9C,1>;
using def_t = void(CPlane *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlane *>, 0>;
META_END

META_BEGIN(CPlane::InitPlanes)
static int address;
static int global_address;
static const int id = 0x54B820;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54B820, 0x54B9A0, 0x54B950>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x48C307,100,0,0x48BED0,1, 0x48C5F2,100,0,0x48C4B0,1, 0x48C7EA,100,0,0x48C740,1, 0x48C3F7,110,0,0x48BFC0,1, 0x48C6F2,110,0,0x48C5B0,1, 0x48C8EA,110,0,0x48C840,1, 0x48C387,120,0,0x48BF50,1, 0x48C682,120,0,0x48C540,1, 0x48C87A,120,0,0x48C7D0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPlane::Shutdown)
static int address;
static int global_address;
static const int id = 0x54BCD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54BCD0, 0x54BE50, 0x54BE00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C3A9,100,0,0x48C3A0,1, 0x48C499,110,0,0x48C490,1, 0x48C429,120,0,0x48C420,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPlane::LoadPath)
static int address;
static int global_address;
static const int id = 0x54BD50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54BD50, 0x54BED0, 0x54BE80>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x54B84E,100,0,0x54B820,1, 0x54BB0A,100,0,0x54B820,2, 0x54BB43,100,0,0x54B820,3, 0x54BB7C,100,0,0x54B820,4, 0x54B9CE,110,0,0x54B9A0,1, 0x54BC8A,110,0,0x54B9A0,2, 0x54BCC3,110,0,0x54B9A0,3, 0x54BCFC,110,0,0x54B9A0,4, 0x54B97E,120,0,0x54B950,1, 0x54BC3A,120,0,0x54B950,2, 0x54BC73,120,0,0x54B950,3, 0x54BCAC,120,0,0x54B950,4>;
using def_t = CPlaneNode *(char const *, int *, float *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<char const *,int *,float *,bool>, 0,1,2,3>;
META_END

META_BEGIN(CPlane::UpdatePlanes)
static int address;
static int global_address;
static const int id = 0x54BEC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54BEC0, 0x54C040, 0x54BFF0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C904,100,0,0x48C850,1, 0x48CA04,110,0,0x48C950,1, 0x48C994,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPlane::ProcessControl)
static int address;
static int global_address;
static const int id = 0x54C1D0;
static const bool is_virtual = true;
static const int vtable_index = 8;
using mv_addresses_t = MvAddresses<0x54C1D0, 0x54C350, 0x54C300>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6021FC,100,2,0x6021DC,1, 0x601BA4,110,2,0x601BA4,1, 0x60EB9C,120,2,0x60EB9C,1>;
using def_t = void(CPlane *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlane *>, 0>;
META_END

META_BEGIN(CPlane::TestRocketCollision)
static int address;
static int global_address;
static const int id = 0x54DE90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54DE90, 0x54E010, 0x54DFC0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x55B8F1,100,0,0x55B7C0,1, 0x55B9CB,100,0,0x55B7C0,2, 0x55BA21,110,0,0x55B8F0,1, 0x55BAFB,110,0,0x55B8F0,2, 0x55B9D1,120,0,0x55B8A0,1, 0x55BAAB,120,0,0x55B8A0,2>;
using def_t = bool(CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *>, 0>;
META_END

META_BEGIN(CPlane::FlagToDestroyWhenNextProcessed)
static int address;
static int global_address;
static const int id = 0x54DFC0;
static const bool is_virtual = true;
static const int vtable_index = 16;
using mv_addresses_t = MvAddresses<0x54DFC0, 0x54E140, 0x54E0F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x60221C,100,2,0x6021DC,1, 0x601BA4,110,2,0x601BA4,1, 0x60EB9C,120,2,0x60EB9C,1>;
using def_t = void(CPlane *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlane *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CPlane)
static int address;
static int global_address;
static const int id = 0x54E100;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x54E100, 0x54E240, 0x54E1F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6021DC,100,2,0x6021DC,1, 0x601BA4,110,2,0x601BA4,1, 0x60EB9C,120,2,0x60EB9C,1>;
using def_t = void(CPlane *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlane *,char>, 0,1>;
META_END

META_BEGIN(CPlane::HasCesnaLanded)
static int address;
static int global_address;
static const int id = 0x54E140;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54E140, 0x54E280, 0x54E230>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x449128,100,0,0x448240,1, 0x449128,110,0,0x448240,1, 0x449128,120,0,0x448240,1>;
using def_t = bool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPlane::HasCesnaBeenDestroyed)
static int address;
static int global_address;
static const int id = 0x54E150;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54E150, 0x54E290, 0x54E240>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44915A,100,0,0x448240,1, 0x44915A,110,0,0x448240,1, 0x44915A,120,0,0x448240,1>;
using def_t = bool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPlane::CreateDropOffCesna)
static int address;
static int global_address;
static const int id = 0x54E160;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54E160, 0x54E2A0, 0x54E250>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44AE09,100,0,0x448240,1, 0x44AE09,110,0,0x448240,1, 0x44AE09,120,0,0x448240,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPlane::HasDropOffCesnaBeenShotDown)
static int address;
static int global_address;
static const int id = 0x54E250;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54E250, 0x54E390, 0x54E340>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44AE2B,100,0,0x448240,1, 0x44AE2B,110,0,0x448240,1, 0x44AE2B,120,0,0x448240,1>;
using def_t = bool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPlane::FindDropOffCesnaCoordinates)
static int address;
static int global_address;
static const int id = 0x54E260;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54E260, 0x54E3A0, 0x54E350>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44AE63,100,0,0x448240,1, 0x44AE63,110,0,0x448240,1, 0x44AE63,120,0,0x448240,1>;
using def_t = CVector *(CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *>, 0>;
META_END

META_BEGIN(CPlane::FindDrugPlaneCoordinates)
static int address;
static int global_address;
static const int id = 0x54E280;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54E280, 0x54E3C0, 0x54E370>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44E094,100,0,0x44CB80,1, 0x44E094,110,0,0x44CB80,1, 0x44E094,120,0,0x44CB80,1>;
using def_t = CVector *(CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *>, 0>;
META_END

META_BEGIN(CreateIncomingCesna)
static int address;
static int global_address;
static const int id = 0x54E000;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54E000, 0x54E150, 0x54E100>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x449106,100,0,0x448240,1, 0x449106,110,0,0x448240,1, 0x449106,120,0,0x448240,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
