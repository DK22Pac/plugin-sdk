/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCutsceneShadow::DrawBorderAroundTexture)
static int address;
static int global_address;
static const int id = 0x625B60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x625B60, 0x625B40, 0x6257B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x56D863,100,0,0x56D5C0,1, 0x56D883,110,0,0x56D5E0,1, 0x56D753,120,0,0x56D4B0,1>;
using def_t = void(CCutsceneShadow *, RwRGBA const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneShadow *,RwRGBA const &>, 0,1>;
META_END

META_BEGIN(CCutsceneShadow::GetShadowRwTexture)
static int address;
static int global_address;
static const int id = 0x625B80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x625B80, 0x625B60, 0x6257D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x56D84A,100,0,0x56D5C0,1, 0x56D86A,110,0,0x56D5E0,1, 0x56D73A,120,0,0x56D4B0,1>;
using def_t = RwTexture *(CCutsceneShadow *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneShadow *>, 0>;
META_END

META_BEGIN(CCutsceneShadow::UpdateForCutscene)
static int address;
static int global_address;
static const int id = 0x625BA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x625BA0, 0x625B80, 0x6257F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4E0254,100,0,0x4E0160,1, 0x4E0274,110,0,0x4E0180,1, 0x4E0114,120,0,0x4E0020,1>;
using def_t = RwTexture *(CCutsceneShadow *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneShadow *>, 0>;
META_END

META_BEGIN(CCutsceneShadow::Update)
static int address;
static int global_address;
static const int id = 0x625BC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x625BC0, 0x625BA0, 0x625810>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x625BA3,100,0,0x625BA0,1, 0x625B83,110,0,0x625B80,1, 0x6257F3,120,0,0x6257F0,1>;
using def_t = RwRaster *(CCutsceneShadow *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneShadow *>, 0>;
META_END

META_BEGIN(CCutsceneShadow::GetShadowCamera)
static int address;
static int global_address;
static const int id = 0x625D50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x625D50, 0x625D30, 0x6259A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x56BA8F,100,0,0x56B8A0,1, 0x56BAAF,110,0,0x56B8C0,1, 0x56B97F,120,0,0x56B790,1>;
using def_t = CShadowCamera *(CCutsceneShadow *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneShadow *,int>, 0,1>;
META_END

META_BEGIN(CCutsceneShadow::IsInitialized)
static int address;
static int global_address;
static const int id = 0x625D80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x625D80, 0x625D60, 0x6259D0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4E0245,100,0,0x4E0160,1, 0x4E0411,100,0,0x4E03E0,1, 0x56D5E7,100,0,0x56D5C0,1, 0x4E0265,110,0,0x4E0180,1, 0x4E0431,110,0,0x4E0400,1, 0x56D607,110,0,0x56D5E0,1, 0x4E0105,120,0,0x4E0020,1, 0x4E02D1,120,0,0x4E02A0,1, 0x56D4D7,120,0,0x56D4B0,1>;
using def_t = bool(CCutsceneShadow *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneShadow *>, 0>;
META_END

META_BEGIN(CCutsceneShadow::SetLightProperties)
static int address;
static int global_address;
static const int id = 0x625D90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x625D90, 0x625D70, 0x6259E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x56D8DF,100,0,0x56D5C0,1, 0x56D8FF,110,0,0x56D5E0,1, 0x56D7CF,120,0,0x56D4B0,1>;
using def_t = RwFrame *(CCutsceneShadow *, float, float, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneShadow *,float,float,bool>, 0,1,2,3>;
META_END

META_BEGIN(CCutsceneShadow::Create)
static int address;
static int global_address;
static const int id = 0x625E60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x625E60, 0x625E40, 0x625AB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4E042C,100,0,0x4E03E0,1, 0x4E044C,110,0,0x4E0400,1, 0x4E02EC,120,0,0x4E02A0,1>;
using def_t = bool(CCutsceneShadow *, RwObject *, int, bool, int, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneShadow *,RwObject *,int,bool,int,bool>, 0,1,2,3,4,5>;
META_END

DTOR_META_BEGIN(CCutsceneShadow)
static int address;
static int global_address;
static const int id = 0x6263F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x6263F0, 0x6263D0, 0x626040>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4E04AA,100,0,0x4E0490,1, 0x4E0578,100,0,0x4E0540,1, 0x4E04CA,110,0,0x4E04B0,1, 0x4E0598,110,0,0x4E0560,1, 0x4E036A,120,0,0x4E0350,1, 0x4E0438,120,0,0x4E0400,1>;
using def_t = void(CCutsceneShadow *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneShadow *>, 0>;
META_END

CTOR_META_BEGIN(CCutsceneShadow)
static int address;
static int global_address;
static const int id = 0x626470;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x626470, 0x626450, 0x6260C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4E0400,100,0,0x4E03E0,1, 0x4E0420,110,0,0x4E0400,1, 0x4E02C0,120,0,0x4E02A0,1>;
using def_t = CCutsceneShadow *(CCutsceneShadow *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCutsceneShadow *>, 0>;
META_END

template<>
struct stack_object<CCutsceneShadow> : stack_object_no_default<CCutsceneShadow> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CCutsceneShadow *>(ctor_gaddr(CCutsceneShadow), reinterpret_cast<CCutsceneShadow *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CCutsceneShadow *>(dtor_gaddr(CCutsceneShadow), reinterpret_cast<CCutsceneShadow *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CCutsceneShadow *operator_new<CCutsceneShadow>() {
    void *objData = operator new(sizeof(CCutsceneShadow)); 
    CCutsceneShadow *obj = reinterpret_cast<CCutsceneShadow *>(objData);
    plugin::CallMethodDynGlobal<CCutsceneShadow *>(ctor_gaddr(CCutsceneShadow), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CCutsceneShadow *operator_new_array<CCutsceneShadow>(unsigned int objCount) {
    void *objData = operator new(sizeof(CCutsceneShadow) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CCutsceneShadow *objArray = reinterpret_cast<CCutsceneShadow *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CCutsceneShadow *>(ctor_gaddr(CCutsceneShadow), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CCutsceneShadow>(CCutsceneShadow *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CCutsceneShadow *>(dtor_gaddr(CCutsceneShadow), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CCutsceneShadow>(CCutsceneShadow *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CCutsceneShadow *>(dtor_gaddr(CCutsceneShadow), &objArray[i]);
    operator delete(objData);
}

}
