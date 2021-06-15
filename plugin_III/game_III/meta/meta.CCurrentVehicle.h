/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CCurrentVehicle)
static int address;
static int global_address;
static const int id = 0x4AD5E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AD5E0, 0x4AD6D0, 0x4AD660>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4AD6CF,100,0,0x4AD6C0,1, 0x4AD7BF,110,0,0x4AD7B0,1, 0x4AD74F,120,0,0x4AD740,1>;
using def_t = CCurrentVehicle *(CCurrentVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCurrentVehicle *>, 0>;
META_END

META_BEGIN(CCurrentVehicle::Init)
static int address;
static int global_address;
static const int id = 0x4AD5F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AD5F0, 0x4AD6E0, 0x4AD670>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4AD5E3,100,0,0x4AD5E0,1, 0x4AD683,100,0,0x4AD660,1, 0x4AD6D3,110,0,0x4AD6D0,1, 0x4AD773,110,0,0x4AD750,1, 0x4AD663,120,0,0x4AD660,1, 0x4AD703,120,0,0x4AD6E0,1>;
using def_t = void(CCurrentVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCurrentVehicle *>, 0>;
META_END

META_BEGIN(CCurrentVehicle::Process)
static int address;
static int global_address;
static const int id = 0x4AD600;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AD600, 0x4AD6F0, 0x4AD680>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4AD6B3,100,0,0x4AD690,1, 0x4AD7A3,110,0,0x4AD780,1, 0x4AD733,120,0,0x4AD710,1>;
using def_t = void(CCurrentVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCurrentVehicle *>, 0>;
META_END

META_BEGIN(CCurrentVehicle::Display)
static int address;
static int global_address;
static const int id = 0x4AD630;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AD630, 0x4AD720, 0x4AD6B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4AD62A,100,0,0x4AD600,1, 0x4AD71A,110,0,0x4AD6F0,1, 0x4AD6AA,120,0,0x4AD680,1>;
using def_t = void(CCurrentVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCurrentVehicle *>, 0>;
META_END

template<>
struct stack_object<CCurrentVehicle> : stack_object_no_default<CCurrentVehicle> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CCurrentVehicle *>(ctor_gaddr(CCurrentVehicle), reinterpret_cast<CCurrentVehicle *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CCurrentVehicle *operator_new<CCurrentVehicle>() {
    void *objData = operator new(sizeof(CCurrentVehicle)); 
    CCurrentVehicle *obj = reinterpret_cast<CCurrentVehicle *>(objData);
    plugin::CallMethodDynGlobal<CCurrentVehicle *>(ctor_gaddr(CCurrentVehicle), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CCurrentVehicle *operator_new_array<CCurrentVehicle>(unsigned int objCount) {
    void *objData = operator new(sizeof(CCurrentVehicle) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CCurrentVehicle *objArray = reinterpret_cast<CCurrentVehicle *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CCurrentVehicle *>(ctor_gaddr(CCurrentVehicle), &objArray[i]);
    return objArray;
}

}
