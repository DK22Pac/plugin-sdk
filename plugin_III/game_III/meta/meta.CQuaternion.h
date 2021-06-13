/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CQuaternion::Get)
static int address;
static int global_address;
static const int id = 0x4BA0D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BA0D0, 0x4BA1C0, 0x4BA150>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x40284D,100,0,0x4025F0,1, 0x402BFD,100,0,0x4028B0,1, 0x4030A7,100,0,0x402D40,1, 0x40284D,110,0,0x4025F0,1, 0x402BFD,110,0,0x4028B0,1, 0x4030A7,110,0,0x402D40,1, 0x40284D,120,0,0x4025F0,1, 0x402BFD,120,0,0x4028B0,1, 0x4030A7,120,0,0x402D40,1>;
using def_t = void(CQuaternion *, RwMatrix *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CQuaternion *,RwMatrix *>, 0,1>;
META_END

META_BEGIN(CQuaternion::Slerp)
static int address;
static int global_address;
static const int id = 0x4BA1C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BA1C0, 0x4BA2B0, 0x4BA240>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x401D60,100,0,0x401B30,1, 0x401D60,110,0,0x401B30,1, 0x401D60,120,0,0x401B30,1>;
using def_t = void(CQuaternion *, CQuaternion const &, CQuaternion const &, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CQuaternion *,CQuaternion const &,CQuaternion const &,float,float,float>, 0,1,2,3,4,5>;
META_END

}
