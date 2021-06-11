/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CFire)
static int address;
static int global_address;
static const int id = 0x479220;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x479220, 0x479220, 0x479220>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4792A0,100,2,0,1, 0x4792A0,110,2,0,1, 0x4792A0,120,2,0,1>;
using def_t = CFire *(CFire *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFire *>, 0>;
META_END

DTOR_META_BEGIN(CFire)
static int address;
static int global_address;
static const int id = 0x479280;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x479280, 0x479280, 0x479280>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x47929B,100,2,0,1, 0x4792CB,100,2,0,1, 0x47929B,110,2,0,1, 0x4792CB,110,2,0,1, 0x47929B,120,2,0,1, 0x4792CB,120,2,0,1>;
using def_t = void(CFire *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFire *>, 0>;
META_END

META_BEGIN(CFire::ReportThisFire)
static int address;
static int global_address;
static const int id = 0x4798B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4798B0, 0x4798B0, 0x4798B0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x479575,100,0,0x479500,1, 0x479866,100,0,0x479590,1, 0x479575,110,0,0x479500,1, 0x479866,110,0,0x479590,1, 0x479575,120,0,0x479500,1, 0x479866,120,0,0x479590,1>;
using def_t = void(CFire *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFire *>, 0>;
META_END

META_BEGIN(CFire::ProcessFire)
static int address;
static int global_address;
static const int id = 0x4798D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4798D0, 0x4798D0, 0x4798D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x47932A,100,0,0x479310,1, 0x47932A,110,0,0x479310,1, 0x47932A,120,0,0x479310,1>;
using def_t = void(CFire *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFire *>, 0>;
META_END

META_BEGIN(CFire::Extinguish)
static int address;
static int global_address;
static const int id = 0x479D40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x479D40, 0x479D40, 0x479D40>;
// total references count: 10en (15), 11en (15), steam (15)
using refs_t = RefList<0x421ABC,100,0,0x421A60,1, 0x479917,100,0,0x4798D0,1, 0x4799D4,100,0,0x4798D0,2, 0x479D2A,100,0,0x4798D0,3, 0x479E27,100,0,0x479DB0,1, 0x479E88,100,0,0x479E60,1, 0x479EA0,100,0,0x479E60,2, 0x479FF0,100,0,0x479FE0,1, 0x47A01A,100,0,0x47A000,1, 0x4C51D9,100,0,0x4C50D0,1, 0x4CB73A,100,0,0x4C8910,1, 0x4EFD00,100,0,0x4EFC40,1, 0x5223D0,100,0,0x5220B0,1, 0x5510C2,100,0,0x551040,1, 0x552B21,100,0,0x552AF0,1, 0x421ABC,110,0,0x421A60,1, 0x479917,110,0,0x4798D0,1, 0x4799D4,110,0,0x4798D0,2, 0x479D2A,110,0,0x4798D0,3, 0x479E27,110,0,0x479DB0,1, 0x479E88,110,0,0x479E60,1, 0x479EA0,110,0,0x479E60,2, 0x479FF0,110,0,0x479FE0,1, 0x47A01A,110,0,0x47A000,1, 0x4C5279,110,0,0x4C5170,1, 0x4CB7DA,110,0,0x4C89B0,1, 0x4EFDB0,110,0,0x4EFCF0,1, 0x522610,110,0,0x5222F0,1, 0x551202,110,0,0x551180,1, 0x552C61,110,0,0x552C30,1, 0x421ABC,120,0,0x421A60,1, 0x479917,120,0,0x4798D0,1, 0x4799D4,120,0,0x4798D0,2, 0x479D2A,120,0,0x4798D0,3, 0x479E27,120,0,0x479DB0,1, 0x479E88,120,0,0x479E60,1, 0x479EA0,120,0,0x479E60,2, 0x479FF0,120,0,0x479FE0,1, 0x47A01A,120,0,0x47A000,1, 0x4C5209,120,0,0x4C5100,1, 0x4CB76A,120,0,0x4C8940,1, 0x4EFD40,120,0,0x4EFC80,1, 0x5225A0,120,0,0x522280,1, 0x5511B2,120,0,0x551130,1, 0x552C11,120,0,0x552BE0,1>;
using def_t = void(CFire *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFire *>, 0>;
META_END

template<>
struct stack_object<CFire> : stack_object_no_default<CFire> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CFire *>(ctor_gaddr(CFire), reinterpret_cast<CFire *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CFire *>(dtor_gaddr(CFire), reinterpret_cast<CFire *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CFire *operator_new<CFire>() {
    void *objData = operator new(sizeof(CFire)); 
    CFire *obj = reinterpret_cast<CFire *>(objData);
    plugin::CallMethodDynGlobal<CFire *>(ctor_gaddr(CFire), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CFire *operator_new_array<CFire>(unsigned int objCount) {
    void *objData = operator new(sizeof(CFire) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CFire *objArray = reinterpret_cast<CFire *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CFire *>(ctor_gaddr(CFire), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CFire>(CFire *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CFire *>(dtor_gaddr(CFire), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CFire>(CFire *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CFire *>(dtor_gaddr(CFire), &objArray[i]);
    operator delete(objData);
}

}
