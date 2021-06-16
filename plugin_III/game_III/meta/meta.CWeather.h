/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CWeather::Init)
static int address;
static int global_address;
static const int id = 0x522BA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x522BA0, 0x522DE0, 0x522D70>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48BFCE,100,0,0x48BED0,1, 0x48C4D6,100,0,0x48C4B0,1, 0x48C0BE,110,0,0x48BFC0,1, 0x48C5D6,110,0,0x48C5B0,1, 0x48C04E,120,0,0x48BF50,1, 0x48C566,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CWeather::Update)
static int address;
static int global_address;
static const int id = 0x522C10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x522C10, 0x522E50, 0x522DE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C8F0,100,0,0x48C850,1, 0x48C9F0,110,0,0x48C950,1, 0x48C980,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CWeather::ForceWeather)
static int address;
static int global_address;
static const int id = 0x523170;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x523170, 0x5233B0, 0x523340>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x441250,100,0,0x440CB0,1, 0x441250,110,0,0x440CB0,1, 0x441250,120,0,0x440CB0,1>;
using def_t = void(short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<short>, 0>;
META_END

META_BEGIN(CWeather::ForceWeatherNow)
static int address;
static int global_address;
static const int id = 0x523180;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x523180, 0x5233C0, 0x523350>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x441279,100,0,0x440CB0,1, 0x49153B,100,0,0x491520,1, 0x49156B,100,0,0x491550,1, 0x49159B,100,0,0x491580,1, 0x4915CB,100,0,0x4915B0,1, 0x441279,110,0,0x440CB0,1, 0x4915FB,110,0,0x4915E0,1, 0x49162B,110,0,0x491610,1, 0x49165B,110,0,0x491640,1, 0x49168B,110,0,0x491670,1, 0x441279,120,0,0x440CB0,1, 0x49158B,120,0,0x491570,1, 0x4915BB,120,0,0x4915A0,1, 0x4915EB,120,0,0x4915D0,1, 0x49161B,120,0,0x491600,1>;
using def_t = void(short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<short>, 0>;
META_END

META_BEGIN(CWeather::ReleaseWeather)
static int address;
static int global_address;
static const int id = 0x5231A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5231A0, 0x5233E0, 0x523370>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x437C60,100,0,0x437C10,1, 0x44128E,100,0,0x440CB0,1, 0x494450,100,0,0x494450,1, 0x437C60,110,0,0x437C10,1, 0x44128E,110,0,0x440CB0,1, 0x494510,110,0,0x494510,1, 0x437C60,120,0,0x437C10,1, 0x44128E,120,0,0x440CB0,1, 0x4944A0,120,0,0x4944A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CWeather::AddRain)
static int address;
static int global_address;
static const int id = 0x5231B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5231B0, 0x5233F0, 0x523380>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x523162,100,0,0x522C10,1, 0x5233A2,110,0,0x522E50,1, 0x523332,120,0,0x522DE0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CWeather::RenderRainStreaks)
static int address;
static int global_address;
static const int id = 0x524550;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x524550, 0x524790, 0x524720>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E06D,100,0,0x48E030,1, 0x48E12D,110,0,0x48E0F0,1, 0x48E0BD,120,0,0x48E080,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CWeather::StoreWeatherState)
static int address;
static int global_address;
static const int id = 0x524B20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x524B20, 0x524D60, 0x524CF0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44499A,100,0,0x4429C0,1, 0x44499A,110,0,0x4429C0,1, 0x44499A,120,0,0x4429C0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CWeather::RestoreWeatherState)
static int address;
static int global_address;
static const int id = 0x524B60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x524B60, 0x524DA0, 0x524D30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4449AD,100,0,0x4429C0,1, 0x4449AD,110,0,0x4429C0,1, 0x4449AD,120,0,0x4429C0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(RenderOneRainStreak)
static int address;
static int global_address;
static const int id = 0x5240E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5240E0, 0x524320, 0x5242B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x524826,100,0,0x524550,1, 0x524A66,110,0,0x524790,1, 0x5249F6,120,0,0x524720,1>;
using def_t = void(CVector, CVector, int, bool, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,CVector,int,bool,float>, 0,1,2,3,4>;
META_END

}
