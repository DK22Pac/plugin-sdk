/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CAccident)
static int address;
static int global_address;
static const int id = 0x456530;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x456530, 0x456530, 0x456530>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x45656D,100,2,0,1, 0x45656D,110,2,0,1, 0x45656D,120,2,0,1>;
using def_t = CAccident *(CAccident *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAccident *>, 0>;
META_END

DTOR_META_BEGIN(CAccident)
static int address;
static int global_address;
static const int id = 0x456550;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x456550, 0x456550, 0x456550>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x456568,100,2,0,1, 0x456588,100,2,0,1, 0x456568,110,2,0,1, 0x456588,110,2,0,1, 0x456568,120,2,0,1, 0x456588,120,2,0,1>;
using def_t = void(CAccident *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAccident *>, 0>;
META_END

template<>
struct stack_object<CAccident> : stack_object_no_default<CAccident> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CAccident *>(ctor_gaddr(CAccident), reinterpret_cast<CAccident *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CAccident *>(dtor_gaddr(CAccident), reinterpret_cast<CAccident *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CAccident *operator_new<CAccident>() {
    void *objData = operator new(sizeof(CAccident)); 
    CAccident *obj = reinterpret_cast<CAccident *>(objData);
    plugin::CallMethodDynGlobal<CAccident *>(ctor_gaddr(CAccident), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CAccident *operator_new_array<CAccident>(unsigned int objCount) {
    void *objData = operator new(sizeof(CAccident) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CAccident *objArray = reinterpret_cast<CAccident *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CAccident *>(ctor_gaddr(CAccident), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CAccident>(CAccident *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CAccident *>(dtor_gaddr(CAccident), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CAccident>(CAccident *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CAccident *>(dtor_gaddr(CAccident), &objArray[i]);
    operator delete(objData);
}

}
