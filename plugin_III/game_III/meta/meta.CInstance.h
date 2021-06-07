/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CInstance::Shutdown)
static int address;
static int global_address;
static const int id = 0x50B850;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50B850, 0x50B940, 0x50B8D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FDF20,100,2,0,1, 0x5FDD08,110,2,0,1, 0x60AD00,120,2,0,1>;
using def_t = void(CInstance *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CInstance *>, 0>;
META_END

DTOR_META_BEGIN(CInstance)
static int address;
static int global_address;
static const int id = 0x50BE90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BE90, 0x50BF80, 0x50BF10>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x50BDAF,100,2,0,1, 0x50BE7B,100,2,0,1, 0x50C3D4,100,2,0,1, 0x50BE9F,110,2,0,1, 0x50BF6B,110,2,0,1, 0x50C4C4,110,2,0,1, 0x50BE2F,120,2,0,1, 0x50BEFB,120,2,0,1, 0x50C454,120,2,0,1>;
using def_t = void(CInstance *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CInstance *>, 0>;
META_END

CTOR_META_BEGIN(CInstance)
static int address;
static int global_address;
static const int id = 0x50BEB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BEB0, 0x50BFA0, 0x50BF30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50BDB4,100,2,0,1, 0x50BEA4,110,2,0,1, 0x50BE34,120,2,0,1>;
using def_t = CInstance *(CInstance *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CInstance *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CInstance)
static int address;
static int global_address;
static const int id = 0x50C3C0;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x50C3C0, 0x50C4B0, 0x50C440>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FE068,100,2,0x5FE068,1, 0x5FDE50,110,2,0x5FDE50,1, 0x60AE48,120,2,0x60AE48,1>;
using def_t = void(CInstance *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CInstance *,char>, 0,1>;
META_END

template<>
struct stack_object<CInstance> : stack_object_no_default<CInstance> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CInstance *>(ctor_gaddr(CInstance), reinterpret_cast<CInstance *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CInstance *>(dtor_gaddr(CInstance), reinterpret_cast<CInstance *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CInstance *operator_new<CInstance>() {
    void *objData = operator new(sizeof(CInstance)); 
    CInstance *obj = reinterpret_cast<CInstance *>(objData);
    plugin::CallMethodDynGlobal<CInstance *>(ctor_gaddr(CInstance), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CInstance *operator_new_array<CInstance>(unsigned int objCount) {
    void *objData = operator new(sizeof(CInstance) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CInstance *objArray = reinterpret_cast<CInstance *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CInstance *>(ctor_gaddr(CInstance), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CInstance>(CInstance *obj) {
    if (obj == nullptr) return;
    plugin::CallVirtualMethod<0, CInstance *, char>(obj, 1);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CInstance>(CInstance *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallVirtualMethod<0, CInstance *, char>(&objArray[i], 1);
    operator delete(objData);
}

}
