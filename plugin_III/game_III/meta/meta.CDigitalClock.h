/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CDigitalClock::GetString)
static int address;
static int global_address;
static const int id = 0x4FF450;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FF450, 0x4FF530, 0x4FF4C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50061E,100,0,0x5005F0,1, 0x5006FE,110,0,0x5006D0,1, 0x50068E,120,0,0x500660,1>;
using def_t = char const *();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CDigitalClock::Init)
static int address;
static int global_address;
static const int id = 0x5004F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5004F0, 0x5005D0, 0x500560>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4FEEDE,100,0,0x4FE7C0,1, 0x4FEF74,100,0,0x4FE7C0,2, 0x4FF007,100,0,0x4FE7C0,3, 0x4FEFBE,110,0,0x4FE8A0,1, 0x4FF054,110,0,0x4FE8A0,2, 0x4FF0E7,110,0,0x4FE8A0,3, 0x4FEF4E,120,0,0x4FE830,1, 0x4FEFE4,120,0,0x4FE830,2, 0x4FF077,120,0,0x4FE830,3>;
using def_t = void(CDigitalClock *, CVector, float, float, unsigned char, unsigned char, unsigned char, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDigitalClock *,CVector,float,float,unsigned char,unsigned char,unsigned char,float,float>, 0,1,2,3,4,5,6,7,8>;
META_END

META_BEGIN(CDigitalClock::Update)
static int address;
static int global_address;
static const int id = 0x500550;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x500550, 0x500630, 0x5005C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4FF1EC,100,0,0x4FF0D0,1, 0x4FF2CC,110,0,0x4FF1B0,1, 0x4FF25C,120,0,0x4FF140,1>;
using def_t = void(CDigitalClock *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDigitalClock *>, 0>;
META_END

META_BEGIN(CDigitalClock::Render)
static int address;
static int global_address;
static const int id = 0x5005F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5005F0, 0x5006D0, 0x500660>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4FF27B,100,0,0x4FF210,1, 0x4FF35B,110,0,0x4FF2F0,1, 0x4FF2EB,120,0,0x4FF280,1>;
using def_t = void(CDigitalClock *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDigitalClock *>, 0>;
META_END

CTOR_META_BEGIN(CDigitalClock)
static int address;
static int global_address;
static const int id = 0x500980;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x500980, 0x500A60, 0x5009F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x500962,100,2,0,1, 0x500A42,110,2,0,1, 0x5009D2,120,2,0,1>;
using def_t = CDigitalClock *(CDigitalClock *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDigitalClock *>, 0>;
META_END

template<>
struct stack_object<CDigitalClock> : stack_object_no_default<CDigitalClock> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CDigitalClock *>(ctor_gaddr(CDigitalClock), reinterpret_cast<CDigitalClock *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CDigitalClock *operator_new<CDigitalClock>() {
    void *objData = operator new(sizeof(CDigitalClock)); 
    CDigitalClock *obj = reinterpret_cast<CDigitalClock *>(objData);
    plugin::CallMethodDynGlobal<CDigitalClock *>(ctor_gaddr(CDigitalClock), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CDigitalClock *operator_new_array<CDigitalClock>(unsigned int objCount) {
    void *objData = operator new(sizeof(CDigitalClock) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CDigitalClock *objArray = reinterpret_cast<CDigitalClock *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CDigitalClock *>(ctor_gaddr(CDigitalClock), &objArray[i]);
    return objArray;
}

}
