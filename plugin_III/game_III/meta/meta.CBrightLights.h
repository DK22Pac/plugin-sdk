/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CBrightLights::Init)
static int address;
static int global_address;
static const int id = 0x5197A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5197A0, 0x5199D0, 0x519960>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x518BC6,100,0,0x5189E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CBrightLights::Render)
static int address;
static int global_address;
static const int id = 0x5197B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5197B0, 0x5199E0, 0x519970>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x518DCA,100,0,0x518DC0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CBrightLights::RenderOutGeometryBuffer)
static int address;
static int global_address;
static const int id = 0x51A3B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51A3B0, 0x51A5E0, 0x51A570>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x51986A,100,0,0x5197B0,1, 0x51A383,100,0,0x5197B0,2>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CBrightLights::RegisterOne)
static int address;
static int global_address;
static const int id = 0x51A410;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51A410, 0x51A640, 0x51A5D0>;
// total references count: 10en (10), 11en (0), steam (0)
using refs_t = RefList<0x45605F,100,0,0x455800,1, 0x4560FD,100,0,0x455800,2, 0x538C40,100,0,0x535B40,1, 0x538CB1,100,0,0x535B40,2, 0x539333,100,0,0x535B40,3, 0x53939A,100,0,0x535B40,4, 0x539AA7,100,0,0x535B40,5, 0x539B12,100,0,0x535B40,6, 0x539C2B,100,0,0x535B40,7, 0x539C96,100,0,0x535B40,8>;
using def_t = void(CVector, CVector, CVector, CVector, unsigned char, unsigned char, unsigned char, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,CVector,CVector,CVector,unsigned char,unsigned char,unsigned char,unsigned char>, 0,1,2,3,4,5,6,7>;
META_END

}
