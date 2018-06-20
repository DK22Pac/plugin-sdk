/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CEntryExit::IsInArea)
    static int address;
    static int global_address;
    static const int id = 0x43E460;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43E460, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x441030, GAME_10US_COMPACT, H_CALL, 0x440D10, 1>;
    using def_t = bool(CEntryExit *, CVector const &);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CEntryExit *,CVector const &>, 0,1>;
META_END

META_BEGIN(CEntryExit::GetEntryExitToDisplayNameOf)
    static int address;
    static int global_address;
    static const int id = 0x43E650;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43E650, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x440B56, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1>;
    using def_t = CEntryExit *(CEntryExit *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CEntryExit *>, 0>;
META_END

META_BEGIN(CEntryExit::RequestObjectsInFrustum)
    static int address;
    static int global_address;
    static const int id = 0x43E690;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43E690, 0, 0, 0, 0, 0>;
    // total references count: 10us (2), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x440552, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1,
        0x440816, GAME_10US_COMPACT, H_CALL, 0x4404A0, 2>;
    using def_t = void(CEntryExit *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CEntryExit *>, 0>;
META_END

META_BEGIN(CEntryExit::RequestAmbientPeds)
    static int address;
    static int global_address;
    static const int id = 0x43E6D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43E6D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4407BE, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1>;
    using def_t = void(CEntryExit *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CEntryExit *>, 0>;
META_END

META_BEGIN(CEntryExit::GenerateAmbientPeds)
    static int address;
    static int global_address;
    static const int id = 0x43E8B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43E8B0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x440836, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1>;
    using def_t = void(CEntryExit *, CVector const &);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CEntryExit *,CVector const &>, 0,1>;
META_END

META_BEGIN(CEntryExit::GetPositionRelativeToOutsideWorld)
    static int address;
    static int global_address;
    static const int id = 0x43EA00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43EA00, 0, 0, 0, 0, 0>;
    // total references count: 10us (7), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x43F169, GAME_10US_COMPACT, H_CALL, 0x43F150, 1,
        0x442F48, GAME_10US_COMPACT, H_CALL, 0x442AD0, 1,
        0x4432F3, GAME_10US_COMPACT, H_CALL, 0x442AD0, 2,
        0x44359E, GAME_10US_COMPACT, H_CALL, 0x442AD0, 3,
        0x586E6E, GAME_10US_COMPACT, H_CALL, 0x586D60, 1,
        0x5871E4, GAME_10US_COMPACT, H_CALL, 0x587000, 1,
        0x5874A4, GAME_10US_COMPACT, H_CALL, 0x587000, 2>;
    using def_t = void(CEntryExit *, CVector &);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CEntryExit *,CVector &>, 0,1>;
META_END

CTOR_META_BEGIN(CEntryExit)
    static int address;
    static int global_address;
    static const int id = 0x43F130;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43F130, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = CEntryExit *(CEntryExit *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CEntryExit *>, 0>;
META_END

META_BEGIN(CEntryExit::WarpGangWithPlayer)
    static int address;
    static int global_address;
    static const int id = 0x43F1F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43F1F0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x440A21, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1>;
    using def_t = void(CEntryExit *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CEntryExit *,CPed *>, 0,1>;
META_END

META_BEGIN(CEntryExit::TransitionStarted)
    static int address;
    static int global_address;
    static const int id = 0x43FFD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x43FFD0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x44104C, GAME_10US_COMPACT, H_CALL, 0x440D10, 1>;
    using def_t = bool(CEntryExit *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CEntryExit *,CPed *>, 0,1>;
META_END

META_BEGIN(CEntryExit::TransitionFinished)
    static int address;
    static int global_address;
    static const int id = 0x4404A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4404A0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x440F89, GAME_10US_COMPACT, H_CALL, 0x440D10, 1>;
    using def_t = bool(CEntryExit *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CEntryExit *,CPed *>, 0,1>;
META_END

template<>
struct stack_object<CEntryExit> : stack_object_no_default<CEntryExit> {
    SUPPORTED_10US stack_object() {
        plugin::CallMethodDynGlobal<CEntryExit *>(ctor_gaddr(CEntryExit), reinterpret_cast<CEntryExit *>(objBuff));
    }
};

template <>
SUPPORTED_10US inline CEntryExit *operator_new<CEntryExit>() {
    void *objData = operator new(sizeof(CEntryExit)); 
    CEntryExit *obj = reinterpret_cast<CEntryExit *>(objData);
    plugin::CallMethodDynGlobal<CEntryExit *>(ctor_gaddr(CEntryExit), obj);
    return obj;
}
template <>
SUPPORTED_10US inline CEntryExit *operator_new_array<CEntryExit>(unsigned int objCount) {
    void *objData = operator new(sizeof(CEntryExit) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CEntryExit *objArray = reinterpret_cast<CEntryExit *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CEntryExit *>(ctor_gaddr(CEntryExit), &objArray[i]);
    return objArray;
}

}
