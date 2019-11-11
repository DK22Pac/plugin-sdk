/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(COnscreenTimer::Init)
static int address;
static int global_address;
static const int id = 0x429220;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x429220, 0x429220, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x4AD66F,100,0,0x4AD660,1, 0x4AD75F,110,0,0x4AD750,1>;
using def_t = void(COnscreenTimer *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<COnscreenTimer *>, 0>;
META_END

META_BEGIN(COnscreenTimer::ProcessForDisplay)
static int address;
static int global_address;
static const int id = 0x4292E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4292E0, 0x4292E0, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x48E42A,100,0,0x48E0E0,1, 0x48E4EA,110,0,0x48E1A0,1>;
using def_t = void(COnscreenTimer *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<COnscreenTimer *>, 0>;
META_END

META_BEGIN(COnscreenTimer::Process)
static int address;
static int global_address;
static const int id = 0x429320;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x429320, 0x429320, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x4AD69F,100,0,0x4AD690,1, 0x4AD78F,110,0,0x4AD780,1>;
using def_t = void(COnscreenTimer *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<COnscreenTimer *>, 0>;
META_END

META_BEGIN(COnscreenTimer::AddClock)
static int address;
static int global_address;
static const int id = 0x429350;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x429350, 0x429350, 0>;
// total references count: 10en (2), 11en (2), steam (0)
using refs_t = RefList<0x43F1A7,100,0,0x43ED30,1, 0x44EC65,100,0,0x44CB80,1, 0x43F1A7,110,0,0x43ED30,1, 0x44EC65,110,0,0x44CB80,1>;
using def_t = void(COnscreenTimer *, unsigned int, char *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<COnscreenTimer *,unsigned int,char *>, 0,1,2>;
META_END

META_BEGIN(COnscreenTimer::AddCounter)
static int address;
static int global_address;
static const int id = 0x4293B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4293B0, 0x4293B0, 0>;
// total references count: 10en (2), 11en (2), steam (0)
using refs_t = RefList<0x43F230,100,0,0x43ED30,1, 0x44ED04,100,0,0x44CB80,1, 0x43F230,110,0,0x43ED30,1, 0x44ED04,110,0,0x44CB80,1>;
using def_t = void(COnscreenTimer *, unsigned int, unsigned short, char *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<COnscreenTimer *,unsigned int,unsigned short,char *>, 0,1,2,3>;
META_END

META_BEGIN(COnscreenTimer::ClearClock)
static int address;
static int global_address;
static const int id = 0x429410;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x429410, 0x429410, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x43F1E0,100,0,0x43ED30,1, 0x43F1E0,110,0,0x43ED30,1>;
using def_t = void(COnscreenTimer *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<COnscreenTimer *,unsigned int>, 0,1>;
META_END

META_BEGIN(COnscreenTimer::ClearCounter)
static int address;
static int global_address;
static const int id = 0x429450;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x429450, 0x429450, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x43F269,100,0,0x43ED30,1, 0x43F269,110,0,0x43ED30,1>;
using def_t = void(COnscreenTimer *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<COnscreenTimer *,unsigned int>, 0,1>;
META_END

}
