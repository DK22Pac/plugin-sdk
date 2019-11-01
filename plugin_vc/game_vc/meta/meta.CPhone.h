/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

DTOR_META_BEGIN(CPhone)
static int address;
static int global_address;
static const int id = 0x43CD30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x43CD30, 0x43CD30, 0>;
// total references count: 10en (2), 11en (2), steam (0)
using refs_t = RefList<0x43CD5B,100,2,0,1, 0x43CF05,100,2,0,1, 0x43CD5B,110,2,0,1, 0x43CF05,110,2,0,1>;
using def_t = void(CPhone *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhone *>, 0>;
META_END

CTOR_META_BEGIN(CPhone)
static int address;
static int global_address;
static const int id = 0x43CD40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x43CD40, 0x43CD40, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x43CF0A,100,2,0,1, 0x43CF0A,110,2,0,1>;
using def_t = CPhone *(CPhone *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhone *>, 0>;
META_END

template<>
struct stack_object<CPhone> : stack_object_no_default<CPhone> {
    SUPPORTED_10EN_11EN stack_object() {
        plugin::CallMethodDynGlobal<CPhone *>(ctor_gaddr(CPhone), reinterpret_cast<CPhone *>(objBuff));
    }
    SUPPORTED_10EN_11EN ~stack_object() {
        plugin::CallMethodDynGlobal<CPhone *>(dtor_gaddr(CPhone), reinterpret_cast<CPhone *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN inline CPhone *operator_new<CPhone>() {
    void *objData = operator new(sizeof(CPhone)); 
    CPhone *obj = reinterpret_cast<CPhone *>(objData);
    plugin::CallMethodDynGlobal<CPhone *>(ctor_gaddr(CPhone), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN inline CPhone *operator_new_array<CPhone>(unsigned int objCount) {
    void *objData = operator new(sizeof(CPhone) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CPhone *objArray = reinterpret_cast<CPhone *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CPhone *>(ctor_gaddr(CPhone), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN inline void operator_delete<CPhone>(CPhone *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CPhone *>(dtor_gaddr(CPhone), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN inline void operator_delete_array<CPhone>(CPhone *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CPhone *>(dtor_gaddr(CPhone), &objArray[i]);
    operator delete(objData);
}

}
