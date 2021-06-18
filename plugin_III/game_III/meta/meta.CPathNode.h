/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CPathNode)
static int address;
static int global_address;
static const int id = 0x42E670;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42E670, 0x42E670, 0x42E670>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x42E63A,100,2,0,1, 0x42E655,100,2,0,1, 0x42E63A,110,2,0,1, 0x42E655,110,2,0,1, 0x42E63A,120,2,0,1, 0x42E655,120,2,0,1>;
using def_t = CPathNode *(CPathNode *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathNode *>, 0>;
META_END

template<>
struct stack_object<CPathNode> : stack_object_no_default<CPathNode> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CPathNode *>(ctor_gaddr(CPathNode), reinterpret_cast<CPathNode *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CPathNode *operator_new<CPathNode>() {
    void *objData = operator new(sizeof(CPathNode)); 
    CPathNode *obj = reinterpret_cast<CPathNode *>(objData);
    plugin::CallMethodDynGlobal<CPathNode *>(ctor_gaddr(CPathNode), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CPathNode *operator_new_array<CPathNode>(unsigned int objCount) {
    void *objData = operator new(sizeof(CPathNode) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CPathNode *objArray = reinterpret_cast<CPathNode *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CPathNode *>(ctor_gaddr(CPathNode), &objArray[i]);
    return objArray;
}

}
