/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

DTOR_META_BEGIN(CMatrixLink)
    static int address;
    static int global_address;
    static const int id = 0x54E8E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x54E8E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (10), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x54E96A, GAME_10US_COMPACT, H_CALL, 0x54E930, 1,
        0x83CAC3, GAME_10US_COMPACT, H_JUMP, 0x54EB70, 1,
        0x83CACE, GAME_10US_COMPACT, H_JUMP, 0x54EB70, 2,
        0x83CADC, GAME_10US_COMPACT, H_JUMP, 0x54EB70, 3,
        0x83CAEA, GAME_10US_COMPACT, H_JUMP, 0x54EB70, 4,
        0x83CAF8, GAME_10US_COMPACT, H_JUMP, 0x54EB70, 5,
        0x54E942, GAME_10US_COMPACT, H_CALLBACK, 0, 1,
        0x54E9A5, GAME_10US_COMPACT, H_CALLBACK, 0, 1,
        0x54EFE1, GAME_10US_COMPACT, H_CALLBACK, 0, 1,
        0x54F10F, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void(CMatrix *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CMatrix *>, 0>;
META_END

META_BEGIN(CMatrixLink::Insert)
    static int address;
    static int global_address;
    static const int id = 0x54E8F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x54E8F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CMatrixLink *, CMatrixLink *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CMatrixLink *,CMatrixLink *>, 0,1>;
META_END

META_BEGIN(CMatrixLink::Remove)
    static int address;
    static int global_address;
    static const int id = 0x54E910;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x54E910, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CMatrixLink *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CMatrixLink *>, 0>;
META_END

CTOR_META_BEGIN(CMatrixLink)
    static int address;
    static int global_address;
    static const int id = 0x54F0C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x54F0C0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x54F114, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = CMatrixLink *(CMatrixLink *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CMatrixLink *>, 0>;
META_END

template<>
struct stack_object<CMatrixLink> : stack_object_no_default<CMatrixLink> {
    SUPPORTED_10US stack_object() {
        plugin::CallMethodDynGlobal<CMatrixLink *>(ctor_gaddr(CMatrixLink), reinterpret_cast<CMatrixLink *>(objBuff));
    }
    SUPPORTED_10US ~stack_object() {
        plugin::CallMethodDynGlobal<CMatrixLink *>(dtor_gaddr(CMatrixLink), reinterpret_cast<CMatrixLink *>(objBuff));
    }
};

template <>
SUPPORTED_10US inline CMatrixLink *operator_new<CMatrixLink>() {
    void *objData = operator new(sizeof(CMatrixLink)); 
    CMatrixLink *obj = reinterpret_cast<CMatrixLink *>(objData);
    plugin::CallMethodDynGlobal<CMatrixLink *>(ctor_gaddr(CMatrixLink), obj);
    return obj;
}
template <>
SUPPORTED_10US inline CMatrixLink *operator_new_array<CMatrixLink>(unsigned int objCount) {
    void *objData = operator new(sizeof(CMatrixLink) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CMatrixLink *objArray = reinterpret_cast<CMatrixLink *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CMatrixLink *>(ctor_gaddr(CMatrixLink), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10US inline void operator_delete<CMatrixLink>(CMatrixLink *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CMatrixLink *>(dtor_gaddr(CMatrixLink), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10US inline void operator_delete_array<CMatrixLink>(CMatrixLink *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CMatrixLink *>(dtor_gaddr(CMatrixLink), &objArray[i]);
    operator delete(objData);
}

}
