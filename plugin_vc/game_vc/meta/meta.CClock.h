/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CClock::RestoreClock)
    static int address;
    static int global_address;
    static const int id = 0x486FB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x486FB0, 0x486FB0, 0x486E90>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x458C17, GAME_10EN, H_CALL, 0x457580, 1,
        0x458C17, GAME_11EN, H_CALL, 0x457580, 1,
        0x458AF7, GAME_STEAM, H_CALL, 0x457460, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CClock::StoreClock)
    static int address;
    static int global_address;
    static const int id = 0x486FE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x486FE0, 0x486FE0, 0x486EC0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x458C04, GAME_10EN, H_CALL, 0x457580, 1,
        0x458C04, GAME_11EN, H_CALL, 0x457580, 1,
        0x458AE4, GAME_STEAM, H_CALL, 0x457460, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CClock::Update)
    static int address;
    static int global_address;
    static const int id = 0x487010;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x487010, 0x487010, 0x486EF0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A44F7, GAME_10EN, H_CALL, 0x4A4410, 1,
        0x4A4517, GAME_11EN, H_CALL, 0x4A4430, 1,
        0x4A436A, GAME_STEAM, H_CALL, 0x4A42D0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CClock::GetIsTimeInRange)
    static int address;
    static int global_address;
    static const int id = 0x4870F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4870F0, 0x4870F0, 0x486FD0>;
    // total references count: 10en (9), 11en (9), steam (9)
    using refs_t = RefList<
        0x40E83A, GAME_10EN, H_CALL, 0x40E7B0, 1,
        0x40E916, GAME_10EN, H_CALL, 0x40E870, 1,
        0x4C7973, GAME_10EN, H_CALL, 0x4C7920, 1,
        0x4C7D8F, GAME_10EN, H_CALL, 0x4C7D40, 1,
        0x4C7E9D, GAME_10EN, H_CALL, 0x4C7E70, 1,
        0x4DC52A, GAME_10EN, H_CALL, 0x4DC500, 1,
        0x4DC5F4, GAME_10EN, H_CALL, 0x4DC500, 2,
        0x4DC6B7, GAME_10EN, H_CALL, 0x4DC500, 3,
        0x4DCBF8, GAME_10EN, H_CALL, 0x4DC500, 4,
        0x40E83A, GAME_11EN, H_CALL, 0x40E7B0, 1,
        0x40E916, GAME_11EN, H_CALL, 0x40E870, 1,
        0x4C7993, GAME_11EN, H_CALL, 0x4C7940, 1,
        0x4C7DAF, GAME_11EN, H_CALL, 0x4C7D60, 1,
        0x4C7EBD, GAME_11EN, H_CALL, 0x4C7E90, 1,
        0x4DC54A, GAME_11EN, H_CALL, 0x4DC520, 1,
        0x4DC614, GAME_11EN, H_CALL, 0x4DC520, 2,
        0x4DC6D7, GAME_11EN, H_CALL, 0x4DC520, 3,
        0x4DCC18, GAME_11EN, H_CALL, 0x4DC520, 4,
        0x40E83A, GAME_STEAM, H_CALL, 0x40E7B0, 1,
        0x40E916, GAME_STEAM, H_CALL, 0x40E870, 1,
        0x4C7833, GAME_STEAM, H_CALL, 0x4C77E0, 1,
        0x4C7C4F, GAME_STEAM, H_CALL, 0x4C7C00, 1,
        0x4C7D5D, GAME_STEAM, H_CALL, 0x4C7D30, 1,
        0x4DC3EA, GAME_STEAM, H_CALL, 0x4DC3C0, 1,
        0x4DC4B4, GAME_STEAM, H_CALL, 0x4DC3C0, 2,
        0x4DC577, GAME_STEAM, H_CALL, 0x4DC3C0, 3,
        0x4DCAB8, GAME_STEAM, H_CALL, 0x4DC3C0, 4>;
    using def_t = bool(unsigned char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char,unsigned char>, 0,1>;
META_END

META_BEGIN(CClock::GetGameClockMinutesUntil)
    static int address;
    static int global_address;
    static const int id = 0x487130;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x487130, 0x487130, 0x487010>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x44B134, GAME_10EN, H_CALL, 0x446390, 1,
        0x44B134, GAME_11EN, H_CALL, 0x446390, 1,
        0x44B044, GAME_STEAM, H_CALL, 0x4462A0, 1>;
    using def_t = unsigned int(unsigned char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char,unsigned char>, 0,1>;
META_END

META_BEGIN(CClock::SetGameClock)
    static int address;
    static int global_address;
    static const int id = 0x487160;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x487160, 0x487160, 0x487040>;
    // total references count: 10en (6), 11en (6), steam (6)
    using refs_t = RefList<
        0x42B8E5, GAME_10EN, H_CALL, 0x42B8A0, 1,
        0x42BD71, GAME_10EN, H_CALL, 0x42BB70, 1,
        0x42C155, GAME_10EN, H_CALL, 0x42BB70, 2,
        0x44B102, GAME_10EN, H_CALL, 0x446390, 1,
        0x61FF97, GAME_10EN, H_CALL, 0x61F460, 1,
        0x621A68, GAME_10EN, H_CALL, 0x621230, 1,
        0x42B8E5, GAME_11EN, H_CALL, 0x42B8A0, 1,
        0x42BD71, GAME_11EN, H_CALL, 0x42BB70, 1,
        0x42C155, GAME_11EN, H_CALL, 0x42BB70, 2,
        0x44B102, GAME_11EN, H_CALL, 0x446390, 1,
        0x61FF77, GAME_11EN, H_CALL, 0x61F440, 1,
        0x621A48, GAME_11EN, H_CALL, 0x621210, 1,
        0x42B8B5, GAME_STEAM, H_CALL, 0x42B870, 1,
        0x42BD41, GAME_STEAM, H_CALL, 0x42BB40, 1,
        0x42C125, GAME_STEAM, H_CALL, 0x42BB40, 2,
        0x44B012, GAME_STEAM, H_CALL, 0x4462A0, 1,
        0x61FBD7, GAME_STEAM, H_CALL, 0x61F0A0, 1,
        0x6216B8, GAME_STEAM, H_CALL, 0x620E80, 1>;
    using def_t = void(unsigned char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char,unsigned char>, 0,1>;
META_END

META_BEGIN(CClock::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x4871B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4871B0, 0x4871B0, 0x487090>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x4A4943, GAME_10EN, H_CALL, 0x4A4850, 1,
        0x4A4EB9, GAME_10EN, H_CALL, 0x4A4B10, 1,
        0x4A4963, GAME_11EN, H_CALL, 0x4A4870, 1,
        0x4A4ED9, GAME_11EN, H_CALL, 0x4A4B30, 1,
        0x4A4803, GAME_STEAM, H_CALL, 0x4A4710, 1,
        0x4A4D86, GAME_STEAM, H_CALL, 0x4A49D0, 1>;
    using def_t = void(unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

}
