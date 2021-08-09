/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN_OVERLOADED(CWindModifiers::FindWindModifier, bool (*)(CVector, float *, float *))
static int address;
static int global_address;
static const int id = 0x629C90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x629C90, 0x629CE0, 0x629950>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x487C2E,100,0,0x487A20,1, 0x4FE555,100,0,0x4FE4C0,1, 0x5DC3C5,100,0,0x5DC140,1, 0x487C2E,110,0,0x487A20,1, 0x4FE575,110,0,0x4FE4E0,1, 0x5DC3E5,110,0,0x5DC160,1, 0x487B0E,120,0,0x487900,1, 0x4FE415,120,0,0x4FE380,1, 0x5DC025,120,0,0x5DBDA0,1>;
using def_t = bool(CVector, float *, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,float *,float *>, 0,1,2>;
META_END

META_BEGIN_OVERLOADED(CWindModifiers::RegisterOne, void (*)(CVector, int))
static int address;
static int global_address;
static const int id = 0x629E90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x629E90, 0x629EE0, 0x629B50>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x59316F,100,0,0x593030,1, 0x5AD51E,100,0,0x5AD4F0,1, 0x59318F,110,0,0x593050,1, 0x5AD53E,110,0,0x5AD510,1, 0x592F9F,120,0,0x592E60,1, 0x5AD34E,120,0,0x5AD320,1>;
using def_t = void(CVector, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,int>, 0,1>;
META_END

CTOR_META_BEGIN(CWindModifier)
static int address;
static int global_address;
static const int id = 0x629F70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x629F70, 0x629FC0, 0x629C30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x629F57,100,2,0,1, 0x629FA7,110,2,0,1, 0x629C17,120,2,0,1>;
using def_t = CWindModifier *(CWindModifier *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWindModifier *>, 0>;
META_END

template<>
struct stack_object<CWindModifier> : stack_object_no_default<CWindModifier> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CWindModifier *>(ctor_gaddr(CWindModifier), reinterpret_cast<CWindModifier *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CWindModifier *operator_new<CWindModifier>() {
    void *objData = operator new(sizeof(CWindModifier)); 
    CWindModifier *obj = reinterpret_cast<CWindModifier *>(objData);
    plugin::CallMethodDynGlobal<CWindModifier *>(ctor_gaddr(CWindModifier), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CWindModifier *operator_new_array<CWindModifier>(unsigned int objCount) {
    void *objData = operator new(sizeof(CWindModifier) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CWindModifier *objArray = reinterpret_cast<CWindModifier *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CWindModifier *>(ctor_gaddr(CWindModifier), &objArray[i]);
    return objArray;
}

}
