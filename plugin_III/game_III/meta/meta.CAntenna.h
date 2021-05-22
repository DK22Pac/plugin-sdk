/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CAntenna::Update)
static int address;
static int global_address;
static const int id = 0x4F6830;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6830, 0x4F68E0, 0x4F6870>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F6724,100,0,0x4F66C0,1, 0x4F67D4,110,0,0x4F6770,1, 0x4F6764,120,0,0x4F6700,1>;
using def_t = void(CAntenna *, CVector, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAntenna *,CVector,CVector>, 0,1,2>;
META_END

CTOR_META_BEGIN(CAntenna)
static int address;
static int global_address;
static const int id = 0x4F6A10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6A10, 0x4F6AC0, 0x4F6A50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F69FA,100,2,0,1, 0x4F6AAA,110,2,0,1, 0x4F6A3A,120,2,0,1>;
using def_t = CAntenna *(CAntenna *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAntenna *>, 0>;
META_END

template<>
struct stack_object<CAntenna> : stack_object_no_default<CAntenna> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CAntenna *>(ctor_gaddr(CAntenna), reinterpret_cast<CAntenna *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CAntenna *operator_new<CAntenna>() {
    void *objData = operator new(sizeof(CAntenna)); 
    CAntenna *obj = reinterpret_cast<CAntenna *>(objData);
    plugin::CallMethodDynGlobal<CAntenna *>(ctor_gaddr(CAntenna), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CAntenna *operator_new_array<CAntenna>(unsigned int objCount) {
    void *objData = operator new(sizeof(CAntenna) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CAntenna *objArray = reinterpret_cast<CAntenna *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CAntenna *>(ctor_gaddr(CAntenna), &objArray[i]);
    return objArray;
}

}
