/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CDarkel::Init)
static int address;
static int global_address;
static const int id = 0x420650;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x420650, 0x420650, 0x420650>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C2A3,100,0,0x48BED0,1, 0x48C59E,100,0,0x48C4B0,1, 0x48C393,110,0,0x48BFC0,1, 0x48C69E,110,0,0x48C5B0,1, 0x48C323,120,0,0x48BF50,1, 0x48C62E,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CDarkel::Update)
static int address;
static int global_address;
static const int id = 0x420660;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x420660, 0x420660, 0x420660>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C90E,100,0,0x48C850,1, 0x48CA0E,110,0,0x48C950,1, 0x48C99E,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CDarkel::DrawMessages)
static int address;
static int global_address;
static const int id = 0x420920;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x420920, 0x420920, 0x420920>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E434,100,0,0x48E0E0,1, 0x48E4F4,110,0,0x48E1A0,1, 0x48E484,120,0,0x48E130,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CDarkel::ReadStatus)
static int address;
static int global_address;
static const int id = 0x420E50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x420E50, 0x420E50, 0x420E50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x442BE8,100,0,0x4429C0,1, 0x442BE8,110,0,0x4429C0,1, 0x442BE8,120,0,0x4429C0,1>;
using def_t = eDarkelStatus();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CDarkel::FrenzyOnGoing)
static int address;
static int global_address;
static const int id = 0x420E60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x420E60, 0x420E60, 0x420E60>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x430E99,100,0,0x430860,1, 0x431543,100,0,0x431520,1, 0x4F2318,100,0,0x4F2310,1, 0x5062CE,100,0,0x5052A0,1, 0x430E99,110,0,0x430860,1, 0x431543,110,0,0x431520,1, 0x4F23C8,110,0,0x4F23C0,1, 0x5063AE,110,0,0x505380,1, 0x430E99,120,0,0x430860,1, 0x431543,120,0,0x431520,1, 0x4F2358,120,0,0x4F2350,1, 0x50633E,120,0,0x505310,1>;
using def_t = bool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CDarkel::ResetOnPlayerDeath)
static int address;
static int global_address;
static const int id = 0x420E70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x420E70, 0x420E70, 0x420E70>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4A12FB,100,0,0x4A12E0,1, 0x4A134B,100,0,0x4A1330,1, 0x4A139B,100,0,0x4A1380,1, 0x4A13EB,110,0,0x4A13D0,1, 0x4A143B,110,0,0x4A1420,1, 0x4A148B,110,0,0x4A1470,1, 0x4A137B,120,0,0x4A1360,1, 0x4A13CB,120,0,0x4A13B0,1, 0x4A141B,120,0,0x4A1400,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CDarkel::RegisterKillByPlayer)
static int address;
static int global_address;
static const int id = 0x420F60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x420F60, 0x420F60, 0x420F60>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x4EAD39,100,0,0x4EA420,1, 0x53BDB6,100,0,0x53BC60,1, 0x53BE17,100,0,0x53BC60,2, 0x541D5A,100,0,0x541CB0,1, 0x552776,100,0,0x552760,1, 0x5527A0,100,0,0x552760,2, 0x4EADE9,110,0,0x4EA4D0,1, 0x53BFF6,110,0,0x53BEA0,1, 0x53C057,110,0,0x53BEA0,2, 0x541F9A,110,0,0x541EF0,1, 0x5528B6,110,0,0x5528A0,1, 0x5528E0,110,0,0x5528A0,2, 0x4EAD79,120,0,0x4EA460,1, 0x53BFA6,120,0,0x53BE50,1, 0x53C007,120,0,0x53BE50,2, 0x541F4A,120,0,0x541EA0,1, 0x552866,120,0,0x552850,1, 0x552890,120,0,0x552850,2>;
using def_t = void(CPed *, eWeaponType, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPed *,eWeaponType,bool>, 0,1,2>;
META_END

META_BEGIN(CDarkel::RegisterKillNotByPlayer)
static int address;
static int global_address;
static const int id = 0x421060;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x421060, 0x421060, 0x421060>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4EAD55,100,0,0x4EA420,1, 0x4EAE05,110,0,0x4EA4D0,1, 0x4EAD95,120,0,0x4EA460,1>;
using def_t = void(CPed *, eWeaponType);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPed *,eWeaponType>, 0,1>;
META_END

META_BEGIN(CDarkel::RegisterCarBlownUpByPlayer)
static int address;
static int global_address;
static const int id = 0x421070;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x421070, 0x421070, 0x421070>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x53BF04,100,0,0x53BC60,1, 0x54A04F,100,0,0x5499F0,1, 0x53C144,110,0,0x53BEA0,1, 0x54A24F,110,0,0x549BF0,1, 0x53C0F4,120,0,0x53BE50,1, 0x54A1FF,120,0,0x549BA0,1>;
using def_t = void(CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CDarkel::StartFrenzy)
static int address;
static int global_address;
static const int id = 0x4210E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4210E0, 0x4210E0, 0x4210E0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x442BD2,100,0,0x4429C0,1, 0x44B9FE,100,0,0x448240,1, 0x442BD2,110,0,0x4429C0,1, 0x44B9FE,110,0,0x448240,1, 0x442BD2,120,0,0x4429C0,1, 0x44B9FE,120,0,0x448240,1>;
using def_t = void(eWeaponType, int, unsigned short, int, wchar_t *, int, int, int, bool, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<eWeaponType,int,unsigned short,int,wchar_t *,int,int,int,bool,bool>, 0,1,2,3,4,5,6,7,8,9>;
META_END

META_BEGIN(CDarkel::ResetModelsKilledByPlayer)
static int address;
static int global_address;
static const int id = 0x421310;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x421310, 0x421310, 0x421310>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x444CFA,100,0,0x444B20,1, 0x444CFA,110,0,0x444B20,1, 0x444CFA,120,0,0x444B20,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CDarkel::QueryModelsKilledByPlayer)
static int address;
static int global_address;
static const int id = 0x421370;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x421370, 0x421370, 0x421370>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x444D21,100,0,0x444B20,1, 0x444D21,110,0,0x444B20,1, 0x444D21,120,0,0x444B20,1>;
using def_t = unsigned short(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CDarkel::CalcFade)
static int address;
static int global_address;
static const int id = 0x421380;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x421380, 0x421380, 0x421380>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4209BE,100,0,0x420920,1, 0x420A33,100,0,0x420920,2, 0x420DB2,100,0,0x420920,3, 0x4209BE,110,0,0x420920,1, 0x420A33,110,0,0x420920,2, 0x420DB2,110,0,0x420920,3, 0x4209BE,120,0,0x420920,1, 0x420A33,120,0,0x420920,2, 0x420DB2,120,0,0x420920,3>;
using def_t = unsigned char(unsigned int, unsigned int, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,unsigned int,unsigned int>, 0,1,2>;
META_END

}
