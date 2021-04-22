/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(cMusicManager)
static int address;
static int global_address;
static const int id = 0x57CEE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CEE0, 0x57D230, 0x57D130>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57EAAF,100,0,0x57EAA0,1, 0x57EDFF,110,0,0x57EDF0,1, 0x57ECFF,120,0,0x57ECF0,1>;
using def_t = cMusicManager *(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::ResetMusicAfterReload)
static int address;
static int global_address;
static const int id = 0x57CF30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CF30, 0x57D280, 0x57D180>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57A826,100,0,0x57A7B0,1, 0x57AB76,110,0,0x57AB00,1, 0x57AA76,120,0,0x57AA00,1>;
using def_t = void(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::Initialise)
static int address;
static int global_address;
static const int id = 0x57CF70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CF70, 0x57D2C0, 0x57D1C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57A13A,100,0,0x57A0E0,1, 0x57A48A,110,0,0x57A430,1, 0x57A38A,120,0,0x57A330,1>;
using def_t = void(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::Terminate)
static int address;
static int global_address;
static const int id = 0x57D140;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57D140, 0x57D490, 0x57D390>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57A163,100,0,0x57A150,1, 0x57A4B3,110,0,0x57A4A0,1, 0x57A3B3,120,0,0x57A3A0,1>;
using def_t = void(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::SetRadioChannelByScript)
static int address;
static int global_address;
static const int id = 0x57D180;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57D180, 0x57D4D0, 0x57D3D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57CE96,100,0,0x57CE80,1, 0x57D1E6,110,0,0x57D1D0,1, 0x57D0E6,120,0,0x57D0D0,1>;
using def_t = void(cMusicManager *, unsigned char, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *,unsigned char,int>, 0,1,2>;
META_END

META_BEGIN(cMusicManager::GetRadioInCar)
static int address;
static int global_address;
static const int id = 0x57D1D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57D1D0, 0x57D520, 0x57D420>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57CE4C,100,0,0x57CE40,1, 0x57D19C,110,0,0x57D190,1, 0x57D09C,120,0,0x57D090,1>;
using def_t = unsigned char(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::SetRadioInCar)
static int address;
static int global_address;
static const int id = 0x57D2C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57D2C0, 0x57D610, 0x57D510>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57CE71,100,0,0x57CE60,1, 0x57D1C1,110,0,0x57D1B0,1, 0x57D0C1,120,0,0x57D0B0,1>;
using def_t = void(cMusicManager *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *,unsigned int>, 0,1>;
META_END

META_BEGIN(cMusicManager::ChangeMusicMode)
static int address;
static int global_address;
static const int id = 0x57D310;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57D310, 0x57D660, 0x57D560>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x5697EC,100,0,0x5697D0,1, 0x56982A,100,0,0x5697D0,2, 0x57CD01,100,0,0x57CCF0,1, 0x57D620,100,0,0x57D530,1, 0x569B3C,110,0,0x569B20,1, 0x569B7A,110,0,0x569B20,2, 0x57D051,110,0,0x57D040,1, 0x57D970,110,0,0x57D880,1, 0x569A3C,120,0,0x569A20,1, 0x569A7A,120,0,0x569A20,2, 0x57CF51,120,0,0x57CF40,1, 0x57D870,120,0,0x57D780,1>;
using def_t = void(cMusicManager *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *,unsigned char>, 0,1>;
META_END

META_BEGIN(cMusicManager::ResetTimers)
static int address;
static int global_address;
static const int id = 0x57D420;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57D420, 0x57D770, 0x57D670>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57A2C2,100,0,0x57A2A0,1, 0x57A612,110,0,0x57A5F0,1, 0x57A512,120,0,0x57A4F0,1>;
using def_t = void(cMusicManager *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *,unsigned int>, 0,1>;
META_END

META_BEGIN(cMusicManager::Service)
static int address;
static int global_address;
static const int id = 0x57D440;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57D440, 0x57D790, 0x57D690>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57A2FA,100,0,0x57A2A0,1, 0x57A64A,110,0,0x57A5F0,1, 0x57A54A,120,0,0x57A4F0,1>;
using def_t = void(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::ServiceFrontEndMode)
static int address;
static int global_address;
static const int id = 0x57D530;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57D530, 0x57D880, 0x57D780>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57D512,100,0,0x57D440,1, 0x57D862,110,0,0x57D790,1, 0x57D762,120,0,0x57D690,1>;
using def_t = void(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::ServiceGameMode)
static int address;
static int global_address;
static const int id = 0x57D690;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57D690, 0x57D9E0, 0x57D8E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57D51B,100,0,0x57D440,1, 0x57D86B,110,0,0x57D790,1, 0x57D76B,120,0,0x57D690,1>;
using def_t = void(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::ServiceAmbience)
static int address;
static int global_address;
static const int id = 0x57DCB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57DCB0, 0x57E000, 0x57DF00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57DC95,100,0,0x57D690,1, 0x57DFE5,110,0,0x57D9E0,1, 0x57DEE5,120,0,0x57D8E0,1>;
using def_t = void(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::ComputeAmbienceVol)
static int address;
static int global_address;
static const int id = 0x57DEA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57DEA0, 0x57E1F0, 0x57E0F0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x57DE1E,100,0,0x57DCB0,1, 0x57DE4A,100,0,0x57DCB0,2, 0x57E16E,110,0,0x57E000,1, 0x57E19A,110,0,0x57E000,2, 0x57E06E,120,0,0x57DF00,1, 0x57E09A,120,0,0x57DF00,2>;
using def_t = void(cMusicManager *, unsigned char, unsigned char &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *,unsigned char,unsigned char &>, 0,1,2>;
META_END

META_BEGIN(cMusicManager::ServiceAnnouncement)
static int address;
static int global_address;
static const int id = 0x57DFC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57DFC0, 0x57E310, 0x57E210>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57D7B0,100,0,0x57D690,1, 0x57DB00,110,0,0x57D9E0,1, 0x57DA00,120,0,0x57D8E0,1>;
using def_t = bool(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::ServiceTrack)
static int address;
static int global_address;
static const int id = 0x57E100;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57E100, 0x57E450, 0x57E350>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x57D8EB,100,0,0x57D690,1, 0x57DE88,100,0,0x57DCB0,1, 0x57DC3B,110,0,0x57D9E0,1, 0x57E1D8,110,0,0x57E000,1, 0x57DB3B,120,0,0x57D8E0,1, 0x57E0D8,120,0,0x57DF00,1>;
using def_t = void(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::ChangeRadioChannel)
static int address;
static int global_address;
static const int id = 0x57E130;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57E130, 0x57E480, 0x57E380>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x57D8E0,100,0,0x57D690,1, 0x57DC4A,100,0,0x57D690,2, 0x57DC30,110,0,0x57D9E0,1, 0x57DF9A,110,0,0x57D9E0,2, 0x57DB30,120,0,0x57D8E0,1, 0x57DE9A,120,0,0x57D8E0,2>;
using def_t = bool(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::PreloadCutSceneMusic)
static int address;
static int global_address;
static const int id = 0x57E210;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57E210, 0x57E560, 0x57E460>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57CD21,100,0,0x57CD10,1, 0x57D071,110,0,0x57D060,1, 0x57CF71,120,0,0x57CF60,1>;
using def_t = void(cMusicManager *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *,unsigned char>, 0,1>;
META_END

META_BEGIN(cMusicManager::PlayPreloadedCutSceneMusic)
static int address;
static int global_address;
static const int id = 0x57E290;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57E290, 0x57E5E0, 0x57E4E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57CD3C,100,0,0x57CD30,1, 0x57D08C,110,0,0x57D080,1, 0x57CF8C,120,0,0x57CF80,1>;
using def_t = void(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::StopCutSceneMusic)
static int address;
static int global_address;
static const int id = 0x57E2B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57E2B0, 0x57E600, 0x57E500>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57CD5C,100,0,0x57CD50,1, 0x57D0AC,110,0,0x57D0A0,1, 0x57CFAC,120,0,0x57CFA0,1>;
using def_t = void(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::PlayFrontEndTrack)
static int address;
static int global_address;
static const int id = 0x57E2E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57E2E0, 0x57E630, 0x57E530>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57CC96,100,0,0x57CC80,1, 0x57CFE6,110,0,0x57CFD0,1, 0x57CEE6,120,0,0x57CED0,1>;
using def_t = void(cMusicManager *, unsigned char, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *,unsigned char,unsigned char>, 0,1,2>;
META_END

META_BEGIN(cMusicManager::StopFrontEndTrack)
static int address;
static int global_address;
static const int id = 0x57E3D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57E3D0, 0x57E720, 0x57E620>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x56981E,100,0,0x5697D0,1, 0x57CCBC,100,0,0x57CCB0,1, 0x569B6E,110,0,0x569B20,1, 0x57D00C,110,0,0x57D000,1, 0x569A6E,120,0,0x569A20,1, 0x57CF0C,120,0,0x57CF00,1>;
using def_t = void(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::PlayAnnouncement)
static int address;
static int global_address;
static const int id = 0x57E430;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57E430, 0x57E780, 0x57E680>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57CC71,100,0,0x57CC60,1, 0x57CFC1,110,0,0x57CFB0,1, 0x57CEC1,120,0,0x57CEB0,1>;
using def_t = void(cMusicManager *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *,unsigned char>, 0,1>;
META_END

META_BEGIN(cMusicManager::GetTrackStartPos)
static int address;
static int global_address;
static const int id = 0x57E450;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57E450, 0x57E7A0, 0x57E6A0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x57D59C,100,0,0x57D530,1, 0x57DDDD,100,0,0x57DCB0,1, 0x57E19E,100,0,0x57E130,1, 0x57D8EC,110,0,0x57D880,1, 0x57E12D,110,0,0x57E000,1, 0x57E4EE,110,0,0x57E480,1, 0x57D7EC,120,0,0x57D780,1, 0x57E02D,120,0,0x57DF00,1, 0x57E3EE,120,0,0x57E380,1>;
using def_t = unsigned int(cMusicManager *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *,unsigned char>, 0,1>;
META_END

META_BEGIN(cMusicManager::PlayerInCar)
static int address;
static int global_address;
static const int id = 0x57E4B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57E4B0, 0x57E800, 0x57E700>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x57D1DD,100,0,0x57D1D0,1, 0x57D2CE,100,0,0x57D2C0,1, 0x57D6B9,100,0,0x57D690,1, 0x57E732,100,0,0x57E6D0,1, 0x57D52D,110,0,0x57D520,1, 0x57D61E,110,0,0x57D610,1, 0x57DA09,110,0,0x57D9E0,1, 0x57EA82,110,0,0x57EA20,1, 0x57D42D,120,0,0x57D420,1, 0x57D51E,120,0,0x57D510,1, 0x57D909,120,0,0x57D8E0,1, 0x57E982,120,0,0x57E920,1>;
using def_t = bool(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::GetCarTuning)
static int address;
static int global_address;
static const int id = 0x57E530;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57E530, 0x57E880, 0x57E780>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x57D7D8,100,0,0x57D690,1, 0x57DC3A,100,0,0x57D690,2, 0x57DB28,110,0,0x57D9E0,1, 0x57DF8A,110,0,0x57D9E0,2, 0x57DA28,120,0,0x57D8E0,1, 0x57DE8A,120,0,0x57D8E0,2>;
using def_t = unsigned char(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::GetNextCarTuning)
static int address;
static int global_address;
static const int id = 0x57E5A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57E5A0, 0x57E8F0, 0x57E7F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57D899,100,0,0x57D690,1, 0x57DBE9,110,0,0x57D9E0,1, 0x57DAE9,120,0,0x57D8E0,1>;
using def_t = unsigned char(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

META_BEGIN(cMusicManager::UsesPoliceRadio)
static int address;
static int global_address;
static const int id = 0x57E6A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57E6A0, 0x57E9F0, 0x57E8F0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x57D1F8,100,0,0x57D1D0,1, 0x57D2E5,100,0,0x57D2C0,1, 0x57D720,100,0,0x57D690,1, 0x57DBC9,100,0,0x57D690,2, 0x57E542,100,0,0x57E530,1, 0x57E5B6,100,0,0x57E5A0,1, 0x57D548,110,0,0x57D520,1, 0x57D635,110,0,0x57D610,1, 0x57DA70,110,0,0x57D9E0,1, 0x57DF19,110,0,0x57D9E0,2, 0x57E892,110,0,0x57E880,1, 0x57E906,110,0,0x57E8F0,1, 0x57D448,120,0,0x57D420,1, 0x57D535,120,0,0x57D510,1, 0x57D970,120,0,0x57D8E0,1, 0x57DE19,120,0,0x57D8E0,2, 0x57E792,120,0,0x57E780,1, 0x57E806,120,0,0x57E7F0,1>;
using def_t = bool(cMusicManager *, CVehicle *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *,CVehicle *>, 0,1>;
META_END

META_BEGIN(cMusicManager::DisplayRadioStationName)
static int address;
static int global_address;
static const int id = 0x57E6D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57E6D0, 0x57EA20, 0x57E920>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E400,100,0,0x48E0E0,1, 0x48E4C0,110,0,0x48E1A0,1, 0x48E450,120,0,0x48E130,1>;
using def_t = void(cMusicManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cMusicManager *>, 0>;
META_END

template<>
struct stack_object<cMusicManager> : stack_object_no_default<cMusicManager> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<cMusicManager *>(ctor_gaddr(cMusicManager), reinterpret_cast<cMusicManager *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline cMusicManager *operator_new<cMusicManager>() {
    void *objData = operator new(sizeof(cMusicManager)); 
    cMusicManager *obj = reinterpret_cast<cMusicManager *>(objData);
    plugin::CallMethodDynGlobal<cMusicManager *>(ctor_gaddr(cMusicManager), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline cMusicManager *operator_new_array<cMusicManager>(unsigned int objCount) {
    void *objData = operator new(sizeof(cMusicManager) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    cMusicManager *objArray = reinterpret_cast<cMusicManager *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<cMusicManager *>(ctor_gaddr(cMusicManager), &objArray[i]);
    return objArray;
}

}
