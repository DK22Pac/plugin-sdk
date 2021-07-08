/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CAnimBlendAssocGroup)
static int address;
static int global_address;
static const int id = 0x401000;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401000, 0x401000, 0x401000>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x40522F,100,0,0x405220,1, 0x40390C,100,2,0,1, 0x40522F,110,0,0x405220,1, 0x40390C,110,2,0,1, 0x40522F,120,0,0x405220,1, 0x40390C,120,2,0,1>;
using def_t = CAnimBlendAssocGroup *(CAnimBlendAssocGroup *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssocGroup *>, 0>;
META_END

DTOR_META_BEGIN(CAnimBlendAssocGroup)
static int address;
static int global_address;
static const int id = 0x401010;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401010, 0x401010, 0x401010>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4033F2,100,2,0,1, 0x403907,100,2,0,1, 0x40522B,100,2,0,1, 0x4033F2,110,2,0,1, 0x403907,110,2,0,1, 0x40522B,110,2,0,1, 0x4033F2,120,2,0,1, 0x403907,120,2,0,1, 0x40522B,120,2,0,1>;
using def_t = void(CAnimBlendAssocGroup *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssocGroup *>, 0>;
META_END

META_BEGIN_OVERLOADED(CAnimBlendAssocGroup::CreateAssociations, void (CAnimBlendAssocGroup::*)(char const *))
static int address;
static int global_address;
static const int id = 0x401130;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401130, 0x401130, 0x401130>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x40472F,100,0,0x404650,1, 0x40472F,110,0,0x404650,1, 0x40472F,120,0,0x404650,1>;
using def_t = void(CAnimBlendAssocGroup *, char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssocGroup *,char const *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CAnimBlendAssocGroup::CreateAssociations, void (CAnimBlendAssocGroup::*)(char const *, RpClump *, char **, int))
static int address;
static int global_address;
static const int id = 0x401220;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401220, 0x401220, 0x401220>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x403995,100,0,0x4038F0,1, 0x403995,110,0,0x4038F0,1, 0x403995,120,0,0x4038F0,1>;
using def_t = void(CAnimBlendAssocGroup *, char const *, RpClump *, char **, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssocGroup *,char const *,RpClump *,char **,int>, 0,1,2,3,4>;
META_END

META_BEGIN(CAnimBlendAssocGroup::DestroyAssociations)
static int address;
static int global_address;
static const int id = 0x4012D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4012D0, 0x4012D0, 0x4012D0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x401013,100,0,0x401010,1, 0x40113E,100,0,0x401130,1, 0x401232,100,0,0x401220,1, 0x401013,110,0,0x401010,1, 0x40113E,110,0,0x401130,1, 0x401232,110,0,0x401220,1, 0x401013,120,0,0x401010,1, 0x40113E,120,0,0x401130,1, 0x401232,120,0,0x401220,1>;
using def_t = void(CAnimBlendAssocGroup *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssocGroup *>, 0>;
META_END

META_BEGIN_OVERLOADED(CAnimBlendAssocGroup::GetAnimation, CAnimBlendAssociation *(CAnimBlendAssocGroup::*)(char const *))
static int address;
static int global_address;
static const int id = 0x401300;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401300, 0x401300, 0x401300>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4013E6,100,0,0x4013E0,1, 0x403616,100,0,0x403600,1, 0x4013E6,110,0,0x4013E0,1, 0x403616,110,0,0x403600,1, 0x4013E6,120,0,0x4013E0,1, 0x403616,120,0,0x403600,1>;
using def_t = CAnimBlendAssociation *(CAnimBlendAssocGroup *, char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssocGroup *,char const *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CAnimBlendAssocGroup::GetAnimation, CAnimBlendAssociation *(CAnimBlendAssocGroup::*)(unsigned int))
static int address;
static int global_address;
static const int id = 0x4013D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4013D0, 0x4013D0, 0x4013D0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x401426,100,0,0x401420,1, 0x4035F6,100,0,0x4035E0,1, 0x4039C7,100,0,0x4038F0,1, 0x401426,110,0,0x401420,1, 0x4035F6,110,0,0x4035E0,1, 0x4039C7,110,0,0x4038F0,1, 0x401426,120,0,0x401420,1, 0x4035F6,120,0,0x4035E0,1, 0x4039C7,120,0,0x4038F0,1>;
using def_t = CAnimBlendAssociation *(CAnimBlendAssocGroup *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssocGroup *,unsigned int>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CAnimBlendAssocGroup::CopyAnimation, CAnimBlendAssociation *(CAnimBlendAssocGroup::*)(char const *))
static int address;
static int global_address;
static const int id = 0x4013E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4013E0, 0x401420, 0x401420>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x404D3A,100,0,0x404D20,1, 0x4035D6,110,0,0x4035C0,1, 0x4035D6,120,0,0x4035C0,1>;
using def_t = CAnimBlendAssociation *(CAnimBlendAssocGroup *, char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssocGroup *,char const *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CAnimBlendAssocGroup::CopyAnimation, CAnimBlendAssociation *(CAnimBlendAssocGroup::*)(unsigned int))
static int address;
static int global_address;
static const int id = 0x401420;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401420, 0x4013E0, 0x4013E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4035D6,100,0,0x4035C0,1, 0x404D3A,110,0,0x404D20,1, 0x404D3A,120,0,0x404D20,1>;
using def_t = CAnimBlendAssociation *(CAnimBlendAssocGroup *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendAssocGroup *,unsigned int>, 0,1>;
META_END

META_BEGIN(strcmpIgnoringDigits)
static int address;
static int global_address;
static const int id = 0x401020;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401020, 0x401020, 0x401020>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x401107,100,0,0x4010D0,1, 0x401107,110,0,0x4010D0,1, 0x401107,120,0,0x4010D0,1>;
using def_t = bool(char const *, char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<char const *,char const *>, 0,1>;
META_END

META_BEGIN(GetModelFromName)
static int address;
static int global_address;
static const int id = 0x4010D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4010D0, 0x4010D0, 0x4010D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4011A8,100,0,0x401130,1, 0x4011A8,110,0,0x401130,1, 0x4011A8,120,0,0x401130,1>;
using def_t = CBaseModelInfo *(char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

template<>
struct stack_object<CAnimBlendAssocGroup> : stack_object_no_default<CAnimBlendAssocGroup> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CAnimBlendAssocGroup *>(ctor_gaddr(CAnimBlendAssocGroup), reinterpret_cast<CAnimBlendAssocGroup *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CAnimBlendAssocGroup *>(dtor_gaddr(CAnimBlendAssocGroup), reinterpret_cast<CAnimBlendAssocGroup *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CAnimBlendAssocGroup *operator_new<CAnimBlendAssocGroup>() {
    void *objData = operator new(sizeof(CAnimBlendAssocGroup)); 
    CAnimBlendAssocGroup *obj = reinterpret_cast<CAnimBlendAssocGroup *>(objData);
    plugin::CallMethodDynGlobal<CAnimBlendAssocGroup *>(ctor_gaddr(CAnimBlendAssocGroup), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CAnimBlendAssocGroup *operator_new_array<CAnimBlendAssocGroup>(unsigned int objCount) {
    void *objData = operator new(sizeof(CAnimBlendAssocGroup) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CAnimBlendAssocGroup *objArray = reinterpret_cast<CAnimBlendAssocGroup *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CAnimBlendAssocGroup *>(ctor_gaddr(CAnimBlendAssocGroup), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CAnimBlendAssocGroup>(CAnimBlendAssocGroup *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CAnimBlendAssocGroup *>(dtor_gaddr(CAnimBlendAssocGroup), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CAnimBlendAssocGroup>(CAnimBlendAssocGroup *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CAnimBlendAssocGroup *>(dtor_gaddr(CAnimBlendAssocGroup), &objArray[i]);
    operator delete(objData);
}

}
