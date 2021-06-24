/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CVehicle::PlayCarHorn)
static int address;
static int global_address;
static const int id = 0x415AF0;
static const bool is_virtual = true;
static const int vtable_index = 34;
using mv_addresses_t = MvAddresses<0x415AF0, 0x415AF0, 0x415AF0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x600F2C,100,2,0x600EA4,1, 0x601F38,100,2,0x601EB0,1, 0x602264,100,2,0x6021DC,1, 0x6024A4,100,2,0x60241C,1, 0x602930,100,2,0x6028A8,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CVehicle::GetHeightAboveRoad)
static int address;
static int global_address;
static const int id = 0x417E60;
static const bool is_virtual = true;
static const int vtable_index = 33;
using mv_addresses_t = MvAddresses<0x417E60, 0x417E60, 0x417E60>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x600F28,100,2,0x600EA4,1, 0x601F34,100,2,0x601EB0,1, 0x602260,100,2,0x6021DC,1, 0x6024A0,100,2,0x60241C,1, 0x60292C,100,2,0x6028A8,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = float(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CVehicle)
static int address;
static int global_address;
static const int id = 0x417E80;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x417E80, 0x417E80, 0x417E80>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6028A8,100,2,0x6028A8,1, 0x602278,110,2,0x602278,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CVehicle *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,int>, 0,1>;
META_END

META_BEGIN(CVehicle::BlowUpCar)
static int address;
static int global_address;
static const int id = 0x444B10;
static const bool is_virtual = true;
static const int vtable_index = 29;
using mv_addresses_t = MvAddresses<0x444B10, 0x444B10, 0x444B10>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x601F24,100,2,0x601EB0,1, 0x602250,100,2,0x6021DC,1, 0x602490,100,2,0x60241C,1, 0x60291C,100,2,0x6028A8,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CVehicle *, CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,CEntity *>, 0,1>;
META_END

META_BEGIN(CVehicle::SetupLighting)
static int address;
static int global_address;
static const int id = 0x4A7DD0;
static const bool is_virtual = true;
static const int vtable_index = 14;
using mv_addresses_t = MvAddresses<0x4A7DD0, 0x4A7EC0, 0x4A7E50>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x600C54,100,2,0x600C1C,1, 0x600EDC,100,2,0x600EA4,1, 0x601EE8,100,2,0x601EB0,1, 0x602214,100,2,0x6021DC,1, 0x602454,100,2,0x60241C,1, 0x6028E0,100,2,0x6028A8,1, 0x600A04,110,2,0x600A04,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60D9FC,120,2,0x60D9FC,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = bool(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CVehicle::RemoveLighting)
static int address;
static int global_address;
static const int id = 0x4A7E60;
static const bool is_virtual = true;
static const int vtable_index = 15;
using mv_addresses_t = MvAddresses<0x4A7E60, 0x4A7F50, 0x4A7EE0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x600C58,100,2,0x600C1C,1, 0x600EE0,100,2,0x600EA4,1, 0x601EEC,100,2,0x601EB0,1, 0x602218,100,2,0x6021DC,1, 0x602458,100,2,0x60241C,1, 0x6028E4,100,2,0x6028A8,1, 0x600A04,110,2,0x600A04,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60D9FC,120,2,0x60D9FC,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CVehicle *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,bool>, 0,1>;
META_END

META_BEGIN(CVehicle::RemoveRefsToVehicle)
static int address;
static int global_address;
static const int id = 0x4B3D20;
static const bool is_virtual = true;
static const int vtable_index = 28;
using mv_addresses_t = MvAddresses<0x4B3D20, 0x4B3E10, 0x4B3DA0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x600F14,100,2,0x600EA4,1, 0x601F20,100,2,0x601EB0,1, 0x60224C,100,2,0x6021DC,1, 0x60248C,100,2,0x60241C,1, 0x602918,100,2,0x6028A8,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CVehicle *, CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,CEntity *>, 0,1>;
META_END

META_BEGIN(CVehicle::IsRoomForPedToLeaveCar)
static int address;
static int global_address;
static const int id = 0x4C7330;
static const bool is_virtual = true;
static const int vtable_index = 32;
using mv_addresses_t = MvAddresses<0x4C7330, 0x4C73D0, 0x4C7360>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x600F24,100,2,0x600EA4,1, 0x601F30,100,2,0x601EB0,1, 0x60225C,100,2,0x6021DC,1, 0x60249C,100,2,0x60241C,1, 0x602928,100,2,0x6028A8,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = bool(CVehicle *, unsigned int, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,unsigned int,CVector *>, 0,1,2>;
META_END

META_BEGIN(CVehicle::IsDoorFullyOpen)
static int address;
static int global_address;
static const int id = 0x4DE4E0;
static const bool is_virtual = true;
static const int vtable_index = 25;
using mv_addresses_t = MvAddresses<0x4DE4E0, 0x4DE590, 0x4DE520>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x600F08,100,2,0x600EA4,1, 0x601F14,100,2,0x601EB0,1, 0x602240,100,2,0x6021DC,1, 0x602480,100,2,0x60241C,1, 0x60290C,100,2,0x6028A8,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = bool(CVehicle *, eDoors);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,eDoors>, 0,1>;
META_END

META_BEGIN(CVehicle::IsDoorMissing)
static int address;
static int global_address;
static const int id = 0x4DE4F0;
static const bool is_virtual = true;
static const int vtable_index = 27;
using mv_addresses_t = MvAddresses<0x4DE4F0, 0x4DE5A0, 0x4DE530>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x600F10,100,2,0x600EA4,1, 0x601F1C,100,2,0x601EB0,1, 0x602248,100,2,0x6021DC,1, 0x602488,100,2,0x60241C,1, 0x602914,100,2,0x6028A8,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = bool(CVehicle *, eDoors);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,eDoors>, 0,1>;
META_END

META_BEGIN(CVehicle::ProcessOpenDoor)
static int address;
static int global_address;
static const int id = 0x4DEAE0;
static const bool is_virtual = true;
static const int vtable_index = 23;
using mv_addresses_t = MvAddresses<0x4DEAE0, 0x4DEB90, 0x4DEB20>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x600F00,100,2,0x600EA4,1, 0x601F0C,100,2,0x601EB0,1, 0x602238,100,2,0x6021DC,1, 0x602478,100,2,0x60241C,1, 0x602904,100,2,0x6028A8,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CVehicle *, unsigned int, unsigned int, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,unsigned int,unsigned int,float>, 0,1,2,3>;
META_END

META_BEGIN(CVehicle::IsDoorReady)
static int address;
static int global_address;
static const int id = 0x4E03E0;
static const bool is_virtual = true;
static const int vtable_index = 24;
using mv_addresses_t = MvAddresses<0x4E03E0, 0x4E0490, 0x4E0420>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x600F04,100,2,0x600EA4,1, 0x601F10,100,2,0x601EB0,1, 0x60223C,100,2,0x6021DC,1, 0x60247C,100,2,0x60241C,1, 0x602908,100,2,0x6028A8,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = bool(CVehicle *, eDoors);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,eDoors>, 0,1>;
META_END

META_BEGIN(CVehicle::GetComponentWorldPosition)
static int address;
static int global_address;
static const int id = 0x4E4650;
static const bool is_virtual = true;
static const int vtable_index = 19;
using mv_addresses_t = MvAddresses<0x4E4650, 0x4E4700, 0x4E4690>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x601EFC,100,2,0x601EB0,1, 0x602228,100,2,0x6021DC,1, 0x602468,100,2,0x60241C,1, 0x6028F4,100,2,0x6028A8,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CVehicle *, int, CVector &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,int,CVector &>, 0,1,2>;
META_END

META_BEGIN(CVehicle::FlagToDestroyWhenNextProcessed)
static int address;
static int global_address;
static const int id = 0x53E350;
static const bool is_virtual = true;
static const int vtable_index = 16;
using mv_addresses_t = MvAddresses<0x53E350, 0x53E590, 0x53E540>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x600C5C,100,2,0x600C1C,1, 0x600EE4,100,2,0x600EA4,1, 0x601EF0,100,2,0x601EB0,1, 0x60245C,100,2,0x60241C,1, 0x6028E8,100,2,0x6028A8,1, 0x600A04,110,2,0x600A04,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60D9FC,120,2,0x60D9FC,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CVehicle::SetComponentRotation)
static int address;
static int global_address;
static const int id = 0x542620;
static const bool is_virtual = true;
static const int vtable_index = 21;
using mv_addresses_t = MvAddresses<0x542620, 0x542860, 0x542810>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x600EF8,100,2,0x600EA4,1, 0x601F04,100,2,0x601EB0,1, 0x602230,100,2,0x6021DC,1, 0x602470,100,2,0x60241C,1, 0x6028FC,100,2,0x6028A8,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CVehicle *, int, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,int,CVector>, 0,1,2>;
META_END

META_BEGIN(CVehicle::OpenDoor)
static int address;
static int global_address;
static const int id = 0x542630;
static const bool is_virtual = true;
static const int vtable_index = 22;
using mv_addresses_t = MvAddresses<0x542630, 0x542870, 0x542820>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x600EFC,100,2,0x600EA4,1, 0x601F08,100,2,0x601EB0,1, 0x602234,100,2,0x6021DC,1, 0x602474,100,2,0x60241C,1, 0x602900,100,2,0x6028A8,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CVehicle *, int, eDoors, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,int,eDoors,float>, 0,1,2,3>;
META_END

META_BEGIN(CVehicle::IsDoorClosed)
static int address;
static int global_address;
static const int id = 0x542640;
static const bool is_virtual = true;
static const int vtable_index = 26;
using mv_addresses_t = MvAddresses<0x542640, 0x542880, 0x542830>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x600F0C,100,2,0x600EA4,1, 0x601F18,100,2,0x601EB0,1, 0x602244,100,2,0x6021DC,1, 0x602484,100,2,0x60241C,1, 0x602910,100,2,0x6028A8,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = bool(CVehicle *, eDoors);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,eDoors>, 0,1>;
META_END

META_BEGIN(CVehicle::SetUpWheelColModel)
static int address;
static int global_address;
static const int id = 0x542650;
static const bool is_virtual = true;
static const int vtable_index = 30;
using mv_addresses_t = MvAddresses<0x542650, 0x542890, 0x542840>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x600F1C,100,2,0x600EA4,1, 0x601F28,100,2,0x601EB0,1, 0x602254,100,2,0x6021DC,1, 0x602494,100,2,0x60241C,1, 0x602920,100,2,0x6028A8,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = bool(CVehicle *, CColModel *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,CColModel *>, 0,1>;
META_END

META_BEGIN(CVehicle::BurstTyre)
static int address;
static int global_address;
static const int id = 0x542660;
static const bool is_virtual = true;
static const int vtable_index = 31;
using mv_addresses_t = MvAddresses<0x542660, 0x5428A0, 0x542850>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x600F20,100,2,0x600EA4,1, 0x601F2C,100,2,0x601EB0,1, 0x602258,100,2,0x6021DC,1, 0x602498,100,2,0x60241C,1, 0x602924,100,2,0x6028A8,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CVehicle *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,unsigned char>, 0,1>;
META_END

META_BEGIN(CVehicle::ProcessControlInputs)
static int address;
static int global_address;
static const int id = 0x54B150;
static const bool is_virtual = true;
static const int vtable_index = 18;
using mv_addresses_t = MvAddresses<0x54B150, 0x54B2D0, 0x54B280>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x601EF8,100,2,0x601EB0,1, 0x602224,100,2,0x6021DC,1, 0x602464,100,2,0x60241C,1, 0x6028F0,100,2,0x6028A8,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CVehicle *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,unsigned char>, 0,1>;
META_END

META_BEGIN(CVehicle::IsComponentPresent)
static int address;
static int global_address;
static const int id = 0x54B160;
static const bool is_virtual = true;
static const int vtable_index = 20;
using mv_addresses_t = MvAddresses<0x54B160, 0x54B2E0, 0x54B290>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x601F00,100,2,0x601EB0,1, 0x60222C,100,2,0x6021DC,1, 0x60246C,100,2,0x60241C,1, 0x6028F8,100,2,0x6028A8,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = bool(CVehicle *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,int>, 0,1>;
META_END

CTOR_META_BEGIN_OVERLOADED(CVehicle, void(unsigned char))
static int address;
static int global_address;
static const int id = 0x550A60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x550A60, 0x550BA0, 0x550B50>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x52C6CD,100,0,0x52C6B0,1, 0x53E3F3,100,0,0x53E3E0,1, 0x547231,100,0,0x547220,1, 0x54B181,100,0,0x54B170,1, 0x54E2B1,100,0,0x54E2A0,1, 0x52C90D,110,0,0x52C8F0,1, 0x53E633,110,0,0x53E620,1, 0x547431,110,0,0x547420,1, 0x54B301,110,0,0x54B2F0,1, 0x54E3F1,110,0,0x54E3E0,1, 0x52C89D,120,0,0x52C880,1, 0x53E5E3,120,0,0x53E5D0,1, 0x5473E1,120,0,0x5473D0,1, 0x54B2B1,120,0,0x54B2A0,1, 0x54E3A1,120,0,0x54E390,1>;
using def_t = CVehicle *(CVehicle *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,unsigned char>, 0,1>;
META_END

DTOR_META_BEGIN(CVehicle)
static int address;
static int global_address;
static const int id = 0x551040;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x551040, 0x551180, 0x551130>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x417EA3,100,0,0x417E80,1, 0x52D179,100,0,0x52D170,1, 0x53E799,100,0,0x53E790,1, 0x5474A9,100,0,0x5474A0,1, 0x54B281,100,0,0x54B270,1, 0x54E459,100,0,0x54E450,1, 0x417E94,100,2,0,1, 0x417EA3,110,0,0x417E80,1, 0x52D3B9,110,0,0x52D3B0,1, 0x53E9D9,110,0,0x53E9D0,1, 0x5476A9,110,0,0x5476A0,1, 0x54B401,110,0,0x54B3F0,1, 0x54E599,110,0,0x54E590,1, 0x417E94,110,2,0,1, 0x417EA3,120,0,0x417E80,1, 0x52D349,120,0,0x52D340,1, 0x53E989,120,0,0x53E980,1, 0x547659,120,0,0x547650,1, 0x54B3B1,120,0,0x54B3A0,1, 0x54E549,120,0,0x54E540,1, 0x417E94,120,2,0,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

OP_NEW_META_BEGIN(CVehicle)
static int address;
static int global_address;
static const int id = 0x551120;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x551120, 0x551260, 0x551210>;
// total references count: 10en (23), 11en (23), steam (23)
using refs_t = RefList<0x416C8A,100,0,0x4165F0,1, 0x41FF2A,100,0,0x41FE50,1, 0x4276C6,100,0,0x427690,1, 0x4355B4,100,0,0x435570,1, 0x435C39,100,0,0x435C30,1, 0x437488,100,0,0x436FA0,1, 0x43C49C,100,0,0x43AEA0,1, 0x43C5FA,100,0,0x43AEA0,2, 0x44EE01,100,0,0x44CB80,1, 0x490F74,100,0,0x490EE0,1, 0x4DAFC1,100,0,0x4D94E0,1, 0x54274C,100,0,0x5426E0,1, 0x5429CD,100,0,0x5426E0,2, 0x54A66B,100,0,0x54A640,1, 0x54A68D,100,0,0x54A640,2, 0x54BBC5,100,0,0x54B820,1, 0x54BC55,100,0,0x54B820,2, 0x54E035,100,0,0x54E000,1, 0x54E195,100,0,0x54E160,1, 0x54F0E5,100,0,0x54F000,1, 0x54F1C6,100,0,0x54F000,2, 0x586101,100,0,0x585BB0,1, 0x587426,100,0,0x587200,1, 0x416C8A,110,0,0x4165F0,1, 0x41FF2A,110,0,0x41FE50,1, 0x4276C6,110,0,0x427690,1, 0x4355B4,110,0,0x435570,1, 0x435C39,110,0,0x435C30,1, 0x437488,110,0,0x436FA0,1, 0x43C49C,110,0,0x43AEA0,1, 0x43C5FA,110,0,0x43AEA0,2, 0x44EE01,110,0,0x44CB80,1, 0x491034,110,0,0x490FA0,1, 0x4DB061,110,0,0x4D9580,1, 0x54298C,110,0,0x542920,1, 0x542C0D,110,0,0x542920,2, 0x54A83B,110,0,0x54A810,1, 0x54A85D,110,0,0x54A810,2, 0x54BD45,110,0,0x54B9A0,1, 0x54BDD5,110,0,0x54B9A0,2, 0x54E185,110,0,0x54E150,1, 0x54E2D5,110,0,0x54E2A0,1, 0x54F225,110,0,0x54F140,1, 0x54F306,110,0,0x54F140,2, 0x586441,110,0,0x585EF0,1, 0x587766,110,0,0x587540,1, 0x416C8A,120,0,0x4165F0,1, 0x41FF2A,120,0,0x41FE50,1, 0x4276C6,120,0,0x427690,1, 0x4355B4,120,0,0x435570,1, 0x435C39,120,0,0x435C30,1, 0x437488,120,0,0x436FA0,1, 0x43C49C,120,0,0x43AEA0,1, 0x43C5FA,120,0,0x43AEA0,2, 0x44EE01,120,0,0x44CB80,1, 0x490FC4,120,0,0x490F30,1, 0x4DAFF1,120,0,0x4D9510,1, 0x54293C,120,0,0x5428D0,1, 0x542BBD,120,0,0x5428D0,2, 0x54A7EB,120,0,0x54A7C0,1, 0x54A80D,120,0,0x54A7C0,2, 0x54BCF5,120,0,0x54B950,1, 0x54BD85,120,0,0x54B950,2, 0x54E135,120,0,0x54E100,1, 0x54E285,120,0,0x54E250,1, 0x54F1D5,120,0,0x54F0F0,1, 0x54F2B6,120,0,0x54F0F0,2, 0x586331,120,0,0x585DE0,1, 0x587656,120,0,0x587430,1>;
using def_t = void *(unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

OP_NEW_META_BEGIN_OVERLOADED(CVehicle, void *(unsigned int, int))
static int address;
static int global_address;
static const int id = 0x551130;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x551130, 0x551270, 0x551220>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x4A1BFE,100,0,0x4A1B40,1, 0x4A1C68,100,0,0x4A1B40,2, 0x5953D3,100,0,0x595240,1, 0x595406,100,0,0x595240,2, 0x59544C,100,0,0x595240,3, 0x59547F,100,0,0x595240,4, 0x5954AB,100,0,0x595240,5, 0x4A1CEE,110,0,0x4A1C30,1, 0x4A1D58,110,0,0x4A1C30,2, 0x595683,110,0,0x5954F0,1, 0x5956B6,110,0,0x5954F0,2, 0x5956FC,110,0,0x5954F0,3, 0x59572F,110,0,0x5954F0,4, 0x59575B,110,0,0x5954F0,5, 0x4A1C7E,120,0,0x4A1BC0,1, 0x4A1CE8,120,0,0x4A1BC0,2, 0x595573,120,0,0x5953E0,1, 0x5955A6,120,0,0x5953E0,2, 0x5955EC,120,0,0x5953E0,3, 0x59561F,120,0,0x5953E0,4, 0x59564B,120,0,0x5953E0,5>;
using def_t = void *(unsigned int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,int>, 0,1>;
META_END

OP_DELETE_META_BEGIN(CVehicle)
static int address;
static int global_address;
static const int id = 0x551150;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x551150, 0x551290, 0x551240>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x417EB0,100,0,0x417E80,1, 0x4202D0,100,0,0x4202A0,1, 0x542610,100,0,0x5425E0,1, 0x54A5DF,100,0,0x54A590,1, 0x54E130,100,0,0x54E100,1, 0x550530,100,0,0x550500,1, 0x417EB0,110,0,0x417E80,1, 0x4202D0,110,0,0x4202A0,1, 0x542850,110,0,0x542820,1, 0x54A7DF,110,0,0x54A790,1, 0x54E270,110,0,0x54E240,1, 0x550670,110,0,0x550640,1, 0x417EB0,120,0,0x417E80,1, 0x4202D0,120,0,0x4202A0,1, 0x542800,120,0,0x5427D0,1, 0x54A78F,120,0,0x54A740,1, 0x54E220,120,0,0x54E1F0,1, 0x550620,120,0,0x5505F0,1>;
using def_t = void(void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *>, 0>;
META_END

META_BEGIN(CVehicle::SetModelIndex)
static int address;
static int global_address;
static const int id = 0x551170;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x551170, 0x5512B0, 0x551260>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x52D198,100,0,0x52D190,1, 0x54B295,100,0,0x54B290,1, 0x54DDB7,100,0,0x54C1D0,1, 0x54E478,100,0,0x54E470,1, 0x6028B4,100,2,0x6028A8,1, 0x52D3D8,110,0,0x52D3D0,1, 0x54B415,110,0,0x54B410,1, 0x54DF37,110,0,0x54C350,1, 0x54E5B8,110,0,0x54E5B0,1, 0x602278,110,2,0x602278,1, 0x52D368,120,0,0x52D360,1, 0x54B3C5,120,0,0x54B3C0,1, 0x54DEE7,120,0,0x54C300,1, 0x54E568,120,0,0x54E560,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CVehicle *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,unsigned int>, 0,1>;
META_END

META_BEGIN(CVehicle::CanBeDeleted)
static int address;
static int global_address;
static const int id = 0x5511B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5511B0, 0x5512F0, 0x5512A0>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x41845B,100,0,0x418430,1, 0x4186C8,100,0,0x418430,2, 0x4262B9,100,0,0x4261F0,1, 0x454248,100,0,0x454060,1, 0x4B4FC4,100,0,0x4B4E70,1, 0x4B51DC,100,0,0x4B50E0,1, 0x4F5D0C,100,0,0x4F5BE0,1, 0x41845B,110,0,0x418430,1, 0x4186C8,110,0,0x418430,2, 0x4262B9,110,0,0x4261F0,1, 0x454248,110,0,0x454060,1, 0x4B50B4,110,0,0x4B4F60,1, 0x4B52CC,110,0,0x4B51D0,1, 0x4F5DBC,110,0,0x4F5C90,1, 0x41845B,120,0,0x418430,1, 0x4186C8,120,0,0x418430,2, 0x4262B9,120,0,0x4261F0,1, 0x454248,120,0,0x454060,1, 0x4B5044,120,0,0x4B4EF0,1, 0x4B525C,120,0,0x4B5160,1, 0x4F5D4C,120,0,0x4F5C20,1>;
using def_t = bool(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CVehicle::ProcessWheelRotation)
static int address;
static int global_address;
static const int id = 0x551280;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x551280, 0x5513C0, 0x551370>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x531ACD,100,0,0x531470,1, 0x53A1BB,100,0,0x539EA0,1, 0x53A1F5,100,0,0x539EA0,2, 0x531D0D,110,0,0x5316B0,1, 0x53A3FB,110,0,0x53A0E0,1, 0x53A435,110,0,0x53A0E0,2, 0x531C9D,120,0,0x531640,1, 0x53A3AB,120,0,0x53A090,1, 0x53A3E5,120,0,0x53A090,2>;
using def_t = float(CVehicle *, tWheelState, CVector const &, CVector const &, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,tWheelState,CVector const &,CVector const &,float>, 0,1,2,3,4>;
META_END

META_BEGIN(CVehicle::ProcessWheel)
static int address;
static int global_address;
static const int id = 0x5512E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5512E0, 0x551420, 0x5513D0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x533726,100,0,0x531470,1, 0x5338A1,100,0,0x531470,2, 0x533C21,100,0,0x531470,3, 0x533DA1,100,0,0x531470,4, 0x533966,110,0,0x5316B0,1, 0x533AE1,110,0,0x5316B0,2, 0x533E61,110,0,0x5316B0,3, 0x533FE1,110,0,0x5316B0,4, 0x5338F6,120,0,0x531640,1, 0x533A71,120,0,0x531640,2, 0x533DF1,120,0,0x531640,3, 0x533F71,120,0,0x531640,4>;
using def_t = void(CVehicle *, CVector &, CVector &, CVector &, CVector &, int, float, float, float, char, float *, tWheelState *, unsigned short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,CVector &,CVector &,CVector &,CVector &,int,float,float,float,char,float *,tWheelState *,unsigned short>, 0,1,2,3,4,5,6,7,8,9,10,11,12>;
META_END

META_BEGIN(CVehicle::InflictDamage)
static int address;
static int global_address;
static const int id = 0x551950;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x551950, 0x551A90, 0x551A40>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x4799FE,100,0,0x4798D0,1, 0x4B18CD,100,0,0x4B1340,1, 0x558964,100,0,0x558550,1, 0x55FF7A,100,0,0x55F950,1, 0x561259,100,0,0x560620,1, 0x562D2B,100,0,0x5624D0,1, 0x563E0D,100,0,0x563B00,1, 0x4799FE,110,0,0x4798D0,1, 0x4B19BD,110,0,0x4B1430,1, 0x558A94,110,0,0x558680,1, 0x5600AA,110,0,0x55FA80,1, 0x561389,110,0,0x560750,1, 0x562E5B,110,0,0x562600,1, 0x563F3D,110,0,0x563C30,1, 0x4799FE,120,0,0x4798D0,1, 0x4B194D,120,0,0x4B13C0,1, 0x558A44,120,0,0x558630,1, 0x56005A,120,0,0x55FA30,1, 0x561339,120,0,0x560700,1, 0x562E0B,120,0,0x5625B0,1, 0x563EED,120,0,0x563BE0,1>;
using def_t = void(CVehicle *, CEntity *, eWeaponType, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,CEntity *,eWeaponType,float>, 0,1,2,3>;
META_END

META_BEGIN(CVehicle::ProcessDelayedExplosion)
static int address;
static int global_address;
static const int id = 0x551C90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x551C90, 0x551DD0, 0x551D80>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5347E8,100,0,0x531470,1, 0x541853,100,0,0x53EF10,1, 0x534A28,110,0,0x5316B0,1, 0x541A93,110,0,0x53F150,1, 0x5349B8,120,0,0x531640,1, 0x541A43,120,0,0x53F100,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN_OVERLOADED(CVehicle::AddPassenger, bool (CVehicle::*)(CPed *))
static int address;
static int global_address;
static const int id = 0x551D90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x551D90, 0x551ED0, 0x551E80>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x441B26,100,0,0x440CB0,1, 0x4CF6F3,100,0,0x4CF220,1, 0x551E2A,100,0,0x551E10,1, 0x441B26,110,0,0x440CB0,1, 0x4CF793,110,0,0x4CF2C0,1, 0x551F6A,110,0,0x551F50,1, 0x441B26,120,0,0x440CB0,1, 0x4CF723,120,0,0x4CF250,1, 0x551F1A,120,0,0x551F00,1>;
using def_t = bool(CVehicle *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,CPed *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CVehicle::AddPassenger, bool (CVehicle::*)(CPed *, unsigned char))
static int address;
static int global_address;
static const int id = 0x551E10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x551E10, 0x551F50, 0x551F00>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x441B36,100,0,0x440CB0,1, 0x4CF513,100,0,0x4CF220,1, 0x4CF6D1,100,0,0x4CF220,2, 0x4CF6DD,100,0,0x4CF220,3, 0x4CF6E9,100,0,0x4CF220,4, 0x441B36,110,0,0x440CB0,1, 0x4CF5B3,110,0,0x4CF2C0,1, 0x4CF771,110,0,0x4CF2C0,2, 0x4CF77D,110,0,0x4CF2C0,3, 0x4CF789,110,0,0x4CF2C0,4, 0x441B36,120,0,0x440CB0,1, 0x4CF543,120,0,0x4CF250,1, 0x4CF701,120,0,0x4CF250,2, 0x4CF70D,120,0,0x4CF250,3, 0x4CF719,120,0,0x4CF250,4>;
using def_t = bool(CVehicle *, CPed *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,CPed *,unsigned char>, 0,1,2>;
META_END

META_BEGIN(CVehicle::RemovePassenger)
static int address;
static int global_address;
static const int id = 0x551EB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x551EB0, 0x551FF0, 0x551FA0>;
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x421558,100,0,0x421400,1, 0x421775,100,0,0x421400,2, 0x421921,100,0,0x421400,3, 0x43BD56,100,0,0x43AEA0,1, 0x43E951,100,0,0x43D530,1, 0x44A9C1,100,0,0x448240,1, 0x44B3C1,100,0,0x448240,2, 0x4CEDC8,100,0,0x4CE8F0,1, 0x4D65D6,100,0,0x4D6570,1, 0x4E3850,100,0,0x4E36E0,1, 0x421558,110,0,0x421400,1, 0x421775,110,0,0x421400,2, 0x421921,110,0,0x421400,3, 0x43BD56,110,0,0x43AEA0,1, 0x43E951,110,0,0x43D530,1, 0x44A9C1,110,0,0x448240,1, 0x44B3C1,110,0,0x448240,2, 0x4CEE68,110,0,0x4CE990,1, 0x4D6676,110,0,0x4D6610,1, 0x4E3900,110,0,0x4E3790,1, 0x421558,120,0,0x421400,1, 0x421775,120,0,0x421400,2, 0x421921,120,0,0x421400,3, 0x43BD56,120,0,0x43AEA0,1, 0x43E951,120,0,0x43D530,1, 0x44A9C1,120,0,0x448240,1, 0x44B3C1,120,0,0x448240,2, 0x4CEDF8,120,0,0x4CE920,1, 0x4D6606,120,0,0x4D65A0,1, 0x4E3890,120,0,0x4E3720,1>;
using def_t = void(CVehicle *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,CPed *>, 0,1>;
META_END

META_BEGIN(CVehicle::SetDriver)
static int address;
static int global_address;
static const int id = 0x551F20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x551F20, 0x552060, 0x552010>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4CF38F,100,0,0x4CF220,1, 0x4CF569,100,0,0x4CF220,2, 0x4D7DA2,100,0,0x4D7D20,1, 0x4CF42F,110,0,0x4CF2C0,1, 0x4CF609,110,0,0x4CF2C0,2, 0x4D7E42,110,0,0x4D7DC0,1, 0x4CF3BF,120,0,0x4CF250,1, 0x4CF599,120,0,0x4CF250,2, 0x4D7DD2,120,0,0x4D7D50,1>;
using def_t = void(CVehicle *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,CPed *>, 0,1>;
META_END

META_BEGIN(CVehicle::RemoveDriver)
static int address;
static int global_address;
static const int id = 0x5520A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5520A0, 0x5521E0, 0x552190>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x43BD00,100,0,0x43AEA0,1, 0x43E910,100,0,0x43D530,1, 0x44A968,100,0,0x448240,1, 0x44B383,100,0,0x448240,2, 0x4CED72,100,0,0x4CE8F0,1, 0x4CF0AC,100,0,0x4CF000,1, 0x43BD00,110,0,0x43AEA0,1, 0x43E910,110,0,0x43D530,1, 0x44A968,110,0,0x448240,1, 0x44B383,110,0,0x448240,2, 0x4CEE12,110,0,0x4CE990,1, 0x4CF14C,110,0,0x4CF0A0,1, 0x43BD00,120,0,0x43AEA0,1, 0x43E910,120,0,0x43D530,1, 0x44A968,120,0,0x448240,1, 0x44B383,120,0,0x448240,2, 0x4CEDA2,120,0,0x4CE920,1, 0x4CF0DC,120,0,0x4CF030,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CVehicle::SetUpDriver)
static int address;
static int global_address;
static const int id = 0x5520C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5520C0, 0x552200, 0x5521B0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x415C96,100,0,0x415C60,1, 0x415CB4,100,0,0x415C60,2, 0x415CE7,100,0,0x415CE0,1, 0x415D07,100,0,0x415D00,1, 0x417CF2,100,0,0x4165F0,1, 0x415C96,110,0,0x415C60,1, 0x415CB4,110,0,0x415C60,2, 0x415CE7,110,0,0x415CE0,1, 0x415D07,110,0,0x415D00,1, 0x417CF2,110,0,0x4165F0,1, 0x415C96,120,0,0x415C60,1, 0x415CB4,120,0,0x415C60,2, 0x415CE7,120,0,0x415CE0,1, 0x415D07,120,0,0x415D00,1, 0x417CF2,120,0,0x4165F0,1>;
using def_t = CPed *(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CVehicle::SetupPassenger)
static int address;
static int global_address;
static const int id = 0x552160;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x552160, 0x5522A0, 0x552250>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x415CBD,100,0,0x415C60,1, 0x415CC6,100,0,0x415C60,2, 0x415CCF,100,0,0x415C60,3, 0x415CF0,100,0,0x415CE0,1, 0x415D10,100,0,0x415D00,1, 0x415CBD,110,0,0x415C60,1, 0x415CC6,110,0,0x415C60,2, 0x415CCF,110,0,0x415C60,3, 0x415CF0,110,0,0x415CE0,1, 0x415D10,110,0,0x415D00,1, 0x415CBD,120,0,0x415C60,1, 0x415CC6,120,0,0x415C60,2, 0x415CCF,120,0,0x415C60,3, 0x415CF0,120,0,0x415CE0,1, 0x415D10,120,0,0x415D00,1>;
using def_t = CPed *(CVehicle *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,int>, 0,1>;
META_END

META_BEGIN(CVehicle::UsesSiren)
static int address;
static int global_address;
static const int id = 0x552200;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x552200, 0x552340, 0x5522F0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x413FB0,100,0,0x413E50,1, 0x41454B,100,0,0x413E50,2, 0x414FE4,100,0,0x413E50,3, 0x437580,100,0,0x436FA0,1, 0x534085,100,0,0x531470,1, 0x53480A,100,0,0x531470,2, 0x413FB0,110,0,0x413E50,1, 0x41454B,110,0,0x413E50,2, 0x414FE4,110,0,0x413E50,3, 0x437580,110,0,0x436FA0,1, 0x5342C5,110,0,0x5316B0,1, 0x534A4A,110,0,0x5316B0,2, 0x413FB0,120,0,0x413E50,1, 0x41454B,120,0,0x413E50,2, 0x414FE4,120,0,0x413E50,3, 0x437580,120,0,0x436FA0,1, 0x534255,120,0,0x531640,1, 0x5349DA,120,0,0x531640,2>;
using def_t = bool(CVehicle *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *, unsigned int>, 0,1>;
META_END

META_BEGIN(CVehicle::IsUpsideDown)
static int address;
static int global_address;
static const int id = 0x552230;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x552230, 0x552370, 0x552320>;
// total references count: 10en (15), 11en (15), steam (15)
using refs_t = RefList<0x4142F9,100,0,0x413E50,1, 0x4147EB,100,0,0x413E50,2, 0x41F3CD,100,0,0x41F220,1, 0x45A9A9,100,0,0x459FA0,1, 0x4705AB,100,0,0x46FFF0,1, 0x470601,100,0,0x46FFF0,2, 0x47081C,100,0,0x46FFF0,3, 0x47086E,100,0,0x46FFF0,4, 0x49FFCE,100,0,0x49FD30,1, 0x4CEDE3,100,0,0x4CE8F0,1, 0x4D9E42,100,0,0x4D94E0,1, 0x4DE684,100,0,0x4DE500,1, 0x4DFC6D,100,0,0x4DF940,1, 0x531773,100,0,0x531470,1, 0x5317DB,100,0,0x531470,2, 0x4142F9,110,0,0x413E50,1, 0x4147EB,110,0,0x413E50,2, 0x41F3CD,110,0,0x41F220,1, 0x45A9A9,110,0,0x459FA0,1, 0x47058B,110,0,0x46FFD0,1, 0x4705E1,110,0,0x46FFD0,2, 0x4707FC,110,0,0x46FFD0,3, 0x47084E,110,0,0x46FFD0,4, 0x4A00BE,110,0,0x49FE20,1, 0x4CEE83,110,0,0x4CE990,1, 0x4D9EE2,110,0,0x4D9580,1, 0x4DE734,110,0,0x4DE5B0,1, 0x4DFD1D,110,0,0x4DF9F0,1, 0x5319B3,110,0,0x5316B0,1, 0x531A1B,110,0,0x5316B0,2, 0x4142F9,120,0,0x413E50,1, 0x4147EB,120,0,0x413E50,2, 0x41F3CD,120,0,0x41F220,1, 0x45A9A9,120,0,0x459FA0,1, 0x47058B,120,0,0x46FFD0,1, 0x4705E1,120,0,0x46FFD0,2, 0x4707FC,120,0,0x46FFD0,3, 0x47084E,120,0,0x46FFD0,4, 0x4A004E,120,0,0x49FDB0,1, 0x4CEE13,120,0,0x4CE920,1, 0x4D9E72,120,0,0x4D9510,1, 0x4DE6C4,120,0,0x4DE540,1, 0x4DFCAD,120,0,0x4DF980,1, 0x531943,120,0,0x531640,1, 0x5319AB,120,0,0x531640,2>;
using def_t = bool(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CVehicle::IsOnItsSide)
static int address;
static int global_address;
static const int id = 0x552260;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x552260, 0x5523A0, 0x552350>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4CEDF6,100,0,0x4CE8F0,1, 0x4E1262,100,0,0x4E1010,1, 0x4CEE96,110,0,0x4CE990,1, 0x4E1312,110,0,0x4E10C0,1, 0x4CEE26,120,0,0x4CE920,1, 0x4E12A2,120,0,0x4E1050,1>;
using def_t = bool(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CVehicle::CanPedOpenLocks)
static int address;
static int global_address;
static const int id = 0x5522A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5522A0, 0x5523E0, 0x552390>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x4713AD,100,0,0x4712A0,1, 0x4D975E,100,0,0x4D94E0,1, 0x4DAE62,100,0,0x4D94E0,2, 0x4DE25E,100,0,0x4DE130,1, 0x4E0DB0,100,0,0x4E0D30,1, 0x47138D,110,0,0x471280,1, 0x4D97FE,110,0,0x4D9580,1, 0x4DAF02,110,0,0x4D9580,2, 0x4DE30E,110,0,0x4DE1E0,1, 0x4E0E60,110,0,0x4E0DE0,1, 0x47138D,120,0,0x471280,1, 0x4D978E,120,0,0x4D9510,1, 0x4DAE92,120,0,0x4D9510,2, 0x4DE29E,120,0,0x4DE170,1, 0x4E0DF0,120,0,0x4E0D70,1>;
using def_t = bool(CVehicle *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,CPed *>, 0,1>;
META_END

META_BEGIN(CVehicle::CanPedEnterCar)
static int address;
static int global_address;
static const int id = 0x5522F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5522F0, 0x552430, 0x5523E0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4C18FE,100,0,0x4C1400,1, 0x4D44DB,100,0,0x4D3F90,1, 0x53177E,100,0,0x531470,1, 0x5317E6,100,0,0x531470,2, 0x4C19EE,110,0,0x4C14F0,1, 0x4D457B,110,0,0x4D4030,1, 0x5319BE,110,0,0x5316B0,1, 0x531A26,110,0,0x5316B0,2, 0x4C197E,120,0,0x4C1480,1, 0x4D450B,120,0,0x4D3FC0,1, 0x53194E,120,0,0x531640,1, 0x5319B6,120,0,0x531640,2>;
using def_t = bool(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CVehicle::CanPedExitCar)
static int address;
static int global_address;
static const int id = 0x5523C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5523C0, 0x552500, 0x5524B0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4DAB3B,100,0,0x4D94E0,1, 0x4E1059,100,0,0x4E1010,1, 0x4DABDB,110,0,0x4D9580,1, 0x4E1109,110,0,0x4E10C0,1, 0x4DAB6B,120,0,0x4D9510,1, 0x4E1099,120,0,0x4E1050,1>;
using def_t = bool(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CVehicle::ProcessCarAlarm)
static int address;
static int global_address;
static const int id = 0x5525A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5525A0, 0x5526E0, 0x552690>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5316B2,100,0,0x531470,1, 0x53F2D2,100,0,0x53EF10,1, 0x5318F2,110,0,0x5316B0,1, 0x53F512,110,0,0x53F150,1, 0x531882,120,0,0x531640,1, 0x53F4C2,120,0,0x53F100,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CVehicle::IsSphereTouchingVehicle)
static int address;
static int global_address;
static const int id = 0x552620;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x552620, 0x552760, 0x552710>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x4308E0,100,0,0x430860,1, 0x4309B6,100,0,0x430860,2, 0x430AC2,100,0,0x430860,3, 0x430C18,100,0,0x430860,4, 0x430C92,100,0,0x430860,5, 0x430D64,100,0,0x430860,6, 0x43321C,100,0,0x4331B0,1, 0x4308E0,110,0,0x430860,1, 0x4309B6,110,0,0x430860,2, 0x430AC2,110,0,0x430860,3, 0x430C18,110,0,0x430860,4, 0x430C92,110,0,0x430860,5, 0x430D64,110,0,0x430860,6, 0x43321C,110,0,0x4331B0,1, 0x4308E0,120,0,0x430860,1, 0x4309B6,120,0,0x430860,2, 0x430AC2,120,0,0x430860,3, 0x430C18,120,0,0x430860,4, 0x430C92,120,0,0x430860,5, 0x430D64,120,0,0x430860,6, 0x43321C,120,0,0x4331B0,1>;
using def_t = bool(CVehicle *, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,float,float,float,float>, 0,1,2,3,4>;
META_END

META_BEGIN(CVehicle::IsVehicleNormal)
static int address;
static int global_address;
static const int id = 0x5527E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5527E0, 0x552920, 0x5528D0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4C6D45,100,0,0x4C6C10,1, 0x4C7106,100,0,0x4C6C10,2, 0x4E39FE,100,0,0x4E3870,1, 0x4C6DE5,110,0,0x4C6CB0,1, 0x4C71A6,110,0,0x4C6CB0,2, 0x4E3AAE,110,0,0x4E3920,1, 0x4C6D75,120,0,0x4C6C40,1, 0x4C7136,120,0,0x4C6C40,2, 0x4E3A3E,120,0,0x4E38B0,1>;
using def_t = bool(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CVehicle::ChangeLawEnforcerState)
static int address;
static int global_address;
static const int id = 0x552820;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x552820, 0x552960, 0x552910>;
// total references count: 10en (8), 11en (8), steam (8)
using refs_t = RefList<0x417A6E,100,0,0x4165F0,1, 0x43BD4E,100,0,0x43AEA0,1, 0x44A9B6,100,0,0x448240,1, 0x4CEDC0,100,0,0x4CE8F0,1, 0x4CF0EA,100,0,0x4CF000,1, 0x4CF5E3,100,0,0x4CF220,1, 0x53BEE7,100,0,0x53BC60,1, 0x541D98,100,0,0x541CB0,1, 0x417A6E,110,0,0x4165F0,1, 0x43BD4E,110,0,0x43AEA0,1, 0x44A9B6,110,0,0x448240,1, 0x4CEE60,110,0,0x4CE990,1, 0x4CF18A,110,0,0x4CF0A0,1, 0x4CF683,110,0,0x4CF2C0,1, 0x53C127,110,0,0x53BEA0,1, 0x541FD8,110,0,0x541EF0,1, 0x417A6E,120,0,0x4165F0,1, 0x43BD4E,120,0,0x43AEA0,1, 0x44A9B6,120,0,0x448240,1, 0x4CEDF0,120,0,0x4CE920,1, 0x4CF11A,120,0,0x4CF030,1, 0x4CF613,120,0,0x4CF250,1, 0x53C0D7,120,0,0x53BE50,1, 0x541F88,120,0,0x541EA0,1>;
using def_t = void(CVehicle *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,unsigned char>, 0,1>;
META_END

META_BEGIN(CVehicle::IsLawEnforcementVehicle)
static int address;
static int global_address;
static const int id = 0x552880;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x552880, 0x5529C0, 0x552970>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x43BD3D,100,0,0x43AEA0,1, 0x44A9A5,100,0,0x448240,1, 0x4C2504,100,0,0x4C1B50,1, 0x4CEDAF,100,0,0x4CE8F0,1, 0x4CF0D9,100,0,0x4CF000,1, 0x4CF5D6,100,0,0x4CF220,1, 0x43BD3D,110,0,0x43AEA0,1, 0x44A9A5,110,0,0x448240,1, 0x4C25A4,110,0,0x4C1BF0,1, 0x4CEE4F,110,0,0x4CE990,1, 0x4CF179,110,0,0x4CF0A0,1, 0x4CF676,110,0,0x4CF2C0,1, 0x43BD3D,120,0,0x43AEA0,1, 0x44A9A5,120,0,0x448240,1, 0x4C2534,120,0,0x4C1B80,1, 0x4CEDDF,120,0,0x4CE920,1, 0x4CF109,120,0,0x4CF030,1, 0x4CF606,120,0,0x4CF250,1>;
using def_t = bool(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CVehicle::ShufflePassengersToMakeSpace)
static int address;
static int global_address;
static const int id = 0x5528A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5528A0, 0x5529E0, 0x552990>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4E213F,100,0,0x4E1F30,1, 0x4E21EF,110,0,0x4E1FE0,1, 0x4E217F,120,0,0x4E1F70,1>;
using def_t = bool(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CVehicle::ExtinguishCarFire)
static int address;
static int global_address;
static const int id = 0x552AF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x552AF0, 0x552C30, 0x552BE0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4B54F7,100,0,0x4B5460,1, 0x5887C2,100,0,0x588490,1, 0x4B55E7,110,0,0x4B5550,1, 0x588B02,110,0,0x5887D0,1, 0x4B5577,120,0,0x4B54E0,1, 0x5889F2,120,0,0x5886C0,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CVehicle::CarHasRoof)
static int address;
static int global_address;
static const int id = 0x552B70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x552B70, 0x552CB0, 0x552C60>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4C0180,100,0,0x4BFFE0,1, 0x5231F0,100,0,0x5231B0,1, 0x4C0270,110,0,0x4C00D0,1, 0x523430,110,0,0x5233F0,1, 0x4C0200,120,0,0x4C0060,1, 0x5233C0,120,0,0x523380,1>;
using def_t = bool(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CVehicle::FlyingControl)
static int address;
static int global_address;
static const int id = 0x552BB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x552BB0, 0x552CF0, 0x552CA0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x534233,100,0,0x531470,1, 0x53424E,100,0,0x531470,2, 0x534309,100,0,0x531470,3, 0x534473,110,0,0x5316B0,1, 0x53448E,110,0,0x5316B0,2, 0x534549,110,0,0x5316B0,3, 0x534403,120,0,0x531640,1, 0x53441E,120,0,0x531640,2, 0x5344D9,120,0,0x531640,3>;
using def_t = void(CVehicle *, eFlightModel);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *,eFlightModel>, 0,1>;
META_END

META_BEGIN(CVehicle::DoFixedMachineGuns)
static int address;
static int global_address;
static const int id = 0x564300;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x564300, 0x564430, 0x5643E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x53F319,100,0,0x53EF10,1, 0x53F559,110,0,0x53F150,1, 0x53F509,120,0,0x53F100,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(DestroyVehicleAndDriverAndPassengers)
static int address;
static int global_address;
static const int id = 0x552760;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x552760, 0x5528A0, 0x552850>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x42321E,100,0,0x4222D0,1, 0x42360A,100,0,0x4222D0,2, 0x423B45,100,0,0x4222D0,3, 0x42416F,100,0,0x4222D0,4, 0x42321E,110,0,0x4222D0,1, 0x42360A,110,0,0x4222D0,2, 0x423B45,110,0,0x4222D0,3, 0x42416F,110,0,0x4222D0,4, 0x42321E,120,0,0x4222D0,1, 0x42360A,120,0,0x4222D0,2, 0x423B45,120,0,0x4222D0,3, 0x42416F,120,0,0x4222D0,4>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

}
