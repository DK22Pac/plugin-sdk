/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CRubbish::Init)
static int address;
static int global_address;
static const int id = 0x511940;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x511940, 0x511B30, 0x511AC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C2B2,100,0,0x48BED0,1, 0x48C3A2,110,0,0x48BFC0,1, 0x48C332,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRubbish::Shutdown)
static int address;
static int global_address;
static const int id = 0x511B50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x511B50, 0x511D40, 0x511CD0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C46E,100,0,0x48C3A0,1, 0x48C55E,110,0,0x48C490,1, 0x48C4EE,120,0,0x48C420,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRubbish::Update)
static int address;
static int global_address;
static const int id = 0x511B90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x511B90, 0x511DA0, 0x511D30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C998,100,0,0x48C850,1, 0x48CA98,110,0,0x48C950,1, 0x48CA28,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRubbish::Render)
static int address;
static int global_address;
static const int id = 0x512190;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x512190, 0x5123A0, 0x512330>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E0B3,100,0,0x48E090,1, 0x48E173,110,0,0x48E150,1, 0x48E103,120,0,0x48E0E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRubbish::StirUp)
static int address;
static int global_address;
static const int id = 0x512690;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x512690, 0x5128A0, 0x512830>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x53183F,100,0,0x531470,1, 0x531A7F,110,0,0x5316B0,1, 0x531A0F,120,0,0x531640,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CRubbish::SetVisibility)
static int address;
static int global_address;
static const int id = 0x512AA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x512AA0, 0x512CB0, 0x512C40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44E252,100,0,0x44CB80,1, 0x44E252,110,0,0x44CB80,1, 0x44E252,120,0,0x44CB80,1>;
using def_t = void(bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

}
