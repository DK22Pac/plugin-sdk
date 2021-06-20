/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CAccidentManager)
static int address;
static int global_address;
static const int id = 0x456560;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x456560, 0x456560, 0x456560>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x45690F,100,0,0x456900,1, 0x45690F,110,0,0x456900,1, 0x45690F,120,0,0x456900,1>;
using def_t = CAccidentManager *(CAccidentManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAccidentManager *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CAccidentManager)
static int address;
static int global_address;
static const int id = 0x456580;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x456580, 0x456580, 0x456580>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x45690B,100,2,0,1, 0x45690B,110,2,0,1, 0x45690B,120,2,0,1>;
using def_t = void(CAccidentManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAccidentManager *>, 0>;
META_END

META_BEGIN(CAccidentManager::GetNextFreeAccident)
static int address;
static int global_address;
static const int id = 0x4565A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4565A0, 0x4565A0, 0x4565A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4566D2,100,0,0x4565D0,1, 0x4566D2,110,0,0x4565D0,1, 0x4566D2,120,0,0x4565D0,1>;
using def_t = CAccident *(CAccidentManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAccidentManager *>, 0>;
META_END

META_BEGIN(CAccidentManager::ReportAccident)
static int address;
static int global_address;
static const int id = 0x4565D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4565D0, 0x4565D0, 0x4565D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x456744,100,0,0x456710,1, 0x456744,110,0,0x456710,1, 0x456744,120,0,0x456710,1>;
using def_t = void(CAccidentManager *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAccidentManager *,CPed *>, 0,1>;
META_END

META_BEGIN(CAccidentManager::Update)
static int address;
static int global_address;
static const int id = 0x456710;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x456710, 0x456710, 0x456710>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C984,100,0,0x48C850,1, 0x48CA84,110,0,0x48C950,1, 0x48CA14,120,0,0x48C8E0,1>;
using def_t = void(CAccidentManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAccidentManager *>, 0>;
META_END

META_BEGIN(CAccidentManager::FindNearestAccident)
static int address;
static int global_address;
static const int id = 0x456760;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x456760, 0x456760, 0x456760>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x414C45,100,0,0x413E50,1, 0x41FCEA,100,0,0x41FC50,1, 0x4C3192,100,0,0x4C30A0,1, 0x4C336C,100,0,0x4C30A0,2, 0x4C3545,100,0,0x4C30A0,3, 0x414C45,110,0,0x413E50,1, 0x41FCEA,110,0,0x41FC50,1, 0x4C3232,110,0,0x4C3140,1, 0x4C340C,110,0,0x4C3140,2, 0x4C35E5,110,0,0x4C3140,3, 0x414C45,120,0,0x413E50,1, 0x41FCEA,120,0,0x41FC50,1, 0x4C31C2,120,0,0x4C30D0,1, 0x4C339C,120,0,0x4C30D0,2, 0x4C3575,120,0,0x4C30D0,3>;
using def_t = CAccident *(CAccidentManager *, CVector, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAccidentManager *,CVector,float *>, 0,1,2>;
META_END

META_BEGIN(CAccidentManager::CountActiveAccidents)
static int address;
static int global_address;
static const int id = 0x456880;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x456880, 0x456880, 0x456880>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x41FCB2,100,0,0x41FC50,1, 0x41FCB2,110,0,0x41FC50,1, 0x41FCB2,120,0,0x41FC50,1>;
using def_t = unsigned short(CAccidentManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAccidentManager *>, 0>;
META_END

META_BEGIN(CAccidentManager::WorkToDoForMedics)
static int address;
static int global_address;
static const int id = 0x4568A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4568A0, 0x4568A0, 0x4568A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4566FD,100,0,0x4565D0,1, 0x4566FD,110,0,0x4565D0,1, 0x4566FD,120,0,0x4565D0,1>;
using def_t = bool(CAccidentManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAccidentManager *>, 0>;
META_END

META_BEGIN(CAccidentManager::UnattendedAccidents)
static int address;
static int global_address;
static const int id = 0x4568D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4568D0, 0x4568D0, 0x4568D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C3C22,100,0,0x4C30A0,1, 0x4C3CC2,110,0,0x4C3140,1, 0x4C3C52,120,0,0x4C30D0,1>;
using def_t = bool(CAccidentManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAccidentManager *>, 0>;
META_END

template<>
struct stack_object<CAccidentManager> : stack_object_no_default<CAccidentManager> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CAccidentManager *>(ctor_gaddr(CAccidentManager), reinterpret_cast<CAccidentManager *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CAccidentManager *operator_new<CAccidentManager>() {
    void *objData = operator new(sizeof(CAccidentManager)); 
    CAccidentManager *obj = reinterpret_cast<CAccidentManager *>(objData);
    plugin::CallMethodDynGlobal<CAccidentManager *>(ctor_gaddr(CAccidentManager), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CAccidentManager *operator_new_array<CAccidentManager>(unsigned int objCount) {
    void *objData = operator new(sizeof(CAccidentManager) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CAccidentManager *objArray = reinterpret_cast<CAccidentManager *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CAccidentManager *>(ctor_gaddr(CAccidentManager), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CAccidentManager>(CAccidentManager *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CAccidentManager *>(del_dtor_gaddr(CAccidentManager), obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CAccidentManager>(CAccidentManager *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CAccidentManager *>(del_dtor_gaddr(CAccidentManager), &objArray[i]);
    operator delete(objData);
}

}
