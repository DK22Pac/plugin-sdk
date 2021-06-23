/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CColPoint)
static int address;
static int global_address;
static const int id = 0x454310;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x454310, 0x454310, 0x454310>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x454081,100,2,0,1, 0x49B63C,100,2,0,1, 0x49DA25,100,2,0,1, 0x49E7AE,100,2,0,1, 0x4B5D0A,100,2,0,1, 0x4D81BE,100,2,0,1, 0x4F4857,100,2,0,1, 0x52C731,100,2,0,1, 0x53E367,100,2,0,1, 0x454081,110,2,0,1, 0x49B72C,110,2,0,1, 0x49DB15,110,2,0,1, 0x49E89E,110,2,0,1, 0x4B5DFA,110,2,0,1, 0x4D825E,110,2,0,1, 0x4F4907,110,2,0,1, 0x52C971,110,2,0,1, 0x53E5A7,110,2,0,1, 0x454081,120,2,0,1, 0x49B6BC,120,2,0,1, 0x49DAA5,120,2,0,1, 0x49E82E,120,2,0,1, 0x4B5D8A,120,2,0,1, 0x4D81EE,120,2,0,1, 0x4F4897,120,2,0,1, 0x52C901,120,2,0,1, 0x53E557,120,2,0,1>;
using def_t = CColPoint *(CColPoint *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColPoint *>, 0>;
META_END

template<>
struct stack_object<CColPoint> : stack_object_no_default<CColPoint> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CColPoint *>(ctor_gaddr(CColPoint), reinterpret_cast<CColPoint *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CColPoint *operator_new<CColPoint>() {
    void *objData = operator new(sizeof(CColPoint)); 
    CColPoint *obj = reinterpret_cast<CColPoint *>(objData);
    plugin::CallMethodDynGlobal<CColPoint *>(ctor_gaddr(CColPoint), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CColPoint *operator_new_array<CColPoint>(unsigned int objCount) {
    void *objData = operator new(sizeof(CColPoint) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CColPoint *objArray = reinterpret_cast<CColPoint *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CColPoint *>(ctor_gaddr(CColPoint), &objArray[i]);
    return objArray;
}

}
