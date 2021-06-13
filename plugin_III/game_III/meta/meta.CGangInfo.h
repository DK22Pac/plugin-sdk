/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CGangInfo)
static int address;
static int global_address;
static const int id = 0x4C3F80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C3F80, 0x4C4020, 0x4C3FB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C416A,100,2,0,1, 0x4C420A,110,2,0,1, 0x4C419A,120,2,0,1>;
using def_t = CGangInfo *(CGangInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CGangInfo *>, 0>;
META_END

DTOR_META_BEGIN(CGangInfo)
static int address;
static int global_address;
static const int id = 0x4C3FA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C3FA0, 0x4C4040, 0x4C3FD0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4C4165,100,2,0,1, 0x4C4195,100,2,0,1, 0x4C4205,110,2,0,1, 0x4C4235,110,2,0,1, 0x4C4195,120,2,0,1, 0x4C41C5,120,2,0,1>;
using def_t = CGangInfo *(CGangInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CGangInfo *>, 0>;
META_END

template<>
struct stack_object<CGangInfo> : stack_object_no_default<CGangInfo> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CGangInfo *>(ctor_gaddr(CGangInfo), reinterpret_cast<CGangInfo *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CGangInfo *>(dtor_gaddr(CGangInfo), reinterpret_cast<CGangInfo *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CGangInfo *operator_new<CGangInfo>() {
    void *objData = operator new(sizeof(CGangInfo)); 
    CGangInfo *obj = reinterpret_cast<CGangInfo *>(objData);
    plugin::CallMethodDynGlobal<CGangInfo *>(ctor_gaddr(CGangInfo), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CGangInfo *operator_new_array<CGangInfo>(unsigned int objCount) {
    void *objData = operator new(sizeof(CGangInfo) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CGangInfo *objArray = reinterpret_cast<CGangInfo *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CGangInfo *>(ctor_gaddr(CGangInfo), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CGangInfo>(CGangInfo *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CGangInfo *>(dtor_gaddr(CGangInfo), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CGangInfo>(CGangInfo *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CGangInfo *>(dtor_gaddr(CGangInfo), &objArray[i]);
    operator delete(objData);
}

}
