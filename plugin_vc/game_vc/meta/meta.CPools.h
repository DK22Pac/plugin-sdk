/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPools::MakeSureSlotInObjectPoolIsEmpty)
    static int address;
    static int global_address;
    static const int id = 0x4BEA80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4BEA80, 0x4BEAA0, 0x4BE950>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x43D417, GAME_10EN, H_CALL, 0x43D3B0, 1,
        0x43D428, GAME_10EN, H_CALL, 0x43D3B0, 2,
        0x43D417, GAME_11EN, H_CALL, 0x43D3B0, 1,
        0x43D428, GAME_11EN, H_CALL, 0x43D3B0, 2,
        0x43D387, GAME_STEAM, H_CALL, 0x43D320, 1,
        0x43D398, GAME_STEAM, H_CALL, 0x43D320, 2>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPools::LoadPedPool)
    static int address;
    static int global_address;
    static const int id = 0x4BEB50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4BEB50, 0x4BEB70, 0x4BEA20>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x61ABBA, GAME_10EN, H_CALL, 0x61A700, 1,
        0x61AB9A, GAME_11EN, H_CALL, 0x61A6E0, 1,
        0x61A7DA, GAME_STEAM, H_CALL, 0x61A320, 1>;
    using def_t = void(unsigned char *, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int>, 0,1>;
META_END

META_BEGIN(CPools::SavePedPool)
    static int address;
    static int global_address;
    static const int id = 0x4BEDC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4BEDC0, 0x4BEDE0, 0x4BEC90>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x61C7EC, GAME_10EN, H_CALL, 0x61C420, 1,
        0x61C7CC, GAME_11EN, H_CALL, 0x61C400, 1,
        0x61C430, GAME_STEAM, H_CALL, 0x61C040, 1>;
    using def_t = void(unsigned char *, unsigned int *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int *>, 0,1>;
META_END

META_BEGIN(CPools::LoadObjectPool)
    static int address;
    static int global_address;
    static const int id = 0x4BEF70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4BEF70, 0x4BEF90, 0x4BEE40>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x61B03C, GAME_10EN, H_CALL, 0x61A700, 1,
        0x61B01C, GAME_11EN, H_CALL, 0x61A6E0, 1,
        0x61AC5C, GAME_STEAM, H_CALL, 0x61A320, 1>;
    using def_t = void(unsigned char *, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int>, 0,1>;
META_END

META_BEGIN(CPools::SaveObjectPool)
    static int address;
    static int global_address;
    static const int id = 0x4BF420;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4BF420, 0x4BF440, 0x4BF2F0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x61C9E2, GAME_10EN, H_CALL, 0x61C420, 1,
        0x61C9C2, GAME_11EN, H_CALL, 0x61C400, 1,
        0x61C622, GAME_STEAM, H_CALL, 0x61C040, 1>;
    using def_t = void(unsigned char *, unsigned int *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int *>, 0,1>;
META_END

META_BEGIN(CPools::SaveVehiclePool)
    static int address;
    static int global_address;
    static const int id = 0x4BF6D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4BF6D0, 0x4BF6F0, 0x4BF5A0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x61C962, GAME_10EN, H_CALL, 0x61C420, 1,
        0x61C942, GAME_11EN, H_CALL, 0x61C400, 1,
        0x61C5A2, GAME_STEAM, H_CALL, 0x61C040, 1>;
    using def_t = void(unsigned char *, unsigned int *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int *>, 0,1>;
META_END

META_BEGIN(CPools::LoadVehiclePool)
    static int address;
    static int global_address;
    static const int id = 0x4BF9A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4BF9A0, 0x4BF9C0, 0x4BF870>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x61AF12, GAME_10EN, H_CALL, 0x61A700, 1,
        0x61AEF2, GAME_11EN, H_CALL, 0x61A6E0, 1,
        0x61AB32, GAME_STEAM, H_CALL, 0x61A320, 1>;
    using def_t = void(unsigned char *, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int>, 0,1>;
META_END

META_BEGIN(CPools::GetObject)
    static int address;
    static int global_address;
    static const int id = 0x4BFF80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4BFF80, 0x4BFFA0, 0x4BFE50>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4F49E7, GAME_10EN, H_CALL, 0x4F4950, 1,
        0x4F4A07, GAME_11EN, H_CALL, 0x4F4970, 1,
        0x4F48A7, GAME_STEAM, H_CALL, 0x4F4810, 1>;
    using def_t = CObject *(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPools::GetObjectRef)
    static int address;
    static int global_address;
    static const int id = 0x4BFFA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4BFFA0, 0x4BFFC0, 0x4BFE70>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x48A10A, GAME_10EN, H_CALL, 0x48A0D0, 1,
        0x48A11A, GAME_11EN, H_CALL, 0x48A0E0, 1,
        0x489FFA, GAME_STEAM, H_CALL, 0x489FC0, 1>;
    using def_t = int(CObject *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CObject *>, 0>;
META_END

META_BEGIN(CPools::GetVehicle)
    static int address;
    static int global_address;
    static const int id = 0x4BFFC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4BFFC0, 0x4BFFE0, 0x4BFE90>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4F49DC, GAME_10EN, H_CALL, 0x4F4950, 1,
        0x4F49FC, GAME_11EN, H_CALL, 0x4F4970, 1,
        0x4F489C, GAME_STEAM, H_CALL, 0x4F4810, 1>;
    using def_t = CVehicle *(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPools::GetVehicleRef)
    static int address;
    static int global_address;
    static const int id = 0x4BFFE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4BFFE0, 0x4C0000, 0x4BFEB0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x48A0FC, GAME_10EN, H_CALL, 0x48A0D0, 1,
        0x48A10C, GAME_11EN, H_CALL, 0x48A0E0, 1,
        0x489FEC, GAME_STEAM, H_CALL, 0x489FC0, 1>;
    using def_t = int(CVehicle *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CPools::GetPed)
    static int address;
    static int global_address;
    static const int id = 0x4C0000;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4C0000, 0x4C0020, 0x4BFED0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x466C37, GAME_10EN, H_CALL, 0x466C10, 1,
        0x4F49D1, GAME_10EN, H_CALL, 0x4F4950, 1,
        0x50BEE6, GAME_10EN, H_CALL, 0x50BE00, 1,
        0x50C037, GAME_10EN, H_CALL, 0x50BE00, 2,
        0x466C37, GAME_11EN, H_CALL, 0x466C10, 1,
        0x4F49F1, GAME_11EN, H_CALL, 0x4F4970, 1,
        0x50BF06, GAME_11EN, H_CALL, 0x50BE20, 1,
        0x50C057, GAME_11EN, H_CALL, 0x50BE20, 2,
        0x466B17, GAME_STEAM, H_CALL, 0x466AF0, 1,
        0x4F4891, GAME_STEAM, H_CALL, 0x4F4810, 1,
        0x50BDA6, GAME_STEAM, H_CALL, 0x50BCC0, 1,
        0x50BEF7, GAME_STEAM, H_CALL, 0x50BCC0, 2>;
    using def_t = CPed *(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPools::GetPedRef)
    static int address;
    static int global_address;
    static const int id = 0x4C0020;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4C0020, 0x4C0040, 0x4BFEF0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x48A0EE, GAME_10EN, H_CALL, 0x48A0D0, 1,
        0x48A0FE, GAME_11EN, H_CALL, 0x48A0E0, 1,
        0x489FDE, GAME_STEAM, H_CALL, 0x489FC0, 1>;
    using def_t = int(CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed *>, 0>;
META_END

META_BEGIN(CPools::CheckPoolsEmpty)
    static int address;
    static int global_address;
    static const int id = 0x4C0040;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4C0040, 0x4C0060, 0x4BFF10>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4DB57F, GAME_10EN, H_CALL, 0x4DB4A0, 1,
        0x4DB59F, GAME_11EN, H_CALL, 0x4DB4C0, 1,
        0x4DB43F, GAME_STEAM, H_CALL, 0x4DB360, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPools::ShutDown)
    static int address;
    static int global_address;
    static const int id = 0x4C0070;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4C0070, 0x4C0090, 0x4BFF40>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A4AE4, GAME_10EN, H_CALL, 0x4A49E0, 1,
        0x4A4B04, GAME_11EN, H_CALL, 0x4A4A00, 1,
        0x4A49A4, GAME_STEAM, H_CALL, 0x4A48A0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPools::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x4C0270;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4C0270, 0x4C0290, 0x4C0140>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A4B28, GAME_10EN, H_CALL, 0x4A4B10, 1,
        0x4A4B48, GAME_11EN, H_CALL, 0x4A4B30, 1,
        0x4A49E8, GAME_STEAM, H_CALL, 0x4A49D0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
