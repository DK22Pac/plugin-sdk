/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedPath::CalcPedRoute)
static int address;
static int global_address;
static const int id = 0x42E680;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42E680, 0x42E680, 0x42E680>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4D2F6D,100,0,0x4D2EA0,1, 0x4D300D,110,0,0x4D2F40,1, 0x4D2F9D,120,0,0x4D2ED0,1>;
using def_t = bool(unsigned char, CVector, CVector, CVector *, short *, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char,CVector,CVector,CVector *,short *,short>, 0,1,2,3,4,5>;
META_END

META_BEGIN(CPedPath::AddNodeToPathList)
static int address;
static int global_address;
static const int id = 0x42F100;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42F100, 0x42F100, 0x42F100>;
// total references count: 10en (8), 11en (8), steam (8)
using refs_t = RefList<0x42EDE4,100,0,0x42E680,1, 0x42EE05,100,0,0x42E680,2, 0x42EE26,100,0,0x42E680,3, 0x42EE4A,100,0,0x42E680,4, 0x42EE6B,100,0,0x42E680,5, 0x42EE8C,100,0,0x42E680,6, 0x42EEAD,100,0,0x42E680,7, 0x42EECE,100,0,0x42E680,8, 0x42EDE4,110,0,0x42E680,1, 0x42EE05,110,0,0x42E680,2, 0x42EE26,110,0,0x42E680,3, 0x42EE4A,110,0,0x42E680,4, 0x42EE6B,110,0,0x42E680,5, 0x42EE8C,110,0,0x42E680,6, 0x42EEAD,110,0,0x42E680,7, 0x42EECE,110,0,0x42E680,8, 0x42EDE4,120,0,0x42E680,1, 0x42EE05,120,0,0x42E680,2, 0x42EE26,120,0,0x42E680,3, 0x42EE4A,120,0,0x42E680,4, 0x42EE6B,120,0,0x42E680,5, 0x42EE8C,120,0,0x42E680,6, 0x42EEAD,120,0,0x42E680,7, 0x42EECE,120,0,0x42E680,8>;
using def_t = void(CPedPathNode *, short, CPedPathNode *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPedPathNode *,short,CPedPathNode *>, 0,1,2>;
META_END

META_BEGIN(CPedPath::RemoveNodeFromList)
static int address;
static int global_address;
static const int id = 0x42F140;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42F140, 0x42F140, 0x42F140>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x42F11F,100,0,0x42F100,1, 0x42F11F,110,0,0x42F100,1, 0x42F11F,120,0,0x42F100,1>;
using def_t = void(CPedPathNode *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPedPathNode *>, 0>;
META_END

META_BEGIN(CPedPath::AddNodeToList)
static int address;
static int global_address;
static const int id = 0x42F160;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42F160, 0x42F160, 0x42F160>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x42F12E,100,0,0x42F100,1, 0x42F12E,110,0,0x42F100,1, 0x42F12E,120,0,0x42F100,1>;
using def_t = void(CPedPathNode *, short, CPedPathNode *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPedPathNode *,short,CPedPathNode *>, 0,1,2>;
META_END

META_BEGIN(CPedPath::AddBlockade)
static int address;
static int global_address;
static const int id = 0x42F1A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42F1A0, 0x42F1A0, 0x42F1A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x42F45D,100,0,0x42F420,1, 0x42F45D,110,0,0x42F420,1, 0x42F45D,120,0,0x42F420,1>;
using def_t = void(CEntity *, CPedPathNode(*)[40], CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *,CPedPathNode(*)[40],CVector *>, 0,1,2>;
META_END

META_BEGIN(CPedPath::AddBlockadeSectorList)
static int address;
static int global_address;
static const int id = 0x42F420;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42F420, 0x42F420, 0x42F420>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x42EBBE,100,0,0x42E680,1, 0x42EBD7,100,0,0x42E680,2, 0x42EBF0,100,0,0x42E680,3, 0x42EC09,100,0,0x42E680,4, 0x42EBBE,110,0,0x42E680,1, 0x42EBD7,110,0,0x42E680,2, 0x42EBF0,110,0,0x42E680,3, 0x42EC09,110,0,0x42E680,4, 0x42EBBE,120,0,0x42E680,1, 0x42EBD7,120,0,0x42E680,2, 0x42EBF0,120,0,0x42E680,3, 0x42EC09,120,0,0x42E680,4>;
using def_t = void(CPtrList *, CPedPathNode(*)[40], CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPtrList *,CPedPathNode(*)[40],CVector *>, 0,1,2>;
META_END

}
