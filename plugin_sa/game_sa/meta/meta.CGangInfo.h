/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CGangInfo)
    static int address;
    static int global_address;
    static const int id = 0x5DE520;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5DE520, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x850CE6, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void(CGangInfo *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CGangInfo *>, 0>;
META_END

DTOR_META_BEGIN(CGangInfo)
    static int address;
    static int global_address;
    static const int id = 0x5DE540;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5DE540, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x850CE1, GAME_10US_COMPACT, H_CALLBACK, 0, 1,
        0x856761, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void(CGangInfo *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CGangInfo *>, 0>;
META_END

template<>
struct stack_object<CGangInfo> : stack_object_no_default<CGangInfo> {
    SUPPORTED_10US stack_object() {
        plugin::CallMethodDynGlobal<CGangInfo *>(ctor_gaddr(CGangInfo), reinterpret_cast<CGangInfo *>(objBuff));
    }
    SUPPORTED_10US ~stack_object() {
        plugin::CallMethodDynGlobal<CGangInfo *>(dtor_gaddr(CGangInfo), reinterpret_cast<CGangInfo *>(objBuff));
    }
};

template <>
SUPPORTED_10US inline CGangInfo *operator_new<CGangInfo>() {
    void *objData = operator new(sizeof(CGangInfo)); 
    CGangInfo *obj = reinterpret_cast<CGangInfo *>(objData);
    plugin::CallMethodDynGlobal<CGangInfo *>(ctor_gaddr(CGangInfo), obj);
    return obj;
}
template <>
SUPPORTED_10US inline CGangInfo *operator_new_array<CGangInfo>(unsigned int objCount) {
    void *objData = operator new(sizeof(CGangInfo) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CGangInfo *objArray = reinterpret_cast<CGangInfo *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CGangInfo *>(ctor_gaddr(CGangInfo), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10US inline void operator_delete<CGangInfo>(CGangInfo *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CGangInfo *>(dtor_gaddr(CGangInfo), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10US inline void operator_delete_array<CGangInfo>(CGangInfo *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CGangInfo *>(dtor_gaddr(CGangInfo), &objArray[i]);
    operator delete(objData);
}

}
