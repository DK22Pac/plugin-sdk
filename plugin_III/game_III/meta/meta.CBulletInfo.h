/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CBulletInfo::Initialise)
static int address;
static int global_address;
static const int id = 0x558220;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x558220, 0x558350, 0x558300>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x55C2E4,100,0,0x55C2D0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CBulletInfo::Shutdown)
static int address;
static int global_address;
static const int id = 0x558450;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x558450, 0x558580, 0x558530>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x55C304,100,0,0x55C2F0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CBulletInfo::AddBullet)
static int address;
static int global_address;
static const int id = 0x558470;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x558470, 0x5585A0, 0x558550>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x562107,100,0,0x561FE0,1>;
using def_t = void(CEntity *, eWeaponType, CVector, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *,eWeaponType,CVector,CVector>, 0,1,2,3>;
META_END

META_BEGIN(CBulletInfo::Update)
static int address;
static int global_address;
static const int id = 0x558550;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x558550, 0x558680, 0x558630>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x55C31F,100,0,0x55C310,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CBulletInfo::TestForSniperBullet)
static int address;
static int global_address;
static const int id = 0x558D40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x558D40, 0x558E70, 0x558E20>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x44C974,100,0,0x448240,1, 0x4519B5,100,0,0x4518A0,1>;
using def_t = bool(float, float, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float,float,float>, 0,1,2,3,4,5>;
META_END

CTOR_META_BEGIN(CBulletInfo)
static int address;
static int global_address;
static const int id = 0x559020;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x559020, 0x559150, 0x559100>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x559007,100,2,0,1>;
using def_t = CBulletInfo *(CBulletInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBulletInfo *>, 0>;
META_END

template<>
struct stack_object<CBulletInfo> : stack_object_no_default<CBulletInfo> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CBulletInfo *>(ctor_gaddr(CBulletInfo), reinterpret_cast<CBulletInfo *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CBulletInfo *operator_new<CBulletInfo>() {
    void *objData = operator new(sizeof(CBulletInfo)); 
    CBulletInfo *obj = reinterpret_cast<CBulletInfo *>(objData);
    plugin::CallMethodDynGlobal<CBulletInfo *>(ctor_gaddr(CBulletInfo), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CBulletInfo *operator_new_array<CBulletInfo>(unsigned int objCount) {
    void *objData = operator new(sizeof(CBulletInfo) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CBulletInfo *objArray = reinterpret_cast<CBulletInfo *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CBulletInfo *>(ctor_gaddr(CBulletInfo), &objArray[i]);
    return objArray;
}

}
