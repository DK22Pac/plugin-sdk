/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(cAudioCollision)
static int address;
static int global_address;
static const int id = 0x579FF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x579FF0, 0x57A340, 0x57A240>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x579CFC,100,2,0,1, 0x579D19,100,2,0,1, 0x57A04C,110,2,0,1, 0x57A069,110,2,0,1, 0x579F4C,120,2,0,1, 0x579F69,120,2,0,1>;
using def_t = cAudioCollision *(cAudioCollision *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cAudioCollision *>, 0>;
META_END

template<>
struct stack_object<cAudioCollision> : stack_object_no_default<cAudioCollision> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<cAudioCollision *>(ctor_gaddr(cAudioCollision), reinterpret_cast<cAudioCollision *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline cAudioCollision *operator_new<cAudioCollision>() {
    void *objData = operator new(sizeof(cAudioCollision)); 
    cAudioCollision *obj = reinterpret_cast<cAudioCollision *>(objData);
    plugin::CallMethodDynGlobal<cAudioCollision *>(ctor_gaddr(cAudioCollision), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline cAudioCollision *operator_new_array<cAudioCollision>(unsigned int objCount) {
    void *objData = operator new(sizeof(cAudioCollision) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    cAudioCollision *objArray = reinterpret_cast<cAudioCollision *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<cAudioCollision *>(ctor_gaddr(cAudioCollision), &objArray[i]);
    return objArray;
}

}
