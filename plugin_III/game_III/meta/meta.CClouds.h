/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CClouds::Init)
static int address;
static int global_address;
static const int id = 0x4F6C10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6C10, 0x4F6CC0, 0x4F6C50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C2B7,100,0,0x48BED0,1, 0x48C3A7,110,0,0x48BFC0,1, 0x48C337,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CClouds::Shutdown)
static int address;
static int global_address;
static const int id = 0x4F6CA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6CA0, 0x4F6D50, 0x4F6CE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C473,100,0,0x48C3A0,1, 0x48C563,110,0,0x48C490,1, 0x48C4F3,120,0,0x48C420,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CClouds::Update)
static int address;
static int global_address;
static const int id = 0x4F6CE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6CE0, 0x4F6DC0, 0x4F6D50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C961,100,0,0x48C850,1, 0x48CA61,110,0,0x48C950,1, 0x48C9F1,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CClouds::Render)
static int address;
static int global_address;
static const int id = 0x4F6D90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6D90, 0x4F6E70, 0x4F6E00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E030,100,0,0x48E030,1, 0x48E0F0,110,0,0x48E0F0,1, 0x48E080,120,0,0x48E080,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CClouds::RenderBackground)
static int address;
static int global_address;
static const int id = 0x4F7F00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F7F00, 0x4F7FE0, 0x4F7F70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48D100,100,0,0x48D040,1, 0x48D200,110,0,0x48D140,1, 0x48D190,120,0,0x48D0D0,1>;
using def_t = void(short, short, short, short, short, short, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<short,short,short,short,short,short,short>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CClouds::RenderHorizon)
static int address;
static int global_address;
static const int id = 0x4F85F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F85F0, 0x4F86D0, 0x4F8660>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48D110,100,0,0x48D110,1, 0x48D210,110,0,0x48D210,1, 0x48D1A0,120,0,0x48D1A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(UseDarkBackground)
static int address;
static int global_address;
static const int id = 0x4F7ED0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F7ED0, 0x4F7FB0, 0x4F7F40>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4F7F89,100,0,0x4F7F00,1, 0x4F85F3,100,0,0x4F85F0,1, 0x4F8069,110,0,0x4F7FE0,1, 0x4F86D3,110,0,0x4F86D0,1, 0x4F7FF9,120,0,0x4F7F70,1, 0x4F8663,120,0,0x4F8660,1>;
using def_t = bool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
