/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CMovingThing::Update)
static int address;
static int global_address;
static const int id = 0x4FF290;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FF290, 0x4FF370, 0x4FF300>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4FF122,100,0,0x4FF0D0,1, 0x4FF14C,100,0,0x4FF0D0,2, 0x4FF202,110,0,0x4FF1B0,1, 0x4FF22C,110,0,0x4FF1B0,2, 0x4FF192,120,0,0x4FF140,1, 0x4FF1BC,120,0,0x4FF140,2>;
using def_t = void(CMovingThing *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMovingThing *>, 0>;
META_END

META_BEGIN(CMovingThing::AddToList)
static int address;
static int global_address;
static const int id = 0x4FF320;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FF320, 0x4FF400, 0x4FF390>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4FF2E7,100,0,0x4FF290,1, 0x4FF3C7,110,0,0x4FF370,1, 0x4FF357,120,0,0x4FF300,1>;
using def_t = void(CMovingThing *, CMovingThing *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMovingThing *,CMovingThing *>, 0,1>;
META_END

META_BEGIN(CMovingThing::RemoveFromList)
static int address;
static int global_address;
static const int id = 0x4FF340;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FF340, 0x4FF420, 0x4FF3B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4FF2FF,100,0,0x4FF290,1, 0x4FF3DF,110,0,0x4FF370,1, 0x4FF36F,120,0,0x4FF300,1>;
using def_t = void(CMovingThing *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMovingThing *>, 0>;
META_END

CTOR_META_BEGIN(CMovingThing)
static int address;
static int global_address;
static const int id = 0x5009B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5009B0, 0x500A90, 0x500A20>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50091A,100,2,0,1, 0x5009FA,110,2,0,1, 0x50098A,120,2,0,1>;
using def_t = CMovingThing *(CMovingThing *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMovingThing *>, 0>;
META_END

template<>
struct stack_object<CMovingThing> : stack_object_no_default<CMovingThing> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CMovingThing *>(ctor_gaddr(CMovingThing), reinterpret_cast<CMovingThing *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CMovingThing *operator_new<CMovingThing>() {
    void *objData = operator new(sizeof(CMovingThing)); 
    CMovingThing *obj = reinterpret_cast<CMovingThing *>(objData);
    plugin::CallMethodDynGlobal<CMovingThing *>(ctor_gaddr(CMovingThing), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CMovingThing *operator_new_array<CMovingThing>(unsigned int objCount) {
    void *objData = operator new(sizeof(CMovingThing) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CMovingThing *objArray = reinterpret_cast<CMovingThing *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CMovingThing *>(ctor_gaddr(CMovingThing), &objArray[i]);
    return objArray;
}

}
