/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CRegisteredMotionBlurStreak::Update)
static int address;
static int global_address;
static const int id = 0x519580;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x519580, 0x5197B0, 0x519740>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51937B,100,0,0x519360,1, 0x5195AB,110,0,0x519590,1, 0x51953B,120,0,0x519520,1>;
using def_t = void(CRegisteredMotionBlurStreak *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CRegisteredMotionBlurStreak *>, 0>;
META_END

META_BEGIN(CRegisteredMotionBlurStreak::Render)
static int address;
static int global_address;
static const int id = 0x519600;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x519600, 0x519830, 0x5197C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51941B,100,0,0x519390,1, 0x51964B,110,0,0x5195C0,1, 0x5195DB,120,0,0x519550,1>;
using def_t = void(CRegisteredMotionBlurStreak *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CRegisteredMotionBlurStreak *>, 0>;
META_END

CTOR_META_BEGIN(CRegisteredMotionBlurStreak)
static int address;
static int global_address;
static const int id = 0x51C350;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51C350, 0x51C580, 0x51C510>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51C24F,100,2,0,1, 0x51C47F,110,2,0,1, 0x51C40F,120,2,0,1>;
using def_t = CRegisteredMotionBlurStreak *(CRegisteredMotionBlurStreak *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CRegisteredMotionBlurStreak *>, 0>;
META_END

template<>
struct stack_object<CRegisteredMotionBlurStreak> : stack_object_no_default<CRegisteredMotionBlurStreak> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CRegisteredMotionBlurStreak *>(ctor_gaddr(CRegisteredMotionBlurStreak), reinterpret_cast<CRegisteredMotionBlurStreak *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CRegisteredMotionBlurStreak *operator_new<CRegisteredMotionBlurStreak>() {
    void *objData = operator new(sizeof(CRegisteredMotionBlurStreak)); 
    CRegisteredMotionBlurStreak *obj = reinterpret_cast<CRegisteredMotionBlurStreak *>(objData);
    plugin::CallMethodDynGlobal<CRegisteredMotionBlurStreak *>(ctor_gaddr(CRegisteredMotionBlurStreak), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CRegisteredMotionBlurStreak *operator_new_array<CRegisteredMotionBlurStreak>(unsigned int objCount) {
    void *objData = operator new(sizeof(CRegisteredMotionBlurStreak) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CRegisteredMotionBlurStreak *objArray = reinterpret_cast<CRegisteredMotionBlurStreak *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CRegisteredMotionBlurStreak *>(ctor_gaddr(CRegisteredMotionBlurStreak), &objArray[i]);
    return objArray;
}

}
