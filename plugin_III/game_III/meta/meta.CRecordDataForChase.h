/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CRecordDataForChase::Init)
static int address;
static int global_address;
static const int id = 0x434780;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x434780, 0x434780, 0x434780>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C311,100,0,0x48BED0,1, 0x48C401,110,0,0x48BFC0,1, 0x48C391,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRecordDataForChase::SaveOrRetrieveDataForThisFrame)
static int address;
static int global_address;
static const int id = 0x4347F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4347F0, 0x4347F0, 0x4347F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C8E1,100,0,0x48C850,1, 0x48C9E1,110,0,0x48C950,1, 0x48C971,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRecordDataForChase::SaveOrRetrieveCarPositions)
static int address;
static int global_address;
static const int id = 0x434B20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x434B20, 0x434B20, 0x434B20>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4B1B03,100,0,0x4B1A60,1, 0x4B1F29,100,0,0x4B1A60,2, 0x4B1BF3,110,0,0x4B1B50,1, 0x4B2019,110,0,0x4B1B50,2, 0x4B1B83,120,0,0x4B1AE0,1, 0x4B1FA9,120,0,0x4B1AE0,2>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRecordDataForChase::StoreInfoForCar)
static int address;
static int global_address;
static const int id = 0x435000;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x435000, 0x435000, 0x435000>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43483E,100,0,0x4347F0,1, 0x43483E,110,0,0x4347F0,1, 0x43483E,120,0,0x4347F0,1>;
using def_t = void(CAutomobile *, CCarStateEachFrame *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CAutomobile *,CCarStateEachFrame *>, 0,1>;
META_END

META_BEGIN(CRecordDataForChase::RestoreInfoForMatrix)
static int address;
static int global_address;
static const int id = 0x435260;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x435260, 0x435260, 0x435260>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x434E4E,100,0,0x434B20,1, 0x435357,100,0,0x435330,1, 0x434E4E,110,0,0x434B20,1, 0x435357,110,0,0x435330,1, 0x434E4E,120,0,0x434B20,1, 0x435357,120,0,0x435330,1>;
using def_t = void(CMatrix &, CCarStateEachFrame *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CMatrix &,CCarStateEachFrame *>, 0,1>;
META_END

META_BEGIN(CRecordDataForChase::RestoreInfoForCar)
static int address;
static int global_address;
static const int id = 0x435330;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x435330, 0x435330, 0x435330>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x434B78,100,0,0x434B20,1, 0x434BDB,100,0,0x434B20,2, 0x434E13,100,0,0x434B20,3, 0x434F8A,100,0,0x434B20,4, 0x434B78,110,0,0x434B20,1, 0x434BDB,110,0,0x434B20,2, 0x434E13,110,0,0x434B20,3, 0x434F8A,110,0,0x434B20,4, 0x434B78,120,0,0x434B20,1, 0x434BDB,120,0,0x434B20,2, 0x434E13,120,0,0x434B20,3, 0x434F8A,120,0,0x434B20,4>;
using def_t = void(CAutomobile *, CCarStateEachFrame *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CAutomobile *,CCarStateEachFrame *,bool>, 0,1,2>;
META_END

META_BEGIN(CRecordDataForChase::ProcessControlCars)
static int address;
static int global_address;
static const int id = 0x435540;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x435540, 0x435540, 0x435540>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4B1AFE,100,0,0x4B1A60,1, 0x4B1BEE,110,0,0x4B1B50,1, 0x4B1B7E,120,0,0x4B1AE0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRecordDataForChase::GiveUsACar)
static int address;
static int global_address;
static const int id = 0x435570;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x435570, 0x435570, 0x435570>;
// total references count: 10en (13), 11en (13), steam (13)
using refs_t = RefList<0x43584B,100,0,0x435810,1, 0x435888,100,0,0x435810,2, 0x4358C5,100,0,0x435810,3, 0x435902,100,0,0x435810,4, 0x43593F,100,0,0x435810,5, 0x43597C,100,0,0x435810,6, 0x4359B9,100,0,0x435810,7, 0x4359F6,100,0,0x435810,8, 0x435A33,100,0,0x435810,9, 0x435A79,100,0,0x435810,10, 0x435AC5,100,0,0x435810,11, 0x435B17,100,0,0x435810,12, 0x435B66,100,0,0x435810,13, 0x43584B,110,0,0x435810,1, 0x435888,110,0,0x435810,2, 0x4358C5,110,0,0x435810,3, 0x435902,110,0,0x435810,4, 0x43593F,110,0,0x435810,5, 0x43597C,110,0,0x435810,6, 0x4359B9,110,0,0x435810,7, 0x4359F6,110,0,0x435810,8, 0x435A33,110,0,0x435810,9, 0x435A79,110,0,0x435810,10, 0x435AC5,110,0,0x435810,11, 0x435B17,110,0,0x435810,12, 0x435B66,110,0,0x435810,13, 0x43584B,120,0,0x435810,1, 0x435888,120,0,0x435810,2, 0x4358C5,120,0,0x435810,3, 0x435902,120,0,0x435810,4, 0x43593F,120,0,0x435810,5, 0x43597C,120,0,0x435810,6, 0x4359B9,120,0,0x435810,7, 0x4359F6,120,0,0x435810,8, 0x435A33,120,0,0x435810,9, 0x435A79,120,0,0x435810,10, 0x435AC5,120,0,0x435810,11, 0x435B17,120,0,0x435810,12, 0x435B66,120,0,0x435810,13>;
using def_t = void(int, CVector, float, CAutomobile **, unsigned char, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,CVector,float,CAutomobile **,unsigned char,unsigned char>, 0,1,2,3,4,5>;
META_END

META_BEGIN(CRecordDataForChase::StartChaseScene)
static int address;
static int global_address;
static const int id = 0x435690;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x435690, 0x435690, 0x435690>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44AC36,100,0,0x448240,1, 0x44AC36,110,0,0x448240,1, 0x44AC36,120,0,0x448240,1>;
using def_t = void(float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float>, 0>;
META_END

META_BEGIN(CRecordDataForChase::CleanUpChaseScene)
static int address;
static int global_address;
static const int id = 0x4357C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4357C0, 0x4357C0, 0x4357C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44AC5C,100,0,0x448240,1, 0x44AC5C,110,0,0x448240,1, 0x44AC5C,120,0,0x448240,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRecordDataForChase::SetUpCarsForChaseScene)
static int address;
static int global_address;
static const int id = 0x435810;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x435810, 0x435810, 0x435810>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x435696,100,0,0x435690,1, 0x435696,110,0,0x435690,1, 0x435696,120,0,0x435690,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRecordDataForChase::CleanUpCarsForChaseScene)
static int address;
static int global_address;
static const int id = 0x435B80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x435B80, 0x435B80, 0x435B80>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4357DA,100,0,0x4357C0,1, 0x4357DA,110,0,0x4357C0,1, 0x4357DA,120,0,0x4357C0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRecordDataForChase::RemoveCarFromChase)
static int address;
static int global_address;
static const int id = 0x435BC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x435BC0, 0x435BC0, 0x435BC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x588B42,100,0,0x588490,1, 0x588E82,110,0,0x5887D0,1, 0x588D72,120,0,0x5886C0,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CRecordDataForChase::TurnChaseCarIntoScriptCar)
static int address;
static int global_address;
static const int id = 0x435C00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x435C00, 0x435C00, 0x435C00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5897F6,100,0,0x588490,1, 0x589B36,110,0,0x5887D0,1, 0x589A26,120,0,0x5886C0,1>;
using def_t = CVehicle *(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(RemoveUnusedCollision)
static int address;
static int global_address;
static const int id = 0x435630;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x435630, 0x435630, 0x435630>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4356B6,100,0,0x435690,1, 0x4356B6,110,0,0x435690,1, 0x4356B6,120,0,0x435690,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
