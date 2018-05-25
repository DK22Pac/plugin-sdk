/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

DEL_DTOR_META_BEGIN(CAnimBlendStaticAssociation)
    static int address;
    static int global_address;
    static const int id = 0x4CDF50;
    static const bool is_virtual = true;
    static const int vtable_index = 0;
    using mv_addresses_t = MvAddresses<0x4CDF50, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x85C6CC, GAME_10US_COMPACT, H_CALLBACK, 0x85C6CC, 1>;
    using def_t = void(void *, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<void *,unsigned char>, 0,1>;
META_END

CTOR_META_BEGIN(CAnimBlendStaticAssociation)
    static int address;
    static int global_address;
    static const int id = 0x4CE940;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CE940, 0, 0, 0, 0, 0>;
    // total references count: 10us (4), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4CE299, GAME_10US_COMPACT, H_CALLBACK, 0, 1,
        0x4CE435, GAME_10US_COMPACT, H_CALLBACK, 0, 1,
        0x4CE63A, GAME_10US_COMPACT, H_CALLBACK, 0, 1,
        0x4CE75A, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = CAnimBlendStaticAssociation *(CAnimBlendStaticAssociation *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendStaticAssociation *>, 0>;
META_END

META_BEGIN(CAnimBlendStaticAssociation::AllocateSequenceArray)
    static int address;
    static int global_address;
    static const int id = 0x4CE960;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CE960, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4CEC54, GAME_10US_COMPACT, H_CALL, 0x4CEC20, 1>;
    using def_t = void(CAnimBlendStaticAssociation *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendStaticAssociation *,int>, 0,1>;
META_END

META_BEGIN(CAnimBlendStaticAssociation::FreeSequenceArray)
    static int address;
    static int global_address;
    static const int id = 0x4CE9A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CE9A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CAnimBlendStaticAssociation *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendStaticAssociation *>, 0>;
META_END

DTOR_META_BEGIN(CAnimBlendStaticAssociation)
    static int address;
    static int global_address;
    static const int id = 0x4CEC00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEC00, 0, 0, 0, 0, 0>;
    // total references count: 10us (6), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4CDF8A, GAME_10US_COMPACT, H_CALL, 0x4CDF50, 1,
        0x4CDF62, GAME_10US_COMPACT, H_CALLBACK, 0, 1,
        0x4CE294, GAME_10US_COMPACT, H_CALLBACK, 0, 1,
        0x4CE430, GAME_10US_COMPACT, H_CALLBACK, 0, 1,
        0x4CE635, GAME_10US_COMPACT, H_CALLBACK, 0, 1,
        0x4CE755, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void(CAnimBlendStaticAssociation *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendStaticAssociation *>, 0>;
META_END

META_BEGIN(CAnimBlendStaticAssociation::Init)
    static int address;
    static int global_address;
    static const int id = 0x4CEC20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEC20, 0, 0, 0, 0, 0>;
    // total references count: 10us (6), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4CDFD7, GAME_10US_COMPACT, H_CALL, 0x4CDFB0, 1,
        0x4CE314, GAME_10US_COMPACT, H_CALL, 0x4CE220, 1,
        0x4CE520, GAME_10US_COMPACT, H_CALL, 0x4CE3B0, 1,
        0x4CE688, GAME_10US_COMPACT, H_CALL, 0x4CE5C0, 1,
        0x4CE7A7, GAME_10US_COMPACT, H_CALL, 0x4CE6E0, 1,
        0x4CEF89, GAME_10US_COMPACT, H_CALL, 0x4CEF60, 1>;
    using def_t = void(CAnimBlendStaticAssociation *, RpClump *, CAnimBlendHierarchy *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendStaticAssociation *,RpClump *,CAnimBlendHierarchy *>, 0,1,2>;
META_END

CTOR_META_BEGIN_OVERLOADED(CAnimBlendStaticAssociation, void(RpClump *, CAnimBlendHierarchy *))
    static int address;
    static int global_address;
    static const int id = 0x4CEF60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4CEF60, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = CAnimBlendStaticAssociation *(CAnimBlendStaticAssociation *, RpClump *, CAnimBlendHierarchy *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CAnimBlendStaticAssociation *,RpClump *,CAnimBlendHierarchy *>, 0,1,2>;
META_END

template<>
struct stack_object<CAnimBlendStaticAssociation> : stack_object_no_default<CAnimBlendStaticAssociation> {
    SUPPORTED_10US stack_object() {
        plugin::CallMethodDynGlobal<CAnimBlendStaticAssociation *>(ctor_gaddr(CAnimBlendStaticAssociation), reinterpret_cast<CAnimBlendStaticAssociation *>(objBuff));
    }
    SUPPORTED_10US stack_object(RpClump *clump, CAnimBlendHierarchy *hierarchy) {
        plugin::CallMethodDynGlobal<CAnimBlendStaticAssociation *, RpClump *, CAnimBlendHierarchy *>(ctor_gaddr_o(CAnimBlendStaticAssociation, void(RpClump *, CAnimBlendHierarchy *)), reinterpret_cast<CAnimBlendStaticAssociation *>(objBuff), clump, hierarchy);
    }
    SUPPORTED_10US ~stack_object() {
        plugin::CallMethodDynGlobal<CAnimBlendStaticAssociation *>(dtor_gaddr(CAnimBlendStaticAssociation), reinterpret_cast<CAnimBlendStaticAssociation *>(objBuff));
    }
};

template <>
SUPPORTED_10US inline CAnimBlendStaticAssociation *operator_new<CAnimBlendStaticAssociation>() {
    void *objData = operator new(sizeof(CAnimBlendStaticAssociation)); 
    CAnimBlendStaticAssociation *obj = reinterpret_cast<CAnimBlendStaticAssociation *>(objData);
    plugin::CallMethodDynGlobal<CAnimBlendStaticAssociation *>(ctor_gaddr(CAnimBlendStaticAssociation), obj);
    return obj;
}
template <>
SUPPORTED_10US inline CAnimBlendStaticAssociation *operator_new_array<CAnimBlendStaticAssociation>(unsigned int objCount) {
    void *objData = operator new(sizeof(CAnimBlendStaticAssociation) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CAnimBlendStaticAssociation *objArray = reinterpret_cast<CAnimBlendStaticAssociation *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CAnimBlendStaticAssociation *>(ctor_gaddr(CAnimBlendStaticAssociation), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10US inline CAnimBlendStaticAssociation *operator_new<CAnimBlendStaticAssociation>(RpClump *clump, CAnimBlendHierarchy *hierarchy) {
    void *objData = operator new(sizeof(CAnimBlendStaticAssociation)); 
    CAnimBlendStaticAssociation *obj = reinterpret_cast<CAnimBlendStaticAssociation *>(objData);
    plugin::CallMethodDynGlobal<CAnimBlendStaticAssociation *, RpClump *, CAnimBlendHierarchy *>(ctor_gaddr_o(CAnimBlendStaticAssociation, void(RpClump *, CAnimBlendHierarchy *)), obj, clump, hierarchy);
    return obj;
}
template <>
SUPPORTED_10US inline void operator_delete<CAnimBlendStaticAssociation>(CAnimBlendStaticAssociation *obj) {
    if (obj == nullptr) return;
    plugin::CallVirtualMethod<0, CAnimBlendStaticAssociation *, unsigned char>(obj, 1);
}
template <>
SUPPORTED_10US inline void operator_delete_array<CAnimBlendStaticAssociation>(CAnimBlendStaticAssociation *objArray) {
    if (objArray == nullptr) return;
    plugin::CallVirtualMethod<0, CAnimBlendStaticAssociation *, unsigned char>(objArray, 3);
}

}
