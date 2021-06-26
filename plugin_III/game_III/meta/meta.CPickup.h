/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPickup::Update)
static int address;
static int global_address;
static const int id = 0x430860;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x430860, 0x430860, 0x430860>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x43042F,100,0,0x4303D0,1, 0x43047F,100,0,0x4303D0,2, 0x43042F,110,0,0x4303D0,1, 0x43047F,110,0,0x4303D0,2, 0x43042F,120,0,0x4303D0,1, 0x43047F,120,0,0x4303D0,2>;
using def_t = bool(CPickup *, CPlayerPed *, CVehicle *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPickup *,CPlayerPed *,CVehicle *,int>, 0,1,2,3>;
META_END

META_BEGIN(CPickup::GiveUsAPickUpObject)
static int address;
static int global_address;
static const int id = 0x433BA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x433BA0, 0x433BA0, 0x433BA0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x430635,100,0,0x4304B0,1, 0x431479,100,0,0x430860,1, 0x430635,110,0,0x4304B0,1, 0x431479,110,0,0x430860,1, 0x430635,120,0,0x4304B0,1, 0x431479,120,0,0x430860,1>;
using def_t = CObject *(CPickup *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPickup *,int>, 0,1>;
META_END

CTOR_META_BEGIN(CPickup)
static int address;
static int global_address;
static const int id = 0x4340E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4340E0, 0x4340E0, 0x4340E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43409A,100,2,0,1, 0x43409A,110,2,0,1, 0x43409A,120,2,0,1>;
using def_t = CPickup *(CPickup *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPickup *>, 0>;
META_END

template<>
struct stack_object<CPickup> : stack_object_no_default<CPickup> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CPickup *>(ctor_gaddr(CPickup), reinterpret_cast<CPickup *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CPickup *operator_new<CPickup>() {
    void *objData = operator new(sizeof(CPickup)); 
    CPickup *obj = reinterpret_cast<CPickup *>(objData);
    plugin::CallMethodDynGlobal<CPickup *>(ctor_gaddr(CPickup), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CPickup *operator_new_array<CPickup>(unsigned int objCount) {
    void *objData = operator new(sizeof(CPickup) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CPickup *objArray = reinterpret_cast<CPickup *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CPickup *>(ctor_gaddr(CPickup), &objArray[i]);
    return objArray;
}

}
