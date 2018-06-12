/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedPlacement::IsPositionClearForPed)
    static int address;
    static int global_address;
    static const int id = 0x616860;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x616860, 0, 0, 0, 0, 0>;
    // total references count: 10us (13), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x5FCA6F, GAME_10US_COMPACT, H_CALL, 0x5FC9B0, 1,
        0x5FCF5C, GAME_10US_COMPACT, H_CALL, 0x5FCE80, 1,
        0x5FD0D4, GAME_10US_COMPACT, H_CALL, 0x5FCE80, 2,
        0x5FD40D, GAME_10US_COMPACT, H_CALL, 0x5FD330, 1,
        0x5FD587, GAME_10US_COMPACT, H_CALL, 0x5FD330, 2,
        0x612EBD, GAME_10US_COMPACT, H_CALL, 0x612CD0, 1,
        0x613E36, GAME_10US_COMPACT, H_CALL, 0x613D60, 1,
        0x6141AD, GAME_10US_COMPACT, H_CALL, 0x613D60, 2,
        0x614C8F, GAME_10US_COMPACT, H_CALL, 0x614720, 1,
        0x615018, GAME_10US_COMPACT, H_CALL, 0x614720, 2,
        0x6151FA, GAME_10US_COMPACT, H_CALL, 0x614720, 3,
        0x6154AF, GAME_10US_COMPACT, H_CALL, 0x614720, 4,
        0x64D0A3, GAME_10US_COMPACT, H_CALL, 0x64CF40, 1>;
    using def_t = bool(CVector const *, float, int, CEntity **, unsigned char, unsigned char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const *,float,int,CEntity **,unsigned char,unsigned char,unsigned char>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN_OVERLOADED(CPedPlacement::IsPositionClearOfCars, CVehicle *(*)(CVector const *))
    static int address;
    static int global_address;
    static const int id = 0x6168E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x6168E0, 0, 0, 0, 0, 0>;
    // total references count: 10us (0), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<>;
    using def_t = CVehicle *(CVector const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector const *>, 0>;
META_END

META_BEGIN(CPedPlacement::FindZCoorForPed)
    static int address;
    static int global_address;
    static const int id = 0x616920;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x616920, 0, 0, 0, 0, 0>;
    // total references count: 10us (15), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4615A0, GAME_10US_COMPACT, H_CALL, 0x461170, 1,
        0x46FA35, GAME_10US_COMPACT, H_CALL, 0x46F800, 1,
        0x496995, GAME_10US_COMPACT, H_CALL, 0x496760, 1,
        0x5E12F5, GAME_10US_COMPACT, H_CALL, 0x5E0820, 1,
        0x5E143A, GAME_10US_COMPACT, H_CALL, 0x5E13C0, 1,
        0x5EA515, GAME_10US_COMPACT, H_CALL, 0x5EA390, 1,
        0x6475ED, GAME_10US_COMPACT, H_CALL, 0x647590, 1,
        0x64B0B3, GAME_10US_COMPACT, H_CALL, 0x64B080, 1,
        0x64C482, GAME_10US_COMPACT, H_CALL, 0x64C220, 1,
        0x6519DE, GAME_10US_COMPACT, H_CALL, 0x6513A0, 1,
        0x65A540, GAME_10US_COMPACT, H_CALL, 0x65A460, 1,
        0x665982, GAME_10US_COMPACT, H_CALL, 0x665760, 1,
        0x66DD2C, GAME_10US_COMPACT, H_CALL, 0x66DCE0, 1,
        0x670463, GAME_10US_COMPACT, H_CALL, 0x670420, 1,
        0x673762, GAME_10US_COMPACT, H_CALL, 0x673540, 1>;
    using def_t = bool(CVector *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CVector *>, 0>;
META_END

META_BEGIN_OVERLOADED(CPedPlacement::IsPositionClearOfCars, CVehicle *(*)(CPed const *))
    static int address;
    static int global_address;
    static const int id = 0x616A40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x616A40, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x67C796, GAME_10US_COMPACT, H_CALL, 0x67C770, 1>;
    using def_t = CVehicle *(CPed const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<CPed const *>, 0>;
META_END

}
