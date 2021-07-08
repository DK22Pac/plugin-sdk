/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CAnimBlendSequence)
static int address;
static int global_address;
static const int id = 0x4022D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4022D0, 0x4022D0, 0x4022D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x403D2F,100,2,0,1, 0x403D2F,110,2,0,1, 0x403D2F,120,2,0,1>;
using def_t = CAnimBlendSequence *(CAnimBlendSequence *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendSequence *>, 0>;
META_END

DTOR_META_BEGIN(CAnimBlendSequence)
static int address;
static int global_address;
static const int id = 0x402300;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x402300, 0x402300, 0x402300>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x402493,100,0,0x402470,1, 0x401ABB,100,2,0,1, 0x402484,100,2,0,1, 0x403D2A,100,2,0,1, 0x402493,110,0,0x402470,1, 0x401ABB,110,2,0,1, 0x402484,110,2,0,1, 0x403D2A,110,2,0,1, 0x402493,120,0,0x402470,1, 0x401ABB,120,2,0,1, 0x402484,120,2,0,1, 0x403D2A,120,2,0,1>;
using def_t = void(CAnimBlendSequence *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendSequence *>, 0>;
META_END

META_BEGIN(CAnimBlendSequence::SetName)
static int address;
static int global_address;
static const int id = 0x402330;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x402330, 0x402330, 0x402330>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x403DF3,100,0,0x403A40,1, 0x403DF3,110,0,0x403A40,1, 0x403DF3,120,0,0x403A40,1>;
using def_t = void(CAnimBlendSequence *, char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendSequence *,char const *>, 0,1>;
META_END

META_BEGIN(CAnimBlendSequence::SetNumFrames)
static int address;
static int global_address;
static const int id = 0x402350;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x402350, 0x402350, 0x402350>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x403E5F,100,0,0x403A40,1, 0x403EDA,100,0,0x403A40,2, 0x403E5F,110,0,0x403A40,1, 0x403EDA,110,0,0x403A40,2, 0x403E5F,120,0,0x403A40,1, 0x403EDA,120,0,0x403A40,2>;
using def_t = void(CAnimBlendSequence *, int, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendSequence *,int,bool>, 0,1,2>;
META_END

META_BEGIN(CAnimBlendSequence::RemoveQuaternionFlips)
static int address;
static int global_address;
static const int id = 0x4023A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4023A0, 0x4023A0, 0x4023A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x401A95,100,0,0x401A80,1, 0x401A95,110,0,0x401A80,1, 0x401A95,120,0,0x401A80,1>;
using def_t = void(CAnimBlendSequence *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendSequence *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CAnimBlendSequence)
static int address;
static int global_address;
static const int id = 0x402470;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x402470, 0x402470, 0x402470>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5EA060,100,2,0x5EA060,1, 0x5EA060,110,2,0x5EA060,1, 0x5F7060,120,2,0x5F7060,1>;
using def_t = void(CAnimBlendSequence *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendSequence *,int>, 0,1>;
META_END

template<>
struct stack_object<CAnimBlendSequence> : stack_object_no_default<CAnimBlendSequence> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CAnimBlendSequence *>(ctor_gaddr(CAnimBlendSequence), reinterpret_cast<CAnimBlendSequence *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CAnimBlendSequence *>(dtor_gaddr(CAnimBlendSequence), reinterpret_cast<CAnimBlendSequence *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CAnimBlendSequence *operator_new<CAnimBlendSequence>() {
    void *objData = operator new(sizeof(CAnimBlendSequence)); 
    CAnimBlendSequence *obj = reinterpret_cast<CAnimBlendSequence *>(objData);
    plugin::CallMethodDynGlobal<CAnimBlendSequence *>(ctor_gaddr(CAnimBlendSequence), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CAnimBlendSequence *operator_new_array<CAnimBlendSequence>(unsigned int objCount) {
    void *objData = operator new(sizeof(CAnimBlendSequence) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CAnimBlendSequence *objArray = reinterpret_cast<CAnimBlendSequence *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CAnimBlendSequence *>(ctor_gaddr(CAnimBlendSequence), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CAnimBlendSequence>(CAnimBlendSequence *obj) {
    if (obj == nullptr) return;
    plugin::CallVirtualMethod<0, CAnimBlendSequence *, int>(obj, 1);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CAnimBlendSequence>(CAnimBlendSequence *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallVirtualMethod<0, CAnimBlendSequence *, int>(&objArray[i], 1);
    operator delete(objData);
}

}
