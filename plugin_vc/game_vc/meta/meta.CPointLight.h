/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CPointLight)
    static int address;
    static int global_address;
    static const int id = 0x567AE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x567AE0, 0x567B00, 0x5679D0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x567AA7, GAME_10EN, H_CALLBACK, 0, 1,
        0x567AC7, GAME_11EN, H_CALLBACK, 0, 1,
        0x567997, GAME_STEAM, H_CALLBACK, 0, 1>;
    using def_t = CPointLight *(CPointLight *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPointLight *>, 0>;
META_END

template<>
struct stack_object<CPointLight> : stack_object_no_default<CPointLight> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CPointLight *>(ctor_gaddr(CPointLight), reinterpret_cast<CPointLight *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CPointLight *operator_new<CPointLight>() {
    void *objData = operator new(sizeof(CPointLight)); 
    CPointLight *obj = reinterpret_cast<CPointLight *>(objData);
    plugin::CallMethodDynGlobal<CPointLight *>(ctor_gaddr(CPointLight), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CPointLight *operator_new_array<CPointLight>(unsigned int objCount) {
    void *objData = operator new(sizeof(CPointLight) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CPointLight *objArray = reinterpret_cast<CPointLight *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CPointLight *>(ctor_gaddr(CPointLight), &objArray[i]);
    return objArray;
}

}
