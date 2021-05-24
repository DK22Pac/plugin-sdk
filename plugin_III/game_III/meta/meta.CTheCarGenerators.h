/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CTheCarGenerators::Process)
static int address;
static int global_address;
static const int id = 0x542F40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x542F40, 0x543180, 0x543130>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C94E,100,0,0x48C850,1, 0x48CA4E,110,0,0x48C950,1, 0x48C9DE,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheCarGenerators::CreateCarGenerator)
static int address;
static int global_address;
static const int id = 0x542FC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x542FC0, 0x543200, 0x5431B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43F0AB,100,0,0x43ED30,1, 0x43F0AB,110,0,0x43ED30,1, 0x43F0AB,120,0,0x43ED30,1>;
using def_t = int(float, float, float, float, int, short, short, unsigned char, unsigned char, unsigned char, unsigned short, unsigned short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float,int,short,short,unsigned char,unsigned char,unsigned char,unsigned short,unsigned short>, 0,1,2,3,4,5,6,7,8,9,10,11>;
META_END

META_BEGIN(CTheCarGenerators::Init)
static int address;
static int global_address;
static const int id = 0x543020;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x543020, 0x543260, 0x543210>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x48C023,100,0,0x48BED0,1, 0x48C58F,100,0,0x48C4B0,1, 0x5431E5,100,0,0x5431E0,1, 0x48C113,110,0,0x48BFC0,1, 0x48C68F,110,0,0x48C5B0,1, 0x543425,110,0,0x543420,1, 0x48C0A3,120,0,0x48BF50,1, 0x48C61F,120,0,0x48C540,1, 0x5433D5,120,0,0x5433D0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTheCarGenerators::SaveAllCarGenerators)
static int address;
static int global_address;
static const int id = 0x543050;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x543050, 0x543290, 0x543240>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x590472,100,0,0x58F8D0,1, 0x590762,110,0,0x58FBC0,1, 0x590652,120,0,0x58FAB0,1>;
using def_t = void(unsigned char *, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int *>, 0,1>;
META_END

META_BEGIN(CTheCarGenerators::LoadAllCarGenerators)
static int address;
static int global_address;
static const int id = 0x5431E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5431E0, 0x543420, 0x5433D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x591513,100,0,0x590A00,1, 0x5917D3,110,0,0x590CC0,1, 0x5916C3,120,0,0x590BB0,1>;
using def_t = void(unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int>, 0,1>;
META_END

}
