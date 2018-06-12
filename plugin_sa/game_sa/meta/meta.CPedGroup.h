/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedGroup::Teleport)
    static int address;
    static int global_address;
    static const int id = 0x5F7AD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7AD0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x464EFD, GAME_10US_COMPACT, H_CALL, 0x464DC0, 1>;
    using def_t = void(CPedGroup *, CVector const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroup *,CVector const *>, 0,1>;
META_END

META_BEGIN(CPedGroup::PlayerGaveCommand_Attack)
    static int address;
    static int global_address;
    static const int id = 0x5F7CC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7CC0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x60CD10, GAME_10US_COMPACT, H_CALL, 0x60CC50, 1>;
    using def_t = void(CPedGroup *, CPed *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroup *,CPed *,CPed *>, 0,1,2>;
META_END

META_BEGIN(CPedGroup::IsAnyoneUsingCar)
    static int address;
    static int global_address;
    static const int id = 0x5F7DB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F7DB0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x6511B0, GAME_10US_COMPACT, H_CALL, 0x6510D0, 1>;
    using def_t = bool(CPedGroup *, CVehicle const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroup *,CVehicle const *>, 0,1>;
META_END

META_BEGIN(CPedGroup::PlayerGaveCommand_Gather)
    static int address;
    static int global_address;
    static const int id = 0x5FAB60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FAB60, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = void(CPedGroup *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroup *,CPed *>, 0,1>;
META_END

META_BEGIN(CPedGroup::GetClosestGroupPed)
    static int address;
    static int global_address;
    static const int id = 0x5FACD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FACD0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x65EA61, GAME_10US_COMPACT, H_CALL, 0x65EA50, 1>;
    using def_t = CPed *(CPedGroup *, CPed *, float *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroup *,CPed *,float *>, 0,1,2>;
META_END

META_BEGIN(CPedGroup::FindDistanceToFurthestMember)
    static int address;
    static int global_address;
    static const int id = 0x5FB010;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB010, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x60A396, GAME_10US_COMPACT, H_CALL, 0x60A1D0, 1>;
    using def_t = float(CPedGroup *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroup *>, 0>;
META_END

META_BEGIN(CPedGroup::FindDistanceToNearestMember)
    static int address;
    static int global_address;
    static const int id = 0x5FB0A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB0A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (3), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x44406D, GAME_10US_COMPACT, H_CALL, 0x444040, 1,
        0x60F774, GAME_10US_COMPACT, H_CALL, 0x60EA90, 1,
        0x60F7A1, GAME_10US_COMPACT, H_CALL, 0x60EA90, 2>;
    using def_t = float(CPedGroup *, CPed **);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroup *,CPed **>, 0,1>;
META_END

META_BEGIN(CPedGroup::Flush)
    static int address;
    static int global_address;
    static const int id = 0x5FB790;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB790, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FB891, GAME_10US_COMPACT, H_JUMP, 0x5FB870, 1,
        0x5FC874, GAME_10US_COMPACT, H_CALL, 0x5FC800, 1>;
    using def_t = void(CPedGroup *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroup *>, 0>;
META_END

META_BEGIN(CPedGroup::RemoveAllFollowers)
    static int address;
    static int global_address;
    static const int id = 0x5FB7D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FB7D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FB8BA, GAME_10US_COMPACT, H_JUMP, 0x5FB8A0, 1>;
    using def_t = void(CPedGroup *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroup *>, 0>;
META_END

CTOR_META_BEGIN(CPedGroup)
    static int address;
    static int global_address;
    static const int id = 0x5FC150;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FC150, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x851336, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = CPedGroup *(CPedGroup *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroup *>, 0>;
META_END

DTOR_META_BEGIN(CPedGroup)
    static int address;
    static int global_address;
    static const int id = 0x5FC190;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FC190, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x851331, GAME_10US_COMPACT, H_CALLBACK, 0, 1,
        0x856861, GAME_10US_COMPACT, H_CALLBACK, 0, 1>;
    using def_t = void(CPedGroup *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroup *>, 0>;
META_END

META_BEGIN(CPedGroup::Process)
    static int address;
    static int global_address;
    static const int id = 0x5FC7E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5FC7E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (7), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4923AE, GAME_10US_COMPACT, H_CALL, 0x490DB0, 1,
        0x4924AA, GAME_10US_COMPACT, H_CALL, 0x490DB0, 2,
        0x497D48, GAME_10US_COMPACT, H_CALL, 0x496E00, 1,
        0x571B61, GAME_10US_COMPACT, H_JUMP, 0x571AD0, 1,
        0x60CA8B, GAME_10US_COMPACT, H_CALL, 0x60C840, 1,
        0x60D6C3, GAME_10US_COMPACT, H_CALL, 0x60D5B0, 1,
        0x65E57D, GAME_10US_COMPACT, H_CALL, 0x65E200, 1>;
    using def_t = void(CPedGroup *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPedGroup *>, 0>;
META_END

template<>
struct stack_object<CPedGroup> : stack_object_no_default<CPedGroup> {
    SUPPORTED_10US stack_object() {
        plugin::CallMethodDynGlobal<CPedGroup *>(ctor_gaddr(CPedGroup), reinterpret_cast<CPedGroup *>(objBuff));
    }
    SUPPORTED_10US ~stack_object() {
        plugin::CallMethodDynGlobal<CPedGroup *>(dtor_gaddr(CPedGroup), reinterpret_cast<CPedGroup *>(objBuff));
    }
};

template <>
SUPPORTED_10US inline CPedGroup *operator_new<CPedGroup>() {
    void *objData = operator new(sizeof(CPedGroup)); 
    CPedGroup *obj = reinterpret_cast<CPedGroup *>(objData);
    plugin::CallMethodDynGlobal<CPedGroup *>(ctor_gaddr(CPedGroup), obj);
    return obj;
}
template <>
SUPPORTED_10US inline CPedGroup *operator_new_array<CPedGroup>(unsigned int objCount) {
    void *objData = operator new(sizeof(CPedGroup) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CPedGroup *objArray = reinterpret_cast<CPedGroup *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CPedGroup *>(ctor_gaddr(CPedGroup), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10US inline void operator_delete<CPedGroup>(CPedGroup *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CPedGroup *>(dtor_gaddr(CPedGroup), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10US inline void operator_delete_array<CPedGroup>(CPedGroup *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CPedGroup *>(dtor_gaddr(CPedGroup), &objArray[i]);
    operator delete(objData);
}

}
