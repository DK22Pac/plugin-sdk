/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CAnimBlendClumpData)
static int address;
static int global_address;
static const int id = 0x401880;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401880, 0x401880, 0x401880>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4052AE,100,0,0x4052A0,1, 0x4052AE,110,0,0x4052A0,1, 0x4052AE,120,0,0x4052A0,1>;
using def_t = CAnimBlendClumpData *(CAnimBlendClumpData *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendClumpData *>, 0>;
META_END

DTOR_META_BEGIN(CAnimBlendClumpData)
static int address;
static int global_address;
static const int id = 0x4018B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4018B0, 0x4018B0, 0x4018B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x405261,100,0,0x405240,1, 0x405261,110,0,0x405240,1, 0x405261,120,0,0x405240,1>;
using def_t = void(CAnimBlendClumpData *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendClumpData *>, 0>;
META_END

META_BEGIN(CAnimBlendClumpData::SetNumberOfBones)
static int address;
static int global_address;
static const int id = 0x4018F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4018F0, 0x4018F0, 0x4018F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4054BE,100,0,0x405480,1, 0x4054BE,110,0,0x405480,1, 0x4054BE,120,0,0x405480,1>;
using def_t = void(CAnimBlendClumpData *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendClumpData *,int>, 0,1>;
META_END

META_BEGIN(CAnimBlendClumpData::ForAllFrames)
static int address;
static int global_address;
static const int id = 0x401930;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x401930, 0x401930, 0x401930>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x402582,100,0,0x4024B0,1, 0x405450,100,0,0x405430,1, 0x405476,100,0,0x405460,1, 0x4054E6,100,0,0x405480,1, 0x402582,110,0,0x4024B0,1, 0x405450,110,0,0x405430,1, 0x405476,110,0,0x405460,1, 0x4054E6,110,0,0x405480,1, 0x402582,120,0,0x4024B0,1, 0x405450,120,0,0x405430,1, 0x405476,120,0,0x405460,1, 0x4054E6,120,0,0x405480,1>;
using def_t = void(CAnimBlendClumpData *, void(*)(AnimBlendFrameData *, void *), void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAnimBlendClumpData *,void(*)(AnimBlendFrameData *, void *),void *>, 0,1,2>;
META_END

template<>
struct stack_object<CAnimBlendClumpData> : stack_object_no_default<CAnimBlendClumpData> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CAnimBlendClumpData *>(ctor_gaddr(CAnimBlendClumpData), reinterpret_cast<CAnimBlendClumpData *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CAnimBlendClumpData *>(dtor_gaddr(CAnimBlendClumpData), reinterpret_cast<CAnimBlendClumpData *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CAnimBlendClumpData *operator_new<CAnimBlendClumpData>() {
    void *objData = operator new(sizeof(CAnimBlendClumpData)); 
    CAnimBlendClumpData *obj = reinterpret_cast<CAnimBlendClumpData *>(objData);
    plugin::CallMethodDynGlobal<CAnimBlendClumpData *>(ctor_gaddr(CAnimBlendClumpData), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CAnimBlendClumpData *operator_new_array<CAnimBlendClumpData>(unsigned int objCount) {
    void *objData = operator new(sizeof(CAnimBlendClumpData) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CAnimBlendClumpData *objArray = reinterpret_cast<CAnimBlendClumpData *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CAnimBlendClumpData *>(ctor_gaddr(CAnimBlendClumpData), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CAnimBlendClumpData>(CAnimBlendClumpData *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CAnimBlendClumpData *>(dtor_gaddr(CAnimBlendClumpData), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CAnimBlendClumpData>(CAnimBlendClumpData *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CAnimBlendClumpData *>(dtor_gaddr(CAnimBlendClumpData), &objArray[i]);
    operator delete(objData);
}

}
