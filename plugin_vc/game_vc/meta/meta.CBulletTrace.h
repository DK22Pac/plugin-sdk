/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CBulletTrace)
static int address;
static int global_address;
static const int id = 0x575190;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x575190, 0x5751B0, 0x575080>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x575027,100,2,0,1, 0x575047,110,2,0,1, 0x574F17,120,2,0,1>;
using def_t = CBulletTrace *(CBulletTrace *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBulletTrace *>, 0>;
META_END

template<>
struct stack_object<CBulletTrace> : stack_object_no_default<CBulletTrace> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CBulletTrace *>(ctor_gaddr(CBulletTrace), reinterpret_cast<CBulletTrace *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CBulletTrace *operator_new<CBulletTrace>() {
    void *objData = operator new(sizeof(CBulletTrace)); 
    CBulletTrace *obj = reinterpret_cast<CBulletTrace *>(objData);
    plugin::CallMethodDynGlobal<CBulletTrace *>(ctor_gaddr(CBulletTrace), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CBulletTrace *operator_new_array<CBulletTrace>(unsigned int objCount) {
    void *objData = operator new(sizeof(CBulletTrace) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CBulletTrace *objArray = reinterpret_cast<CBulletTrace *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CBulletTrace *>(ctor_gaddr(CBulletTrace), &objArray[i]);
    return objArray;
}

}
