/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CTrainCamNode)
static int address;
static int global_address;
static const int id = 0x4732C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4732C0, 0x4732C0, 0x4732C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4730E3,100,2,0,1, 0x4730C3,110,2,0,1, 0x4730C3,120,2,0,1>;
using def_t = CTrainCamNode *(CTrainCamNode *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrainCamNode *>, 0>;
META_END

template<>
struct stack_object<CTrainCamNode> : stack_object_no_default<CTrainCamNode> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CTrainCamNode *>(ctor_gaddr(CTrainCamNode), reinterpret_cast<CTrainCamNode *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CTrainCamNode *operator_new<CTrainCamNode>() {
    void *objData = operator new(sizeof(CTrainCamNode)); 
    CTrainCamNode *obj = reinterpret_cast<CTrainCamNode *>(objData);
    plugin::CallMethodDynGlobal<CTrainCamNode *>(ctor_gaddr(CTrainCamNode), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CTrainCamNode *operator_new_array<CTrainCamNode>(unsigned int objCount) {
    void *objData = operator new(sizeof(CTrainCamNode) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CTrainCamNode *objArray = reinterpret_cast<CTrainCamNode *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CTrainCamNode *>(ctor_gaddr(CTrainCamNode), &objArray[i]);
    return objArray;
}

}
