/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CTempNode)
static int address;
static int global_address;
static const int id = 0x429BF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x429BF0, 0x429BF0, 0x429BF0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x429675,100,2,0,1, 0x429675,110,2,0,1, 0x429675,120,2,0,1>;
using def_t = CTempNode *(CTempNode *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTempNode *>, 0>;
META_END

template<>
struct stack_object<CTempNode> : stack_object_no_default<CTempNode> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CTempNode *>(ctor_gaddr(CTempNode), reinterpret_cast<CTempNode *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CTempNode *operator_new<CTempNode>() {
    void *objData = operator new(sizeof(CTempNode)); 
    CTempNode *obj = reinterpret_cast<CTempNode *>(objData);
    plugin::CallMethodDynGlobal<CTempNode *>(ctor_gaddr(CTempNode), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CTempNode *operator_new_array<CTempNode>(unsigned int objCount) {
    void *objData = operator new(sizeof(CTempNode) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CTempNode *objArray = reinterpret_cast<CTempNode *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CTempNode *>(ctor_gaddr(CTempNode), &objArray[i]);
    return objArray;
}

}
