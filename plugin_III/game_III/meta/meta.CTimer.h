/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CTimer::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x4ACE60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4ACE60, 0x4ACF50, 0x4ACEE0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x48BD6D, GAME_10EN, H_CALL, 0x48BD50, 1,
        0x48C57F, GAME_10EN, H_CALL, 0x48C4B0, 1,
        0x48C78A, GAME_10EN, H_CALL, 0x48C740, 1,
        0x48C817, GAME_10EN, H_CALL, 0x48C740, 2,
        0x48BE5D, GAME_11EN, H_CALL, 0x48BE40, 1,
        0x48C67F, GAME_11EN, H_CALL, 0x48C5B0, 1,
        0x48C88A, GAME_11EN, H_CALL, 0x48C840, 1,
        0x48C917, GAME_11EN, H_CALL, 0x48C840, 2,
        0x48BDED, GAME_STEAM, H_CALL, 0x48BDD0, 1,
        0x48C60F, GAME_STEAM, H_CALL, 0x48C540, 1,
        0x48C81A, GAME_STEAM, H_CALL, 0x48C7D0, 1,
        0x48C8A7, GAME_STEAM, H_CALL, 0x48C7D0, 2>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::Shutdown)
    static int address;
    static int global_address;
    static const int id = 0x4ACF60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4ACF60, 0x4AD050, 0x4ACFE0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x48C6F8, GAME_10EN, H_CALL, 0x48C6B0, 1,
        0x48C7F8, GAME_11EN, H_CALL, 0x48C7B0, 1,
        0x48C788, GAME_STEAM, H_CALL, 0x48C740, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::Update)
    static int address;
    static int global_address;
    static const int id = 0x4ACF70;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4ACF70, 0x4AD060, 0x4ACFF0>;
    // total references count: 10en (18), 11en (18), steam (18)
    using refs_t = RefList<
        0x404890, GAME_10EN, H_CALL, 0x404650, 1,
        0x404AE8, GAME_10EN, H_CALL, 0, 0,
        0x404EB3, GAME_10EN, H_CALL, 0x404DC0, 1,
        0x404EB8, GAME_10EN, H_CALL, 0x404DC0, 2,
        0x40B8E3, GAME_10EN, H_CALL, 0x40B5B0, 1,
        0x421A4A, GAME_10EN, H_CALL, 0x421A20, 1,
        0x44758D, GAME_10EN, H_CALL, 0x4458A0, 1,
        0x44D335, GAME_10EN, H_CALL, 0x44CB80, 1,
        0x44F127, GAME_10EN, H_CALL, 0x44CB80, 2,
        0x47A369, GAME_10EN, H_CALL, 0x47A230, 1,
        0x47A500, GAME_10EN, H_CALL, 0x47A4D0, 1,
        0x48C69D, GAME_10EN, H_CALL, 0x48C620, 1,
        0x48C837, GAME_10EN, H_CALL, 0x48C740, 1,
        0x48E483, GAME_10EN, H_CALL, 0x48E480, 1,
        0x48E703, GAME_10EN, H_CALL, 0x48E700, 1,
        0x4A06AF, GAME_10EN, H_CALL, 0x49FD30, 1,
        0x588828, GAME_10EN, H_CALL, 0x588490, 1,
        0x589DE5, GAME_10EN, H_CALL, 0x589D00, 1,
        0x404890, GAME_11EN, H_CALL, 0x404650, 1,
        0x404AE8, GAME_11EN, H_CALL, 0x4048E0, 1,
        0x404EB3, GAME_11EN, H_CALL, 0x404DC0, 1,
        0x404EB8, GAME_11EN, H_CALL, 0x404DC0, 2,
        0x40B8E3, GAME_11EN, H_CALL, 0x40B5B0, 1,
        0x421A4A, GAME_11EN, H_CALL, 0x421A20, 1,
        0x44758D, GAME_11EN, H_CALL, 0x4458A0, 1,
        0x44D335, GAME_11EN, H_CALL, 0x44CB80, 1,
        0x44F127, GAME_11EN, H_CALL, 0x44CB80, 2,
        0x47A418, GAME_11EN, H_CALL, 0x47A230, 1,
        0x47A4F0, GAME_11EN, H_CALL, 0x47A4C0, 1,
        0x48C79D, GAME_11EN, H_CALL, 0x48C720, 1,
        0x48C937, GAME_11EN, H_CALL, 0x48C840, 1,
        0x48E543, GAME_11EN, H_CALL, 0x48E540, 1,
        0x48E7C3, GAME_11EN, H_CALL, 0x48E7C0, 1,
        0x4A079F, GAME_11EN, H_CALL, 0x49FE20, 1,
        0x588B68, GAME_11EN, H_CALL, 0x5887D0, 1,
        0x58A125, GAME_11EN, H_CALL, 0x58A040, 1,
        0x404890, GAME_STEAM, H_CALL, 0x404650, 1,
        0x404AE8, GAME_STEAM, H_CALL, 0x4048E0, 1,
        0x404EB3, GAME_STEAM, H_CALL, 0x404DC0, 1,
        0x404EB8, GAME_STEAM, H_CALL, 0x404DC0, 2,
        0x40B8E3, GAME_STEAM, H_CALL, 0x40B5B0, 1,
        0x421A4A, GAME_STEAM, H_CALL, 0x421A20, 1,
        0x44758D, GAME_STEAM, H_CALL, 0x4458A0, 1,
        0x44D335, GAME_STEAM, H_CALL, 0x44CB80, 1,
        0x44F127, GAME_STEAM, H_CALL, 0x44CB80, 2,
        0x47A418, GAME_STEAM, H_CALL, 0x47A230, 1,
        0x47A4F0, GAME_STEAM, H_CALL, 0x47A4C0, 1,
        0x48C72D, GAME_STEAM, H_CALL, 0x48C6B0, 1,
        0x48C8C7, GAME_STEAM, H_CALL, 0x48C7D0, 1,
        0x48E4D3, GAME_STEAM, H_CALL, 0x48E4D0, 1,
        0x48E753, GAME_STEAM, H_CALL, 0x48E750, 1,
        0x4A072F, GAME_STEAM, H_CALL, 0x49FDB0, 1,
        0x588A58, GAME_STEAM, H_CALL, 0x5886C0, 1,
        0x58A015, GAME_STEAM, H_CALL, 0x589F30, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::Suspend)
    static int address;
    static int global_address;
    static const int id = 0x4AD310;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AD310, 0x4AD400, 0x4AD390>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x44AC26, GAME_10EN, H_CALL, 0x448240, 1,
        0x588DED, GAME_10EN, H_CALL, 0x588490, 1,
        0x44AC26, GAME_11EN, H_CALL, 0x448240, 1,
        0x58912D, GAME_11EN, H_CALL, 0x5887D0, 1,
        0x44AC26, GAME_STEAM, H_CALL, 0x448240, 1,
        0x58901D, GAME_STEAM, H_CALL, 0x5886C0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::Resume)
    static int address;
    static int global_address;
    static const int id = 0x4AD370;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AD370, 0x4AD460, 0x4AD3F0>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x44AC3C, GAME_10EN, H_CALL, 0x448240, 1,
        0x588E4F, GAME_10EN, H_CALL, 0x588490, 1,
        0x44AC3C, GAME_11EN, H_CALL, 0x448240, 1,
        0x58918F, GAME_11EN, H_CALL, 0x5887D0, 1,
        0x44AC3C, GAME_STEAM, H_CALL, 0x448240, 1,
        0x58907F, GAME_STEAM, H_CALL, 0x5886C0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::GetCyclesPerMillisecond)
    static int address;
    static int global_address;
    static const int id = 0x4AD3F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AD3F0, 0x4AD4E0, 0x4AD470>;
    // total references count: 10en (7), 11en (7), steam (7)
    using refs_t = RefList<
        0x4095A0, GAME_10EN, H_CALL, 0x409580, 1,
        0x4096DC, GAME_10EN, H_CALL, 0x409580, 2,
        0x409767, GAME_10EN, H_CALL, 0x409740, 1,
        0x409AFF, GAME_10EN, H_CALL, 0x409740, 2,
        0x582E87, GAME_10EN, H_CALL, 0x582710, 1,
        0x5923A8, GAME_10EN, H_CALL, 0x592380, 1,
        0x592419, GAME_10EN, H_CALL, 0x592380, 2,
        0x4095A0, GAME_11EN, H_CALL, 0x409580, 1,
        0x4096DC, GAME_11EN, H_CALL, 0x409580, 2,
        0x409767, GAME_11EN, H_CALL, 0x409740, 1,
        0x409AFF, GAME_11EN, H_CALL, 0x409740, 2,
        0x5831C7, GAME_11EN, H_CALL, 0x582A50, 1,
        0x592658, GAME_11EN, H_CALL, 0x592630, 1,
        0x5926C9, GAME_11EN, H_CALL, 0x592630, 2,
        0x4095A0, GAME_STEAM, H_CALL, 0x409580, 1,
        0x4096DC, GAME_STEAM, H_CALL, 0x409580, 2,
        0x409767, GAME_STEAM, H_CALL, 0x409740, 1,
        0x409AFF, GAME_STEAM, H_CALL, 0x409740, 2,
        0x5830B7, GAME_STEAM, H_CALL, 0x582940, 1,
        0x592548, GAME_STEAM, H_CALL, 0x592520, 1,
        0x5925B9, GAME_STEAM, H_CALL, 0x592520, 2>;
    using def_t = int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::GetCurrentTimeInCycles)
    static int address;
    static int global_address;
    static const int id = 0x4AD410;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AD410, 0x4AD500, 0x4AD490>;
    // total references count: 10en (7), 11en (7), steam (7)
    using refs_t = RefList<
        0x4095A9, GAME_10EN, H_CALL, 0x409580, 1,
        0x4096E3, GAME_10EN, H_CALL, 0x409580, 2,
        0x40976E, GAME_10EN, H_CALL, 0x409740, 1,
        0x409B06, GAME_10EN, H_CALL, 0x409740, 2,
        0x582EA4, GAME_10EN, H_CALL, 0x582710, 1,
        0x5923C5, GAME_10EN, H_CALL, 0x592380, 1,
        0x592436, GAME_10EN, H_CALL, 0x592380, 2,
        0x4095A9, GAME_11EN, H_CALL, 0x409580, 1,
        0x4096E3, GAME_11EN, H_CALL, 0x409580, 2,
        0x40976E, GAME_11EN, H_CALL, 0x409740, 1,
        0x409B06, GAME_11EN, H_CALL, 0x409740, 2,
        0x5831E4, GAME_11EN, H_CALL, 0x582A50, 1,
        0x592675, GAME_11EN, H_CALL, 0x592630, 1,
        0x5926E6, GAME_11EN, H_CALL, 0x592630, 2,
        0x4095A9, GAME_STEAM, H_CALL, 0x409580, 1,
        0x4096E3, GAME_STEAM, H_CALL, 0x409580, 2,
        0x40976E, GAME_STEAM, H_CALL, 0x409740, 1,
        0x409B06, GAME_STEAM, H_CALL, 0x409740, 2,
        0x5830D4, GAME_STEAM, H_CALL, 0x582940, 1,
        0x592565, GAME_STEAM, H_CALL, 0x592520, 1,
        0x5925D6, GAME_STEAM, H_CALL, 0x592520, 2>;
    using def_t = unsigned int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::GetIsSlowMotionActive)
    static int address;
    static int global_address;
    static const int id = 0x4AD450;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AD450, 0x4AD540, 0x4AD4D0>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x57595E, GAME_10EN, H_CALL, 0x575730, 1,
        0x57D90C, GAME_10EN, H_CALL, 0x57D690, 1,
        0x575CAE, GAME_11EN, H_CALL, 0x575A80, 1,
        0x57DC5C, GAME_11EN, H_CALL, 0x57D9E0, 1,
        0x575BAE, GAME_STEAM, H_CALL, 0x575980, 1,
        0x57DB5C, GAME_STEAM, H_CALL, 0x57D8E0, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::Stop)
    static int address;
    static int global_address;
    static const int id = 0x4AD480;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AD480, 0x4AD570, 0x4AD500>;
    // total references count: 10en (17), 11en (17), steam (17)
    using refs_t = RefList<
        0x40467A, GAME_10EN, H_CALL, 0x404650, 1,
        0x404AC4, GAME_10EN, H_CALL, 0x4048E0, 1,
        0x40B7DA, GAME_10EN, H_CALL, 0x40B5B0, 1,
        0x421A25, GAME_10EN, H_CALL, 0x421A20, 1,
        0x447578, GAME_10EN, H_CALL, 0x4458A0, 1,
        0x44D328, GAME_10EN, H_CALL, 0x44CB80, 1,
        0x44F0ED, GAME_10EN, H_CALL, 0x44CB80, 2,
        0x47A2FA, GAME_10EN, H_CALL, 0x47A230, 1,
        0x47A4E7, GAME_10EN, H_CALL, 0x47A4D0, 1,
        0x48C620, GAME_10EN, H_CALL, 0x48C620, 1,
        0x48C812, GAME_10EN, H_CALL, 0x48C740, 1,
        0x48DE28, GAME_10EN, H_CALL, 0x48DD60, 1,
        0x4A0683, GAME_10EN, H_CALL, 0x49FD30, 1,
        0x582F8A, GAME_10EN, H_CALL, 0x582710, 1,
        0x582FDE, GAME_10EN, H_CALL, 0x582710, 2,
        0x5887ED, GAME_10EN, H_CALL, 0x588490, 1,
        0x589D40, GAME_10EN, H_CALL, 0x589D00, 1,
        0x40467A, GAME_11EN, H_CALL, 0x404650, 1,
        0x404AC4, GAME_11EN, H_CALL, 0x4048E0, 1,
        0x40B7DA, GAME_11EN, H_CALL, 0x40B5B0, 1,
        0x421A25, GAME_11EN, H_CALL, 0x421A20, 1,
        0x447578, GAME_11EN, H_CALL, 0x4458A0, 1,
        0x44D328, GAME_11EN, H_CALL, 0x44CB80, 1,
        0x44F0ED, GAME_11EN, H_CALL, 0x44CB80, 2,
        0x47A2FA, GAME_11EN, H_CALL, 0x47A230, 1,
        0x47A4D7, GAME_11EN, H_CALL, 0x47A4C0, 1,
        0x48C720, GAME_11EN, H_CALL, 0x48C720, 1,
        0x48C912, GAME_11EN, H_CALL, 0x48C840, 1,
        0x48DEE8, GAME_11EN, H_CALL, 0x48DE20, 1,
        0x4A0773, GAME_11EN, H_CALL, 0x49FE20, 1,
        0x5832CA, GAME_11EN, H_CALL, 0x582A50, 1,
        0x58331E, GAME_11EN, H_CALL, 0x582A50, 2,
        0x588B2D, GAME_11EN, H_CALL, 0x5887D0, 1,
        0x58A080, GAME_11EN, H_CALL, 0x58A040, 1,
        0x40467A, GAME_STEAM, H_CALL, 0x404650, 1,
        0x404AC4, GAME_STEAM, H_CALL, 0x4048E0, 1,
        0x40B7DA, GAME_STEAM, H_CALL, 0x40B5B0, 1,
        0x421A25, GAME_STEAM, H_CALL, 0x421A20, 1,
        0x447578, GAME_STEAM, H_CALL, 0x4458A0, 1,
        0x44D328, GAME_STEAM, H_CALL, 0x44CB80, 1,
        0x44F0ED, GAME_STEAM, H_CALL, 0x44CB80, 2,
        0x47A2FA, GAME_STEAM, H_CALL, 0x47A230, 1,
        0x47A4D7, GAME_STEAM, H_CALL, 0x47A4C0, 1,
        0x48C6B0, GAME_STEAM, H_CALL, 0x48C6B0, 1,
        0x48C8A2, GAME_STEAM, H_CALL, 0x48C7D0, 1,
        0x48DE78, GAME_STEAM, H_CALL, 0x48DDB0, 1,
        0x4A0703, GAME_STEAM, H_CALL, 0x49FDB0, 1,
        0x5831BA, GAME_STEAM, H_CALL, 0x582940, 1,
        0x58320E, GAME_STEAM, H_CALL, 0x582940, 2,
        0x588A1D, GAME_STEAM, H_CALL, 0x5886C0, 1,
        0x589F70, GAME_STEAM, H_CALL, 0x589F30, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::StartUserPause)
    static int address;
    static int global_address;
    static const int id = 0x4AD490;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AD490, 0x4AD580, 0x4AD510>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x488880, GAME_10EN, H_CALL, 0x488790, 1,
        0x4888A5, GAME_10EN, H_CALL, 0x488790, 2,
        0x488980, GAME_11EN, H_CALL, 0x488890, 1,
        0x4889A5, GAME_11EN, H_CALL, 0x488890, 2,
        0x488980, GAME_STEAM, H_CALL, 0x488890, 1,
        0x4889A5, GAME_STEAM, H_CALL, 0x488890, 2>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::EndUserPause)
    static int address;
    static int global_address;
    static const int id = 0x4AD4A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AD4A0, 0x4AD590, 0x4AD520>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x488927, GAME_10EN, H_CALL, 0x488920, 1,
        0x488A27, GAME_11EN, H_CALL, 0x488A20, 1,
        0x488A27, GAME_STEAM, H_CALL, 0x488A20, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
