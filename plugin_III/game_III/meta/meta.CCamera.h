/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN_OVERLOADED(CCamera::IsSphereVisible, bool (CCamera::*)(CVector const &, float, CMatrix const *))
static int address;
static int global_address;
static const int id = 0x42C760;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42C760, 0x42C760, 0x42C760>;
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x42C5BB,100,0,0x42C1E0,1, 0x474D01,100,0,0x474CC0,1, 0x4E54BF,100,0,0x4E52A0,1, 0x4E578F,100,0,0x4E5570,1, 0x4F50E5,100,0,0x4F4A00,1, 0x555D19,100,0,0x5554E0,1, 0x555F74,100,0,0x5554E0,2, 0x55646D,100,0,0x5554E0,3, 0x5565E5,100,0,0x5554E0,4, 0x55671D,100,0,0x5554E0,5, 0x42C5BB,110,0,0x42C1E0,1, 0x474D01,110,0,0x474CC0,1, 0x4E556F,110,0,0x4E5350,1, 0x4E583F,110,0,0x4E5620,1, 0x4F5195,110,0,0x4F4AB0,1, 0x555E49,110,0,0x555610,1, 0x5560A4,110,0,0x555610,2, 0x55659D,110,0,0x555610,3, 0x556715,110,0,0x555610,4, 0x55684D,110,0,0x555610,5, 0x42C5BB,120,0,0x42C1E0,1, 0x474D01,120,0,0x474CC0,1, 0x4E54FF,120,0,0x4E52E0,1, 0x4E57CF,120,0,0x4E55B0,1, 0x4F5125,120,0,0x4F4A40,1, 0x555DF9,120,0,0x5555C0,1, 0x556054,120,0,0x5555C0,2, 0x55654D,120,0,0x5555C0,3, 0x5566C5,120,0,0x5555C0,4, 0x5567FD,120,0,0x5555C0,5>;
using def_t = bool(CCamera *, CVector const &, float, CMatrix const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,CVector const &,float,CMatrix const *>, 0,1,2,3>;
META_END

META_BEGIN(CCamera::GetCameraMatrix)
static int address;
static int global_address;
static const int id = 0x42C8B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42C8B0, 0x42C8B0, 0x42C8B0>;
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x42C597,100,0,0x42C1E0,1, 0x474CDF,100,0,0x474CC0,1, 0x4E549B,100,0,0x4E52A0,1, 0x4E576B,100,0,0x4E5570,1, 0x4F50BB,100,0,0x4F4A00,1, 0x555CEC,100,0,0x5554E0,1, 0x555F47,100,0,0x5554E0,2, 0x556440,100,0,0x5554E0,3, 0x5565B8,100,0,0x5554E0,4, 0x5566F0,100,0,0x5554E0,5, 0x42C597,110,0,0x42C1E0,1, 0x474CDF,110,0,0x474CC0,1, 0x4E554B,110,0,0x4E5350,1, 0x4E581B,110,0,0x4E5620,1, 0x4F516B,110,0,0x4F4AB0,1, 0x555E1C,110,0,0x555610,1, 0x556077,110,0,0x555610,2, 0x556570,110,0,0x555610,3, 0x5566E8,110,0,0x555610,4, 0x556820,110,0,0x555610,5, 0x42C597,120,0,0x42C1E0,1, 0x474CDF,120,0,0x474CC0,1, 0x4E54DB,120,0,0x4E52E0,1, 0x4E57AB,120,0,0x4E55B0,1, 0x4F50FB,120,0,0x4F4A40,1, 0x555DCC,120,0,0x5555C0,1, 0x556027,120,0,0x5555C0,2, 0x556520,120,0,0x5555C0,3, 0x556698,120,0,0x5555C0,4, 0x5567D0,120,0,0x5555C0,5>;
using def_t = CMatrix *(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN_OVERLOADED(CCamera::IsSphereVisible, bool (CCamera::*)(CVector const &, float))
static int address;
static int global_address;
static const int id = 0x43D3B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x43D3B0, 0x43D3B0, 0x43D3B0>;
// total references count: 10en (8), 11en (8), steam (8)
using refs_t = RefList<0x43D2F4,100,0,0x43AEA0,1, 0x445E2D,100,0,0x4458A0,1, 0x445E9C,100,0,0x4458A0,2, 0x445F0B,100,0,0x4458A0,3, 0x4FFD4B,100,0,0x4FFCE0,1, 0x5001E0,100,0,0x5001D0,1, 0x50060C,100,0,0x5005F0,1, 0x513D1C,100,0,0x513CB0,1, 0x43D2F4,110,0,0x43AEA0,1, 0x445E2D,110,0,0x4458A0,1, 0x445E9C,110,0,0x4458A0,2, 0x445F0B,110,0,0x4458A0,3, 0x4FFE2B,110,0,0x4FFDC0,1, 0x5002C0,110,0,0x5002B0,1, 0x5006EC,110,0,0x5006D0,1, 0x513F2C,110,0,0x513EC0,1, 0x43D2F4,120,0,0x43AEA0,1, 0x445E2D,120,0,0x4458A0,1, 0x445E9C,120,0,0x4458A0,2, 0x445F0B,120,0,0x4458A0,3, 0x4FFDBB,120,0,0x4FFD50,1, 0x500250,120,0,0x500240,1, 0x50067C,120,0,0x500660,1, 0x513EBC,120,0,0x513E50,1>;
using def_t = bool(CCamera *, CVector const &, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,CVector const &,float>, 0,1,2>;
META_END

META_BEGIN(CCamera::CamControl)
static int address;
static int global_address;
static const int id = 0x468250;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x468250, 0x468260, 0x468260>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x46D500,100,0,0x46D3F0,1, 0x46D4E0,110,0,0x46D3D0,1, 0x46D4E0,120,0,0x46D3D0,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::CamShake)
static int address;
static int global_address;
static const int id = 0x46B200;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46B200, 0x46B1D0, 0x46B1D0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x43EDFE,100,0,0x43ED30,1, 0x53BDA2,100,0,0x53BC60,1, 0x541D2E,100,0,0x541CB0,1, 0x549CE0,100,0,0x5499F0,1, 0x54A2ED,100,0,0x5499F0,2, 0x559FEF,100,0,0x5591C0,1, 0x43EDFE,110,0,0x43ED30,1, 0x53BFE2,110,0,0x53BEA0,1, 0x541F6E,110,0,0x541EF0,1, 0x549EE0,110,0,0x549BF0,1, 0x54A4ED,110,0,0x549BF0,2, 0x55A11F,110,0,0x5592F0,1, 0x43EDFE,120,0,0x43ED30,1, 0x53BF92,120,0,0x53BE50,1, 0x541F1E,120,0,0x541EA0,1, 0x549E90,120,0,0x549BA0,1, 0x54A49D,120,0,0x549BA0,2, 0x55A0CF,120,0,0x5592A0,1>;
using def_t = void(CCamera *, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,float,float,float,float>, 0,1,2,3,4>;
META_END

META_BEGIN(CCamera::ClearPlayerWeaponMode)
static int address;
static int global_address;
static const int id = 0x46B350;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46B350, 0x46B320, 0x46B320>;
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x46993C,100,0,0x468250,1, 0x46BB3E,100,0,0x46BAD0,1, 0x4D4267,100,0,0x4D3F90,1, 0x4F1D42,100,0,0x4F1CF0,1, 0x4F1E42,100,0,0x4F1DF0,1, 0x4F1F2A,100,0,0x4F1EF0,1, 0x4F2576,100,0,0x4F2560,1, 0x4F262E,100,0,0x4F2560,2, 0x4F28BB,100,0,0x4F28A0,1, 0x4F36EE,100,0,0x4F36E0,1, 0x46994C,110,0,0x468260,1, 0x46BB2A,110,0,0x46BAA0,1, 0x4D4307,110,0,0x4D4030,1, 0x4F1DF2,110,0,0x4F1DA0,1, 0x4F1EF2,110,0,0x4F1EA0,1, 0x4F1FDA,110,0,0x4F1FA0,1, 0x4F2626,110,0,0x4F2610,1, 0x4F26DE,110,0,0x4F2610,2, 0x4F296B,110,0,0x4F2950,1, 0x4F379E,110,0,0x4F3790,1, 0x46994C,120,0,0x468260,1, 0x46BB2A,120,0,0x46BAA0,1, 0x4D4297,120,0,0x4D3FC0,1, 0x4F1D82,120,0,0x4F1D30,1, 0x4F1E82,120,0,0x4F1E30,1, 0x4F1F6A,120,0,0x4F1F30,1, 0x4F25B6,120,0,0x4F25A0,1, 0x4F266E,120,0,0x4F25A0,2, 0x4F28FB,120,0,0x4F28E0,1, 0x4F372E,120,0,0x4F3720,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::DontProcessObbeCinemaCamera)
static int address;
static int global_address;
static const int id = 0x46B380;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46B380, 0x46B350, 0x46B350>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x46A37D,100,0,0x468250,1, 0x46A38D,110,0,0x468260,1, 0x46A38D,120,0,0x468260,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::Fade)
static int address;
static int global_address;
static const int id = 0x46B3A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46B3A0, 0x46B370, 0x46B370>;
// total references count: 10en (13), 11en (13), steam (13)
using refs_t = RefList<0x4214C1,100,0,0x421400,1, 0x4216A1,100,0,0x421400,2, 0x4218BF,100,0,0x421400,3, 0x421A10,100,0,0x421400,4, 0x43FBE9,100,0,0x43ED30,1, 0x48D18A,100,0,0x48D120,1, 0x48D1C2,100,0,0x48D120,2, 0x4A0633,100,0,0x49FD30,1, 0x4A0674,100,0,0x49FD30,2, 0x54C70C,100,0,0x54C1D0,1, 0x54C728,100,0,0x54C1D0,2, 0x54CC50,100,0,0x54C1D0,3, 0x54CC6C,100,0,0x54C1D0,4, 0x4214C1,110,0,0x421400,1, 0x4216A1,110,0,0x421400,2, 0x4218BF,110,0,0x421400,3, 0x421A10,110,0,0x421400,4, 0x43FBE9,110,0,0x43ED30,1, 0x48D28A,110,0,0x48D220,1, 0x48D2C2,110,0,0x48D220,2, 0x4A0723,110,0,0x49FE20,1, 0x4A0764,110,0,0x49FE20,2, 0x54C88C,110,0,0x54C350,1, 0x54C8A8,110,0,0x54C350,2, 0x54CDD0,110,0,0x54C350,3, 0x54CDEC,110,0,0x54C350,4, 0x4214C1,120,0,0x421400,1, 0x4216A1,120,0,0x421400,2, 0x4218BF,120,0,0x421400,3, 0x421A10,120,0,0x421400,4, 0x43FBE9,120,0,0x43ED30,1, 0x48D21A,120,0,0x48D1B0,1, 0x48D252,120,0,0x48D1B0,2, 0x4A06B3,120,0,0x49FDB0,1, 0x4A06F4,120,0,0x49FDB0,2, 0x54C83C,120,0,0x54C300,1, 0x54C858,120,0,0x54C300,2, 0x54CD80,120,0,0x54C300,3, 0x54CD9C,120,0,0x54C300,4>;
using def_t = void(CCamera *, float, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,float,short>, 0,1,2>;
META_END

META_BEGIN(CCamera::DrawBordersForWideScreen)
static int address;
static int global_address;
static const int id = 0x46B430;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46B430, 0x46B400, 0x46B400>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48E13E,100,0,0x48E0E0,1, 0x4FE5D0,100,0,0x4FADF0,1, 0x48E1FE,110,0,0x48E1A0,1, 0x4FE6B0,110,0,0x4FAED0,1, 0x48E18E,120,0,0x48E130,1, 0x4FE640,120,0,0x4FAE60,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::FinishCutscene)
static int address;
static int global_address;
static const int id = 0x46B560;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46B560, 0x46B530, 0x46B530>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x40516F,100,0,0x405140,1, 0x40516F,110,0,0x405140,1, 0x40516F,120,0,0x405140,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::Find3rdPersonCamTargetVector)
static int address;
static int global_address;
static const int id = 0x46B580;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46B580, 0x46B550, 0x46B550>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x55D8C9,100,0,0x55D2E0,1, 0x560C56,100,0,0x560620,1, 0x561E8E,100,0,0x561E00,1, 0x55D9F9,110,0,0x55D410,1, 0x560D86,110,0,0x560750,1, 0x561FBE,110,0,0x561F30,1, 0x55D9A9,120,0,0x55D3C0,1, 0x560D36,120,0,0x560700,1, 0x561F6E,120,0,0x561EE0,1>;
using def_t = void(CCamera *, float, CVector, CVector &, CVector &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,float,CVector,CVector &,CVector &>, 0,1,2,3,4>;
META_END

META_BEGIN(CCamera::Find3rdPersonQuickAimPitch)
static int address;
static int global_address;
static const int id = 0x46B850;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46B850, 0x46B820, 0x46B820>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4E6570,100,0,0x4E6220,1, 0x4E6620,110,0,0x4E62D0,1, 0x4E65B0,120,0,0x4E6260,1>;
using def_t = float(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetCutSceneFinishTime)
static int address;
static int global_address;
static const int id = 0x46B920;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46B920, 0x46B8F0, 0x46B8F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x405148,100,0,0x405140,1, 0x405148,110,0,0x405140,1, 0x405148,120,0,0x405140,1>;
using def_t = unsigned int(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetFading)
static int address;
static int global_address;
static const int id = 0x46B970;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46B970, 0x46B940, 0x46B940>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x43FC01,100,0,0x43ED30,1, 0x460134,100,0,0x45FF70,1, 0x43FC01,110,0,0x43ED30,1, 0x460134,110,0,0x45FF70,1, 0x43FC01,120,0,0x43ED30,1, 0x460134,120,0,0x45FF70,1>;
using def_t = bool(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetFadingDirection)
static int address;
static int global_address;
static const int id = 0x46B980;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46B980, 0x46B950, 0x46B950>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x460142,100,0,0x45FF70,1, 0x460D05,100,0,0x45FF70,2, 0x460142,110,0,0x45FF70,1, 0x460D05,110,0,0x45FF70,2, 0x460142,120,0,0x45FF70,1, 0x460D05,120,0,0x45FF70,2>;
using def_t = int(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::Get_Just_Switched_Status)
static int address;
static int global_address;
static const int id = 0x46B9B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46B9B0, 0x46B980, 0x46B980>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57AE10,100,0,0x57AE00,1, 0x57B160,110,0,0x57B150,1, 0x57B060,120,0,0x57B050,1>;
using def_t = bool(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetScreenFadeStatus)
static int address;
static int global_address;
static const int id = 0x46B9C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46B9C0, 0x46B990, 0x46B990>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x404ACE,100,0,0x4048E0,1, 0x48511E,100,0,0x485100,1, 0x48E52B,100,0,0x48E480,1, 0x404ACE,110,0,0x4048E0,1, 0x4851EE,110,0,0x4851D0,1, 0x48E5EB,110,0,0x48E540,1, 0x404ACE,120,0,0x4048E0,1, 0x4851EE,120,0,0x4851D0,1, 0x48E57B,120,0,0x48E4D0,1>;
using def_t = int(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetGameCamPosition)
static int address;
static int global_address;
static const int id = 0x46BA10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46BA10, 0x46B9E0, 0x46B9E0>;
// total references count: 10en (14), 11en (14), steam (14)
using refs_t = RefList<0x4574EB,100,0,0x4574C0,1, 0x4575AE,100,0,0x4574C0,2, 0x46743D,100,0,0x467400,1, 0x4675B7,100,0,0x467400,2, 0x4676E0,100,0,0x467400,3, 0x4C1ABF,100,0,0x4C1400,1, 0x524FAF,100,0,0x524F80,1, 0x52502A,100,0,0x524F80,2, 0x543AFF,100,0,0x543AC0,1, 0x543B30,100,0,0x543AC0,2, 0x543B55,100,0,0x543AC0,3, 0x543B93,100,0,0x543AC0,4, 0x543BC6,100,0,0x543AC0,5, 0x543BF3,100,0,0x543AC0,6, 0x4574EB,110,0,0x4574C0,1, 0x4575AE,110,0,0x4574C0,2, 0x46744D,110,0,0x467410,1, 0x4675C7,110,0,0x467410,2, 0x4676F0,110,0,0x467410,3, 0x4C1B61,110,0,0x4C14F0,1, 0x5251EF,110,0,0x5251C0,1, 0x52526A,110,0,0x5251C0,2, 0x543D3F,110,0,0x543D00,1, 0x543D70,110,0,0x543D00,2, 0x543D95,110,0,0x543D00,3, 0x543DD3,110,0,0x543D00,4, 0x543E06,110,0,0x543D00,5, 0x543E33,110,0,0x543D00,6, 0x4574EB,120,0,0x4574C0,1, 0x4575AE,120,0,0x4574C0,2, 0x46744D,120,0,0x467410,1, 0x4675C7,120,0,0x467410,2, 0x4676F0,120,0,0x467410,3, 0x4C1AF1,120,0,0x4C1480,1, 0x52517F,120,0,0x525150,1, 0x5251FA,120,0,0x525150,2, 0x543CEF,120,0,0x543CB0,1, 0x543D20,120,0,0x543CB0,2, 0x543D45,120,0,0x543CB0,3, 0x543D83,120,0,0x543CB0,4, 0x543DB6,120,0,0x543CB0,5, 0x543DE3,120,0,0x543CB0,6>;
using def_t = CVector *(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetLookingLRBFirstPerson)
static int address;
static int global_address;
static const int id = 0x46BA20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46BA20, 0x46B9F0, 0x46B9F0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x5231DC,100,0,0x5231B0,1, 0x56284D,100,0,0x5624D0,1, 0x56299C,100,0,0x5624D0,2, 0x52341C,110,0,0x5233F0,1, 0x56297D,110,0,0x562600,1, 0x562ACC,110,0,0x562600,2, 0x5233AC,120,0,0x523380,1, 0x56292D,120,0,0x5625B0,1, 0x562A7C,120,0,0x5625B0,2>;
using def_t = bool(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetLookDirection)
static int address;
static int global_address;
static const int id = 0x46BA50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46BA50, 0x46BA20, 0x46BA20>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x41853A,100,0,0x418430,1, 0x4A5118,100,0,0x4A50D0,1, 0x4A53C7,100,0,0x4A5300,1, 0x4F8F4D,100,0,0x4F8EC0,1, 0x41853A,110,0,0x418430,1, 0x4A5208,110,0,0x4A51C0,1, 0x4A54B7,110,0,0x4A53F0,1, 0x4F902D,110,0,0x4F8FA0,1, 0x41853A,120,0,0x418430,1, 0x4A5198,120,0,0x4A5150,1, 0x4A5447,120,0,0x4A5380,1, 0x4F8FBD,120,0,0x4F8F30,1>;
using def_t = int(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetLookingForwardFirstPerson)
static int address;
static int global_address;
static const int id = 0x46BA90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46BA90, 0x46BA60, 0x46BA60>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x534416,100,0,0x531470,1, 0x535467,100,0,0x535450,1, 0x534656,110,0,0x5316B0,1, 0x5356A7,110,0,0x535690,1, 0x5345E6,120,0,0x531640,1, 0x535637,120,0,0x535620,1>;
using def_t = bool(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetPositionAlongSpline)
static int address;
static int global_address;
static const int id = 0x46BAC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46BAC0, 0x46BA90, 0x46BA90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4051F8,100,0,0x4051F0,1, 0x4051F8,110,0,0x4051F0,1, 0x4051F8,120,0,0x4051F0,1>;
using def_t = float(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::Init)
static int address;
static int global_address;
static const int id = 0x46BAD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46BAD0, 0x46BAA0, 0x46BAA0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x47317B,100,0,0x472F40,1, 0x48BF9B,100,0,0x48BED0,1, 0x48C4BC,100,0,0x48C4B0,1, 0x48C7A0,100,0,0x48C740,1, 0x473177,110,0,0x472F20,1, 0x48C08B,110,0,0x48BFC0,1, 0x48C5BC,110,0,0x48C5B0,1, 0x48C8A0,110,0,0x48C840,1, 0x473177,120,0,0x472F20,1, 0x48C01B,120,0,0x48BF50,1, 0x48C54C,120,0,0x48C540,1, 0x48C830,120,0,0x48C7D0,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::InitialiseCameraForDebugMode)
static int address;
static int global_address;
static const int id = 0x46BEB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46BEB0, 0x46BE90, 0x46BE90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x46D56B,100,0,0x46D3F0,1, 0x46D54B,110,0,0x46D3D0,1, 0x46D54B,120,0,0x46D3D0,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::IsItTimeForNewcam)
static int address;
static int global_address;
static const int id = 0x46BF10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46BF10, 0x46BEF0, 0x46BEF0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x46F460,100,0,0x46F3E0,1, 0x46F59B,100,0,0x46F520,1, 0x46F440,110,0,0x46F3C0,1, 0x46F57B,110,0,0x46F500,1, 0x46F440,120,0,0x46F3C0,1, 0x46F57B,120,0,0x46F500,1>;
using def_t = bool(CCamera *, int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,int,int>, 0,1,2>;
META_END

META_BEGIN(CCamera::LoadTrainCamNodes)
static int address;
static int global_address;
static const int id = 0x46C9E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46C9E0, 0x46C9C0, 0x46C9C0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x46F64F,100,0,0x46F600,1, 0x46F691,100,0,0x46F600,2, 0x46F62F,110,0,0x46F5E0,1, 0x46F671,110,0,0x46F5E0,2, 0x46F62F,120,0,0x46F5E0,1, 0x46F671,120,0,0x46F5E0,2>;
using def_t = void(CCamera *, char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,char const *>, 0,1>;
META_END

META_BEGIN(CCamera::LoadPathSplines)
static int address;
static int global_address;
static const int id = 0x46D1D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46D1D0, 0x46D1B0, 0x46D1B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x404793,100,0,0x404650,1, 0x404793,110,0,0x404650,1, 0x404793,120,0,0x404650,1>;
using def_t = void(CCamera *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,int>, 0,1>;
META_END

META_BEGIN(CCamera::Process)
static int address;
static int global_address;
static const int id = 0x46D3F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46D3F0, 0x46D3D0, 0x46D3D0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x48C33E,100,0,0x48BED0,1, 0x48C5E8,100,0,0x48C4B0,1, 0x48C9B5,100,0,0x48C850,1, 0x4A067E,100,0,0x49FD30,1, 0x48C42E,110,0,0x48BFC0,1, 0x48C6E8,110,0,0x48C5B0,1, 0x48CAB5,110,0,0x48C950,1, 0x4A076E,110,0,0x49FE20,1, 0x48C3BE,120,0,0x48BF50,1, 0x48C678,120,0,0x48C540,1, 0x48CA45,120,0,0x48C8E0,1, 0x4A06FE,120,0,0x49FDB0,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::CalculateDerivedValues)
static int address;
static int global_address;
static const int id = 0x46EEA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46EEA0, 0x46EE80, 0x46EE80>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x46E922,100,0,0x46D3F0,1, 0x595EBE,100,0,0x595C40,1, 0x597C8C,100,0,0x5976C0,1, 0x46E902,110,0,0x46D3D0,1, 0x59616E,110,0,0x595EF0,1, 0x597EFC,110,0,0x597930,1, 0x46E902,120,0,0x46D3D0,1, 0x59605E,120,0,0x595DE0,1, 0x597DEC,120,0,0x597820,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::ProcessFade)
static int address;
static int global_address;
static const int id = 0x46F080;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46F080, 0x46F060, 0x46F060>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x46D510,100,0,0x46D3F0,1, 0x48D194,100,0,0x48D120,1, 0x48D1CC,100,0,0x48D120,2, 0x54C716,100,0,0x54C1D0,1, 0x54CC5A,100,0,0x54C1D0,2, 0x46D4F0,110,0,0x46D3D0,1, 0x48D294,110,0,0x48D220,1, 0x48D2CC,110,0,0x48D220,2, 0x54C896,110,0,0x54C350,1, 0x54CDDA,110,0,0x54C350,2, 0x46D4F0,120,0,0x46D3D0,1, 0x48D224,120,0,0x48D1B0,1, 0x48D25C,120,0,0x48D1B0,2, 0x54C846,120,0,0x54C300,1, 0x54CD8A,120,0,0x54C300,2>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::ProcessMusicFade)
static int address;
static int global_address;
static const int id = 0x46F1E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46F1E0, 0x46F1C0, 0x46F1C0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x46D520,100,0,0x46D3F0,1, 0x48D19E,100,0,0x48D120,1, 0x46D500,110,0,0x46D3D0,1, 0x48D29E,110,0,0x48D220,1, 0x46D500,120,0,0x46D3D0,1, 0x48D22E,120,0,0x48D1B0,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::ProcessObbeCinemaCameraCar)
static int address;
static int global_address;
static const int id = 0x46F3E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46F3E0, 0x46F3C0, 0x46F3C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x46A360,100,0,0x468250,1, 0x46A370,110,0,0x468260,1, 0x46A370,120,0,0x468260,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::ProcessObbeCinemaCameraPed)
static int address;
static int global_address;
static const int id = 0x46F520;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46F520, 0x46F500, 0x46F500>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x46A343,100,0,0x468250,1, 0x46A353,110,0,0x468260,1, 0x46A353,120,0,0x468260,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::Process_Train_Camera_Control)
static int address;
static int global_address;
static const int id = 0x46F600;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46F600, 0x46F5E0, 0x46F5E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4683FB,100,0,0x468250,1, 0x46840B,110,0,0x468260,1, 0x46840B,120,0,0x468260,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::ProcessWideScreenOn)
static int address;
static int global_address;
static const int id = 0x46F8E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46F8E0, 0x46F8C0, 0x46F8C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x46D52D,100,0,0x46D3F0,1, 0x46D50D,110,0,0x46D3D0,1, 0x46D50D,120,0,0x46D3D0,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::RenderMotionBlur)
static int address;
static int global_address;
static const int id = 0x46F940;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46F940, 0x46F920, 0x46F920>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E63D,100,0,0x48E480,1, 0x48E6FD,110,0,0x48E540,1, 0x48E68D,120,0,0x48E4D0,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::Restore)
static int address;
static int global_address;
static const int id = 0x46F990;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46F990, 0x46F970, 0x46F970>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x437C47,100,0,0x437C10,1, 0x43F60D,100,0,0x43ED30,1, 0x4683B7,100,0,0x468250,1, 0x46AE93,100,0,0x468250,2, 0x437C47,110,0,0x437C10,1, 0x43F60D,110,0,0x43ED30,1, 0x4683C7,110,0,0x468260,1, 0x46AEA3,110,0,0x468260,2, 0x437C47,120,0,0x437C10,1, 0x43F60D,120,0,0x43ED30,1, 0x4683C7,120,0,0x468260,1, 0x46AEA3,120,0,0x468260,2>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::RestoreWithJumpCut)
static int address;
static int global_address;
static const int id = 0x46FAE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FAE0, 0x46FAC0, 0x46FAC0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x404988,100,0,0x4048E0,1, 0x446EB2,100,0,0x4458A0,1, 0x4A0652,100,0,0x49FD30,1, 0x404988,110,0,0x4048E0,1, 0x446EB2,110,0,0x4458A0,1, 0x4A0742,110,0,0x49FE20,1, 0x404988,120,0,0x4048E0,1, 0x446EB2,120,0,0x4458A0,1, 0x4A06D2,120,0,0x49FDB0,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::SetCamCutSceneOffSet)
static int address;
static int global_address;
static const int id = 0x46FC30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FC30, 0x46FC10, 0x46FC10>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x404DD2,100,0,0x404DC0,1, 0x404DD2,110,0,0x404DC0,1, 0x404DD2,120,0,0x404DC0,1>;
using def_t = void(CCamera *, CVector const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,CVector const &>, 0,1>;
META_END

META_BEGIN(CCamera::SetCameraDirectlyBehindForFollowPed_CamOnAString)
static int address;
static int global_address;
static const int id = 0x46FC60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FC60, 0x46FC40, 0x46FC40>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x423A83,100,0,0x4222D0,1, 0x44BEEB,100,0,0x448240,1, 0x46A108,100,0,0x468250,1, 0x46A875,100,0,0x468250,2, 0x423A83,110,0,0x4222D0,1, 0x44BEEB,110,0,0x448240,1, 0x46A118,110,0,0x468260,1, 0x46A885,110,0,0x468260,2, 0x423A83,120,0,0x4222D0,1, 0x44BEEB,120,0,0x448240,1, 0x46A118,120,0,0x468260,1, 0x46A885,120,0,0x468260,2>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::SetCameraDirectlyInFrontForFollowPed_CamOnAString)
static int address;
static int global_address;
static const int id = 0x46FC90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FC90, 0x46FC70, 0x46FC70>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x421BCF,100,0,0x421A60,1, 0x44F010,100,0,0x44CB80,1, 0x421BCF,110,0,0x421A60,1, 0x44F010,110,0,0x44CB80,1, 0x421BCF,120,0,0x421A60,1, 0x44F010,120,0,0x44CB80,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::SetCamPositionForFixedMode)
static int address;
static int global_address;
static const int id = 0x46FCC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FCC0, 0x46FCA0, 0x46FCA0>;
// total references count: 10en (13), 11en (13), steam (13)
using refs_t = RefList<0x43F808,100,0,0x43ED30,1, 0x468877,100,0,0x468250,1, 0x46981C,100,0,0x468250,2, 0x469EC3,100,0,0x468250,3, 0x46F7C0,100,0,0x46F600,1, 0x471AD6,100,0,0x471650,1, 0x471E26,100,0,0x471650,2, 0x471FE6,100,0,0x471650,3, 0x472255,100,0,0x471650,4, 0x472994,100,0,0x471650,5, 0x472B33,100,0,0x471650,6, 0x472CD3,100,0,0x471650,7, 0x472E73,100,0,0x471650,8, 0x43F808,110,0,0x43ED30,1, 0x468887,110,0,0x468260,1, 0x46982C,110,0,0x468260,2, 0x469ED3,110,0,0x468260,3, 0x46F7A0,110,0,0x46F5E0,1, 0x471AB6,110,0,0x471630,1, 0x471E06,110,0,0x471630,2, 0x471FC6,110,0,0x471630,3, 0x472235,110,0,0x471630,4, 0x472974,110,0,0x471630,5, 0x472B13,110,0,0x471630,6, 0x472CB3,110,0,0x471630,7, 0x472E53,110,0,0x471630,8, 0x43F808,120,0,0x43ED30,1, 0x468887,120,0,0x468260,1, 0x46982C,120,0,0x468260,2, 0x469ED3,120,0,0x468260,3, 0x46F7A0,120,0,0x46F5E0,1, 0x471AB6,120,0,0x471630,1, 0x471E06,120,0,0x471630,2, 0x471FC6,120,0,0x471630,3, 0x472235,120,0,0x471630,4, 0x472974,120,0,0x471630,5, 0x472B13,120,0,0x471630,6, 0x472CB3,120,0,0x471630,7, 0x472E53,120,0,0x471630,8>;
using def_t = void(CCamera *, CVector const &, CVector const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,CVector const &,CVector const &>, 0,1,2>;
META_END

META_BEGIN(CCamera::SetFadeColour)
static int address;
static int global_address;
static const int id = 0x46FD00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FD00, 0x46FCE0, 0x46FCE0>;
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x4214AF,100,0,0x421400,1, 0x42168F,100,0,0x421400,2, 0x4218AD,100,0,0x421400,3, 0x4219FE,100,0,0x421400,4, 0x43FBAD,100,0,0x43ED30,1, 0x48D1B0,100,0,0x48D120,1, 0x4A0621,100,0,0x49FD30,1, 0x4A0662,100,0,0x49FD30,2, 0x54C6FA,100,0,0x54C1D0,1, 0x54CC3E,100,0,0x54C1D0,2, 0x4214AF,110,0,0x421400,1, 0x42168F,110,0,0x421400,2, 0x4218AD,110,0,0x421400,3, 0x4219FE,110,0,0x421400,4, 0x43FBAD,110,0,0x43ED30,1, 0x48D2B0,110,0,0x48D220,1, 0x4A0711,110,0,0x49FE20,1, 0x4A0752,110,0,0x49FE20,2, 0x54C87A,110,0,0x54C350,1, 0x54CDBE,110,0,0x54C350,2, 0x4214AF,120,0,0x421400,1, 0x42168F,120,0,0x421400,2, 0x4218AD,120,0,0x421400,3, 0x4219FE,120,0,0x421400,4, 0x43FBAD,120,0,0x43ED30,1, 0x48D240,120,0,0x48D1B0,1, 0x4A06A1,120,0,0x49FDB0,1, 0x4A06E2,120,0,0x49FDB0,2, 0x54C82A,120,0,0x54C300,1, 0x54CD6E,120,0,0x54C300,2>;
using def_t = void(CCamera *, unsigned char, unsigned char, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,unsigned char,unsigned char,unsigned char>, 0,1,2,3>;
META_END

META_BEGIN(CCamera::SetMotionBlur)
static int address;
static int global_address;
static const int id = 0x46FD40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FD40, 0x46FD20, 0x46FD20>;
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x4215FE,100,0,0x421400,1, 0x421822,100,0,0x421400,2, 0x4219BC,100,0,0x421400,3, 0x44BF31,100,0,0x448240,1, 0x45B3FF,100,0,0x45AB30,1, 0x462AF4,100,0,0x462420,1, 0x46BE01,100,0,0x46BAD0,1, 0x46E91B,100,0,0x46D3F0,1, 0x48C883,100,0,0x48C850,1, 0x4ACC08,100,0,0x4ABF40,1, 0x4215FE,110,0,0x421400,1, 0x421822,110,0,0x421400,2, 0x4219BC,110,0,0x421400,3, 0x44BF31,110,0,0x448240,1, 0x45B3FF,110,0,0x45AB30,1, 0x462B04,110,0,0x462430,1, 0x46BDF1,110,0,0x46BAA0,1, 0x46E8FB,110,0,0x46D3D0,1, 0x48C983,110,0,0x48C950,1, 0x4ACCF8,110,0,0x4AC030,1, 0x4215FE,120,0,0x421400,1, 0x421822,120,0,0x421400,2, 0x4219BC,120,0,0x421400,3, 0x44BF31,120,0,0x448240,1, 0x45B3FF,120,0,0x45AB30,1, 0x462B04,120,0,0x462430,1, 0x46BDF1,120,0,0x46BAA0,1, 0x46E8FB,120,0,0x46D3D0,1, 0x48C913,120,0,0x48C8E0,1, 0x4ACC88,120,0,0x4ABFC0,1>;
using def_t = void(CCamera *, int, int, int, int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,int,int,int,int,int>, 0,1,2,3,4,5>;
META_END

META_BEGIN(CCamera::SetMotionBlurAlpha)
static int address;
static int global_address;
static const int id = 0x46FD80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FD80, 0x46FD60, 0x46FD60>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x46B45E,100,0,0x46B430,1, 0x46E8C8,100,0,0x46D3F0,1, 0x48C85C,100,0,0x48C850,1, 0x48E633,100,0,0x48E480,1, 0x46B42E,110,0,0x46B400,1, 0x46E8A8,110,0,0x46D3D0,1, 0x48C95C,110,0,0x48C950,1, 0x48E6F3,110,0,0x48E540,1, 0x46B42E,120,0,0x46B400,1, 0x46E8A8,120,0,0x46D3D0,1, 0x48C8EC,120,0,0x48C8E0,1, 0x48E683,120,0,0x48E4D0,1>;
using def_t = void(CCamera *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,int>, 0,1>;
META_END

META_BEGIN(CCamera::SetNearClipScript)
static int address;
static int global_address;
static const int id = 0x46FD90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FD90, 0x46FD70, 0x46FD70>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x46BFFB,100,0,0x46BF10,1, 0x46C24C,100,0,0x46BF10,2, 0x46C5DB,100,0,0x46BF10,3, 0x589044,100,0,0x588490,1, 0x46BFDB,110,0,0x46BEF0,1, 0x46C22C,110,0,0x46BEF0,2, 0x46C5BB,110,0,0x46BEF0,3, 0x589384,110,0,0x5887D0,1, 0x46BFDB,120,0,0x46BEF0,1, 0x46C22C,120,0,0x46BEF0,2, 0x46C5BB,120,0,0x46BEF0,3, 0x589274,120,0,0x5886C0,1>;
using def_t = void(CCamera *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,float>, 0,1>;
META_END

META_BEGIN(CCamera::SetNewPlayerWeaponMode)
static int address;
static int global_address;
static const int id = 0x46FDB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FDB0, 0x46FD90, 0x46FD90>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4F1FDB,100,0,0x4F1EF0,1, 0x4F227A,100,0,0x4F1EF0,2, 0x4F208B,110,0,0x4F1FA0,1, 0x4F232A,110,0,0x4F1FA0,2, 0x4F201B,120,0,0x4F1F30,1, 0x4F22BA,120,0,0x4F1F30,2>;
using def_t = void(CCamera *, short, short, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,short,short,short>, 0,1,2,3>;
META_END

META_BEGIN(CCamera::SetParametersForScriptInterpolation)
static int address;
static int global_address;
static const int id = 0x46FDE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FDE0, 0x46FDC0, 0x46FDC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x58A8C9,100,0,0x589D00,1, 0x58AC09,110,0,0x58A040,1, 0x58AAF9,120,0,0x589F30,1>;
using def_t = void(CCamera *, float, float, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,float,float,unsigned int>, 0,1,2,3>;
META_END

META_BEGIN(CCamera::SetPercentAlongCutScene)
static int address;
static int global_address;
static const int id = 0x46FE20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FE20, 0x46FE00, 0x46FE00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x46B569,100,0,0x46B560,1, 0x46B539,110,0,0x46B530,1, 0x46B539,120,0,0x46B530,1>;
using def_t = void(CCamera *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,float>, 0,1>;
META_END

META_BEGIN(CCamera::SetRwCamera)
static int address;
static int global_address;
static const int id = 0x46FEC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FEC0, 0x46FEA0, 0x46FEA0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48BFAB,100,0,0x48BED0,1, 0x48C4CC,100,0,0x48C4B0,1, 0x48C09B,110,0,0x48BFC0,1, 0x48C5CC,110,0,0x48C5B0,1, 0x48C02B,120,0,0x48BF50,1, 0x48C55C,120,0,0x48C540,1>;
using def_t = void(CCamera *, RwCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,RwCamera *>, 0,1>;
META_END

META_BEGIN(CCamera::SetWideScreenOn)
static int address;
static int global_address;
static const int id = 0x46FF00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FF00, 0x46FEE0, 0x46FEE0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x404DE8,100,0,0x404DC0,1, 0x42FB45,100,0,0x42F7A0,1, 0x44526A,100,0,0x444B20,1, 0x46F726,100,0,0x46F600,1, 0x404DE8,110,0,0x404DC0,1, 0x42FB45,110,0,0x42F7A0,1, 0x44526A,110,0,0x444B20,1, 0x46F706,110,0,0x46F5E0,1, 0x404DE8,120,0,0x404DC0,1, 0x42FB45,120,0,0x42F7A0,1, 0x44526A,120,0,0x444B20,1, 0x46F706,120,0,0x46F5E0,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::SetWideScreenOff)
static int address;
static int global_address;
static const int id = 0x46FF10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FF10, 0x46FEF0, 0x46FEF0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x404992,100,0,0x4048E0,1, 0x42F7FD,100,0,0x42F7A0,1, 0x437C51,100,0,0x437C10,1, 0x445276,100,0,0x444B20,1, 0x4683C6,100,0,0x468250,1, 0x46F8CA,100,0,0x46F600,1, 0x404992,110,0,0x4048E0,1, 0x42F7FD,110,0,0x42F7A0,1, 0x437C51,110,0,0x437C10,1, 0x445276,110,0,0x444B20,1, 0x4683D6,110,0,0x468260,1, 0x46F8AA,110,0,0x46F5E0,1, 0x404992,120,0,0x4048E0,1, 0x42F7FD,120,0,0x42F7A0,1, 0x437C51,120,0,0x437C10,1, 0x445276,120,0,0x444B20,1, 0x4683D6,120,0,0x468260,1, 0x46F8AA,120,0,0x46F5E0,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::SetZoomValueFollowPedScript)
static int address;
static int global_address;
static const int id = 0x46FF30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FF30, 0x46FF10, 0x46FF10>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4489D5,100,0,0x448240,1, 0x4489D5,110,0,0x448240,1, 0x4489D5,120,0,0x448240,1>;
using def_t = void(CCamera *, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,short>, 0,1>;
META_END

META_BEGIN(CCamera::SetZoomValueCamStringScript)
static int address;
static int global_address;
static const int id = 0x46FF90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FF90, 0x46FF70, 0x46FF70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4489F2,100,0,0x448240,1, 0x4489F2,110,0,0x448240,1, 0x4489F2,120,0,0x448240,1>;
using def_t = void(CCamera *, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,short>, 0,1>;
META_END

META_BEGIN(CCamera::StartTransition)
static int address;
static int global_address;
static const int id = 0x46FFF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46FFF0, 0x46FFD0, 0x46FFD0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x46A9C3,100,0,0x468250,1, 0x46AB94,100,0,0x468250,2, 0x46AC11,100,0,0x468250,3, 0x470D8C,100,0,0x470D80,1, 0x46A9D3,110,0,0x468260,1, 0x46ABA4,110,0,0x468260,2, 0x46AC21,110,0,0x468260,3, 0x470D6C,110,0,0x470D60,1, 0x46A9D3,120,0,0x468260,1, 0x46ABA4,120,0,0x468260,2, 0x46AC21,120,0,0x468260,3, 0x470D6C,120,0,0x470D60,1>;
using def_t = void(CCamera *, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,short>, 0,1>;
META_END

META_BEGIN(CCamera::StartTransitionWhenNotFinishedInter)
static int address;
static int global_address;
static const int id = 0x470D80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x470D80, 0x470D60, 0x470D60>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x46AB17,100,0,0x468250,1, 0x46ABA9,100,0,0x468250,2, 0x46AC7A,100,0,0x468250,3, 0x46AB27,110,0,0x468260,1, 0x46ABB9,110,0,0x468260,2, 0x46AC8A,110,0,0x468260,3, 0x46AB27,120,0,0x468260,1, 0x46ABB9,120,0,0x468260,2, 0x46AC8A,120,0,0x468260,3>;
using def_t = void(CCamera *, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,short>, 0,1>;
META_END

META_BEGIN(CCamera::StoreValuesDuringInterPol)
static int address;
static int global_address;
static const int id = 0x470DA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x470DA0, 0x470D80, 0x470D80>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x46DD48,100,0,0x46D3F0,1, 0x46E3DB,100,0,0x46D3F0,2, 0x46DD28,110,0,0x46D3D0,1, 0x46E3BB,110,0,0x46D3D0,2, 0x46DD28,120,0,0x46D3D0,1, 0x46E3BB,120,0,0x46D3D0,2>;
using def_t = void(CCamera *, CVector &, CVector &, CVector &, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,CVector &,CVector &,CVector &,float *>, 0,1,2,3,4>;
META_END

META_BEGIN(CCamera::UpdateSoundDistances)
static int address;
static int global_address;
static const int id = 0x470EA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x470EA0, 0x470E80, 0x470E80>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x46EB8B,100,0,0x46D3F0,1, 0x46EB6B,110,0,0x46D3D0,1, 0x46EB6B,120,0,0x46D3D0,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::UpdateTargetEntity)
static int address;
static int global_address;
static const int id = 0x4712A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4712A0, 0x471280, 0x471280>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x46D49A,100,0,0x46D3F0,1, 0x46D47A,110,0,0x46D3D0,1, 0x46D47A,120,0,0x46D3D0,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::TakeControl)
static int address;
static int global_address;
static const int id = 0x471500;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x471500, 0x4714E0, 0x4714E0>;
// total references count: 10en (23), 11en (23), steam (23)
using refs_t = RefList<0x435D93,100,0,0x435C30,1, 0x43F55B,100,0,0x43ED30,1, 0x43F5A8,100,0,0x43ED30,2, 0x43F5F5,100,0,0x43ED30,3, 0x46F76C,100,0,0x46F600,1, 0x46F822,100,0,0x46F600,2, 0x46F8B1,100,0,0x46F600,3, 0x4717A4,100,0,0x471650,1, 0x471AEC,100,0,0x471650,2, 0x471E3C,100,0,0x471650,3, 0x471FFC,100,0,0x471650,4, 0x472021,100,0,0x471650,5, 0x47226B,100,0,0x471650,6, 0x472290,100,0,0x471650,7, 0x47249E,100,0,0x471650,8, 0x47279C,100,0,0x471650,9, 0x4729AA,100,0,0x471650,10, 0x472B49,100,0,0x471650,11, 0x472CE9,100,0,0x471650,12, 0x472E89,100,0,0x471650,13, 0x472EAE,100,0,0x471650,14, 0x5855DC,100,0,0x585570,1, 0x58686A,100,0,0x585BB0,1, 0x435D93,110,0,0x435C30,1, 0x43F55B,110,0,0x43ED30,1, 0x43F5A8,110,0,0x43ED30,2, 0x43F5F5,110,0,0x43ED30,3, 0x46F74C,110,0,0x46F5E0,1, 0x46F802,110,0,0x46F5E0,2, 0x46F891,110,0,0x46F5E0,3, 0x471784,110,0,0x471630,1, 0x471ACC,110,0,0x471630,2, 0x471E1C,110,0,0x471630,3, 0x471FDC,110,0,0x471630,4, 0x472001,110,0,0x471630,5, 0x47224B,110,0,0x471630,6, 0x472270,110,0,0x471630,7, 0x47247E,110,0,0x471630,8, 0x47277C,110,0,0x471630,9, 0x47298A,110,0,0x471630,10, 0x472B29,110,0,0x471630,11, 0x472CC9,110,0,0x471630,12, 0x472E69,110,0,0x471630,13, 0x472E8E,110,0,0x471630,14, 0x58591C,110,0,0x5858B0,1, 0x586BAA,110,0,0x585EF0,1, 0x435D93,120,0,0x435C30,1, 0x43F55B,120,0,0x43ED30,1, 0x43F5A8,120,0,0x43ED30,2, 0x43F5F5,120,0,0x43ED30,3, 0x46F74C,120,0,0x46F5E0,1, 0x46F802,120,0,0x46F5E0,2, 0x46F891,120,0,0x46F5E0,3, 0x471784,120,0,0x471630,1, 0x471ACC,120,0,0x471630,2, 0x471E1C,120,0,0x471630,3, 0x471FDC,120,0,0x471630,4, 0x472001,120,0,0x471630,5, 0x47224B,120,0,0x471630,6, 0x472270,120,0,0x471630,7, 0x47247E,120,0,0x471630,8, 0x47277C,120,0,0x471630,9, 0x47298A,120,0,0x471630,10, 0x472B29,120,0,0x471630,11, 0x472CC9,120,0,0x471630,12, 0x472E69,120,0,0x471630,13, 0x472E8E,120,0,0x471630,14, 0x58580C,120,0,0x5857A0,1, 0x586A9A,120,0,0x585DE0,1>;
using def_t = void(CCamera *, CEntity *, short, short, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,CEntity *,short,short,int>, 0,1,2,3,4>;
META_END

META_BEGIN(CCamera::TakeControlNoEntity)
static int address;
static int global_address;
static const int id = 0x4715B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4715B0, 0x471590, 0x471590>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x43F8AA,100,0,0x43ED30,1, 0x46F841,100,0,0x46F600,1, 0x43F8AA,110,0,0x43ED30,1, 0x46F821,110,0,0x46F5E0,1, 0x43F8AA,120,0,0x43ED30,1, 0x46F821,120,0,0x46F5E0,1>;
using def_t = void(CCamera *, CVector const &, short, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,CVector const &,short,int>, 0,1,2,3>;
META_END

META_BEGIN(CCamera::TakeControlWithSpline)
static int address;
static int global_address;
static const int id = 0x471620;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x471620, 0x471600, 0x471600>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x404DDE,100,0,0x404DC0,1, 0x404DDE,110,0,0x404DC0,1, 0x404DDE,120,0,0x404DC0,1>;
using def_t = void(CCamera *, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,short>, 0,1>;
META_END

META_BEGIN(CCamera::TryToStartNewCamMode)
static int address;
static int global_address;
static const int id = 0x471650;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x471650, 0x471630, 0x471630>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x46F4CE,100,0,0x46F3E0,1, 0x46F4FD,100,0,0x46F3E0,2, 0x46F5D8,100,0,0x46F520,1, 0x46F4AE,110,0,0x46F3C0,1, 0x46F4DD,110,0,0x46F3C0,2, 0x46F5B8,110,0,0x46F500,1, 0x46F4AE,120,0,0x46F3C0,1, 0x46F4DD,120,0,0x46F3C0,2, 0x46F5B8,120,0,0x46F500,1>;
using def_t = bool(CCamera *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,int>, 0,1>;
META_END

META_BEGIN(CCamera::UpdateAimingCoors)
static int address;
static int global_address;
static const int id = 0x472F10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x472F10, 0x472EF0, 0x472EF0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F228E,100,0,0x4F1EF0,1, 0x4F233E,110,0,0x4F1FA0,1, 0x4F22CE,120,0,0x4F1F30,1>;
using def_t = void(CCamera *, CVector const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,CVector const &>, 0,1>;
META_END

DEL_DTOR_META_BEGIN(CCamera)
static int address;
static int global_address;
static const int id = 0x4731C0;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x4731C0, 0x4731C0, 0x4731C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F0EB8,100,2,0x5F0EB8,1, 0x5F0DB0,110,2,0x5F0DB0,1, 0x5FDDB0,120,2,0x5FDDB0,1>;
using def_t = void(CCamera *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *,char>, 0,1>;
META_END

DTOR_META_BEGIN(CCamera)
static int address;
static int global_address;
static const int id = 0x473250;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x473250, 0x473250, 0x473250>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x47318A,100,2,0,1, 0x4731D4,100,2,0,1, 0x473186,110,2,0,1, 0x4731D4,110,2,0,1, 0x473186,120,2,0,1, 0x4731D4,120,2,0,1>;
using def_t = void(CCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CamShakeNoPos)
static int address;
static int global_address;
static const int id = 0x46B100;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x46B100, 0x46B0E0, 0x46B0E0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4396FB,100,0,0x439650,1, 0x56216F,100,0,0x561FE0,1, 0x5629FB,100,0,0x5624D0,1, 0x4396FB,110,0,0x439650,1, 0x56229F,110,0,0x562110,1, 0x562B2B,110,0,0x562600,1, 0x4396FB,120,0,0x439650,1, 0x56224F,120,0,0x5620C0,1, 0x562ADB,120,0,0x5625B0,1>;
using def_t = void(CCamera *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CCamera *,float>, 0,1>;
META_END

template<>
struct stack_object<CCamera> : stack_object_no_default<CCamera> {
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CCamera *>(dtor_gaddr(CCamera), reinterpret_cast<CCamera *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CCamera>(CCamera *obj) {
    if (obj == nullptr) return;
    plugin::CallVirtualMethod<0, CCamera *, char>(obj, 1);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CCamera>(CCamera *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallVirtualMethod<0, CCamera *, char>(&objArray[i], 1);
    operator delete(objData);
}

}
