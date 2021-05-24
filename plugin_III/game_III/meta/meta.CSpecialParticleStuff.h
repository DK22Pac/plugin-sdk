/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CSpecialParticleStuff::CreateFoamAroundObject)
static int address;
static int global_address;
static const int id = 0x51BC50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51BC50, 0x51BE80, 0x51BE10>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51C079,100,0,0x51C040,1, 0x51C2A9,110,0,0x51C270,1, 0x51C239,120,0,0x51C200,1>;
using def_t = void(CMatrix *, float, float, float, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CMatrix *,float,float,float,int>, 0,1,2,3,4>;
META_END

META_BEGIN(CSpecialParticleStuff::StartBoatFoamAnimation)
static int address;
static int global_address;
static const int id = 0x51C030;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51C030, 0x51C260, 0x51C1F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x58983D,100,0,0x588490,1, 0x589B7D,110,0,0x5887D0,1, 0x589A6D,120,0,0x5886C0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSpecialParticleStuff::UpdateBoatFoamAnimation)
static int address;
static int global_address;
static const int id = 0x51C040;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51C040, 0x51C270, 0x51C200>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x58986F,100,0,0x588490,1, 0x589BAF,110,0,0x5887D0,1, 0x589A9F,120,0,0x5886C0,1>;
using def_t = void(CMatrix *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CMatrix *>, 0>;
META_END

}
