/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CDate)
static int address;
static int global_address;
static const int id = 0x58F8A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x58F8A0, 0x58FB90, 0x58FA80>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x590ADC,100,0,0x590A00,1, 0x591E95,100,0,0x591E90,1, 0x590D9C,110,0,0x590CC0,1, 0x592145,110,0,0x592140,1, 0x590C8C,120,0,0x590BB0,1, 0x592035,120,0,0x592030,1>;
using def_t = CDate *(CDate *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDate *>, 0>;
META_END

template<>
struct stack_object<CDate> : stack_object_no_default<CDate> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CDate *>(ctor_gaddr(CDate), reinterpret_cast<CDate *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CDate *operator_new<CDate>() {
    void *objData = operator new(sizeof(CDate)); 
    CDate *obj = reinterpret_cast<CDate *>(objData);
    plugin::CallMethodDynGlobal<CDate *>(ctor_gaddr(CDate), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CDate *operator_new_array<CDate>(unsigned int objCount) {
    void *objData = operator new(sizeof(CDate) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CDate *objArray = reinterpret_cast<CDate *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CDate *>(ctor_gaddr(CDate), &objArray[i]);
    return objArray;
}

}
