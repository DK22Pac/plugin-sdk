/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPacManPickup::Update)
static int address;
static int global_address;
static const int id = 0x4331B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4331B0, 0x4331B0, 0x4331B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x432AA0,100,0,0x432800,1, 0x432AA0,110,0,0x432800,1, 0x432AA0,120,0,0x432800,1>;
using def_t = void(CPacManPickup *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPacManPickup *>, 0>;
META_END

CTOR_META_BEGIN(CPacManPickup)
static int address;
static int global_address;
static const int id = 0x4340D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4340D0, 0x4340D0, 0x4340D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4340B5,100,2,0,1, 0x4340B5,110,2,0,1, 0x4340B5,120,2,0,1>;
using def_t = CPacManPickup *(CPacManPickup *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPacManPickup *>, 0>;
META_END

template<>
struct stack_object<CPacManPickup> : stack_object_no_default<CPacManPickup> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CPacManPickup *>(ctor_gaddr(CPacManPickup), reinterpret_cast<CPacManPickup *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CPacManPickup *operator_new<CPacManPickup>() {
    void *objData = operator new(sizeof(CPacManPickup)); 
    CPacManPickup *obj = reinterpret_cast<CPacManPickup *>(objData);
    plugin::CallMethodDynGlobal<CPacManPickup *>(ctor_gaddr(CPacManPickup), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CPacManPickup *operator_new_array<CPacManPickup>(unsigned int objCount) {
    void *objData = operator new(sizeof(CPacManPickup) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CPacManPickup *objArray = reinterpret_cast<CPacManPickup *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CPacManPickup *>(ctor_gaddr(CPacManPickup), &objArray[i]);
    return objArray;
}

}
