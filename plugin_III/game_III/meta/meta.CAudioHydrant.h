/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CAudioHydrant::Add)
static int address;
static int global_address;
static const int id = 0x4BC330;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BC330, 0x4BC420, 0x4BC3B0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4BC7AF,100,0,0x4BC5B0,1>;
using def_t = void(CParticleObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CParticleObject *>, 0>;
META_END

META_BEGIN(CAudioHydrant::Remove)
static int address;
static int global_address;
static const int id = 0x4BC390;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BC390, 0x4BC480, 0x4BC410>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x4BCADA,100,0,0x4BCA80,1, 0x4BF977,100,0,0x4BCA80,2, 0x4BFA22,100,0,0x4BF9F0,1>;
using def_t = void(CParticleObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CParticleObject *>, 0>;
META_END

CTOR_META_BEGIN(CAudioHydrant)
static int address;
static int global_address;
static const int id = 0x4BFE00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BFE00, 0x4BFEF0, 0x4BFE80>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4BFDE9,100,2,0,1>;
using def_t = CAudioHydrant *(CAudioHydrant *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAudioHydrant *>, 0>;
META_END

template<>
struct stack_object<CAudioHydrant> : stack_object_no_default<CAudioHydrant> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CAudioHydrant *>(ctor_gaddr(CAudioHydrant), reinterpret_cast<CAudioHydrant *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CAudioHydrant *operator_new<CAudioHydrant>() {
    void *objData = operator new(sizeof(CAudioHydrant)); 
    CAudioHydrant *obj = reinterpret_cast<CAudioHydrant *>(objData);
    plugin::CallMethodDynGlobal<CAudioHydrant *>(ctor_gaddr(CAudioHydrant), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CAudioHydrant *operator_new_array<CAudioHydrant>(unsigned int objCount) {
    void *objData = operator new(sizeof(CAudioHydrant) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CAudioHydrant *objArray = reinterpret_cast<CAudioHydrant *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CAudioHydrant *>(ctor_gaddr(CAudioHydrant), &objArray[i]);
    return objArray;
}

}
