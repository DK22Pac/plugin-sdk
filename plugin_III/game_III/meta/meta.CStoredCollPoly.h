/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CStoredCollPoly)
static int address;
static int global_address;
static const int id = 0x551030;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x551030, 0x551170, 0x551120>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x550C03,100,2,0,1, 0x550D43,110,2,0,1, 0x550CF3,120,2,0,1>;
using def_t = CStoredCollPoly *(CStoredCollPoly *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CStoredCollPoly *>, 0>;
META_END

template<>
struct stack_object<CStoredCollPoly> : stack_object_no_default<CStoredCollPoly> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CStoredCollPoly *>(ctor_gaddr(CStoredCollPoly), reinterpret_cast<CStoredCollPoly *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CStoredCollPoly *operator_new<CStoredCollPoly>() {
    void *objData = operator new(sizeof(CStoredCollPoly)); 
    CStoredCollPoly *obj = reinterpret_cast<CStoredCollPoly *>(objData);
    plugin::CallMethodDynGlobal<CStoredCollPoly *>(ctor_gaddr(CStoredCollPoly), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CStoredCollPoly *operator_new_array<CStoredCollPoly>(unsigned int objCount) {
    void *objData = operator new(sizeof(CStoredCollPoly) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CStoredCollPoly *objArray = reinterpret_cast<CStoredCollPoly *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CStoredCollPoly *>(ctor_gaddr(CStoredCollPoly), &objArray[i]);
    return objArray;
}

}
