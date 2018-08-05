/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(cAudioScriptObject::LoadAllAudioScriptObjects)
    static int address;
    static int global_address;
    static const int id = 0x5F9290;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F9290, 0x5F92B0, 0x5F8EF0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x61BC92, GAME_10EN, H_CALL, 0x61A700, 1,
        0x61BC72, GAME_11EN, H_CALL, 0x61A6E0, 1,
        0x61B8B2, GAME_STEAM, H_CALL, 0x61A320, 1>;
    using def_t = void(unsigned char *, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int>, 0,1>;
META_END

META_BEGIN(cAudioScriptObject::SaveAllAudioScriptObjects)
    static int address;
    static int global_address;
    static const int id = 0x5F9350;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F9350, 0x5F9370, 0x5F8FB0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x61CF62, GAME_10EN, H_CALL, 0x61C420, 1,
        0x61CF42, GAME_11EN, H_CALL, 0x61C400, 1,
        0x61CBA2, GAME_STEAM, H_CALL, 0x61C040, 1>;
    using def_t = void(unsigned char *, int *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char *,int *>, 0,1>;
META_END

OP_DELETE_META_BEGIN(cAudioScriptObject)
    static int address;
    static int global_address;
    static const int id = 0x5F9450;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F9450, 0x5F9470, 0x5F90B0>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x454F3E, GAME_10EN, H_CALL, 0x453670, 1,
        0x5F7DB0, GAME_10EN, H_CALL, 0x5F7B10, 1,
        0x5F8112, GAME_10EN, H_CALL, 0x5F80C0, 1,
        0x454F3E, GAME_11EN, H_CALL, 0x453670, 1,
        0x5F7DD0, GAME_11EN, H_CALL, 0x5F7B30, 1,
        0x5F8132, GAME_11EN, H_CALL, 0x5F80E0, 1,
        0x454E1E, GAME_STEAM, H_CALL, 0x453550, 1,
        0x5F7A10, GAME_STEAM, H_CALL, 0x5F7770, 1,
        0x5F7D72, GAME_STEAM, H_CALL, 0x5F7D20, 1>;
    using def_t = void(void *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<void *>, 0>;
META_END

OP_NEW_META_BEGIN(cAudioScriptObject)
    static int address;
    static int global_address;
    static const int id = 0x5F9470;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F9470, 0x5F9490, 0x5F90D0>;
    // total references count: 10en (5), 11en (5), steam (5)
    using refs_t = RefList<
        0x454E08, GAME_10EN, H_CALL, 0x453670, 1,
        0x454E7B, GAME_10EN, H_CALL, 0x453670, 2,
        0x5C459D, GAME_10EN, H_CALL, 0x5C3DE0, 1,
        0x5C463F, GAME_10EN, H_CALL, 0x5C3DE0, 2,
        0x5C467F, GAME_10EN, H_CALL, 0x5C3DE0, 3,
        0x454E08, GAME_11EN, H_CALL, 0x453670, 1,
        0x454E7B, GAME_11EN, H_CALL, 0x453670, 2,
        0x5C45BD, GAME_11EN, H_CALL, 0x5C3E00, 1,
        0x5C465F, GAME_11EN, H_CALL, 0x5C3E00, 2,
        0x5C469F, GAME_11EN, H_CALL, 0x5C3E00, 3,
        0x454CE8, GAME_STEAM, H_CALL, 0x453550, 1,
        0x454D5B, GAME_STEAM, H_CALL, 0x453550, 2,
        0x5C43CD, GAME_STEAM, H_CALL, 0x5C3C10, 1,
        0x5C446F, GAME_STEAM, H_CALL, 0x5C3C10, 2,
        0x5C44AF, GAME_STEAM, H_CALL, 0x5C3C10, 3>;
    using def_t = void *(unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

DTOR_META_BEGIN(cAudioScriptObject)
    static int address;
    static int global_address;
    static const int id = 0x5F9480;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F9480, 0x5F94A0, 0x5F90E0>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x454F38, GAME_10EN, H_CALL, 0x453670, 1,
        0x5F7DAA, GAME_10EN, H_CALL, 0x5F7B10, 1,
        0x5F810C, GAME_10EN, H_CALL, 0x5F80C0, 1,
        0x454F38, GAME_11EN, H_CALL, 0x453670, 1,
        0x5F7DCA, GAME_11EN, H_CALL, 0x5F7B30, 1,
        0x5F812C, GAME_11EN, H_CALL, 0x5F80E0, 1,
        0x454E18, GAME_STEAM, H_CALL, 0x453550, 1,
        0x5F7A0A, GAME_STEAM, H_CALL, 0x5F7770, 1,
        0x5F7D6C, GAME_STEAM, H_CALL, 0x5F7D20, 1>;
    using def_t = void(cAudioScriptObject *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<cAudioScriptObject *>, 0>;
META_END

CTOR_META_BEGIN(cAudioScriptObject)
    static int address;
    static int global_address;
    static const int id = 0x5F94B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5F94B0, 0x5F94D0, 0x5F9110>;
    // total references count: 10en (5), 11en (5), steam (5)
    using refs_t = RefList<
        0x454E14, GAME_10EN, H_CALL, 0x453670, 1,
        0x454E89, GAME_10EN, H_CALL, 0x453670, 2,
        0x5C45A9, GAME_10EN, H_CALL, 0x5C3DE0, 1,
        0x5C464B, GAME_10EN, H_CALL, 0x5C3DE0, 2,
        0x5C468B, GAME_10EN, H_CALL, 0x5C3DE0, 3,
        0x454E14, GAME_11EN, H_CALL, 0x453670, 1,
        0x454E89, GAME_11EN, H_CALL, 0x453670, 2,
        0x5C45C9, GAME_11EN, H_CALL, 0x5C3E00, 1,
        0x5C466B, GAME_11EN, H_CALL, 0x5C3E00, 2,
        0x5C46AB, GAME_11EN, H_CALL, 0x5C3E00, 3,
        0x454CF4, GAME_STEAM, H_CALL, 0x453550, 1,
        0x454D69, GAME_STEAM, H_CALL, 0x453550, 2,
        0x5C43D9, GAME_STEAM, H_CALL, 0x5C3C10, 1,
        0x5C447B, GAME_STEAM, H_CALL, 0x5C3C10, 2,
        0x5C44BB, GAME_STEAM, H_CALL, 0x5C3C10, 3>;
    using def_t = cAudioScriptObject *(cAudioScriptObject *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<cAudioScriptObject *>, 0>;
META_END

template<>
struct stack_object<cAudioScriptObject> : stack_object_no_default<cAudioScriptObject> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<cAudioScriptObject *>(ctor_gaddr(cAudioScriptObject), reinterpret_cast<cAudioScriptObject *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<cAudioScriptObject *>(dtor_gaddr(cAudioScriptObject), reinterpret_cast<cAudioScriptObject *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline cAudioScriptObject *operator_new<cAudioScriptObject>() {
    void *objData = plugin::CallAndReturnDynGlobal<void *, unsigned int>(op_new_gaddr(cAudioScriptObject), sizeof(cAudioScriptObject));
    cAudioScriptObject *obj = reinterpret_cast<cAudioScriptObject *>(objData);
    plugin::CallMethodDynGlobal<cAudioScriptObject *>(ctor_gaddr(cAudioScriptObject), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline cAudioScriptObject *operator_new_array<cAudioScriptObject>(unsigned int objCount) {
    void *objData = operator new(sizeof(cAudioScriptObject) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    cAudioScriptObject *objArray = reinterpret_cast<cAudioScriptObject *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<cAudioScriptObject *>(ctor_gaddr(cAudioScriptObject), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<cAudioScriptObject>(cAudioScriptObject *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<cAudioScriptObject *>(dtor_gaddr(cAudioScriptObject), obj);
    plugin::CallDynGlobal<void *>(op_delete_gaddr(cAudioScriptObject), obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<cAudioScriptObject>(cAudioScriptObject *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<cAudioScriptObject *>(dtor_gaddr(cAudioScriptObject), &objArray[i]);
    operator delete(objData);
}

}
