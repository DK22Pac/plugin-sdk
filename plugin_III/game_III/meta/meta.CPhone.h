/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CPhone)
static int address;
static int global_address;
static const int id = 0x42F620;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42F620, 0x42F620, 0x42F620>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x42FDC0,100,0,0x42FDB0,1, 0x42F5E0,100,2,0,1, 0x42FDC0,110,0,0x42FDB0,1, 0x42F5E0,110,2,0,1, 0x42FDC0,120,0,0x42FDB0,1, 0x42F5E0,120,2,0,1>;
using def_t = CPhone *(CPhone *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhone *>, 0>;
META_END

DTOR_META_BEGIN(CPhone)
static int address;
static int global_address;
static const int id = 0x42F630;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42F630, 0x42F630, 0x42F630>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x42FF13,100,0,0x42FDB0,1, 0x42F5DB,100,2,0,1, 0x42F60B,100,2,0,1, 0x42FF13,110,0,0x42FDB0,1, 0x42F5DB,110,2,0,1, 0x42F60B,110,2,0,1, 0x42FF13,120,0,0x42FDB0,1, 0x42F5DB,120,2,0,1, 0x42F60B,120,2,0,1>;
using def_t = void(CPhone *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhone *>, 0>;
META_END

template<>
struct stack_object<CPhone> : stack_object_no_default<CPhone> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CPhone *>(ctor_gaddr(CPhone), reinterpret_cast<CPhone *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CPhone *>(dtor_gaddr(CPhone), reinterpret_cast<CPhone *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CPhone *operator_new<CPhone>() {
    void *objData = operator new(sizeof(CPhone)); 
    CPhone *obj = reinterpret_cast<CPhone *>(objData);
    plugin::CallMethodDynGlobal<CPhone *>(ctor_gaddr(CPhone), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CPhone *operator_new_array<CPhone>(unsigned int objCount) {
    void *objData = operator new(sizeof(CPhone) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CPhone *objArray = reinterpret_cast<CPhone *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CPhone *>(ctor_gaddr(CPhone), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CPhone>(CPhone *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CPhone *>(dtor_gaddr(CPhone), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CPhone>(CPhone *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CPhone *>(dtor_gaddr(CPhone), &objArray[i]);
    operator delete(objData);
}

}
