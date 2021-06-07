/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN_OVERLOADED(CCutsceneHead, void(CObject *))
static int address;
static int global_address;
static const int id = 0x4BA5E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BA5E0, 0x4BA6D0, 0x4BA660>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x404CE8,100,0,0x404CD0,1, 0x404CE8,110,0,0x404CD0,1, 0x404CE8,120,0,0x404CD0,1>;
using def_t = CCutsceneHead *(CCutsceneHead *, CObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneHead *,CObject *>, 0,1>;
META_END

META_BEGIN(CCutsceneHead::CreateRwObject)
static int address;
static int global_address;
static const int id = 0x4BA650;
static const bool is_virtual = true;
static const int vtable_index = 5;
using mv_addresses_t = MvAddresses<0x4BA650, 0x4BA740, 0x4BA6D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F7C1C,100,2,0x5F7C08,1, 0x5F79F0,110,2,0x5F79F0,1, 0x6049E8,120,2,0x6049E8,1>;
using def_t = void(CCutsceneHead *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneHead *>, 0>;
META_END

META_BEGIN(CCutsceneHead::DeleteRwObject)
static int address;
static int global_address;
static const int id = 0x4BA690;
static const bool is_virtual = true;
static const int vtable_index = 6;
using mv_addresses_t = MvAddresses<0x4BA690, 0x4BA780, 0x4BA710>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F7C20,100,2,0x5F7C08,1, 0x5F79F0,110,2,0x5F79F0,1, 0x6049E8,120,2,0x6049E8,1>;
using def_t = void(CCutsceneHead *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneHead *>, 0>;
META_END

META_BEGIN(CCutsceneHead::PlayAnimation)
static int address;
static int global_address;
static const int id = 0x4BA6A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BA6A0, 0x4BA790, 0x4BA720>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x404DA8,100,0,0x404D80,1, 0x404DA8,110,0,0x404D80,1, 0x404DA8,120,0,0x404D80,1>;
using def_t = void(CCutsceneHead *, char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneHead *,char const *>, 0,1>;
META_END

META_BEGIN(CCutsceneHead::ProcessControl)
static int address;
static int global_address;
static const int id = 0x4BA760;
static const bool is_virtual = true;
static const int vtable_index = 8;
using mv_addresses_t = MvAddresses<0x4BA760, 0x4BA850, 0x4BA7E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F7C28,100,2,0x5F7C08,1, 0x5F79F0,110,2,0x5F79F0,1, 0x6049E8,120,2,0x6049E8,1>;
using def_t = void(CCutsceneHead *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneHead *>, 0>;
META_END

META_BEGIN(CCutsceneHead::Render)
static int address;
static int global_address;
static const int id = 0x4BA800;
static const bool is_virtual = true;
static const int vtable_index = 13;
using mv_addresses_t = MvAddresses<0x4BA800, 0x4BA8F0, 0x4BA880>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F7C3C,100,2,0x5F7C08,1, 0x5F79F0,110,2,0x5F79F0,1, 0x6049E8,120,2,0x6049E8,1>;
using def_t = void(CCutsceneHead *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneHead *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CCutsceneHead)
static int address;
static int global_address;
static const int id = 0x4BA8A0;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x4BA8A0, 0x4BA990, 0x4BA920>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F7C08,100,2,0x5F7C08,1, 0x5F79F0,110,2,0x5F79F0,1, 0x6049E8,120,2,0x6049E8,1>;
using def_t = void(CCutsceneHead *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneHead *,char>, 0,1>;
META_END

DTOR_META_BEGIN(CCutsceneHead)
static int address;
static int global_address;
static const int id = 0x4BA8F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BA8F0, 0x4BA9E0, 0x4BA970>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4BA8B4,100,2,0,1, 0x4BA9A4,110,2,0,1, 0x4BA934,120,2,0,1>;
using def_t = void(CCutsceneHead *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneHead *>, 0>;
META_END

}
