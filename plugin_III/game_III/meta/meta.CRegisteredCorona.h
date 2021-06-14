/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CRegisteredCorona::Update)
static int address;
static int global_address;
static const int id = 0x4F8C40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F8C40, 0x4F8D20, 0x4F8CB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F8F9B,100,0,0x4F8EC0,1, 0x4F907B,110,0,0x4F8FA0,1, 0x4F900B,120,0,0x4F8F30,1>;
using def_t = void(CRegisteredCorona *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CRegisteredCorona *>, 0>;
META_END

CTOR_META_BEGIN(CRegisteredCorona)
static int address;
static int global_address;
static const int id = 0x4FADE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FADE0, 0x4FAEC0, 0x4FAE50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4FADCA,100,2,0,1, 0x4FAEAA,110,2,0,1, 0x4FAE3A,120,2,0,1>;
using def_t = CRegisteredCorona *(CRegisteredCorona *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CRegisteredCorona *>, 0>;
META_END

template<>
struct stack_object<CRegisteredCorona> : stack_object_no_default<CRegisteredCorona> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CRegisteredCorona *>(ctor_gaddr(CRegisteredCorona), reinterpret_cast<CRegisteredCorona *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CRegisteredCorona *operator_new<CRegisteredCorona>() {
    void *objData = operator new(sizeof(CRegisteredCorona)); 
    CRegisteredCorona *obj = reinterpret_cast<CRegisteredCorona *>(objData);
    plugin::CallMethodDynGlobal<CRegisteredCorona *>(ctor_gaddr(CRegisteredCorona), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CRegisteredCorona *operator_new_array<CRegisteredCorona>(unsigned int objCount) {
    void *objData = operator new(sizeof(CRegisteredCorona) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CRegisteredCorona *objArray = reinterpret_cast<CRegisteredCorona *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CRegisteredCorona *>(ctor_gaddr(CRegisteredCorona), &objArray[i]);
    return objArray;
}

}
