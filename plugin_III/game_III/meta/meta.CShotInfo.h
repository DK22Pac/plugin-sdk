/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CShotInfo::Initialise)
static int address;
static int global_address;
static const int id = 0x55BC60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55BC60, 0x55BD90, 0x55BD40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x55C2D5,100,0,0x55C2D0,1, 0x55C405,110,0,0x55C400,1, 0x55C3B5,120,0,0x55C3B0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CShotInfo::Shutdown)
static int address;
static int global_address;
static const int id = 0x55BD50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55BD50, 0x55BE80, 0x55BE30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x55C2F5,100,0,0x55C2F0,1, 0x55C425,110,0,0x55C420,1, 0x55C3D5,120,0,0x55C3D0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CShotInfo::AddShot)
static int address;
static int global_address;
static const int id = 0x55BD70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55BD70, 0x55BEA0, 0x55BE50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x561FA2,100,0,0x561E00,1, 0x5620D2,110,0,0x561F30,1, 0x562082,120,0,0x561EE0,1>;
using def_t = bool(CEntity *, eWeaponType, CVector, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *,eWeaponType,CVector,CVector>, 0,1,2,3>;
META_END

META_BEGIN(CShotInfo::Update)
static int address;
static int global_address;
static const int id = 0x55BFF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55BFF0, 0x55C120, 0x55C0D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x55C310,100,0,0x55C310,1, 0x55C440,110,0,0x55C440,1, 0x55C3F0,120,0,0x55C3F0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

CTOR_META_BEGIN(CShotInfo)
static int address;
static int global_address;
static const int id = 0x55C2C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55C2C0, 0x55C3F0, 0x55C3A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x55C2A7,100,2,0,1, 0x55C3D7,110,2,0,1, 0x55C387,120,2,0,1>;
using def_t = CShotInfo *(CShotInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CShotInfo *>, 0>;
META_END

template<>
struct stack_object<CShotInfo> : stack_object_no_default<CShotInfo> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CShotInfo *>(ctor_gaddr(CShotInfo), reinterpret_cast<CShotInfo *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CShotInfo *operator_new<CShotInfo>() {
    void *objData = operator new(sizeof(CShotInfo)); 
    CShotInfo *obj = reinterpret_cast<CShotInfo *>(objData);
    plugin::CallMethodDynGlobal<CShotInfo *>(ctor_gaddr(CShotInfo), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CShotInfo *operator_new_array<CShotInfo>(unsigned int objCount) {
    void *objData = operator new(sizeof(CShotInfo) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CShotInfo *objArray = reinterpret_cast<CShotInfo *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CShotInfo *>(ctor_gaddr(CShotInfo), &objArray[i]);
    return objArray;
}

}
