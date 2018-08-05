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

META_BEGIN(AppEventHandler)
    static int address;
    static int global_address;
    static const int id = 0x4A5AD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A5AD0, 0x4A5AF0, 0x4A59A0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x602EEC, GAME_10EN, H_CALL, 0x602EE0, 1,
        0x602ECC, GAME_11EN, H_CALL, 0x602EC0, 1,
        0x602B0C, GAME_STEAM, H_CALL, 0x602B00, 1>;
    using def_t = RsEventStatus(RsEvent, void *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<RsEvent,void *>, 0,1>;
META_END

META_BEGIN(InitialiseGame)
    static int address;
    static int global_address;
    static const int id = 0x4A5C40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A5C40, 0x4A5C60, 0x4A5B10>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x600411, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x600431, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x600071, GAME_STEAM, H_CALL, 0x5FF710, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(FrontendIdle)
    static int address;
    static int global_address;
    static const int id = 0x4A5C60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A5C60, 0x4A5C80, 0x4A5B30>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A5BF2, GAME_10EN, H_CALL, 0x4A5AD0, 1,
        0x4A5C12, GAME_11EN, H_CALL, 0x4A5AF0, 1,
        0x4A5AC2, GAME_STEAM, H_CALL, 0x4A59A0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(Idle)
    static int address;
    static int global_address;
    static const int id = 0x4A5D80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A5D80, 0x4A5DA0, 0x4A5C50>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A5BE0, GAME_10EN, H_CALL, 0x4A5AD0, 1,
        0x4A5C00, GAME_11EN, H_CALL, 0x4A5AF0, 1,
        0x4A5AB0, GAME_STEAM, H_CALL, 0x4A59A0, 1>;
    using def_t = void(void *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<void *>, 0>;
META_END

META_BEGIN(Render2dStuff)
    static int address;
    static int global_address;
    static const int id = 0x4A6190;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A6190, 0x4A61B0, 0x4A6060>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A608E, GAME_10EN, H_CALL, 0x4A5D80, 1,
        0x4A60AE, GAME_11EN, H_CALL, 0x4A5DA0, 1,
        0x4A5F5E, GAME_STEAM, H_CALL, 0x4A5C50, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(RenderEffects)
    static int address;
    static int global_address;
    static const int id = 0x4A6510;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A6510, 0x4A6530, 0x4A63E0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A604F, GAME_10EN, H_CALL, 0x4A5D80, 1,
        0x4A606F, GAME_11EN, H_CALL, 0x4A5DA0, 1,
        0x4A5F1F, GAME_STEAM, H_CALL, 0x4A5C50, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(RenderScene)
    static int address;
    static int global_address;
    static const int id = 0x4A6570;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A6570, 0x4A6590, 0x4A6440>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A604A, GAME_10EN, H_CALL, 0x4A5D80, 1,
        0x4A606A, GAME_11EN, H_CALL, 0x4A5DA0, 1,
        0x4A5F1A, GAME_STEAM, H_CALL, 0x4A5C50, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(ProcessSlowMode)
    static int address;
    static int global_address;
    static const int id = 0x4A65D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A65D0, 0x4A65F0, 0x4A64A0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A6177, GAME_10EN, H_CALL, 0x4A5D80, 1,
        0x4A6197, GAME_11EN, H_CALL, 0x4A5DA0, 1,
        0x4A6047, GAME_STEAM, H_CALL, 0x4A5C50, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(LoadingScreen)
    static int address;
    static int global_address;
    static const int id = 0x4A69D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A69D0, 0x4A69F0, 0x4A68A0>;
    // total references count: 10en (34), 11en (34), steam (34)
    using refs_t = RefList<
        0x48DA33, GAME_10EN, H_CALL, 0x48D950, 1,
        0x48DAF9, GAME_10EN, H_CALL, 0x48D950, 2,
        0x48DB61, GAME_10EN, H_CALL, 0x48D950, 3,
        0x48DC19, GAME_10EN, H_CALL, 0x48D950, 4,
        0x48DC79, GAME_10EN, H_CALL, 0x48D950, 5,
        0x48DCE5, GAME_10EN, H_CALL, 0x48D950, 6,
        0x48DD54, GAME_10EN, H_CALL, 0x48D950, 7,
        0x4A4B5E, GAME_10EN, H_CALL, 0x4A4B10, 1,
        0x4A4B95, GAME_10EN, H_CALL, 0x4A4B10, 2,
        0x4A4BD6, GAME_10EN, H_CALL, 0x4A4B10, 3,
        0x4A4CB2, GAME_10EN, H_CALL, 0x4A4B10, 4,
        0x4A4CDA, GAME_10EN, H_CALL, 0x4A4B10, 5,
        0x4A4D21, GAME_10EN, H_CALL, 0x4A4B10, 6,
        0x4A4D56, GAME_10EN, H_CALL, 0x4A4B10, 7,
        0x4A4DB2, GAME_10EN, H_CALL, 0x4A4B10, 8,
        0x4A4DE7, GAME_10EN, H_CALL, 0x4A4B10, 9,
        0x4A4E00, GAME_10EN, H_CALL, 0x4A4B10, 10,
        0x4A4E23, GAME_10EN, H_CALL, 0x4A4B10, 11,
        0x4A4E41, GAME_10EN, H_CALL, 0x4A4B10, 12,
        0x4A4E8E, GAME_10EN, H_CALL, 0x4A4B10, 13,
        0x4A4EAC, GAME_10EN, H_CALL, 0x4A4B10, 14,
        0x4A4F0C, GAME_10EN, H_CALL, 0x4A4B10, 15,
        0x4A4F20, GAME_10EN, H_CALL, 0x4A4B10, 16,
        0x4A4F4F, GAME_10EN, H_CALL, 0x4A4B10, 17,
        0x4A4F77, GAME_10EN, H_CALL, 0x4A4B10, 18,
        0x4A53C0, GAME_10EN, H_CALL, 0x4A5320, 1,
        0x4A5C49, GAME_10EN, H_CALL, 0x4A5C40, 1,
        0x600321, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x600332, GAME_10EN, H_CALL, 0x5FFAB0, 2,
        0x600365, GAME_10EN, H_CALL, 0x5FFAB0, 3,
        0x600376, GAME_10EN, H_CALL, 0x5FFAB0, 4,
        0x61DA3F, GAME_10EN, H_CALL, 0x61D960, 1,
        0x61DBFF, GAME_10EN, H_CALL, 0x61D960, 2,
        0x61DD8F, GAME_10EN, H_CALL, 0x61D960, 3,
        0x48DA43, GAME_11EN, H_CALL, 0x48D960, 1,
        0x48DB09, GAME_11EN, H_CALL, 0x48D960, 2,
        0x48DB71, GAME_11EN, H_CALL, 0x48D960, 3,
        0x48DC29, GAME_11EN, H_CALL, 0x48D960, 4,
        0x48DC89, GAME_11EN, H_CALL, 0x48D960, 5,
        0x48DCF5, GAME_11EN, H_CALL, 0x48D960, 6,
        0x48DD64, GAME_11EN, H_CALL, 0x48D960, 7,
        0x4A4B7E, GAME_11EN, H_CALL, 0x4A4B30, 1,
        0x4A4BB5, GAME_11EN, H_CALL, 0x4A4B30, 2,
        0x4A4BF6, GAME_11EN, H_CALL, 0x4A4B30, 3,
        0x4A4CD2, GAME_11EN, H_CALL, 0x4A4B30, 4,
        0x4A4CFA, GAME_11EN, H_CALL, 0x4A4B30, 5,
        0x4A4D41, GAME_11EN, H_CALL, 0x4A4B30, 6,
        0x4A4D76, GAME_11EN, H_CALL, 0x4A4B30, 7,
        0x4A4DD2, GAME_11EN, H_CALL, 0x4A4B30, 8,
        0x4A4E07, GAME_11EN, H_CALL, 0x4A4B30, 9,
        0x4A4E20, GAME_11EN, H_CALL, 0x4A4B30, 10,
        0x4A4E43, GAME_11EN, H_CALL, 0x4A4B30, 11,
        0x4A4E61, GAME_11EN, H_CALL, 0x4A4B30, 12,
        0x4A4EAE, GAME_11EN, H_CALL, 0x4A4B30, 13,
        0x4A4ECC, GAME_11EN, H_CALL, 0x4A4B30, 14,
        0x4A4F2C, GAME_11EN, H_CALL, 0x4A4B30, 15,
        0x4A4F40, GAME_11EN, H_CALL, 0x4A4B30, 16,
        0x4A4F6F, GAME_11EN, H_CALL, 0x4A4B30, 17,
        0x4A4F97, GAME_11EN, H_CALL, 0x4A4B30, 18,
        0x4A53E0, GAME_11EN, H_CALL, 0x4A5340, 1,
        0x4A5C69, GAME_11EN, H_CALL, 0x4A5C60, 1,
        0x600341, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x600352, GAME_11EN, H_CALL, 0x5FFAD0, 2,
        0x600385, GAME_11EN, H_CALL, 0x5FFAD0, 3,
        0x600396, GAME_11EN, H_CALL, 0x5FFAD0, 4,
        0x61DA1F, GAME_11EN, H_CALL, 0x61D940, 1,
        0x61DBDF, GAME_11EN, H_CALL, 0x61D940, 2,
        0x61DD6F, GAME_11EN, H_CALL, 0x61D940, 3,
        0x48D923, GAME_STEAM, H_CALL, 0x48D840, 1,
        0x48D9E9, GAME_STEAM, H_CALL, 0x48D840, 2,
        0x48DA51, GAME_STEAM, H_CALL, 0x48D840, 3,
        0x48DB09, GAME_STEAM, H_CALL, 0x48D840, 4,
        0x48DB69, GAME_STEAM, H_CALL, 0x48D840, 5,
        0x48DBD5, GAME_STEAM, H_CALL, 0x48D840, 6,
        0x48DC44, GAME_STEAM, H_CALL, 0x48D840, 7,
        0x4A4A1E, GAME_STEAM, H_CALL, 0x4A49D0, 1,
        0x4A4A55, GAME_STEAM, H_CALL, 0x4A49D0, 2,
        0x4A4A96, GAME_STEAM, H_CALL, 0x4A49D0, 3,
        0x4A4B79, GAME_STEAM, H_CALL, 0x4A49D0, 4,
        0x4A4BA1, GAME_STEAM, H_CALL, 0x4A49D0, 5,
        0x4A4BEE, GAME_STEAM, H_CALL, 0x4A49D0, 6,
        0x4A4C23, GAME_STEAM, H_CALL, 0x4A49D0, 7,
        0x4A4C7F, GAME_STEAM, H_CALL, 0x4A49D0, 8,
        0x4A4CB4, GAME_STEAM, H_CALL, 0x4A49D0, 9,
        0x4A4CCD, GAME_STEAM, H_CALL, 0x4A49D0, 10,
        0x4A4CF0, GAME_STEAM, H_CALL, 0x4A49D0, 11,
        0x4A4D0E, GAME_STEAM, H_CALL, 0x4A49D0, 12,
        0x4A4D5B, GAME_STEAM, H_CALL, 0x4A49D0, 13,
        0x4A4D79, GAME_STEAM, H_CALL, 0x4A49D0, 14,
        0x4A4DD9, GAME_STEAM, H_CALL, 0x4A49D0, 15,
        0x4A4DED, GAME_STEAM, H_CALL, 0x4A49D0, 16,
        0x4A4E1C, GAME_STEAM, H_CALL, 0x4A49D0, 17,
        0x4A4E44, GAME_STEAM, H_CALL, 0x4A49D0, 18,
        0x4A5290, GAME_STEAM, H_CALL, 0x4A51F0, 1,
        0x4A5B19, GAME_STEAM, H_CALL, 0x4A5B10, 1,
        0x5FFF81, GAME_STEAM, H_CALL, 0x5FF710, 1,
        0x5FFF92, GAME_STEAM, H_CALL, 0x5FF710, 2,
        0x5FFFC5, GAME_STEAM, H_CALL, 0x5FF710, 3,
        0x5FFFD6, GAME_STEAM, H_CALL, 0x5FF710, 4,
        0x61D67F, GAME_STEAM, H_CALL, 0x61D5A0, 1,
        0x61D83F, GAME_STEAM, H_CALL, 0x61D5A0, 2,
        0x61D9CF, GAME_STEAM, H_CALL, 0x61D5A0, 3>;
    using def_t = void(char const *, char const *, char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *,char const *,char const *>, 0,1,2>;
META_END

META_BEGIN(ResetLoadingScreenBar)
    static int address;
    static int global_address;
    static const int id = 0x4A6D80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A6D80, 0x4A6DA0, 0x4A6C50>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A4B16, GAME_10EN, H_CALL, 0x4A4B10, 1,
        0x4A4B36, GAME_11EN, H_CALL, 0x4A4B30, 1,
        0x4A49D6, GAME_STEAM, H_CALL, 0x4A49D0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(GetLevelSplashScreen)
    static int address;
    static int global_address;
    static const int id = 0x4A6D90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A6D90, 0x4A6DB0, 0x4A6C60>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x40E150, GAME_10EN, H_CALL, 0x40DFB0, 1,
        0x60055E, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x40E150, GAME_11EN, H_CALL, 0x40DFB0, 1,
        0x60057E, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x40E150, GAME_STEAM, H_CALL, 0x40DFB0, 1,
        0x6001BE, GAME_STEAM, H_CALL, 0x5FF710, 1>;
    using def_t = char const *(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(GetRandomSplashScreen)
    static int address;
    static int global_address;
    static const int id = 0x4A6DA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A6DA0, 0x4A6DC0, 0x4A6C70>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x48DD78, GAME_10EN, H_CALL, 0x48D950, 1,
        0x4A4B4E, GAME_10EN, H_CALL, 0x4A4B10, 1,
        0x4A4DA2, GAME_10EN, H_CALL, 0x4A4B10, 2,
        0x48DD88, GAME_11EN, H_CALL, 0x48D960, 1,
        0x4A4B6E, GAME_11EN, H_CALL, 0x4A4B30, 1,
        0x4A4DC2, GAME_11EN, H_CALL, 0x4A4B30, 2,
        0x48DC68, GAME_STEAM, H_CALL, 0x48D840, 1,
        0x4A4A0E, GAME_STEAM, H_CALL, 0x4A49D0, 1,
        0x4A4C6F, GAME_STEAM, H_CALL, 0x4A49D0, 2>;
    using def_t = char const *();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(DestroySplashScreen)
    static int address;
    static int global_address;
    static const int id = 0x4A6E50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A6E50, 0x4A6E70, 0x4A6D20>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A5112, GAME_10EN, H_CALL, 0x4A5110, 1,
        0x4A5132, GAME_11EN, H_CALL, 0x4A5130, 1,
        0x4A4FE2, GAME_STEAM, H_CALL, 0x4A4FE0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(LoadSplash)
    static int address;
    static int global_address;
    static const int id = 0x4A6E80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A6E80, 0x4A6EA0, 0x4A6D50>;
    // total references count: 10en (11), 11en (11), steam (11)
    using refs_t = RefList<
        0x40E157, GAME_10EN, H_CALL, 0x40DFB0, 1,
        0x48DD7E, GAME_10EN, H_CALL, 0x48D950, 1,
        0x490462, GAME_10EN, H_CALL, 0x49045D, 1,
        0x495817, GAME_10EN, H_CALL, 0x495792, 1,
        0x4A46B2, GAME_10EN, H_CALL, 0x4A4670, 1,
        0x4A68A6, GAME_10EN, H_CALL, 0x4A68A0, 1,
        0x4A69D9, GAME_10EN, H_CALL, 0x4A69D0, 1,
        0x4A712C, GAME_10EN, H_CALL, 0x4A7060, 1,
        0x600565, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x6067A9, GAME_10EN, H_CALL, 0x606730, 1,
        0x61DEBB, GAME_10EN, H_CALL, 0x61DEB0, 1,
        0x40E157, GAME_11EN, H_CALL, 0x40DFB0, 1,
        0x48DD8E, GAME_11EN, H_CALL, 0x48D960, 1,
        0x490472, GAME_11EN, H_CALL, 0x49046D, 1,
        0x495827, GAME_11EN, H_CALL, 0x4957A2, 1,
        0x4A46D2, GAME_11EN, H_CALL, 0x4A4690, 1,
        0x4A68C6, GAME_11EN, H_CALL, 0x4A68C0, 1,
        0x4A69F9, GAME_11EN, H_CALL, 0x4A69F0, 1,
        0x4A714C, GAME_11EN, H_CALL, 0x4A7080, 1,
        0x600585, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x606789, GAME_11EN, H_CALL, 0x606710, 1,
        0x61DE9B, GAME_11EN, H_CALL, 0x61DE90, 1,
        0x40E157, GAME_STEAM, H_CALL, 0x40DFB0, 1,
        0x48DC6E, GAME_STEAM, H_CALL, 0x48D840, 1,
        0x490372, GAME_STEAM, H_CALL, 0x49036D, 1,
        0x495727, GAME_STEAM, H_CALL, 0x4956A2, 1,
        0x4A4532, GAME_STEAM, H_CALL, 0x4A44F0, 1,
        0x4A6776, GAME_STEAM, H_CALL, 0x4A6770, 1,
        0x4A68A9, GAME_STEAM, H_CALL, 0x4A68A0, 1,
        0x4A6FFC, GAME_STEAM, H_CALL, 0x4A6F30, 1,
        0x6001C5, GAME_STEAM, H_CALL, 0x5FF710, 1,
        0x6063C9, GAME_STEAM, H_CALL, 0x606350, 1,
        0x61DAFB, GAME_STEAM, H_CALL, 0x61DAF0, 1>;
    using def_t = CSprite2d *(char const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(PluginAttach)
    static int address;
    static int global_address;
    static const int id = 0x4A6FA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A6FA0, 0x4A6FC0, 0x4A6E70>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A5BB5, GAME_10EN, H_CALL, 0x4A5AD0, 1,
        0x4A5BD5, GAME_11EN, H_CALL, 0x4A5AF0, 1,
        0x4A5A85, GAME_STEAM, H_CALL, 0x4A59A0, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(DoRWStuffEndOfFrame)
    static int address;
    static int global_address;
    static const int id = 0x4A7030;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A7030, 0x4A7050, 0x4A6F00>;
    // total references count: 10en (11), 11en (11), steam (11)
    using refs_t = RefList<
        0x498420, GAME_10EN, H_CALL, 0x4983EF, 1,
        0x498447, GAME_10EN, H_CALL, 0x4983EF, 2,
        0x498A0E, GAME_10EN, H_CALL, 0x498943, 1,
        0x498EE2, GAME_10EN, H_CALL, 0x498E5F, 1,
        0x498F00, GAME_10EN, H_CALL, 0x498E5F, 2,
        0x498F66, GAME_10EN, H_CALL, 0x498E5F, 3,
        0x498F84, GAME_10EN, H_CALL, 0x498E5F, 4,
        0x499052, GAME_10EN, H_CALL, 0x498E5F, 5,
        0x499070, GAME_10EN, H_CALL, 0x498E5F, 6,
        0x4A3BED, GAME_10EN, H_CALL, 0x4A3BCD, 1,
        0x61E20A, GAME_10EN, H_CALL, 0x61DEB0, 1,
        0x498430, GAME_11EN, H_CALL, 0x4983FF, 1,
        0x498457, GAME_11EN, H_CALL, 0x4983FF, 2,
        0x498A1E, GAME_11EN, H_CALL, 0x498953, 1,
        0x498EF2, GAME_11EN, H_CALL, 0x498E6F, 1,
        0x498F10, GAME_11EN, H_CALL, 0x498E6F, 2,
        0x498F76, GAME_11EN, H_CALL, 0x498E6F, 3,
        0x498F94, GAME_11EN, H_CALL, 0x498E6F, 4,
        0x499073, GAME_11EN, H_CALL, 0x498E6F, 5,
        0x499091, GAME_11EN, H_CALL, 0x498E6F, 6,
        0x4A3C0E, GAME_11EN, H_CALL, 0x4A3BEE, 1,
        0x61E1EA, GAME_11EN, H_CALL, 0x61DE90, 1,
        0x498330, GAME_STEAM, H_CALL, 0x4982FF, 1,
        0x498357, GAME_STEAM, H_CALL, 0x4982FF, 2,
        0x49891E, GAME_STEAM, H_CALL, 0x498853, 1,
        0x498DF2, GAME_STEAM, H_CALL, 0x498D6F, 1,
        0x498E10, GAME_STEAM, H_CALL, 0x498D6F, 2,
        0x498E76, GAME_STEAM, H_CALL, 0x498D6F, 3,
        0x498E94, GAME_STEAM, H_CALL, 0x498D6F, 4,
        0x498F73, GAME_STEAM, H_CALL, 0x498D6F, 5,
        0x498F91, GAME_STEAM, H_CALL, 0x498D6F, 6,
        0x4A3AAC, GAME_STEAM, H_CALL, 0x4A3A8C, 1,
        0x61DE4A, GAME_STEAM, H_CALL, 0x61DAF0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(DoFade)
    static int address;
    static int global_address;
    static const int id = 0x4A7060;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A7060, 0x4A7080, 0x4A6F30>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x4A5D38, GAME_10EN, H_CALL, 0x4A5C60, 1,
        0x4A6133, GAME_10EN, H_CALL, 0x4A5D80, 1,
        0x4A5D58, GAME_11EN, H_CALL, 0x4A5C80, 1,
        0x4A6153, GAME_11EN, H_CALL, 0x4A5DA0, 1,
        0x4A5C08, GAME_STEAM, H_CALL, 0x4A5B30, 1,
        0x4A6003, GAME_STEAM, H_CALL, 0x4A5C50, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(DoRWStuffStartOfFrame)
    static int address;
    static int global_address;
    static const int id = 0x4A72C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A72C0, 0x4A72E0, 0x4A7190>;
    // total references count: 10en (13), 11en (13), steam (13)
    using refs_t = RefList<
        0x49840F, GAME_10EN, H_CALL, 0x4983EF, 1,
        0x498436, GAME_10EN, H_CALL, 0x4983EF, 2,
        0x498967, GAME_10EN, H_CALL, 0x498943, 1,
        0x498EDA, GAME_10EN, H_CALL, 0x498E5F, 1,
        0x498EF8, GAME_10EN, H_CALL, 0x498E5F, 2,
        0x498F5E, GAME_10EN, H_CALL, 0x498E5F, 3,
        0x498F7C, GAME_10EN, H_CALL, 0x498E5F, 4,
        0x49904A, GAME_10EN, H_CALL, 0x498E5F, 5,
        0x499068, GAME_10EN, H_CALL, 0x498E5F, 6,
        0x4A3BE5, GAME_10EN, H_CALL, 0x4A3BCD, 1,
        0x4A68BF, GAME_10EN, H_CALL, 0x4A68A0, 1,
        0x4A6A01, GAME_10EN, H_CALL, 0x4A69D0, 1,
        0x61DED4, GAME_10EN, H_CALL, 0x61DEB0, 1,
        0x49841F, GAME_11EN, H_CALL, 0x4983FF, 1,
        0x498446, GAME_11EN, H_CALL, 0x4983FF, 2,
        0x498977, GAME_11EN, H_CALL, 0x498953, 1,
        0x498EEA, GAME_11EN, H_CALL, 0x498E6F, 1,
        0x498F08, GAME_11EN, H_CALL, 0x498E6F, 2,
        0x498F6E, GAME_11EN, H_CALL, 0x498E6F, 3,
        0x498F8C, GAME_11EN, H_CALL, 0x498E6F, 4,
        0x49906B, GAME_11EN, H_CALL, 0x498E6F, 5,
        0x499089, GAME_11EN, H_CALL, 0x498E6F, 6,
        0x4A3C06, GAME_11EN, H_CALL, 0x4A3BEE, 1,
        0x4A68DF, GAME_11EN, H_CALL, 0x4A68C0, 1,
        0x4A6A21, GAME_11EN, H_CALL, 0x4A69F0, 1,
        0x61DEB4, GAME_11EN, H_CALL, 0x61DE90, 1,
        0x49831F, GAME_STEAM, H_CALL, 0x4982FF, 1,
        0x498346, GAME_STEAM, H_CALL, 0x4982FF, 2,
        0x498877, GAME_STEAM, H_CALL, 0x498853, 1,
        0x498DEA, GAME_STEAM, H_CALL, 0x498D6F, 1,
        0x498E08, GAME_STEAM, H_CALL, 0x498D6F, 2,
        0x498E6E, GAME_STEAM, H_CALL, 0x498D6F, 3,
        0x498E8C, GAME_STEAM, H_CALL, 0x498D6F, 4,
        0x498F6B, GAME_STEAM, H_CALL, 0x498D6F, 5,
        0x498F89, GAME_STEAM, H_CALL, 0x498D6F, 6,
        0x4A3AA4, GAME_STEAM, H_CALL, 0x4A3A8C, 1,
        0x4A678F, GAME_STEAM, H_CALL, 0x4A6770, 1,
        0x4A68D1, GAME_STEAM, H_CALL, 0x4A68A0, 1,
        0x61DB14, GAME_STEAM, H_CALL, 0x61DAF0, 1>;
    using def_t = bool(short, short, short, short, short, short, short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<short,short,short,short,short,short,short>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(TestModelIndices)
    static int address;
    static int global_address;
    static const int id = 0x4A75DC;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A75DC, 0x4A75FC, 0x4A74AC>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A4D10, GAME_10EN, H_CALL, 0x4A4B10, 1,
        0x4A4D30, GAME_11EN, H_CALL, 0x4A4B30, 1,
        0x4A4BDD, GAME_STEAM, H_CALL, 0x4A49D0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(MatchModelString)
    static int address;
    static int global_address;
    static const int id = 0x4A75DD;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A75DD, 0x4A75FD, 0x4A74AD>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x48C511, GAME_10EN, H_CALL, 0x48C330, 1,
        0x48C6E3, GAME_10EN, H_CALL, 0x48C530, 1,
        0x48CA7B, GAME_10EN, H_CALL, 0x48C810, 1,
        0x48C521, GAME_11EN, H_CALL, 0x48C340, 1,
        0x48C6F3, GAME_11EN, H_CALL, 0x48C540, 1,
        0x48CA8B, GAME_11EN, H_CALL, 0x48C820, 1,
        0x48C401, GAME_STEAM, H_CALL, 0x48C220, 1,
        0x48C5D3, GAME_STEAM, H_CALL, 0x48C420, 1,
        0x48C96B, GAME_STEAM, H_CALL, 0x48C700, 1>;
    using def_t = void(char *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<char *,int>, 0,1>;
META_END

META_BEGIN(InitModelIndices)
    static int address;
    static int global_address;
    static const int id = 0x4A8C64;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A8C64, 0x4A8C84, 0x4A8B34>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A4C75, GAME_10EN, H_CALL, 0x4A4B10, 1,
        0x4A4C95, GAME_11EN, H_CALL, 0x4A4B30, 1,
        0x4A4B3C, GAME_STEAM, H_CALL, 0x4A49D0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(LittleTest)
    static int address;
    static int global_address;
    static const int id = 0x4A9630;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A9630, 0x4A9650, 0x4A9500>;
    // total references count: 10en (19), 11en (19), steam (19)
    using refs_t = RefList<
        0x53F018, GAME_10EN, H_CALL, 0x53EF50, 1,
        0x5684CC, GAME_10EN, H_CALL, 0x567F20, 1,
        0x56FE5A, GAME_10EN, H_CALL, 0x56FBA0, 1,
        0x5712C8, GAME_10EN, H_CALL, 0x571240, 1,
        0x571359, GAME_10EN, H_CALL, 0x571240, 2,
        0x571570, GAME_10EN, H_CALL, 0x571240, 3,
        0x571791, GAME_10EN, H_CALL, 0x571240, 4,
        0x571A63, GAME_10EN, H_CALL, 0x5719B0, 1,
        0x5725DC, GAME_10EN, H_CALL, 0x5719B0, 2,
        0x5727AD, GAME_10EN, H_CALL, 0x572660, 1,
        0x57BAF4, GAME_10EN, H_CALL, 0x57B810, 1,
        0x5BCDA9, GAME_10EN, H_CALL, 0x5BCDA0, 1,
        0x5BD0CE, GAME_10EN, H_CALL, 0x5BD0A0, 1,
        0x5BD7C1, GAME_10EN, H_CALL, 0x5BD740, 1,
        0x5BE666, GAME_10EN, H_CALL, 0x5BE2F0, 1,
        0x5BFA06, GAME_10EN, H_CALL, 0x5BF9E0, 1,
        0x5BFC96, GAME_10EN, H_CALL, 0x5BFC70, 1,
        0x5C14B3, GAME_10EN, H_CALL, 0x5BFF00, 1,
        0x5C28FB, GAME_10EN, H_CALL, 0x5C1710, 1,
        0x53F038, GAME_11EN, H_CALL, 0x53EF70, 1,
        0x5684EC, GAME_11EN, H_CALL, 0x567F40, 1,
        0x56FE7A, GAME_11EN, H_CALL, 0x56FBC0, 1,
        0x5712E8, GAME_11EN, H_CALL, 0x571260, 1,
        0x571379, GAME_11EN, H_CALL, 0x571260, 2,
        0x571590, GAME_11EN, H_CALL, 0x571260, 3,
        0x5717B1, GAME_11EN, H_CALL, 0x571260, 4,
        0x571A83, GAME_11EN, H_CALL, 0x5719D0, 1,
        0x5725FC, GAME_11EN, H_CALL, 0x5719D0, 2,
        0x5727CD, GAME_11EN, H_CALL, 0x572680, 1,
        0x57BB14, GAME_11EN, H_CALL, 0x57B830, 1,
        0x5BCDC9, GAME_11EN, H_CALL, 0x5BCDC0, 1,
        0x5BD0EE, GAME_11EN, H_CALL, 0x5BD0C0, 1,
        0x5BD7E1, GAME_11EN, H_CALL, 0x5BD760, 1,
        0x5BE686, GAME_11EN, H_CALL, 0x5BE310, 1,
        0x5BFA26, GAME_11EN, H_CALL, 0x5BFA00, 1,
        0x5BFCB6, GAME_11EN, H_CALL, 0x5BFC90, 1,
        0x5C14D3, GAME_11EN, H_CALL, 0x5BFF20, 1,
        0x5C291B, GAME_11EN, H_CALL, 0x5C1730, 1,
        0x53EF08, GAME_STEAM, H_CALL, 0x53EE40, 1,
        0x5683BC, GAME_STEAM, H_CALL, 0x567E10, 1,
        0x56FD4A, GAME_STEAM, H_CALL, 0x56FA90, 1,
        0x5711B8, GAME_STEAM, H_CALL, 0x571130, 1,
        0x571249, GAME_STEAM, H_CALL, 0x571130, 2,
        0x571460, GAME_STEAM, H_CALL, 0x571130, 3,
        0x571681, GAME_STEAM, H_CALL, 0x571130, 4,
        0x571953, GAME_STEAM, H_CALL, 0x5718A0, 1,
        0x5724CC, GAME_STEAM, H_CALL, 0x5718A0, 2,
        0x57269D, GAME_STEAM, H_CALL, 0x572550, 1,
        0x57B9E4, GAME_STEAM, H_CALL, 0x57B700, 1,
        0x5BCBD9, GAME_STEAM, H_CALL, 0x5BCBD0, 1,
        0x5BCEFE, GAME_STEAM, H_CALL, 0x5BCED0, 1,
        0x5BD5F1, GAME_STEAM, H_CALL, 0x5BD570, 1,
        0x5BE496, GAME_STEAM, H_CALL, 0x5BE120, 1,
        0x5BF836, GAME_STEAM, H_CALL, 0x5BF810, 1,
        0x5BFAC6, GAME_STEAM, H_CALL, 0x5BFAA0, 1,
        0x5C12E3, GAME_STEAM, H_CALL, 0x5BFD30, 1,
        0x5C272B, GAME_STEAM, H_CALL, 0x5C1540, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
