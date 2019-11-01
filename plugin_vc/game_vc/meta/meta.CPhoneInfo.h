/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPhoneInfo::Load)
static int address;
static int global_address;
static const int id = 0x43C2B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x43C2B0, 0x43C2B0, 0>;
// total references count: 10en (0), 11en (1), steam (0)
using refs_t = RefList<0x61B497,110,0,0x61A6E0,1>;
using def_t = void(CPhoneInfo *, unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *,unsigned char *,unsigned int>, 0,1,2>;
META_END

META_BEGIN(CPhoneInfo::Save)
static int address;
static int global_address;
static const int id = 0x43C370;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x43C370, 0x43C370, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x61CBE7,100,0,0x61C420,1, 0x61CBC7,110,0,0x61C400,1>;
using def_t = void(CPhoneInfo *, unsigned char *, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *,unsigned char *,unsigned int *>, 0,1,2>;
META_END

META_BEGIN(CPhoneInfo::SetPhoneMessage_JustOnce)
static int address;
static int global_address;
static const int id = 0x43C430;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x43C430, 0x43C430, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x458B0F,100,0,0x457580,1, 0x458B0F,110,0,0x457580,1>;
using def_t = void(CPhoneInfo *, int, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *,int,wchar_t *,wchar_t *,wchar_t *,wchar_t *,wchar_t *,wchar_t *>, 0,1,2,3,4,5,6,7>;
META_END

META_BEGIN(CPhoneInfo::GrabPhone)
static int address;
static int global_address;
static const int id = 0x43C490;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x43C490, 0x43C490, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x458AC6,100,0,0x457580,1, 0x458AC6,110,0,0x457580,1>;
using def_t = int(CPhoneInfo *, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *,float,float>, 0,1,2>;
META_END

META_BEGIN(CPhoneInfo::Update)
static int address;
static int global_address;
static const int id = 0x43C600;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x43C600, 0x43C600, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x4A463E,100,0,0x4A4410,1, 0x4A465E,110,0,0x4A4430,1>;
using def_t = void(CPhoneInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *>, 0>;
META_END

META_BEGIN(CPhoneInfo::FindNearestFreePhone)
static int address;
static int global_address;
static const int id = 0x43CBD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x43CBD0, 0x43CBD0, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x4E919A,100,0,0x4E8E20,1, 0x4E91BA,110,0,0x4E8E40,1>;
using def_t = int(CPhoneInfo *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *,CVector *>, 0,1>;
META_END

META_BEGIN(CPhoneInfo::Shutdown)
static int address;
static int global_address;
static const int id = 0x43CC50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x43CC50, 0x43CC50, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x4A4A1E,100,0,0x4A49E0,1, 0x4A4A3E,110,0,0x4A4A00,1>;
using def_t = void(CPhoneInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *>, 0>;
META_END

META_BEGIN(CPhoneInfo::Initialise)
static int address;
static int global_address;
static const int id = 0x43CC60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x43CC60, 0x43CC60, 0>;
// total references count: 10en (2), 11en (2), steam (0)
using refs_t = RefList<0x4A492A,100,0,0x4A4850,1, 0x4A4E78,100,0,0x4A4B10,1, 0x4A494A,110,0,0x4A4870,1, 0x4A4E98,110,0,0x4A4B30,1>;
using def_t = void(CPhoneInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *>, 0>;
META_END

DTOR_META_BEGIN(CPhoneInfo)
static int address;
static int global_address;
static const int id = 0x43CD50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x43CD50, 0x43CD50, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x43CF21,100,2,0,1, 0x43CF21,110,2,0,1>;
using def_t = void(CPhoneInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhoneInfo *>, 0>;
META_END

META_BEGIN(PhonePutDownCB)
static int address;
static int global_address;
static const int id = 0x43CD70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x43CD70, 0x43CD70, 0>;
// total references count: 10en (2), 11en (2), steam (0)
using refs_t = RefList<0x43C6B9,100,2,0,1, 0x6D6F70,100,2,0,1, 0x43C6B9,110,2,0,1, 0x6D6F48,110,2,0,1>;
using def_t = void(CAnimBlendAssociation *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,CPed *>, 0,1>;
META_END

META_BEGIN(PhonePickUpCB)
static int address;
static int global_address;
static const int id = 0x43CDE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x43CDE0, 0x43CDE0, 0>;
// total references count: 10en (2), 11en (2), steam (0)
using refs_t = RefList<0x43C9FB,100,2,0,1, 0x6D6F74,100,2,0,1, 0x43C9FB,110,2,0,1, 0x6D6F4C,110,2,0,1>;
using def_t = void(CAnimBlendAssociation *, CPhone *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CAnimBlendAssociation *,CPhone *>, 0,1>;
META_END

template<>
struct stack_object<CPhoneInfo> : stack_object_no_default<CPhoneInfo> {
    SUPPORTED_10EN_11EN ~stack_object() {
        plugin::CallMethodDynGlobal<CPhoneInfo *>(dtor_gaddr(CPhoneInfo), reinterpret_cast<CPhoneInfo *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN inline void operator_delete<CPhoneInfo>(CPhoneInfo *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CPhoneInfo *>(dtor_gaddr(CPhoneInfo), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN inline void operator_delete_array<CPhoneInfo>(CPhoneInfo *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CPhoneInfo *>(dtor_gaddr(CPhoneInfo), &objArray[i]);
    operator delete(objData);
}

}
