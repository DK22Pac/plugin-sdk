/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

DEL_DTOR_META_BEGIN(CAutomobile)
static int address;
static int global_address;
static const int id = 0x4202A0;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x4202A0, 0x4202A0, 0x4202A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C1C,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = void(CAutomobile *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,int>, 0,1>;
META_END

META_BEGIN(CAutomobile::HasCarStoppedBecauseOfLight)
static int address;
static int global_address;
static const int id = 0x42E220;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42E220, 0x42E220, 0x42E220>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x53C4CC,100,0,0x53C4B0,1, 0x53C70C,110,0,0x53C6F0,1, 0x53C6BC,120,0,0x53C6A0,1>;
using def_t = bool(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::GetHeightAboveRoad)
static int address;
static int global_address;
static const int id = 0x437690;
static const bool is_virtual = true;
static const int vtable_index = 33;
using mv_addresses_t = MvAddresses<0x437690, 0x437690, 0x437690>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600CA0,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = float(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::FireTruckControl)
static int address;
static int global_address;
static const int id = 0x522590;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x522590, 0x5227D0, 0x522760>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x531FF7,100,0,0x531470,1, 0x532237,110,0,0x5316B0,1, 0x5321C7,120,0,0x531640,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

CTOR_META_BEGIN_OVERLOADED(CAutomobile, void(int, unsigned char))
static int address;
static int global_address;
static const int id = 0x52C6B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x52C6B0, 0x52C8F0, 0x52C880>;
// total references count: 10en (15), 11en (15), steam (15)
using refs_t = RefList<0x416C9E,100,0,0x4165F0,1, 0x41FF3B,100,0,0x41FE50,1, 0x4276D7,100,0,0x427690,1, 0x4355C5,100,0,0x435570,1, 0x435C4F,100,0,0x435C30,1, 0x43749C,100,0,0x436FA0,1, 0x43C60F,100,0,0x43AEA0,1, 0x44EE10,100,0,0x44CB80,1, 0x490F86,100,0,0x490EE0,1, 0x4A1C7F,100,0,0x4A1B40,1, 0x4DAFD2,100,0,0x4D94E0,1, 0x5429DF,100,0,0x5426E0,1, 0x586117,100,0,0x585BB0,1, 0x58743C,100,0,0x587200,1, 0x5954BF,100,0,0x595240,1, 0x416C9E,110,0,0x4165F0,1, 0x41FF3B,110,0,0x41FE50,1, 0x4276D7,110,0,0x427690,1, 0x4355C5,110,0,0x435570,1, 0x435C4F,110,0,0x435C30,1, 0x43749C,110,0,0x436FA0,1, 0x43C60F,110,0,0x43AEA0,1, 0x44EE10,110,0,0x44CB80,1, 0x491046,110,0,0x490FA0,1, 0x4A1D6F,110,0,0x4A1C30,1, 0x4DB072,110,0,0x4D9580,1, 0x542C1F,110,0,0x542920,1, 0x586457,110,0,0x585EF0,1, 0x58777C,110,0,0x587540,1, 0x59576F,110,0,0x5954F0,1, 0x416C9E,120,0,0x4165F0,1, 0x41FF3B,120,0,0x41FE50,1, 0x4276D7,120,0,0x427690,1, 0x4355C5,120,0,0x435570,1, 0x435C4F,120,0,0x435C30,1, 0x43749C,120,0,0x436FA0,1, 0x43C60F,120,0,0x43AEA0,1, 0x44EE10,120,0,0x44CB80,1, 0x490FD6,120,0,0x490F30,1, 0x4A1CFF,120,0,0x4A1BC0,1, 0x4DB002,120,0,0x4D9510,1, 0x542BCF,120,0,0x5428D0,1, 0x586347,120,0,0x585DE0,1, 0x58766C,120,0,0x587430,1, 0x59565F,120,0,0x5953E0,1>;
using def_t = CAutomobile *(CAutomobile *, int, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,int,unsigned char>, 0,1,2>;
META_END

DTOR_META_BEGIN(CAutomobile)
static int address;
static int global_address;
static const int id = 0x52D170;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x52D170, 0x52D3B0, 0x52D340>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4202C3,100,0,0x4202A0,1, 0x4202B4,100,2,0,1, 0x4202C3,110,0,0x4202A0,1, 0x4202B4,110,2,0,1, 0x4202C3,120,0,0x4202A0,1, 0x4202B4,120,2,0,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::SetModelIndex)
static int address;
static int global_address;
static const int id = 0x52D190;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x52D190, 0x52D3D0, 0x52D360>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C28,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = void(CAutomobile *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,unsigned int>, 0,1>;
META_END

META_BEGIN(CAutomobile::SetupModelNodes)
static int address;
static int global_address;
static const int id = 0x52D1B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x52D1B0, 0x52D3F0, 0x52D380>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x52D19F,100,0,0x52D190,1, 0x52D3DF,110,0,0x52D3D0,1, 0x52D36F,120,0,0x52D360,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::SetupSuspensionLines)
static int address;
static int global_address;
static const int id = 0x52D210;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x52D210, 0x52D450, 0x52D3E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x52CEF8,100,0,0x52C6B0,1, 0x52D138,110,0,0x52C8F0,1, 0x52D0C8,120,0,0x52C880,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::HydraulicControl)
static int address;
static int global_address;
static const int id = 0x52D4E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x52D4E0, 0x52D720, 0x52D6B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x53202B,100,0,0x531470,1, 0x53226B,110,0,0x5316B0,1, 0x5321FB,120,0,0x531640,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::GetComponentWorldPosition)
static int address;
static int global_address;
static const int id = 0x52E5F0;
static const bool is_virtual = true;
static const int vtable_index = 19;
using mv_addresses_t = MvAddresses<0x52E5F0, 0x52E830, 0x52E7C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C68,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = void(CAutomobile *, int, CVector &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,int,CVector &>, 0,1,2>;
META_END

META_BEGIN(CAutomobile::IsComponentPresent)
static int address;
static int global_address;
static const int id = 0x52E660;
static const bool is_virtual = true;
static const int vtable_index = 20;
using mv_addresses_t = MvAddresses<0x52E660, 0x52E8A0, 0x52E830>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C6C,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = bool(CAutomobile *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,int>, 0,1>;
META_END

META_BEGIN(CAutomobile::SetComponentRotation)
static int address;
static int global_address;
static const int id = 0x52E680;
static const bool is_virtual = true;
static const int vtable_index = 21;
using mv_addresses_t = MvAddresses<0x52E680, 0x52E8C0, 0x52E850>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C70,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = void(CAutomobile *, int, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,int,CVector>, 0,1,2>;
META_END

META_BEGIN(CAutomobile::OpenDoor)
static int address;
static int global_address;
static const int id = 0x52E750;
static const bool is_virtual = true;
static const int vtable_index = 22;
using mv_addresses_t = MvAddresses<0x52E750, 0x52E990, 0x52E920>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C74,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = void(CAutomobile *, int, eDoors, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,int,eDoors,float>, 0,1,2,3>;
META_END

META_BEGIN(CAutomobile::ProcessOpenDoor)
static int address;
static int global_address;
static const int id = 0x52E910;
static const bool is_virtual = true;
static const int vtable_index = 23;
using mv_addresses_t = MvAddresses<0x52E910, 0x52EB50, 0x52EAE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C78,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = void(CAutomobile *, unsigned int, unsigned int, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,unsigned int,unsigned int,float>, 0,1,2,3>;
META_END

META_BEGIN(CAutomobile::IsDoorReady)
static int address;
static int global_address;
static const int id = 0x52EF10;
static const bool is_virtual = true;
static const int vtable_index = 24;
using mv_addresses_t = MvAddresses<0x52EF10, 0x52F150, 0x52F0E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C7C,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = bool(CAutomobile *, eDoors);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,eDoors>, 0,1>;
META_END

META_BEGIN(CAutomobile::IsDoorFullyOpen)
static int address;
static int global_address;
static const int id = 0x52EF90;
static const bool is_virtual = true;
static const int vtable_index = 25;
using mv_addresses_t = MvAddresses<0x52EF90, 0x52F1D0, 0x52F160>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C80,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = bool(CAutomobile *, eDoors);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,eDoors>, 0,1>;
META_END

META_BEGIN(CAutomobile::IsDoorClosed)
static int address;
static int global_address;
static const int id = 0x52EFD0;
static const bool is_virtual = true;
static const int vtable_index = 26;
using mv_addresses_t = MvAddresses<0x52EFD0, 0x52F210, 0x52F1A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C84,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = bool(CAutomobile *, eDoors);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,eDoors>, 0,1>;
META_END

META_BEGIN(CAutomobile::IsDoorMissing)
static int address;
static int global_address;
static const int id = 0x52F000;
static const bool is_virtual = true;
static const int vtable_index = 27;
using mv_addresses_t = MvAddresses<0x52F000, 0x52F240, 0x52F1D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C88,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = bool(CAutomobile *, eDoors);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,eDoors>, 0,1>;
META_END

META_BEGIN(CAutomobile::dmgDrawCarCollidingParticles)
static int address;
static int global_address;
static const int id = 0x52F030;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x52F030, 0x52F270, 0x52F200>;
// total references count: 10en (12), 11en (12), steam (12)
using refs_t = RefList<0x52F79C,100,0,0x52F390,1, 0x52F817,100,0,0x52F390,2, 0x52F885,100,0,0x52F390,3, 0x52F900,100,0,0x52F390,4, 0x52F963,100,0,0x52F390,5, 0x52F9D9,100,0,0x52F390,6, 0x52FA4F,100,0,0x52F390,7, 0x52FAC5,100,0,0x52F390,8, 0x52FB37,100,0,0x52F390,9, 0x52FB9A,100,0,0x52F390,10, 0x52FBFD,100,0,0x52F390,11, 0x52FC60,100,0,0x52F390,12, 0x52F9DC,110,0,0x52F5D0,1, 0x52FA57,110,0,0x52F5D0,2, 0x52FAC5,110,0,0x52F5D0,3, 0x52FB40,110,0,0x52F5D0,4, 0x52FBA3,110,0,0x52F5D0,5, 0x52FC19,110,0,0x52F5D0,6, 0x52FC8F,110,0,0x52F5D0,7, 0x52FD05,110,0,0x52F5D0,8, 0x52FD77,110,0,0x52F5D0,9, 0x52FDDA,110,0,0x52F5D0,10, 0x52FE3D,110,0,0x52F5D0,11, 0x52FEA0,110,0,0x52F5D0,12, 0x52F96C,120,0,0x52F560,1, 0x52F9E7,120,0,0x52F560,2, 0x52FA55,120,0,0x52F560,3, 0x52FAD0,120,0,0x52F560,4, 0x52FB33,120,0,0x52F560,5, 0x52FBA9,120,0,0x52F560,6, 0x52FC1F,120,0,0x52F560,7, 0x52FC95,120,0,0x52F560,8, 0x52FD07,120,0,0x52F560,9, 0x52FD6A,120,0,0x52F560,10, 0x52FDCD,120,0,0x52F560,11, 0x52FE30,120,0,0x52F560,12>;
using def_t = void(CAutomobile *, CVector const &, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,CVector const &,float>, 0,1,2>;
META_END

META_BEGIN(CAutomobile::VehicleDamage)
static int address;
static int global_address;
static const int id = 0x52F390;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x52F390, 0x52F5D0, 0x52F560>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x531FE3,100,0,0x531470,1, 0x532223,110,0,0x5316B0,1, 0x5321B3,120,0,0x531640,1>;
using def_t = void(CAutomobile *, float, unsigned short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,float,unsigned short>, 0,1,2>;
META_END

META_BEGIN(CAutomobile::HideAllComps)
static int address;
static int global_address;
static const int id = 0x5300C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5300C0, 0x530300, 0x530290>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x52E800,100,0,0x52E750,1, 0x5300E3,100,0,0x5300E0,1, 0x52EA40,110,0,0x52E990,1, 0x530323,110,0,0x530320,1, 0x52E9D0,120,0,0x52E920,1, 0x5302B3,120,0,0x5302B0,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::ShowAllComps)
static int address;
static int global_address;
static const int id = 0x5300D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5300D0, 0x530310, 0x5302A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x52E883,100,0,0x52E750,1, 0x52EAC3,110,0,0x52E990,1, 0x52EA53,120,0,0x52E920,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::SetComponentVisibility)
static int address;
static int global_address;
static const int id = 0x5300E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5300E0, 0x530320, 0x5302B0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x530191,100,0,0x530120,1, 0x5301F4,100,0,0x5301A0,1, 0x530284,100,0,0x530200,1, 0x5302C6,100,0,0x530200,2, 0x53537A,100,0,0x535320,1, 0x5303D1,110,0,0x530360,1, 0x530434,110,0,0x5303E0,1, 0x5304C4,110,0,0x530440,1, 0x530506,110,0,0x530440,2, 0x5355BA,110,0,0x535560,1, 0x530361,120,0,0x5302F0,1, 0x5303C4,120,0,0x530370,1, 0x530454,120,0,0x5303D0,1, 0x530496,120,0,0x5303D0,2, 0x53554A,120,0,0x5354F0,1>;
using def_t = void(CAutomobile *, RwFrame *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,RwFrame *,unsigned int>, 0,1,2>;
META_END

META_BEGIN(CAutomobile::SetBumperDamage)
static int address;
static int global_address;
static const int id = 0x530120;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x530120, 0x530360, 0x5302F0>;
// total references count: 10en (8), 11en (8), steam (8)
using refs_t = RefList<0x52F7D2,100,0,0x52F390,1, 0x52F8BB,100,0,0x52F390,2, 0x53BCD0,100,0,0x53BC60,1, 0x53BCDD,100,0,0x53BC60,2, 0x53C322,100,0,0x53C310,1, 0x53C34E,100,0,0x53C310,2, 0x585008,100,0,0x584EA0,1, 0x585045,100,0,0x584EA0,2, 0x52FA12,110,0,0x52F5D0,1, 0x52FAFB,110,0,0x52F5D0,2, 0x53BF10,110,0,0x53BEA0,1, 0x53BF1D,110,0,0x53BEA0,2, 0x53C562,110,0,0x53C550,1, 0x53C58E,110,0,0x53C550,2, 0x585348,110,0,0x5851E0,1, 0x585385,110,0,0x5851E0,2, 0x52F9A2,120,0,0x52F560,1, 0x52FA8B,120,0,0x52F560,2, 0x53BEC0,120,0,0x53BE50,1, 0x53BECD,120,0,0x53BE50,2, 0x53C512,120,0,0x53C500,1, 0x53C53E,120,0,0x53C500,2, 0x585238,120,0,0x5850D0,1, 0x585275,120,0,0x5850D0,2>;
using def_t = void(CAutomobile *, int, ePanels, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,int,ePanels,bool>, 0,1,2,3>;
META_END

META_BEGIN(CAutomobile::SetPanelDamage)
static int address;
static int global_address;
static const int id = 0x5301A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5301A0, 0x5303E0, 0x530370>;
// total references count: 10en (14), 11en (14), steam (14)
using refs_t = RefList<0x52FB71,100,0,0x52F390,1, 0x52FBD4,100,0,0x52F390,2, 0x52FC37,100,0,0x52F390,3, 0x52FC9A,100,0,0x52F390,4, 0x52FCE3,100,0,0x52F390,5, 0x53C3D2,100,0,0x53C310,1, 0x53C3E8,100,0,0x53C310,2, 0x53C3FE,100,0,0x53C310,3, 0x53C414,100,0,0x53C310,4, 0x584ED7,100,0,0x584EA0,1, 0x584F14,100,0,0x584EA0,2, 0x584F51,100,0,0x584EA0,3, 0x584F8E,100,0,0x584EA0,4, 0x584FCB,100,0,0x584EA0,5, 0x52FDB1,110,0,0x52F5D0,1, 0x52FE14,110,0,0x52F5D0,2, 0x52FE77,110,0,0x52F5D0,3, 0x52FEDA,110,0,0x52F5D0,4, 0x52FF23,110,0,0x52F5D0,5, 0x53C612,110,0,0x53C550,1, 0x53C628,110,0,0x53C550,2, 0x53C63E,110,0,0x53C550,3, 0x53C654,110,0,0x53C550,4, 0x585217,110,0,0x5851E0,1, 0x585254,110,0,0x5851E0,2, 0x585291,110,0,0x5851E0,3, 0x5852CE,110,0,0x5851E0,4, 0x58530B,110,0,0x5851E0,5, 0x52FD41,120,0,0x52F560,1, 0x52FDA4,120,0,0x52F560,2, 0x52FE07,120,0,0x52F560,3, 0x52FE6A,120,0,0x52F560,4, 0x52FEB3,120,0,0x52F560,5, 0x53C5C2,120,0,0x53C500,1, 0x53C5D8,120,0,0x53C500,2, 0x53C5EE,120,0,0x53C500,3, 0x53C604,120,0,0x53C500,4, 0x585107,120,0,0x5850D0,1, 0x585144,120,0,0x5850D0,2, 0x585181,120,0,0x5850D0,3, 0x5851BE,120,0,0x5850D0,4, 0x5851FB,120,0,0x5850D0,5>;
using def_t = void(CAutomobile *, int, ePanels, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,int,ePanels,bool>, 0,1,2,3>;
META_END

META_BEGIN(CAutomobile::SetDoorDamage)
static int address;
static int global_address;
static const int id = 0x530200;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x530200, 0x530440, 0x5303D0>;
// total references count: 10en (30), 11en (30), steam (30)
using refs_t = RefList<0x52F85C,100,0,0x52F390,1, 0x52F93A,100,0,0x52F390,2, 0x52F9B0,100,0,0x52F390,3, 0x52FA26,100,0,0x52F390,4, 0x52FA9C,100,0,0x52F390,5, 0x52FB12,100,0,0x52F390,6, 0x53BCEA,100,0,0x53BC60,1, 0x53BCF7,100,0,0x53BC60,2, 0x53BD04,100,0,0x53BC60,3, 0x53BD11,100,0,0x53BC60,4, 0x53BD1E,100,0,0x53BC60,5, 0x53BD2B,100,0,0x53BC60,6, 0x53C338,100,0,0x53C310,1, 0x53C364,100,0,0x53C310,2, 0x53C37A,100,0,0x53C310,3, 0x53C390,100,0,0x53C310,4, 0x53C3A6,100,0,0x53C310,5, 0x53C3BC,100,0,0x53C310,6, 0x5950B1,100,0,0x594D10,1, 0x5950E8,100,0,0x594D10,2, 0x59511F,100,0,0x594D10,3, 0x595156,100,0,0x594D10,4, 0x59518D,100,0,0x594D10,5, 0x5951C4,100,0,0x594D10,6, 0x596D5B,100,0,0x5966E0,1, 0x596D68,100,0,0x5966E0,2, 0x596D75,100,0,0x5966E0,3, 0x596D82,100,0,0x5966E0,4, 0x596D8F,100,0,0x5966E0,5, 0x596D9C,100,0,0x5966E0,6, 0x52FA9C,110,0,0x52F5D0,1, 0x52FB7A,110,0,0x52F5D0,2, 0x52FBF0,110,0,0x52F5D0,3, 0x52FC66,110,0,0x52F5D0,4, 0x52FCDC,110,0,0x52F5D0,5, 0x52FD52,110,0,0x52F5D0,6, 0x53BF2A,110,0,0x53BEA0,1, 0x53BF37,110,0,0x53BEA0,2, 0x53BF44,110,0,0x53BEA0,3, 0x53BF51,110,0,0x53BEA0,4, 0x53BF5E,110,0,0x53BEA0,5, 0x53BF6B,110,0,0x53BEA0,6, 0x53C578,110,0,0x53C550,1, 0x53C5A4,110,0,0x53C550,2, 0x53C5BA,110,0,0x53C550,3, 0x53C5D0,110,0,0x53C550,4, 0x53C5E6,110,0,0x53C550,5, 0x53C5FC,110,0,0x53C550,6, 0x595361,110,0,0x594FC0,1, 0x595398,110,0,0x594FC0,2, 0x5953CF,110,0,0x594FC0,3, 0x595406,110,0,0x594FC0,4, 0x59543D,110,0,0x594FC0,5, 0x595474,110,0,0x594FC0,6, 0x59700B,110,0,0x596990,1, 0x597018,110,0,0x596990,2, 0x597025,110,0,0x596990,3, 0x597032,110,0,0x596990,4, 0x59703F,110,0,0x596990,5, 0x59704C,110,0,0x596990,6, 0x52FA2C,120,0,0x52F560,1, 0x52FB0A,120,0,0x52F560,2, 0x52FB80,120,0,0x52F560,3, 0x52FBF6,120,0,0x52F560,4, 0x52FC6C,120,0,0x52F560,5, 0x52FCE2,120,0,0x52F560,6, 0x53BEDA,120,0,0x53BE50,1, 0x53BEE7,120,0,0x53BE50,2, 0x53BEF4,120,0,0x53BE50,3, 0x53BF01,120,0,0x53BE50,4, 0x53BF0E,120,0,0x53BE50,5, 0x53BF1B,120,0,0x53BE50,6, 0x53C528,120,0,0x53C500,1, 0x53C554,120,0,0x53C500,2, 0x53C56A,120,0,0x53C500,3, 0x53C580,120,0,0x53C500,4, 0x53C596,120,0,0x53C500,5, 0x53C5AC,120,0,0x53C500,6, 0x595251,120,0,0x594EB0,1, 0x595288,120,0,0x594EB0,2, 0x5952BF,120,0,0x594EB0,3, 0x5952F6,120,0,0x594EB0,4, 0x59532D,120,0,0x594EB0,5, 0x595364,120,0,0x594EB0,6, 0x596EFB,120,0,0x596880,1, 0x596F08,120,0,0x596880,2, 0x596F15,120,0,0x596880,3, 0x596F22,120,0,0x596880,4, 0x596F2F,120,0,0x596880,5, 0x596F3C,120,0,0x596880,6>;
using def_t = void(CAutomobile *, int, eDoors, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,int,eDoors,bool>, 0,1,2,3>;
META_END

META_BEGIN(CAutomobile::SpawnFlyingComponent)
static int address;
static int global_address;
static const int id = 0x530300;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x530300, 0x530540, 0x5304D0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x530180,100,0,0x530120,1, 0x5301E3,100,0,0x5301A0,1, 0x5302B5,100,0,0x530200,1, 0x535368,100,0,0x535320,1, 0x53BD36,100,0,0x53BC60,1, 0x5303C0,110,0,0x530360,1, 0x530423,110,0,0x5303E0,1, 0x5304F5,110,0,0x530440,1, 0x5355A8,110,0,0x535560,1, 0x53BF76,110,0,0x53BEA0,1, 0x530350,120,0,0x5302F0,1, 0x5303B3,120,0,0x530370,1, 0x530485,120,0,0x5303D0,1, 0x535538,120,0,0x5354F0,1, 0x53BF26,120,0,0x53BE50,1>;
using def_t = CObject *(CAutomobile *, int, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,int,unsigned int>, 0,1,2>;
META_END

META_BEGIN(CAutomobile::ReduceHornCounter)
static int address;
static int global_address;
static const int id = 0x5308C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5308C0, 0x530B00, 0x530A90>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x531B1F,100,0,0x531470,1, 0x5341B5,100,0,0x531470,2, 0x531D5F,110,0,0x5316B0,1, 0x5343F5,110,0,0x5316B0,2, 0x531CEF,120,0,0x531640,1, 0x534385,120,0,0x531640,2>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::ProcessBuoyancy)
static int address;
static int global_address;
static const int id = 0x5308D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5308D0, 0x530B10, 0x530AA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x532B09,100,0,0x531470,1, 0x532D49,110,0,0x5316B0,1, 0x532CD9,120,0,0x531640,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::ProcessControl)
static int address;
static int global_address;
static const int id = 0x531470;
static const bool is_virtual = true;
static const int vtable_index = 8;
using mv_addresses_t = MvAddresses<0x531470, 0x5316B0, 0x531640>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C3C,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::Teleport)
static int address;
static int global_address;
static const int id = 0x535180;
static const bool is_virtual = true;
static const int vtable_index = 11;
using mv_addresses_t = MvAddresses<0x535180, 0x5353C0, 0x535350>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C48,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = void(CAutomobile *, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,CVector>, 0,1>;
META_END

META_BEGIN(CAutomobile::ProcessSwingingDoor)
static int address;
static int global_address;
static const int id = 0x535250;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x535250, 0x535490, 0x535420>;
// total references count: 10en (8), 11en (8), steam (8)
using refs_t = RefList<0x53AC28,100,0,0x539EA0,1, 0x53AC33,100,0,0x539EA0,2, 0x53B1EC,100,0,0x539EA0,3, 0x53B1F7,100,0,0x539EA0,4, 0x53B202,100,0,0x539EA0,5, 0x53B20D,100,0,0x539EA0,6, 0x53B218,100,0,0x539EA0,7, 0x53B223,100,0,0x539EA0,8, 0x53AE68,110,0,0x53A0E0,1, 0x53AE73,110,0,0x53A0E0,2, 0x53B42C,110,0,0x53A0E0,3, 0x53B437,110,0,0x53A0E0,4, 0x53B442,110,0,0x53A0E0,5, 0x53B44D,110,0,0x53A0E0,6, 0x53B458,110,0,0x53A0E0,7, 0x53B463,110,0,0x53A0E0,8, 0x53AE18,120,0,0x53A090,1, 0x53AE23,120,0,0x53A090,2, 0x53B3DC,120,0,0x53A090,3, 0x53B3E7,120,0,0x53A090,4, 0x53B3F2,120,0,0x53A090,5, 0x53B3FD,120,0,0x53A090,6, 0x53B408,120,0,0x53A090,7, 0x53B413,120,0,0x53A090,8>;
using def_t = void(CAutomobile *, int, eDoors);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,int,eDoors>, 0,1,2>;
META_END

META_BEGIN(CAutomobile::RemoveBonnetInPedCollision)
static int address;
static int global_address;
static const int id = 0x535320;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x535320, 0x535560, 0x5354F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4ECB08,100,0,0x4EC430,1, 0x4ECBB8,110,0,0x4EC4E0,1, 0x4ECB48,120,0,0x4EC470,1>;
using def_t = CObject *(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::ResetSuspension)
static int address;
static int global_address;
static const int id = 0x5353A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5353A0, 0x5355E0, 0x535570>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x535230,100,0,0x535180,1, 0x535470,110,0,0x5353C0,1, 0x535400,120,0,0x535350,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::AddDamagedVehicleParticles)
static int address;
static int global_address;
static const int id = 0x535450;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x535450, 0x535690, 0x535620>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5370A6,100,0,0x535B40,1, 0x5372E6,110,0,0x535D80,1, 0x537276,120,0,0x535D10,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::AddWheelDirtAndWater)
static int address;
static int global_address;
static const int id = 0x5357D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5357D0, 0x535A10, 0x5359A0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x5360D2,100,0,0x535B40,1, 0x5362E6,100,0,0x535B40,2, 0x5363CF,100,0,0x535B40,3, 0x5364EC,100,0,0x535B40,4, 0x536312,110,0,0x535D80,1, 0x536526,110,0,0x535D80,2, 0x53660F,110,0,0x535D80,3, 0x53672C,110,0,0x535D80,4, 0x5362A2,120,0,0x535D10,1, 0x5364B6,120,0,0x535D10,2, 0x53659F,120,0,0x535D10,3, 0x5366BC,120,0,0x535D10,4>;
using def_t = bool(CAutomobile *, CColPoint &, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,CColPoint &,unsigned int>, 0,1,2>;
META_END

META_BEGIN(CAutomobile::PreRender)
static int address;
static int global_address;
static const int id = 0x535B40;
static const bool is_virtual = true;
static const int vtable_index = 12;
using mv_addresses_t = MvAddresses<0x535B40, 0x535D80, 0x535D10>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C4C,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::Render)
static int address;
static int global_address;
static const int id = 0x539EA0;
static const bool is_virtual = true;
static const int vtable_index = 13;
using mv_addresses_t = MvAddresses<0x539EA0, 0x53A0E0, 0x53A090>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C50,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::ProcessEntityCollision)
static int address;
static int global_address;
static const int id = 0x53B270;
static const bool is_virtual = true;
static const int vtable_index = 17;
using mv_addresses_t = MvAddresses<0x53B270, 0x53B4B0, 0x53B460>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C60,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = void(CAutomobile *, CEntity *, CColPoint *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,CEntity *,CColPoint *>, 0,1,2>;
META_END

META_BEGIN(CAutomobile::ProcessControlInputs)
static int address;
static int global_address;
static const int id = 0x53B660;
static const bool is_virtual = true;
static const int vtable_index = 18;
using mv_addresses_t = MvAddresses<0x53B660, 0x53B8A0, 0x53B850>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C64,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = void(CAutomobile *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,unsigned char>, 0,1>;
META_END

META_BEGIN(CAutomobile::GetAllWheelsOffGround)
static int address;
static int global_address;
static const int id = 0x53BC40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53BC40, 0x53BE80, 0x53BE30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43F769,100,0,0x43ED30,1, 0x43F769,110,0,0x43ED30,1, 0x43F769,120,0,0x43ED30,1>;
using def_t = bool(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::BlowUpCar)
static int address;
static int global_address;
static const int id = 0x53BC60;
static const bool is_virtual = true;
static const int vtable_index = 29;
using mv_addresses_t = MvAddresses<0x53BC60, 0x53BEA0, 0x53BE50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C90,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = void(CAutomobile *, CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,CEntity *>, 0,1>;
META_END

META_BEGIN(CAutomobile::RemoveRefsToVehicle)
static int address;
static int global_address;
static const int id = 0x53BF40;
static const bool is_virtual = true;
static const int vtable_index = 28;
using mv_addresses_t = MvAddresses<0x53BF40, 0x53C180, 0x53C130>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C8C,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = void(CAutomobile *, CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,CEntity *>, 0,1>;
META_END

META_BEGIN(CAutomobile::SetUpWheelColModel)
static int address;
static int global_address;
static const int id = 0x53BF70;
static const bool is_virtual = true;
static const int vtable_index = 30;
using mv_addresses_t = MvAddresses<0x53BF70, 0x53C1B0, 0x53C160>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C94,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = bool(CAutomobile *, CColModel *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,CColModel *>, 0,1>;
META_END

META_BEGIN(CAutomobile::BurstTyre)
static int address;
static int global_address;
static const int id = 0x53C0E0;
static const bool is_virtual = true;
static const int vtable_index = 31;
using mv_addresses_t = MvAddresses<0x53C0E0, 0x53C320, 0x53C2D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C98,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = void(CAutomobile *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,unsigned char>, 0,1>;
META_END

META_BEGIN(CAutomobile::Fix)
static int address;
static int global_address;
static const int id = 0x53C240;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53C240, 0x53C480, 0x53C430>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x422787,100,0,0x4222D0,1, 0x422787,110,0,0x4222D0,1, 0x422787,120,0,0x4222D0,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::SetupDamageAfterLoad)
static int address;
static int global_address;
static const int id = 0x53C310;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53C310, 0x53C550, 0x53C500>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A1D27,100,0,0x4A1B40,1, 0x4A1E17,110,0,0x4A1C30,1, 0x4A1DA7,120,0,0x4A1BC0,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::SetTaxiLight)
static int address;
static int global_address;
static const int id = 0x53C420;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53C420, 0x53C660, 0x53C610>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x443424,100,0,0x4429C0,1, 0x443424,110,0,0x4429C0,1, 0x443424,120,0,0x4429C0,1>;
using def_t = void(CAutomobile *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,bool>, 0,1>;
META_END

META_BEGIN(CAutomobile::SetAllTaxiLights)
static int address;
static int global_address;
static const int id = 0x53C440;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53C440, 0x53C680, 0x53C630>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4437E8,100,0,0x4429C0,1, 0x4437E8,110,0,0x4429C0,1, 0x4437E8,120,0,0x4429C0,1>;
using def_t = void(bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(CAutomobile::PlayCarHorn)
static int address;
static int global_address;
static const int id = 0x53C450;
static const bool is_virtual = true;
static const int vtable_index = 34;
using mv_addresses_t = MvAddresses<0x53C450, 0x53C690, 0x53C640>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600CA4,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::PlayHornIfNecessary)
static int address;
static int global_address;
static const int id = 0x53C4B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53C4B0, 0x53C6F0, 0x53C6A0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x531B18,100,0,0x531470,1, 0x531B4D,100,0,0x531470,2, 0x531D58,110,0,0x5316B0,1, 0x531D8D,110,0,0x5316B0,2, 0x531CE8,120,0,0x531640,1, 0x531D1D,120,0,0x531640,2>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::ScanForCrimes)
static int address;
static int global_address;
static const int id = 0x53C4F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53C4F0, 0x53C730, 0x53C6E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5316F5,100,0,0x531470,1, 0x531935,110,0,0x5316B0,1, 0x5318C5,120,0,0x531640,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::IsRoomForPedToLeaveCar)
static int address;
static int global_address;
static const int id = 0x53C5B0;
static const bool is_virtual = true;
static const int vtable_index = 32;
using mv_addresses_t = MvAddresses<0x53C5B0, 0x53C7F0, 0x53C7A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x600C9C,100,2,0x600C1C,1, 0x600A04,110,2,0x600A04,1, 0x60D9FC,120,2,0x60D9FC,1>;
using def_t = bool(CAutomobile *, unsigned int, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,unsigned int,CVector *>, 0,1,2>;
META_END

META_BEGIN(CAutomobile::RcbanditCheckHitWheels)
static int address;
static int global_address;
static const int id = 0x53C990;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53C990, 0x53CBD0, 0x53CB80>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x531978,100,0,0x531470,1, 0x531BB8,110,0,0x5316B0,1, 0x531B48,120,0,0x531640,1>;
using def_t = bool(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::RcbanditCheck1CarWheels)
static int address;
static int global_address;
static const int id = 0x53CBA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53CBA0, 0x53CDE0, 0x53CD90>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x53CB39,100,0,0x53C990,1, 0x53CB56,100,0,0x53C990,2, 0x53CD79,110,0,0x53CBD0,1, 0x53CD96,110,0,0x53CBD0,2, 0x53CD29,120,0,0x53CB80,1, 0x53CD46,120,0,0x53CB80,2>;
using def_t = bool(CAutomobile *, CPtrList &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,CPtrList &>, 0,1>;
META_END

META_BEGIN(CAutomobile::SetBusDoorTimer)
static int address;
static int global_address;
static const int id = 0x53D320;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53D320, 0x53D560, 0x53D510>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4CF783,100,0,0x4CF220,1, 0x4CF823,110,0,0x4CF2C0,1, 0x4CF7B3,120,0,0x4CF250,1>;
using def_t = void(CAutomobile *, unsigned int, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *,unsigned int,unsigned char>, 0,1,2>;
META_END

META_BEGIN(CAutomobile::ProcessAutoBusDoors)
static int address;
static int global_address;
static const int id = 0x53D370;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53D370, 0x53D5B0, 0x53D560>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5316AB,100,0,0x531470,1, 0x5318EB,110,0,0x5316B0,1, 0x53187B,120,0,0x531640,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::TankControl)
static int address;
static int global_address;
static const int id = 0x53D530;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53D530, 0x53D770, 0x53D720>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x53200A,100,0,0x531470,1, 0x53224A,110,0,0x5316B0,1, 0x5321DA,120,0,0x531640,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::BlowUpCarsInPath)
static int address;
static int global_address;
static const int id = 0x53E000;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53E000, 0x53E240, 0x53E1F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x532011,100,0,0x531470,1, 0x532251,110,0,0x5316B0,1, 0x5321E1,120,0,0x531640,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::PlaceOnRoadProperly)
static int address;
static int global_address;
static const int id = 0x53E090;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x53E090, 0x53E2D0, 0x53E280>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4374DD,100,0,0x436FA0,1, 0x4F5DF4,100,0,0x4F5BE0,1, 0x4374DD,110,0,0x436FA0,1, 0x4F5EA4,110,0,0x4F5C90,1, 0x4374DD,120,0,0x436FA0,1, 0x4F5E34,120,0,0x4F5C20,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(CAutomobile::DoDriveByShootings)
static int address;
static int global_address;
static const int id = 0x564000;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x564000, 0x564130, 0x5640E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x531A5D,100,0,0x531470,1, 0x531C9D,110,0,0x5316B0,1, 0x531C2D,120,0,0x531640,1>;
using def_t = void(CAutomobile *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CAutomobile *>, 0>;
META_END

META_BEGIN(SetVehicleAtomicVisibilityCB)
static int address;
static int global_address;
static const int id = 0x52C660;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x52C660, 0x52C8A0, 0x52C830>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x530102,100,2,0,1, 0x530342,110,2,0,1, 0x5302D2,120,2,0,1>;
using def_t = RwObject *(RwObject *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwObject *,void *>, 0,1>;
META_END

META_BEGIN(GetCurrentAtomicObjectCB)
static int address;
static int global_address;
static const int id = 0x52C690;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x52C690, 0x52C8D0, 0x52C860>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x530339,100,2,0,1, 0x53BD4F,100,2,0,1, 0x530579,110,2,0,1, 0x53BF8F,110,2,0,1, 0x530509,120,2,0,1, 0x53BF3F,120,2,0,1>;
using def_t = RwObject *(RwObject *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwObject *,void *>, 0,1>;
META_END

}
