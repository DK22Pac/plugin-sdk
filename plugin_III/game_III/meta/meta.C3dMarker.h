/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(C3dMarker::AddMarker)
static int address;
static int global_address;
static const int id = 0x51B070;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51B070, 0x51B2A0, 0x51B230>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51B95B,100,0,0x51B480,1, 0x51BB8B,110,0,0x51B6B0,1, 0x51BB1B,120,0,0x51B640,1>;
using def_t = void(C3dMarker *, unsigned int, unsigned short, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned short, float, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<C3dMarker *,unsigned int,unsigned short,float,unsigned char,unsigned char,unsigned char,unsigned char,unsigned short,float,short>, 0,1,2,3,4,5,6,7,8,9,10>;
META_END

META_BEGIN(C3dMarker::DeleteMarkerObject)
static int address;
static int global_address;
static const int id = 0x51B170;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51B170, 0x51B3A0, 0x51B330>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x51B3CB,100,0,0x51B3B0,1, 0x51B460,100,0,0x51B400,1, 0x51B925,100,0,0x51B480,1, 0x51B5FB,110,0,0x51B5E0,1, 0x51B690,110,0,0x51B630,1, 0x51BB55,110,0,0x51B6B0,1, 0x51B58B,120,0,0x51B570,1, 0x51B620,120,0,0x51B5C0,1, 0x51BAE5,120,0,0x51B640,1>;
using def_t = void(C3dMarker *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<C3dMarker *>, 0>;
META_END

META_BEGIN(C3dMarker::Render)
static int address;
static int global_address;
static const int id = 0x51B1B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51B1B0, 0x51B3E0, 0x51B370>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51B441,100,0,0x51B400,1, 0x51B671,110,0,0x51B630,1, 0x51B601,120,0,0x51B5C0,1>;
using def_t = void(C3dMarker *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<C3dMarker *>, 0>;
META_END

DTOR_META_BEGIN(C3dMarker)
static int address;
static int global_address;
static const int id = 0x51C310;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51C310, 0x51C540, 0x51C4D0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x51C295,100,2,0,1, 0x51C2F5,100,2,0,1, 0x51C4C5,110,2,0,1, 0x51C525,110,2,0,1, 0x51C455,120,2,0,1, 0x51C4B5,120,2,0,1>;
using def_t = void(C3dMarker *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<C3dMarker *>, 0>;
META_END

CTOR_META_BEGIN(C3dMarker)
static int address;
static int global_address;
static const int id = 0x51C320;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51C320, 0x51C550, 0x51C4E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51C29A,100,2,0,1, 0x51C4CA,110,2,0,1, 0x51C45A,120,2,0,1>;
using def_t = C3dMarker *(C3dMarker *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<C3dMarker *>, 0>;
META_END

META_BEGIN(MarkerAtomicCB)
static int address;
static int global_address;
static const int id = 0x51B060;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51B060, 0x51B290, 0x51B220>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51B0A1,100,2,0,1, 0x51B2D1,110,2,0,1, 0x51B261,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,void *>, 0,1>;
META_END

template<>
struct stack_object<C3dMarker> : stack_object_no_default<C3dMarker> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<C3dMarker *>(ctor_gaddr(C3dMarker), reinterpret_cast<C3dMarker *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<C3dMarker *>(dtor_gaddr(C3dMarker), reinterpret_cast<C3dMarker *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline C3dMarker *operator_new<C3dMarker>() {
    void *objData = operator new(sizeof(C3dMarker)); 
    C3dMarker *obj = reinterpret_cast<C3dMarker *>(objData);
    plugin::CallMethodDynGlobal<C3dMarker *>(ctor_gaddr(C3dMarker), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline C3dMarker *operator_new_array<C3dMarker>(unsigned int objCount) {
    void *objData = operator new(sizeof(C3dMarker) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    C3dMarker *objArray = reinterpret_cast<C3dMarker *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<C3dMarker *>(ctor_gaddr(C3dMarker), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<C3dMarker>(C3dMarker *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<C3dMarker *>(dtor_gaddr(C3dMarker), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<C3dMarker>(C3dMarker *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<C3dMarker *>(dtor_gaddr(C3dMarker), &objArray[i]);
    operator delete(objData);
}

}
