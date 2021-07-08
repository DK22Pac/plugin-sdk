/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CAnimBlendHierarchy)
static int address;
static int global_address;
static const int id = 0x401960;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401960, 0x401960, 0x401960>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4044AD,100,2,0,1, 0x4044AD,110,2,0,1, 0x4044AD,120,2,0,1>;
using def_t = CAnimBlendHierarchy *(CAnimBlendHierarchy *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendHierarchy *>, 0>;
META_END

DTOR_META_BEGIN(CAnimBlendHierarchy)
static int address;
static int global_address;
static const int id = 0x401990;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401990, 0x401990, 0x401990>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4044A8,100,2,0,1, 0x404518,100,2,0,1, 0x4044A8,110,2,0,1, 0x404518,110,2,0,1, 0x4044A8,120,2,0,1, 0x404518,120,2,0,1>;
using def_t = void(CAnimBlendHierarchy *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendHierarchy *>, 0>;
META_END

META_BEGIN(CAnimBlendHierarchy::Shutdown)
static int address;
static int global_address;
static const int id = 0x4019A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4019A0, 0x4019A0, 0x4019A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4033D2,100,0,0x4033B0,1, 0x4033D2,110,0,0x4033B0,1, 0x4033D2,120,0,0x4033B0,1>;
using def_t = void(CAnimBlendHierarchy *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendHierarchy *>, 0>;
META_END

META_BEGIN(CAnimBlendHierarchy::SetName)
static int address;
static int global_address;
static const int id = 0x4019C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4019C0, 0x4019C0, 0x4019C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x403C82,100,0,0x403A40,1, 0x403C82,110,0,0x403A40,1, 0x403C82,120,0,0x403A40,1>;
using def_t = void(CAnimBlendHierarchy *, char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendHierarchy *,char const *>, 0,1>;
META_END

META_BEGIN(CAnimBlendHierarchy::CalcTotalTime)
static int address;
static int global_address;
static const int id = 0x4019E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4019E0, 0x4019E0, 0x4019E0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x401AE8,100,0,0x401AD0,1, 0x4042E4,100,0,0x403A40,1, 0x401AE8,110,0,0x401AD0,1, 0x4042E4,110,0,0x403A40,1, 0x401AE8,120,0,0x401AD0,1, 0x4042E4,120,0,0x403A40,1>;
using def_t = void(CAnimBlendHierarchy *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendHierarchy *>, 0>;
META_END

META_BEGIN(CAnimBlendHierarchy::RemoveQuaternionFlips)
static int address;
static int global_address;
static const int id = 0x401A80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401A80, 0x401A80, 0x401A80>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4042C6,100,0,0x403A40,1, 0x4042C6,110,0,0x403A40,1, 0x4042C6,120,0,0x403A40,1>;
using def_t = void(CAnimBlendHierarchy *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendHierarchy *>, 0>;
META_END

META_BEGIN(CAnimBlendHierarchy::RemoveAnimSequences)
static int address;
static int global_address;
static const int id = 0x401AB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401AB0, 0x401AB0, 0x401AB0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4019A3,100,0,0x4019A0,1, 0x404351,100,0,0x404320,1, 0x4019A3,110,0,0x4019A0,1, 0x404351,110,0,0x404320,1, 0x4019A3,120,0,0x4019A0,1, 0x404351,120,0,0x404320,1>;
using def_t = void(CAnimBlendHierarchy *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendHierarchy *>, 0>;
META_END

META_BEGIN(CAnimBlendHierarchy::Uncompress)
static int address;
static int global_address;
static const int id = 0x401AD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401AD0, 0x401AD0, 0x401AD0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x40348B,100,0,0x403410,1, 0x40348B,110,0,0x403410,1, 0x40348B,120,0,0x403410,1>;
using def_t = void(CAnimBlendHierarchy *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendHierarchy *>, 0>;
META_END

META_BEGIN(CAnimBlendHierarchy::RemoveUncompressedData)
static int address;
static int global_address;
static const int id = 0x401B00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401B00, 0x401B00, 0x401B00>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x403461,100,0,0x403410,1, 0x4042D9,100,0,0x403A40,1, 0x403461,110,0,0x403410,1, 0x4042D9,110,0,0x403A40,1, 0x403461,120,0,0x403410,1, 0x4042D9,120,0,0x403A40,1>;
using def_t = void(CAnimBlendHierarchy *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendHierarchy *>, 0>;
META_END

template<>
struct stack_object<CAnimBlendHierarchy> : stack_object_no_default<CAnimBlendHierarchy> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CAnimBlendHierarchy *>(ctor_gaddr(CAnimBlendHierarchy), reinterpret_cast<CAnimBlendHierarchy *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CAnimBlendHierarchy *>(dtor_gaddr(CAnimBlendHierarchy), reinterpret_cast<CAnimBlendHierarchy *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CAnimBlendHierarchy *operator_new<CAnimBlendHierarchy>() {
    void *objData = operator new(sizeof(CAnimBlendHierarchy)); 
    CAnimBlendHierarchy *obj = reinterpret_cast<CAnimBlendHierarchy *>(objData);
    plugin::CallMethodDynGlobal<CAnimBlendHierarchy *>(ctor_gaddr(CAnimBlendHierarchy), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CAnimBlendHierarchy *operator_new_array<CAnimBlendHierarchy>(unsigned int objCount) {
    void *objData = operator new(sizeof(CAnimBlendHierarchy) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CAnimBlendHierarchy *objArray = reinterpret_cast<CAnimBlendHierarchy *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CAnimBlendHierarchy *>(ctor_gaddr(CAnimBlendHierarchy), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CAnimBlendHierarchy>(CAnimBlendHierarchy *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CAnimBlendHierarchy *>(dtor_gaddr(CAnimBlendHierarchy), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CAnimBlendHierarchy>(CAnimBlendHierarchy *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CAnimBlendHierarchy *>(dtor_gaddr(CAnimBlendHierarchy), &objArray[i]);
    operator delete(objData);
}

}
