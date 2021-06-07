/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN_OVERLOADED(CHeli, void(int, unsigned char))
static int address;
static int global_address;
static const int id = 0x547220;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x547220, 0x547420, 0x5473D0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x54A67C,100,0,0x54A640,1, 0x54A6A1,100,0,0x54A640,2, 0x595493,100,0,0x595240,1, 0x54A84C,110,0,0x54A810,1, 0x54A871,110,0,0x54A810,2, 0x595743,110,0,0x5954F0,1, 0x54A7FC,120,0,0x54A7C0,1, 0x54A821,120,0,0x54A7C0,2, 0x595633,120,0,0x5953E0,1>;
using def_t = CHeli *(CHeli *, int, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CHeli *,int,unsigned char>, 0,1,2>;
META_END

DTOR_META_BEGIN(CHeli)
static int address;
static int global_address;
static const int id = 0x5474A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5474A0, 0x5476A0, 0x547650>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x54A5CD,100,0,0x54A590,1, 0x54A5BA,100,2,0,1, 0x54A7CD,110,0,0x54A790,1, 0x54A7BA,110,2,0,1, 0x54A77D,120,0,0x54A740,1, 0x54A76A,120,2,0,1>;
using def_t = void(CHeli *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CHeli *>, 0>;
META_END

META_BEGIN(CHeli::SetModelIndex)
static int address;
static int global_address;
static const int id = 0x5474C0;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x5474C0, 0x5476C0, 0x547670>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x601EBC,100,2,0x601EB0,1, 0x601980,110,2,0x601980,1, 0x60E978,120,2,0x60E978,1>;
using def_t = void(CHeli *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CHeli *,unsigned int>, 0,1>;
META_END

META_BEGIN(CHeli::PreRender)
static int address;
static int global_address;
static const int id = 0x547540;
static const bool is_virtual = true;
static const int vtable_index = 12;
using mv_addresses_t = MvAddresses<0x547540, 0x547740, 0x5476F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x601EE0,100,2,0x601EB0,1, 0x601980,110,2,0x601980,1, 0x60E978,120,2,0x60E978,1>;
using def_t = void(CHeli *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CHeli *>, 0>;
META_END

META_BEGIN(CHeli::PreRenderAlways)
static int address;
static int global_address;
static const int id = 0x5477F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5477F0, 0x5479F0, 0x5479A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x54AE1E,100,0,0x54AE10,1, 0x54AF9E,110,0,0x54AF90,1, 0x54AF4E,120,0,0x54AF40,1>;
using def_t = void(CHeli *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CHeli *>, 0>;
META_END

META_BEGIN(CHeli::Render)
static int address;
static int global_address;
static const int id = 0x547B70;
static const bool is_virtual = true;
static const int vtable_index = 13;
using mv_addresses_t = MvAddresses<0x547B70, 0x547D70, 0x547D20>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x601EE4,100,2,0x601EB0,1, 0x601980,110,2,0x601980,1, 0x60E978,120,2,0x60E978,1>;
using def_t = void(CHeli *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CHeli *>, 0>;
META_END

META_BEGIN(CHeli::ProcessControl)
static int address;
static int global_address;
static const int id = 0x547CC0;
static const bool is_virtual = true;
static const int vtable_index = 8;
using mv_addresses_t = MvAddresses<0x547CC0, 0x547EC0, 0x547E70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x601ED0,100,2,0x601EB0,1, 0x601980,110,2,0x601980,1, 0x60E978,120,2,0x60E978,1>;
using def_t = void(CHeli *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CHeli *>, 0>;
META_END

META_BEGIN(CHeli::InitHelis)
static int address;
static int global_address;
static const int id = 0x549970;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x549970, 0x549B70, 0x549B20>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C294,100,0,0x48BED0,1, 0x48C594,100,0,0x48C4B0,1, 0x48C384,110,0,0x48BFC0,1, 0x48C694,110,0,0x48C5B0,1, 0x48C314,120,0,0x48BF50,1, 0x48C624,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CHeli::UpdateHelis)
static int address;
static int global_address;
static const int id = 0x5499F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5499F0, 0x549BF0, 0x549BA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C909,100,0,0x48C850,1, 0x48CA09,110,0,0x48C950,1, 0x48C999,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

DEL_DTOR_META_BEGIN(CHeli)
static int address;
static int global_address;
static const int id = 0x54A590;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x54A590, 0x54A790, 0x54A740>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x601EB0,100,2,0x601EB0,1, 0x601980,110,2,0x601980,1, 0x60E978,120,2,0x60E978,1>;
using def_t = void(CHeli *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CHeli *,char>, 0,1>;
META_END

META_BEGIN(CHeli::ActivateHeli)
static int address;
static int global_address;
static const int id = 0x54A940;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54A940, 0x54AB00, 0x54AAB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x443EE2,100,0,0x4429C0,1, 0x443EE2,110,0,0x4429C0,1, 0x443EE2,120,0,0x4429C0,1>;
using def_t = void(bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(CHeli::CatalinaTakeOff)
static int address;
static int global_address;
static const int id = 0x54A9B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54A9B0, 0x54AB30, 0x54AAE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44E413,100,0,0x44CB80,1, 0x44E413,110,0,0x44CB80,1, 0x44E413,120,0,0x44CB80,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CHeli::MakeCatalinaHeliFlyAway)
static int address;
static int global_address;
static const int id = 0x54A9C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54A9C0, 0x54AB40, 0x54AAF0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44EA6B,100,0,0x44CB80,1, 0x44EA6B,110,0,0x44CB80,1, 0x44EA6B,120,0,0x44CB80,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CHeli::RemoveCatalinaHeli)
static int address;
static int global_address;
static const int id = 0x54A9D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54A9D0, 0x54AB50, 0x54AB00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44E427,100,0,0x44CB80,1, 0x44E427,110,0,0x44CB80,1, 0x44E427,120,0,0x44CB80,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CHeli::HasCatalinaBeenShotDown)
static int address;
static int global_address;
static const int id = 0x54AA10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54AA10, 0x54AB90, 0x54AB40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44E43D,100,0,0x44CB80,1, 0x44E43D,110,0,0x44CB80,1, 0x44E43D,120,0,0x44CB80,1>;
using def_t = bool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CHeli::FindPointerToCatalinasHeli)
static int address;
static int global_address;
static const int id = 0x54AA20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54AA20, 0x54ABA0, 0x54AB50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44E7CF,100,0,0x44CB80,1, 0x44E7CF,110,0,0x44CB80,1, 0x44E7CF,120,0,0x44CB80,1>;
using def_t = CHeli *();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CHeli::TestRocketCollision)
static int address;
static int global_address;
static const int id = 0x54AA30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54AA30, 0x54ABB0, 0x54AB60>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x55B8E2,100,0,0x55B7C0,1, 0x55B9BC,100,0,0x55B7C0,2, 0x55BA12,110,0,0x55B8F0,1, 0x55BAEC,110,0,0x55B8F0,2, 0x55B9C2,120,0,0x55B8A0,1, 0x55BA9C,120,0,0x55B8A0,2>;
using def_t = bool(CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *>, 0>;
META_END

META_BEGIN(CHeli::TestBulletCollision)
static int address;
static int global_address;
static const int id = 0x54AB30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54AB30, 0x54ACB0, 0x54AC60>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x55D93F,100,0,0x55D2E0,1, 0x55DB0F,100,0,0x55D2E0,2, 0x56233D,100,0,0x562180,1, 0x55DA6F,110,0,0x55D410,1, 0x55DC3F,110,0,0x55D410,2, 0x56246D,110,0,0x5622B0,1, 0x55DA1F,120,0,0x55D3C0,1, 0x55DBEF,120,0,0x55D3C0,2, 0x56241D,120,0,0x562260,1>;
using def_t = bool(CVector *, CVector *, CVector *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *,CVector *,CVector *,int>, 0,1,2,3>;
META_END

META_BEGIN(CHeli::SpecialHeliPreRender)
static int address;
static int global_address;
static const int id = 0x54AE10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54AE10, 0x54AF90, 0x54AF40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A78A0,100,0,0x4A7840,1, 0x4A7990,110,0,0x4A7930,1, 0x4A7920,120,0,0x4A78C0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CHeli::SpawnFlyingComponent)
static int address;
static int global_address;
static const int id = 0x54AE50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54AE50, 0x54AFD0, 0x54AF80>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x549FA7,100,0,0x5499F0,1, 0x549FBB,100,0,0x5499F0,2, 0x549FCF,100,0,0x5499F0,3, 0x54A253,100,0,0x5499F0,4, 0x54A267,100,0,0x5499F0,5, 0x54A1A7,110,0,0x549BF0,1, 0x54A1BB,110,0,0x549BF0,2, 0x54A1CF,110,0,0x549BF0,3, 0x54A453,110,0,0x549BF0,4, 0x54A467,110,0,0x549BF0,5, 0x54A157,120,0,0x549BA0,1, 0x54A16B,120,0,0x549BA0,2, 0x54A17F,120,0,0x549BA0,3, 0x54A403,120,0,0x549BA0,4, 0x54A417,120,0,0x549BA0,5>;
using def_t = CObject *(CHeli *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CHeli *,int>, 0,1>;
META_END

META_BEGIN(GenerateHeli)
static int address;
static int global_address;
static const int id = 0x54A640;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54A640, 0x54A810, 0x54A7C0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x549A64,100,0,0x5499F0,1, 0x549AC7,100,0,0x5499F0,2, 0x549B27,100,0,0x5499F0,3, 0x549C64,110,0,0x549BF0,1, 0x549CC7,110,0,0x549BF0,2, 0x549D27,110,0,0x549BF0,3, 0x549C14,120,0,0x549BA0,1, 0x549C77,120,0,0x549BA0,2, 0x549CD7,120,0,0x549BA0,3>;
using def_t = CHeli *(bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(StartCatalinaFlyBy)
static int address;
static int global_address;
static const int id = 0x54A980;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54A980, 0x54AB10, 0x54AAC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44E3FF,100,0,0x44CB80,1, 0x44E3FF,110,0,0x44CB80,1, 0x44E3FF,120,0,0x44CB80,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(GetHeliAtomicObjectCB)
static int address;
static int global_address;
static const int id = 0x54AE30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54AE30, 0x54AFB0, 0x54AF60>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x54AE8B,100,2,0,1, 0x54B114,100,2,0,1, 0x54B00B,110,2,0,1, 0x54B294,110,2,0,1, 0x54AFBB,120,2,0,1, 0x54B244,120,2,0,1>;
using def_t = RwObject *(RwObject *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwObject *,void *>, 0,1>;
META_END

}
