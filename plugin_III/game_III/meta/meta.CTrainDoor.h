/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CTrainDoor::IsClosed)
static int address;
static int global_address;
static const int id = 0x5460F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5460F0, 0x5462F0, 0x5462A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5503D1,100,0,0x550360,1, 0x550511,110,0,0x5504A0,1, 0x5504C1,120,0,0x550450,1>;
using def_t = bool(CTrainDoor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrainDoor *>, 0>;
META_END

META_BEGIN(CTrainDoor::IsFullyOpen)
static int address;
static int global_address;
static const int id = 0x546120;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x546120, 0x546320, 0x5462D0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x46F77B,100,0,0x46F600,1, 0x46F8BF,100,0,0x46F600,2, 0x4E32EE,100,0,0x4E32D0,1, 0x4E3668,100,0,0x4E3640,1, 0x46F75B,110,0,0x46F5E0,1, 0x46F89F,110,0,0x46F5E0,2, 0x4E339E,110,0,0x4E3380,1, 0x4E3718,110,0,0x4E36F0,1, 0x46F75B,120,0,0x46F5E0,1, 0x46F89F,120,0,0x46F5E0,2, 0x4E332E,120,0,0x4E3310,1, 0x4E36A8,120,0,0x4E3680,1>;
using def_t = bool(CTrainDoor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrainDoor *>, 0>;
META_END

META_BEGIN(CTrainDoor::RetTranslationWhenClosed)
static int address;
static int global_address;
static const int id = 0x546180;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x546180, 0x546380, 0x546330>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5460FA,100,0,0x5460F0,1, 0x55040A,100,0,0x550360,1, 0x5462FA,110,0,0x5462F0,1, 0x55054A,110,0,0x5504A0,1, 0x5462AA,120,0,0x5462A0,1, 0x5504FA,120,0,0x550450,1>;
using def_t = float(CTrainDoor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrainDoor *>, 0>;
META_END

META_BEGIN(CTrainDoor::RetTranslationWhenOpen)
static int address;
static int global_address;
static const int id = 0x5461C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5461C0, 0x5463C0, 0x546370>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x546126,100,0,0x546120,1, 0x546326,110,0,0x546320,1, 0x5462D6,120,0,0x5462D0,1>;
using def_t = float(CTrainDoor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrainDoor *>, 0>;
META_END

META_BEGIN(CTrainDoor::Open)
static int address;
static int global_address;
static const int id = 0x546200;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x546200, 0x546400, 0x5463B0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5503E9,100,0,0x550360,1, 0x5503FB,100,0,0x550360,2, 0x550529,110,0,0x5504A0,1, 0x55053B,110,0,0x5504A0,2, 0x5504D9,120,0,0x550450,1, 0x5504EB,120,0,0x550450,2>;
using def_t = void(CTrainDoor *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrainDoor *,float>, 0,1>;
META_END

CTOR_META_BEGIN(CTrainDoor)
static int address;
static int global_address;
static const int id = 0x54E430;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54E430, 0x54E570, 0x54E520>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x54E2D0,100,2,0,1, 0x54E410,110,2,0,1, 0x54E3C0,120,2,0,1>;
using def_t = CTrainDoor *(CTrainDoor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrainDoor *>, 0>;
META_END

template<>
struct stack_object<CTrainDoor> : stack_object_no_default<CTrainDoor> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CTrainDoor *>(ctor_gaddr(CTrainDoor), reinterpret_cast<CTrainDoor *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CTrainDoor *operator_new<CTrainDoor>() {
    void *objData = operator new(sizeof(CTrainDoor)); 
    CTrainDoor *obj = reinterpret_cast<CTrainDoor *>(objData);
    plugin::CallMethodDynGlobal<CTrainDoor *>(ctor_gaddr(CTrainDoor), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CTrainDoor *operator_new_array<CTrainDoor>(unsigned int objCount) {
    void *objData = operator new(sizeof(CTrainDoor) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CTrainDoor *objArray = reinterpret_cast<CTrainDoor *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CTrainDoor *>(ctor_gaddr(CTrainDoor), &objArray[i]);
    return objArray;
}

}
