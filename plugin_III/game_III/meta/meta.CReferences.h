/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CReferences::Init)
static int address;
static int global_address;
static const int id = 0x4A7350;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A7350, 0x4A7440, 0x4A73D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48BF91,100,0,0x48BED0,1, 0x48C081,110,0,0x48BFC0,1, 0x48C011,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CReferences::RemoveReferencesToPlayer)
static int address;
static int global_address;
static const int id = 0x4A7570;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A7570, 0x4A7660, 0x4A75F0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x421614,100,0,0x421400,1, 0x421838,100,0,0x421400,2, 0x4219D2,100,0,0x421400,3, 0x421BD4,100,0,0x421A60,1, 0x421614,110,0,0x421400,1, 0x421838,110,0,0x421400,2, 0x4219D2,110,0,0x421400,3, 0x421BD4,110,0,0x421A60,1, 0x421614,120,0,0x421400,1, 0x421838,120,0,0x421400,2, 0x4219D2,120,0,0x421400,3, 0x421BD4,120,0,0x421A60,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CReferences::PruneAllReferencesInWorld)
static int address;
static int global_address;
static const int id = 0x4A75A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A75A0, 0x4A7690, 0x4A7620>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4B1A6E,100,0,0x4B1A60,1, 0x4B1B5E,110,0,0x4B1B50,1, 0x4B1AEE,120,0,0x4B1AE0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
