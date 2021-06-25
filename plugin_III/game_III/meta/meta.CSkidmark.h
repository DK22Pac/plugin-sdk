/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CSkidmark)
static int address;
static int global_address;
static const int id = 0x5189A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5189A0, 0x518BD0, 0x518B60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51898A,100,2,0,1, 0x518BBA,110,2,0,1, 0x518B4A,120,2,0,1>;
using def_t = CSkidmark *(CSkidmark *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSkidmark *>, 0>;
META_END

template<>
struct stack_object<CSkidmark> : stack_object_no_default<CSkidmark> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CSkidmark *>(ctor_gaddr(CSkidmark), reinterpret_cast<CSkidmark *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CSkidmark *operator_new<CSkidmark>() {
    void *objData = operator new(sizeof(CSkidmark)); 
    CSkidmark *obj = reinterpret_cast<CSkidmark *>(objData);
    plugin::CallMethodDynGlobal<CSkidmark *>(ctor_gaddr(CSkidmark), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CSkidmark *operator_new_array<CSkidmark>(unsigned int objCount) {
    void *objData = operator new(sizeof(CSkidmark) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CSkidmark *objArray = reinterpret_cast<CSkidmark *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CSkidmark *>(ctor_gaddr(CSkidmark), &objArray[i]);
    return objArray;
}

}
