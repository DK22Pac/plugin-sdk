/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CTowerClock::Init)
static int address;
static int global_address;
static const int id = 0x5000D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5000D0, 0x5001B0, 0x500140>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4FED2E,100,0,0x4FE7C0,1, 0x4FED8C,100,0,0x4FE7C0,2, 0x4FEE0E,110,0,0x4FE8A0,1, 0x4FEE6C,110,0,0x4FE8A0,2, 0x4FED9E,120,0,0x4FE830,1, 0x4FEDFC,120,0,0x4FE830,2>;
using def_t = void(CTowerClock *, CVector, float, float, unsigned char, unsigned char, unsigned char, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTowerClock *,CVector,float,float,unsigned char,unsigned char,unsigned char,float,float>, 0,1,2,3,4,5,6,7,8>;
META_END

META_BEGIN(CTowerClock::Update)
static int address;
static int global_address;
static const int id = 0x500130;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x500130, 0x500210, 0x5001A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4FF1BA,100,0,0x4FF0D0,1, 0x4FF29A,110,0,0x4FF1B0,1, 0x4FF22A,120,0,0x4FF140,1>;
using def_t = void(CTowerClock *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTowerClock *>, 0>;
META_END

META_BEGIN(CTowerClock::Render)
static int address;
static int global_address;
static const int id = 0x5001D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5001D0, 0x5002B0, 0x500240>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4FF250,100,0,0x4FF210,1, 0x4FF330,110,0,0x4FF2F0,1, 0x4FF2C0,120,0,0x4FF280,1>;
using def_t = void(CTowerClock *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTowerClock *>, 0>;
META_END

CTOR_META_BEGIN(CTowerClock)
static int address;
static int global_address;
static const int id = 0x500990;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x500990, 0x500A70, 0x500A00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50094A,100,2,0,1, 0x500A2A,110,2,0,1, 0x5009BA,120,2,0,1>;
using def_t = CTowerClock *(CTowerClock *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTowerClock *>, 0>;
META_END

template<>
struct stack_object<CTowerClock> : stack_object_no_default<CTowerClock> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CTowerClock *>(ctor_gaddr(CTowerClock), reinterpret_cast<CTowerClock *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CTowerClock *operator_new<CTowerClock>() {
    void *objData = operator new(sizeof(CTowerClock)); 
    CTowerClock *obj = reinterpret_cast<CTowerClock *>(objData);
    plugin::CallMethodDynGlobal<CTowerClock *>(ctor_gaddr(CTowerClock), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CTowerClock *operator_new_array<CTowerClock>(unsigned int objCount) {
    void *objData = operator new(sizeof(CTowerClock) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CTowerClock *objArray = reinterpret_cast<CTowerClock *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CTowerClock *>(ctor_gaddr(CTowerClock), &objArray[i]);
    return objArray;
}

}
