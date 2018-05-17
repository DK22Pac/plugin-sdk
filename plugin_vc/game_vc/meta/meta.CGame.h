/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CGame::CanSeeWaterFromCurrArea)
    static int address;
    static int global_address;
    static const int id = 0x4A4360;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A4360, 0x4A4380, 0x4A4220>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x5BFF22, GAME_10EN, H_CALL, 0x5BFF00, 1,
        0x5C172E, GAME_10EN, H_CALL, 0x5C1710, 1,
        0x5BFF42, GAME_11EN, H_CALL, 0x5BFF20, 1,
        0x5C174E, GAME_11EN, H_CALL, 0x5C1730, 1,
        0x5BFD52, GAME_STEAM, H_CALL, 0x5BFD30, 1,
        0x5C155E, GAME_STEAM, H_CALL, 0x5C1540, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::CanSeeOutSideFromCurrArea)
    static int address;
    static int global_address;
    static const int id = 0x4A4390;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A4390, 0x4A43B0, 0x4A4250>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x53FC5A, GAME_10EN, H_CALL, 0x53FC50, 1,
        0x53FC7A, GAME_11EN, H_CALL, 0x53FC70, 1,
        0x53FB4A, GAME_STEAM, H_CALL, 0x53FB40, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::TidyUpMemory)
    static int address;
    static int global_address;
    static const int id = 0x4A43D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A43D0, 0x4A43F0, 0x4A4290>;
    // total references count: 10en (5), 11en (5), steam (5)
    using refs_t = RefList<
        0x40E135, GAME_10EN, H_CALL, 0x40DFB0, 1,
        0x40E23B, GAME_10EN, H_CALL, 0x40DFB0, 2,
        0x4A3A92, GAME_10EN, H_CALL, 0x4A3A13, 1,
        0x61A6B0, GAME_10EN, H_CALL, 0x61A690, 1,
        0x61C3DD, GAME_10EN, H_CALL, 0x61A700, 1,
        0x40E135, GAME_11EN, H_CALL, 0x40DFB0, 1,
        0x40E23B, GAME_11EN, H_CALL, 0x40DFB0, 2,
        0x4A3AB3, GAME_11EN, H_CALL, 0x4A3A34, 1,
        0x61A690, GAME_11EN, H_CALL, 0x61A670, 1,
        0x61C3BD, GAME_11EN, H_CALL, 0x61A6E0, 1,
        0x40E135, GAME_STEAM, H_CALL, 0x40DFB0, 1,
        0x40E23B, GAME_STEAM, H_CALL, 0x40DFB0, 2,
        0x4A3951, GAME_STEAM, H_CALL, 0x4A38D2, 1,
        0x61A2D0, GAME_STEAM, H_CALL, 0x61A2B0, 1,
        0x61BFFB, GAME_STEAM, H_CALL, 0x61A320, 1>;
    using def_t = void(bool, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<bool,bool>, 0,1>;
META_END

META_BEGIN(CGame::DrasticTidyUpMemory)
    static int address;
    static int global_address;
    static const int id = 0x4A43F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A43F0, 0x4A4410, 0x4A42B0>;
    // total references count: 10en (6), 11en (6), steam (6)
    using refs_t = RefList<
        0x406BEA, GAME_10EN, H_CALL, 0x4069D0, 1,
        0x406D7B, GAME_10EN, H_CALL, 0x406D30, 1,
        0x40738A, GAME_10EN, H_CALL, 0x407090, 1,
        0x42BDC0, GAME_10EN, H_CALL, 0x42BB70, 1,
        0x42C1AB, GAME_10EN, H_CALL, 0x42BB70, 2,
        0x42C3AD, GAME_10EN, H_CALL, 0x42BB70, 3,
        0x406BEA, GAME_11EN, H_CALL, 0x4069D0, 1,
        0x406D7B, GAME_11EN, H_CALL, 0x406D30, 1,
        0x40738A, GAME_11EN, H_CALL, 0x407090, 1,
        0x42BDC0, GAME_11EN, H_CALL, 0x42BB70, 1,
        0x42C1AB, GAME_11EN, H_CALL, 0x42BB70, 2,
        0x42C3AD, GAME_11EN, H_CALL, 0x42BB70, 3,
        0x406BEA, GAME_STEAM, H_CALL, 0x4069D0, 1,
        0x406D7B, GAME_STEAM, H_CALL, 0x406D30, 1,
        0x40738A, GAME_STEAM, H_CALL, 0x407090, 1,
        0x42BD90, GAME_STEAM, H_CALL, 0x42BB40, 1,
        0x42C17B, GAME_STEAM, H_CALL, 0x42BB40, 2,
        0x42C37D, GAME_STEAM, H_CALL, 0x42BB40, 3>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::Process)
    static int address;
    static int global_address;
    static const int id = 0x4A4410;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A4410, 0x4A4430, 0x4A42D0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A5DA0, GAME_10EN, H_CALL, 0x4A5D80, 1,
        0x4A5DC0, GAME_11EN, H_CALL, 0x4A5DA0, 1,
        0x4A5C70, GAME_STEAM, H_CALL, 0x4A5C50, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::InitialiseWhenRestarting)
    static int address;
    static int global_address;
    static const int id = 0x4A4670;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A4670, 0x4A4690, 0x4A44F0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x600547, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x600567, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x6001A7, GAME_STEAM, H_CALL, 0x5FF710, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::ShutDownForRestart)
    static int address;
    static int global_address;
    static const int id = 0x4A47B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A47B0, 0x4A47D0, 0x4A4670>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x4A4762, GAME_10EN, H_CALL, 0x4A4670, 1,
        0x600542, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x4A4782, GAME_11EN, H_CALL, 0x4A4690, 1,
        0x600562, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x4A461E, GAME_STEAM, H_CALL, 0x4A44F0, 1,
        0x6001A2, GAME_STEAM, H_CALL, 0x5FF710, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::ReInitGameObjectVariables)
    static int address;
    static int global_address;
    static const int id = 0x4A4850;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A4850, 0x4A4870, 0x4A4710>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x4A46F1, GAME_10EN, H_CALL, 0x4A4670, 1,
        0x4A4778, GAME_10EN, H_CALL, 0x4A4670, 2,
        0x4A4711, GAME_11EN, H_CALL, 0x4A4690, 1,
        0x4A4798, GAME_11EN, H_CALL, 0x4A4690, 2,
        0x4A4571, GAME_STEAM, H_CALL, 0x4A44F0, 1,
        0x4A4634, GAME_STEAM, H_CALL, 0x4A44F0, 2>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::Shutdown)
    static int address;
    static int global_address;
    static const int id = 0x4A49E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A49E0, 0x4A4A00, 0x4A48A0>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x60057D, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x6005C9, GAME_10EN, H_CALL, 0x5FFAB0, 2,
        0x60059D, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x6005E9, GAME_11EN, H_CALL, 0x5FFAD0, 2,
        0x6001DD, GAME_STEAM, H_CALL, 0x5FF710, 1,
        0x600229, GAME_STEAM, H_CALL, 0x5FF710, 2>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x4A4B10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A4B10, 0x4A4B30, 0x4A49D0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A5C56, GAME_10EN, H_CALL, 0x4A5C40, 1,
        0x4A5C76, GAME_11EN, H_CALL, 0x4A5C60, 1,
        0x4A5B26, GAME_STEAM, H_CALL, 0x4A5B10, 1>;
    using def_t = bool(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CGame::InitAfterLostFocus)
    static int address;
    static int global_address;
    static const int id = 0x4A4FD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A4FD0, 0x4A4FF0, 0x4A4EA0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x6013C2, GAME_10EN, H_CALL, 0x6010B0, 1,
        0x6013F2, GAME_11EN, H_CALL, 0x6010E0, 1,
        0x601032, GAME_STEAM, H_CALL, 0x600D20, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::FinalShutdown)
    static int address;
    static int global_address;
    static const int id = 0x4A5010;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A5010, 0x4A5030, 0x4A4EE0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A5BA4, GAME_10EN, H_CALL, 0x4A5AD0, 1,
        0x4A5BC4, GAME_11EN, H_CALL, 0x4A5AF0, 1,
        0x4A5A74, GAME_STEAM, H_CALL, 0x4A59A0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::InitialiseOnceAfterRW)
    static int address;
    static int global_address;
    static const int id = 0x4A5020;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A5020, 0x4A5040, 0x4A4EF0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x60033A, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x60035A, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x5FFF9A, GAME_STEAM, H_CALL, 0x5FF710, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::ShutdownRenderWare)
    static int address;
    static int global_address;
    static const int id = 0x4A5110;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A5110, 0x4A5130, 0x4A4FE0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A5B8E, GAME_10EN, H_CALL, 0x4A5AD0, 1,
        0x4A5BAE, GAME_11EN, H_CALL, 0x4A5AF0, 1,
        0x4A5A5E, GAME_STEAM, H_CALL, 0x4A59A0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::InitialiseRenderWare)
    static int address;
    static int global_address;
    static const int id = 0x4A51A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A51A0, 0x4A51C0, 0x4A5070>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A5B6B, GAME_10EN, H_CALL, 0x4A5AD0, 1,
        0x4A5B8B, GAME_11EN, H_CALL, 0x4A5AF0, 1,
        0x4A5A3B, GAME_STEAM, H_CALL, 0x4A59A0, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGame::InitialiseOnceBeforeRW)
    static int address;
    static int global_address;
    static const int id = 0x4A52C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A52C0, 0x4A52E0, 0x4A5190>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A5AF2, GAME_10EN, H_CALL, 0x4A5AD0, 1,
        0x4A5B12, GAME_11EN, H_CALL, 0x4A5AF0, 1,
        0x4A59C2, GAME_STEAM, H_CALL, 0x4A59A0, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(ValidateVersion)
    static int address;
    static int global_address;
    static const int id = 0x4A5320;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A5320, 0x4A5340, 0x4A51F0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A51A3, GAME_10EN, H_CALL, 0x4A51A0, 1,
        0x4A51C3, GAME_11EN, H_CALL, 0x4A51C0, 1,
        0x4A5073, GAME_STEAM, H_CALL, 0x4A5070, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
