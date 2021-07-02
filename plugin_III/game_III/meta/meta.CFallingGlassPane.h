/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CFallingGlassPane::Update)
static int address;
static int global_address;
static const int id = 0x502080;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x502080, 0x502160, 0x5020F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50206B,100,0,0x502050,1, 0x50214B,110,0,0x502130,1, 0x5020DB,120,0,0x5020C0,1>;
using def_t = void(CFallingGlassPane *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFallingGlassPane *>, 0>;
META_END

META_BEGIN(CFallingGlassPane::Render)
static int address;
static int global_address;
static const int id = 0x5024C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5024C0, 0x5025A0, 0x502530>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50240D,100,0,0x502350,1, 0x5024ED,110,0,0x502430,1, 0x50247D,120,0,0x5023C0,1>;
using def_t = void(CFallingGlassPane *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFallingGlassPane *>, 0>;
META_END

DTOR_META_BEGIN(CFallingGlassPane)
static int address;
static int global_address;
static const int id = 0x5048D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5048D0, 0x5049B0, 0x504940>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x504885,100,2,0,1, 0x5048B5,100,2,0,1, 0x504965,110,2,0,1, 0x504995,110,2,0,1, 0x5048F5,120,2,0,1, 0x504925,120,2,0,1>;
using def_t = void(CFallingGlassPane *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFallingGlassPane *>, 0>;
META_END

CTOR_META_BEGIN(CFallingGlassPane)
static int address;
static int global_address;
static const int id = 0x5048E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5048E0, 0x5049C0, 0x504950>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50488A,100,2,0,1, 0x50496A,110,2,0,1, 0x5048FA,120,2,0,1>;
using def_t = CFallingGlassPane *(CFallingGlassPane *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFallingGlassPane *>, 0>;
META_END

template<>
struct stack_object<CFallingGlassPane> : stack_object_no_default<CFallingGlassPane> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CFallingGlassPane *>(ctor_gaddr(CFallingGlassPane), reinterpret_cast<CFallingGlassPane *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CFallingGlassPane *>(dtor_gaddr(CFallingGlassPane), reinterpret_cast<CFallingGlassPane *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CFallingGlassPane *operator_new<CFallingGlassPane>() {
    void *objData = operator new(sizeof(CFallingGlassPane)); 
    CFallingGlassPane *obj = reinterpret_cast<CFallingGlassPane *>(objData);
    plugin::CallMethodDynGlobal<CFallingGlassPane *>(ctor_gaddr(CFallingGlassPane), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CFallingGlassPane *operator_new_array<CFallingGlassPane>(unsigned int objCount) {
    void *objData = operator new(sizeof(CFallingGlassPane) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CFallingGlassPane *objArray = reinterpret_cast<CFallingGlassPane *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CFallingGlassPane *>(ctor_gaddr(CFallingGlassPane), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CFallingGlassPane>(CFallingGlassPane *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CFallingGlassPane *>(dtor_gaddr(CFallingGlassPane), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CFallingGlassPane>(CFallingGlassPane *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CFallingGlassPane *>(dtor_gaddr(CFallingGlassPane), &objArray[i]);
    operator delete(objData);
}

}
