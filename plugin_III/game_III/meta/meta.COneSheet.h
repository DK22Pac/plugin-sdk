/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(COneSheet::AddToList)
static int address;
static int global_address;
static const int id = 0x512650;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x512650, 0x512860, 0x5127F0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x511D48,100,0,0x511B90,1, 0x511DB0,100,0,0x511B90,2, 0x5120C4,100,0,0x511B90,3, 0x512151,100,0,0x511B90,4, 0x512A26,100,0,0x512690,1, 0x511F58,110,0,0x511DA0,1, 0x511FC0,110,0,0x511DA0,2, 0x5122D4,110,0,0x511DA0,3, 0x512361,110,0,0x511DA0,4, 0x512C36,110,0,0x5128A0,1, 0x511EE8,120,0,0x511D30,1, 0x511F50,120,0,0x511D30,2, 0x512264,120,0,0x511D30,3, 0x5122F1,120,0,0x511D30,4, 0x512BC6,120,0,0x512830,1>;
using def_t = void(COneSheet *, COneSheet *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<COneSheet *,COneSheet *>, 0,1>;
META_END

META_BEGIN(COneSheet::RemoveFromList)
static int address;
static int global_address;
static const int id = 0x512670;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x512670, 0x512880, 0x512810>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x511D3C,100,0,0x511B90,1, 0x511DA4,100,0,0x511B90,2, 0x5120B8,100,0,0x511B90,3, 0x512145,100,0,0x511B90,4, 0x512A1A,100,0,0x512690,1, 0x511F4C,110,0,0x511DA0,1, 0x511FB4,110,0,0x511DA0,2, 0x5122C8,110,0,0x511DA0,3, 0x512355,110,0,0x511DA0,4, 0x512C2A,110,0,0x5128A0,1, 0x511EDC,120,0,0x511D30,1, 0x511F44,120,0,0x511D30,2, 0x512258,120,0,0x511D30,3, 0x5122E5,120,0,0x511D30,4, 0x512BBA,120,0,0x512830,1>;
using def_t = void(COneSheet *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<COneSheet *>, 0>;
META_END

}
