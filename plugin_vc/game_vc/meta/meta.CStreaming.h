/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CStreaming::MemoryCardLoad)
static int address;
static int global_address;
static const int id = 0x408A20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x408A20, 0, 0>;
// total references count: 10en (0), 11en (0), steam (0)
using refs_t = RefList<>;
using def_t = void(unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int>, 0,1>;
META_END

META_BEGIN(CStreaming::MemoryCardSave)
static int address;
static int global_address;
static const int id = 0x408A60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x408A60, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x61D1F8,100,0,0x61C420,1>;
using def_t = void(unsigned char *, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int *>, 0,1>;
META_END

META_BEGIN(CStreaming::RemoveLoadedVehicle)
static int address;
static int global_address;
static const int id = 0x408AA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x408AA0, 0, 0>;
// total references count: 10en (4), 11en (0), steam (0)
using refs_t = RefList<0x407200,100,0,0x407090,1, 0x40BFA5,100,0,0x40BEB0,1, 0x40D6B1,100,0,0x40D5A0,1, 0x40FF67,100,0,0x40FEC0,1>;
using def_t = bool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::AddToLoadedVehiclesList)
static int address;
static int global_address;
static const int id = 0x408B40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x408B40, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x40C820,100,0,0x40C770,1>;
using def_t = bool(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::StreamVehiclesAndPeds)
static int address;
static int global_address;
static const int id = 0x408C90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x408C90, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x40EF29,100,0,0x40EE80,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::LoadInitialVehicles)
static int address;
static int global_address;
static const int id = 0x409940;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x409940, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x406C18,100,0,0x4069D0,1, 0x4A4D5E,100,0,0x4A4B10,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::SetMissionDoesntRequireSpecialChar)
static int address;
static int global_address;
static const int id = 0x409970;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x409970, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x451604,100,0,0x451550,1, 0x456F2D,100,0,0x456E20,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::HasSpecialCharLoaded)
static int address;
static int global_address;
static const int id = 0x409A10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x409A10, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4588BE,100,0,0x457580,1>;
using def_t = bool(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::RequestSpecialChar)
static int address;
static int global_address;
static const int id = 0x409A30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x409A30, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x458889,100,0,0x457580,1>;
using def_t = void(int, char const *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,char const *,int>, 0,1,2>;
META_END

META_BEGIN(CStreaming::RemoveLoadedZoneModel)
static int address;
static int global_address;
static const int id = 0x409A50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x409A50, 0, 0>;
// total references count: 10en (4), 11en (0), steam (0)
using refs_t = RefList<0x40CEC8,100,0,0x40CC70,1, 0x40CEE1,100,0,0x40CC70,2, 0x40D292,100,0,0x40CC70,3, 0x40D2B0,100,0,0x40CC70,4>;
using def_t = bool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::RemoveCurrentZonesModels)
static int address;
static int global_address;
static const int id = 0x409AE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x409AE0, 0, 0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x406D53,100,0,0x406D30,1, 0x407193,100,0,0x407090,1, 0x4AC77C,100,0,0x4ABD20,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::StreamZoneModels)
static int address;
static int global_address;
static const int id = 0x40A050;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40A050, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x40EF3D,100,0,0x40EE80,1, 0x42BB57,100,0,0x42B900,1>;
using def_t = void(CVector const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector const *>, 0>;
META_END

META_BEGIN(CStreaming::LoadInitialWeapons)
static int address;
static int global_address;
static const int id = 0x40AA10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40AA10, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x406C13,100,0,0x4069D0,1, 0x4A4DBF,100,0,0x4A4B10,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::LoadInitialPeds)
static int address;
static int global_address;
static const int id = 0x40AA30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40AA30, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x406C0E,100,0,0x4069D0,1, 0x4A4D63,100,0,0x4A4B10,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::RequestSpecialModel)
static int address;
static int global_address;
static const int id = 0x40AA60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40AA60, 0, 0>;
// total references count: 10en (5), 11en (0), steam (0)
using refs_t = RefList<0x409A42,100,0,0x409A30,1, 0x44E775,100,0,0x44B400,1, 0x4565D2,100,0,0x455030,1, 0x4BEC2E,100,0,0x4BEB50,1, 0x4EF080,100,0,0x4EF030,1>;
using def_t = char(int, char *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,char *,int>, 0,1,2>;
META_END

META_BEGIN(CStreaming::SetMissionDoesntRequireModel)
static int address;
static int global_address;
static const int id = 0x40AD60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40AD60, 0, 0>;
// total references count: 10en (6), 11en (0), steam (0)
using refs_t = RefList<0x451616,100,0,0x451550,1, 0x451621,100,0,0x451550,2, 0x45162C,100,0,0x451550,3, 0x451637,100,0,0x451550,4, 0x451642,100,0,0x451550,5, 0x458A94,100,0,0x457580,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::SetModelTxdIsDeletable)
static int address;
static int global_address;
static const int id = 0x40ADF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40ADF0, 0, 0>;
// total references count: 10en (8), 11en (0), steam (0)
using refs_t = RefList<0x4071A2,100,0,0x407090,1, 0x4071B2,100,0,0x407090,2, 0x4071C8,100,0,0x407090,3, 0x4071DE,100,0,0x407090,4, 0x4071F4,100,0,0x407090,5, 0x4AC76A,100,0,0x4ABD20,1, 0x4AC776,100,0,0x4ABD20,2, 0x4AE971,100,0,0x4AE8F0,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::SetModelIsDeletable)
static int address;
static int global_address;
static const int id = 0x40AEA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40AEA0, 0, 0>;
// total references count: 10en (39), 11en (0), steam (0)
using refs_t = RefList<0x406CAD,100,0,0x4069D0,1, 0x40719A,100,0,0x407090,1, 0x4071AA,100,0,0x407090,2, 0x4071BD,100,0,0x407090,3, 0x4071D3,100,0,0x407090,4, 0x4071E9,100,0,0x407090,5, 0x41CABD,100,0,0x41C940,1, 0x41CC12,100,0,0x41C940,2, 0x4AC752,100,0,0x4ABD20,1, 0x4AC75E,100,0,0x4ABD20,2, 0x4AE8AF,100,0,0x4AE7B0,1, 0x4AE96A,100,0,0x4AE8F0,1, 0x4AEC0D,100,0,0x4AEAD0,1, 0x4AEC18,100,0,0x4AEAD0,2, 0x4AEC23,100,0,0x4AEAD0,3, 0x4AEC2E,100,0,0x4AEAD0,4, 0x4AEC39,100,0,0x4AEAD0,5, 0x4AEC44,100,0,0x4AEAD0,6, 0x4AEC4F,100,0,0x4AEAD0,7, 0x4AEC5A,100,0,0x4AEAD0,8, 0x4AEC65,100,0,0x4AEAD0,9, 0x4AEDAA,100,0,0x4AEC70,1, 0x4AEDB5,100,0,0x4AEC70,2, 0x4AEDC0,100,0,0x4AEC70,3, 0x4AEDCB,100,0,0x4AEC70,4, 0x4AEDD6,100,0,0x4AEC70,5, 0x4AEDE1,100,0,0x4AEC70,6, 0x4AEDEC,100,0,0x4AEC70,7, 0x4AEDF7,100,0,0x4AEC70,8, 0x4AEF4F,100,0,0x4AEE00,1, 0x4AEF5A,100,0,0x4AEE00,2, 0x4AEF65,100,0,0x4AEE00,3, 0x4AEF70,100,0,0x4AEE00,4, 0x4AEF7B,100,0,0x4AEE00,5, 0x4AEF86,100,0,0x4AEE00,6, 0x4AEF91,100,0,0x4AEE00,7, 0x4AEF9C,100,0,0x4AEE00,8, 0x4AEFA7,100,0,0x4AEE00,9, 0x5B89D8,100,0,0x5B8920,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::LoadSceneCollision)
static int address;
static int global_address;
static const int id = 0x40AF30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40AF30, 0, 0>;
// total references count: 10en (4), 11en (0), steam (0)
using refs_t = RefList<0x42B36C,100,0,0x42AE70,1, 0x42BDE2,100,0,0x42BB70,1, 0x42C1CD,100,0,0x42BB70,2, 0x42C3CF,100,0,0x42BB70,3>;
using def_t = void(CVector const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector const *>, 0>;
META_END

META_BEGIN(CStreaming::LoadScene)
static int address;
static int global_address;
static const int id = 0x40AF60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40AF60, 0, 0>;
// total references count: 10en (7), 11en (0), steam (0)
using refs_t = RefList<0x42B377,100,0,0x42AE70,1, 0x42BDE9,100,0,0x42BB70,1, 0x42C1D4,100,0,0x42BB70,2, 0x42C3D6,100,0,0x42BB70,3, 0x45AA2C,100,0,0x458EC0,1, 0x620B82,100,0,0x6209E0,1, 0x62114D,100,0,0x6210E0,1>;
using def_t = void(CVector const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector const *>, 0>;
META_END

META_BEGIN(CStreaming::FlushRequestList)
static int address;
static int global_address;
static const int id = 0x40B4D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40B4D0, 0, 0>;
// total references count: 10en (5), 11en (0), steam (0)
using refs_t = RefList<0x42BDAD,100,0,0x42BB70,1, 0x42C198,100,0,0x42BB70,2, 0x42C39A,100,0,0x42BB70,3, 0x61D999,100,0,0x61D960,1, 0x61DCEF,100,0,0x61D960,2>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::FlushChannels)
static int address;
static int global_address;
static const int id = 0x40B580;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40B580, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x61DB0C,100,0,0x61D960,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::LoadAllRequestedModels)
static int address;
static int global_address;
static const int id = 0x40B5F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40B5F0, 0, 0>;
// total references count: 10en (33), 11en (0), steam (0)
using refs_t = RefList<0x406C6A,100,0,0x4069D0,1, 0x406CA1,100,0,0x4069D0,2, 0x40AF4F,100,0,0x40AF30,1, 0x40B244,100,0,0x40AF60,1, 0x40B3C7,100,0,0x40AF60,2, 0x40E231,100,0,0x40DFB0,1, 0x416810,100,0,0x4167F0,1, 0x44E77F,100,0,0x44B400,1, 0x45909A,100,0,0x458EC0,1, 0x4A48D5,100,0,0x4A4850,1, 0x4A4D72,100,0,0x4A4B10,1, 0x4A4DC6,100,0,0x4A4B10,2, 0x4AE889,100,0,0x4AE7B0,1, 0x4AE8E1,100,0,0x4AE8C0,1, 0x4AE935,100,0,0x4AE8F0,1, 0x4AEB6C,100,0,0x4AEAD0,1, 0x4AED0C,100,0,0x4AEC70,1, 0x4AEE9C,100,0,0x4AEE00,1, 0x4BDD2B,100,0,0x4BCA90,1, 0x4BEC38,100,0,0x4BEB50,1, 0x4BED51,100,0,0x4BEB50,2, 0x4BFA37,100,0,0x4BF9A0,1, 0x4BFAE2,100,0,0x4BF9A0,2, 0x4BFBDA,100,0,0x4BF9A0,3, 0x51567F,100,0,0x5155E0,1, 0x5B24CF,100,0,0x5B21E0,1, 0x5B24E5,100,0,0x5B21E0,2, 0x61F0CB,100,0,0x61F050,1, 0x61FA15,100,0,0x61F460,1, 0x61FABE,100,0,0x61F460,2, 0x61FBBB,100,0,0x61F460,3, 0x629FD3,100,0,0x629F80,1, 0x62A348,100,0,0x62A230,1>;
using def_t = void(bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(CStreaming::RequestModelStream)
static int address;
static int global_address;
static const int id = 0x40B8A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40B8A0, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x40EFC1,100,0,0x40EE80,1, 0x61DB06,100,0,0x61D960,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::GetCdImageOffset)
static int address;
static int global_address;
static const int id = 0x40BC30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40BC30, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x40B6B2,100,0,0x40B5F0,1, 0x40B8C1,100,0,0x40B8A0,1>;
using def_t = unsigned int(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::GetNextFileOnCd)
static int address;
static int global_address;
static const int id = 0x40BCA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40BCA0, 0, 0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x40B6CC,100,0,0x40B5F0,1, 0x40B8FB,100,0,0x40B8A0,1, 0x40BE8C,100,0,0x40BCA0,1>;
using def_t = int(int, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,bool>, 0,1>;
META_END

META_BEGIN(CStreaming::ProcessLoadingChannel)
static int address;
static int global_address;
static const int id = 0x40BEB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40BEB0, 0, 0>;
// total references count: 10en (22), 11en (0), steam (0)
using refs_t = RefList<0x40B515,100,0,0x40B4D0,1, 0x40B52E,100,0,0x40B4D0,2, 0x40B53F,100,0,0x40B4D0,3, 0x40B558,100,0,0x40B4D0,4, 0x40B569,100,0,0x40B4D0,5, 0x40B58B,100,0,0x40B580,1, 0x40B5A4,100,0,0x40B580,2, 0x40B5B5,100,0,0x40B580,3, 0x40B5CE,100,0,0x40B580,4, 0x40B5DF,100,0,0x40B580,5, 0x40B652,100,0,0x40B5F0,1, 0x40B66B,100,0,0x40B5F0,2, 0x40B67C,100,0,0x40B5F0,3, 0x40B695,100,0,0x40B5F0,4, 0x40B6A6,100,0,0x40B5F0,5, 0x40EE64,100,0,0x40ED80,1, 0x40EF96,100,0,0x40EE80,1, 0x40FF06,100,0,0x40FEC0,1, 0x40FF1F,100,0,0x40FEC0,2, 0x40FF30,100,0,0x40FEC0,3, 0x40FF49,100,0,0x40FEC0,4, 0x40FF5A,100,0,0x40FEC0,5>;
using def_t = bool(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::IHaveUsedStreamingMemory)
static int address;
static int global_address;
static const int id = 0x40C170;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40C170, 0, 0>;
// total references count: 10en (6), 11en (0), steam (0)
using refs_t = RefList<0x406708,100,0,0x4066A0,1, 0x406914,100,0,0x406760,1, 0x406E19,100,0,0x406D30,1, 0x406EA2,100,0,0x406D30,2, 0x4A3B14,100,0,0x4A3A13,1, 0x4A3BB1,100,0,0x4A3A13,2>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::ImGonnaUseStreamingMemory)
static int address;
static int global_address;
static const int id = 0x40C180;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40C180, 0, 0>;
// total references count: 10en (6), 11en (0), steam (0)
using refs_t = RefList<0x4066F6,100,0,0x4066A0,1, 0x406769,100,0,0x406760,1, 0x406DE6,100,0,0x406D30,1, 0x406E7F,100,0,0x406D30,2, 0x4A3A89,100,0,0x4A3A13,1, 0x4A3B2E,100,0,0x4A3A13,2>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::MakeSpaceFor)
static int address;
static int global_address;
static const int id = 0x40C190;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40C190, 0, 0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x406DE0,100,0,0x406D30,1, 0x4A3A83,100,0,0x4A3A13,1, 0x4A3B28,100,0,0x4A3A13,2>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::ConvertBufferToObject)
static int address;
static int global_address;
static const int id = 0x40C1E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40C1E0, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x40B7F8,100,0,0x40B5F0,1, 0x40C086,100,0,0x40BEB0,1>;
using def_t = void(char *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<char *,int>, 0,1>;
META_END

META_BEGIN(CStreaming::FinishLoadingLargeFile)
static int address;
static int global_address;
static const int id = 0x40C770;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40C770, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x40B80E,100,0,0x40B5F0,1, 0x40BF0B,100,0,0x40BEB0,1>;
using def_t = void(char *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<char *,int>, 0,1>;
META_END

META_BEGIN(CStreaming::AreAnimsUsedByRequestedModels)
static int address;
static int global_address;
static const int id = 0x40C9C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40C9C0, 0, 0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x40B95A,100,0,0x40B8A0,1, 0x40C59B,100,0,0x40C1E0,1, 0x40D670,100,0,0x40D5A0,1>;
using def_t = bool(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::IsTxdUsedByRequestedModels)
static int address;
static int global_address;
static const int id = 0x40CA90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40CA90, 0, 0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x40B941,100,0,0x40B8A0,1, 0x40C440,100,0,0x40C1E0,1, 0x40D638,100,0,0x40D5A0,1>;
using def_t = bool(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::DeleteRwObjectsNotInFrustumInSectorList)
static int address;
static int global_address;
static const int id = 0x40CB50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40CB50, 0, 0>;
// total references count: 10en (6), 11en (0), steam (0)
using refs_t = RefList<0x40CFC5,100,0,0x40CC70,1, 0x40CFDD,100,0,0x40CC70,2, 0x40CFF5,100,0,0x40CC70,3, 0x40D3C1,100,0,0x40CC70,4, 0x40D3D9,100,0,0x40CC70,5, 0x40D3F5,100,0,0x40CC70,6>;
using def_t = bool(CPtrList *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPtrList *,int>, 0,1>;
META_END

META_BEGIN(CStreaming::DeleteRwObjectsBehindCameraInSectorList)
static int address;
static int global_address;
static const int id = 0x40CBE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40CBE0, 0, 0>;
// total references count: 10en (12), 11en (0), steam (0)
using refs_t = RefList<0x40CE64,100,0,0x40CC70,1, 0x40CE7C,100,0,0x40CC70,2, 0x40CE95,100,0,0x40CC70,3, 0x40D064,100,0,0x40CC70,4, 0x40D07C,100,0,0x40CC70,5, 0x40D095,100,0,0x40CC70,6, 0x40D221,100,0,0x40CC70,7, 0x40D239,100,0,0x40CC70,8, 0x40D255,100,0,0x40CC70,9, 0x40D501,100,0,0x40CC70,10, 0x40D519,100,0,0x40CC70,11, 0x40D535,100,0,0x40CC70,12>;
using def_t = bool(CPtrList *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPtrList *,int>, 0,1>;
META_END

META_BEGIN(CStreaming::DeleteRwObjectsBehindCamera)
static int address;
static int global_address;
static const int id = 0x40CC70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40CC70, 0, 0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x40B7D4,100,0,0x40B5F0,1, 0x40C055,100,0,0x40BEB0,1, 0x40C1B4,100,0,0x40C190,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::RemoveLeastUsedModel)
static int address;
static int global_address;
static const int id = 0x40D5A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40D5A0, 0, 0>;
// total references count: 10en (4), 11en (0), steam (0)
using refs_t = RefList<0x40B7C2,100,0,0x40B5F0,1, 0x40C042,100,0,0x40BEB0,1, 0x40C1A2,100,0,0x40C190,1, 0x40D576,100,0,0x40CC70,1>;
using def_t = bool(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::RemoveUnusedModelsInLoadedList)
static int address;
static int global_address;
static const int id = 0x40D6D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40D6D0, 0, 0>;
// total references count: 10en (4), 11en (0), steam (0)
using refs_t = RefList<0x406D74,100,0,0x406D30,1, 0x42BDB9,100,0,0x42BB70,1, 0x42C1A4,100,0,0x42BB70,2, 0x42C3A6,100,0,0x42BB70,3>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::RemoveModel)
static int address;
static int global_address;
static const int id = 0x40D6E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40D6E0, 0, 0>;
// total references count: 10en (99), 11en (0), steam (0)
using refs_t = RefList<0x404970,100,0,0x404950,1, 0x405B8B,100,0,0x405B80,1, 0x407DD1,100,0,0x407DB0,1, 0x408B07,100,0,0x408AA0,1, 0x408BF1,100,0,0x408B40,1, 0x408D75,100,0,0x408C90,1, 0x408DE2,100,0,0x408C90,2, 0x408E85,100,0,0x408C90,3, 0x408EF2,100,0,0x408C90,4, 0x408F95,100,0,0x408C90,5, 0x408FF9,100,0,0x408C90,6, 0x409072,100,0,0x408C90,7, 0x409105,100,0,0x408C90,8, 0x409182,100,0,0x408C90,9, 0x4091E3,100,0,0x408C90,10, 0x409244,100,0,0x408C90,11, 0x4092A5,100,0,0x408C90,12, 0x409306,100,0,0x408C90,13, 0x409367,100,0,0x408C90,14, 0x4093C8,100,0,0x408C90,15, 0x409429,100,0,0x408C90,16, 0x409535,100,0,0x408C90,17, 0x409596,100,0,0x408C90,18, 0x4095F7,100,0,0x408C90,19, 0x409658,100,0,0x408C90,20, 0x4096B9,100,0,0x408C90,21, 0x40971A,100,0,0x408C90,22, 0x409782,100,0,0x408C90,23, 0x4097E3,100,0,0x408C90,24, 0x409844,100,0,0x408C90,25, 0x409A04,100,0,0x409970,1, 0x409AB5,100,0,0x409A50,1, 0x409B91,100,0,0x409AE0,1, 0x409C3C,100,0,0x409AE0,2, 0x409CF1,100,0,0x409AE0,3, 0x409D9F,100,0,0x409AE0,4, 0x409E31,100,0,0x409AE0,5, 0x409EDF,100,0,0x409AE0,6, 0x409F71,100,0,0x409AE0,7, 0x40A01F,100,0,0x409AE0,8, 0x40A141,100,0,0x40A050,1, 0x40A1E9,100,0,0x40A050,2, 0x40A406,100,0,0x40A050,3, 0x40A4B7,100,0,0x40A050,4, 0x40A679,100,0,0x40A050,5, 0x40A701,100,0,0x40A050,6, 0x40A7AF,100,0,0x40A050,7, 0x40A85D,100,0,0x40A050,8, 0x40A932,100,0,0x40A050,9, 0x40A9E7,100,0,0x40A050,10, 0x40ACAC,100,0,0x40AA60,1, 0x40ACC4,100,0,0x40AA60,2, 0x40ACD4,100,0,0x40AA60,3, 0x40ADE1,100,0,0x40AD60,1, 0x40AE99,100,0,0x40ADF0,1, 0x40AF21,100,0,0x40AEA0,1, 0x40AFB7,100,0,0x40AF60,1, 0x40B09B,100,0,0x40AF60,2, 0x40B4FA,100,0,0x40B4D0,1, 0x40B8D3,100,0,0x40B8A0,1, 0x40BFE6,100,0,0x40BEB0,1, 0x40C026,100,0,0x40BEB0,2, 0x40C3B4,100,0,0x40C1E0,1, 0x40C3E5,100,0,0x40C1E0,2, 0x40C44B,100,0,0x40C1E0,3, 0x40C4D5,100,0,0x40C1E0,4, 0x40C54C,100,0,0x40C1E0,5, 0x40C5A6,100,0,0x40C1E0,6, 0x40C8C5,100,0,0x40C770,1, 0x40CBBC,100,0,0x40CB50,1, 0x40CC44,100,0,0x40CBE0,1, 0x40D487,100,0,0x40CC70,1, 0x40D600,100,0,0x40D5A0,1, 0x40D643,100,0,0x40D5A0,2, 0x40D67B,100,0,0x40D5A0,3, 0x40D92B,100,0,0x40D890,1, 0x40D946,100,0,0x40D890,2, 0x40D976,100,0,0x40D890,3, 0x40D991,100,0,0x40D890,4, 0x40DA65,100,0,0x40D9B0,1, 0x40DD90,100,0,0x40DD00,1, 0x40DE2B,100,0,0x40DD00,2, 0x40DECA,100,0,0x40DD00,3, 0x40DF5B,100,0,0x40DD00,4, 0x40E0E5,100,0,0x40DFB0,1, 0x40F0D7,100,0,0x40EE80,1, 0x40FEEB,100,0,0x40FEC0,1, 0x40FF98,100,0,0x40FEC0,2, 0x410039,100,0,0x40FEC0,3, 0x4C28C3,100,0,0x4C2870,1, 0x4C295F,100,0,0x4C2930,1, 0x4C61E3,100,0,0x4C6030,1, 0x535F17,100,0,0x535D10,1, 0x580A4C,100,0,0x580A10,1, 0x61DC46,100,0,0x61D960,1, 0x61DCE9,100,0,0x61D960,2, 0x62A02B,100,0,0x629FE0,1, 0x62A667,100,0,0x62A380,1, 0x631AA5,100,0,0x630650,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::RemoveIslandsNotUsed)
static int address;
static int global_address;
static const int id = 0x40D890;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40D890, 0, 0>;
// total references count: 10en (7), 11en (0), steam (0)
using refs_t = RefList<0x40B0C0,100,0,0x40AF60,1, 0x40B23C,100,0,0x40AF60,2, 0x40DA8A,100,0,0x40D9B0,1, 0x40E10A,100,0,0x40DFB0,1, 0x4A48C5,100,0,0x4A4850,1, 0x4A48CD,100,0,0x4A4850,2, 0x4A4D7E,100,0,0x4A4B10,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::RemoveUnusedBigBuildings)
static int address;
static int global_address;
static const int id = 0x40D9B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40D9B0, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x61A2BE,100,0,0x61A1B0,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::RemoveBuildingsNotInArea)
static int address;
static int global_address;
static const int id = 0x40DAA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40DAA0, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x42BB16,100,0,0x42B900,1, 0x630B53,100,0,0x630650,1>;
using def_t = char(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::RemoveBuildings)
static int address;
static int global_address;
static const int id = 0x40DD00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40DD00, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x40DF95,100,0,0x40DF80,1, 0x40E125,100,0,0x40DFB0,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::RemoveUnusedBuildings)
static int address;
static int global_address;
static const int id = 0x40DF80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40DF80, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x61A2CA,100,0,0x61A1B0,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::LoadBigBuildingsWhenNeeded)
static int address;
static int global_address;
static const int id = 0x40DFB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40DFB0, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x40EEB8,100,0,0x40EE80,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::RequestBigBuildings)
static int address;
static int global_address;
static const int id = 0x40E260;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40E260, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x4A48BD,100,0,0x4A4850,1, 0x4A4D6A,100,0,0x4A4B10,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::RequestModel)
static int address;
static int global_address;
static const int id = 0x40E310;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40E310, 0, 0>;
// total references count: 10en (151), 11en (0), steam (0)
using refs_t = RefList<0x406C61,100,0,0x4069D0,1, 0x406C98,100,0,0x4069D0,2, 0x4072F7,100,0,0x407090,1, 0x407DFA,100,0,0x407DB0,1, 0x408D00,100,0,0x408C90,1, 0x408D0B,100,0,0x408C90,2, 0x408E03,100,0,0x408C90,3, 0x408E0E,100,0,0x408C90,4, 0x408F13,100,0,0x408C90,5, 0x408F21,100,0,0x408C90,6, 0x408F2C,100,0,0x408C90,7, 0x409093,100,0,0x408C90,8, 0x409436,100,0,0x408C90,9, 0x409466,100,0,0x408C90,10, 0x409471,100,0,0x408C90,11, 0x409481,100,0,0x408C90,12, 0x40948C,100,0,0x408C90,13, 0x40949C,100,0,0x408C90,14, 0x4094A7,100,0,0x408C90,15, 0x4094B7,100,0,0x408C90,16, 0x4094C2,100,0,0x408C90,17, 0x409908,100,0,0x408C90,18, 0x40995B,100,0,0x409940,1, 0x409C50,100,0,0x409AE0,1, 0x409C5B,100,0,0x409AE0,2, 0x40A26F,100,0,0x40A050,1, 0x40A35F,100,0,0x40A050,2, 0x40A4F2,100,0,0x40A050,3, 0x40A4FD,100,0,0x40A050,4, 0x40A5B8,100,0,0x40A050,5, 0x40A5C8,100,0,0x40A050,6, 0x40A891,100,0,0x40A050,7, 0x40AA17,100,0,0x40AA10,1, 0x40AA25,100,0,0x40AA10,2, 0x40AA34,100,0,0x40AA30,1, 0x40AA3F,100,0,0x40AA30,2, 0x40AA4A,100,0,0x40AA30,3, 0x40AAFE,100,0,0x40AA60,1, 0x40AD47,100,0,0x40AA60,2, 0x40B157,100,0,0x40AF60,1, 0x40B199,100,0,0x40AF60,2, 0x40B227,100,0,0x40AF60,3, 0x40B3B8,100,0,0x40AF60,4, 0x40BD50,100,0,0x40BCA0,1, 0x40BD99,100,0,0x40BCA0,2, 0x40BFFE,100,0,0x40BEB0,1, 0x40C3C3,100,0,0x40C1E0,1, 0x40C3F4,100,0,0x40C1E0,2, 0x40C4E4,100,0,0x40C1E0,3, 0x40C55B,100,0,0x40C1E0,4, 0x40C8D4,100,0,0x40C770,1, 0x40DB36,100,0,0x40DAA0,1, 0x40DBEB,100,0,0x40DAA0,2, 0x40E1E7,100,0,0x40DFB0,1, 0x40E228,100,0,0x40DFB0,2, 0x40E2C1,100,0,0x40E260,1, 0x40E2FD,100,0,0x40E260,2, 0x40E443,100,0,0x40E310,1, 0x40E45E,100,0,0x40E310,2, 0x40E84B,100,0,0x40E7B0,1, 0x40E9CE,100,0,0x40E870,1, 0x41CA64,100,0,0x41C940,1, 0x41CA6F,100,0,0x41C940,2, 0x41CB86,100,0,0x41C940,3, 0x41CB91,100,0,0x41C940,4, 0x4273C8,100,0,0x426DB0,1, 0x42ADC6,100,0,0x42AC10,1, 0x42AFB7,100,0,0x42AE70,1, 0x42B886,100,0,0x42B7A0,1, 0x42DF48,100,0,0x42DF40,1, 0x431B33,100,0,0x430A60,1, 0x431B66,100,0,0x430A60,2, 0x443B30,100,0,0x4434B0,1, 0x458A03,100,0,0x457580,1, 0x4AE880,100,0,0x4AE7B0,1, 0x4AE92C,100,0,0x4AE8F0,1, 0x4AEAF3,100,0,0x4AEAD0,1, 0x4AEB01,100,0,0x4AEAD0,2, 0x4AEB0F,100,0,0x4AEAD0,3, 0x4AEB1D,100,0,0x4AEAD0,4, 0x4AEB2B,100,0,0x4AEAD0,5, 0x4AEB39,100,0,0x4AEAD0,6, 0x4AEB47,100,0,0x4AEAD0,7, 0x4AEB55,100,0,0x4AEAD0,8, 0x4AEB63,100,0,0x4AEAD0,9, 0x4AEC93,100,0,0x4AEC70,1, 0x4AECA1,100,0,0x4AEC70,2, 0x4AECAF,100,0,0x4AEC70,3, 0x4AECBD,100,0,0x4AEC70,4, 0x4AECCB,100,0,0x4AEC70,5, 0x4AECD9,100,0,0x4AEC70,6, 0x4AECE7,100,0,0x4AEC70,7, 0x4AECF5,100,0,0x4AEC70,8, 0x4AED03,100,0,0x4AEC70,9, 0x4AEE23,100,0,0x4AEE00,1, 0x4AEE31,100,0,0x4AEE00,2, 0x4AEE3F,100,0,0x4AEE00,3, 0x4AEE4D,100,0,0x4AEE00,4, 0x4AEE5B,100,0,0x4AEE00,5, 0x4AEE69,100,0,0x4AEE00,6, 0x4AEE77,100,0,0x4AEE00,7, 0x4AEE85,100,0,0x4AEE00,8, 0x4AEE93,100,0,0x4AEE00,9, 0x4BED28,100,0,0x4BEB50,1, 0x4BED48,100,0,0x4BEB50,2, 0x4BFA2E,100,0,0x4BF9A0,1, 0x4BFAD9,100,0,0x4BF9A0,2, 0x4BFBD1,100,0,0x4BF9A0,3, 0x4C290C,100,0,0x4C2870,1, 0x4C7498,100,0,0x4C6D70,1, 0x4C7546,100,0,0x4C74F0,1, 0x4C75EB,100,0,0x4C7560,1, 0x4C77E1,100,0,0x4C7740,1, 0x4C85A4,100,0,0x4C8540,1, 0x4FFC7E,100,0,0x4FFC30,1, 0x4FFC8D,100,0,0x4FFC30,2, 0x4FFD1A,100,0,0x4FFCE0,1, 0x4FFD29,100,0,0x4FFCE0,2, 0x515633,100,0,0x5155E0,1, 0x515643,100,0,0x5155E0,2, 0x515653,100,0,0x5155E0,3, 0x515663,100,0,0x5155E0,4, 0x515676,100,0,0x5155E0,5, 0x535DB8,100,0,0x535D10,1, 0x5A72A5,100,0,0x5A71C0,1, 0x5ACE77,100,0,0x5ACDA0,1, 0x5B1923,100,0,0x5AFDC0,1, 0x5B1E7A,100,0,0x5B19D0,1, 0x5B1F2C,100,0,0x5B19D0,2, 0x5B24DC,100,0,0x5B21E0,1, 0x5B8A89,100,0,0x5B89F0,1, 0x5B8C27,100,0,0x5B89F0,2, 0x603DCC,100,0,0x603C10,1, 0x603F1C,100,0,0x603C10,2, 0x60471A,100,0,0x604500,1, 0x604C6A,100,0,0x604500,2, 0x61DAFD,100,0,0x61D960,1, 0x61F0A3,100,0,0x61F050,1, 0x61FA0C,100,0,0x61F460,1, 0x61FAA6,100,0,0x61F460,2, 0x61FAB5,100,0,0x61F460,3, 0x61FBB2,100,0,0x61F460,4, 0x6214C8,100,0,0x621230,1, 0x621656,100,0,0x621230,2, 0x6217A3,100,0,0x621230,3, 0x6239A3,100,0,0x623730,1, 0x629FC1,100,0,0x629F80,1, 0x62A202,100,0,0x62A140,1, 0x62A31B,100,0,0x62A230,1, 0x62A653,100,0,0x62A380,1, 0x631A1A,100,0,0x630650,1>;
using def_t = void(int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CStreaming::IsObjectInCdImage)
static int address;
static int global_address;
static const int id = 0x40E4C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40E4C0, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x48ACB5,100,0,0x48ABB0,1, 0x61DAE6,100,0,0x61D960,1>;
using def_t = bool(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::InstanceLoadedModels)
static int address;
static int global_address;
static const int id = 0x40E4E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40E4E0, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x40B3D4,100,0,0x40AF60,1>;
using def_t = void(CVector const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector const *>, 0>;
META_END

META_BEGIN_OVERLOADED(CStreaming::ProcessEntitiesInSectorList, void (*)(CPtrList *, unsigned int))
static int address;
static int global_address;
static const int id = 0x40E7B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40E7B0, 0, 0>;
// total references count: 10en (4), 11en (0), steam (0)
using refs_t = RefList<0x40EC7C,100,0,0x40EA10,1, 0x40EC88,100,0,0x40EA10,2, 0x40EC94,100,0,0x40EA10,3, 0x40ECA0,100,0,0x40EA10,4>;
using def_t = void(CPtrList *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPtrList *,unsigned int>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CStreaming::ProcessEntitiesInSectorList, void (*)(CPtrList *, float, float, float, float, float, float, unsigned int))
static int address;
static int global_address;
static const int id = 0x40E870;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40E870, 0, 0>;
// total references count: 10en (4), 11en (0), steam (0)
using refs_t = RefList<0x40ECD0,100,0,0x40EA10,1, 0x40ECF2,100,0,0x40EA10,2, 0x40ED14,100,0,0x40EA10,3, 0x40ED36,100,0,0x40EA10,4>;
using def_t = void(CPtrList *, float, float, float, float, float, float, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPtrList *,float,float,float,float,float,float,unsigned int>, 0,1,2,3,4,5,6,7>;
META_END

META_BEGIN(CStreaming::AddModelsToRequestList)
static int address;
static int global_address;
static const int id = 0x40EA10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40EA10, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x40B36B,100,0,0x40AF60,1, 0x40EEE1,100,0,0x40EE80,1>;
using def_t = void(CVector const *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector const *,unsigned int>, 0,1>;
META_END

META_BEGIN(CStreaming::RetryLoadFile)
static int address;
static int global_address;
static const int id = 0x40ED80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40ED80, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x40EE94,100,0,0x40EE80,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CStreaming::Update)
static int address;
static int global_address;
static const int id = 0x40EE80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40EE80, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4A449C,100,0,0x4A4410,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::DeleteRwObjectsInOverlapSectorList)
static int address;
static int global_address;
static const int id = 0x40F0F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40F0F0, 0, 0>;
// total references count: 10en (4), 11en (0), steam (0)
using refs_t = RefList<0x40F727,100,0,0x40F5E0,1, 0x40F85B,100,0,0x40F5E0,2, 0x40F9D4,100,0,0x40F5E0,3, 0x40FB14,100,0,0x40F5E0,4>;
using def_t = void(CPtrList *, int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPtrList *,int,int>, 0,1,2>;
META_END

META_BEGIN(CStreaming::DeleteRwObjectsAfterDeath)
static int address;
static int global_address;
static const int id = 0x40F200;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40F200, 0, 0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x42BDB3,100,0,0x42BB70,1, 0x42C19E,100,0,0x42BB70,2, 0x42C3A0,100,0,0x42BB70,3>;
using def_t = void(CVector const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector const *>, 0>;
META_END

META_BEGIN(CStreaming::DeleteAllRwObjects)
static int address;
static int global_address;
static const int id = 0x40F470;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40F470, 0, 0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x40AFCE,100,0,0x40AF60,1, 0x40FF60,100,0,0x40FEC0,1, 0x61A6DF,100,0,0x61A6C0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::DeleteFarAwayRwObjects)
static int address;
static int global_address;
static const int id = 0x40F5E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40F5E0, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x40EEED,100,0,0x40EE80,1>;
using def_t = void(CVector const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector const *>, 0>;
META_END

META_BEGIN_OVERLOADED(CStreaming::LoadCdDirectory, void (*)(char const *, int))
static int address;
static int global_address;
static const int id = 0x40FBC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40FBC0, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x40FE91,100,0,0x40FE00,1>;
using def_t = void(char const *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<char const *,int>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CStreaming::LoadCdDirectory, void (*)())
static int address;
static int global_address;
static const int id = 0x40FE00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40FE00, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x410723,100,0,0x4100A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::ReInit)
static int address;
static int global_address;
static const int id = 0x40FEC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40FEC0, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4A4812,100,0,0x4A47B0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::Shutdown)
static int address;
static int global_address;
static const int id = 0x410060;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x410060, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4A4AAD,100,0,0x4A49E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::InitChannels)
static int address;
static int global_address;
static const int id = 0x4100A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4100A0, 0, 0>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x410835,100,0,0x410800,1, 0x41087C,100,0,0x410800,2>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CStreaming::Init)
static int address;
static int global_address;
static const int id = 0x410800;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x410800, 0, 0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x48DCF8,100,0,0x48D950,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
