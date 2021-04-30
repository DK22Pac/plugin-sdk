/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

DTOR_META_BEGIN(C2deffectsModelInfo)
static int address;
static int global_address;
static const int id = 0x50BE50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BE50, 0x50BF40, 0x50BED0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x50BDEE,100,2,0,1, 0x50BE3E,100,2,0,1, 0x50BEDE,110,2,0,1, 0x50BF2E,110,2,0,1, 0x50BE6E,120,2,0,1, 0x50BEBE,120,2,0,1>;
using def_t = void(C2deffectsModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<C2deffectsModelInfo *>, 0>;
META_END

CTOR_META_BEGIN(C2deffectsModelInfo)
static int address;
static int global_address;
static const int id = 0x50BE60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BE60, 0x50BF50, 0x50BEE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50BDF3,100,2,0,1, 0x50BEE3,110,2,0,1, 0x50BE73,120,2,0,1>;
using def_t = C2deffectsModelInfo *(C2deffectsModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<C2deffectsModelInfo *>, 0>;
META_END

template<>
struct stack_object<C2deffectsModelInfo> : stack_object_no_default<C2deffectsModelInfo> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<C2deffectsModelInfo *>(ctor_gaddr(C2deffectsModelInfo), reinterpret_cast<C2deffectsModelInfo *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<C2deffectsModelInfo *>(dtor_gaddr(C2deffectsModelInfo), reinterpret_cast<C2deffectsModelInfo *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline C2deffectsModelInfo *operator_new<C2deffectsModelInfo>() {
    void *objData = operator new(sizeof(C2deffectsModelInfo)); 
    C2deffectsModelInfo *obj = reinterpret_cast<C2deffectsModelInfo *>(objData);
    plugin::CallMethodDynGlobal<C2deffectsModelInfo *>(ctor_gaddr(C2deffectsModelInfo), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline C2deffectsModelInfo *operator_new_array<C2deffectsModelInfo>(unsigned int objCount) {
    void *objData = operator new(sizeof(C2deffectsModelInfo) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    C2deffectsModelInfo *objArray = reinterpret_cast<C2deffectsModelInfo *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<C2deffectsModelInfo *>(ctor_gaddr(C2deffectsModelInfo), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<C2deffectsModelInfo>(C2deffectsModelInfo *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<C2deffectsModelInfo *>(dtor_gaddr(C2deffectsModelInfo), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<C2deffectsModelInfo>(C2deffectsModelInfo *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<C2deffectsModelInfo *>(dtor_gaddr(C2deffectsModelInfo), &objArray[i]);
    operator delete(objData);
}

}
