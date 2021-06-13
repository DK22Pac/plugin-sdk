/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CAnimBlendNode::Init)
static int address;
static int global_address;
static const int id = 0x401B10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401B10, 0x401B10, 0x401B10>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4016D6,100,0,0x4016A0,1, 0x4016D6,110,0,0x4016A0,1, 0x4016D6,120,0,0x4016A0,1>;
using def_t = void(CAnimBlendNode *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendNode *>, 0>;
META_END

META_BEGIN(CAnimBlendNode::Update)
static int address;
static int global_address;
static const int id = 0x401B30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401B30, 0x401B30, 0x401B30>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4026E2,100,0,0x4025F0,1, 0x402A0F,100,0,0x4028B0,1, 0x402EBA,100,0,0x402D40,1, 0x4026E2,110,0,0x4025F0,1, 0x402A0F,110,0,0x4028B0,1, 0x402EBA,110,0,0x402D40,1, 0x4026E2,120,0,0x4025F0,1, 0x402A0F,120,0,0x4028B0,1, 0x402EBA,120,0,0x402D40,1>;
using def_t = bool(CAnimBlendNode *, CVector &, CQuaternion &, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendNode *,CVector &,CQuaternion &,float>, 0,1,2,3>;
META_END

META_BEGIN(CAnimBlendNode::NextKeyFrame)
static int address;
static int global_address;
static const int id = 0x401DC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401DC0, 0x401DC0, 0x401DC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x401BA2,100,0,0x401B30,1, 0x401BA2,110,0,0x401B30,1, 0x401BA2,120,0,0x401B30,1>;
using def_t = bool(CAnimBlendNode *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendNode *>, 0>;
META_END

META_BEGIN(CAnimBlendNode::CalcDeltas)
static int address;
static int global_address;
static const int id = 0x401E70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401E70, 0x401E70, 0x401E70>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x401E60,100,0,0x401DC0,1, 0x4021E8,100,0,0x4021B0,1, 0x4022B7,100,0,0x4021B0,2, 0x401E60,110,0,0x401DC0,1, 0x4021E8,110,0,0x4021B0,1, 0x4022B7,110,0,0x4021B0,2, 0x401E60,120,0,0x401DC0,1, 0x4021E8,120,0,0x4021B0,1, 0x4022B7,120,0,0x4021B0,2>;
using def_t = void(CAnimBlendNode *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendNode *>, 0>;
META_END

META_BEGIN(CAnimBlendNode::GetCurrentTranslation)
static int address;
static int global_address;
static const int id = 0x401FE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401FE0, 0x401FE0, 0x401FE0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4029B3,100,0,0x4028B0,1, 0x402E67,100,0,0x402D40,1, 0x4029B3,110,0,0x4028B0,1, 0x402E67,110,0,0x402D40,1, 0x4029B3,120,0,0x4028B0,1, 0x402E67,120,0,0x402D40,1>;
using def_t = void(CAnimBlendNode *, CVector &, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendNode *,CVector &,float>, 0,1,2>;
META_END

META_BEGIN(CAnimBlendNode::GetEndTranslation)
static int address;
static int global_address;
static const int id = 0x402110;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x402110, 0x402110, 0x402110>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x402AC6,100,0,0x4028B0,1, 0x402F6C,100,0,0x402D40,1, 0x402AC6,110,0,0x4028B0,1, 0x402F6C,110,0,0x402D40,1, 0x402AC6,120,0,0x4028B0,1, 0x402F6C,120,0,0x402D40,1>;
using def_t = void(CAnimBlendNode *, CVector &, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendNode *,CVector &,float>, 0,1,2>;
META_END

META_BEGIN(CAnimBlendNode::FindKeyFrame)
static int address;
static int global_address;
static const int id = 0x4021B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4021B0, 0x4021B0, 0x4021B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x40175F,100,0,0x401700,1, 0x40175F,110,0,0x401700,1, 0x40175F,120,0,0x401700,1>;
using def_t = bool(CAnimBlendNode *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendNode *,float>, 0,1>;
META_END

}
