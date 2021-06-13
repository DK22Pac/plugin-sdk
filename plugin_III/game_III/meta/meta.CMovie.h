/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CMovie)
static int address;
static int global_address;
static const int id = 0x588480;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x588480, 0x5887C0, 0x5886B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x588467,100,2,0,1, 0x5887A7,110,2,0,1, 0x588697,120,2,0,1>;
using def_t = CMovie *(CMovie *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMovie *>, 0>;
META_END

template<>
struct stack_object<CMovie> : stack_object_no_default<CMovie> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CMovie *>(ctor_gaddr(CMovie), reinterpret_cast<CMovie *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CMovie *operator_new<CMovie>() {
    void *objData = operator new(sizeof(CMovie)); 
    CMovie *obj = reinterpret_cast<CMovie *>(objData);
    plugin::CallMethodDynGlobal<CMovie *>(ctor_gaddr(CMovie), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CMovie *operator_new_array<CMovie>(unsigned int objCount) {
    void *objData = operator new(sizeof(CMovie) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CMovie *objArray = reinterpret_cast<CMovie *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CMovie *>(ctor_gaddr(CMovie), &objArray[i]);
    return objArray;
}

}
