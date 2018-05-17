/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CClock::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x473370;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x473370, 0x473370, 0x473370>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x48C28E, GAME_10EN, H_CALL, 0x48BED0, 1,
        0x48C589, GAME_10EN, H_CALL, 0x48C4B0, 1,
        0x48C37E, GAME_11EN, H_CALL, 0x48BFC0, 1,
        0x48C689, GAME_11EN, H_CALL, 0x48C5B0, 1,
        0x48C30E, GAME_STEAM, H_CALL, 0x48BF50, 1,
        0x48C619, GAME_STEAM, H_CALL, 0x48C540, 1>;
    using def_t = void(unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

META_BEGIN(CClock::SetGameClock)
    static int address;
    static int global_address;
    static const int id = 0x4733C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4733C0, 0x4733C0, 0x4733C0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x421C45, GAME_10EN, H_CALL, 0x421C00, 1,
        0x43D205, GAME_10EN, H_CALL, 0x43AEA0, 1,
        0x5958B0, GAME_10EN, H_CALL, 0x595240, 1,
        0x597001, GAME_10EN, H_CALL, 0x5966E0, 1,
        0x421C45, GAME_11EN, H_CALL, 0x421C00, 1,
        0x43D205, GAME_11EN, H_CALL, 0x43AEA0, 1,
        0x595B60, GAME_11EN, H_CALL, 0x5954F0, 1,
        0x5972B1, GAME_11EN, H_CALL, 0x596990, 1,
        0x421C45, GAME_STEAM, H_CALL, 0x421C00, 1,
        0x43D205, GAME_STEAM, H_CALL, 0x43AEA0, 1,
        0x595A50, GAME_STEAM, H_CALL, 0x5953E0, 1,
        0x5971A1, GAME_STEAM, H_CALL, 0x596880, 1>;
    using def_t = void(unsigned char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char,unsigned char>, 0,1>;
META_END

META_BEGIN(CClock::GetGameClockMinutesUntil)
    static int address;
    static int global_address;
    static const int id = 0x4733F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4733F0, 0x4733F0, 0x4733F0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x43D235, GAME_10EN, H_CALL, 0x43AEA0, 1,
        0x43D235, GAME_11EN, H_CALL, 0x43AEA0, 1,
        0x43D235, GAME_STEAM, H_CALL, 0x43AEA0, 1>;
    using def_t = int(unsigned char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char,unsigned char>, 0,1>;
META_END

META_BEGIN(CClock::GetIsTimeInRange)
    static int address;
    static int global_address;
    static const int id = 0x473420;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x473420, 0x473420, 0x473420>;
    // total references count: 10en (8), 11en (8), steam (8)
    using refs_t = RefList<
        0x407CD1, GAME_10EN, H_CALL, 0x407C50, 1,
        0x407E3D, GAME_10EN, H_CALL, 0x407DD0, 1,
        0x4A937D, GAME_10EN, H_CALL, 0x4A9350, 1,
        0x4A995D, GAME_10EN, H_CALL, 0x4A9920, 1,
        0x4B6FDA, GAME_10EN, H_CALL, 0x4B6FB0, 1,
        0x4B70D4, GAME_10EN, H_CALL, 0x4B6FB0, 2,
        0x4B71CA, GAME_10EN, H_CALL, 0x4B6FB0, 3,
        0x4B830C, GAME_10EN, H_CALL, 0x4B6FB0, 4,
        0x407CD1, GAME_11EN, H_CALL, 0x407C50, 1,
        0x407E3D, GAME_11EN, H_CALL, 0x407DD0, 1,
        0x4A946D, GAME_11EN, H_CALL, 0x4A9440, 1,
        0x4A9A4D, GAME_11EN, H_CALL, 0x4A9A10, 1,
        0x4B70CA, GAME_11EN, H_CALL, 0x4B70A0, 1,
        0x4B71C4, GAME_11EN, H_CALL, 0x4B70A0, 2,
        0x4B72BA, GAME_11EN, H_CALL, 0x4B70A0, 3,
        0x4B83FC, GAME_11EN, H_CALL, 0x4B70A0, 4,
        0x407CD1, GAME_STEAM, H_CALL, 0x407C50, 1,
        0x407E3D, GAME_STEAM, H_CALL, 0x407DD0, 1,
        0x4A93FD, GAME_STEAM, H_CALL, 0x4A93D0, 1,
        0x4A99DD, GAME_STEAM, H_CALL, 0x4A99A0, 1,
        0x4B705A, GAME_STEAM, H_CALL, 0x4B7030, 1,
        0x4B7154, GAME_STEAM, H_CALL, 0x4B7030, 2,
        0x4B724A, GAME_STEAM, H_CALL, 0x4B7030, 3,
        0x4B838C, GAME_STEAM, H_CALL, 0x4B7030, 4>;
    using def_t = bool(unsigned char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned char,unsigned char>, 0,1>;
META_END

META_BEGIN(CClock::Update)
    static int address;
    static int global_address;
    static const int id = 0x473460;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x473460, 0x473460, 0x473460>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x48C8EB, GAME_10EN, H_CALL, 0x48C850, 1,
        0x48C9EB, GAME_11EN, H_CALL, 0x48C950, 1,
        0x48C97B, GAME_STEAM, H_CALL, 0x48C8E0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CClock::StoreClock)
    static int address;
    static int global_address;
    static const int id = 0x473540;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x473540, 0x473540, 0x473540>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4449C0, GAME_10EN, H_CALL, 0x4429C0, 1,
        0x4449C0, GAME_11EN, H_CALL, 0x4429C0, 1,
        0x4449C0, GAME_STEAM, H_CALL, 0x4429C0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CClock::RestoreClock)
    static int address;
    static int global_address;
    static const int id = 0x473570;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x473570, 0x473570, 0x473570>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4449D3, GAME_10EN, H_CALL, 0x4429C0, 1,
        0x4449D3, GAME_11EN, H_CALL, 0x4429C0, 1,
        0x4449D3, GAME_STEAM, H_CALL, 0x4429C0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
