/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CBulletTrace::Update)
static int address;
static int global_address;
static const int id = 0x519270;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x519270, 0x5194A0, 0x519430>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51925B,100,0,0x519240,1, 0x51948B,110,0,0x519470,1, 0x51941B,120,0,0x519400,1>;
using def_t = void(CBulletTrace *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBulletTrace *>, 0>;
META_END

CTOR_META_BEGIN(CBulletTrace)
static int address;
static int global_address;
static const int id = 0x51C390;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51C390, 0x51C5C0, 0x51C550>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51C237,100,2,0,1, 0x51C467,110,2,0,1, 0x51C3F7,120,2,0,1>;
using def_t = CBulletTrace *(CBulletTrace *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBulletTrace *>, 0>;
META_END

template<>
struct stack_object<CBulletTrace> : stack_object_no_default<CBulletTrace> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CBulletTrace *>(ctor_gaddr(CBulletTrace), reinterpret_cast<CBulletTrace *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CBulletTrace *operator_new<CBulletTrace>() {
    void *objData = operator new(sizeof(CBulletTrace)); 
    CBulletTrace *obj = reinterpret_cast<CBulletTrace *>(objData);
    plugin::CallMethodDynGlobal<CBulletTrace *>(ctor_gaddr(CBulletTrace), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CBulletTrace *operator_new_array<CBulletTrace>(unsigned int objCount) {
    void *objData = operator new(sizeof(CBulletTrace) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CBulletTrace *objArray = reinterpret_cast<CBulletTrace *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CBulletTrace *>(ctor_gaddr(CBulletTrace), &objArray[i]);
    return objArray;
}

}
