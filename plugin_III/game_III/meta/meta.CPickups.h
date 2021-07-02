/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPickups::Init)
static int address;
static int global_address;
static const int id = 0x430220;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x430220, 0x430220, 0x430220>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C01E,100,0,0x48BED0,1, 0x48C5A8,100,0,0x48C4B0,1, 0x48C10E,110,0,0x48BFC0,1, 0x48C6A8,110,0,0x48C5B0,1, 0x48C09E,120,0,0x48BF50,1, 0x48C638,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPickups::Update)
static int address;
static int global_address;
static const int id = 0x4303D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4303D0, 0x4303D0, 0x4303D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C98E,100,0,0x48C850,1, 0x48CA8E,110,0,0x48C950,1, 0x48CA1E,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPickups::GenerateNewOne)
static int address;
static int global_address;
static const int id = 0x4304B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4304B0, 0x4304B0, 0x4304B0>;
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x430682,100,0,0x430660,1, 0x433643,100,0,0x433490,1, 0x44336B,100,0,0x4429C0,1, 0x446C58,100,0,0x4458A0,1, 0x446F88,100,0,0x4458A0,2, 0x447333,100,0,0x4458A0,3, 0x44740C,100,0,0x4458A0,4, 0x448AEF,100,0,0x448240,1, 0x44AFBC,100,0,0x448240,2, 0x4DDE91,100,0,0x4DD980,1, 0x430682,110,0,0x430660,1, 0x433643,110,0,0x433490,1, 0x44336B,110,0,0x4429C0,1, 0x446C58,110,0,0x4458A0,1, 0x446F88,110,0,0x4458A0,2, 0x447333,110,0,0x4458A0,3, 0x44740C,110,0,0x4458A0,4, 0x448AEF,110,0,0x448240,1, 0x44AFBC,110,0,0x448240,2, 0x4DDF41,110,0,0x4DDA30,1, 0x430682,120,0,0x430660,1, 0x433643,120,0,0x433490,1, 0x44336B,120,0,0x4429C0,1, 0x446C58,120,0,0x4458A0,1, 0x446F88,120,0,0x4458A0,2, 0x447333,120,0,0x4458A0,3, 0x44740C,120,0,0x4458A0,4, 0x448AEF,120,0,0x448240,1, 0x44AFBC,120,0,0x448240,2, 0x4DDED1,120,0,0x4DD9C0,1>;
using def_t = int(CVector, unsigned int, unsigned char, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,unsigned int,unsigned char,unsigned int>, 0,1,2,3>;
META_END

META_BEGIN(CPickups::GenerateNewOne_WeaponType)
static int address;
static int global_address;
static const int id = 0x430660;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x430660, 0x430660, 0x430660>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4339B3,100,0,0x433660,1, 0x4339B3,110,0,0x433660,1, 0x4339B3,120,0,0x433660,1>;
using def_t = int(CVector, eWeaponType, unsigned char, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,eWeaponType,unsigned char,unsigned int>, 0,1,2,3>;
META_END

META_BEGIN(CPickups::ModelForWeapon)
static int address;
static int global_address;
static const int id = 0x430690;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x430690, 0x430690, 0x430690>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43066F,100,0,0x430660,1, 0x43066F,110,0,0x430660,1, 0x43066F,120,0,0x430660,1>;
using def_t = int(eWeaponType);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<eWeaponType>, 0>;
META_END

META_BEGIN(CPickups::WeaponForModel)
static int address;
static int global_address;
static const int id = 0x4306F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4306F0, 0x4306F0, 0x4306F0>;
// total references count: 10en (15), 11en (15), steam (15)
using refs_t = RefList<0x430EE2,100,0,0x430860,1, 0x430F0E,100,0,0x430860,2, 0x430F43,100,0,0x430860,3, 0x430F53,100,0,0x430860,4, 0x430F69,100,0,0x430860,5, 0x43100E,100,0,0x430860,6, 0x43103D,100,0,0x430860,7, 0x43104D,100,0,0x430860,8, 0x431077,100,0,0x430860,9, 0x43119D,100,0,0x430860,10, 0x4311CA,100,0,0x430860,11, 0x4311DA,100,0,0x430860,12, 0x431204,100,0,0x430860,13, 0x431515,100,0,0x431510,1, 0x431A67,100,0,0x431520,1, 0x430EE2,110,0,0x430860,1, 0x430F0E,110,0,0x430860,2, 0x430F43,110,0,0x430860,3, 0x430F53,110,0,0x430860,4, 0x430F69,110,0,0x430860,5, 0x43100E,110,0,0x430860,6, 0x43103D,110,0,0x430860,7, 0x43104D,110,0,0x430860,8, 0x431077,110,0,0x430860,9, 0x43119D,110,0,0x430860,10, 0x4311CA,110,0,0x430860,11, 0x4311DA,110,0,0x430860,12, 0x431204,110,0,0x430860,13, 0x431515,110,0,0x431510,1, 0x431A67,110,0,0x431520,1, 0x430EE2,120,0,0x430860,1, 0x430F0E,120,0,0x430860,2, 0x430F43,120,0,0x430860,3, 0x430F53,120,0,0x430860,4, 0x430F69,120,0,0x430860,5, 0x43100E,120,0,0x430860,6, 0x43103D,120,0,0x430860,7, 0x43104D,120,0,0x430860,8, 0x431077,120,0,0x430860,9, 0x43119D,120,0,0x430860,10, 0x4311CA,120,0,0x430860,11, 0x4311DA,120,0,0x430860,12, 0x431204,120,0,0x430860,13, 0x431515,120,0,0x431510,1, 0x431A67,120,0,0x431520,1>;
using def_t = eWeaponType(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPickups::IsPickUpPickedUp)
static int address;
static int global_address;
static const int id = 0x430770;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x430770, 0x430770, 0x430770>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4433A6,100,0,0x4429C0,1, 0x4433A6,110,0,0x4429C0,1, 0x4433A6,120,0,0x4429C0,1>;
using def_t = bool(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPickups::RemovePickUp)
static int address;
static int global_address;
static const int id = 0x4307A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4307A0, 0x4307A0, 0x4307A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4433DF,100,0,0x4429C0,1, 0x4433DF,110,0,0x4429C0,1, 0x4433DF,120,0,0x4429C0,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPickups::RemoveAllFloatingPickUps)
static int address;
static int global_address;
static const int id = 0x430800;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x430800, 0x430800, 0x430800>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43D615,100,0,0x43D530,1, 0x43D615,110,0,0x43D530,1, 0x43D615,120,0,0x43D530,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPickups::FindColourIndexForWeaponMI)
static int address;
static int global_address;
static const int id = 0x431510;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x431510, 0x431510, 0x431510>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x431663,100,0,0x431520,1, 0x431663,110,0,0x431520,1, 0x431663,120,0,0x431520,1>;
using def_t = int(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPickups::DoPickUpEffects)
static int address;
static int global_address;
static const int id = 0x431520;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x431520, 0x431520, 0x431520>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x47467D,100,0,0x474350,1, 0x47467D,110,0,0x474350,1, 0x47467D,120,0,0x474350,1>;
using def_t = void(CObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CObject *>, 0>;
META_END

META_BEGIN(CPickups::DoCollectableEffects)
static int address;
static int global_address;
static const int id = 0x431C30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x431C30, 0x431C30, 0x431C30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x47456F,100,0,0x474350,1, 0x47456F,110,0,0x474350,1, 0x47456F,120,0,0x474350,1>;
using def_t = void(CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *>, 0>;
META_END

META_BEGIN(CPickups::DoMoneyEffects)
static int address;
static int global_address;
static const int id = 0x431F40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x431F40, 0x431F40, 0x431F40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x47459C,100,0,0x474350,1, 0x47459C,110,0,0x474350,1, 0x47459C,120,0,0x474350,1>;
using def_t = void(CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *>, 0>;
META_END

META_BEGIN(CPickups::DoMineEffects)
static int address;
static int global_address;
static const int id = 0x4321C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4321C0, 0x4321C0, 0x4321C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4745E6,100,0,0x474350,1, 0x4745E6,110,0,0x474350,1, 0x4745E6,120,0,0x474350,1>;
using def_t = void(CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *>, 0>;
META_END

META_BEGIN(CPickups::RenderPickUpText)
static int address;
static int global_address;
static const int id = 0x432440;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x432440, 0x432440, 0x432440>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E12B,100,0,0x48E0E0,1, 0x48E1EB,110,0,0x48E1A0,1, 0x48E17B,120,0,0x48E130,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPickups::GivePlayerGoodiesWithPickUpMI)
static int address;
static int global_address;
static const int id = 0x4339F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4339F0, 0x4339F0, 0x4339F0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x430F2E,100,0,0x430860,1, 0x430FF7,100,0,0x430860,2, 0x431186,100,0,0x430860,3, 0x430F2E,110,0,0x430860,1, 0x430FF7,110,0,0x430860,2, 0x431186,110,0,0x430860,3, 0x430F2E,120,0,0x430860,1, 0x430FF7,120,0,0x430860,2, 0x431186,120,0,0x430860,3>;
using def_t = bool(unsigned short, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned short,int>, 0,1>;
META_END

META_BEGIN(CPickups::PassTime)
static int address;
static int global_address;
static const int id = 0x433B60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x433B60, 0x433B60, 0x433B60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x421C55,100,0,0x421C00,1, 0x421C55,110,0,0x421C00,1, 0x421C55,120,0,0x421C00,1>;
using def_t = void(unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(CPickups::AddToCollectedPickupsArray)
static int address;
static int global_address;
static const int id = 0x433D60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x433D60, 0x433D60, 0x433D60>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x430439,100,0,0x4303D0,1, 0x430489,100,0,0x4303D0,2, 0x430439,110,0,0x4303D0,1, 0x430489,110,0,0x4303D0,2, 0x430439,120,0,0x4303D0,1, 0x430489,120,0,0x4303D0,2>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPickups::GetNewUniquePickupIndex)
static int address;
static int global_address;
static const int id = 0x433DB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x433DB0, 0x433DB0, 0x433DB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x430652,100,0,0x4304B0,1, 0x430652,110,0,0x4304B0,1, 0x430652,120,0,0x4304B0,1>;
using def_t = int(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPickups::GetActualPickupIndex)
static int address;
static int global_address;
static const int id = 0x433DF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x433DF0, 0x433DF0, 0x433DF0>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x4307A7,100,0,0x4307A0,1, 0x443329,100,0,0x4429C0,1, 0x446C05,100,0,0x4458A0,1, 0x448AAB,100,0,0x448240,1, 0x44F586,100,0,0x44CB80,1, 0x44F619,100,0,0x44CB80,2, 0x44F6AF,100,0,0x44CB80,3, 0x4307A7,110,0,0x4307A0,1, 0x443329,110,0,0x4429C0,1, 0x446C05,110,0,0x4458A0,1, 0x448AAB,110,0,0x448240,1, 0x44F586,110,0,0x44CB80,1, 0x44F619,110,0,0x44CB80,2, 0x44F6AF,110,0,0x44CB80,3, 0x4307A7,120,0,0x4307A0,1, 0x443329,120,0,0x4429C0,1, 0x446C05,120,0,0x4458A0,1, 0x448AAB,120,0,0x448240,1, 0x44F586,120,0,0x44CB80,1, 0x44F619,120,0,0x44CB80,2, 0x44F6AF,120,0,0x44CB80,3>;
using def_t = int(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPickups::Save)
static int address;
static int global_address;
static const int id = 0x433E40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x433E40, 0x433E40, 0x433E40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x590082,100,0,0x58F8D0,1, 0x590372,110,0,0x58FBC0,1, 0x590262,120,0,0x58FAB0,1>;
using def_t = void(unsigned char *, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int *>, 0,1>;
META_END

META_BEGIN(CPickups::Load)
static int address;
static int global_address;
static const int id = 0x433F60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x433F60, 0x433F60, 0x433F60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5911B6,100,0,0x590A00,1, 0x591476,110,0,0x590CC0,1, 0x591366,120,0,0x590BB0,1>;
using def_t = void(unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int>, 0,1>;
META_END

}
