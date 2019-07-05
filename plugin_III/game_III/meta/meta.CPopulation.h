/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPopulation::Initialise)
static int address;
static int global_address;
static const int id = 0x4F3770;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F3770, 0x4F3820, 0x4F37B0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x48C21E,100,0,0x48BED0,1, 0x48C53A,100,0,0x48C4B0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPopulation::LoadPedGroups)
static int address;
static int global_address;
static const int id = 0x4F3870;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F3870, 0x4F3920, 0x4F38B0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4F384E,100,0,0x4F3770,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPopulation::Update)
static int address;
static int global_address;
static const int id = 0x4F39A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F39A0, 0x4F3A50, 0x4F39E0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x48C93B,100,0,0x48C850,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPopulation::GeneratePedsAtStartOfGame)
static int address;
static int global_address;
static const int id = 0x4F3AD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F3AD0, 0x4F3B80, 0x4F3B10>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4F39D6,100,0,0x4F39A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPopulation::ManagePopulation)
static int address;
static int global_address;
static const int id = 0x4F3B90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F3B90, 0x4F3C40, 0x4F3BD0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4F39B0,100,0,0x4F39A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPopulation::ConvertAllObjectsToDummyObjects)
static int address;
static int global_address;
static const int id = 0x4F4410;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F4410, 0x4F44C0, 0x4F4450>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4AE874,100,0,0x4AE850,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPopulation::ConvertToRealObject)
static int address;
static int global_address;
static const int id = 0x4F4470;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F4470, 0x4F4520, 0x4F44B0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x4F3E48,100,0,0x4F3B90,1, 0x58A640,100,0,0x589D00,1>;
using def_t = void(CDummyObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CDummyObject *>, 0>;
META_END

META_BEGIN(CPopulation::ConvertToDummyObject)
static int address;
static int global_address;
static const int id = 0x4F45A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F45A0, 0x4F4650, 0x4F45E0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x4A2809,100,0,0x4A2550,1, 0x4F3D38,100,0,0x4F3B90,1, 0x4F4456,100,0,0x4F4410,1>;
using def_t = void(CObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CObject *>, 0>;
META_END

META_BEGIN(CPopulation::TestRoomForDummyObject)
static int address;
static int global_address;
static const int id = 0x4F4690;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F4690, 0x4F4740, 0x4F46D0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4F3D2D,100,0,0x4F3B90,1>;
using def_t = bool(CObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CObject *>, 0>;
META_END

META_BEGIN(CPopulation::TestSafeForRealObject)
static int address;
static int global_address;
static const int id = 0x4F4700;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F4700, 0x4F47B0, 0x4F4740>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4F4477,100,0,0x4F4470,1>;
using def_t = bool(CDummyObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CDummyObject *>, 0>;
META_END

META_BEGIN(CPopulation::AddToPopulation)
static int address;
static int global_address;
static const int id = 0x4F4A00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F4A00, 0x4F4AB0, 0x4F4A40>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x4F3AB5,100,0,0x4F39A0,1, 0x4F3B72,100,0,0x4F3AD0,1>;
using def_t = void(float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float>, 0,1,2,3>;
META_END

META_BEGIN(CPopulation::AddPed)
static int address;
static int global_address;
static const int id = 0x4F5280;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F5280, 0x4F5330, 0x4F52C0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x4F5167,100,0,0x4F4A00,1, 0x4F59CD,100,0,0x4F5800,1>;
using def_t = CPed *(ePedType, unsigned int, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<ePedType,unsigned int,CVector *>, 0,1,2>;
META_END

META_BEGIN(CPopulation::RemovePed)
static int address;
static int global_address;
static const int id = 0x4F56F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F56F0, 0x4F57A0, 0x4F5730>;
// total references count: 10en (15), 11en (0), steam (0)
using refs_t = RefList<0x454260,100,0,0x454060,1, 0x454280,100,0,0x454060,2, 0x4542D6,100,0,0x454060,3, 0x4B40DE,100,0,0x4B4060,1, 0x4B4E41,100,0,0x4B4E10,1, 0x4B4F18,100,0,0x4B4E70,1, 0x4B4FD8,100,0,0x4B4E70,2, 0x4B4FFC,100,0,0x4B4E70,3, 0x4B51F0,100,0,0x4B50E0,1, 0x4B5210,100,0,0x4B50E0,2, 0x4B5390,100,0,0x4B52B0,1, 0x4F4371,100,0,0x4F3B90,1, 0x585360,100,0,0x5852C0,1, 0x58547C,100,0,0x5853F0,1, 0x586038,100,0,0x585BB0,1>;
using def_t = void(CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPed *>, 0>;
META_END

META_BEGIN(CPopulation::ChoosePolicePedOccupation)
static int address;
static int global_address;
static const int id = 0x4F5710;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F5710, 0x4F57C0, 0x4F5750>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4F4C0F,100,0,0x4F4A00,1>;
using def_t = eCopType();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPopulation::ChooseCivilianOccupation)
static int address;
static int global_address;
static const int id = 0x4F5720;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F5720, 0x4F57D0, 0x4F5760>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x44C069,100,0,0x448240,1, 0x4F4D29,100,0,0x4F4A00,1, 0x4F5959,100,0,0x4F5800,1>;
using def_t = int(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPopulation::ChooseGangOccupation)
static int address;
static int global_address;
static const int id = 0x4F5780;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F5780, 0x4F5830, 0x4F57C0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x4F4E88,100,0,0x4F4A00,1, 0x4F591E,100,0,0x4F5800,1>;
using def_t = int(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPopulation::AddPedInCar)
static int address;
static int global_address;
static const int id = 0x4F5800;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F5800, 0x4F58B0, 0x4F5840>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x5520DA,100,0,0x5520C0,1, 0x552179,100,0,0x552160,1>;
using def_t = CPed *(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CPopulation::UpdatePedCount)
static int address;
static int global_address;
static const int id = 0x4F5A60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F5A60, 0x4F5B10, 0x4F5AA0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x4C508B,100,0,0x4C41C0,1, 0x4C51E7,100,0,0x4C50D0,1, 0x596BAF,100,0,0x5966E0,1>;
using def_t = void(ePedType, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<ePedType,unsigned char>, 0,1>;
META_END

META_BEGIN(CPopulation::MoveCarsAndPedsOutOfAbandonedZones)
static int address;
static int global_address;
static const int id = 0x4F5BE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F5BE0, 0x4F5C90, 0x4F5C20>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4F39B5,100,0,0x4F39A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPopulation::FindCollisionZoneForCoors)
static int address;
static int global_address;
static const int id = 0x4F6010;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6010, 0x4F60C0, 0x4F6050>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x4F5CC4,100,0,0x4F5BE0,1, 0x4F5EC9,100,0,0x4F5BE0,2, 0x4F6261,100,0,0x4F6200,1>;
using def_t = void(CVector *, int *, eLevelName *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *,int *,eLevelName *>, 0,1,2>;
META_END

META_BEGIN(CPopulation::IsPointInSafeZone)
static int address;
static int global_address;
static const int id = 0x4F60C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F60C0, 0x4F6170, 0x4F6100>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x531997,100,0,0x531470,1, 0x5319A9,100,0,0x531470,2>;
using def_t = bool(CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *>, 0>;
META_END

META_BEGIN(CPopulation::FindClosestZoneForCoors)
static int address;
static int global_address;
static const int id = 0x4F6150;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6150, 0x4F6200, 0x4F6190>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4F627F,100,0,0x4F6200,1>;
using def_t = void(CVector *, int *, eLevelName, eLevelName);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *,int *,eLevelName,eLevelName>, 0,1,2,3>;
META_END

META_BEGIN(CPopulation::DealWithZoneChange)
static int address;
static int global_address;
static const int id = 0x4F6200;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6200, 0x4F62B0, 0x4F6240>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x40B815,100,0,0x40B5B0,1, 0x4F3859,100,0,0x4F3770,1, 0x589D94,100,0,0x589D00,1>;
using def_t = void(eLevelName, eLevelName, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<eLevelName,eLevelName,bool>, 0,1,2>;
META_END

META_BEGIN(CPopulation::PedCreationDistMultiplier)
static int address;
static int global_address;
static const int id = 0x4F6410;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F6410, 0x4F64C0, 0x4F6450>;
// total references count: 10en (12), 11en (0), steam (0)
using refs_t = RefList<0x4F3A55,100,0,0x4F39A0,1, 0x4F3A63,100,0,0x4F39A0,2, 0x4F3A78,100,0,0x4F39A0,3, 0x4F3A8F,100,0,0x4F39A0,4, 0x4F3B42,100,0,0x4F3AD0,1, 0x4F3B50,100,0,0x4F3AD0,2, 0x4F3F5D,100,0,0x4F3B90,1, 0x4F3F8F,100,0,0x4F3B90,2, 0x4F3FAE,100,0,0x4F3B90,3, 0x4F4B12,100,0,0x4F4A00,1, 0x4F4B24,100,0,0x4F4A00,2, 0x4F5132,100,0,0x4F4A00,3>;
using def_t = float();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
