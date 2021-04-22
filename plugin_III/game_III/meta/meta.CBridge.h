/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CBridge::Init)
static int address;
static int global_address;
static const int id = 0x413A30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x413A30, 0x413A30, 0x413A30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C2C6,100,0,0x48BED0,1, 0x48C3B6,110,0,0x48BFC0,1, 0x48C346,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CBridge::Update)
static int address;
static int global_address;
static const int id = 0x413AC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x413AC0, 0x413AC0, 0x413AC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C9CD,100,0,0x48C850,1, 0x48CACD,110,0,0x48C950,1, 0x48CA5D,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CBridge::ShouldLightsBeFlashing)
static int address;
static int global_address;
static const int id = 0x413D10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x413D10, 0x413D10, 0x413D10>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4FA83C,100,0,0x4FA530,1, 0x4FA853,100,0,0x4FA530,2, 0x4FA91C,110,0,0x4FA610,1, 0x4FA933,110,0,0x4FA610,2, 0x4FA8AC,120,0,0x4FA5A0,1, 0x4FA8C3,120,0,0x4FA5A0,2>;
using def_t = bool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CBridge::FindBridgeEntities)
static int address;
static int global_address;
static const int id = 0x413D20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x413D20, 0x413D20, 0x413D20>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x413A30,100,0,0x413A30,1, 0x413A30,110,0,0x413A30,1, 0x413A30,120,0,0x413A30,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CBridge::ThisIsABridgeObjectMovingUp)
static int address;
static int global_address;
static const int id = 0x413DE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x413DE0, 0x413DE0, 0x413DE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x49FF53,100,0,0x49FD30,1, 0x4A0043,110,0,0x49FE20,1, 0x49FFD3,120,0,0x49FDB0,1>;
using def_t = bool(unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

}
