/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

DTOR_META_BEGIN(CWeapon)
static int address;
static int global_address;
static const int id = 0x4C50A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C50A0, 0x4C5140, 0x4C50D0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4C4259,100,2,0,1, 0x4C5207,100,2,0,1, 0x4C42F9,110,2,0,1, 0x4C52A7,110,2,0,1, 0x4C4289,120,2,0,1, 0x4C5237,120,2,0,1>;
using def_t = void(CWeapon *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *>, 0>;
META_END

CTOR_META_BEGIN(CWeapon)
static int address;
static int global_address;
static const int id = 0x4C50B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C50B0, 0x4C5150, 0x4C50E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C425E,100,2,0,1, 0x4C42FE,110,2,0,1, 0x4C428E,120,2,0,1>;
using def_t = CWeapon *(CWeapon *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *>, 0>;
META_END

META_BEGIN(CWeapon::InitialiseWeapons)
static int address;
static int global_address;
static const int id = 0x55C2D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55C2D0, 0x55C400, 0x55C3B0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C1E7,100,0,0x48BED0,1, 0x48C535,100,0,0x48C4B0,1, 0x48C2D7,110,0,0x48BFC0,1, 0x48C635,110,0,0x48C5B0,1, 0x48C267,120,0,0x48BF50,1, 0x48C5C5,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CWeapon::ShutdownWeapons)
static int address;
static int global_address;
static const int id = 0x55C2F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55C2F0, 0x55C420, 0x55C3D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C3CC,100,0,0x48C3A0,1, 0x48C4BC,110,0,0x48C490,1, 0x48C44C,120,0,0x48C420,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CWeapon::UpdateWeapons)
static int address;
static int global_address;
static const int id = 0x55C310;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55C310, 0x55C440, 0x55C3F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C940,100,0,0x48C850,1, 0x48CA40,110,0,0x48C950,1, 0x48C9D0,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CWeapon::Initialise)
static int address;
static int global_address;
static const int id = 0x55C330;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55C330, 0x55C460, 0x55C410>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4CFA0A,100,0,0x4CF9B0,1, 0x4CFB09,100,0,0x4CFAD0,1, 0x4CFB59,100,0,0x4CFB20,1, 0x4CFAAA,110,0,0x4CFA50,1, 0x4CFBA9,110,0,0x4CFB70,1, 0x4CFBF9,110,0,0x4CFBC0,1, 0x4CFA3A,120,0,0x4CF9E0,1, 0x4CFB39,120,0,0x4CFB00,1, 0x4CFB89,120,0,0x4CFB50,1>;
using def_t = void(CWeapon *, eWeaponType, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *,eWeaponType,int>, 0,1,2>;
META_END

META_BEGIN(CWeapon::Fire)
static int address;
static int global_address;
static const int id = 0x55C380;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55C380, 0x55C4B0, 0x55C460>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4E6EBF,100,0,0x4E6BA0,1, 0x4F1DB5,100,0,0x4F1CF0,1, 0x4F1EB5,100,0,0x4F1DF0,1, 0x4E6F6F,110,0,0x4E6C50,1, 0x4F1E65,110,0,0x4F1DA0,1, 0x4F1F65,110,0,0x4F1EA0,1, 0x4E6EFF,120,0,0x4E6BE0,1, 0x4F1DF5,120,0,0x4F1D30,1, 0x4F1EF5,120,0,0x4F1E30,1>;
using def_t = bool(CWeapon *, CEntity *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *,CEntity *,CVector *>, 0,1,2>;
META_END

META_BEGIN(CWeapon::FireFromCar)
static int address;
static int global_address;
static const int id = 0x55C940;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55C940, 0x55CA70, 0x55CA20>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5641BF,100,0,0x564000,1, 0x5642EF,110,0,0x564130,1, 0x56429F,120,0,0x5640E0,1>;
using def_t = bool(CWeapon *, CAutomobile *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *,CAutomobile *,bool>, 0,1,2>;
META_END

META_BEGIN(CWeapon::FireMelee)
static int address;
static int global_address;
static const int id = 0x55CA20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55CA20, 0x55CB50, 0x55CB00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x55C8DB,100,0,0x55C380,1, 0x55CA0B,110,0,0x55C4B0,1, 0x55C9BB,120,0,0x55C460,1>;
using def_t = bool(CWeapon *, CEntity *, CVector &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *,CEntity *,CVector &>, 0,1,2>;
META_END

META_BEGIN(CWeapon::FireInstantHit)
static int address;
static int global_address;
static const int id = 0x55D2E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55D2E0, 0x55D410, 0x55D3C0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x55C4EB,100,0,0x55C380,1, 0x55C538,100,0,0x55C380,2, 0x55C767,100,0,0x55C380,3, 0x55C61B,110,0,0x55C4B0,1, 0x55C668,110,0,0x55C4B0,2, 0x55C897,110,0,0x55C4B0,3, 0x55C5CB,120,0,0x55C460,1, 0x55C618,120,0,0x55C460,2, 0x55C847,120,0,0x55C460,3>;
using def_t = bool(CWeapon *, CEntity *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *,CEntity *,CVector *>, 0,1,2>;
META_END

META_BEGIN(CWeapon::AddGunshell)
static int address;
static int global_address;
static const int id = 0x55F770;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55F770, 0x55F8A0, 0x55F850>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4E71AC,100,0,0x4E6BA0,1, 0x55F704,100,0,0x55D2E0,1, 0x4E725C,110,0,0x4E6C50,1, 0x55F834,110,0,0x55D410,1, 0x4E71EC,120,0,0x4E6BE0,1, 0x55F7E4,120,0,0x55D3C0,1>;
using def_t = void(CWeapon *, CEntity *, CVector const &, CVector2D const &, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *,CEntity *,CVector const &,CVector2D const &,float>, 0,1,2,3,4>;
META_END

META_BEGIN(CWeapon::DoBulletImpact)
static int address;
static int global_address;
static const int id = 0x55F950;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55F950, 0x55FA80, 0x55FA30>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x55F73A,100,0,0x55D2E0,1, 0x562327,100,0,0x562180,1, 0x55F86A,110,0,0x55D410,1, 0x562457,110,0,0x5622B0,1, 0x55F81A,120,0,0x55D3C0,1, 0x562407,120,0,0x562260,1>;
using def_t = void(CWeapon *, CEntity *, CEntity *, CVector *, CVector *, CColPoint *, CVector2D);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *,CEntity *,CEntity *,CVector *,CVector *,CColPoint *,CVector2D>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CWeapon::FireShotgun)
static int address;
static int global_address;
static const int id = 0x560620;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x560620, 0x560750, 0x560700>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x55C4D7,100,0,0x55C380,1, 0x55C607,110,0,0x55C4B0,1, 0x55C5B7,120,0,0x55C460,1>;
using def_t = bool(CWeapon *, CEntity *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *,CEntity *,CVector *>, 0,1,2>;
META_END

META_BEGIN(CWeapon::FireProjectile)
static int address;
static int global_address;
static const int id = 0x561900;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x561900, 0x561A30, 0x5619E0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x55C5C4,100,0,0x55C380,1, 0x55C5E5,100,0,0x55C380,2, 0x55C61C,100,0,0x55C380,3, 0x55C6DE,100,0,0x55C380,4, 0x55C6FE,100,0,0x55C380,5, 0x55C6F4,110,0,0x55C4B0,1, 0x55C715,110,0,0x55C4B0,2, 0x55C74C,110,0,0x55C4B0,3, 0x55C80E,110,0,0x55C4B0,4, 0x55C82E,110,0,0x55C4B0,5, 0x55C6A4,120,0,0x55C460,1, 0x55C6C5,120,0,0x55C460,2, 0x55C6FC,120,0,0x55C460,3, 0x55C7BE,120,0,0x55C460,4, 0x55C7DE,120,0,0x55C460,5>;
using def_t = bool(CWeapon *, CEntity *, CVector *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *,CEntity *,CVector *,float>, 0,1,2,3>;
META_END

META_BEGIN(CWeapon::GenerateFlameThrowerParticles)
static int address;
static int global_address;
static const int id = 0x561C70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x561C70, 0x561DA0, 0x561D50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x561FC2,100,0,0x561E00,1, 0x5620F2,110,0,0x561F30,1, 0x5620A2,120,0,0x561EE0,1>;
using def_t = void(CVector, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,CVector>, 0,1>;
META_END

META_BEGIN(CWeapon::FireAreaEffect)
static int address;
static int global_address;
static const int id = 0x561E00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x561E00, 0x561F30, 0x561EE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x55C70F,100,0,0x55C380,1, 0x55C83F,110,0,0x55C4B0,1, 0x55C7EF,120,0,0x55C460,1>;
using def_t = bool(CWeapon *, CEntity *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *,CEntity *,CVector *>, 0,1,2>;
META_END

META_BEGIN(CWeapon::FireSniper)
static int address;
static int global_address;
static const int id = 0x561FE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x561FE0, 0x562110, 0x5620C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x55C4FE,100,0,0x55C380,1, 0x55C62E,110,0,0x55C4B0,1, 0x55C5DE,120,0,0x55C460,1>;
using def_t = bool(CWeapon *, CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *,CEntity *>, 0,1>;
META_END

META_BEGIN(CWeapon::FireM16_1stPerson)
static int address;
static int global_address;
static const int id = 0x562180;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x562180, 0x5622B0, 0x562260>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x55C528,100,0,0x55C380,1, 0x55C75A,100,0,0x55C380,2, 0x55C658,110,0,0x55C4B0,1, 0x55C88A,110,0,0x55C4B0,2, 0x55C608,120,0,0x55C460,1, 0x55C83A,120,0,0x55C460,2>;
using def_t = bool(CWeapon *, CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *,CEntity *>, 0,1>;
META_END

META_BEGIN(CWeapon::FireInstantHitFromCar)
static int address;
static int global_address;
static const int id = 0x5624D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5624D0, 0x562600, 0x5625B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x55C978,100,0,0x55C940,1, 0x55CAA8,110,0,0x55CA70,1, 0x55CA58,120,0,0x55CA20,1>;
using def_t = bool(CWeapon *, CAutomobile *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *,CAutomobile *,bool>, 0,1,2>;
META_END

META_BEGIN(CWeapon::DoDoomAiming)
static int address;
static int global_address;
static const int id = 0x562EB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x562EB0, 0x562FE0, 0x562F90>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x55DAA4,100,0,0x55D2E0,1, 0x560E20,100,0,0x560620,1, 0x55DBD4,110,0,0x55D410,1, 0x560F50,110,0,0x560750,1, 0x55DB84,120,0,0x55D3C0,1, 0x560F00,120,0,0x560700,1>;
using def_t = void(CEntity *, CVector *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *,CVector *,CVector *>, 0,1,2>;
META_END

META_BEGIN(CWeapon::DoTankDoomAiming)
static int address;
static int global_address;
static const int id = 0x563200;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x563200, 0x563330, 0x5632E0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x53D95E,100,0,0x53D530,1, 0x5644DC,100,0,0x564300,1, 0x5645EC,100,0,0x564300,2, 0x53DB9E,110,0,0x53D770,1, 0x56460C,110,0,0x564430,1, 0x56471C,110,0,0x564430,2, 0x53DB4E,120,0,0x53D720,1, 0x5645BC,120,0,0x5643E0,1, 0x5646CC,120,0,0x5643E0,2>;
using def_t = void(CEntity *, CEntity *, CVector *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *,CEntity *,CVector *,CVector *>, 0,1,2,3>;
META_END

META_BEGIN(CWeapon::DoDriveByAutoAiming)
static int address;
static int global_address;
static const int id = 0x563660;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x563660, 0x563790, 0x563740>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x562972,100,0,0x5624D0,1, 0x562AA2,110,0,0x562600,1, 0x562A52,120,0,0x5625B0,1>;
using def_t = void(CEntity *, CVector *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *,CVector *,CVector *>, 0,1,2>;
META_END

META_BEGIN(CWeapon::Reload)
static int address;
static int global_address;
static const int id = 0x5639D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5639D0, 0x563B00, 0x563AB0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4CF9FA,100,0,0x4CF9B0,1, 0x55C362,100,0,0x55C330,1, 0x563AE6,100,0,0x563A10,1, 0x5641D3,100,0,0x564000,1, 0x4CFA9A,110,0,0x4CFA50,1, 0x55C492,110,0,0x55C460,1, 0x563C16,110,0,0x563B40,1, 0x564303,110,0,0x564130,1, 0x4CFA2A,120,0,0x4CF9E0,1, 0x55C442,120,0,0x55C410,1, 0x563BC6,120,0,0x563AF0,1, 0x5642B3,120,0,0x5640E0,1>;
using def_t = void(CWeapon *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *>, 0>;
META_END

META_BEGIN(CWeapon::Update)
static int address;
static int global_address;
static const int id = 0x563A10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x563A10, 0x563B40, 0x563AF0>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x4C0060,100,0,0x4BFFE0,1, 0x4C14B1,100,0,0x4C1400,1, 0x4C2F8D,100,0,0x4C2F10,1, 0x4F0486,100,0,0x4EFD90,1, 0x4F1DD7,100,0,0x4F1CF0,1, 0x4F1ED7,100,0,0x4F1DF0,1, 0x564038,100,0,0x564000,1, 0x4C0150,110,0,0x4C00D0,1, 0x4C15A1,110,0,0x4C14F0,1, 0x4C302D,110,0,0x4C2FB0,1, 0x4F0536,110,0,0x4EFE40,1, 0x4F1E87,110,0,0x4F1DA0,1, 0x4F1F87,110,0,0x4F1EA0,1, 0x564168,110,0,0x564130,1, 0x4C00E0,120,0,0x4C0060,1, 0x4C1531,120,0,0x4C1480,1, 0x4C2FBD,120,0,0x4C2F40,1, 0x4F04C6,120,0,0x4EFDD0,1, 0x4F1E17,120,0,0x4F1D30,1, 0x4F1F17,120,0,0x4F1E30,1, 0x564118,120,0,0x5640E0,1>;
using def_t = void(CWeapon *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *,int>, 0,1>;
META_END

META_BEGIN(CWeapon::IsTypeMelee)
static int address;
static int global_address;
static const int id = 0x563FB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x563FB0, 0x5640E0, 0x564090>;
// total references count: 10en (16), 11en (16), steam (16)
using refs_t = RefList<0x4C093B,100,0,0x4C07A0,1, 0x4C0F12,100,0,0x4C07A0,2, 0x4C0F34,100,0,0x4C07A0,3, 0x4C3106,100,0,0x4C30A0,1, 0x4D6369,100,0,0x4D5D80,1, 0x4D929C,100,0,0x4D8F30,1, 0x4DB1A4,100,0,0x4D94E0,1, 0x4DB1C6,100,0,0x4D94E0,2, 0x4DB248,100,0,0x4D94E0,3, 0x4DB26A,100,0,0x4D94E0,4, 0x4DDA60,100,0,0x4DD980,1, 0x4DDC14,100,0,0x4DD980,2, 0x4DDF87,100,0,0x4DDEC0,1, 0x4DE05F,100,0,0x4DDEC0,2, 0x4DE0CD,100,0,0x4DDEC0,3, 0x4DE0EF,100,0,0x4DDEC0,4, 0x4C0A2B,110,0,0x4C0890,1, 0x4C1002,110,0,0x4C0890,2, 0x4C1024,110,0,0x4C0890,3, 0x4C31A6,110,0,0x4C3140,1, 0x4D6409,110,0,0x4D5E20,1, 0x4D933C,110,0,0x4D8FD0,1, 0x4DB244,110,0,0x4D9580,1, 0x4DB266,110,0,0x4D9580,2, 0x4DB2E8,110,0,0x4D9580,3, 0x4DB30A,110,0,0x4D9580,4, 0x4DDB10,110,0,0x4DDA30,1, 0x4DDCC4,110,0,0x4DDA30,2, 0x4DE037,110,0,0x4DDF70,1, 0x4DE10F,110,0,0x4DDF70,2, 0x4DE17D,110,0,0x4DDF70,3, 0x4DE19F,110,0,0x4DDF70,4, 0x4C09BB,120,0,0x4C0820,1, 0x4C0F92,120,0,0x4C0820,2, 0x4C0FB4,120,0,0x4C0820,3, 0x4C3136,120,0,0x4C30D0,1, 0x4D6399,120,0,0x4D5DB0,1, 0x4D92CC,120,0,0x4D8F60,1, 0x4DB1D4,120,0,0x4D9510,1, 0x4DB1F6,120,0,0x4D9510,2, 0x4DB278,120,0,0x4D9510,3, 0x4DB29A,120,0,0x4D9510,4, 0x4DDAA0,120,0,0x4DD9C0,1, 0x4DDC54,120,0,0x4DD9C0,2, 0x4DDFC7,120,0,0x4DDF00,1, 0x4DE09F,120,0,0x4DDF00,2, 0x4DE10D,120,0,0x4DDF00,3, 0x4DE12F,120,0,0x4DDF00,4>;
using def_t = bool(CWeapon *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *>, 0>;
META_END

META_BEGIN(CWeapon::IsType2Handed)
static int address;
static int global_address;
static const int id = 0x563FD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x563FD0, 0x564100, 0x5640B0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4C67BA,100,0,0x4C65B0,1, 0x4D0879,100,0,0x4D0690,1, 0x4E69BC,100,0,0x4E6990,1, 0x4F2740,100,0,0x4F2640,1, 0x4C685A,110,0,0x4C6650,1, 0x4D0919,110,0,0x4D0730,1, 0x4E6A6C,110,0,0x4E6A40,1, 0x4F27F0,110,0,0x4F26F0,1, 0x4C67EA,120,0,0x4C65E0,1, 0x4D08A9,120,0,0x4D06C0,1, 0x4E69FC,120,0,0x4E69D0,1, 0x4F2780,120,0,0x4F2680,1>;
using def_t = bool(CWeapon *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *>, 0>;
META_END

META_BEGIN(CWeapon::MakePedsJumpAtShot)
static int address;
static int global_address;
static const int id = 0x564680;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x564680, 0x5647B0, 0x564760>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x55DBE0,100,0,0x55D2E0,1, 0x562ACF,100,0,0x5624D0,1, 0x55DD10,110,0,0x55D410,1, 0x562BFF,110,0,0x562600,1, 0x55DCC0,120,0,0x55D3C0,1, 0x562BAF,120,0,0x5625B0,1>;
using def_t = void(CPhysical *, CVector *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPhysical *,CVector *,CVector *>, 0,1,2>;
META_END

META_BEGIN(CWeapon::HitsGround)
static int address;
static int global_address;
static const int id = 0x564890;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x564890, 0x5649C0, 0x564970>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4E635F,100,0,0x4E6220,1, 0x4E640F,110,0,0x4E62D0,1, 0x4E639F,120,0,0x4E6260,1>;
using def_t = bool(CWeapon *, CEntity *, CVector *, CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *,CEntity *,CVector *,CEntity *>, 0,1,2,3>;
META_END

META_BEGIN(CWeapon::BlowUpExplosiveThings)
static int address;
static int global_address;
static const int id = 0x564A60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x564A60, 0x564B90, 0x564B40>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4B142A,100,0,0x4B1340,1, 0x558C37,100,0,0x558550,1, 0x5605F2,100,0,0x55F950,1, 0x4B151A,110,0,0x4B1430,1, 0x558D67,110,0,0x558680,1, 0x560722,110,0,0x55FA80,1, 0x4B14AA,120,0,0x4B13C0,1, 0x558D17,120,0,0x558630,1, 0x5606D2,120,0,0x55FA30,1>;
using def_t = void(CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *>, 0>;
META_END

META_BEGIN(CWeapon::HasWeaponAmmoToBeUsed)
static int address;
static int global_address;
static const int id = 0x564B80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x564B80, 0x564CB0, 0x564C60>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4F23C8,100,0,0x4F2310,1, 0x4F2466,100,0,0x4F2310,2, 0x4F2478,110,0,0x4F23C0,1, 0x4F2516,110,0,0x4F23C0,2, 0x4F2408,120,0,0x4F2350,1, 0x4F24A6,120,0,0x4F2350,2>;
using def_t = bool(CWeapon *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWeapon *>, 0>;
META_END

META_BEGIN(CWeapon::ProcessLineOfSight)
static int address;
static int global_address;
static const int id = 0x564C00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x564C00, 0x564D30, 0x564CE0>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x55D7C6,100,0,0x55D2E0,1, 0x55D86A,100,0,0x55D2E0,2, 0x55D907,100,0,0x55D2E0,3, 0x55DADE,100,0,0x55D2E0,4, 0x560EB1,100,0,0x560620,1, 0x562289,100,0,0x562180,1, 0x562AB2,100,0,0x5624D0,1, 0x55D8F6,110,0,0x55D410,1, 0x55D99A,110,0,0x55D410,2, 0x55DA37,110,0,0x55D410,3, 0x55DC0E,110,0,0x55D410,4, 0x560FE1,110,0,0x560750,1, 0x5623B9,110,0,0x5622B0,1, 0x562BE2,110,0,0x562600,1, 0x55D8A6,120,0,0x55D3C0,1, 0x55D94A,120,0,0x55D3C0,2, 0x55D9E7,120,0,0x55D3C0,3, 0x55DBBE,120,0,0x55D3C0,4, 0x560F91,120,0,0x560700,1, 0x562369,120,0,0x562260,1, 0x562B92,120,0,0x5625B0,1>;
using def_t = bool(CVector const &, CVector const &, CColPoint &, CEntity **, eWeaponType, CEntity *, bool, bool, bool, bool, bool, bool, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector const &,CVector const &,CColPoint &,CEntity **,eWeaponType,CEntity *,bool,bool,bool,bool,bool,bool,bool>, 0,1,2,3,4,5,6,7,8,9,10,11,12>;
META_END

META_BEGIN(FireOneInstantHitRound)
static int address;
static int global_address;
static const int id = 0x563B00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x563B00, 0x563C30, 0x563BE0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x549569,100,0,0x547CC0,1, 0x5644F0,100,0,0x564300,1, 0x564600,100,0,0x564300,2, 0x549769,110,0,0x547EC0,1, 0x564620,110,0,0x564430,1, 0x564730,110,0,0x564430,2, 0x549719,120,0,0x547E70,1, 0x5645D0,120,0,0x5643E0,1, 0x5646E0,120,0,0x5643E0,2>;
using def_t = void(CVector *, CVector *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *,CVector *,int>, 0,1,2>;
META_END

template<>
struct stack_object<CWeapon> : stack_object_no_default<CWeapon> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CWeapon *>(ctor_gaddr(CWeapon), reinterpret_cast<CWeapon *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CWeapon *>(dtor_gaddr(CWeapon), reinterpret_cast<CWeapon *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CWeapon *operator_new<CWeapon>() {
    void *objData = operator new(sizeof(CWeapon)); 
    CWeapon *obj = reinterpret_cast<CWeapon *>(objData);
    plugin::CallMethodDynGlobal<CWeapon *>(ctor_gaddr(CWeapon), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CWeapon *operator_new_array<CWeapon>(unsigned int objCount) {
    void *objData = operator new(sizeof(CWeapon) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CWeapon *objArray = reinterpret_cast<CWeapon *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CWeapon *>(ctor_gaddr(CWeapon), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CWeapon>(CWeapon *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CWeapon *>(dtor_gaddr(CWeapon), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CWeapon>(CWeapon *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CWeapon *>(dtor_gaddr(CWeapon), &objArray[i]);
    operator delete(objData);
}

}
