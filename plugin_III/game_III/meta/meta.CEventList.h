/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CEventList::Initialise)
static int address;
static int global_address;
static const int id = 0x475B60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x475B60, 0x475B60, 0x475B60>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x42155D,100,0,0x421400,1, 0x42177A,100,0,0x421400,2, 0x421926,100,0,0x421400,3, 0x48C1AB,100,0,0x48BED0,1, 0x48C530,100,0,0x48C4B0,1, 0x42155D,110,0,0x421400,1, 0x42177A,110,0,0x421400,2, 0x421926,110,0,0x421400,3, 0x48C29B,110,0,0x48BFC0,1, 0x48C630,110,0,0x48C5B0,1, 0x42155D,120,0,0x421400,1, 0x42177A,120,0,0x421400,2, 0x421926,120,0,0x421400,3, 0x48C22B,120,0,0x48BF50,1, 0x48C5C0,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CEventList::Update)
static int address;
static int global_address;
static const int id = 0x475BE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x475BE0, 0x475BE0, 0x475BE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C927,100,0,0x48C850,1, 0x48CA27,110,0,0x48C950,1, 0x48C9B7,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CEventList::RegisterEvent, void (*)(eEventType, eEventEntity, CEntity *, CPed *, int))
static int address;
static int global_address;
static const int id = 0x475C50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x475C50, 0x475C50, 0x475C50>;
// total references count: 10en (18), 11en (18), steam (18)
using refs_t = RefList<0x479716,100,0,0x479590,1, 0x4B19F1,100,0,0x4B1340,1, 0x4CF87B,100,0,0x4CF220,1, 0x4D39EA,100,0,0x4D3970,1, 0x4D3A43,100,0,0x4D3970,2, 0x4E9744,100,0,0x4E8EC0,1, 0x4ECCDB,100,0,0x4EC430,1, 0x5587C2,100,0,0x558550,1, 0x559733,100,0,0x5591C0,1, 0x55D27E,100,0,0x55CA20,1, 0x55DBAE,100,0,0x55D2E0,1, 0x55FD24,100,0,0x55F950,1, 0x560A58,100,0,0x560620,1, 0x56114B,100,0,0x560620,2, 0x56298F,100,0,0x5624D0,1, 0x562A12,100,0,0x5624D0,2, 0x562CDF,100,0,0x5624D0,3, 0x562D00,100,0,0x5624D0,4, 0x479716,110,0,0x479590,1, 0x4B1AE1,110,0,0x4B1430,1, 0x4CF91B,110,0,0x4CF2C0,1, 0x4D3A8A,110,0,0x4D3A10,1, 0x4D3AE3,110,0,0x4D3A10,2, 0x4E97F4,110,0,0x4E8F70,1, 0x4ECD8B,110,0,0x4EC4E0,1, 0x5588F2,110,0,0x558680,1, 0x559863,110,0,0x5592F0,1, 0x55D3AE,110,0,0x55CB50,1, 0x55DCDE,110,0,0x55D410,1, 0x55FE54,110,0,0x55FA80,1, 0x560B88,110,0,0x560750,1, 0x56127B,110,0,0x560750,2, 0x562ABF,110,0,0x562600,1, 0x562B42,110,0,0x562600,2, 0x562E0F,110,0,0x562600,3, 0x562E30,110,0,0x562600,4, 0x479716,120,0,0x479590,1, 0x4B1A71,120,0,0x4B13C0,1, 0x4CF8AB,120,0,0x4CF250,1, 0x4D3A1A,120,0,0x4D39A0,1, 0x4D3A73,120,0,0x4D39A0,2, 0x4E9784,120,0,0x4E8F00,1, 0x4ECD1B,120,0,0x4EC470,1, 0x5588A2,120,0,0x558630,1, 0x559813,120,0,0x5592A0,1, 0x55D35E,120,0,0x55CB00,1, 0x55DC8E,120,0,0x55D3C0,1, 0x55FE04,120,0,0x55FA30,1, 0x560B38,120,0,0x560700,1, 0x56122B,120,0,0x560700,2, 0x562A6F,120,0,0x5625B0,1, 0x562AF2,120,0,0x5625B0,2, 0x562DBF,120,0,0x5625B0,3, 0x562DE0,120,0,0x5625B0,4>;
using def_t = void(eEventType, eEventEntity, CEntity *, CPed *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<eEventType,eEventEntity,CEntity *,CPed *,int>, 0,1,2,3,4>;
META_END

META_BEGIN_OVERLOADED(CEventList::RegisterEvent, void (*)(eEventType, CVector, int))
static int address;
static int global_address;
static const int id = 0x475E10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x475E10, 0x475E10, 0x475E10>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x4798C6,100,0,0x4798B0,1, 0x5593C2,100,0,0x5591C0,1, 0x5595E3,100,0,0x5591C0,2, 0x559750,100,0,0x5591C0,3, 0x559BB1,100,0,0x5591C0,4, 0x559C47,100,0,0x5591C0,5, 0x559DDB,100,0,0x5591C0,6, 0x559E71,100,0,0x5591C0,7, 0x559F07,100,0,0x5591C0,8, 0x4798C6,110,0,0x4798B0,1, 0x5594F2,110,0,0x5592F0,1, 0x559713,110,0,0x5592F0,2, 0x559880,110,0,0x5592F0,3, 0x559CE1,110,0,0x5592F0,4, 0x559D77,110,0,0x5592F0,5, 0x559F0B,110,0,0x5592F0,6, 0x559FA1,110,0,0x5592F0,7, 0x55A037,110,0,0x5592F0,8, 0x4798C6,120,0,0x4798B0,1, 0x5594A2,120,0,0x5592A0,1, 0x5596C3,120,0,0x5592A0,2, 0x559830,120,0,0x5592A0,3, 0x559C91,120,0,0x5592A0,4, 0x559D27,120,0,0x5592A0,5, 0x559EBB,120,0,0x5592A0,6, 0x559F51,120,0,0x5592A0,7, 0x559FE7,120,0,0x5592A0,8>;
using def_t = void(eEventType, CVector, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<eEventType,CVector,int>, 0,1,2>;
META_END

META_BEGIN(CEventList::GetEvent)
static int address;
static int global_address;
static const int id = 0x475F40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x475F40, 0x475F40, 0x475F40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x45671D,100,0,0x456710,1, 0x45671D,110,0,0x456710,1, 0x45671D,120,0,0x456710,1>;
using def_t = bool(eEventType, int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<eEventType,int *>, 0,1>;
META_END

META_BEGIN(CEventList::ClearEvent)
static int address;
static int global_address;
static const int id = 0x475F70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x475F70, 0x475F70, 0x475F70>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x45674E,100,0,0x456710,1, 0x4D4728,100,0,0x4D4650,1, 0x4D4781,100,0,0x4D4650,2, 0x45674E,110,0,0x456710,1, 0x4D47C8,110,0,0x4D46F0,1, 0x4D4821,110,0,0x4D46F0,2, 0x45674E,120,0,0x456710,1, 0x4D4758,120,0,0x4D4680,1, 0x4D47B1,120,0,0x4D4680,2>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CEventList::FindClosestEvent)
static int address;
static int global_address;
static const int id = 0x475F90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x475F90, 0x475F90, 0x475F90>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4D4676,100,0,0x4D4650,1, 0x4D4751,100,0,0x4D4650,2, 0x4D47F0,100,0,0x4D47D0,1, 0x4D4880,100,0,0x4D4860,1, 0x4D4716,110,0,0x4D46F0,1, 0x4D47F1,110,0,0x4D46F0,2, 0x4D4890,110,0,0x4D4870,1, 0x4D4920,110,0,0x4D4900,1, 0x4D46A6,120,0,0x4D4680,1, 0x4D4781,120,0,0x4D4680,2, 0x4D4820,120,0,0x4D4800,1, 0x4D48B0,120,0,0x4D4890,1>;
using def_t = bool(eEventType, CVector, int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<eEventType,CVector,int *>, 0,1,2>;
META_END

META_BEGIN(CEventList::ReportCrimeForEvent)
static int address;
static int global_address;
static const int id = 0x476070;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x476070, 0x476070, 0x476070>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x475DE8,100,0,0x475C50,1, 0x475DE8,110,0,0x475C50,1, 0x475DE8,120,0,0x475C50,1>;
using def_t = void(eEventType, int, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<eEventType,int,bool>, 0,1,2>;
META_END

CTOR_META_BEGIN(CEvent)
static int address;
static int global_address;
static const int id = 0x4761C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4761C0, 0x4761C0, 0x4761C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4761A7,100,2,0,1, 0x4761A7,110,2,0,1, 0x4761A7,120,2,0,1>;
using def_t = CEvent *(CEvent *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CEvent *>, 0>;
META_END

template<>
struct stack_object<CEvent> : stack_object_no_default<CEvent> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CEvent *>(ctor_gaddr(CEvent), reinterpret_cast<CEvent *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CEvent *operator_new<CEvent>() {
    void *objData = operator new(sizeof(CEvent)); 
    CEvent *obj = reinterpret_cast<CEvent *>(objData);
    plugin::CallMethodDynGlobal<CEvent *>(ctor_gaddr(CEvent), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CEvent *operator_new_array<CEvent>(unsigned int objCount) {
    void *objData = operator new(sizeof(CEvent) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CEvent *objArray = reinterpret_cast<CEvent *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CEvent *>(ctor_gaddr(CEvent), &objArray[i]);
    return objArray;
}

}
