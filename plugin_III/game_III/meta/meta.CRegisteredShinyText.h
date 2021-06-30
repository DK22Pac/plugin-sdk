/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CRegisteredShinyText)
static int address;
static int global_address;
static const int id = 0x51C330;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51C330, 0x51C560, 0x51C4F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51C27F,100,2,0,1, 0x51C4AF,110,2,0,1, 0x51C43F,120,2,0,1>;
using def_t = CRegisteredShinyText *(CRegisteredShinyText *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CRegisteredShinyText *>, 0>;
META_END

template<>
struct stack_object<CRegisteredShinyText> : stack_object_no_default<CRegisteredShinyText> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CRegisteredShinyText *>(ctor_gaddr(CRegisteredShinyText), reinterpret_cast<CRegisteredShinyText *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CRegisteredShinyText *operator_new<CRegisteredShinyText>() {
    void *objData = operator new(sizeof(CRegisteredShinyText)); 
    CRegisteredShinyText *obj = reinterpret_cast<CRegisteredShinyText *>(objData);
    plugin::CallMethodDynGlobal<CRegisteredShinyText *>(ctor_gaddr(CRegisteredShinyText), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CRegisteredShinyText *operator_new_array<CRegisteredShinyText>(unsigned int objCount) {
    void *objData = operator new(sizeof(CRegisteredShinyText) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CRegisteredShinyText *objArray = reinterpret_cast<CRegisteredShinyText *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CRegisteredShinyText *>(ctor_gaddr(CRegisteredShinyText), &objArray[i]);
    return objArray;
}

}
