/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CStuckCarCheck::Init)
static int address;
static int global_address;
static const int id = 0x438050;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x438050, 0x438050, 0x438050>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x437D2E,100,0,0x437C10,1, 0x43884F,100,0,0x438790,1, 0x437D2E,110,0,0x437C10,1, 0x43884F,110,0,0x438790,1, 0x437D2E,120,0,0x437C10,1, 0x43884F,120,0,0x438790,1>;
using def_t = void(CStuckCarCheck *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CStuckCarCheck *>, 0>;
META_END

META_BEGIN(CStuckCarCheck::Process)
static int address;
static int global_address;
static const int id = 0x4380A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4380A0, 0x4380A0, 0x4380A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4390AC,100,0,0x439040,1, 0x4390AC,110,0,0x439040,1, 0x4390AC,120,0,0x439040,1>;
using def_t = void(CStuckCarCheck *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CStuckCarCheck *>, 0>;
META_END

META_BEGIN(CStuckCarCheck::AddCarToCheck)
static int address;
static int global_address;
static const int id = 0x4381C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4381C0, 0x4381C0, 0x4381C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44F176,100,0,0x44CB80,1, 0x44F176,110,0,0x44CB80,1, 0x44F176,120,0,0x44CB80,1>;
using def_t = void(CStuckCarCheck *, int, float, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CStuckCarCheck *,int,float,unsigned int>, 0,1,2,3>;
META_END

META_BEGIN(CStuckCarCheck::RemoveCarFromCheck)
static int address;
static int global_address;
static const int id = 0x438240;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x438240, 0x438240, 0x438240>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44F1A8,100,0,0x44CB80,1, 0x44F1A8,110,0,0x44CB80,1, 0x44F1A8,120,0,0x44CB80,1>;
using def_t = void(CStuckCarCheck *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CStuckCarCheck *,int>, 0,1>;
META_END

META_BEGIN(CStuckCarCheck::HasCarBeenStuckForAWhile)
static int address;
static int global_address;
static const int id = 0x4382A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4382A0, 0x4382A0, 0x4382A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44F1ED,100,0,0x44CB80,1, 0x44F1ED,110,0,0x44CB80,1, 0x44F1ED,120,0,0x44CB80,1>;
using def_t = bool(CStuckCarCheck *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CStuckCarCheck *,int>, 0,1>;
META_END

CTOR_META_BEGIN(CStuckCarCheck)
static int address;
static int global_address;
static const int id = 0x43ED20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x43ED20, 0x43ED20, 0x43ED20>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43EBB1,100,2,0,1, 0x43EBB1,110,2,0,1, 0x43EBB1,120,2,0,1>;
using def_t = CStuckCarCheck *(CStuckCarCheck *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CStuckCarCheck *>, 0>;
META_END

template<>
struct stack_object<CStuckCarCheck> : stack_object_no_default<CStuckCarCheck> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CStuckCarCheck *>(ctor_gaddr(CStuckCarCheck), reinterpret_cast<CStuckCarCheck *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CStuckCarCheck *operator_new<CStuckCarCheck>() {
    void *objData = operator new(sizeof(CStuckCarCheck)); 
    CStuckCarCheck *obj = reinterpret_cast<CStuckCarCheck *>(objData);
    plugin::CallMethodDynGlobal<CStuckCarCheck *>(ctor_gaddr(CStuckCarCheck), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CStuckCarCheck *operator_new_array<CStuckCarCheck>(unsigned int objCount) {
    void *objData = operator new(sizeof(CStuckCarCheck) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CStuckCarCheck *objArray = reinterpret_cast<CStuckCarCheck *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CStuckCarCheck *>(ctor_gaddr(CStuckCarCheck), &objArray[i]);
    return objArray;
}

}
