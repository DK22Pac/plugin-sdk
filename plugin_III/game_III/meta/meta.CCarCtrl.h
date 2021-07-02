/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCarCtrl::GenerateRandomCars)
static int address;
static int global_address;
static const int id = 0x416580;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x416580, 0x416580, 0x416580>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C9F9,100,0,0x48C850,1, 0x48CAF9,110,0,0x48C950,1, 0x48CA89,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCarCtrl::GenerateOneRandomCar)
static int address;
static int global_address;
static const int id = 0x4165F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4165F0, 0x4165F0, 0x4165F0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4165B3,100,0,0x416580,1, 0x4165C8,100,0,0x416580,2, 0x4165B3,110,0,0x416580,1, 0x4165C8,110,0,0x416580,2, 0x4165B3,120,0,0x416580,1, 0x4165C8,120,0,0x416580,2>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCarCtrl::ChooseModel)
static int address;
static int global_address;
static const int id = 0x417EC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x417EC0, 0x417EC0, 0x417EC0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4167DB,100,0,0x4165F0,1, 0x4DAFB2,100,0,0x4D94E0,1, 0x4167DB,110,0,0x4165F0,1, 0x4DB052,110,0,0x4D9580,1, 0x4167DB,120,0,0x4165F0,1, 0x4DAFE2,120,0,0x4D9510,1>;
using def_t = int(CZoneInfo *, CVector *, int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CZoneInfo *,CVector *,int *>, 0,1,2>;
META_END

META_BEGIN(CCarCtrl::ChooseCarModel)
static int address;
static int global_address;
static const int id = 0x418110;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x418110, 0x418110, 0x418110>;
// total references count: 10en (8), 11en (8), steam (8)
using refs_t = RefList<0x40AFF2,100,0,0x40AE60,1, 0x417F1F,100,0,0x417EC0,1, 0x417F40,100,0,0x417EC0,2, 0x417F60,100,0,0x417EC0,3, 0x417F80,100,0,0x417EC0,4, 0x417FA0,100,0,0x417EC0,5, 0x417FC0,100,0,0x417EC0,6, 0x4180E0,100,0,0x417EC0,7, 0x40AFF2,110,0,0x40AE60,1, 0x417F1F,110,0,0x417EC0,1, 0x417F40,110,0,0x417EC0,2, 0x417F60,110,0,0x417EC0,3, 0x417F80,110,0,0x417EC0,4, 0x417FA0,110,0,0x417EC0,5, 0x417FC0,110,0,0x417EC0,6, 0x4180E0,110,0,0x417EC0,7, 0x40AFF2,120,0,0x40AE60,1, 0x417F1F,120,0,0x417EC0,1, 0x417F40,120,0,0x417EC0,2, 0x417F60,120,0,0x417EC0,3, 0x417F80,120,0,0x417EC0,4, 0x417FA0,120,0,0x417EC0,5, 0x417FC0,120,0,0x417EC0,6, 0x4180E0,120,0,0x417EC0,7>;
using def_t = int(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CCarCtrl::ChoosePoliceCarModel)
static int address;
static int global_address;
static const int id = 0x4181F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4181F0, 0x4181F0, 0x4181F0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4167AD,100,0,0x4165F0,1, 0x417FDE,100,0,0x417EC0,1, 0x4167AD,110,0,0x4165F0,1, 0x417FDE,110,0,0x417EC0,1, 0x4167AD,120,0,0x4165F0,1, 0x417FDE,120,0,0x417EC0,1>;
using def_t = int();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCarCtrl::ChooseGangCarModel)
static int address;
static int global_address;
static const int id = 0x4182C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4182C0, 0x4182C0, 0x4182C0>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x417FF8,100,0,0x417EC0,1, 0x418013,100,0,0x417EC0,2, 0x418030,100,0,0x417EC0,3, 0x418050,100,0,0x417EC0,4, 0x418070,100,0,0x417EC0,5, 0x418088,100,0,0x417EC0,6, 0x4180A0,100,0,0x417EC0,7, 0x4180B8,100,0,0x417EC0,8, 0x4180D0,100,0,0x417EC0,9, 0x417FF8,110,0,0x417EC0,1, 0x418013,110,0,0x417EC0,2, 0x418030,110,0,0x417EC0,3, 0x418050,110,0,0x417EC0,4, 0x418070,110,0,0x417EC0,5, 0x418088,110,0,0x417EC0,6, 0x4180A0,110,0,0x417EC0,7, 0x4180B8,110,0,0x417EC0,8, 0x4180D0,110,0,0x417EC0,9, 0x417FF8,120,0,0x417EC0,1, 0x418013,120,0,0x417EC0,2, 0x418030,120,0,0x417EC0,3, 0x418050,120,0,0x417EC0,4, 0x418070,120,0,0x417EC0,5, 0x418088,120,0,0x417EC0,6, 0x4180A0,120,0,0x417EC0,7, 0x4180B8,120,0,0x417EC0,8, 0x4180D0,120,0,0x417EC0,9>;
using def_t = int(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CCarCtrl::AddToCarArray)
static int address;
static int global_address;
static const int id = 0x4182F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4182F0, 0x4182F0, 0x4182F0>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x477BD7,100,0,0x477990,1, 0x477C2A,100,0,0x477990,2, 0x477C7A,100,0,0x477990,3, 0x477CCA,100,0,0x477990,4, 0x477D1A,100,0,0x477990,5, 0x477D67,100,0,0x477990,6, 0x477DB7,100,0,0x477990,7, 0x477BD7,110,0,0x477990,1, 0x477C2A,110,0,0x477990,2, 0x477C7A,110,0,0x477990,3, 0x477CCA,110,0,0x477990,4, 0x477D1A,110,0,0x477990,5, 0x477D67,110,0,0x477990,6, 0x477DB7,110,0,0x477990,7, 0x477BD7,120,0,0x477990,1, 0x477C2A,120,0,0x477990,2, 0x477C7A,120,0,0x477990,3, 0x477CCA,120,0,0x477990,4, 0x477D1A,120,0,0x477990,5, 0x477D67,120,0,0x477990,6, 0x477DB7,120,0,0x477990,7>;
using def_t = void(int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CCarCtrl::RemoveDistantCars)
static int address;
static int global_address;
static const int id = 0x418320;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x418320, 0x418320, 0x418320>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48CA03,100,0,0x48C850,1, 0x48CB03,110,0,0x48C950,1, 0x48CA93,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCarCtrl::PossiblyRemoveVehicle)
static int address;
static int global_address;
static const int id = 0x418430;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x418430, 0x418430, 0x418430>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x418375,100,0,0x418320,1, 0x4F3683,100,0,0x4F3460,1, 0x418375,110,0,0x418320,1, 0x4F3733,110,0,0x4F3510,1, 0x418375,120,0,0x418320,1, 0x4F36C3,120,0,0x4F34A0,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarCtrl::CountCarsOfType)
static int address;
static int global_address;
static const int id = 0x418820;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x418820, 0x418820, 0x418820>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x41FCF7,100,0,0x41FC50,1, 0x41FDD6,100,0,0x41FC50,2, 0x41FCF7,110,0,0x41FC50,1, 0x41FDD6,110,0,0x41FC50,2, 0x41FCF7,120,0,0x41FC50,1, 0x41FDD6,120,0,0x41FC50,2>;
using def_t = int(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CCarCtrl::UpdateCarOnRails)
static int address;
static int global_address;
static const int id = 0x418880;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x418880, 0x418880, 0x418880>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x531A76,100,0,0x531470,1, 0x531CB6,110,0,0x5316B0,1, 0x531C46,120,0,0x531640,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarCtrl::FindMaximumSpeedForThisCarInTraffic)
static int address;
static int global_address;
static const int id = 0x418C10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x418C10, 0x418C10, 0x418C10>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x419211,100,0,0x4191E0,1, 0x41EA0D,100,0,0x41E310,1, 0x419211,110,0,0x4191E0,1, 0x41EA0D,110,0,0x41E310,1, 0x419211,120,0,0x4191E0,1, 0x41EA0D,120,0,0x41E310,1>;
using def_t = float(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarCtrl::ScanForPedDanger)
static int address;
static int global_address;
static const int id = 0x418F40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x418F40, 0x418F40, 0x418F40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x534B14,100,0,0x531470,1, 0x534D54,110,0,0x5316B0,1, 0x534CE4,120,0,0x531640,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarCtrl::SlowCarOnRailsDownForTrafficAndLights)
static int address;
static int global_address;
static const int id = 0x4191E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4191E0, 0x4191E0, 0x4191E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4188F9,100,0,0x418880,1, 0x4188F9,110,0,0x418880,1, 0x4188F9,120,0,0x418880,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarCtrl::SlowCarDownForPedsSectorList)
static int address;
static int global_address;
static const int id = 0x419300;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x419300, 0x419300, 0x419300>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x418E92,100,0,0x418C10,1, 0x418EC7,100,0,0x418C10,2, 0x41913E,100,0,0x418F40,1, 0x419173,100,0,0x418F40,2, 0x418E92,110,0,0x418C10,1, 0x418EC7,110,0,0x418C10,2, 0x41913E,110,0,0x418F40,1, 0x419173,110,0,0x418F40,2, 0x418E92,120,0,0x418C10,1, 0x418EC7,120,0,0x418C10,2, 0x41913E,120,0,0x418F40,1, 0x419173,120,0,0x418F40,2>;
using def_t = void(CPtrList &, CVehicle *, float, float, float, float, float *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPtrList &,CVehicle *,float,float,float,float,float *,float>, 0,1,2,3,4,5,6,7>;
META_END

META_BEGIN(CCarCtrl::SlowCarDownForCarsSectorList)
static int address;
static int global_address;
static const int id = 0x419B40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x419B40, 0x419B40, 0x419B40>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x418E28,100,0,0x418C10,1, 0x418E5D,100,0,0x418C10,2, 0x418E28,110,0,0x418C10,1, 0x418E5D,110,0,0x418C10,2, 0x418E28,120,0,0x418C10,1, 0x418E5D,120,0,0x418C10,2>;
using def_t = void(CPtrList &, CVehicle *, float, float, float, float, float *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPtrList &,CVehicle *,float,float,float,float,float *,float>, 0,1,2,3,4,5,6,7>;
META_END

META_BEGIN(CCarCtrl::SlowCarDownForOtherCar)
static int address;
static int global_address;
static const int id = 0x419C60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x419C60, 0x419C60, 0x419C60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x419C27,100,0,0x419B40,1, 0x419C27,110,0,0x419B40,1, 0x419C27,120,0,0x419B40,1>;
using def_t = void(CEntity *, CVehicle *, float *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *,CVehicle *,float *,float>, 0,1,2,3>;
META_END

META_BEGIN(CCarCtrl::TestCollisionBetween2MovingRects)
static int address;
static int global_address;
static const int id = 0x41A020;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41A020, 0x41A020, 0x41A020>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x419DD4,100,0,0x419C60,1, 0x419E02,100,0,0x419C60,2, 0x419DD4,110,0,0x419C60,1, 0x419E02,110,0,0x419C60,2, 0x419DD4,120,0,0x419C60,1, 0x419E02,120,0,0x419C60,2>;
using def_t = float(CVehicle *, CVehicle *, float, float, CVector *, CVector *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,CVehicle *,float,float,CVector *,CVector *,unsigned char>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CCarCtrl::FindAngleToWeaveThroughTraffic)
static int address;
static int global_address;
static const int id = 0x41A590;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41A590, 0x41A590, 0x41A590>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x41E892,100,0,0x41E310,1, 0x41EE80,100,0,0x41EDC0,1, 0x41E892,110,0,0x41E310,1, 0x41EE80,110,0,0x41EDC0,1, 0x41E892,120,0,0x41E310,1, 0x41EE80,120,0,0x41EDC0,1>;
using def_t = float(CVehicle *, CPhysical *, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,CPhysical *,float,float>, 0,1,2,3>;
META_END

META_BEGIN(CCarCtrl::WeaveThroughCarsSectorList)
static int address;
static int global_address;
static const int id = 0x41ABB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41ABB0, 0x41ABB0, 0x41ABB0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x41A7FE,100,0,0x41A590,1, 0x41A829,100,0,0x41A590,2, 0x41A7FE,110,0,0x41A590,1, 0x41A829,110,0,0x41A590,2, 0x41A7FE,120,0,0x41A590,1, 0x41A829,120,0,0x41A590,2>;
using def_t = void(CPtrList &, CVehicle *, CPhysical *, float, float, float, float, float *, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPtrList &,CVehicle *,CPhysical *,float,float,float,float,float *,float *>, 0,1,2,3,4,5,6,7,8>;
META_END

META_BEGIN(CCarCtrl::WeaveForOtherCar)
static int address;
static int global_address;
static const int id = 0x41ACF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41ACF0, 0x41ACF0, 0x41ACF0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x41ACBF,100,0,0x41ABB0,1, 0x41ACBF,110,0,0x41ABB0,1, 0x41ACBF,120,0,0x41ABB0,1>;
using def_t = void(CEntity *, CVehicle *, float *, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *,CVehicle *,float *,float *>, 0,1,2,3>;
META_END

META_BEGIN(CCarCtrl::WeaveThroughPedsSectorList)
static int address;
static int global_address;
static const int id = 0x41B1B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41B1B0, 0x41B1B0, 0x41B1B0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x41A854,100,0,0x41A590,1, 0x41A87F,100,0,0x41A590,2, 0x41A854,110,0,0x41A590,1, 0x41A87F,110,0,0x41A590,2, 0x41A854,120,0,0x41A590,1, 0x41A87F,120,0,0x41A590,2>;
using def_t = void(CPtrList &, CVehicle *, CPhysical *, float, float, float, float, float *, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPtrList &,CVehicle *,CPhysical *,float,float,float,float,float *,float *>, 0,1,2,3,4,5,6,7,8>;
META_END

META_BEGIN(CCarCtrl::WeaveForPed)
static int address;
static int global_address;
static const int id = 0x41B2D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41B2D0, 0x41B2D0, 0x41B2D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x41B28B,100,0,0x41B1B0,1, 0x41B28B,110,0,0x41B1B0,1, 0x41B28B,120,0,0x41B1B0,1>;
using def_t = void(CEntity *, CVehicle *, float *, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *,CVehicle *,float *,float *>, 0,1,2,3>;
META_END

META_BEGIN(CCarCtrl::WeaveThroughObjectsSectorList)
static int address;
static int global_address;
static const int id = 0x41B520;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41B520, 0x41B520, 0x41B520>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x41A8A6,100,0,0x41A590,1, 0x41A8CD,100,0,0x41A590,2, 0x41A8A6,110,0,0x41A590,1, 0x41A8CD,110,0,0x41A590,2, 0x41A8A6,120,0,0x41A590,1, 0x41A8CD,120,0,0x41A590,2>;
using def_t = void(CPtrList &, CVehicle *, float, float, float, float, float *, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPtrList &,CVehicle *,float,float,float,float,float *,float *>, 0,1,2,3,4,5,6,7>;
META_END

META_BEGIN(CCarCtrl::WeaveForObject)
static int address;
static int global_address;
static const int id = 0x41B640;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41B640, 0x41B640, 0x41B640>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x41B5F8,100,0,0x41B520,1, 0x41B5F8,110,0,0x41B520,1, 0x41B5F8,120,0,0x41B520,1>;
using def_t = void(CEntity *, CVehicle *, float *, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *,CVehicle *,float *,float *>, 0,1,2,3>;
META_END

META_BEGIN(CCarCtrl::PickNextNodeAccordingStrategy)
static int address;
static int global_address;
static const int id = 0x41BA50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41BA50, 0x41BA50, 0x41BA50>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x418923,100,0,0x418880,1, 0x41E5EE,100,0,0x41E310,1, 0x418923,110,0,0x418880,1, 0x41E5EE,110,0,0x41E310,1, 0x418923,120,0,0x418880,1, 0x41E5EE,120,0,0x41E310,1>;
using def_t = bool(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarCtrl::PickNextNodeRandomly)
static int address;
static int global_address;
static const int id = 0x41BAE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41BAE0, 0x41BAE0, 0x41BAE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x41BAD1,100,0,0x41BA50,1, 0x41BAD1,110,0,0x41BA50,1, 0x41BAD1,120,0,0x41BA50,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarCtrl::FindPathDirection)
static int address;
static int global_address;
static const int id = 0x41C360;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41C360, 0x41C360, 0x41C360>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x41BC1F,100,0,0x41BAE0,1, 0x41BC1F,110,0,0x41BAE0,1, 0x41BC1F,120,0,0x41BAE0,1>;
using def_t = unsigned char(int, int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,int,int>, 0,1,2>;
META_END

META_BEGIN(CCarCtrl::PickNextNodeToChaseCar)
static int address;
static int global_address;
static const int id = 0x41C480;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41C480, 0x41C480, 0x41C480>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x41BA93,100,0,0x41BA50,1, 0x41BAB4,100,0,0x41BA50,2, 0x41BA93,110,0,0x41BA50,1, 0x41BAB4,110,0,0x41BA50,2, 0x41BA93,120,0,0x41BA50,1, 0x41BAB4,120,0,0x41BA50,2>;
using def_t = void(CVehicle *, float, float, CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,float,float,CVehicle *>, 0,1,2,3>;
META_END

META_BEGIN(CCarCtrl::PickNextNodeToFollowPath)
static int address;
static int global_address;
static const int id = 0x41CD50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41CD50, 0x41CD50, 0x41CD50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x41BAC4,100,0,0x41BA50,1, 0x41BAC4,110,0,0x41BA50,1, 0x41BAC4,120,0,0x41BA50,1>;
using def_t = bool(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarCtrl::Init)
static int address;
static int global_address;
static const int id = 0x41D280;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41D280, 0x41D280, 0x41D280>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C00F,100,0,0x48BED0,1, 0x48C0FF,110,0,0x48BFC0,1, 0x48C08F,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCarCtrl::ReInit)
static int address;
static int global_address;
static const int id = 0x41D3B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41D3B0, 0x41D3B0, 0x41D3B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C4FB,100,0,0x48C4B0,1, 0x48C5FB,110,0,0x48C5B0,1, 0x48C58B,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCarCtrl::DragCarToPoint)
static int address;
static int global_address;
static const int id = 0x41D450;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41D450, 0x41D450, 0x41D450>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x418BB0,100,0,0x418880,1, 0x418BB0,110,0,0x418880,1, 0x418BB0,120,0,0x418880,1>;
using def_t = void(CVehicle *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,CVector *>, 0,1>;
META_END

META_BEGIN(CCarCtrl::FindSpeedMultiplier)
static int address;
static int global_address;
static const int id = 0x41D980;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41D980, 0x41D980, 0x41D980>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x41EB61,100,0,0x41E310,1, 0x41EBB1,100,0,0x41E310,2, 0x41EFF4,100,0,0x41EDC0,1, 0x41EB61,110,0,0x41E310,1, 0x41EBB1,110,0,0x41E310,2, 0x41EFF4,110,0,0x41EDC0,1, 0x41EB61,120,0,0x41E310,1, 0x41EBB1,120,0,0x41E310,2, 0x41EFF4,120,0,0x41EDC0,1>;
using def_t = float(float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float>, 0,1,2,3>;
META_END

META_BEGIN(CCarCtrl::SteerAICarWithPhysics)
static int address;
static int global_address;
static const int id = 0x41DA60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41DA60, 0x41DA60, 0x41DA60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x531B45,100,0,0x531470,1, 0x531D85,110,0,0x5316B0,1, 0x531D15,120,0,0x531640,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarCtrl::SteerAICarWithPhysics_OnlyMission)
static int address;
static int global_address;
static const int id = 0x41DD90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41DD90, 0x41DD90, 0x41DD90>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x41DAE7,100,0,0x41DA60,1, 0x41DD45,100,0,0x41DA60,2, 0x41DAE7,110,0,0x41DA60,1, 0x41DD45,110,0,0x41DA60,2, 0x41DAE7,120,0,0x41DA60,1, 0x41DD45,120,0,0x41DA60,2>;
using def_t = void(CVehicle *, float *, float *, float *, bool *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,float *,float *,float *,bool *>, 0,1,2,3,4>;
META_END

META_BEGIN(CCarCtrl::SteerAIBoatWithPhysics)
static int address;
static int global_address;
static const int id = 0x41E250;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41E250, 0x41E250, 0x41E250>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x53F388,100,0,0x53EF10,1, 0x53F5C8,110,0,0x53F150,1, 0x53F578,120,0,0x53F100,1>;
using def_t = void(CBoat *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CBoat *>, 0>;
META_END

META_BEGIN(CCarCtrl::FindMaxSteerAngle)
static int address;
static int global_address;
static const int id = 0x41E2F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41E2F0, 0x41E2F0, 0x41E2F0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x41E913,100,0,0x41E310,1, 0x41EF71,100,0,0x41EDC0,1, 0x41E913,110,0,0x41E310,1, 0x41EF71,110,0,0x41EDC0,1, 0x41E913,120,0,0x41E310,1, 0x41EF71,120,0,0x41EDC0,1>;
using def_t = float(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarCtrl::SteerAICarWithPhysicsFollowPath)
static int address;
static int global_address;
static const int id = 0x41E310;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41E310, 0x41E310, 0x41E310>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x41E210,100,0,0x41DD90,1, 0x41E210,110,0,0x41DD90,1, 0x41E210,120,0,0x41DD90,1>;
using def_t = void(CVehicle *, float *, float *, float *, bool *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,float *,float *,float *,bool *>, 0,1,2,3,4>;
META_END

META_BEGIN(CCarCtrl::SteerAICarWithPhysicsHeadingForTarget)
static int address;
static int global_address;
static const int id = 0x41EDC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41EDC0, 0x41EDC0, 0x41EDC0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x41E01E,100,0,0x41DD90,1, 0x41E053,100,0,0x41DD90,2, 0x41E1A3,100,0,0x41DD90,3, 0x41F1BC,100,0,0x41F130,1, 0x41E01E,110,0,0x41DD90,1, 0x41E053,110,0,0x41DD90,2, 0x41E1A3,110,0,0x41DD90,3, 0x41F1BC,110,0,0x41F130,1, 0x41E01E,120,0,0x41DD90,1, 0x41E053,120,0,0x41DD90,2, 0x41E1A3,120,0,0x41DD90,3, 0x41F1BC,120,0,0x41F130,1>;
using def_t = void(CVehicle *, CPhysical *, float, float, float *, float *, float *, bool *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,CPhysical *,float,float,float *,float *,float *,bool *>, 0,1,2,3,4,5,6,7>;
META_END

META_BEGIN(CCarCtrl::SteerAICarWithPhysicsTryingToBlockTarget)
static int address;
static int global_address;
static const int id = 0x41F130;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41F130, 0x41F130, 0x41F130>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x41E0A4,100,0,0x41DD90,1, 0x41E0E2,100,0,0x41DD90,2, 0x41E0A4,110,0,0x41DD90,1, 0x41E0E2,110,0,0x41DD90,2, 0x41E0A4,120,0,0x41DD90,1, 0x41E0E2,120,0,0x41DD90,2>;
using def_t = void(CVehicle *, float, float, float, float, float *, float *, float *, bool *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,float,float,float,float,float *,float *,float *,bool *>, 0,1,2,3,4,5,6,7,8>;
META_END

META_BEGIN(CCarCtrl::SteerAICarWithPhysicsTryingToBlockTarget_Stop)
static int address;
static int global_address;
static const int id = 0x41F220;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41F220, 0x41F220, 0x41F220>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x41E133,100,0,0x41DD90,1, 0x41E171,100,0,0x41DD90,2, 0x41E133,110,0,0x41DD90,1, 0x41E171,110,0,0x41DD90,2, 0x41E133,120,0,0x41DD90,1, 0x41E171,120,0,0x41DD90,2>;
using def_t = void(CVehicle *, float, float, float, float, float *, float *, float *, bool *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,float,float,float,float,float *,float *,float *,bool *>, 0,1,2,3,4,5,6,7,8>;
META_END

META_BEGIN(CCarCtrl::SteerAIBoatWithPhysicsHeadingForTarget)
static int address;
static int global_address;
static const int id = 0x41F4A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41F4A0, 0x41F4A0, 0x41F4A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x41E2A9,100,0,0x41E250,1, 0x41E2A9,110,0,0x41E250,1, 0x41E2A9,120,0,0x41E250,1>;
using def_t = void(CBoat *, float, float, float *, float *, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CBoat *,float,float,float *,float *,float *>, 0,1,2,3,4,5>;
META_END

META_BEGIN(CCarCtrl::RegisterVehicleOfInterest)
static int address;
static int global_address;
static const int id = 0x41F6E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41F6E0, 0x41F6E0, 0x41F6E0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4CF854,100,0,0x4CF220,1, 0x4D7E8E,100,0,0x4D7D20,1, 0x4DA5FD,100,0,0x4D94E0,1, 0x4CF8F4,110,0,0x4CF2C0,1, 0x4D7F2E,110,0,0x4D7DC0,1, 0x4DA69D,110,0,0x4D9580,1, 0x4CF884,120,0,0x4CF250,1, 0x4D7EBE,120,0,0x4D7D50,1, 0x4DA62D,120,0,0x4D9510,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarCtrl::IsThisVehicleInteresting)
static int address;
static int global_address;
static const int id = 0x41F780;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41F780, 0x41F780, 0x41F780>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x41843A,100,0,0x418430,1, 0x4186AF,100,0,0x418430,2, 0x4CF840,100,0,0x4CF220,1, 0x41843A,110,0,0x418430,1, 0x4186AF,110,0,0x418430,2, 0x4CF8E0,110,0,0x4CF2C0,1, 0x41843A,120,0,0x418430,1, 0x4186AF,120,0,0x418430,2, 0x4CF870,120,0,0x4CF250,1>;
using def_t = bool(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarCtrl::RemoveFromInterestingVehicleList)
static int address;
static int global_address;
static const int id = 0x41F7A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41F7A0, 0x41F7A0, 0x41F7A0>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x43D6A0,100,0,0x43D530,1, 0x43D7F9,100,0,0x43D530,2, 0x4542A4,100,0,0x454060,1, 0x4548F1,100,0,0x4548D0,1, 0x4B5020,100,0,0x4B4E70,1, 0x4B5234,100,0,0x4B50E0,1, 0x4D426D,100,0,0x4D3F90,1, 0x43D6A0,110,0,0x43D530,1, 0x43D7F9,110,0,0x43D530,2, 0x4542A4,110,0,0x454060,1, 0x4548F1,110,0,0x4548D0,1, 0x4B5110,110,0,0x4B4F60,1, 0x4B5324,110,0,0x4B51D0,1, 0x4D430D,110,0,0x4D4030,1, 0x43D6A0,120,0,0x43D530,1, 0x43D7F9,120,0,0x43D530,2, 0x4542A4,120,0,0x454060,1, 0x4548F1,120,0,0x4548D0,1, 0x4B50A0,120,0,0x4B4EF0,1, 0x4B52B4,120,0,0x4B5160,1, 0x4D429D,120,0,0x4D3FC0,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarCtrl::ClearInterestingVehicleList)
static int address;
static int global_address;
static const int id = 0x41F7D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41F7D0, 0x41F7D0, 0x41F7D0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x421567,100,0,0x421400,1, 0x421784,100,0,0x421400,2, 0x421930,100,0,0x421400,3, 0x421B14,100,0,0x421A60,1, 0x421567,110,0,0x421400,1, 0x421784,110,0,0x421400,2, 0x421930,110,0,0x421400,3, 0x421B14,110,0,0x421A60,1, 0x421567,120,0,0x421400,1, 0x421784,120,0,0x421400,2, 0x421930,120,0,0x421400,3, 0x421B14,120,0,0x421A60,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCarCtrl::SwitchVehicleToRealPhysics)
static int address;
static int global_address;
static const int id = 0x41F7F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41F7F0, 0x41F7F0, 0x41F7F0>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x415469,100,0,0x413E50,1, 0x419FB3,100,0,0x419C60,1, 0x41BF19,100,0,0x41BAE0,1, 0x49622F,100,0,0x4961A0,1, 0x49D883,100,0,0x49B620,1, 0x49F6F6,100,0,0x49E790,1, 0x4B18AE,100,0,0x4B1340,1, 0x53C14A,100,0,0x53C0E0,1, 0x551A5E,100,0,0x551950,1, 0x415469,110,0,0x413E50,1, 0x419FB3,110,0,0x419C60,1, 0x41BF19,110,0,0x41BAE0,1, 0x4962EF,110,0,0x496260,1, 0x49D973,110,0,0x49B710,1, 0x49F7E6,110,0,0x49E880,1, 0x4B199E,110,0,0x4B1430,1, 0x53C38A,110,0,0x53C320,1, 0x551B9E,110,0,0x551A90,1, 0x415469,120,0,0x413E50,1, 0x419FB3,120,0,0x419C60,1, 0x41BF19,120,0,0x41BAE0,1, 0x49627F,120,0,0x4961F0,1, 0x49D903,120,0,0x49B6A0,1, 0x49F776,120,0,0x49E810,1, 0x4B192E,120,0,0x4B13C0,1, 0x53C33A,120,0,0x53C2D0,1, 0x551B4E,120,0,0x551A40,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarCtrl::JoinCarWithRoadSystem)
static int address;
static int global_address;
static const int id = 0x41F820;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41F820, 0x41F820, 0x41F820>;
// total references count: 10en (20), 11en (20), steam (20)
using refs_t = RefList<0x414014,100,0,0x413E50,1, 0x414408,100,0,0x413E50,2, 0x4145AF,100,0,0x413E50,3, 0x4148FA,100,0,0x413E50,4, 0x414C62,100,0,0x413E50,5, 0x414CF9,100,0,0x413E50,6, 0x414E1D,100,0,0x413E50,7, 0x414EC5,100,0,0x413E50,8, 0x4150A3,100,0,0x413E50,9, 0x435CC8,100,0,0x435C30,1, 0x4374FD,100,0,0x436FA0,1, 0x43C6EC,100,0,0x43AEA0,1, 0x43C977,100,0,0x43AEA0,2, 0x43CBFA,100,0,0x43AEA0,3, 0x44EEF4,100,0,0x44CB80,1, 0x454802,100,0,0x4547A0,1, 0x4C16BF,100,0,0x4C1400,1, 0x4C32B0,100,0,0x4C30A0,1, 0x4CF640,100,0,0x4CF220,1, 0x4F5DFA,100,0,0x4F5BE0,1, 0x414014,110,0,0x413E50,1, 0x414408,110,0,0x413E50,2, 0x4145AF,110,0,0x413E50,3, 0x4148FA,110,0,0x413E50,4, 0x414C62,110,0,0x413E50,5, 0x414CF9,110,0,0x413E50,6, 0x414E1D,110,0,0x413E50,7, 0x414EC5,110,0,0x413E50,8, 0x4150A3,110,0,0x413E50,9, 0x435CC8,110,0,0x435C30,1, 0x4374FD,110,0,0x436FA0,1, 0x43C6EC,110,0,0x43AEA0,1, 0x43C977,110,0,0x43AEA0,2, 0x43CBFA,110,0,0x43AEA0,3, 0x44EEF4,110,0,0x44CB80,1, 0x454802,110,0,0x4547A0,1, 0x4C17AF,110,0,0x4C14F0,1, 0x4C3350,110,0,0x4C3140,1, 0x4CF6E0,110,0,0x4CF2C0,1, 0x4F5EAA,110,0,0x4F5C90,1, 0x414014,120,0,0x413E50,1, 0x414408,120,0,0x413E50,2, 0x4145AF,120,0,0x413E50,3, 0x4148FA,120,0,0x413E50,4, 0x414C62,120,0,0x413E50,5, 0x414CF9,120,0,0x413E50,6, 0x414E1D,120,0,0x413E50,7, 0x414EC5,120,0,0x413E50,8, 0x4150A3,120,0,0x413E50,9, 0x435CC8,120,0,0x435C30,1, 0x4374FD,120,0,0x436FA0,1, 0x43C6EC,120,0,0x43AEA0,1, 0x43C977,120,0,0x43AEA0,2, 0x43CBFA,120,0,0x43AEA0,3, 0x44EEF4,120,0,0x44CB80,1, 0x454802,120,0,0x4547A0,1, 0x4C173F,120,0,0x4C1480,1, 0x4C32E0,120,0,0x4C30D0,1, 0x4CF670,120,0,0x4CF250,1, 0x4F5E3A,120,0,0x4F5C20,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarCtrl::JoinCarWithRoadSystemGotoCoors)
static int address;
static int global_address;
static const int id = 0x41FA00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41FA00, 0x41FA00, 0x41FA00>;
// total references count: 10en (13), 11en (13), steam (13)
using refs_t = RefList<0x414158,100,0,0x413E50,1, 0x4146F3,100,0,0x413E50,2, 0x414AE0,100,0,0x413E50,3, 0x414BB0,100,0,0x413E50,4, 0x415BFB,100,0,0x415B10,1, 0x41FF99,100,0,0x41FE50,1, 0x43C8EA,100,0,0x43AEA0,1, 0x43CC3E,100,0,0x43AEA0,2, 0x43CC72,100,0,0x43AEA0,3, 0x445C01,100,0,0x4458A0,1, 0x586742,100,0,0x585BB0,1, 0x5876A3,100,0,0x587200,1, 0x589F8E,100,0,0x589D00,1, 0x414158,110,0,0x413E50,1, 0x4146F3,110,0,0x413E50,2, 0x414AE0,110,0,0x413E50,3, 0x414BB0,110,0,0x413E50,4, 0x415BFB,110,0,0x415B10,1, 0x41FF99,110,0,0x41FE50,1, 0x43C8EA,110,0,0x43AEA0,1, 0x43CC3E,110,0,0x43AEA0,2, 0x43CC72,110,0,0x43AEA0,3, 0x445C01,110,0,0x4458A0,1, 0x586A82,110,0,0x585EF0,1, 0x5879E3,110,0,0x587540,1, 0x58A2CE,110,0,0x58A040,1, 0x414158,120,0,0x413E50,1, 0x4146F3,120,0,0x413E50,2, 0x414AE0,120,0,0x413E50,3, 0x414BB0,120,0,0x413E50,4, 0x415BFB,120,0,0x415B10,1, 0x41FF99,120,0,0x41FE50,1, 0x43C8EA,120,0,0x43AEA0,1, 0x43CC3E,120,0,0x43AEA0,2, 0x43CC72,120,0,0x43AEA0,3, 0x445C01,120,0,0x4458A0,1, 0x586972,120,0,0x585DE0,1, 0x5878D3,120,0,0x587430,1, 0x58A1BE,120,0,0x589F30,1>;
using def_t = bool(CVehicle *, CVector, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,CVector,bool>, 0,1,2>;
META_END

META_BEGIN(CCarCtrl::FindLinksToGoWithTheseNodes)
static int address;
static int global_address;
static const int id = 0x41FB30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41FB30, 0x41FB30, 0x41FB30>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x41F9CF,100,0,0x41F820,1, 0x41FAE3,100,0,0x41FA00,1, 0x41F9CF,110,0,0x41F820,1, 0x41FAE3,110,0,0x41FA00,1, 0x41F9CF,120,0,0x41F820,1, 0x41FAE3,120,0,0x41FA00,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCarCtrl::GenerateEmergencyServicesCar)
static int address;
static int global_address;
static const int id = 0x41FC50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41FC50, 0x41FC50, 0x41FC50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4165E7,100,0,0x416580,1, 0x4165E7,110,0,0x416580,1, 0x4165E7,120,0,0x416580,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCarCtrl::GenerateOneEmergencyServicesCar)
static int address;
static int global_address;
static const int id = 0x41FE50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x41FE50, 0x41FE50, 0x41FE50>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x41FD4B,100,0,0x41FC50,1, 0x41FE14,100,0,0x41FC50,2, 0x41FD4B,110,0,0x41FC50,1, 0x41FE14,110,0,0x41FC50,2, 0x41FD4B,120,0,0x41FC50,1, 0x41FE14,120,0,0x41FC50,2>;
using def_t = bool(unsigned int, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,CVector>, 0,1>;
META_END

META_BEGIN(CCarCtrl::UpdateCarCount)
static int address;
static int global_address;
static const int id = 0x4202E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4202E0, 0x4202E0, 0x4202E0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x550C89,100,0,0x550A60,1, 0x5510CA,100,0,0x551040,1, 0x596DC4,100,0,0x5966E0,1, 0x550DC9,110,0,0x550BA0,1, 0x55120A,110,0,0x551180,1, 0x597074,110,0,0x596990,1, 0x550D79,120,0,0x550B50,1, 0x5511BA,120,0,0x551130,1, 0x596F64,120,0,0x596880,1>;
using def_t = void(CVehicle *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *,bool>, 0,1>;
META_END

META_BEGIN(CCarCtrl::ThisRoadObjectCouldMove)
static int address;
static int global_address;
static const int id = 0x420380;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x420380, 0x420380, 0x420380>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x41D5B4,100,0,0x41D450,1, 0x41D636,100,0,0x41D450,2, 0x41D73E,100,0,0x41D450,3, 0x41D7C5,100,0,0x41D450,4, 0x41D5B4,110,0,0x41D450,1, 0x41D636,110,0,0x41D450,2, 0x41D73E,110,0,0x41D450,3, 0x41D7C5,110,0,0x41D450,4, 0x41D5B4,120,0,0x41D450,1, 0x41D636,120,0,0x41D450,2, 0x41D73E,120,0,0x41D450,3, 0x41D7C5,120,0,0x41D450,4>;
using def_t = bool(unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(CCarCtrl::MapCouldMoveInThisArea)
static int address;
static int global_address;
static const int id = 0x4203B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4203B0, 0x4203B0, 0x4203B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x531F01,100,0,0x531470,1, 0x532141,110,0,0x5316B0,1, 0x5320D1,120,0,0x531640,1>;
using def_t = bool(float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float>, 0,1>;
META_END

}
