/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(cAudioScriptObject)
static int address;
static int global_address;
static const int id = 0x57C3C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C3C0, 0x57C710, 0x57C610>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x440B26,100,0,0x43ED30,1, 0x440B8D,100,0,0x43ED30,2, 0x558B38,100,0,0x558550,1, 0x558BB3,100,0,0x558550,2, 0x558BE5,100,0,0x558550,3, 0x57C588,100,0,0x57C560,1, 0x57C603,100,0,0x57C5F0,1, 0x440B26,110,0,0x43ED30,1, 0x440B8D,110,0,0x43ED30,2, 0x558C68,110,0,0x558680,1, 0x558CE3,110,0,0x558680,2, 0x558D15,110,0,0x558680,3, 0x57C8D8,110,0,0x57C8B0,1, 0x57C953,110,0,0x57C940,1, 0x440B26,120,0,0x43ED30,1, 0x440B8D,120,0,0x43ED30,2, 0x558C18,120,0,0x558630,1, 0x558C93,120,0,0x558630,2, 0x558CC5,120,0,0x558630,3, 0x57C7D8,120,0,0x57C7B0,1, 0x57C853,120,0,0x57C840,1>;
using def_t = cAudioScriptObject *(cAudioScriptObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cAudioScriptObject *>, 0>;
META_END

DTOR_META_BEGIN(cAudioScriptObject)
static int address;
static int global_address;
static const int id = 0x57C3D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C3D0, 0x57C720, 0x57C620>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x440C2A,100,0,0x43ED30,1, 0x57A871,100,0,0x57A830,1, 0x57AB77,100,0,0x57AA60,1, 0x440C2A,110,0,0x43ED30,1, 0x57ABC1,110,0,0x57AB80,1, 0x57AEC7,110,0,0x57ADB0,1, 0x440C2A,120,0,0x43ED30,1, 0x57AAC1,120,0,0x57AA80,1, 0x57ADC7,120,0,0x57ACB0,1>;
using def_t = void(cAudioScriptObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cAudioScriptObject *>, 0>;
META_END

OP_NEW_META_BEGIN(cAudioScriptObject)
static int address;
static int global_address;
static const int id = 0x57C3E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C3E0, 0x57C730, 0x57C630>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x440B1A,100,0,0x43ED30,1, 0x440B7F,100,0,0x43ED30,2, 0x558B2C,100,0,0x558550,1, 0x558BA7,100,0,0x558550,2, 0x558BD9,100,0,0x558550,3, 0x57C5F7,100,0,0x57C5F0,1, 0x440B1A,110,0,0x43ED30,1, 0x440B7F,110,0,0x43ED30,2, 0x558C5C,110,0,0x558680,1, 0x558CD7,110,0,0x558680,2, 0x558D09,110,0,0x558680,3, 0x57C947,110,0,0x57C940,1, 0x440B1A,120,0,0x43ED30,1, 0x440B7F,120,0,0x43ED30,2, 0x558C0C,120,0,0x558630,1, 0x558C87,120,0,0x558630,2, 0x558CB9,120,0,0x558630,3, 0x57C847,120,0,0x57C840,1>;
using def_t = void *(unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

OP_NEW_META_BEGIN_OVERLOADED(cAudioScriptObject, void *(unsigned int, int))
static int address;
static int global_address;
static const int id = 0x57C3F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C3F0, 0x57C740, 0x57C640>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57C579,100,0,0x57C560,1, 0x57C8C9,110,0,0x57C8B0,1, 0x57C7C9,120,0,0x57C7B0,1>;
using def_t = void *(unsigned int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,int>, 0,1>;
META_END

OP_DELETE_META_BEGIN(cAudioScriptObject)
static int address;
static int global_address;
static const int id = 0x57C410;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C410, 0x57C760, 0x57C660>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x440C30,100,0,0x43ED30,1, 0x57A877,100,0,0x57A830,1, 0x57AB7D,100,0,0x57AA60,1, 0x440C30,110,0,0x43ED30,1, 0x57ABC7,110,0,0x57AB80,1, 0x57AECD,110,0,0x57ADB0,1, 0x440C30,120,0,0x43ED30,1, 0x57AAC7,120,0,0x57AA80,1, 0x57ADCD,120,0,0x57ACB0,1>;
using def_t = void(void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *>, 0>;
META_END

META_BEGIN(cAudioScriptObject::Reset)
static int address;
static int global_address;
static const int id = 0x57C430;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C430, 0x57C780, 0x57C680>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x57C3C3,100,0,0x57C3C0,1, 0x57C3D3,100,0,0x57C3D0,1, 0x57C713,110,0,0x57C710,1, 0x57C723,110,0,0x57C720,1, 0x57C613,120,0,0x57C610,1, 0x57C623,120,0,0x57C620,1>;
using def_t = void(cAudioScriptObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cAudioScriptObject *>, 0>;
META_END

META_BEGIN(cAudioScriptObject::SaveAllAudioScriptObjects)
static int address;
static int global_address;
static const int id = 0x57C460;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C460, 0x57C7B0, 0x57C6B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5905C2,100,0,0x58F8D0,1, 0x5908B2,110,0,0x58FBC0,1, 0x5907A2,120,0,0x58FAB0,1>;
using def_t = void(unsigned char *, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int *>, 0,1>;
META_END

META_BEGIN(cAudioScriptObject::LoadAllAudioScriptObjects)
static int address;
static int global_address;
static const int id = 0x57C560;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C560, 0x57C8B0, 0x57C7B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x591636,100,0,0x590A00,1, 0x5918F6,110,0,0x590CC0,1, 0x5917E6,120,0,0x590BB0,1>;
using def_t = void(unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int>, 0,1>;
META_END

META_BEGIN(PlayOneShotScriptObject)
static int address;
static int global_address;
static const int id = 0x57C5F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C5F0, 0x57C940, 0x57C840>;
// total references count: 10en (21), 11en (21), steam (21)
using refs_t = RefList<0x42F99C,100,0,0x42F7A0,1, 0x42FC44,100,0,0x42F7A0,2, 0x4BBD33,100,0,0x4BB240,1, 0x5021E6,100,0,0x502080,1, 0x5043F1,100,0,0x503F10,1, 0x50450C,100,0,0x503F10,2, 0x50465B,100,0,0x504630,1, 0x50471B,100,0,0x504670,1, 0x50E866,100,0,0x50DCF0,1, 0x50E91D,100,0,0x50DCF0,2, 0x560520,100,0,0x55F950,1, 0x560578,100,0,0x55F950,2, 0x560584,100,0,0x55F950,3, 0x56175D,100,0,0x560620,1, 0x5617BF,100,0,0x560620,2, 0x5617D2,100,0,0x560620,3, 0x562D70,100,0,0x5624D0,1, 0x562DC8,100,0,0x5624D0,2, 0x562DDB,100,0,0x5624D0,3, 0x563E37,100,0,0x563B00,1, 0x563F85,100,0,0x563B00,2, 0x42F99C,110,0,0x42F7A0,1, 0x42FC44,110,0,0x42F7A0,2, 0x4BBE23,110,0,0x4BB330,1, 0x5022C6,110,0,0x502160,1, 0x5044D1,110,0,0x503FF0,1, 0x5045EC,110,0,0x503FF0,2, 0x50473B,110,0,0x504710,1, 0x5047FB,110,0,0x504750,1, 0x50EA56,110,0,0x50DEE0,1, 0x50EB0D,110,0,0x50DEE0,2, 0x560650,110,0,0x55FA80,1, 0x5606A8,110,0,0x55FA80,2, 0x5606B4,110,0,0x55FA80,3, 0x56188D,110,0,0x560750,1, 0x5618EF,110,0,0x560750,2, 0x561902,110,0,0x560750,3, 0x562EA0,110,0,0x562600,1, 0x562EF8,110,0,0x562600,2, 0x562F0B,110,0,0x562600,3, 0x563F67,110,0,0x563C30,1, 0x5640B5,110,0,0x563C30,2, 0x42F99C,120,0,0x42F7A0,1, 0x42FC44,120,0,0x42F7A0,2, 0x4BBDB3,120,0,0x4BB2C0,1, 0x502256,120,0,0x5020F0,1, 0x504461,120,0,0x503F80,1, 0x50457C,120,0,0x503F80,2, 0x5046CB,120,0,0x5046A0,1, 0x50478B,120,0,0x5046E0,1, 0x50E9E6,120,0,0x50DE70,1, 0x50EA9D,120,0,0x50DE70,2, 0x560600,120,0,0x55FA30,1, 0x560658,120,0,0x55FA30,2, 0x560664,120,0,0x55FA30,3, 0x56183D,120,0,0x560700,1, 0x56189F,120,0,0x560700,2, 0x5618B2,120,0,0x560700,3, 0x562E50,120,0,0x5625B0,1, 0x562EA8,120,0,0x5625B0,2, 0x562EBB,120,0,0x5625B0,3, 0x563F17,120,0,0x563BE0,1, 0x564065,120,0,0x563BE0,2>;
using def_t = void(unsigned char, CVector const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char,CVector const &>, 0,1>;
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
