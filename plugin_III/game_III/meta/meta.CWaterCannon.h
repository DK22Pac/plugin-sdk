/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CWaterCannon::Init)
static int address;
static int global_address;
static const int id = 0x521A30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x521A30, 0x521C70, 0x521C00>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x522452,100,0,0x522440,1, 0x5224ED,100,0,0x522470,1, 0x522692,110,0,0x522680,1, 0x52272D,110,0,0x5226B0,1, 0x522622,120,0,0x522610,1, 0x5226BD,120,0,0x522640,1>;
using def_t = void(CWaterCannon *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWaterCannon *>, 0>;
META_END

META_BEGIN(CWaterCannon::Update_OncePerFrame)
static int address;
static int global_address;
static const int id = 0x521B80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x521B80, 0x521DC0, 0x521D50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x52252E,100,0,0x522510,1, 0x52276E,110,0,0x522750,1, 0x5226FE,120,0,0x5226E0,1>;
using def_t = void(CWaterCannon *, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWaterCannon *,short>, 0,1>;
META_END

META_BEGIN(CWaterCannon::Update_NewInput)
static int address;
static int global_address;
static const int id = 0x521CC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x521CC0, 0x521F00, 0x521E90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5224FF,100,0,0x522470,1, 0x52273F,110,0,0x5226B0,1, 0x5226CF,120,0,0x522640,1>;
using def_t = void(CWaterCannon *, CVector *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWaterCannon *,CVector *,CVector *>, 0,1,2>;
META_END

META_BEGIN(CWaterCannon::Render)
static int address;
static int global_address;
static const int id = 0x521D30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x521D30, 0x521F70, 0x521F00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x52256B,100,0,0x522550,1, 0x5227AB,110,0,0x522790,1, 0x52273B,120,0,0x522720,1>;
using def_t = void(CWaterCannon *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWaterCannon *>, 0>;
META_END

META_BEGIN(CWaterCannon::PushPeds)
static int address;
static int global_address;
static const int id = 0x5220B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5220B0, 0x5222F0, 0x522280>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x521C8B,100,0,0x521B80,1, 0x521ECB,110,0,0x521DC0,1, 0x521E5B,120,0,0x521D50,1>;
using def_t = void(CWaterCannon *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWaterCannon *>, 0>;
META_END

CTOR_META_BEGIN(CWaterCannon)
static int address;
static int global_address;
static const int id = 0x522B60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x522B60, 0x522DA0, 0x522D30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x522B4A,100,2,0,1, 0x522D8A,110,2,0,1, 0x522D1A,120,2,0,1>;
using def_t = CWaterCannon *(CWaterCannon *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWaterCannon *>, 0>;
META_END

template<>
struct stack_object<CWaterCannon> : stack_object_no_default<CWaterCannon> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CWaterCannon *>(ctor_gaddr(CWaterCannon), reinterpret_cast<CWaterCannon *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CWaterCannon *operator_new<CWaterCannon>() {
    void *objData = operator new(sizeof(CWaterCannon)); 
    CWaterCannon *obj = reinterpret_cast<CWaterCannon *>(objData);
    plugin::CallMethodDynGlobal<CWaterCannon *>(ctor_gaddr(CWaterCannon), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CWaterCannon *operator_new_array<CWaterCannon>(unsigned int objCount) {
    void *objData = operator new(sizeof(CWaterCannon) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CWaterCannon *objArray = reinterpret_cast<CWaterCannon *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CWaterCannon *>(ctor_gaddr(CWaterCannon), &objArray[i]);
    return objArray;
}

}
