/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CBrightLight)
static int address;
static int global_address;
static const int id = 0x51C340;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51C340, 0x51C570, 0x51C500>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x51C267,100,2,0,1>;
using def_t = CBrightLight *(CBrightLight *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBrightLight *>, 0>;
META_END

template<>
struct stack_object<CBrightLight> : stack_object_no_default<CBrightLight> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CBrightLight *>(ctor_gaddr(CBrightLight), reinterpret_cast<CBrightLight *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CBrightLight *operator_new<CBrightLight>() {
    void *objData = operator new(sizeof(CBrightLight)); 
    CBrightLight *obj = reinterpret_cast<CBrightLight *>(objData);
    plugin::CallMethodDynGlobal<CBrightLight *>(ctor_gaddr(CBrightLight), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CBrightLight *operator_new_array<CBrightLight>(unsigned int objCount) {
    void *objData = operator new(sizeof(CBrightLight) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CBrightLight *objArray = reinterpret_cast<CBrightLight *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CBrightLight *>(ctor_gaddr(CBrightLight), &objArray[i]);
    return objArray;
}

}
