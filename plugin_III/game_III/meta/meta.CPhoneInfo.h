/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CPhoneInfo)
static int address;
static int global_address;
static const int id = 0x42F5D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42F5D0, 0x42F5D0, 0x42F5D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43020F,100,0,0x430200,1, 0x43020F,110,0,0x430200,1, 0x43020F,120,0,0x430200,1>;
using def_t = CPhoneInfo *(CPhoneInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *>, 0>;
META_END

DTOR_META_BEGIN(CPhoneInfo)
static int address;
static int global_address;
static const int id = 0x42F600;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42F600, 0x42F600, 0x42F600>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43020B,100,2,0,1, 0x43020B,110,2,0,1, 0x43020B,120,2,0,1>;
using def_t = void(CPhoneInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *>, 0>;
META_END

META_BEGIN(CPhoneInfo::Initialise)
static int address;
static int global_address;
static const int id = 0x42F640;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42F640, 0x42F640, 0x42F640>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C24D,100,0,0x48BED0,1, 0x48C570,100,0,0x48C4B0,1, 0x48C33D,110,0,0x48BFC0,1, 0x48C670,110,0,0x48C5B0,1, 0x48C2CD,120,0,0x48BF50,1, 0x48C600,120,0,0x48C540,1>;
using def_t = void(CPhoneInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *>, 0>;
META_END

META_BEGIN(CPhoneInfo::Shutdown)
static int address;
static int global_address;
static const int id = 0x42F710;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42F710, 0x42F710, 0x42F710>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C3C7,100,0,0x48C3A0,1, 0x48C4B7,110,0,0x48C490,1, 0x48C447,120,0,0x48C420,1>;
using def_t = void(CPhoneInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *>, 0>;
META_END

META_BEGIN(CPhoneInfo::FindNearestFreePhone)
static int address;
static int global_address;
static const int id = 0x42F720;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42F720, 0x42F720, 0x42F720>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C10F6,100,0,0x4C10C0,1, 0x4C11E6,110,0,0x4C11B0,1, 0x4C1176,120,0,0x4C1140,1>;
using def_t = int(CPhoneInfo *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *,CVector *>, 0,1>;
META_END

META_BEGIN(CPhoneInfo::Update)
static int address;
static int global_address;
static const int id = 0x42F7A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42F7A0, 0x42F7A0, 0x42F7A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C9EB,100,0,0x48C850,1, 0x48CAEB,110,0,0x48C950,1, 0x48CA7B,120,0,0x48C8E0,1>;
using def_t = void(CPhoneInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *>, 0>;
META_END

META_BEGIN(CPhoneInfo::PhoneAtThisPosition)
static int address;
static int global_address;
static const int id = 0x42FD50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42FD50, 0x42FD50, 0x42FD50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4D0510,100,0,0x4D0490,1, 0x4D05B0,110,0,0x4D0530,1, 0x4D0540,120,0,0x4D04C0,1>;
using def_t = bool(CPhoneInfo *, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *,CVector>, 0,1>;
META_END

META_BEGIN(CPhoneInfo::GrabPhone)
static int address;
static int global_address;
static const int id = 0x42FDB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42FDB0, 0x42FDB0, 0x42FDB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x444684,100,0,0x4429C0,1, 0x444684,110,0,0x4429C0,1, 0x444684,120,0,0x4429C0,1>;
using def_t = int(CPhoneInfo *, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *,float,float>, 0,1,2>;
META_END

META_BEGIN(CPhoneInfo::SetPhoneMessage_Repeatedly)
static int address;
static int global_address;
static const int id = 0x42FF30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42FF30, 0x42FF30, 0x42FF30>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x4446FD,100,0,0x4429C0,1, 0x44C39A,100,0,0x448240,1, 0x44C54C,100,0,0x448240,2, 0x44C772,100,0,0x448240,3, 0x44CD5E,100,0,0x44CB80,1, 0x44D03F,100,0,0x44CB80,2, 0x4446FD,110,0,0x4429C0,1, 0x44C39A,110,0,0x448240,1, 0x44C54C,110,0,0x448240,2, 0x44C772,110,0,0x448240,3, 0x44CD5E,110,0,0x44CB80,1, 0x44D03F,110,0,0x44CB80,2, 0x4446FD,120,0,0x4429C0,1, 0x44C39A,120,0,0x448240,1, 0x44C54C,120,0,0x448240,2, 0x44C772,120,0,0x448240,3, 0x44CD5E,120,0,0x44CB80,1, 0x44D03F,120,0,0x44CB80,2>;
using def_t = void(CPhoneInfo *, int, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *,int,wchar_t *,wchar_t *,wchar_t *,wchar_t *,wchar_t *,wchar_t *>, 0,1,2,3,4,5,6,7>;
META_END

META_BEGIN(CPhoneInfo::SetPhoneMessage_JustOnce)
static int address;
static int global_address;
static const int id = 0x42FF90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42FF90, 0x42FF90, 0x42FF90>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x444764,100,0,0x4429C0,1, 0x4447D6,100,0,0x4429C0,2, 0x44C456,100,0,0x448240,1, 0x44C642,100,0,0x448240,2, 0x44C8A2,100,0,0x448240,3, 0x44CEB1,100,0,0x44CB80,1, 0x44D1C8,100,0,0x44CB80,2, 0x444764,110,0,0x4429C0,1, 0x4447D6,110,0,0x4429C0,2, 0x44C456,110,0,0x448240,1, 0x44C642,110,0,0x448240,2, 0x44C8A2,110,0,0x448240,3, 0x44CEB1,110,0,0x44CB80,1, 0x44D1C8,110,0,0x44CB80,2, 0x444764,120,0,0x4429C0,1, 0x4447D6,120,0,0x4429C0,2, 0x44C456,120,0,0x448240,1, 0x44C642,120,0,0x448240,2, 0x44C8A2,120,0,0x448240,3, 0x44CEB1,120,0,0x44CB80,1, 0x44D1C8,120,0,0x44CB80,2>;
using def_t = void(CPhoneInfo *, int, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *,int,wchar_t *,wchar_t *,wchar_t *,wchar_t *,wchar_t *,wchar_t *>, 0,1,2,3,4,5,6,7>;
META_END

META_BEGIN(CPhoneInfo::HasMessageBeenDisplayed)
static int address;
static int global_address;
static const int id = 0x42FFF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42FFF0, 0x42FFF0, 0x42FFF0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x444791,100,0,0x4429C0,1, 0x444791,110,0,0x4429C0,1, 0x444791,120,0,0x4429C0,1>;
using def_t = bool(CPhoneInfo *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *,int>, 0,1>;
META_END

META_BEGIN(CPhoneInfo::IsMessageBeingDisplayed)
static int address;
static int global_address;
static const int id = 0x430030;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x430030, 0x430030, 0x430030>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44EBD1,100,0,0x44CB80,1, 0x44EBD1,110,0,0x44CB80,1, 0x44EBD1,120,0,0x44CB80,1>;
using def_t = bool(CPhoneInfo *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *,int>, 0,1>;
META_END

META_BEGIN(CPhoneInfo::Save)
static int address;
static int global_address;
static const int id = 0x430060;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x430060, 0x430060, 0x430060>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x59012D,100,0,0x58F8D0,1, 0x59041D,110,0,0x58FBC0,1, 0x59030D,120,0,0x58FAB0,1>;
using def_t = void(CPhoneInfo *, unsigned char *, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *,unsigned char *,unsigned int *>, 0,1,2>;
META_END

META_BEGIN(CPhoneInfo::Load)
static int address;
static int global_address;
static const int id = 0x430120;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x430120, 0x430120, 0x430120>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x59124A,100,0,0x590A00,1, 0x59150A,110,0,0x590CC0,1, 0x5913FA,120,0,0x590BB0,1>;
using def_t = void(CPhoneInfo *, unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *,unsigned char *,unsigned int>, 0,1,2>;
META_END

META_BEGIN(PhonePickUpCB)
static int address;
static int global_address;
static const int id = 0x42F470;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42F470, 0x42F470, 0x42F470>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x42FB79,100,2,0,1, 0x610584,100,2,0,1, 0x42FB79,110,2,0,1, 0x60FE4C,110,2,0,1, 0x42FB79,120,2,0,1, 0x61CE44,120,2,0,1>;
using def_t = void(CAnimBlendAssociation *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,void *>, 0,1>;
META_END

META_BEGIN(PhonePutDownCB)
static int address;
static int global_address;
static const int id = 0x42F570;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42F570, 0x42F570, 0x42F570>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x42F858,100,2,0,1, 0x610580,100,2,0,1, 0x42F858,110,2,0,1, 0x60FE48,110,2,0,1, 0x42F858,120,2,0,1, 0x61CE40,120,2,0,1>;
using def_t = void(CAnimBlendAssociation *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,void *>, 0,1>;
META_END

template<>
struct stack_object<CPhoneInfo> : stack_object_no_default<CPhoneInfo> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CPhoneInfo *>(ctor_gaddr(CPhoneInfo), reinterpret_cast<CPhoneInfo *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CPhoneInfo *>(dtor_gaddr(CPhoneInfo), reinterpret_cast<CPhoneInfo *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CPhoneInfo *operator_new<CPhoneInfo>() {
    void *objData = operator new(sizeof(CPhoneInfo)); 
    CPhoneInfo *obj = reinterpret_cast<CPhoneInfo *>(objData);
    plugin::CallMethodDynGlobal<CPhoneInfo *>(ctor_gaddr(CPhoneInfo), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CPhoneInfo *operator_new_array<CPhoneInfo>(unsigned int objCount) {
    void *objData = operator new(sizeof(CPhoneInfo) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CPhoneInfo *objArray = reinterpret_cast<CPhoneInfo *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CPhoneInfo *>(ctor_gaddr(CPhoneInfo), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CPhoneInfo>(CPhoneInfo *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CPhoneInfo *>(dtor_gaddr(CPhoneInfo), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CPhoneInfo>(CPhoneInfo *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CPhoneInfo *>(dtor_gaddr(CPhoneInfo), &objArray[i]);
    operator delete(objData);
}

}
