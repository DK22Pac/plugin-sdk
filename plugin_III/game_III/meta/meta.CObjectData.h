/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CObjectData::Initialise)
static int address;
static int global_address;
static const int id = 0x4BC0E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BC0E0, 0x4BC1D0, 0x4BC160>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x476472,100,0,0x476290,1, 0x476472,110,0,0x476290,1, 0x476472,120,0,0x476290,1>;
using def_t = void(char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CObjectData::SetObjectData)
static int address;
static int global_address;
static const int id = 0x4BC270;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BC270, 0x4BC360, 0x4BC2F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4BAED6,100,0,0x4BAEC0,1, 0x4BAFC6,110,0,0x4BAFB0,1, 0x4BAF56,120,0,0x4BAF40,1>;
using def_t = void(int, CObject &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,CObject &>, 0,1>;
META_END

}
