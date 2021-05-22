/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CAntennas::Init)
static int address;
static int global_address;
static const int id = 0x4F64D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F64D0, 0x4F6580, 0x4F6510>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C23E,100,0,0x48BED0,1, 0x48C561,100,0,0x48C4B0,1, 0x48C32E,110,0,0x48BFC0,1, 0x48C661,110,0,0x48C5B0,1, 0x48C2BE,120,0,0x48BF50,1, 0x48C5F1,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CAntennas::Update)
static int address;
static int global_address;
static const int id = 0x4F6550;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6550, 0x4F6600, 0x4F6590>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C918,100,0,0x48C850,1, 0x48CA18,110,0,0x48C950,1, 0x48C9A8,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CAntennas::Render)
static int address;
static int global_address;
static const int id = 0x4F6590;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6590, 0x4F6640, 0x4F65D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E0AE,100,0,0x48E090,1, 0x48E16E,110,0,0x48E150,1, 0x48E0FE,120,0,0x48E0E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CAntennas::RegisterOne)
static int address;
static int global_address;
static const int id = 0x4F66C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F66C0, 0x4F6770, 0x4F6700>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x535BBB,100,0,0x535B40,1, 0x535DFB,110,0,0x535D80,1, 0x535D8B,120,0,0x535D10,1>;
using def_t = void(unsigned int, CVector, CVector, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,CVector,CVector,float>, 0,1,2,3>;
META_END

}
