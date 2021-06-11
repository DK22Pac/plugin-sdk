/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CFireManager)
static int address;
static int global_address;
static const int id = 0x479290;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x479290, 0x479290, 0x479290>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x47A07F,100,0,0x47A070,1, 0x47A07F,110,0,0x47A070,1, 0x47A07F,120,0,0x47A070,1>;
using def_t = CFireManager *(CFireManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFireManager *>, 0>;
META_END

DTOR_META_BEGIN(CFireManager)
static int address;
static int global_address;
static const int id = 0x4792C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4792C0, 0x4792C0, 0x4792C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x47A07B,100,2,0,1, 0x47A07B,110,2,0,1, 0x47A07B,120,2,0,1>;
using def_t = void(CFireManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFireManager *>, 0>;
META_END

META_BEGIN(CFireManager::GetNextFreeFire)
static int address;
static int global_address;
static const int id = 0x4792E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4792E0, 0x4792E0, 0x4792E0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x479513,100,0,0x479500,1, 0x479622,100,0,0x479590,1, 0x479ED0,100,0,0x479E60,1, 0x479513,110,0,0x479500,1, 0x479622,110,0,0x479590,1, 0x479ED0,110,0,0x479E60,1, 0x479513,120,0,0x479500,1, 0x479622,120,0,0x479590,1, 0x479ED0,120,0,0x479E60,1>;
using def_t = CFire *(CFireManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFireManager *>, 0>;
META_END

META_BEGIN(CFireManager::Update)
static int address;
static int global_address;
static const int id = 0x479310;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x479310, 0x479310, 0x479310>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C936,100,0,0x48C850,1, 0x48CA36,110,0,0x48C950,1, 0x48C9C6,120,0,0x48C8E0,1>;
using def_t = void(CFireManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFireManager *>, 0>;
META_END

META_BEGIN(CFireManager::FindNearestFire)
static int address;
static int global_address;
static const int id = 0x479340;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x479340, 0x479340, 0x479340>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x414CDC,100,0,0x413E50,1, 0x41FDB7,100,0,0x41FC50,1, 0x4C3D29,100,0,0x4C3CE0,1, 0x4C3D8A,100,0,0x4C3CE0,2, 0x4C3E39,100,0,0x4C3CE0,3, 0x414CDC,110,0,0x413E50,1, 0x41FDB7,110,0,0x41FC50,1, 0x4C3DC9,110,0,0x4C3D80,1, 0x4C3E2A,110,0,0x4C3D80,2, 0x4C3ED9,110,0,0x4C3D80,3, 0x414CDC,120,0,0x413E50,1, 0x41FDB7,120,0,0x41FC50,1, 0x4C3D59,120,0,0x4C3D10,1, 0x4C3DBA,120,0,0x4C3D10,2, 0x4C3E69,120,0,0x4C3D10,3>;
using def_t = CFire *(CFireManager *, CVector, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFireManager *,CVector,float *>, 0,1,2>;
META_END

META_BEGIN(CFireManager::FindFurthestFire_NeverMindFireMen)
static int address;
static int global_address;
static const int id = 0x479430;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x479430, 0x479430, 0x479430>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x522815,100,0,0x522590,1, 0x522A55,110,0,0x5227D0,1, 0x5229E5,120,0,0x522760,1>;
using def_t = CFire *(CFireManager *, CVector, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFireManager *,CVector,float,float>, 0,1,2,3>;
META_END

META_BEGIN_OVERLOADED(CFireManager::StartFire, void (CFireManager::*)(CVector, float, unsigned char))
static int address;
static int global_address;
static const int id = 0x479500;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x479500, 0x479500, 0x479500>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x55957E,100,0,0x5591C0,1, 0x5596AE,110,0,0x5592F0,1, 0x55965E,120,0,0x5592A0,1>;
using def_t = void(CFireManager *, CVector, float, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFireManager *,CVector,float,unsigned char>, 0,1,2,3>;
META_END

META_BEGIN_OVERLOADED(CFireManager::StartFire, void (CFireManager::*)(CEntity *, CEntity *, float, unsigned char))
static int address;
static int global_address;
static const int id = 0x479590;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x479590, 0x479590, 0x479590>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x479AA0,100,0,0x4798D0,1, 0x4B3E3C,100,0,0x4B3D30,1, 0x4B3F9C,100,0,0x4B3E90,1, 0x53BEFE,100,0,0x53BC60,1, 0x558985,100,0,0x558550,1, 0x55C232,100,0,0x55BFF0,1, 0x479AA0,110,0,0x4798D0,1, 0x4B3F2C,110,0,0x4B3E20,1, 0x4B408C,110,0,0x4B3F80,1, 0x53C13E,110,0,0x53BEA0,1, 0x558AB5,110,0,0x558680,1, 0x55C362,110,0,0x55C120,1, 0x479AA0,120,0,0x4798D0,1, 0x4B3EBC,120,0,0x4B3DB0,1, 0x4B401C,120,0,0x4B3F10,1, 0x53C0EE,120,0,0x53BE50,1, 0x558A65,120,0,0x558630,1, 0x55C312,120,0,0x55C0D0,1>;
using def_t = void(CFireManager *, CEntity *, CEntity *, float, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFireManager *,CEntity *,CEntity *,float,unsigned char>, 0,1,2,3,4>;
META_END

META_BEGIN(CFireManager::ExtinguishPoint)
static int address;
static int global_address;
static const int id = 0x479DB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x479DB0, 0x479DB0, 0x479DB0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4491DC,100,0,0x448240,1, 0x4A14C7,100,0,0x4A1400,1, 0x4B5071,100,0,0x4B4E70,1, 0x521C74,100,0,0x521B80,1, 0x4491DC,110,0,0x448240,1, 0x4A15B7,110,0,0x4A14F0,1, 0x4B5161,110,0,0x4B4F60,1, 0x521EB4,110,0,0x521DC0,1, 0x4491DC,120,0,0x448240,1, 0x4A1547,120,0,0x4A1480,1, 0x4B50F1,120,0,0x4B4EF0,1, 0x521E44,120,0,0x521D50,1>;
using def_t = void(CFireManager *, CVector, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFireManager *,CVector,float>, 0,1,2>;
META_END

META_BEGIN(CFireManager::StartScriptFire)
static int address;
static int global_address;
static const int id = 0x479E60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x479E60, 0x479E60, 0x479E60>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x44606B,100,0,0x4458A0,1, 0x4485D9,100,0,0x448240,1, 0x44866E,100,0,0x448240,2, 0x44606B,110,0,0x4458A0,1, 0x4485D9,110,0,0x448240,1, 0x44866E,110,0,0x448240,2, 0x44606B,120,0,0x4458A0,1, 0x4485D9,120,0,0x448240,1, 0x44866E,120,0,0x448240,2>;
using def_t = int(CFireManager *, CVector const &, CEntity *, float, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFireManager *,CVector const &,CEntity *,float,unsigned char>, 0,1,2,3,4>;
META_END

META_BEGIN(CFireManager::IsScriptFireExtinguished)
static int address;
static int global_address;
static const int id = 0x479FC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x479FC0, 0x479FC0, 0x479FC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4460AF,100,0,0x4458A0,1, 0x4460AF,110,0,0x4458A0,1, 0x4460AF,120,0,0x4458A0,1>;
using def_t = bool(CFireManager *, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFireManager *,short>, 0,1>;
META_END

META_BEGIN(CFireManager::RemoveScriptFire)
static int address;
static int global_address;
static const int id = 0x479FE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x479FE0, 0x479FE0, 0x479FE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4460EA,100,0,0x4458A0,1, 0x4460EA,110,0,0x4458A0,1, 0x4460EA,120,0,0x4458A0,1>;
using def_t = void(CFireManager *, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFireManager *,short>, 0,1>;
META_END

META_BEGIN(CFireManager::RemoveAllScriptFires)
static int address;
static int global_address;
static const int id = 0x47A000;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x47A000, 0x47A000, 0x47A000>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x448055,100,0,0x4458A0,1, 0x448055,110,0,0x4458A0,1, 0x448055,120,0,0x4458A0,1>;
using def_t = void(CFireManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFireManager *>, 0>;
META_END

META_BEGIN(CFireManager::SetScriptFireAudio)
static int address;
static int global_address;
static const int id = 0x47A040;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x47A040, 0x47A040, 0x47A040>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x589AEB,100,0,0x588490,1, 0x589E2B,110,0,0x5887D0,1, 0x589D1B,120,0,0x5886C0,1>;
using def_t = void(CFireManager *, short, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CFireManager *,short,bool>, 0,1,2>;
META_END

template<>
struct stack_object<CFireManager> : stack_object_no_default<CFireManager> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CFireManager *>(ctor_gaddr(CFireManager), reinterpret_cast<CFireManager *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CFireManager *>(dtor_gaddr(CFireManager), reinterpret_cast<CFireManager *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CFireManager *operator_new<CFireManager>() {
    void *objData = operator new(sizeof(CFireManager)); 
    CFireManager *obj = reinterpret_cast<CFireManager *>(objData);
    plugin::CallMethodDynGlobal<CFireManager *>(ctor_gaddr(CFireManager), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CFireManager *operator_new_array<CFireManager>(unsigned int objCount) {
    void *objData = operator new(sizeof(CFireManager) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CFireManager *objArray = reinterpret_cast<CFireManager *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CFireManager *>(ctor_gaddr(CFireManager), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CFireManager>(CFireManager *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CFireManager *>(dtor_gaddr(CFireManager), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CFireManager>(CFireManager *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CFireManager *>(dtor_gaddr(CFireManager), &objArray[i]);
    operator delete(objData);
}

}
