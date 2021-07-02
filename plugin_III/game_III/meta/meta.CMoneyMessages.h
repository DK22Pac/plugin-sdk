/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CMoneyMessages::Init)
static int address;
static int global_address;
static const int id = 0x51AF70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51AF70, 0x51B1A0, 0x51B130>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x518BD0,100,0,0x5189E0,1, 0x518E00,110,0,0x518C10,1, 0x518D90,120,0,0x518BA0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CMoneyMessages::Render)
static int address;
static int global_address;
static const int id = 0x51B030;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51B030, 0x51B260, 0x51B1F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x518DD4,100,0,0x518DC0,1, 0x519004,110,0,0x518FF0,1, 0x518F94,120,0,0x518F80,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
