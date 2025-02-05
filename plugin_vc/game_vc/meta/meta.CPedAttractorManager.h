/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedAttractorManager::ComputeEffectPos)
static int address;
static int global_address;
static const int id = 0x62AE20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62AE20, 0x62AE70, 0x62AAE0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4EA238,100,0,0x4E9E90,1, 0x4EA3D4,100,0,0x4E9E90,2, 0x637918,100,0,0x637600,1, 0x4EA258,110,0,0x4E9EB0,1, 0x4EA3F4,110,0,0x4E9EB0,2, 0x637968,110,0,0x637650,1, 0x4EA0F8,120,0,0x4E9D50,1, 0x4EA294,120,0,0x4E9D50,2, 0x6375D1,120,0,0x6372C0,1>;
using def_t = void(C2dEffect const *, CMatrix const &, CVector &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<C2dEffect const *,CMatrix const &,CVector &>, 0,1,2>;
META_END

META_BEGIN(CPedAttractorManager::IsApproachable)
static int address;
static int global_address;
static const int id = 0x62AE80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62AE80, 0x62AED0, 0x62AB40>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x4EA2B6,100,0,0x4E9E90,1, 0x4EA452,100,0,0x4E9E90,2, 0x62B52E,100,0,0x62B470,1, 0x62B578,100,0,0x62B470,2, 0x6379A0,100,0,0x637600,1, 0x4EA2D6,110,0,0x4E9EB0,1, 0x4EA472,110,0,0x4E9EB0,2, 0x62B57E,110,0,0x62B4C0,1, 0x62B5C8,110,0,0x62B4C0,2, 0x6379F0,110,0,0x637650,1, 0x4EA176,120,0,0x4E9D50,1, 0x4EA312,120,0,0x4E9D50,2, 0x62B1EE,120,0,0x62B130,1, 0x62B238,120,0,0x62B130,2, 0x637653,120,0,0x6372C0,1>;
using def_t = bool(C2dEffect *, CMatrix const &, int, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<C2dEffect *,CMatrix const &,int,CPed *>, 0,1,2,3>;
META_END

META_BEGIN(CPedAttractorManager::HasEmptySlot)
static int address;
static int global_address;
static const int id = 0x62B0F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62B0F0, 0x62B140, 0x62ADB0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4EA2A2,100,0,0x4E9E90,1, 0x4EA43E,100,0,0x4E9E90,2, 0x637988,100,0,0x637600,1, 0x4EA2C2,110,0,0x4E9EB0,1, 0x4EA45E,110,0,0x4E9EB0,2, 0x6379D8,110,0,0x637650,1, 0x4EA162,120,0,0x4E9D50,1, 0x4EA2FE,120,0,0x4E9D50,2, 0x63763B,120,0,0x6372C0,1>;
using def_t = bool(CPedAttractorManager *, C2dEffect const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractorManager *,C2dEffect const *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CPedAttractorManager::BroadcastDeparture, bool (*)(CPed *, CPedAttractor *, std::vector<CPedAttractor *> &))
static int address;
static int global_address;
static const int id = 0x62B240;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62B240, 0x62B290, 0x62AF00>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x62C15B,100,0,0x62C100,1, 0x62C16F,100,0,0x62C100,2, 0x62C183,100,0,0x62C100,3, 0x62C197,100,0,0x62C100,4, 0x62C1AB,100,0,0x62C100,5, 0x62C1BF,100,0,0x62C100,6, 0x62C1AB,110,0,0x62C150,1, 0x62C1BF,110,0,0x62C150,2, 0x62C1D3,110,0,0x62C150,3, 0x62C1E7,110,0,0x62C150,4, 0x62C1FB,110,0,0x62C150,5, 0x62C20F,110,0,0x62C150,6, 0x62BE1B,120,0,0x62BDC0,1, 0x62BE2F,120,0,0x62BDC0,2, 0x62BE43,120,0,0x62BDC0,3, 0x62BE57,120,0,0x62BDC0,4, 0x62BE6B,120,0,0x62BDC0,5, 0x62BE7F,120,0,0x62BDC0,6>;
using def_t = bool(CPed *, CPedAttractor *, std::vector<CPedAttractor *> &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPed *,CPedAttractor *,std::vector<CPedAttractor *> &>, 0,1,2>;
META_END

META_BEGIN_OVERLOADED(CPedAttractorManager::BroadcastArrival, bool (*)(CPed *, CPedAttractor *, std::vector<CPedAttractor *> &))
static int address;
static int global_address;
static const int id = 0x62B370;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62B370, 0x62B3C0, 0x62B030>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x62C23B,100,0,0x62C1E0,1, 0x62C24F,100,0,0x62C1E0,2, 0x62C263,100,0,0x62C1E0,3, 0x62C277,100,0,0x62C1E0,4, 0x62C28B,100,0,0x62C1E0,5, 0x62C29F,100,0,0x62C1E0,6, 0x62C28B,110,0,0x62C230,1, 0x62C29F,110,0,0x62C230,2, 0x62C2B3,110,0,0x62C230,3, 0x62C2C7,110,0,0x62C230,4, 0x62C2DB,110,0,0x62C230,5, 0x62C2EF,110,0,0x62C230,6, 0x62BEFB,120,0,0x62BEA0,1, 0x62BF0F,120,0,0x62BEA0,2, 0x62BF23,120,0,0x62BEA0,3, 0x62BF37,120,0,0x62BEA0,4, 0x62BF4B,120,0,0x62BEA0,5, 0x62BF5F,120,0,0x62BEA0,6>;
using def_t = bool(CPed *, CPedAttractor *, std::vector<CPedAttractor *> &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPed *,CPedAttractor *,std::vector<CPedAttractor *> &>, 0,1,2>;
META_END

META_BEGIN_OVERLOADED(CPedAttractorManager::DeRegisterPed, bool (*)(CPed *, CPedAttractor *, std::vector<CPedAttractor *> &))
static int address;
static int global_address;
static const int id = 0x62B3D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62B3D0, 0x62B420, 0x62B090>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x62C31B,100,0,0x62C2C0,1, 0x62C32F,100,0,0x62C2C0,2, 0x62C343,100,0,0x62C2C0,3, 0x62C357,100,0,0x62C2C0,4, 0x62C36B,100,0,0x62C2C0,5, 0x62C37F,100,0,0x62C2C0,6, 0x62C36B,110,0,0x62C310,1, 0x62C37F,110,0,0x62C310,2, 0x62C393,110,0,0x62C310,3, 0x62C3A7,110,0,0x62C310,4, 0x62C3BB,110,0,0x62C310,5, 0x62C3CF,110,0,0x62C310,6, 0x62BFDB,120,0,0x62BF80,1, 0x62BFEF,120,0,0x62BF80,2, 0x62C003,120,0,0x62BF80,3, 0x62C017,120,0,0x62BF80,4, 0x62C02B,120,0,0x62BF80,5, 0x62C03F,120,0,0x62BF80,6>;
using def_t = bool(CPed *, CPedAttractor *, std::vector<CPedAttractor *> &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPed *,CPedAttractor *,std::vector<CPedAttractor *> &>, 0,1,2>;
META_END

META_BEGIN(CPedAttractorManager::RegisterPed)
static int address;
static int global_address;
static const int id = 0x62B470;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62B470, 0x62B4C0, 0x62B130>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x62C3EE,100,0,0x62C3A0,1, 0x62C404,100,0,0x62C3A0,2, 0x62C41A,100,0,0x62C3A0,3, 0x62C430,100,0,0x62C3A0,4, 0x62C446,100,0,0x62C3A0,5, 0x62C45C,100,0,0x62C3A0,6, 0x62C43E,110,0,0x62C3F0,1, 0x62C454,110,0,0x62C3F0,2, 0x62C46A,110,0,0x62C3F0,3, 0x62C480,110,0,0x62C3F0,4, 0x62C496,110,0,0x62C3F0,5, 0x62C4AC,110,0,0x62C3F0,6, 0x62C0AE,120,0,0x62C060,1, 0x62C0C4,120,0,0x62C060,2, 0x62C0DA,120,0,0x62C060,3, 0x62C0F0,120,0,0x62C060,4, 0x62C106,120,0,0x62C060,5, 0x62C11C,120,0,0x62C060,6>;
using def_t = CPedAttractor *(CPed *, C2dEffect *, CMatrix const &, std::vector<CPedAttractor *> &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPed *,C2dEffect *,CMatrix const &,std::vector<CPedAttractor *> &>, 0,1,2,3>;
META_END

META_BEGIN(CPedAttractorManager::IsPedRegisteredWithEffect)
static int address;
static int global_address;
static const int id = 0x62B860;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62B860, 0x62B8B0, 0x62B520>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x62BC75,100,0,0x62BC40,1, 0x62BF25,100,0,0x62BEF0,1, 0x62C134,100,0,0x62C100,1, 0x62C214,100,0,0x62C1E0,1, 0x62C2F4,100,0,0x62C2C0,1, 0x62C3C4,100,0,0x62C3A0,1, 0x62BCC5,110,0,0x62BC90,1, 0x62BF75,110,0,0x62BF40,1, 0x62C184,110,0,0x62C150,1, 0x62C264,110,0,0x62C230,1, 0x62C344,110,0,0x62C310,1, 0x62C414,110,0,0x62C3F0,1, 0x62B935,120,0,0x62B900,1, 0x62BBE5,120,0,0x62BBB0,1, 0x62BDF4,120,0,0x62BDC0,1, 0x62BED4,120,0,0x62BEA0,1, 0x62BFB4,120,0,0x62BF80,1, 0x62C084,120,0,0x62C060,1>;
using def_t = bool(CPedAttractorManager *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractorManager *,CPed *>, 0,1>;
META_END

META_BEGIN(CPedAttractorManager::IsInQueue)
static int address;
static int global_address;
static const int id = 0x62BC40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62BC40, 0x62BC90, 0x62B900>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x505DCB,100,0,0x505790,1, 0x505DEB,110,0,0x5057B0,1, 0x505C8B,120,0,0x505650,1>;
using def_t = bool(CPedAttractorManager *, CPed *, CPedAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractorManager *,CPed *,CPedAttractor *>, 0,1,2>;
META_END

META_BEGIN(CPedAttractorManager::IsAtHeadOfQueue)
static int address;
static int global_address;
static const int id = 0x62BEF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62BEF0, 0x62BF40, 0x62BBB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51ED74,100,0,0x51CA70,1, 0x51ED94,110,0,0x51CA90,1, 0x51EC64,120,0,0x51C960,1>;
using def_t = bool(CPedAttractorManager *, CPed *, CPedAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractorManager *,CPed *,CPedAttractor *>, 0,1,2>;
META_END

META_BEGIN_OVERLOADED(CPedAttractorManager::BroadcastDeparture, bool (CPedAttractorManager::*)(CPed *, CPedAttractor *))
static int address;
static int global_address;
static const int id = 0x62C100;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62C100, 0x62C150, 0x62BDC0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4F2058,100,0,0x4F18A0,1, 0x4F22C4,100,0,0x4F18A0,2, 0x4F234D,100,0,0x4F18A0,3, 0x51CF04,100,0,0x51CA70,1, 0x4F2078,110,0,0x4F18C0,1, 0x4F22E4,110,0,0x4F18C0,2, 0x4F236D,110,0,0x4F18C0,3, 0x51CF24,110,0,0x51CA90,1, 0x4F1F18,120,0,0x4F1760,1, 0x4F2184,120,0,0x4F1760,2, 0x4F220D,120,0,0x4F1760,3, 0x51CDF4,120,0,0x51C960,1>;
using def_t = bool(CPedAttractorManager *, CPed *, CPedAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractorManager *,CPed *,CPedAttractor *>, 0,1,2>;
META_END

META_BEGIN_OVERLOADED(CPedAttractorManager::BroadcastArrival, bool (CPedAttractorManager::*)(CPed *, CPedAttractor *))
static int address;
static int global_address;
static const int id = 0x62C1E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62C1E0, 0x62C230, 0x62BEA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51ED60,100,0,0x51CA70,1, 0x51ED80,110,0,0x51CA90,1, 0x51EC50,120,0,0x51C960,1>;
using def_t = bool(CPedAttractorManager *, CPed *, CPedAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractorManager *,CPed *,CPedAttractor *>, 0,1,2>;
META_END

META_BEGIN_OVERLOADED(CPedAttractorManager::DeRegisterPed, bool (CPedAttractorManager::*)(CPed *, CPedAttractor *))
static int address;
static int global_address;
static const int id = 0x62C2C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62C2C0, 0x62C310, 0x62BF80>;
// total references count: 10en (19), 11en (19), steam (19)
using refs_t = RefList<0x4F319B,100,0,0x4F3130,1, 0x4F31D9,100,0,0x4F3130,2, 0x4F3248,100,0,0x4F3130,3, 0x4F65DD,100,0,0x4F65C0,1, 0x50DA94,100,0,0x50DA70,1, 0x51D064,100,0,0x51CA70,1, 0x51D12E,100,0,0x51CA70,2, 0x51D17E,100,0,0x51CA70,3, 0x51D1A0,100,0,0x51CA70,4, 0x51D1D1,100,0,0x51CA70,5, 0x51D4C6,100,0,0x51CA70,6, 0x51E7BD,100,0,0x51CA70,7, 0x51E8AC,100,0,0x51CA70,8, 0x51E97A,100,0,0x51CA70,9, 0x51E9D6,100,0,0x51CA70,10, 0x51E9FE,100,0,0x51CA70,11, 0x51EA31,100,0,0x51CA70,12, 0x6202A4,100,0,0x620250,1, 0x637B67,100,0,0x637600,1, 0x4F31BB,110,0,0x4F3150,1, 0x4F31F9,110,0,0x4F3150,2, 0x4F3268,110,0,0x4F3150,3, 0x4F65FD,110,0,0x4F65E0,1, 0x50DAB4,110,0,0x50DA90,1, 0x51D084,110,0,0x51CA90,1, 0x51D14E,110,0,0x51CA90,2, 0x51D19E,110,0,0x51CA90,3, 0x51D1C0,110,0,0x51CA90,4, 0x51D1F1,110,0,0x51CA90,5, 0x51D4E6,110,0,0x51CA90,6, 0x51E7DD,110,0,0x51CA90,7, 0x51E8CC,110,0,0x51CA90,8, 0x51E99A,110,0,0x51CA90,9, 0x51E9F6,110,0,0x51CA90,10, 0x51EA1E,110,0,0x51CA90,11, 0x51EA51,110,0,0x51CA90,12, 0x620284,110,0,0x620230,1, 0x637BB7,110,0,0x637650,1, 0x4F305B,120,0,0x4F2FF0,1, 0x4F3099,120,0,0x4F2FF0,2, 0x4F3108,120,0,0x4F2FF0,3, 0x4F649D,120,0,0x4F6480,1, 0x50D954,120,0,0x50D930,1, 0x51CF54,120,0,0x51C960,1, 0x51D01E,120,0,0x51C960,2, 0x51D06E,120,0,0x51C960,3, 0x51D090,120,0,0x51C960,4, 0x51D0C1,120,0,0x51C960,5, 0x51D3B6,120,0,0x51C960,6, 0x51E6AD,120,0,0x51C960,7, 0x51E79C,120,0,0x51C960,8, 0x51E86A,120,0,0x51C960,9, 0x51E8C6,120,0,0x51C960,10, 0x51E8EE,120,0,0x51C960,11, 0x51E921,120,0,0x51C960,12, 0x61FEE4,120,0,0x61FE90,1, 0x6377F7,120,0,0x6372C0,1>;
using def_t = bool(CPedAttractorManager *, CPed *, CPedAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractorManager *,CPed *,CPedAttractor *>, 0,1,2>;
META_END

META_BEGIN(CPedAttractorManager::RegisterPedWithAttractor)
static int address;
static int global_address;
static const int id = 0x62C3A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62C3A0, 0x62C3F0, 0x62C060>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4EA4D4,100,0,0x4E9E90,1, 0x6379C1,100,0,0x637600,1, 0x4EA4F4,110,0,0x4E9EB0,1, 0x637A11,110,0,0x637650,1, 0x4EA394,120,0,0x4E9D50,1, 0x637674,120,0,0x6372C0,1>;
using def_t = CPedAttractor *(CPedAttractorManager *, CPed *, C2dEffect *, CMatrix const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractorManager *,CPed *,C2dEffect *,CMatrix const &>, 0,1,2,3>;
META_END

META_BEGIN(GetPedAttractorManager)
static int address;
static int global_address;
static const int id = 0x62D030;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62D030, 0x62D080, 0x62CCF0>;
// total references count: 10en (36), 11en (36), steam (36)
using refs_t = RefList<0x4EA29B,100,0,0x4E9E90,1, 0x4EA437,100,0,0x4E9E90,2, 0x4EA4CD,100,0,0x4E9E90,3, 0x4F2051,100,0,0x4F18A0,1, 0x4F22BD,100,0,0x4F18A0,2, 0x4F2346,100,0,0x4F18A0,3, 0x4F3194,100,0,0x4F3130,1, 0x4F31D2,100,0,0x4F3130,2, 0x4F3241,100,0,0x4F3130,3, 0x4F65D6,100,0,0x4F65C0,1, 0x505DC4,100,0,0x505790,1, 0x50DA8D,100,0,0x50DA70,1, 0x51CEFD,100,0,0x51CA70,1, 0x51D05D,100,0,0x51CA70,2, 0x51D07F,100,0,0x51CA70,3, 0x51D0E7,100,0,0x51CA70,4, 0x51D127,100,0,0x51CA70,5, 0x51D177,100,0,0x51CA70,6, 0x51D199,100,0,0x51CA70,7, 0x51D1CA,100,0,0x51CA70,8, 0x51D4BF,100,0,0x51CA70,9, 0x51E7B6,100,0,0x51CA70,10, 0x51E8A5,100,0,0x51CA70,11, 0x51E933,100,0,0x51CA70,12, 0x51E973,100,0,0x51CA70,13, 0x51E9CF,100,0,0x51CA70,14, 0x51E9F7,100,0,0x51CA70,15, 0x51EA2A,100,0,0x51CA70,16, 0x51ED59,100,0,0x51CA70,17, 0x51ED6D,100,0,0x51CA70,18, 0x62029D,100,0,0x620250,1, 0x62D2FD,100,0,0x62D2F0,1, 0x6378EB,100,0,0x637600,1, 0x637981,100,0,0x637600,2, 0x6379BA,100,0,0x637600,3, 0x637B60,100,0,0x637600,4, 0x4EA2BB,110,0,0x4E9EB0,1, 0x4EA457,110,0,0x4E9EB0,2, 0x4EA4ED,110,0,0x4E9EB0,3, 0x4F2071,110,0,0x4F18C0,1, 0x4F22DD,110,0,0x4F18C0,2, 0x4F2366,110,0,0x4F18C0,3, 0x4F31B4,110,0,0x4F3150,1, 0x4F31F2,110,0,0x4F3150,2, 0x4F3261,110,0,0x4F3150,3, 0x4F65F6,110,0,0x4F65E0,1, 0x505DE4,110,0,0x5057B0,1, 0x50DAAD,110,0,0x50DA90,1, 0x51CF1D,110,0,0x51CA90,1, 0x51D07D,110,0,0x51CA90,2, 0x51D09F,110,0,0x51CA90,3, 0x51D107,110,0,0x51CA90,4, 0x51D147,110,0,0x51CA90,5, 0x51D197,110,0,0x51CA90,6, 0x51D1B9,110,0,0x51CA90,7, 0x51D1EA,110,0,0x51CA90,8, 0x51D4DF,110,0,0x51CA90,9, 0x51E7D6,110,0,0x51CA90,10, 0x51E8C5,110,0,0x51CA90,11, 0x51E953,110,0,0x51CA90,12, 0x51E993,110,0,0x51CA90,13, 0x51E9EF,110,0,0x51CA90,14, 0x51EA17,110,0,0x51CA90,15, 0x51EA4A,110,0,0x51CA90,16, 0x51ED79,110,0,0x51CA90,17, 0x51ED8D,110,0,0x51CA90,18, 0x62027D,110,0,0x620230,1, 0x62D34D,110,0,0x62D340,1, 0x63793B,110,0,0x637650,1, 0x6379D1,110,0,0x637650,2, 0x637A0A,110,0,0x637650,3, 0x637BB0,110,0,0x637650,4, 0x4EA15B,120,0,0x4E9D50,1, 0x4EA2F7,120,0,0x4E9D50,2, 0x4EA38D,120,0,0x4E9D50,3, 0x4F1F11,120,0,0x4F1760,1, 0x4F217D,120,0,0x4F1760,2, 0x4F2206,120,0,0x4F1760,3, 0x4F3054,120,0,0x4F2FF0,1, 0x4F3092,120,0,0x4F2FF0,2, 0x4F3101,120,0,0x4F2FF0,3, 0x4F6496,120,0,0x4F6480,1, 0x505C84,120,0,0x505650,1, 0x50D94D,120,0,0x50D930,1, 0x51CDED,120,0,0x51C960,1, 0x51CF4D,120,0,0x51C960,2, 0x51CF6F,120,0,0x51C960,3, 0x51CFD7,120,0,0x51C960,4, 0x51D017,120,0,0x51C960,5, 0x51D067,120,0,0x51C960,6, 0x51D089,120,0,0x51C960,7, 0x51D0BA,120,0,0x51C960,8, 0x51D3AF,120,0,0x51C960,9, 0x51E6A6,120,0,0x51C960,10, 0x51E795,120,0,0x51C960,11, 0x51E823,120,0,0x51C960,12, 0x51E863,120,0,0x51C960,13, 0x51E8BF,120,0,0x51C960,14, 0x51E8E7,120,0,0x51C960,15, 0x51E91A,120,0,0x51C960,16, 0x51EC49,120,0,0x51C960,17, 0x51EC5D,120,0,0x51C960,18, 0x61FEDD,120,0,0x61FE90,1, 0x62CFBD,120,0,0x62CFB0,1, 0x6375A8,120,0,0x6372C0,1, 0x637634,120,0,0x6372C0,2, 0x63766D,120,0,0x6372C0,3, 0x6377F0,120,0,0x6372C0,4>;
using def_t = CPedAttractorManager *();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
