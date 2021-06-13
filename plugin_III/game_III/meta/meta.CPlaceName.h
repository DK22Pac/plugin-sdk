/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CPlaceName)
static int address;
static int global_address;
static const int id = 0x4AD4B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AD4B0, 0x4AD5A0, 0x4AD530>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4AD6C5,100,0,0x4AD6C0,1, 0x4AD7B5,110,0,0x4AD7B0,1, 0x4AD745,120,0,0x4AD740,1>;
using def_t = CPlaceName *(CPlaceName *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlaceName *>, 0>;
META_END

META_BEGIN(CPlaceName::Init)
static int address;
static int global_address;
static const int id = 0x4AD4C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AD4C0, 0x4AD5B0, 0x4AD540>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4AD4B3,100,0,0x4AD4B0,1, 0x4AD665,100,0,0x4AD660,1, 0x4AD5A3,110,0,0x4AD5A0,1, 0x4AD755,110,0,0x4AD750,1, 0x4AD533,120,0,0x4AD530,1, 0x4AD6E5,120,0,0x4AD6E0,1>;
using def_t = void(CPlaceName *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlaceName *>, 0>;
META_END

META_BEGIN(CPlaceName::Process)
static int address;
static int global_address;
static const int id = 0x4AD4E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AD4E0, 0x4AD5D0, 0x4AD560>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4AD695,100,0,0x4AD690,1, 0x4AD785,110,0,0x4AD780,1, 0x4AD715,120,0,0x4AD710,1>;
using def_t = void(CPlaceName *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlaceName *>, 0>;
META_END

META_BEGIN(CPlaceName::Display)
static int address;
static int global_address;
static const int id = 0x4AD5B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AD5B0, 0x4AD6A0, 0x4AD630>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4AD59E,100,0,0x4AD4E0,1, 0x4AD68E,110,0,0x4AD5D0,1, 0x4AD61E,120,0,0x4AD560,1>;
using def_t = void(CPlaceName *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlaceName *>, 0>;
META_END

template<>
struct stack_object<CPlaceName> : stack_object_no_default<CPlaceName> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CPlaceName *>(ctor_gaddr(CPlaceName), reinterpret_cast<CPlaceName *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CPlaceName *operator_new<CPlaceName>() {
    void *objData = operator new(sizeof(CPlaceName)); 
    CPlaceName *obj = reinterpret_cast<CPlaceName *>(objData);
    plugin::CallMethodDynGlobal<CPlaceName *>(ctor_gaddr(CPlaceName), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CPlaceName *operator_new_array<CPlaceName>(unsigned int objCount) {
    void *objData = operator new(sizeof(CPlaceName) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CPlaceName *objArray = reinterpret_cast<CPlaceName *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CPlaceName *>(ctor_gaddr(CPlaceName), &objArray[i]);
    return objArray;
}

}
