/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CShinyTexts::Init)
static int address;
static int global_address;
static const int id = 0x51A5A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51A5A0, 0x51A7D0, 0x51A760>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x518BCB,100,0,0x5189E0,1, 0x518DFB,110,0,0x518C10,1, 0x518D8B,120,0,0x518BA0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CShinyTexts::Render)
static int address;
static int global_address;
static const int id = 0x51A5B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51A5B0, 0x51A7E0, 0x51A770>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x518DCF,100,0,0x518DC0,1, 0x518FFF,110,0,0x518FF0,1, 0x518F8F,120,0,0x518F80,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CShinyTexts::RenderOutGeometryBuffer)
static int address;
static int global_address;
static const int id = 0x51AA50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51AA50, 0x51AC80, 0x51AC10>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x51A62F,100,0,0x51A5B0,1, 0x51A66E,100,0,0x51A5B0,2, 0x51A833,100,0,0x51A5B0,3, 0x51AA02,100,0,0x51A5B0,4, 0x51A85F,110,0,0x51A7E0,1, 0x51A89E,110,0,0x51A7E0,2, 0x51AA63,110,0,0x51A7E0,3, 0x51AC32,110,0,0x51A7E0,4, 0x51A7EF,120,0,0x51A770,1, 0x51A82E,120,0,0x51A770,2, 0x51A9F3,120,0,0x51A770,3, 0x51ABC2,120,0,0x51A770,4>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CShinyTexts::RegisterOne)
static int address;
static int global_address;
static const int id = 0x51AAB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51AAB0, 0x51ACE0, 0x51AC70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x456443,100,0,0x455800,1, 0x456443,110,0,0x455800,1, 0x456443,120,0,0x455800,1>;
using def_t = void(CVector, CVector, CVector, CVector, float, float, float, float, float, float, float, float, unsigned char, unsigned char, unsigned char, unsigned char, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,CVector,CVector,CVector,float,float,float,float,float,float,float,float,unsigned char,unsigned char,unsigned char,unsigned char,float>, 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16>;
META_END

}
