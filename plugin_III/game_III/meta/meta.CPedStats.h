/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedStats::Initialise)
static int address;
static int global_address;
static const int id = 0x4EF460;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EF460, 0x4EF510, 0x4EF4A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48BD8C,100,0,0x48BD50,1, 0x48BE7C,110,0,0x48BE40,1, 0x48BE0C,120,0,0x48BDD0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPedStats::Shutdown)
static int address;
static int global_address;
static const int id = 0x4EF540;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EF540, 0x4EF5F0, 0x4EF580>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48BEC5,100,0,0x48BEC0,1, 0x48BFB5,110,0,0x48BFB0,1, 0x48BF45,120,0,0x48BF40,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPedStats::LoadPedStats)
static int address;
static int global_address;
static const int id = 0x4EF580;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EF580, 0x4EF630, 0x4EF5C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4EF521,100,0,0x4EF460,1, 0x4EF5D1,110,0,0x4EF510,1, 0x4EF561,120,0,0x4EF4A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPedStats::GetPedStatType)
static int address;
static int global_address;
static const int id = 0x4EF780;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EF780, 0x4EF830, 0x4EF7C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x477E76,100,0,0x477DE0,1, 0x477E76,110,0,0x477DE0,1, 0x477E76,120,0,0x477DE0,1>;
using def_t = unsigned int(char *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<char *>, 0>;
META_END

}
