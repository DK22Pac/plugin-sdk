/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CGame::InitialiseOnceBeforeRW)
    static int address;
    static int global_address;
    static const int id = 0x48BB80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x48BB80, 0x48BC70, 0x48BC00>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x48E822, GAME_10EN, H_CALL, 0x48E800, 1,
        0x48E8E2, GAME_11EN, H_CALL, 0x48E8C0, 1,
        0x48E872, GAME_STEAM, H_CALL, 0x48E850, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::InitialiseRenderWare)
    static int address;
    static int global_address;
    static const int id = 0x48BBA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x48BBA0, 0x48BC90, 0x48BC20>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x48D52F, GAME_10EN, H_CALL, 0x48D520, 1,
        0x48D62F, GAME_11EN, H_CALL, 0x48D620, 1,
        0x48D5BF, GAME_STEAM, H_CALL, 0x48D5B0, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::ShutdownRenderWare)
    static int address;
    static int global_address;
    static const int id = 0x48BCB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x48BCB0, 0x48BDA0, 0x48BD30>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x48D540, GAME_10EN, H_CALL, 0x48D540, 1,
        0x48D640, GAME_11EN, H_CALL, 0x48D640, 1,
        0x48D5D0, GAME_STEAM, H_CALL, 0x48D5D0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::InitialiseOnceAfterRW)
    static int address;
    static int global_address;
    static const int id = 0x48BD50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x48BD50, 0x48BE40, 0x48BDD0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x582DA6, GAME_10EN, H_CALL, 0x582710, 1,
        0x5830E6, GAME_11EN, H_CALL, 0x582A50, 1,
        0x582FD6, GAME_STEAM, H_CALL, 0x582940, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::FinalShutdown)
    static int address;
    static int global_address;
    static const int id = 0x48BEC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x48BEC0, 0x48BFB0, 0x48BF40>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x48E8C1, GAME_10EN, H_CALL, 0x48E800, 1,
        0x48E981, GAME_11EN, H_CALL, 0x48E8C0, 1,
        0x48E911, GAME_STEAM, H_CALL, 0x48E850, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x48BED0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x48BED0, 0x48BFC0, 0x48BF50>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x48E7F6, GAME_10EN, H_CALL, 0x48E7E0, 1,
        0x48E8B6, GAME_11EN, H_CALL, 0x48E8A0, 1,
        0x48E846, GAME_STEAM, H_CALL, 0x48E830, 1>;
    using def_t = bool(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CGame::Shutdown)
    static int address;
    static int global_address;
    static const int id = 0x48C3A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x48C3A0, 0x48C490, 0x48C420>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x582FD9, GAME_10EN, H_CALL, 0x582710, 1,
        0x58301E, GAME_10EN, H_CALL, 0x582710, 2,
        0x583319, GAME_11EN, H_CALL, 0x582A50, 1,
        0x58335E, GAME_11EN, H_CALL, 0x582A50, 2,
        0x583209, GAME_STEAM, H_CALL, 0x582940, 1,
        0x58324E, GAME_STEAM, H_CALL, 0x582940, 2>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::ReInitGameObjectVariables)
    static int address;
    static int global_address;
    static const int id = 0x48C4B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x48C4B0, 0x48C5B0, 0x48C540>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x48C7BE, GAME_10EN, H_CALL, 0x48C740, 1,
        0x48C823, GAME_10EN, H_CALL, 0x48C740, 2,
        0x48C8BE, GAME_11EN, H_CALL, 0x48C840, 1,
        0x48C923, GAME_11EN, H_CALL, 0x48C840, 2,
        0x48C84E, GAME_STEAM, H_CALL, 0x48C7D0, 1,
        0x48C8B3, GAME_STEAM, H_CALL, 0x48C7D0, 2>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::ReloadIPLs)
    static int address;
    static int global_address;
    static const int id = 0x48C620;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x48C620, 0x48C720, 0x48C6B0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4879B2, GAME_10EN, H_CALL, 0x4856F0, 1,
        0x487AB2, GAME_11EN, H_CALL, 0x4857C0, 1,
        0x487AB2, GAME_STEAM, H_CALL, 0x4857C0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::ShutDownForRestart)
    static int address;
    static int global_address;
    static const int id = 0x48C6B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x48C6B0, 0x48C7B0, 0x48C740>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x48C80D, GAME_10EN, H_CALL, 0x48C740, 1,
        0x582F98, GAME_10EN, H_CALL, 0x582710, 1,
        0x48C90D, GAME_11EN, H_CALL, 0x48C840, 1,
        0x5832D8, GAME_11EN, H_CALL, 0x582A50, 1,
        0x48C89D, GAME_STEAM, H_CALL, 0x48C7D0, 1,
        0x5831C8, GAME_STEAM, H_CALL, 0x582940, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::InitialiseWhenRestarting)
    static int address;
    static int global_address;
    static const int id = 0x48C740;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x48C740, 0x48C840, 0x48C7D0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x582F9D, GAME_10EN, H_CALL, 0x582710, 1,
        0x5832DD, GAME_11EN, H_CALL, 0x582A50, 1,
        0x5831CD, GAME_STEAM, H_CALL, 0x582940, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::Process)
    static int address;
    static int global_address;
    static const int id = 0x48C850;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x48C850, 0x48C950, 0x48C8E0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x48E49B, GAME_10EN, H_CALL, 0x48E480, 1,
        0x48E55B, GAME_11EN, H_CALL, 0x48E540, 1,
        0x48E4EB, GAME_STEAM, H_CALL, 0x48E4D0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::DrasticTidyUpMemory)
    static int address;
    static int global_address;
    static const int id = 0x48CA10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x48CA10, 0x48CB10, 0x48CAA0>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x4046A2, GAME_10EN, H_CALL, 0x404650, 1,
        0x404AE2, GAME_10EN, H_CALL, 0x4048E0, 1,
        0x421A3D, GAME_10EN, H_CALL, 0x421A20, 1,
        0x4046A2, GAME_11EN, H_CALL, 0x404650, 1,
        0x404AE2, GAME_11EN, H_CALL, 0x4048E0, 1,
        0x421A3D, GAME_11EN, H_CALL, 0x421A20, 1,
        0x4046A2, GAME_STEAM, H_CALL, 0x404650, 1,
        0x404AE2, GAME_STEAM, H_CALL, 0x4048E0, 1,
        0x421A3D, GAME_STEAM, H_CALL, 0x421A20, 1>;
    using def_t = void(bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool>, 0>;
META_END

META_BEGIN(CGame::TidyUpMemory)
    static int address;
    static int global_address;
    static const int id = 0x48CA20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x48CA20, 0x48CB20, 0x48CAB0>;
    // total references count: 10en (8), 11en (8), steam (8)
    using refs_t = RefList<
        0x40B862, GAME_10EN, H_CALL, 0x40B5B0, 1,
        0x40B8DC, GAME_10EN, H_CALL, 0x40B5B0, 2,
        0x40B955, GAME_10EN, H_CALL, 0x40B900, 1,
        0x4356C7, GAME_10EN, H_CALL, 0x435690, 1,
        0x47A313, GAME_10EN, H_CALL, 0x47A230, 1,
        0x48C735, GAME_10EN, H_CALL, 0x48C6B0, 1,
        0x591B00, GAME_10EN, H_CALL, 0x591AE0, 1,
        0x591E4B, GAME_10EN, H_CALL, 0x591D60, 1,
        0x40B862, GAME_11EN, H_CALL, 0x40B5B0, 1,
        0x40B8DC, GAME_11EN, H_CALL, 0x40B5B0, 2,
        0x40B955, GAME_11EN, H_CALL, 0x40B900, 1,
        0x4356C7, GAME_11EN, H_CALL, 0x435690, 1,
        0x47A313, GAME_11EN, H_CALL, 0x47A230, 1,
        0x48C835, GAME_11EN, H_CALL, 0x48C7B0, 1,
        0x591DB0, GAME_11EN, H_CALL, 0x591D90, 1,
        0x5920FB, GAME_11EN, H_CALL, 0x592010, 1,
        0x40B862, GAME_STEAM, H_CALL, 0x40B5B0, 1,
        0x40B8DC, GAME_STEAM, H_CALL, 0x40B5B0, 2,
        0x40B955, GAME_STEAM, H_CALL, 0x40B900, 1,
        0x4356C7, GAME_STEAM, H_CALL, 0x435690, 1,
        0x47A313, GAME_STEAM, H_CALL, 0x47A230, 1,
        0x48C7C5, GAME_STEAM, H_CALL, 0x48C740, 1,
        0x591CA0, GAME_STEAM, H_CALL, 0x591C80, 1,
        0x591FEB, GAME_STEAM, H_CALL, 0x591F00, 1>;
    using def_t = void(bool, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool,bool>, 0,1>;
META_END

META_BEGIN(ValidateVersion)
    static int address;
    static int global_address;
    static const int id = 0x48BAD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x48BAD0, 0x48BBC0, 0x48BB50>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x48BB8D, GAME_10EN, H_CALL, 0x48BB80, 1,
        0x48BC7D, GAME_11EN, H_CALL, 0x48BC70, 1,
        0x48BC0D, GAME_STEAM, H_CALL, 0x48BC00, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
