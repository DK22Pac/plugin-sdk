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
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x518BC6,100,0,0x5189E0,1, 0x518DF6,110,0,0x518C10,1, 0x518D86,120,0,0x518BA0,1>;
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
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x518DCA,100,0,0x518DC0,1, 0x518FFA,110,0,0x518FF0,1, 0x518F8A,120,0,0x518F80,1>;
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
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x51986A,100,0,0x5197B0,1, 0x51A383,100,0,0x5197B0,2, 0x519A9A,110,0,0x5199E0,1, 0x51A5B3,110,0,0x5199E0,2, 0x519A2A,120,0,0x519970,1, 0x51A543,120,0,0x519970,2>;
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
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x45605F,100,0,0x455800,1, 0x4560FD,100,0,0x455800,2, 0x538C40,100,0,0x535B40,1, 0x538CB1,100,0,0x535B40,2, 0x539333,100,0,0x535B40,3, 0x53939A,100,0,0x535B40,4, 0x539AA7,100,0,0x535B40,5, 0x539B12,100,0,0x535B40,6, 0x539C2B,100,0,0x535B40,7, 0x539C96,100,0,0x535B40,8, 0x45605F,110,0,0x455800,1, 0x4560FD,110,0,0x455800,2, 0x538E80,110,0,0x535D80,1, 0x538EF1,110,0,0x535D80,2, 0x539573,110,0,0x535D80,3, 0x5395DA,110,0,0x535D80,4, 0x539CE7,110,0,0x535D80,5, 0x539D52,110,0,0x535D80,6, 0x539E6B,110,0,0x535D80,7, 0x539ED6,110,0,0x535D80,8, 0x45605F,120,0,0x455800,1, 0x4560FD,120,0,0x455800,2, 0x538E30,120,0,0x535D10,1, 0x538EA1,120,0,0x535D10,2, 0x539523,120,0,0x535D10,3, 0x53958A,120,0,0x535D10,4, 0x539C97,120,0,0x535D10,5, 0x539D02,120,0,0x535D10,6, 0x539E1B,120,0,0x535D10,7, 0x539E86,120,0,0x535D10,8>;
using def_t = void(CVector, CVector, CVector, CVector, unsigned char, unsigned char, unsigned char, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,CVector,CVector,CVector,unsigned char,unsigned char,unsigned char,unsigned char>, 0,1,2,3,4,5,6,7>;
META_END

}
