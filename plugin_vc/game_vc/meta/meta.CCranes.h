/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCranes::IsThisCarBeingTargettedByAnyCrane)
    static int address;
    static int global_address;
    static const int id = 0x5A7A80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5A7A80, 0x5A7AA0, 0x5A78B0>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x426082, GAME_10EN, H_CALL, 0x426030, 1,
        0x426572, GAME_10EN, H_CALL, 0x4264C0, 1,
        0x426082, GAME_11EN, H_CALL, 0x426030, 1,
        0x426572, GAME_11EN, H_CALL, 0x4264C0, 1,
        0x426052, GAME_STEAM, H_CALL, 0x426000, 1,
        0x426542, GAME_STEAM, H_CALL, 0x426490, 1>;
    using def_t = bool(CVehicle *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCranes::IsThisCarBeingCarriedByAnyCrane)
    static int address;
    static int global_address;
    static const int id = 0x5A7AB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5A7AB0, 0x5A7AD0, 0x5A78E0>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x4BC46C, GAME_10EN, H_CALL, 0x4BC2F0, 1,
        0x51808E, GAME_10EN, H_CALL, 0x518080, 1,
        0x4BC48C, GAME_11EN, H_CALL, 0x4BC310, 1,
        0x5180AE, GAME_11EN, H_CALL, 0x5180A0, 1,
        0x4BC33C, GAME_STEAM, H_CALL, 0x4BC1C0, 1,
        0x517F7E, GAME_STEAM, H_CALL, 0x517F70, 1>;
    using def_t = bool(CVehicle *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVehicle *>, 0>;
META_END

META_BEGIN(CCranes::RegisterCarForMilitaryCrane)
    static int address;
    static int global_address;
    static const int id = 0x5A7EF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5A7EF0, 0x5A7F10, 0x5A7D20>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x5A8CB9, GAME_10EN, H_CALL, 0x5A8460, 1,
        0x5A8CD9, GAME_11EN, H_CALL, 0x5A8480, 1,
        0x5A8AE9, GAME_STEAM, H_CALL, 0x5A8290, 1>;
    using def_t = void(unsigned short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned short>, 0>;
META_END

META_BEGIN(CCranes::DoesMilitaryCraneHaveThisOneAlready)
    static int address;
    static int global_address;
    static const int id = 0x5A7F90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5A7F90, 0x5A7FB0, 0x5A7DC0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x5A8232, GAME_10EN, H_CALL, 0x5A80D0, 1,
        0x5A8252, GAME_11EN, H_CALL, 0x5A80F0, 1,
        0x5A8062, GAME_STEAM, H_CALL, 0x5A7F00, 1>;
    using def_t = bool(unsigned short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<unsigned short>, 0>;
META_END

META_BEGIN(CCranes::UpdateCranes)
    static int address;
    static int global_address;
    static const int id = 0x5A92E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5A92E0, 0x5A9300, 0x5A9110>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A45AA, GAME_10EN, H_CALL, 0x4A4410, 1,
        0x4A45CA, GAME_11EN, H_CALL, 0x4A4430, 1,
        0x4A4424, GAME_STEAM, H_CALL, 0x4A42D0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCranes::AddThisOneCrane)
    static int address;
    static int global_address;
    static const int id = 0x5A93C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5A93C0, 0x5A93E0, 0x5A91F0>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x5A9539, GAME_10EN, H_CALL, 0x5A94B0, 1,
        0x5A95B9, GAME_10EN, H_CALL, 0x5A94B0, 2,
        0x5A9559, GAME_11EN, H_CALL, 0x5A94D0, 1,
        0x5A95D9, GAME_11EN, H_CALL, 0x5A94D0, 2,
        0x5A9369, GAME_STEAM, H_CALL, 0x5A92E0, 1,
        0x5A93E9, GAME_STEAM, H_CALL, 0x5A92E0, 2>;
    using def_t = int(CEntity *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CEntity *>, 0>;
META_END

META_BEGIN(CCranes::InitCranes)
    static int address;
    static int global_address;
    static const int id = 0x5A94B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5A94B0, 0x5A94D0, 0x5A92E0>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x4A4993, GAME_10EN, H_CALL, 0x4A4850, 1,
        0x4A4EC4, GAME_10EN, H_CALL, 0x4A4B10, 1,
        0x4A49B3, GAME_11EN, H_CALL, 0x4A4870, 1,
        0x4A4EE4, GAME_11EN, H_CALL, 0x4A4B30, 1,
        0x4A4853, GAME_STEAM, H_CALL, 0x4A4710, 1,
        0x4A4D91, GAME_STEAM, H_CALL, 0x4A49D0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
