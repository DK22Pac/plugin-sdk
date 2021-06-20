/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CMouseControllerState)
static int address;
static int global_address;
static const int id = 0x491B80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x491B80, 0x491C40, 0x491BD0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x491BE0,100,0,0x491BD0,1, 0x494E55,100,0,0x494E50,1, 0x494E5F,100,0,0x494E50,2, 0x494E69,100,0,0x494E50,3, 0x491CA0,110,0,0x491C90,1, 0x494F15,110,0,0x494F10,1, 0x494F1F,110,0,0x494F10,2, 0x494F29,110,0,0x494F10,3, 0x491C30,120,0,0x491C20,1, 0x494EA5,120,0,0x494EA0,1, 0x494EAF,120,0,0x494EA0,2, 0x494EB9,120,0,0x494EA0,3>;
using def_t = CMouseControllerState *(CMouseControllerState *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMouseControllerState *>, 0>;
META_END

META_BEGIN(CMouseControllerState::Clear)
static int address;
static int global_address;
static const int id = 0x491BB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x491BB0, 0x491C70, 0x491C00>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x491A5E,100,0,0x491A10,1, 0x491A68,100,0,0x491A10,2, 0x491A72,100,0,0x491A10,3, 0x491B5C,100,0,0x491B50,1, 0x491B66,100,0,0x491B50,2, 0x491B70,100,0,0x491B50,3, 0x491D14,100,0,0x491CA0,1, 0x491B1E,110,0,0x491AD0,1, 0x491B28,110,0,0x491AD0,2, 0x491B32,110,0,0x491AD0,3, 0x491C1C,110,0,0x491C10,1, 0x491C26,110,0,0x491C10,2, 0x491C30,110,0,0x491C10,3, 0x491DD4,110,0,0x491D60,1, 0x491AAE,120,0,0x491A60,1, 0x491AB8,120,0,0x491A60,2, 0x491AC2,120,0,0x491A60,3, 0x491BAC,120,0,0x491BA0,1, 0x491BB6,120,0,0x491BA0,2, 0x491BC0,120,0,0x491BA0,3, 0x491D64,120,0,0x491CF0,1>;
using def_t = void(CMouseControllerState *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMouseControllerState *>, 0>;
META_END

}
