/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CBulletTraces::Render)
static int address;
static int global_address;
static const int id = 0x5729F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5729F0, 0x572A10, 0x5728E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x574798,100,0,0x574790,1, 0x5747B8,110,0,0x5747B0,1, 0x574688,120,0,0x574680,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CBulletTraces::AddTrace, void (*)(CVector *, CVector *, float, unsigned int, unsigned char))
static int address;
static int global_address;
static const int id = 0x573910;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x573910, 0x573930, 0x573800>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x573E69,100,0,0x573D40,1, 0x573E89,110,0,0x573D60,1, 0x573D59,120,0,0x573C30,1>;
using def_t = void(CVector *, CVector *, float, unsigned int, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *,CVector *,float,unsigned int,unsigned char>, 0,1,2,3,4>;
META_END

META_BEGIN_OVERLOADED(CBulletTraces::AddTrace, void (*)(CVector *, CVector *, int, CEntity *))
static int address;
static int global_address;
static const int id = 0x573D40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x573D40, 0x573D60, 0x573C30>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x5CBB9E,100,0,0x5CB0A0,1, 0x5CBF59,100,0,0x5CB0A0,2, 0x5CE162,100,0,0x5CD340,1, 0x5CED6C,100,0,0x5CD340,2, 0x5CF1D5,100,0,0x5CEE60,1, 0x5D0097,100,0,0x5CEE60,2, 0x5CBBBE,110,0,0x5CB0C0,1, 0x5CBF79,110,0,0x5CB0C0,2, 0x5CE182,110,0,0x5CD360,1, 0x5CED8C,110,0,0x5CD360,2, 0x5CF1F5,110,0,0x5CEE80,1, 0x5D00B7,110,0,0x5CEE80,2, 0x5CB9CE,120,0,0x5CAED0,1, 0x5CBD89,120,0,0x5CAED0,2, 0x5CDF32,120,0,0x5CD110,1, 0x5CEB3C,120,0,0x5CD110,2, 0x5CEFA5,120,0,0x5CEC30,1, 0x5CFE67,120,0,0x5CEC30,2>;
using def_t = void(CVector *, CVector *, int, CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *,CVector *,int,CEntity *>, 0,1,2,3>;
META_END

META_BEGIN(CBulletTraces::Init)
static int address;
static int global_address;
static const int id = 0x573E80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x573E80, 0x573EA0, 0x573D70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x62123A,100,0,0x621230,1, 0x62121A,110,0,0x621210,1, 0x620E8A,120,0,0x620E80,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
