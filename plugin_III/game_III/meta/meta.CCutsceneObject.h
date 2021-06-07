/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCutsceneObject::SetupLighting)
static int address;
static int global_address;
static const int id = 0x4A7E70;
static const bool is_virtual = true;
static const int vtable_index = 14;
using mv_addresses_t = MvAddresses<0x4A7E70, 0x4A7F60, 0x4A7EF0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5F7C40,100,2,0x5F7C08,1, 0x5F7CB8,100,2,0x5F7C80,1, 0x5F79F0,110,2,0x5F79F0,1, 0x5F7A68,110,2,0x5F7A68,1, 0x6049E8,120,2,0x6049E8,1, 0x604A60,120,2,0x604A60,1>;
using def_t = bool(CCutsceneObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneObject *>, 0>;
META_END

META_BEGIN(CCutsceneObject::RemoveLighting)
static int address;
static int global_address;
static const int id = 0x4A7F00;
static const bool is_virtual = true;
static const int vtable_index = 15;
using mv_addresses_t = MvAddresses<0x4A7F00, 0x4A7FF0, 0x4A7F80>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5F7C44,100,2,0x5F7C08,1, 0x5F7CBC,100,2,0x5F7C80,1, 0x5F79F0,110,2,0x5F79F0,1, 0x5F7A68,110,2,0x5F7A68,1, 0x6049E8,120,2,0x6049E8,1, 0x604A60,120,2,0x604A60,1>;
using def_t = void(CCutsceneObject *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneObject *,bool>, 0,1>;
META_END

CTOR_META_BEGIN(CCutsceneObject)
static int address;
static int global_address;
static const int id = 0x4BA910;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BA910, 0x4BAA00, 0x4BA990>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x404CA6,100,0,0x404BE0,1, 0x4BA5EC,100,0,0x4BA5E0,1, 0x404CA6,110,0,0x404BE0,1, 0x4BA6DC,110,0,0x4BA6D0,1, 0x404CA6,120,0,0x404BE0,1, 0x4BA66C,120,0,0x4BA660,1>;
using def_t = CCutsceneObject *(CCutsceneObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneObject *>, 0>;
META_END

DTOR_META_BEGIN(CCutsceneObject)
static int address;
static int global_address;
static const int id = 0x4BA960;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BA960, 0x4BAA50, 0x4BA9E0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4BA8C9,100,0,0x4BA8A0,1, 0x4BA8F9,100,0,0x4BA8F0,1, 0x4BAAD3,100,0,0x4BAAB0,1, 0x4BAAC4,100,2,0,1, 0x4BA9B9,110,0,0x4BA990,1, 0x4BA9E9,110,0,0x4BA9E0,1, 0x4BABC3,110,0,0x4BABA0,1, 0x4BABB4,110,2,0,1, 0x4BA949,120,0,0x4BA920,1, 0x4BA979,120,0,0x4BA970,1, 0x4BAB53,120,0,0x4BAB30,1, 0x4BAB44,120,2,0,1>;
using def_t = void(CCutsceneObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneObject *>, 0>;
META_END

META_BEGIN(CCutsceneObject::SetModelIndex)
static int address;
static int global_address;
static const int id = 0x4BA980;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x4BA980, 0x4BAA70, 0x4BAA00>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5F7C14,100,2,0x5F7C08,1, 0x5F7C8C,100,2,0x5F7C80,1, 0x5F79F0,110,2,0x5F79F0,1, 0x5F7A68,110,2,0x5F7A68,1, 0x6049E8,120,2,0x6049E8,1, 0x604A60,120,2,0x604A60,1>;
using def_t = void(CCutsceneObject *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneObject *,unsigned int>, 0,1>;
META_END

META_BEGIN(CCutsceneObject::ProcessControl)
static int address;
static int global_address;
static const int id = 0x4BA9C0;
static const bool is_virtual = true;
static const int vtable_index = 8;
using mv_addresses_t = MvAddresses<0x4BA9C0, 0x4BAAB0, 0x4BAA40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F7CA0,100,2,0x5F7C80,1, 0x5F7A68,110,2,0x5F7A68,1, 0x604A60,120,2,0x604A60,1>;
using def_t = void(CCutsceneObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneObject *>, 0>;
META_END

META_BEGIN(CCutsceneObject::PreRender)
static int address;
static int global_address;
static const int id = 0x4BAA40;
static const bool is_virtual = true;
static const int vtable_index = 12;
using mv_addresses_t = MvAddresses<0x4BAA40, 0x4BAB30, 0x4BAAC0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5F7C38,100,2,0x5F7C08,1, 0x5F7CB0,100,2,0x5F7C80,1, 0x5F79F0,110,2,0x5F79F0,1, 0x5F7A68,110,2,0x5F7A68,1, 0x6049E8,120,2,0x6049E8,1, 0x604A60,120,2,0x604A60,1>;
using def_t = void(CCutsceneObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneObject *>, 0>;
META_END

META_BEGIN(CCutsceneObject::Render)
static int address;
static int global_address;
static const int id = 0x4BAAA0;
static const bool is_virtual = true;
static const int vtable_index = 13;
using mv_addresses_t = MvAddresses<0x4BAAA0, 0x4BAB90, 0x4BAB20>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F7CB4,100,2,0x5F7C80,1, 0x5F7A68,110,2,0x5F7A68,1, 0x604A60,120,2,0x604A60,1>;
using def_t = void(CCutsceneObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneObject *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CCutsceneObject)
static int address;
static int global_address;
static const int id = 0x4BAAB0;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x4BAAB0, 0x4BABA0, 0x4BAB30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F7C80,100,2,0x5F7C80,1, 0x5F7A68,110,2,0x5F7A68,1, 0x604A60,120,2,0x604A60,1>;
using def_t = void(CCutsceneObject *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneObject *,char>, 0,1>;
META_END

}
