/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPad::EditCodesForControls)
    static int address;
    static int global_address;
    static const int id = 0x4A90B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A90B0, 0x4A90D0, 0x4A8F80>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x499112, GAME_10EN, H_CALL, 0x4990DD, 1,
        0x499133, GAME_11EN, H_CALL, 0x4990FE, 1,
        0x499033, GAME_STEAM, H_CALL, 0x498FFE, 1>;
    using def_t = void(int *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int *,int>, 0,1>;
META_END

META_BEGIN(CPad::ResetCheats)
    static int address;
    static int global_address;
    static const int id = 0x4A9590;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A9590, 0x4A95B0, 0x4A9460>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x60051E, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x61A7D9, GAME_10EN, H_CALL, 0x61A700, 1,
        0x60053E, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x61A7B9, GAME_11EN, H_CALL, 0x61A6E0, 1,
        0x60017E, GAME_STEAM, H_CALL, 0x5FF710, 1,
        0x61A3F9, GAME_STEAM, H_CALL, 0x61A320, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPad::PrintErrorMessage)
    static int address;
    static int global_address;
    static const int id = 0x4A9660;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A9660, 0x4A9680, 0x4A9530>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A64F3, GAME_10EN, H_CALL, 0x4A6190, 1,
        0x4A6513, GAME_11EN, H_CALL, 0x4A61B0, 1,
        0x4A63C3, GAME_STEAM, H_CALL, 0x4A6060, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPad::ResetAverageWeapon)
    static int address;
    static int global_address;
    static const int id = 0x4A98A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A98A0, 0x4A98C0, 0x4A9770>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x52D7B5, GAME_10EN, H_CALL, 0x52D1C0, 1,
        0x52D7D5, GAME_11EN, H_CALL, 0x52D1E0, 1,
        0x52D6A5, GAME_STEAM, H_CALL, 0x52D0B0, 1>;
    using def_t = void(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::LookAroundUpDown)
    static int address;
    static int global_address;
    static const int id = 0x4A98F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A98F0, 0x4A9910, 0x4A97C0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x471206, GAME_10EN, H_CALL, 0x4700E7, 1,
        0x47C082, GAME_10EN, H_CALL, 0x47BE8F, 1,
        0x481F55, GAME_10EN, H_CALL, 0x481AB3, 1,
        0x482955, GAME_10EN, H_CALL, 0x48267A, 1,
        0x471206, GAME_11EN, H_CALL, 0x4700E7, 1,
        0x47C082, GAME_11EN, H_CALL, 0x47BE8F, 1,
        0x481F55, GAME_11EN, H_CALL, 0x481AB3, 1,
        0x482955, GAME_11EN, H_CALL, 0x48267A, 1,
        0x4710E6, GAME_STEAM, H_CALL, 0x46FFC7, 1,
        0x47BF62, GAME_STEAM, H_CALL, 0x47BD6F, 1,
        0x481E35, GAME_STEAM, H_CALL, 0x481993, 1,
        0x482835, GAME_STEAM, H_CALL, 0x48255A, 1>;
    using def_t = int(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::LookAroundLeftRight)
    static int address;
    static int global_address;
    static const int id = 0x4A9A80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A9A80, 0x4A9AA0, 0x4A9950>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x4711F2, GAME_10EN, H_CALL, 0x4700E7, 1,
        0x47C062, GAME_10EN, H_CALL, 0x47BE8F, 1,
        0x481F35, GAME_10EN, H_CALL, 0x481AB3, 1,
        0x482935, GAME_10EN, H_CALL, 0x48267A, 1,
        0x4711F2, GAME_11EN, H_CALL, 0x4700E7, 1,
        0x47C062, GAME_11EN, H_CALL, 0x47BE8F, 1,
        0x481F35, GAME_11EN, H_CALL, 0x481AB3, 1,
        0x482935, GAME_11EN, H_CALL, 0x48267A, 1,
        0x4710D2, GAME_STEAM, H_CALL, 0x46FFC7, 1,
        0x47BF42, GAME_STEAM, H_CALL, 0x47BD6F, 1,
        0x481E15, GAME_STEAM, H_CALL, 0x481993, 1,
        0x482815, GAME_STEAM, H_CALL, 0x48255A, 1>;
    using def_t = int(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::SniperModeLookUpDown)
    static int address;
    static int global_address;
    static const int id = 0x4A9C40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A9C40, 0x4A9C60, 0x4A9B10>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x479692, GAME_10EN, H_CALL, 0x479410, 1,
        0x47A42D, GAME_10EN, H_CALL, 0x47A20E, 1,
        0x47AF93, GAME_10EN, H_CALL, 0x47AE27, 1,
        0x479692, GAME_11EN, H_CALL, 0x479410, 1,
        0x47A42D, GAME_11EN, H_CALL, 0x47A20E, 1,
        0x47AF93, GAME_11EN, H_CALL, 0x47AE27, 1,
        0x479572, GAME_STEAM, H_CALL, 0x4792F0, 1,
        0x47A30D, GAME_STEAM, H_CALL, 0x47A0EE, 1,
        0x47AE73, GAME_STEAM, H_CALL, 0x47AD07, 1>;
    using def_t = int(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::SniperModeLookLeftRight)
    static int address;
    static int global_address;
    static const int id = 0x4A9D40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A9D40, 0x4A9D60, 0x4A9C10>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x479672, GAME_10EN, H_CALL, 0x479410, 1,
        0x47A40D, GAME_10EN, H_CALL, 0x47A20E, 1,
        0x47AF73, GAME_10EN, H_CALL, 0x47AE27, 1,
        0x479672, GAME_11EN, H_CALL, 0x479410, 1,
        0x47A40D, GAME_11EN, H_CALL, 0x47A20E, 1,
        0x47AF73, GAME_11EN, H_CALL, 0x47AE27, 1,
        0x479552, GAME_STEAM, H_CALL, 0x4792F0, 1,
        0x47A2ED, GAME_STEAM, H_CALL, 0x47A0EE, 1,
        0x47AE53, GAME_STEAM, H_CALL, 0x47AD07, 1>;
    using def_t = int(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::SniperZoomOut)
    static int address;
    static int global_address;
    static const int id = 0x4A9E20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A9E20, 0x4A9E40, 0x4A9CF0>;
    // total references count: 10en (5), 11en (5), steam (5)
    using refs_t = RefList<
        0x4799C7, GAME_10EN, H_CALL, 0x479410, 1,
        0x4799EE, GAME_10EN, H_CALL, 0x479410, 2,
        0x479A20, GAME_10EN, H_CALL, 0x479410, 3,
        0x482560, GAME_10EN, H_CALL, 0x481AB3, 1,
        0x482586, GAME_10EN, H_CALL, 0x481AB3, 2,
        0x4799C7, GAME_11EN, H_CALL, 0x479410, 1,
        0x4799EE, GAME_11EN, H_CALL, 0x479410, 2,
        0x479A20, GAME_11EN, H_CALL, 0x479410, 3,
        0x482560, GAME_11EN, H_CALL, 0x481AB3, 1,
        0x482586, GAME_11EN, H_CALL, 0x481AB3, 2,
        0x4798A7, GAME_STEAM, H_CALL, 0x4792F0, 1,
        0x4798CE, GAME_STEAM, H_CALL, 0x4792F0, 2,
        0x479900, GAME_STEAM, H_CALL, 0x4792F0, 3,
        0x482440, GAME_STEAM, H_CALL, 0x481993, 1,
        0x482466, GAME_STEAM, H_CALL, 0x481993, 2>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::SniperZoomIn)
    static int address;
    static int global_address;
    static const int id = 0x4A9E90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A9E90, 0x4A9EB0, 0x4A9D60>;
    // total references count: 10en (5), 11en (5), steam (5)
    using refs_t = RefList<
        0x4799A4, GAME_10EN, H_CALL, 0x479410, 1,
        0x479A01, GAME_10EN, H_CALL, 0x479410, 2,
        0x479A72, GAME_10EN, H_CALL, 0x479410, 3,
        0x482573, GAME_10EN, H_CALL, 0x481AB3, 1,
        0x4825B9, GAME_10EN, H_CALL, 0x481AB3, 2,
        0x4799A4, GAME_11EN, H_CALL, 0x479410, 1,
        0x479A01, GAME_11EN, H_CALL, 0x479410, 2,
        0x479A72, GAME_11EN, H_CALL, 0x479410, 3,
        0x482573, GAME_11EN, H_CALL, 0x481AB3, 1,
        0x4825B9, GAME_11EN, H_CALL, 0x481AB3, 2,
        0x479884, GAME_STEAM, H_CALL, 0x4792F0, 1,
        0x4798E1, GAME_STEAM, H_CALL, 0x4792F0, 2,
        0x479952, GAME_STEAM, H_CALL, 0x4792F0, 3,
        0x482453, GAME_STEAM, H_CALL, 0x481993, 1,
        0x482499, GAME_STEAM, H_CALL, 0x481993, 2>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::ForceCameraBehindPlayer)
    static int address;
    static int global_address;
    static const int id = 0x4A9F00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A9F00, 0x4A9F20, 0x4A9DD0>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x47D53E, GAME_10EN, H_CALL, 0x47CE73, 1,
        0x47D7C6, GAME_10EN, H_CALL, 0x47CE73, 2,
        0x47D53E, GAME_11EN, H_CALL, 0x47CE73, 1,
        0x47D7C6, GAME_11EN, H_CALL, 0x47CE73, 2,
        0x47D41E, GAME_STEAM, H_CALL, 0x47CD53, 1,
        0x47D6A6, GAME_STEAM, H_CALL, 0x47CD53, 2>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::CollectPickupJustDown)
    static int address;
    static int global_address;
    static const int id = 0x4A9F80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4A9F80, 0x4A9FA0, 0x4A9E50>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x441BC1, GAME_10EN, H_CALL, 0x441BB0, 1,
        0x441BC1, GAME_11EN, H_CALL, 0x441BB0, 1,
        0x441B31, GAME_STEAM, H_CALL, 0x441B20, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetAnaloguePadRightJustUp)
    static int address;
    static int global_address;
    static const int id = 0x4AA000;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA000, 0x4AA020, 0x4A9ED0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x496CC8, GAME_10EN, H_CALL, 0x4965BA, 1,
        0x496CD8, GAME_11EN, H_CALL, 0x4965CA, 1,
        0x496BD8, GAME_STEAM, H_CALL, 0x4964CA, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetAnaloguePadLeftJustUp)
    static int address;
    static int global_address;
    static const int id = 0x4AA0D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA0D0, 0x4AA0F0, 0x4A9FA0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x496CB5, GAME_10EN, H_CALL, 0x4965BA, 1,
        0x496CC5, GAME_11EN, H_CALL, 0x4965CA, 1,
        0x496BC5, GAME_STEAM, H_CALL, 0x4964CA, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetAnaloguePadRight)
    static int address;
    static int global_address;
    static const int id = 0x4AA1A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA1A0, 0x4AA1C0, 0x4AA070>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x496FE4, GAME_10EN, H_CALL, 0x4965BA, 1,
        0x496FF4, GAME_11EN, H_CALL, 0x4965CA, 1,
        0x496EF4, GAME_STEAM, H_CALL, 0x4964CA, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetAnaloguePadLeft)
    static int address;
    static int global_address;
    static const int id = 0x4AA200;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA200, 0x4AA220, 0x4AA0D0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x497069, GAME_10EN, H_CALL, 0x4965BA, 1,
        0x497079, GAME_11EN, H_CALL, 0x4965CA, 1,
        0x496F79, GAME_STEAM, H_CALL, 0x4964CA, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetAnaloguePadDown)
    static int address;
    static int global_address;
    static const int id = 0x4AA260;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA260, 0x4AA280, 0x4AA130>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x495CE5, GAME_10EN, H_CALL, 0x49598B, 1,
        0x49697C, GAME_10EN, H_CALL, 0x4965BA, 1,
        0x495CF5, GAME_11EN, H_CALL, 0x49599B, 1,
        0x49698C, GAME_11EN, H_CALL, 0x4965CA, 1,
        0x495BF5, GAME_STEAM, H_CALL, 0x49589B, 1,
        0x49688C, GAME_STEAM, H_CALL, 0x4964CA, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetAnaloguePadUp)
    static int address;
    static int global_address;
    static const int id = 0x4AA2B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA2B0, 0x4AA2D0, 0x4AA180>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x495BEC, GAME_10EN, H_CALL, 0x49598B, 1,
        0x496A09, GAME_10EN, H_CALL, 0x4965BA, 1,
        0x495BFC, GAME_11EN, H_CALL, 0x49599B, 1,
        0x496A19, GAME_11EN, H_CALL, 0x4965CA, 1,
        0x495AFC, GAME_STEAM, H_CALL, 0x49589B, 1,
        0x496919, GAME_STEAM, H_CALL, 0x4964CA, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::ShiftTargetRightJustDown)
    static int address;
    static int global_address;
    static const int id = 0x4AA300;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA300, 0x4AA320, 0x4AA1D0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x5350A6, GAME_10EN, H_CALL, 0x534890, 1,
        0x5350C6, GAME_11EN, H_CALL, 0x5348B0, 1,
        0x534F96, GAME_STEAM, H_CALL, 0x534780, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::ShiftTargetLeftJustDown)
    static int address;
    static int global_address;
    static const int id = 0x4AA360;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA360, 0x4AA380, 0x4AA230>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x53508B, GAME_10EN, H_CALL, 0x534890, 1,
        0x5350AB, GAME_11EN, H_CALL, 0x5348B0, 1,
        0x534F7B, GAME_STEAM, H_CALL, 0x534780, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetSprint)
    static int address;
    static int global_address;
    static const int id = 0x4AA390;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA390, 0x4AA3B0, 0x4AA260>;
    // total references count: 10en (6), 11en (6), steam (6)
    using refs_t = RefList<
        0x52BDD9, GAME_10EN, H_CALL, 0x52B070, 1,
        0x534945, GAME_10EN, H_CALL, 0x534890, 1,
        0x535A54, GAME_10EN, H_CALL, 0x5357D0, 1,
        0x535C79, GAME_10EN, H_CALL, 0x535BB0, 1,
        0x5362AB, GAME_10EN, H_CALL, 0x535F40, 1,
        0x537C6F, GAME_10EN, H_CALL, 0x537270, 1,
        0x52BDF9, GAME_11EN, H_CALL, 0x52B090, 1,
        0x534965, GAME_11EN, H_CALL, 0x5348B0, 1,
        0x535A74, GAME_11EN, H_CALL, 0x5357F0, 1,
        0x535C99, GAME_11EN, H_CALL, 0x535BD0, 1,
        0x5362CB, GAME_11EN, H_CALL, 0x535F60, 1,
        0x537C8F, GAME_11EN, H_CALL, 0x537290, 1,
        0x52BCC9, GAME_STEAM, H_CALL, 0x52AF60, 1,
        0x534835, GAME_STEAM, H_CALL, 0x534780, 1,
        0x535944, GAME_STEAM, H_CALL, 0x5356C0, 1,
        0x535B69, GAME_STEAM, H_CALL, 0x535AA0, 1,
        0x53619B, GAME_STEAM, H_CALL, 0x535E30, 1,
        0x537B5F, GAME_STEAM, H_CALL, 0x537160, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::JumpJustDown)
    static int address;
    static int global_address;
    static const int id = 0x4AA400;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA400, 0x4AA420, 0x4AA2D0>;
    // total references count: 10en (5), 11en (5), steam (5)
    using refs_t = RefList<
        0x507C33, GAME_10EN, H_CALL, 0x505790, 1,
        0x534950, GAME_10EN, H_CALL, 0x534890, 1,
        0x535AB0, GAME_10EN, H_CALL, 0x5357D0, 1,
        0x535CC5, GAME_10EN, H_CALL, 0x535BB0, 1,
        0x536329, GAME_10EN, H_CALL, 0x535F40, 1,
        0x507C53, GAME_11EN, H_CALL, 0x5057B0, 1,
        0x534970, GAME_11EN, H_CALL, 0x5348B0, 1,
        0x535AD0, GAME_11EN, H_CALL, 0x5357F0, 1,
        0x535CE5, GAME_11EN, H_CALL, 0x535BD0, 1,
        0x536349, GAME_11EN, H_CALL, 0x535F60, 1,
        0x507AF3, GAME_STEAM, H_CALL, 0x505650, 1,
        0x534840, GAME_STEAM, H_CALL, 0x534780, 1,
        0x5359A0, GAME_STEAM, H_CALL, 0x5356C0, 1,
        0x535BB5, GAME_STEAM, H_CALL, 0x535AA0, 1,
        0x536219, GAME_STEAM, H_CALL, 0x535E30, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::DuckJustDown)
    static int address;
    static int global_address;
    static const int id = 0x4AA430;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA430, 0x4AA450, 0x4AA300>;
    // total references count: 10en (6), 11en (6), steam (6)
    using refs_t = RefList<
        0x5348E3, GAME_10EN, H_CALL, 0x534890, 1,
        0x534931, GAME_10EN, H_CALL, 0x534890, 2,
        0x5352EE, GAME_10EN, H_CALL, 0x5352B0, 1,
        0x53533F, GAME_10EN, H_CALL, 0x5352B0, 2,
        0x53558E, GAME_10EN, H_CALL, 0x535550, 1,
        0x5355DF, GAME_10EN, H_CALL, 0x535550, 2,
        0x534903, GAME_11EN, H_CALL, 0x5348B0, 1,
        0x534951, GAME_11EN, H_CALL, 0x5348B0, 2,
        0x53530E, GAME_11EN, H_CALL, 0x5352D0, 1,
        0x53535F, GAME_11EN, H_CALL, 0x5352D0, 2,
        0x5355AE, GAME_11EN, H_CALL, 0x535570, 1,
        0x5355FF, GAME_11EN, H_CALL, 0x535570, 2,
        0x5347D3, GAME_STEAM, H_CALL, 0x534780, 1,
        0x534821, GAME_STEAM, H_CALL, 0x534780, 2,
        0x5351DE, GAME_STEAM, H_CALL, 0x5351A0, 1,
        0x53522F, GAME_STEAM, H_CALL, 0x5351A0, 2,
        0x53547E, GAME_STEAM, H_CALL, 0x535440, 1,
        0x5354CF, GAME_STEAM, H_CALL, 0x535440, 2>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::TargetJustDown)
    static int address;
    static int global_address;
    static const int id = 0x4AA460;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA460, 0x4AA480, 0x4AA330>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x4712F2, GAME_10EN, H_CALL, 0x4700E7, 1,
        0x5349F2, GAME_10EN, H_CALL, 0x534890, 1,
        0x534D4C, GAME_10EN, H_CALL, 0x534890, 2,
        0x4712F2, GAME_11EN, H_CALL, 0x4700E7, 1,
        0x534A12, GAME_11EN, H_CALL, 0x5348B0, 1,
        0x534D6C, GAME_11EN, H_CALL, 0x5348B0, 2,
        0x4711D2, GAME_STEAM, H_CALL, 0x46FFC7, 1,
        0x5348E2, GAME_STEAM, H_CALL, 0x534780, 1,
        0x534C3C, GAME_STEAM, H_CALL, 0x534780, 2>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetTarget)
    static int address;
    static int global_address;
    static const int id = 0x4AA4D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA4D0, 0x4AA4F0, 0x4AA3A0>;
    // total references count: 10en (9), 11en (9), steam (9)
    using refs_t = RefList<
        0x472155, GAME_10EN, H_CALL, 0x4700E7, 1,
        0x47358C, GAME_10EN, H_CALL, 0x4700E7, 2,
        0x519C24, GAME_10EN, H_CALL, 0x5199F0, 1,
        0x51AAA1, GAME_10EN, H_CALL, 0x51A9C0, 1,
        0x534CDF, GAME_10EN, H_CALL, 0x534890, 1,
        0x53536A, GAME_10EN, H_CALL, 0x5352B0, 1,
        0x53560A, GAME_10EN, H_CALL, 0x535550, 1,
        0x537B8D, GAME_10EN, H_CALL, 0x537270, 1,
        0x538104, GAME_10EN, H_CALL, 0x537270, 2,
        0x472155, GAME_11EN, H_CALL, 0x4700E7, 1,
        0x47358C, GAME_11EN, H_CALL, 0x4700E7, 2,
        0x519C44, GAME_11EN, H_CALL, 0x519A10, 1,
        0x51AAC1, GAME_11EN, H_CALL, 0x51A9E0, 1,
        0x534CFF, GAME_11EN, H_CALL, 0x5348B0, 1,
        0x53538A, GAME_11EN, H_CALL, 0x5352D0, 1,
        0x53562A, GAME_11EN, H_CALL, 0x535570, 1,
        0x537BAD, GAME_11EN, H_CALL, 0x537290, 1,
        0x538124, GAME_11EN, H_CALL, 0x537290, 2,
        0x472035, GAME_STEAM, H_CALL, 0x46FFC7, 1,
        0x47346C, GAME_STEAM, H_CALL, 0x46FFC7, 2,
        0x519B14, GAME_STEAM, H_CALL, 0x5198E0, 1,
        0x51A991, GAME_STEAM, H_CALL, 0x51A8B0, 1,
        0x534BCF, GAME_STEAM, H_CALL, 0x534780, 1,
        0x53525A, GAME_STEAM, H_CALL, 0x5351A0, 1,
        0x5354FA, GAME_STEAM, H_CALL, 0x535440, 1,
        0x537A7D, GAME_STEAM, H_CALL, 0x537160, 1,
        0x537FF4, GAME_STEAM, H_CALL, 0x537160, 2>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::CycleWeaponRightJustDown)
    static int address;
    static int global_address;
    static const int id = 0x4AA530;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA530, 0x4AA550, 0x4AA400>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x5345F8, GAME_10EN, H_CALL, 0x5345A0, 1,
        0x534618, GAME_11EN, H_CALL, 0x5345C0, 1,
        0x5344E8, GAME_STEAM, H_CALL, 0x534490, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::CycleWeaponLeftJustDown)
    static int address;
    static int global_address;
    static const int id = 0x4AA560;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA560, 0x4AA580, 0x4AA430>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x5346B2, GAME_10EN, H_CALL, 0x5345A0, 1,
        0x5346D2, GAME_11EN, H_CALL, 0x5345C0, 1,
        0x5345A2, GAME_STEAM, H_CALL, 0x534490, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::ChangeStationJustDown)
    static int address;
    static int global_address;
    static const int id = 0x4AA590;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA590, 0x4AA5B0, 0x4AA460>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x5FB7D6, GAME_10EN, H_CALL, 0x5FB600, 1,
        0x5FB7F6, GAME_11EN, H_CALL, 0x5FB620, 1,
        0x5FB436, GAME_STEAM, H_CALL, 0x5FB260, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::CycleCameraModeJustDown)
    static int address;
    static int global_address;
    static const int id = 0x4AA630;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA630, 0x4AA650, 0x4AA500>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x473912, GAME_10EN, H_CALL, 0x4700E7, 1,
        0x473912, GAME_11EN, H_CALL, 0x4700E7, 1,
        0x4737F2, GAME_STEAM, H_CALL, 0x46FFC7, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::CycleCameraModeDownJustDown)
    static int address;
    static int global_address;
    static const int id = 0x4AA6C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA6C0, 0x4AA6E0, 0x4AA590>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x470323, GAME_10EN, H_CALL, 0x4700E7, 1,
        0x4710DF, GAME_10EN, H_CALL, 0x4700E7, 2,
        0x470323, GAME_11EN, H_CALL, 0x4700E7, 1,
        0x4710DF, GAME_11EN, H_CALL, 0x4700E7, 2,
        0x470203, GAME_STEAM, H_CALL, 0x46FFC7, 1,
        0x470FBF, GAME_STEAM, H_CALL, 0x46FFC7, 2>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::CycleCameraModeUpJustDown)
    static int address;
    static int global_address;
    static const int id = 0x4AA700;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA700, 0x4AA720, 0x4AA5D0>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x4702B8, GAME_10EN, H_CALL, 0x4700E7, 1,
        0x471059, GAME_10EN, H_CALL, 0x4700E7, 2,
        0x4702B8, GAME_11EN, H_CALL, 0x4700E7, 1,
        0x471059, GAME_11EN, H_CALL, 0x4700E7, 2,
        0x470198, GAME_STEAM, H_CALL, 0x46FFC7, 1,
        0x470F39, GAME_STEAM, H_CALL, 0x46FFC7, 2>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetAccelerate)
    static int address;
    static int global_address;
    static const int id = 0x4AA760;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA760, 0x4AA780, 0x4AA630>;
    // total references count: 10en (19), 11en (19), steam (19)
    using refs_t = RefList<
        0x51A4C9, GAME_10EN, H_CALL, 0x51A370, 1,
        0x51DE45, GAME_10EN, H_CALL, 0x51CA70, 1,
        0x5377A6, GAME_10EN, H_CALL, 0x537270, 1,
        0x589100, GAME_10EN, H_CALL, 0x588DE0, 1,
        0x58918A, GAME_10EN, H_CALL, 0x588DE0, 2,
        0x5891DE, GAME_10EN, H_CALL, 0x588DE0, 3,
        0x597DA0, GAME_10EN, H_CALL, 0x593030, 1,
        0x5A4CAF, GAME_10EN, H_CALL, 0x5A4BC0, 1,
        0x5B5DB8, GAME_10EN, H_CALL, 0x5B54C0, 1,
        0x5B6A51, GAME_10EN, H_CALL, 0x5B54C0, 2,
        0x5EE3B1, GAME_10EN, H_CALL, 0x5EE210, 1,
        0x5EE3C0, GAME_10EN, H_CALL, 0x5EE210, 2,
        0x5F1107, GAME_10EN, H_CALL, 0x5F0EA0, 1,
        0x5F33D6, GAME_10EN, H_CALL, 0x5F3100, 1,
        0x5F37E3, GAME_10EN, H_CALL, 0x5F3770, 1,
        0x5F3E64, GAME_10EN, H_CALL, 0x5F3DB0, 1,
        0x60A790, GAME_10EN, H_CALL, 0x60A540, 1,
        0x60A7F7, GAME_10EN, H_CALL, 0x60A540, 2,
        0x60A84B, GAME_10EN, H_CALL, 0x60A540, 3,
        0x51A4E9, GAME_11EN, H_CALL, 0x51A390, 1,
        0x51DE65, GAME_11EN, H_CALL, 0x51CA90, 1,
        0x5377C6, GAME_11EN, H_CALL, 0x537290, 1,
        0x589120, GAME_11EN, H_CALL, 0x588E00, 1,
        0x5891AA, GAME_11EN, H_CALL, 0x588E00, 2,
        0x5891FE, GAME_11EN, H_CALL, 0x588E00, 3,
        0x597DC0, GAME_11EN, H_CALL, 0x593050, 1,
        0x5A4CCF, GAME_11EN, H_CALL, 0x5A4BE0, 1,
        0x5B5DD8, GAME_11EN, H_CALL, 0x5B54E0, 1,
        0x5B6A71, GAME_11EN, H_CALL, 0x5B54E0, 2,
        0x5EE3D1, GAME_11EN, H_CALL, 0x5EE230, 1,
        0x5EE3E0, GAME_11EN, H_CALL, 0x5EE230, 2,
        0x5F1127, GAME_11EN, H_CALL, 0x5F0EC0, 1,
        0x5F33F6, GAME_11EN, H_CALL, 0x5F3120, 1,
        0x5F3803, GAME_11EN, H_CALL, 0x5F3790, 1,
        0x5F3E84, GAME_11EN, H_CALL, 0x5F3DD0, 1,
        0x60A770, GAME_11EN, H_CALL, 0x60A520, 1,
        0x60A7D7, GAME_11EN, H_CALL, 0x60A520, 2,
        0x60A82B, GAME_11EN, H_CALL, 0x60A520, 3,
        0x51A3B9, GAME_STEAM, H_CALL, 0x51A260, 1,
        0x51DD35, GAME_STEAM, H_CALL, 0x51C960, 1,
        0x537696, GAME_STEAM, H_CALL, 0x537160, 1,
        0x588F30, GAME_STEAM, H_CALL, 0x588C10, 1,
        0x588FBA, GAME_STEAM, H_CALL, 0x588C10, 2,
        0x58900E, GAME_STEAM, H_CALL, 0x588C10, 3,
        0x597BD0, GAME_STEAM, H_CALL, 0x592E60, 1,
        0x5A4ADF, GAME_STEAM, H_CALL, 0x5A49F0, 1,
        0x5B5BE8, GAME_STEAM, H_CALL, 0x5B52F0, 1,
        0x5B6881, GAME_STEAM, H_CALL, 0x5B52F0, 2,
        0x5EE011, GAME_STEAM, H_CALL, 0x5EDE70, 1,
        0x5EE020, GAME_STEAM, H_CALL, 0x5EDE70, 2,
        0x5F0D67, GAME_STEAM, H_CALL, 0x5F0B00, 1,
        0x5F3036, GAME_STEAM, H_CALL, 0x5F2D60, 1,
        0x5F3443, GAME_STEAM, H_CALL, 0x5F33D0, 1,
        0x5F3AC4, GAME_STEAM, H_CALL, 0x5F3A10, 1,
        0x60A3B0, GAME_STEAM, H_CALL, 0x60A160, 1,
        0x60A417, GAME_STEAM, H_CALL, 0x60A160, 2,
        0x60A46B, GAME_STEAM, H_CALL, 0x60A160, 3>;
    using def_t = short(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::WeaponJustDown)
    static int address;
    static int global_address;
    static const int id = 0x4AA7B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA7B0, 0x4AA7D0, 0x4AA680>;
    // total references count: 10en (7), 11en (7), steam (7)
    using refs_t = RefList<
        0x47F2AA, GAME_10EN, H_CALL, 0x47F009, 1,
        0x534BBF, GAME_10EN, H_CALL, 0x534890, 1,
        0x534C3D, GAME_10EN, H_CALL, 0x534890, 2,
        0x534C9E, GAME_10EN, H_CALL, 0x534890, 3,
        0x535658, GAME_10EN, H_CALL, 0x535550, 1,
        0x53797D, GAME_10EN, H_CALL, 0x537270, 1,
        0x5936D5, GAME_10EN, H_CALL, 0x593030, 1,
        0x47F2AA, GAME_11EN, H_CALL, 0x47F009, 1,
        0x534BDF, GAME_11EN, H_CALL, 0x5348B0, 1,
        0x534C5D, GAME_11EN, H_CALL, 0x5348B0, 2,
        0x534CBE, GAME_11EN, H_CALL, 0x5348B0, 3,
        0x535678, GAME_11EN, H_CALL, 0x535570, 1,
        0x53799D, GAME_11EN, H_CALL, 0x537290, 1,
        0x5936F5, GAME_11EN, H_CALL, 0x593050, 1,
        0x47F18A, GAME_STEAM, H_CALL, 0x47EEE9, 1,
        0x534AAF, GAME_STEAM, H_CALL, 0x534780, 1,
        0x534B2D, GAME_STEAM, H_CALL, 0x534780, 2,
        0x534B8E, GAME_STEAM, H_CALL, 0x534780, 3,
        0x535548, GAME_STEAM, H_CALL, 0x535440, 1,
        0x53786D, GAME_STEAM, H_CALL, 0x537160, 1,
        0x593505, GAME_STEAM, H_CALL, 0x592E60, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetWeapon)
    static int address;
    static int global_address;
    static const int id = 0x4AA830;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA830, 0x4AA850, 0x4AA700>;
    // total references count: 10en (7), 11en (7), steam (7)
    using refs_t = RefList<
        0x47D4F3, GAME_10EN, H_CALL, 0x47CE73, 1,
        0x53475B, GAME_10EN, H_CALL, 0x5345A0, 1,
        0x534B02, GAME_10EN, H_CALL, 0x534890, 1,
        0x534C6B, GAME_10EN, H_CALL, 0x534890, 2,
        0x53538F, GAME_10EN, H_CALL, 0x5352B0, 1,
        0x535754, GAME_10EN, H_CALL, 0x535550, 1,
        0x5374B0, GAME_10EN, H_CALL, 0x537270, 1,
        0x47D4F3, GAME_11EN, H_CALL, 0x47CE73, 1,
        0x53477B, GAME_11EN, H_CALL, 0x5345C0, 1,
        0x534B22, GAME_11EN, H_CALL, 0x5348B0, 1,
        0x534C8B, GAME_11EN, H_CALL, 0x5348B0, 2,
        0x5353AF, GAME_11EN, H_CALL, 0x5352D0, 1,
        0x535774, GAME_11EN, H_CALL, 0x535570, 1,
        0x5374D0, GAME_11EN, H_CALL, 0x537290, 1,
        0x47D3D3, GAME_STEAM, H_CALL, 0x47CD53, 1,
        0x53464B, GAME_STEAM, H_CALL, 0x534490, 1,
        0x5349F2, GAME_STEAM, H_CALL, 0x534780, 1,
        0x534B5B, GAME_STEAM, H_CALL, 0x534780, 2,
        0x53527F, GAME_STEAM, H_CALL, 0x5351A0, 1,
        0x535644, GAME_STEAM, H_CALL, 0x535440, 1,
        0x5373A0, GAME_STEAM, H_CALL, 0x537160, 1>;
    using def_t = short(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::ExitVehicleJustDown)
    static int address;
    static int global_address;
    static const int id = 0x4AA870;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA870, 0x4AA890, 0x4AA740>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x4BD730, GAME_10EN, H_CALL, 0x4BCA90, 1,
        0x4BD90A, GAME_10EN, H_CALL, 0x4BCA90, 2,
        0x53495B, GAME_10EN, H_CALL, 0x534890, 1,
        0x4BD750, GAME_11EN, H_CALL, 0x4BCAB0, 1,
        0x4BD92A, GAME_11EN, H_CALL, 0x4BCAB0, 2,
        0x53497B, GAME_11EN, H_CALL, 0x5348B0, 1,
        0x4BD600, GAME_STEAM, H_CALL, 0x4BC960, 1,
        0x4BD7DA, GAME_STEAM, H_CALL, 0x4BC960, 2,
        0x53484B, GAME_STEAM, H_CALL, 0x534780, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetExitVehicle)
    static int address;
    static int global_address;
    static const int id = 0x4AA8F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA8F0, 0x4AA910, 0x4AA7C0>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x4BD743, GAME_10EN, H_CALL, 0x4BCA90, 1,
        0x588E15, GAME_10EN, H_CALL, 0x588DE0, 1,
        0x60A575, GAME_10EN, H_CALL, 0x60A540, 1,
        0x4BD763, GAME_11EN, H_CALL, 0x4BCAB0, 1,
        0x588E35, GAME_11EN, H_CALL, 0x588E00, 1,
        0x60A555, GAME_11EN, H_CALL, 0x60A520, 1,
        0x4BD613, GAME_STEAM, H_CALL, 0x4BC960, 1,
        0x588C45, GAME_STEAM, H_CALL, 0x588C10, 1,
        0x60A195, GAME_STEAM, H_CALL, 0x60A160, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetBrake)
    static int address;
    static int global_address;
    static const int id = 0x4AA960;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA960, 0x4AA980, 0x4AA830>;
    // total references count: 10en (17), 11en (17), steam (17)
    using refs_t = RefList<
        0x51A4EB, GAME_10EN, H_CALL, 0x51A370, 1,
        0x5377EE, GAME_10EN, H_CALL, 0x537270, 1,
        0x5890ED, GAME_10EN, H_CALL, 0x588DE0, 1,
        0x5891B6, GAME_10EN, H_CALL, 0x588DE0, 2,
        0x58920B, GAME_10EN, H_CALL, 0x588DE0, 3,
        0x5A4BED, GAME_10EN, H_CALL, 0x5A4BC0, 1,
        0x5B5DA6, GAME_10EN, H_CALL, 0x5B54C0, 1,
        0x5B6A3F, GAME_10EN, H_CALL, 0x5B54C0, 2,
        0x5EE3A5, GAME_10EN, H_CALL, 0x5EE210, 1,
        0x5EE3CC, GAME_10EN, H_CALL, 0x5EE210, 2,
        0x5F1115, GAME_10EN, H_CALL, 0x5F0EA0, 1,
        0x5F33E2, GAME_10EN, H_CALL, 0x5F3100, 1,
        0x5F37F0, GAME_10EN, H_CALL, 0x5F3770, 1,
        0x5F3E72, GAME_10EN, H_CALL, 0x5F3DB0, 1,
        0x60A77D, GAME_10EN, H_CALL, 0x60A540, 1,
        0x60A823, GAME_10EN, H_CALL, 0x60A540, 2,
        0x60A878, GAME_10EN, H_CALL, 0x60A540, 3,
        0x51A50B, GAME_11EN, H_CALL, 0x51A390, 1,
        0x53780E, GAME_11EN, H_CALL, 0x537290, 1,
        0x58910D, GAME_11EN, H_CALL, 0x588E00, 1,
        0x5891D6, GAME_11EN, H_CALL, 0x588E00, 2,
        0x58922B, GAME_11EN, H_CALL, 0x588E00, 3,
        0x5A4C0D, GAME_11EN, H_CALL, 0x5A4BE0, 1,
        0x5B5DC6, GAME_11EN, H_CALL, 0x5B54E0, 1,
        0x5B6A5F, GAME_11EN, H_CALL, 0x5B54E0, 2,
        0x5EE3C5, GAME_11EN, H_CALL, 0x5EE230, 1,
        0x5EE3EC, GAME_11EN, H_CALL, 0x5EE230, 2,
        0x5F1135, GAME_11EN, H_CALL, 0x5F0EC0, 1,
        0x5F3402, GAME_11EN, H_CALL, 0x5F3120, 1,
        0x5F3810, GAME_11EN, H_CALL, 0x5F3790, 1,
        0x5F3E92, GAME_11EN, H_CALL, 0x5F3DD0, 1,
        0x60A75D, GAME_11EN, H_CALL, 0x60A520, 1,
        0x60A803, GAME_11EN, H_CALL, 0x60A520, 2,
        0x60A858, GAME_11EN, H_CALL, 0x60A520, 3,
        0x51A3DB, GAME_STEAM, H_CALL, 0x51A260, 1,
        0x5376DE, GAME_STEAM, H_CALL, 0x537160, 1,
        0x588F1D, GAME_STEAM, H_CALL, 0x588C10, 1,
        0x588FE6, GAME_STEAM, H_CALL, 0x588C10, 2,
        0x58903B, GAME_STEAM, H_CALL, 0x588C10, 3,
        0x5A4A1D, GAME_STEAM, H_CALL, 0x5A49F0, 1,
        0x5B5BD6, GAME_STEAM, H_CALL, 0x5B52F0, 1,
        0x5B686F, GAME_STEAM, H_CALL, 0x5B52F0, 2,
        0x5EE005, GAME_STEAM, H_CALL, 0x5EDE70, 1,
        0x5EE02C, GAME_STEAM, H_CALL, 0x5EDE70, 2,
        0x5F0D75, GAME_STEAM, H_CALL, 0x5F0B00, 1,
        0x5F3042, GAME_STEAM, H_CALL, 0x5F2D60, 1,
        0x5F3450, GAME_STEAM, H_CALL, 0x5F33D0, 1,
        0x5F3AD2, GAME_STEAM, H_CALL, 0x5F3A10, 1,
        0x60A39D, GAME_STEAM, H_CALL, 0x60A160, 1,
        0x60A443, GAME_STEAM, H_CALL, 0x60A160, 2,
        0x60A498, GAME_STEAM, H_CALL, 0x60A160, 3>;
    using def_t = short(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetHandBrake)
    static int address;
    static int global_address;
    static const int id = 0x4AA9B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA9B0, 0x4AA9D0, 0x4AA880>;
    // total references count: 10en (7), 11en (7), steam (7)
    using refs_t = RefList<
        0x588E6C, GAME_10EN, H_CALL, 0x588DE0, 1,
        0x5981EA, GAME_10EN, H_CALL, 0x593030, 1,
        0x598327, GAME_10EN, H_CALL, 0x593030, 2,
        0x5A14E0, GAME_10EN, H_CALL, 0x59FE90, 1,
        0x5A2367, GAME_10EN, H_CALL, 0x59FE90, 2,
        0x5EF3F6, GAME_10EN, H_CALL, 0x5EE7B0, 1,
        0x60A5A9, GAME_10EN, H_CALL, 0x60A540, 1,
        0x588E8C, GAME_11EN, H_CALL, 0x588E00, 1,
        0x59820A, GAME_11EN, H_CALL, 0x593050, 1,
        0x598347, GAME_11EN, H_CALL, 0x593050, 2,
        0x5A1500, GAME_11EN, H_CALL, 0x59FEB0, 1,
        0x5A2387, GAME_11EN, H_CALL, 0x59FEB0, 2,
        0x5EF416, GAME_11EN, H_CALL, 0x5EE7D0, 1,
        0x60A589, GAME_11EN, H_CALL, 0x60A520, 1,
        0x588C9C, GAME_STEAM, H_CALL, 0x588C10, 1,
        0x59801A, GAME_STEAM, H_CALL, 0x592E60, 1,
        0x598157, GAME_STEAM, H_CALL, 0x592E60, 2,
        0x5A1310, GAME_STEAM, H_CALL, 0x59FCC0, 1,
        0x5A2197, GAME_STEAM, H_CALL, 0x59FCC0, 2,
        0x5EF056, GAME_STEAM, H_CALL, 0x5EE410, 1,
        0x60A1C9, GAME_STEAM, H_CALL, 0x60A160, 1>;
    using def_t = short(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::CarGunJustDown)
    static int address;
    static int global_address;
    static const int id = 0x4AA9F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AA9F0, 0x4AAA10, 0x4AA8C0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x58667D, GAME_10EN, H_CALL, 0x5864C0, 1,
        0x593C51, GAME_10EN, H_CALL, 0x593030, 1,
        0x597F6F, GAME_10EN, H_CALL, 0x593030, 2,
        0x60EAFC, GAME_10EN, H_CALL, 0x60E3E0, 1,
        0x58669D, GAME_11EN, H_CALL, 0x5864E0, 1,
        0x593C71, GAME_11EN, H_CALL, 0x593050, 1,
        0x597F8F, GAME_11EN, H_CALL, 0x593050, 2,
        0x60EADC, GAME_11EN, H_CALL, 0x60E3C0, 1,
        0x5864AD, GAME_STEAM, H_CALL, 0x5862F0, 1,
        0x593A81, GAME_STEAM, H_CALL, 0x592E60, 1,
        0x597D9F, GAME_STEAM, H_CALL, 0x592E60, 2,
        0x60E71C, GAME_STEAM, H_CALL, 0x60E000, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetCarGunFired)
    static int address;
    static int global_address;
    static const int id = 0x4AAA60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AAA60, 0x4AAA80, 0x4AA930>;
    // total references count: 10en (9), 11en (9), steam (9)
    using refs_t = RefList<
        0x475497, GAME_10EN, H_CALL, 0x474F16, 1,
        0x4800F9, GAME_10EN, H_CALL, 0x47FE8C, 1,
        0x57AB51, GAME_10EN, H_CALL, 0x57AB30, 1,
        0x5C919A, GAME_10EN, H_CALL, 0x5C9170, 1,
        0x5C92E2, GAME_10EN, H_CALL, 0x5C91E0, 1,
        0x5C9474, GAME_10EN, H_CALL, 0x5C91E0, 2,
        0x5C970F, GAME_10EN, H_CALL, 0x5C9540, 1,
        0x5C99B6, GAME_10EN, H_CALL, 0x5C97B0, 1,
        0x637B82, GAME_10EN, H_CALL, 0x637600, 1,
        0x475497, GAME_11EN, H_CALL, 0x474F16, 1,
        0x4800F9, GAME_11EN, H_CALL, 0x47FE8C, 1,
        0x57AB71, GAME_11EN, H_CALL, 0x57AB50, 1,
        0x5C91BA, GAME_11EN, H_CALL, 0x5C9190, 1,
        0x5C9302, GAME_11EN, H_CALL, 0x5C9200, 1,
        0x5C9494, GAME_11EN, H_CALL, 0x5C9200, 2,
        0x5C972F, GAME_11EN, H_CALL, 0x5C9560, 1,
        0x5C99D6, GAME_11EN, H_CALL, 0x5C97D0, 1,
        0x637BD2, GAME_11EN, H_CALL, 0x637650, 1,
        0x475377, GAME_STEAM, H_CALL, 0x474DF6, 1,
        0x47FFD9, GAME_STEAM, H_CALL, 0x47FD6C, 1,
        0x57AA41, GAME_STEAM, H_CALL, 0x57AA20, 1,
        0x5C8FCA, GAME_STEAM, H_CALL, 0x5C8FA0, 1,
        0x5C9112, GAME_STEAM, H_CALL, 0x5C9010, 1,
        0x5C92A4, GAME_STEAM, H_CALL, 0x5C9010, 2,
        0x5C953F, GAME_STEAM, H_CALL, 0x5C9370, 1,
        0x5C97E6, GAME_STEAM, H_CALL, 0x5C95E0, 1,
        0x637812, GAME_STEAM, H_CALL, 0x6372C0, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::HornJustDown)
    static int address;
    static int global_address;
    static const int id = 0x4AAAC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AAAC0, 0x4AAAE0, 0x4AA990>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x5946DC, GAME_10EN, H_CALL, 0x593030, 1,
        0x59D7F2, GAME_10EN, H_CALL, 0x59D260, 1,
        0x5946FC, GAME_11EN, H_CALL, 0x593050, 1,
        0x59D812, GAME_11EN, H_CALL, 0x59D280, 1,
        0x59450C, GAME_STEAM, H_CALL, 0x592E60, 1,
        0x59D622, GAME_STEAM, H_CALL, 0x59D090, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetHorn)
    static int address;
    static int global_address;
    static const int id = 0x4AAB60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AAB60, 0x4AAB80, 0x4AAA30>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x445CE3, GAME_10EN, H_CALL, 0x444BE0, 1,
        0x597BAE, GAME_10EN, H_CALL, 0x593030, 1,
        0x5B7049, GAME_10EN, H_CALL, 0x5B54C0, 1,
        0x61217A, GAME_10EN, H_CALL, 0x60E3E0, 1,
        0x445CE3, GAME_11EN, H_CALL, 0x444BE0, 1,
        0x597BCE, GAME_11EN, H_CALL, 0x593050, 1,
        0x5B7069, GAME_11EN, H_CALL, 0x5B54E0, 1,
        0x61215A, GAME_11EN, H_CALL, 0x60E3C0, 1,
        0x445BF3, GAME_STEAM, H_CALL, 0x444AF0, 1,
        0x5979DE, GAME_STEAM, H_CALL, 0x592E60, 1,
        0x5B6E79, GAME_STEAM, H_CALL, 0x5B52F0, 1,
        0x611D9A, GAME_STEAM, H_CALL, 0x60E000, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetLookBehindForPed)
    static int address;
    static int global_address;
    static const int id = 0x4AAC00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AAC00, 0x4AAC20, 0x4AAAD0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x46F8BA, GAME_10EN, H_CALL, 0x46F890, 1,
        0x475BF0, GAME_10EN, H_CALL, 0x4758C6, 1,
        0x48405D, GAME_10EN, H_CALL, 0x48351A, 1,
        0x5574A9, GAME_10EN, H_CALL, 0x557320, 1,
        0x46F8BA, GAME_11EN, H_CALL, 0x46F890, 1,
        0x475BF0, GAME_11EN, H_CALL, 0x4758C6, 1,
        0x48405D, GAME_11EN, H_CALL, 0x48351A, 1,
        0x5574C9, GAME_11EN, H_CALL, 0x557340, 1,
        0x46F79A, GAME_STEAM, H_CALL, 0x46F770, 1,
        0x475AD0, GAME_STEAM, H_CALL, 0x4757A6, 1,
        0x483F3D, GAME_STEAM, H_CALL, 0x4833FA, 1,
        0x557399, GAME_STEAM, H_CALL, 0x557210, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetLookBehindForCar)
    static int address;
    static int global_address;
    static const int id = 0x4AAC30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AAC30, 0x4AAC50, 0x4AAB00>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x475BDD, GAME_10EN, H_CALL, 0x4758C6, 1,
        0x483F87, GAME_10EN, H_CALL, 0x48351A, 1,
        0x475BDD, GAME_11EN, H_CALL, 0x4758C6, 1,
        0x483F87, GAME_11EN, H_CALL, 0x48351A, 1,
        0x475ABD, GAME_STEAM, H_CALL, 0x4757A6, 1,
        0x483E67, GAME_STEAM, H_CALL, 0x4833FA, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetLookRight)
    static int address;
    static int global_address;
    static const int id = 0x4AAC60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AAC60, 0x4AAC80, 0x4AAB30>;
    // total references count: 10en (8), 11en (8), steam (8)
    using refs_t = RefList<
        0x475C16, GAME_10EN, H_CALL, 0x4758C6, 1,
        0x483FFF, GAME_10EN, H_CALL, 0x48351A, 1,
        0x5B6172, GAME_10EN, H_CALL, 0x5B54C0, 1,
        0x5B6EA0, GAME_10EN, H_CALL, 0x5B54C0, 2,
        0x5B6F8D, GAME_10EN, H_CALL, 0x5B54C0, 3,
        0x5C92A0, GAME_10EN, H_CALL, 0x5C91E0, 1,
        0x5C95FE, GAME_10EN, H_CALL, 0x5C9540, 1,
        0x5C986E, GAME_10EN, H_CALL, 0x5C97B0, 1,
        0x475C16, GAME_11EN, H_CALL, 0x4758C6, 1,
        0x483FFF, GAME_11EN, H_CALL, 0x48351A, 1,
        0x5B6192, GAME_11EN, H_CALL, 0x5B54E0, 1,
        0x5B6EC0, GAME_11EN, H_CALL, 0x5B54E0, 2,
        0x5B6FAD, GAME_11EN, H_CALL, 0x5B54E0, 3,
        0x5C92C0, GAME_11EN, H_CALL, 0x5C9200, 1,
        0x5C961E, GAME_11EN, H_CALL, 0x5C9560, 1,
        0x5C988E, GAME_11EN, H_CALL, 0x5C97D0, 1,
        0x475AF6, GAME_STEAM, H_CALL, 0x4757A6, 1,
        0x483EDF, GAME_STEAM, H_CALL, 0x4833FA, 1,
        0x5B5FA2, GAME_STEAM, H_CALL, 0x5B52F0, 1,
        0x5B6CD0, GAME_STEAM, H_CALL, 0x5B52F0, 2,
        0x5B6DBD, GAME_STEAM, H_CALL, 0x5B52F0, 3,
        0x5C90D0, GAME_STEAM, H_CALL, 0x5C9010, 1,
        0x5C942E, GAME_STEAM, H_CALL, 0x5C9370, 1,
        0x5C969E, GAME_STEAM, H_CALL, 0x5C95E0, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetLookLeft)
    static int address;
    static int global_address;
    static const int id = 0x4AAC90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AAC90, 0x4AACB0, 0x4AAB60>;
    // total references count: 10en (8), 11en (8), steam (8)
    using refs_t = RefList<
        0x475C03, GAME_10EN, H_CALL, 0x4758C6, 1,
        0x483FCB, GAME_10EN, H_CALL, 0x48351A, 1,
        0x5B6198, GAME_10EN, H_CALL, 0x5B54C0, 1,
        0x5B6EC6, GAME_10EN, H_CALL, 0x5B54C0, 2,
        0x5B6F67, GAME_10EN, H_CALL, 0x5B54C0, 3,
        0x5C9288, GAME_10EN, H_CALL, 0x5C91E0, 1,
        0x5C95E6, GAME_10EN, H_CALL, 0x5C9540, 1,
        0x5C9856, GAME_10EN, H_CALL, 0x5C97B0, 1,
        0x475C03, GAME_11EN, H_CALL, 0x4758C6, 1,
        0x483FCB, GAME_11EN, H_CALL, 0x48351A, 1,
        0x5B61B8, GAME_11EN, H_CALL, 0x5B54E0, 1,
        0x5B6EE6, GAME_11EN, H_CALL, 0x5B54E0, 2,
        0x5B6F87, GAME_11EN, H_CALL, 0x5B54E0, 3,
        0x5C92A8, GAME_11EN, H_CALL, 0x5C9200, 1,
        0x5C9606, GAME_11EN, H_CALL, 0x5C9560, 1,
        0x5C9876, GAME_11EN, H_CALL, 0x5C97D0, 1,
        0x475AE3, GAME_STEAM, H_CALL, 0x4757A6, 1,
        0x483EAB, GAME_STEAM, H_CALL, 0x4833FA, 1,
        0x5B5FC8, GAME_STEAM, H_CALL, 0x5B52F0, 1,
        0x5B6CF6, GAME_STEAM, H_CALL, 0x5B52F0, 2,
        0x5B6D97, GAME_STEAM, H_CALL, 0x5B52F0, 3,
        0x5C90B8, GAME_STEAM, H_CALL, 0x5C9010, 1,
        0x5C9416, GAME_STEAM, H_CALL, 0x5C9370, 1,
        0x5C9686, GAME_STEAM, H_CALL, 0x5C95E0, 1>;
    using def_t = bool(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetAnalogueUpDown)
    static int address;
    static int global_address;
    static const int id = 0x4AACC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AACC0, 0x4AACE0, 0x4AAB90>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x4976E8, GAME_10EN, H_CALL, 0x49739F, 1,
        0x497780, GAME_10EN, H_CALL, 0x49739F, 2,
        0x497BA3, GAME_10EN, H_CALL, 0x49739F, 3,
        0x497C35, GAME_10EN, H_CALL, 0x49739F, 4,
        0x4976F8, GAME_11EN, H_CALL, 0x4973AF, 1,
        0x497790, GAME_11EN, H_CALL, 0x4973AF, 2,
        0x497BB3, GAME_11EN, H_CALL, 0x4973AF, 3,
        0x497C45, GAME_11EN, H_CALL, 0x4973AF, 4,
        0x4975F8, GAME_STEAM, H_CALL, 0x4972AF, 1,
        0x497690, GAME_STEAM, H_CALL, 0x4972AF, 2,
        0x497AB3, GAME_STEAM, H_CALL, 0x4972AF, 3,
        0x497B45, GAME_STEAM, H_CALL, 0x4972AF, 4>;
    using def_t = short(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetPedWalkUpDown)
    static int address;
    static int global_address;
    static const int id = 0x4AAD40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AAD40, 0x4AAD60, 0x4AAC10>;
    // total references count: 10en (8), 11en (8), steam (8)
    using refs_t = RefList<
        0x471248, GAME_10EN, H_CALL, 0x4700E7, 1,
        0x507C6E, GAME_10EN, H_CALL, 0x505790, 1,
        0x507E2B, GAME_10EN, H_CALL, 0x505790, 2,
        0x50A57E, GAME_10EN, H_CALL, 0x50A530, 1,
        0x5357FD, GAME_10EN, H_CALL, 0x5357D0, 1,
        0x535BD2, GAME_10EN, H_CALL, 0x535BB0, 1,
        0x535F79, GAME_10EN, H_CALL, 0x535F40, 1,
        0x53791B, GAME_10EN, H_CALL, 0x537270, 1,
        0x471248, GAME_11EN, H_CALL, 0x4700E7, 1,
        0x507C8E, GAME_11EN, H_CALL, 0x5057B0, 1,
        0x507E4B, GAME_11EN, H_CALL, 0x5057B0, 2,
        0x50A59E, GAME_11EN, H_CALL, 0x50A550, 1,
        0x53581D, GAME_11EN, H_CALL, 0x5357F0, 1,
        0x535BF2, GAME_11EN, H_CALL, 0x535BD0, 1,
        0x535F99, GAME_11EN, H_CALL, 0x535F60, 1,
        0x53793B, GAME_11EN, H_CALL, 0x537290, 1,
        0x471128, GAME_STEAM, H_CALL, 0x46FFC7, 1,
        0x507B2E, GAME_STEAM, H_CALL, 0x505650, 1,
        0x507CEB, GAME_STEAM, H_CALL, 0x505650, 2,
        0x50A43E, GAME_STEAM, H_CALL, 0x50A3F0, 1,
        0x5356ED, GAME_STEAM, H_CALL, 0x5356C0, 1,
        0x535AC2, GAME_STEAM, H_CALL, 0x535AA0, 1,
        0x535E69, GAME_STEAM, H_CALL, 0x535E30, 1,
        0x53780B, GAME_STEAM, H_CALL, 0x537160, 1>;
    using def_t = short(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetAnalogueLeftRight)
    static int address;
    static int global_address;
    static const int id = 0x4AADC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AADC0, 0x4AADE0, 0x4AAC90>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x497CCA, GAME_10EN, H_CALL, 0x49739F, 1,
        0x497E99, GAME_10EN, H_CALL, 0x49739F, 2,
        0x497CDA, GAME_11EN, H_CALL, 0x4973AF, 1,
        0x497EA9, GAME_11EN, H_CALL, 0x4973AF, 2,
        0x497BDA, GAME_STEAM, H_CALL, 0x4972AF, 1,
        0x497DA9, GAME_STEAM, H_CALL, 0x4972AF, 2>;
    using def_t = short(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetPedWalkLeftRight)
    static int address;
    static int global_address;
    static const int id = 0x4AAE30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AAE30, 0x4AAE50, 0x4AAD00>;
    // total references count: 10en (10), 11en (10), steam (10)
    using refs_t = RefList<
        0x471230, GAME_10EN, H_CALL, 0x4700E7, 1,
        0x496E2A, GAME_10EN, H_CALL, 0x4965BA, 1,
        0x496ED1, GAME_10EN, H_CALL, 0x4965BA, 2,
        0x507C4A, GAME_10EN, H_CALL, 0x505790, 1,
        0x507E04, GAME_10EN, H_CALL, 0x505790, 2,
        0x50A560, GAME_10EN, H_CALL, 0x50A530, 1,
        0x5357E7, GAME_10EN, H_CALL, 0x5357D0, 1,
        0x535BBD, GAME_10EN, H_CALL, 0x535BB0, 1,
        0x535F63, GAME_10EN, H_CALL, 0x535F40, 1,
        0x5378F9, GAME_10EN, H_CALL, 0x537270, 1,
        0x471230, GAME_11EN, H_CALL, 0x4700E7, 1,
        0x496E3A, GAME_11EN, H_CALL, 0x4965CA, 1,
        0x496EE1, GAME_11EN, H_CALL, 0x4965CA, 2,
        0x507C6A, GAME_11EN, H_CALL, 0x5057B0, 1,
        0x507E24, GAME_11EN, H_CALL, 0x5057B0, 2,
        0x50A580, GAME_11EN, H_CALL, 0x50A550, 1,
        0x535807, GAME_11EN, H_CALL, 0x5357F0, 1,
        0x535BDD, GAME_11EN, H_CALL, 0x535BD0, 1,
        0x535F83, GAME_11EN, H_CALL, 0x535F60, 1,
        0x537919, GAME_11EN, H_CALL, 0x537290, 1,
        0x471110, GAME_STEAM, H_CALL, 0x46FFC7, 1,
        0x496D3A, GAME_STEAM, H_CALL, 0x4964CA, 1,
        0x496DE1, GAME_STEAM, H_CALL, 0x4964CA, 2,
        0x507B0A, GAME_STEAM, H_CALL, 0x505650, 1,
        0x507CC4, GAME_STEAM, H_CALL, 0x505650, 2,
        0x50A420, GAME_STEAM, H_CALL, 0x50A3F0, 1,
        0x5356D7, GAME_STEAM, H_CALL, 0x5356C0, 1,
        0x535AAD, GAME_STEAM, H_CALL, 0x535AA0, 1,
        0x535E53, GAME_STEAM, H_CALL, 0x535E30, 1,
        0x5377E9, GAME_STEAM, H_CALL, 0x537160, 1>;
    using def_t = short(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetCarGunLeftRight)
    static int address;
    static int global_address;
    static const int id = 0x4AAEB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AAEB0, 0x4AAED0, 0x4AAD80>;
    // total references count: 10en (5), 11en (5), steam (5)
    using refs_t = RefList<
        0x57AB72, GAME_10EN, H_CALL, 0x57AB30, 1,
        0x5865B8, GAME_10EN, H_CALL, 0x5864C0, 1,
        0x59DB2A, GAME_10EN, H_CALL, 0x59D260, 1,
        0x5B6EE3, GAME_10EN, H_CALL, 0x5B54C0, 1,
        0x5B6F2C, GAME_10EN, H_CALL, 0x5B54C0, 2,
        0x57AB92, GAME_11EN, H_CALL, 0x57AB50, 1,
        0x5865D8, GAME_11EN, H_CALL, 0x5864E0, 1,
        0x59DB4A, GAME_11EN, H_CALL, 0x59D280, 1,
        0x5B6F03, GAME_11EN, H_CALL, 0x5B54E0, 1,
        0x5B6F4C, GAME_11EN, H_CALL, 0x5B54E0, 2,
        0x57AA62, GAME_STEAM, H_CALL, 0x57AA20, 1,
        0x5863E8, GAME_STEAM, H_CALL, 0x5862F0, 1,
        0x59D95A, GAME_STEAM, H_CALL, 0x59D090, 1,
        0x5B6D13, GAME_STEAM, H_CALL, 0x5B52F0, 1,
        0x5B6D5C, GAME_STEAM, H_CALL, 0x5B52F0, 2>;
    using def_t = short(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetCarGunUpDown)
    static int address;
    static int global_address;
    static const int id = 0x4AAF00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AAF00, 0x4AAF20, 0x4AADD0>;
    // total references count: 10en (9), 11en (9), steam (9)
    using refs_t = RefList<
        0x57ABAE, GAME_10EN, H_CALL, 0x57AB30, 1,
        0x597DB8, GAME_10EN, H_CALL, 0x593030, 1,
        0x59DB48, GAME_10EN, H_CALL, 0x59D260, 1,
        0x5B5ADA, GAME_10EN, H_CALL, 0x5B54C0, 1,
        0x5B5B23, GAME_10EN, H_CALL, 0x5B54C0, 2,
        0x5B6FD4, GAME_10EN, H_CALL, 0x5B54C0, 3,
        0x5B701D, GAME_10EN, H_CALL, 0x5B54C0, 4,
        0x5F37FC, GAME_10EN, H_CALL, 0x5F3770, 1,
        0x60A6C4, GAME_10EN, H_CALL, 0x60A540, 1,
        0x57ABCE, GAME_11EN, H_CALL, 0x57AB50, 1,
        0x597DD8, GAME_11EN, H_CALL, 0x593050, 1,
        0x59DB68, GAME_11EN, H_CALL, 0x59D280, 1,
        0x5B5AFA, GAME_11EN, H_CALL, 0x5B54E0, 1,
        0x5B5B43, GAME_11EN, H_CALL, 0x5B54E0, 2,
        0x5B6FF4, GAME_11EN, H_CALL, 0x5B54E0, 3,
        0x5B703D, GAME_11EN, H_CALL, 0x5B54E0, 4,
        0x5F381C, GAME_11EN, H_CALL, 0x5F3790, 1,
        0x60A6A4, GAME_11EN, H_CALL, 0x60A520, 1,
        0x57AA9E, GAME_STEAM, H_CALL, 0x57AA20, 1,
        0x597BE8, GAME_STEAM, H_CALL, 0x592E60, 1,
        0x59D978, GAME_STEAM, H_CALL, 0x59D090, 1,
        0x5B590A, GAME_STEAM, H_CALL, 0x5B52F0, 1,
        0x5B5953, GAME_STEAM, H_CALL, 0x5B52F0, 2,
        0x5B6E04, GAME_STEAM, H_CALL, 0x5B52F0, 3,
        0x5B6E4D, GAME_STEAM, H_CALL, 0x5B52F0, 4,
        0x5F345C, GAME_STEAM, H_CALL, 0x5F33D0, 1,
        0x60A2E4, GAME_STEAM, H_CALL, 0x60A160, 1>;
    using def_t = short(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetSteeringUpDown)
    static int address;
    static int global_address;
    static const int id = 0x4AAF50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AAF50, 0x4AAF70, 0x4AAE20>;
    // total references count: 10en (7), 11en (7), steam (7)
    using refs_t = RefList<
        0x5A58E4, GAME_10EN, H_CALL, 0x5A5570, 1,
        0x5A599F, GAME_10EN, H_CALL, 0x5A5570, 2,
        0x5B57EF, GAME_10EN, H_CALL, 0x5B54C0, 1,
        0x5B5AB0, GAME_10EN, H_CALL, 0x5B54C0, 2,
        0x5B6E4A, GAME_10EN, H_CALL, 0x5B54C0, 3,
        0x5B6F3D, GAME_10EN, H_CALL, 0x5B54C0, 4,
        0x60A69D, GAME_10EN, H_CALL, 0x60A540, 1,
        0x5A5904, GAME_11EN, H_CALL, 0x5A5590, 1,
        0x5A59BF, GAME_11EN, H_CALL, 0x5A5590, 2,
        0x5B580F, GAME_11EN, H_CALL, 0x5B54E0, 1,
        0x5B5AD0, GAME_11EN, H_CALL, 0x5B54E0, 2,
        0x5B6E6A, GAME_11EN, H_CALL, 0x5B54E0, 3,
        0x5B6F5D, GAME_11EN, H_CALL, 0x5B54E0, 4,
        0x60A67D, GAME_11EN, H_CALL, 0x60A520, 1,
        0x5A5714, GAME_STEAM, H_CALL, 0x5A53A0, 1,
        0x5A57CF, GAME_STEAM, H_CALL, 0x5A53A0, 2,
        0x5B561F, GAME_STEAM, H_CALL, 0x5B52F0, 1,
        0x5B58E0, GAME_STEAM, H_CALL, 0x5B52F0, 2,
        0x5B6C7A, GAME_STEAM, H_CALL, 0x5B52F0, 3,
        0x5B6D6D, GAME_STEAM, H_CALL, 0x5B52F0, 4,
        0x60A2BD, GAME_STEAM, H_CALL, 0x60A160, 1>;
    using def_t = short(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetSteeringLeftRight)
    static int address;
    static int global_address;
    static const int id = 0x4AAFD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AAFD0, 0x4AAFF0, 0x4AAEA0>;
    // total references count: 10en (10), 11en (10), steam (10)
    using refs_t = RefList<
        0x5377CC, GAME_10EN, H_CALL, 0x537270, 1,
        0x588FAD, GAME_10EN, H_CALL, 0x588DE0, 1,
        0x588FDA, GAME_10EN, H_CALL, 0x588DE0, 2,
        0x589035, GAME_10EN, H_CALL, 0x588DE0, 3,
        0x5938B5, GAME_10EN, H_CALL, 0x593030, 1,
        0x5A4CEB, GAME_10EN, H_CALL, 0x5A4BC0, 1,
        0x5B5A86, GAME_10EN, H_CALL, 0x5B54C0, 1,
        0x5B6E74, GAME_10EN, H_CALL, 0x5B54C0, 2,
        0x5B6FAA, GAME_10EN, H_CALL, 0x5B54C0, 3,
        0x60A5F2, GAME_10EN, H_CALL, 0x60A540, 1,
        0x5377EC, GAME_11EN, H_CALL, 0x537290, 1,
        0x588FCD, GAME_11EN, H_CALL, 0x588E00, 1,
        0x588FFA, GAME_11EN, H_CALL, 0x588E00, 2,
        0x589055, GAME_11EN, H_CALL, 0x588E00, 3,
        0x5938D5, GAME_11EN, H_CALL, 0x593050, 1,
        0x5A4D0B, GAME_11EN, H_CALL, 0x5A4BE0, 1,
        0x5B5AA6, GAME_11EN, H_CALL, 0x5B54E0, 1,
        0x5B6E94, GAME_11EN, H_CALL, 0x5B54E0, 2,
        0x5B6FCA, GAME_11EN, H_CALL, 0x5B54E0, 3,
        0x60A5D2, GAME_11EN, H_CALL, 0x60A520, 1,
        0x5376BC, GAME_STEAM, H_CALL, 0x537160, 1,
        0x588DDD, GAME_STEAM, H_CALL, 0x588C10, 1,
        0x588E0A, GAME_STEAM, H_CALL, 0x588C10, 2,
        0x588E65, GAME_STEAM, H_CALL, 0x588C10, 3,
        0x5936E5, GAME_STEAM, H_CALL, 0x592E60, 1,
        0x5A4B1B, GAME_STEAM, H_CALL, 0x5A49F0, 1,
        0x5B58B6, GAME_STEAM, H_CALL, 0x5B52F0, 1,
        0x5B6CA4, GAME_STEAM, H_CALL, 0x5B52F0, 2,
        0x5B6DDA, GAME_STEAM, H_CALL, 0x5B52F0, 3,
        0x60A212, GAME_STEAM, H_CALL, 0x60A160, 1>;
    using def_t = short(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::GetPad)
    static int address;
    static int global_address;
    static const int id = 0x4AB060;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AB060, 0x4AB080, 0x4AAF30>;
    // total references count: 10en (648), 11en (648), steam (648)
    using refs_t = RefList<
        0x406244, GAME_10EN, H_CALL, 0x405FA0, 1,
        0x406276, GAME_10EN, H_CALL, 0x405FA0, 2,
        0x40629F, GAME_10EN, H_CALL, 0x405FA0, 3,
        0x4062C8, GAME_10EN, H_CALL, 0x405FA0, 4,
        0x406308, GAME_10EN, H_CALL, 0x405FA0, 5,
        0x406B2D, GAME_10EN, H_CALL, 0x4069D0, 1,
        0x406BF4, GAME_10EN, H_CALL, 0x4069D0, 2,
        0x407036, GAME_10EN, H_CALL, 0x406D30, 1,
        0x42AD59, GAME_10EN, H_CALL, 0x42AC10, 1,
        0x42AFE7, GAME_10EN, H_CALL, 0x42AE70, 1,
        0x42B0D3, GAME_10EN, H_CALL, 0x42AE70, 2,
        0x42B5C3, GAME_10EN, H_CALL, 0x42AE70, 3,
        0x42B6FC, GAME_10EN, H_CALL, 0x42AE70, 4,
        0x42B788, GAME_10EN, H_CALL, 0x42B730, 1,
        0x42B81A, GAME_10EN, H_CALL, 0x42B7A0, 1,
        0x42B961, GAME_10EN, H_CALL, 0x42B900, 1,
        0x42BE2C, GAME_10EN, H_CALL, 0x42BB70, 1,
        0x42BE54, GAME_10EN, H_CALL, 0x42BB70, 2,
        0x42C217, GAME_10EN, H_CALL, 0x42BB70, 3,
        0x42C23F, GAME_10EN, H_CALL, 0x42BB70, 4,
        0x42C419, GAME_10EN, H_CALL, 0x42BB70, 5,
        0x42C441, GAME_10EN, H_CALL, 0x42BB70, 6,
        0x430D24, GAME_10EN, H_CALL, 0x430A60, 1,
        0x4311B9, GAME_10EN, H_CALL, 0x430A60, 2,
        0x4318C7, GAME_10EN, H_CALL, 0x430A60, 3,
        0x431CA2, GAME_10EN, H_CALL, 0x430A60, 4,
        0x431CD3, GAME_10EN, H_CALL, 0x430A60, 5,
        0x431D20, GAME_10EN, H_CALL, 0x430A60, 6,
        0x431F5D, GAME_10EN, H_CALL, 0x430A60, 7,
        0x432066, GAME_10EN, H_CALL, 0x430A60, 8,
        0x432445, GAME_10EN, H_CALL, 0x430A60, 9,
        0x432554, GAME_10EN, H_CALL, 0x430A60, 10,
        0x432D99, GAME_10EN, H_CALL, 0x430A60, 11,
        0x432EA6, GAME_10EN, H_CALL, 0x430A60, 12,
        0x433CFE, GAME_10EN, H_CALL, 0x430A60, 13,
        0x433DB3, GAME_10EN, H_CALL, 0x430A60, 14,
        0x43C6C6, GAME_10EN, H_CALL, 0x43C600, 1,
        0x43C9B4, GAME_10EN, H_CALL, 0x43C600, 2,
        0x43CD8B, GAME_10EN, H_CALL, 0x43CD70, 1,
        0x440AE9, GAME_10EN, H_CALL, 0x440030, 1,
        0x440CB6, GAME_10EN, H_CALL, 0x440030, 2,
        0x4414A6, GAME_10EN, H_CALL, 0x440030, 3,
        0x441BB9, GAME_10EN, H_CALL, 0x441BB0, 1,
        0x445CDB, GAME_10EN, H_CALL, 0x444BE0, 1,
        0x451718, GAME_10EN, H_CALL, 0x451550, 1,
        0x4580C4, GAME_10EN, H_CALL, 0x457580, 1,
        0x4580D9, GAME_10EN, H_CALL, 0x457580, 2,
        0x460C0D, GAME_10EN, H_CALL, 0x460C00, 1,
        0x46F8B2, GAME_10EN, H_CALL, 0x46F890, 1,
        0x4701E5, GAME_10EN, H_CALL, 0x4700E7, 1,
        0x4702B0, GAME_10EN, H_CALL, 0x4700E7, 2,
        0x47031B, GAME_10EN, H_CALL, 0x4700E7, 3,
        0x471051, GAME_10EN, H_CALL, 0x4700E7, 4,
        0x4710D7, GAME_10EN, H_CALL, 0x4700E7, 5,
        0x4711EA, GAME_10EN, H_CALL, 0x4700E7, 6,
        0x4711FE, GAME_10EN, H_CALL, 0x4700E7, 7,
        0x471228, GAME_10EN, H_CALL, 0x4700E7, 8,
        0x471240, GAME_10EN, H_CALL, 0x4700E7, 9,
        0x471258, GAME_10EN, H_CALL, 0x4700E7, 10,
        0x47126C, GAME_10EN, H_CALL, 0x4700E7, 11,
        0x471280, GAME_10EN, H_CALL, 0x4700E7, 12,
        0x471290, GAME_10EN, H_CALL, 0x4700E7, 13,
        0x4712A0, GAME_10EN, H_CALL, 0x4700E7, 14,
        0x4712EA, GAME_10EN, H_CALL, 0x4700E7, 15,
        0x471349, GAME_10EN, H_CALL, 0x4700E7, 16,
        0x47214D, GAME_10EN, H_CALL, 0x4700E7, 17,
        0x473584, GAME_10EN, H_CALL, 0x4700E7, 18,
        0x4735CD, GAME_10EN, H_CALL, 0x4700E7, 19,
        0x47390A, GAME_10EN, H_CALL, 0x4700E7, 20,
        0x47548F, GAME_10EN, H_CALL, 0x474F16, 1,
        0x475BD5, GAME_10EN, H_CALL, 0x4758C6, 1,
        0x475BE8, GAME_10EN, H_CALL, 0x4758C6, 2,
        0x475BFB, GAME_10EN, H_CALL, 0x4758C6, 3,
        0x475C0E, GAME_10EN, H_CALL, 0x4758C6, 4,
        0x479627, GAME_10EN, H_CALL, 0x479410, 1,
        0x47966A, GAME_10EN, H_CALL, 0x479410, 2,
        0x47968A, GAME_10EN, H_CALL, 0x479410, 3,
        0x47997A, GAME_10EN, H_CALL, 0x479410, 4,
        0x47998B, GAME_10EN, H_CALL, 0x479410, 5,
        0x47999C, GAME_10EN, H_CALL, 0x479410, 6,
        0x4799BF, GAME_10EN, H_CALL, 0x479410, 7,
        0x4799E6, GAME_10EN, H_CALL, 0x479410, 8,
        0x4799F9, GAME_10EN, H_CALL, 0x479410, 9,
        0x479A18, GAME_10EN, H_CALL, 0x479410, 10,
        0x479A6A, GAME_10EN, H_CALL, 0x479410, 11,
        0x47A3C2, GAME_10EN, H_CALL, 0x47A20E, 1,
        0x47A405, GAME_10EN, H_CALL, 0x47A20E, 2,
        0x47A425, GAME_10EN, H_CALL, 0x47A20E, 3,
        0x47AF28, GAME_10EN, H_CALL, 0x47AE27, 1,
        0x47AF6B, GAME_10EN, H_CALL, 0x47AE27, 2,
        0x47AF8B, GAME_10EN, H_CALL, 0x47AE27, 3,
        0x47BED9, GAME_10EN, H_CALL, 0x47BE8F, 1,
        0x47BF2C, GAME_10EN, H_CALL, 0x47BE8F, 2,
        0x47BFE0, GAME_10EN, H_CALL, 0x47BE8F, 3,
        0x47C023, GAME_10EN, H_CALL, 0x47BE8F, 4,
        0x47C05A, GAME_10EN, H_CALL, 0x47BE8F, 5,
        0x47C07A, GAME_10EN, H_CALL, 0x47BE8F, 6,
        0x47C15E, GAME_10EN, H_CALL, 0x47BE8F, 7,
        0x47CDC1, GAME_10EN, H_CALL, 0x47BE8F, 8,
        0x47D4EB, GAME_10EN, H_CALL, 0x47CE73, 1,
        0x47D536, GAME_10EN, H_CALL, 0x47CE73, 2,
        0x47D7BE, GAME_10EN, H_CALL, 0x47CE73, 3,
        0x47F2A2, GAME_10EN, H_CALL, 0x47F009, 1,
        0x47F700, GAME_10EN, H_CALL, 0x47F68C, 1,
        0x47F70B, GAME_10EN, H_CALL, 0x47F68C, 2,
        0x47F97A, GAME_10EN, H_CALL, 0x47F68C, 3,
        0x47F9A1, GAME_10EN, H_CALL, 0x47F68C, 4,
        0x47FACC, GAME_10EN, H_CALL, 0x47F68C, 5,
        0x47FD2D, GAME_10EN, H_CALL, 0x47F68C, 6,
        0x4800F1, GAME_10EN, H_CALL, 0x47FE8C, 1,
        0x480785, GAME_10EN, H_CALL, 0x47FE8C, 2,
        0x480799, GAME_10EN, H_CALL, 0x47FE8C, 3,
        0x4807F2, GAME_10EN, H_CALL, 0x47FE8C, 4,
        0x480960, GAME_10EN, H_CALL, 0x47FE8C, 5,
        0x4816E6, GAME_10EN, H_CALL, 0x480F17, 1,
        0x4816FA, GAME_10EN, H_CALL, 0x480F17, 2,
        0x481753, GAME_10EN, H_CALL, 0x480F17, 3,
        0x48186E, GAME_10EN, H_CALL, 0x480F17, 4,
        0x481EEA, GAME_10EN, H_CALL, 0x481AB3, 1,
        0x481F2D, GAME_10EN, H_CALL, 0x481AB3, 2,
        0x481F4D, GAME_10EN, H_CALL, 0x481AB3, 3,
        0x482558, GAME_10EN, H_CALL, 0x481AB3, 4,
        0x48256B, GAME_10EN, H_CALL, 0x481AB3, 5,
        0x48257E, GAME_10EN, H_CALL, 0x481AB3, 6,
        0x4825B1, GAME_10EN, H_CALL, 0x481AB3, 7,
        0x48292D, GAME_10EN, H_CALL, 0x48267A, 1,
        0x48294D, GAME_10EN, H_CALL, 0x48267A, 2,
        0x483118, GAME_10EN, H_CALL, 0x48267A, 3,
        0x48312B, GAME_10EN, H_CALL, 0x48267A, 4,
        0x483F7F, GAME_10EN, H_CALL, 0x48351A, 1,
        0x483FC3, GAME_10EN, H_CALL, 0x48351A, 2,
        0x483FF7, GAME_10EN, H_CALL, 0x48351A, 3,
        0x484055, GAME_10EN, H_CALL, 0x48351A, 4,
        0x487012, GAME_10EN, H_CALL, 0x487010, 1,
        0x49048B, GAME_10EN, H_CALL, 0x49045D, 1,
        0x4959F9, GAME_10EN, H_CALL, 0x49598B, 1,
        0x495A33, GAME_10EN, H_CALL, 0x49598B, 2,
        0x495A63, GAME_10EN, H_CALL, 0x49598B, 3,
        0x495B1D, GAME_10EN, H_CALL, 0x49598B, 4,
        0x495BD2, GAME_10EN, H_CALL, 0x49598B, 5,
        0x495BE4, GAME_10EN, H_CALL, 0x49598B, 6,
        0x495BF7, GAME_10EN, H_CALL, 0x49598B, 7,
        0x495C28, GAME_10EN, H_CALL, 0x49598B, 8,
        0x495CCB, GAME_10EN, H_CALL, 0x49598B, 9,
        0x495CDD, GAME_10EN, H_CALL, 0x49598B, 10,
        0x495CF0, GAME_10EN, H_CALL, 0x49598B, 11,
        0x495D21, GAME_10EN, H_CALL, 0x49598B, 12,
        0x495DEA, GAME_10EN, H_CALL, 0x49598B, 13,
        0x495EBE, GAME_10EN, H_CALL, 0x49598B, 14,
        0x495F9C, GAME_10EN, H_CALL, 0x49598B, 15,
        0x495FEE, GAME_10EN, H_CALL, 0x49598B, 16,
        0x496048, GAME_10EN, H_CALL, 0x49598B, 17,
        0x49606E, GAME_10EN, H_CALL, 0x49598B, 18,
        0x49609E, GAME_10EN, H_CALL, 0x49598B, 19,
        0x49624A, GAME_10EN, H_CALL, 0x49598B, 20,
        0x4962B2, GAME_10EN, H_CALL, 0x49598B, 21,
        0x4962F5, GAME_10EN, H_CALL, 0x49598B, 22,
        0x496949, GAME_10EN, H_CALL, 0x4965BA, 1,
        0x496974, GAME_10EN, H_CALL, 0x4965BA, 2,
        0x496987, GAME_10EN, H_CALL, 0x4965BA, 3,
        0x4969D6, GAME_10EN, H_CALL, 0x4965BA, 4,
        0x496A01, GAME_10EN, H_CALL, 0x4965BA, 5,
        0x496A14, GAME_10EN, H_CALL, 0x4965BA, 6,
        0x496A67, GAME_10EN, H_CALL, 0x4965BA, 7,
        0x496AA5, GAME_10EN, H_CALL, 0x4965BA, 8,
        0x496ACC, GAME_10EN, H_CALL, 0x4965BA, 9,
        0x496B06, GAME_10EN, H_CALL, 0x4965BA, 10,
        0x496B38, GAME_10EN, H_CALL, 0x4965BA, 11,
        0x496B9B, GAME_10EN, H_CALL, 0x4965BA, 12,
        0x496BD4, GAME_10EN, H_CALL, 0x4965BA, 13,
        0x496C01, GAME_10EN, H_CALL, 0x4965BA, 14,
        0x496C30, GAME_10EN, H_CALL, 0x4965BA, 15,
        0x496C5F, GAME_10EN, H_CALL, 0x4965BA, 16,
        0x496C88, GAME_10EN, H_CALL, 0x4965BA, 17,
        0x496CAD, GAME_10EN, H_CALL, 0x4965BA, 18,
        0x496CC0, GAME_10EN, H_CALL, 0x4965BA, 19,
        0x496CD3, GAME_10EN, H_CALL, 0x4965BA, 20,
        0x496CFC, GAME_10EN, H_CALL, 0x4965BA, 21,
        0x496D6C, GAME_10EN, H_CALL, 0x4965BA, 22,
        0x496D91, GAME_10EN, H_CALL, 0x4965BA, 23,
        0x496E08, GAME_10EN, H_CALL, 0x4965BA, 24,
        0x496E1A, GAME_10EN, H_CALL, 0x4965BA, 25,
        0x496E22, GAME_10EN, H_CALL, 0x4965BA, 26,
        0x496E36, GAME_10EN, H_CALL, 0x4965BA, 27,
        0x496EAF, GAME_10EN, H_CALL, 0x4965BA, 28,
        0x496EC1, GAME_10EN, H_CALL, 0x4965BA, 29,
        0x496EC9, GAME_10EN, H_CALL, 0x4965BA, 30,
        0x496EDD, GAME_10EN, H_CALL, 0x4965BA, 31,
        0x496F4D, GAME_10EN, H_CALL, 0x4965BA, 32,
        0x496F7D, GAME_10EN, H_CALL, 0x4965BA, 33,
        0x496FB1, GAME_10EN, H_CALL, 0x4965BA, 34,
        0x496FDC, GAME_10EN, H_CALL, 0x4965BA, 35,
        0x496FEF, GAME_10EN, H_CALL, 0x4965BA, 36,
        0x497036, GAME_10EN, H_CALL, 0x4965BA, 37,
        0x497061, GAME_10EN, H_CALL, 0x4965BA, 38,
        0x497074, GAME_10EN, H_CALL, 0x4965BA, 39,
        0x49766C, GAME_10EN, H_CALL, 0x49739F, 1,
        0x497695, GAME_10EN, H_CALL, 0x49739F, 2,
        0x4976BE, GAME_10EN, H_CALL, 0x49739F, 3,
        0x4976D0, GAME_10EN, H_CALL, 0x49739F, 4,
        0x4976E0, GAME_10EN, H_CALL, 0x49739F, 5,
        0x497704, GAME_10EN, H_CALL, 0x49739F, 6,
        0x49772D, GAME_10EN, H_CALL, 0x49739F, 7,
        0x497756, GAME_10EN, H_CALL, 0x49739F, 8,
        0x497768, GAME_10EN, H_CALL, 0x49739F, 9,
        0x497778, GAME_10EN, H_CALL, 0x49739F, 10,
        0x497798, GAME_10EN, H_CALL, 0x49739F, 11,
        0x4977D1, GAME_10EN, H_CALL, 0x49739F, 12,
        0x4977E3, GAME_10EN, H_CALL, 0x49739F, 13,
        0x497809, GAME_10EN, H_CALL, 0x49739F, 14,
        0x49781B, GAME_10EN, H_CALL, 0x49739F, 15,
        0x497873, GAME_10EN, H_CALL, 0x49739F, 16,
        0x497885, GAME_10EN, H_CALL, 0x49739F, 17,
        0x497894, GAME_10EN, H_CALL, 0x49739F, 18,
        0x4978BD, GAME_10EN, H_CALL, 0x49739F, 19,
        0x49791E, GAME_10EN, H_CALL, 0x49739F, 20,
        0x497930, GAME_10EN, H_CALL, 0x49739F, 21,
        0x49793F, GAME_10EN, H_CALL, 0x49739F, 22,
        0x497968, GAME_10EN, H_CALL, 0x49739F, 23,
        0x497B5A, GAME_10EN, H_CALL, 0x49739F, 24,
        0x497B79, GAME_10EN, H_CALL, 0x49739F, 25,
        0x497B8B, GAME_10EN, H_CALL, 0x49739F, 26,
        0x497B9B, GAME_10EN, H_CALL, 0x49739F, 27,
        0x497BEC, GAME_10EN, H_CALL, 0x49739F, 28,
        0x497C0B, GAME_10EN, H_CALL, 0x49739F, 29,
        0x497C1D, GAME_10EN, H_CALL, 0x49739F, 30,
        0x497C2D, GAME_10EN, H_CALL, 0x49739F, 31,
        0x497C81, GAME_10EN, H_CALL, 0x49739F, 32,
        0x497CA0, GAME_10EN, H_CALL, 0x49739F, 33,
        0x497CB2, GAME_10EN, H_CALL, 0x49739F, 34,
        0x497CC2, GAME_10EN, H_CALL, 0x49739F, 35,
        0x497D2C, GAME_10EN, H_CALL, 0x49739F, 36,
        0x497E50, GAME_10EN, H_CALL, 0x49739F, 37,
        0x497E6F, GAME_10EN, H_CALL, 0x49739F, 38,
        0x497E81, GAME_10EN, H_CALL, 0x49739F, 39,
        0x497E91, GAME_10EN, H_CALL, 0x49739F, 40,
        0x497F18, GAME_10EN, H_CALL, 0x49739F, 41,
        0x498015, GAME_10EN, H_CALL, 0x49739F, 42,
        0x4981E3, GAME_10EN, H_CALL, 0x49739F, 43,
        0x498237, GAME_10EN, H_CALL, 0x49739F, 44,
        0x498249, GAME_10EN, H_CALL, 0x49739F, 45,
        0x49826B, GAME_10EN, H_CALL, 0x49739F, 46,
        0x49827D, GAME_10EN, H_CALL, 0x49739F, 47,
        0x498E8C, GAME_10EN, H_CALL, 0x498E5F, 1,
        0x498FD5, GAME_10EN, H_CALL, 0x498E5F, 2,
        0x498FE6, GAME_10EN, H_CALL, 0x498E5F, 3,
        0x49912E, GAME_10EN, H_CALL, 0x4990DD, 1,
        0x499166, GAME_10EN, H_CALL, 0x4990DD, 2,
        0x49919E, GAME_10EN, H_CALL, 0x4990DD, 3,
        0x4991D6, GAME_10EN, H_CALL, 0x4990DD, 4,
        0x49920E, GAME_10EN, H_CALL, 0x4990DD, 5,
        0x499243, GAME_10EN, H_CALL, 0x4990DD, 6,
        0x499278, GAME_10EN, H_CALL, 0x4990DD, 7,
        0x4A49BA, GAME_10EN, H_CALL, 0x4A4850, 1,
        0x4A49CB, GAME_10EN, H_CALL, 0x4A4850, 2,
        0x4A4F8D, GAME_10EN, H_CALL, 0x4A4B10, 1,
        0x4A4F9E, GAME_10EN, H_CALL, 0x4A4B10, 2,
        0x4A65D9, GAME_10EN, H_CALL, 0x4A65D0, 1,
        0x4A66BE, GAME_10EN, H_CALL, 0x4A65D0, 2,
        0x4A66E3, GAME_10EN, H_CALL, 0x4A65D0, 3,
        0x4A66F3, GAME_10EN, H_CALL, 0x4A65D0, 4,
        0x4A6718, GAME_10EN, H_CALL, 0x4A65D0, 5,
        0x4A672C, GAME_10EN, H_CALL, 0x4A65D0, 6,
        0x4A67E4, GAME_10EN, H_CALL, 0x4A65D0, 7,
        0x4BBC3C, GAME_10EN, H_CALL, 0x4BBC10, 1,
        0x4BBDD2, GAME_10EN, H_CALL, 0x4BBC10, 2,
        0x4BD728, GAME_10EN, H_CALL, 0x4BCA90, 1,
        0x4BD73B, GAME_10EN, H_CALL, 0x4BCA90, 2,
        0x4BD902, GAME_10EN, H_CALL, 0x4BCA90, 3,
        0x4FD228, GAME_10EN, H_CALL, 0x4FCF60, 1,
        0x507C2B, GAME_10EN, H_CALL, 0x505790, 1,
        0x507C42, GAME_10EN, H_CALL, 0x505790, 2,
        0x507C66, GAME_10EN, H_CALL, 0x505790, 3,
        0x507DFC, GAME_10EN, H_CALL, 0x505790, 4,
        0x507E23, GAME_10EN, H_CALL, 0x505790, 5,
        0x50A558, GAME_10EN, H_CALL, 0x50A530, 1,
        0x50A576, GAME_10EN, H_CALL, 0x50A530, 2,
        0x50FD55, GAME_10EN, H_CALL, 0x50F170, 1,
        0x510B30, GAME_10EN, H_CALL, 0x50FFC0, 1,
        0x519BDD, GAME_10EN, H_CALL, 0x5199F0, 1,
        0x51AA8D, GAME_10EN, H_CALL, 0x51A9C0, 1,
        0x51ACE4, GAME_10EN, H_CALL, 0x51ABC0, 1,
        0x51DCDB, GAME_10EN, H_CALL, 0x51CA70, 1,
        0x51DE3D, GAME_10EN, H_CALL, 0x51CA70, 2,
        0x522220, GAME_10EN, H_CALL, 0x521F10, 1,
        0x523EDE, GAME_10EN, H_CALL, 0x523CD0, 1,
        0x5252E7, GAME_10EN, H_CALL, 0x524920, 1,
        0x52B7DF, GAME_10EN, H_CALL, 0x52B070, 1,
        0x52BDD1, GAME_10EN, H_CALL, 0x52B070, 2,
        0x52D7AD, GAME_10EN, H_CALL, 0x52D1C0, 1,
        0x53524A, GAME_10EN, H_CALL, 0x535240, 1,
        0x5373C2, GAME_10EN, H_CALL, 0x537270, 1,
        0x5380FC, GAME_10EN, H_CALL, 0x537270, 2,
        0x544613, GAME_10EN, H_CALL, 0x5445FF, 1,
        0x55734D, GAME_10EN, H_CALL, 0x557320, 1,
        0x5574A1, GAME_10EN, H_CALL, 0x557320, 2,
        0x57AB49, GAME_10EN, H_CALL, 0x57AB30, 1,
        0x57AB6A, GAME_10EN, H_CALL, 0x57AB30, 2,
        0x57ABA6, GAME_10EN, H_CALL, 0x57AB30, 3,
        0x57D7D2, GAME_10EN, H_CALL, 0x57D580, 1,
        0x5865B0, GAME_10EN, H_CALL, 0x5864C0, 1,
        0x586675, GAME_10EN, H_CALL, 0x5864C0, 2,
        0x58745B, GAME_10EN, H_CALL, 0x5870D0, 1,
        0x587666, GAME_10EN, H_CALL, 0x5870D0, 2,
        0x588E0D, GAME_10EN, H_CALL, 0x588DE0, 1,
        0x588E64, GAME_10EN, H_CALL, 0x588DE0, 2,
        0x588EBC, GAME_10EN, H_CALL, 0x588DE0, 3,
        0x588EEF, GAME_10EN, H_CALL, 0x588DE0, 4,
        0x588FA5, GAME_10EN, H_CALL, 0x588DE0, 5,
        0x588FD2, GAME_10EN, H_CALL, 0x588DE0, 6,
        0x58902D, GAME_10EN, H_CALL, 0x588DE0, 7,
        0x5890E5, GAME_10EN, H_CALL, 0x588DE0, 8,
        0x5890F8, GAME_10EN, H_CALL, 0x588DE0, 9,
        0x589182, GAME_10EN, H_CALL, 0x588DE0, 10,
        0x5891AE, GAME_10EN, H_CALL, 0x588DE0, 11,
        0x5891D6, GAME_10EN, H_CALL, 0x588DE0, 12,
        0x589203, GAME_10EN, H_CALL, 0x588DE0, 13,
        0x5893DC, GAME_10EN, H_CALL, 0x588DE0, 14,
        0x5936CD, GAME_10EN, H_CALL, 0x593030, 1,
        0x5938AD, GAME_10EN, H_CALL, 0x593030, 2,
        0x593C49, GAME_10EN, H_CALL, 0x593030, 3,
        0x5946D4, GAME_10EN, H_CALL, 0x593030, 4,
        0x597D98, GAME_10EN, H_CALL, 0x593030, 5,
        0x597DB0, GAME_10EN, H_CALL, 0x593030, 6,
        0x597F67, GAME_10EN, H_CALL, 0x593030, 7,
        0x5981E2, GAME_10EN, H_CALL, 0x593030, 8,
        0x59831F, GAME_10EN, H_CALL, 0x593030, 9,
        0x5990D7, GAME_10EN, H_CALL, 0x593030, 10,
        0x59B936, GAME_10EN, H_CALL, 0x59B550, 1,
        0x59D7EA, GAME_10EN, H_CALL, 0x59D260, 1,
        0x59DB22, GAME_10EN, H_CALL, 0x59D260, 2,
        0x59DB40, GAME_10EN, H_CALL, 0x59D260, 3,
        0x5A14D8, GAME_10EN, H_CALL, 0x59FE90, 1,
        0x5A235F, GAME_10EN, H_CALL, 0x59FE90, 2,
        0x5A4BE5, GAME_10EN, H_CALL, 0x5A4BC0, 1,
        0x5A4CA7, GAME_10EN, H_CALL, 0x5A4BC0, 2,
        0x5A4CE3, GAME_10EN, H_CALL, 0x5A4BC0, 3,
        0x5A58DC, GAME_10EN, H_CALL, 0x5A5570, 1,
        0x5A5997, GAME_10EN, H_CALL, 0x5A5570, 2,
        0x5B57E7, GAME_10EN, H_CALL, 0x5B54C0, 1,
        0x5B5A7E, GAME_10EN, H_CALL, 0x5B54C0, 2,
        0x5B5AA8, GAME_10EN, H_CALL, 0x5B54C0, 3,
        0x5B5AD2, GAME_10EN, H_CALL, 0x5B54C0, 4,
        0x5B5B1B, GAME_10EN, H_CALL, 0x5B54C0, 5,
        0x5B5D9E, GAME_10EN, H_CALL, 0x5B54C0, 6,
        0x5B5DB0, GAME_10EN, H_CALL, 0x5B54C0, 7,
        0x5B616A, GAME_10EN, H_CALL, 0x5B54C0, 8,
        0x5B6190, GAME_10EN, H_CALL, 0x5B54C0, 9,
        0x5B6A37, GAME_10EN, H_CALL, 0x5B54C0, 10,
        0x5B6A49, GAME_10EN, H_CALL, 0x5B54C0, 11,
        0x5B6E42, GAME_10EN, H_CALL, 0x5B54C0, 12,
        0x5B6E6C, GAME_10EN, H_CALL, 0x5B54C0, 13,
        0x5B6E98, GAME_10EN, H_CALL, 0x5B54C0, 14,
        0x5B6EBE, GAME_10EN, H_CALL, 0x5B54C0, 15,
        0x5B6EDB, GAME_10EN, H_CALL, 0x5B54C0, 16,
        0x5B6F24, GAME_10EN, H_CALL, 0x5B54C0, 17,
        0x5B6F35, GAME_10EN, H_CALL, 0x5B54C0, 18,
        0x5B6F5F, GAME_10EN, H_CALL, 0x5B54C0, 19,
        0x5B6F85, GAME_10EN, H_CALL, 0x5B54C0, 20,
        0x5B6FA2, GAME_10EN, H_CALL, 0x5B54C0, 21,
        0x5B6FCC, GAME_10EN, H_CALL, 0x5B54C0, 22,
        0x5B7015, GAME_10EN, H_CALL, 0x5B54C0, 23,
        0x5B7041, GAME_10EN, H_CALL, 0x5B54C0, 24,
        0x5C66BC, GAME_10EN, H_CALL, 0x5C5720, 1,
        0x5C9192, GAME_10EN, H_CALL, 0x5C9170, 1,
        0x5C9280, GAME_10EN, H_CALL, 0x5C91E0, 1,
        0x5C9298, GAME_10EN, H_CALL, 0x5C91E0, 2,
        0x5C92DA, GAME_10EN, H_CALL, 0x5C91E0, 3,
        0x5C946C, GAME_10EN, H_CALL, 0x5C91E0, 4,
        0x5C95DE, GAME_10EN, H_CALL, 0x5C9540, 1,
        0x5C95F6, GAME_10EN, H_CALL, 0x5C9540, 2,
        0x5C9707, GAME_10EN, H_CALL, 0x5C9540, 3,
        0x5C984E, GAME_10EN, H_CALL, 0x5C97B0, 1,
        0x5C9866, GAME_10EN, H_CALL, 0x5C97B0, 2,
        0x5C99AE, GAME_10EN, H_CALL, 0x5C97B0, 3,
        0x5CBFA3, GAME_10EN, H_CALL, 0x5CB0A0, 1,
        0x5CC42B, GAME_10EN, H_CALL, 0x5CBFF0, 1,
        0x5CC966, GAME_10EN, H_CALL, 0x5CC730, 1,
        0x5CEDCE, GAME_10EN, H_CALL, 0x5CD340, 1,
        0x5D00E6, GAME_10EN, H_CALL, 0x5CEE60, 1,
        0x5D4B49, GAME_10EN, H_CALL, 0x5D45E0, 1,
        0x5EF3EE, GAME_10EN, H_CALL, 0x5EE7B0, 1,
        0x5FB7CE, GAME_10EN, H_CALL, 0x5FB600, 1,
        0x5FF8B7, GAME_10EN, H_CALL, 0x5FF630, 1,
        0x5FFFFF, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x600016, GAME_10EN, H_CALL, 0x5FFAB0, 2,
        0x600043, GAME_10EN, H_CALL, 0x5FFAB0, 3,
        0x600081, GAME_10EN, H_CALL, 0x5FFAB0, 4,
        0x6000B0, GAME_10EN, H_CALL, 0x5FFAB0, 5,
        0x600106, GAME_10EN, H_CALL, 0x5FFAB0, 6,
        0x6001B5, GAME_10EN, H_CALL, 0x5FFAB0, 7,
        0x6001CC, GAME_10EN, H_CALL, 0x5FFAB0, 8,
        0x6001F9, GAME_10EN, H_CALL, 0x5FFAB0, 9,
        0x60023C, GAME_10EN, H_CALL, 0x5FFAB0, 10,
        0x60026B, GAME_10EN, H_CALL, 0x5FFAB0, 11,
        0x6002C1, GAME_10EN, H_CALL, 0x5FFAB0, 12,
        0x60154A, GAME_10EN, H_CALL, 0x6010B0, 1,
        0x60155B, GAME_10EN, H_CALL, 0x6010B0, 2,
        0x6023E4, GAME_10EN, H_CALL, 0x6023D0, 1,
        0x60249C, GAME_10EN, H_CALL, 0x602490, 1,
        0x602547, GAME_10EN, H_CALL, 0x602540, 1,
        0x60254F, GAME_10EN, H_CALL, 0x602540, 2,
        0x602939, GAME_10EN, H_CALL, 0x602930, 1,
        0x602943, GAME_10EN, H_CALL, 0x602930, 2,
        0x6032FA, GAME_10EN, H_CALL, 0x6032E0, 1,
        0x6033CA, GAME_10EN, H_CALL, 0x6032E0, 2,
        0x60349A, GAME_10EN, H_CALL, 0x6032E0, 3,
        0x6034C9, GAME_10EN, H_CALL, 0x6032E0, 4,
        0x603564, GAME_10EN, H_CALL, 0x603520, 1,
        0x6035B6, GAME_10EN, H_CALL, 0x603520, 2,
        0x60367F, GAME_10EN, H_CALL, 0x603520, 3,
        0x6036B4, GAME_10EN, H_CALL, 0x603520, 4,
        0x6037C4, GAME_10EN, H_CALL, 0x603700, 1,
        0x603834, GAME_10EN, H_CALL, 0x603700, 2,
        0x60390F, GAME_10EN, H_CALL, 0x603700, 3,
        0x603944, GAME_10EN, H_CALL, 0x603700, 4,
        0x603A44, GAME_10EN, H_CALL, 0x603980, 1,
        0x603AD7, GAME_10EN, H_CALL, 0x603980, 2,
        0x603B9D, GAME_10EN, H_CALL, 0x603980, 3,
        0x603BD2, GAME_10EN, H_CALL, 0x603980, 4,
        0x603C4D, GAME_10EN, H_CALL, 0x603C10, 1,
        0x604762, GAME_10EN, H_CALL, 0x604500, 1,
        0x6047D6, GAME_10EN, H_CALL, 0x604500, 2,
        0x6048B3, GAME_10EN, H_CALL, 0x604500, 3,
        0x60498B, GAME_10EN, H_CALL, 0x604500, 4,
        0x604A54, GAME_10EN, H_CALL, 0x604500, 5,
        0x604AF8, GAME_10EN, H_CALL, 0x604500, 6,
        0x604D06, GAME_10EN, H_CALL, 0x604500, 7,
        0x604D7A, GAME_10EN, H_CALL, 0x604500, 8,
        0x604E55, GAME_10EN, H_CALL, 0x604500, 9,
        0x604F2D, GAME_10EN, H_CALL, 0x604500, 10,
        0x604FF6, GAME_10EN, H_CALL, 0x604500, 11,
        0x605034, GAME_10EN, H_CALL, 0x604500, 12,
        0x605102, GAME_10EN, H_CALL, 0x604500, 13,
        0x6051FC, GAME_10EN, H_CALL, 0x604500, 14,
        0x6054DD, GAME_10EN, H_CALL, 0x604500, 15,
        0x6055EB, GAME_10EN, H_CALL, 0x604500, 16,
        0x6056B9, GAME_10EN, H_CALL, 0x604500, 17,
        0x605806, GAME_10EN, H_CALL, 0x604500, 18,
        0x60594C, GAME_10EN, H_CALL, 0x604500, 19,
        0x605A11, GAME_10EN, H_CALL, 0x604500, 20,
        0x605A62, GAME_10EN, H_CALL, 0x604500, 21,
        0x605B0C, GAME_10EN, H_CALL, 0x604500, 22,
        0x605B6B, GAME_10EN, H_CALL, 0x604500, 23,
        0x605C88, GAME_10EN, H_CALL, 0x604500, 24,
        0x605CC7, GAME_10EN, H_CALL, 0x604500, 25,
        0x605D06, GAME_10EN, H_CALL, 0x604500, 26,
        0x607CBA, GAME_10EN, H_CALL, 0x606730, 1,
        0x6085F3, GAME_10EN, H_CALL, 0x6084C0, 1,
        0x60882C, GAME_10EN, H_CALL, 0x6084C0, 2,
        0x60A56D, GAME_10EN, H_CALL, 0x60A540, 1,
        0x60A5A1, GAME_10EN, H_CALL, 0x60A540, 2,
        0x60A5EA, GAME_10EN, H_CALL, 0x60A540, 3,
        0x60A695, GAME_10EN, H_CALL, 0x60A540, 4,
        0x60A6BC, GAME_10EN, H_CALL, 0x60A540, 5,
        0x60A775, GAME_10EN, H_CALL, 0x60A540, 6,
        0x60A788, GAME_10EN, H_CALL, 0x60A540, 7,
        0x60A7EF, GAME_10EN, H_CALL, 0x60A540, 8,
        0x60A81B, GAME_10EN, H_CALL, 0x60A540, 9,
        0x60A843, GAME_10EN, H_CALL, 0x60A540, 10,
        0x60A870, GAME_10EN, H_CALL, 0x60A540, 11,
        0x60AA08, GAME_10EN, H_CALL, 0x60A540, 12,
        0x60EAF4, GAME_10EN, H_CALL, 0x60E3E0, 1,
        0x6129BB, GAME_10EN, H_CALL, 0x60E3E0, 2,
        0x617290, GAME_10EN, H_CALL, 0x617270, 1,
        0x6172AD, GAME_10EN, H_CALL, 0x617270, 2,
        0x6172CA, GAME_10EN, H_CALL, 0x617270, 3,
        0x6172E3, GAME_10EN, H_CALL, 0x617270, 4,
        0x6172FC, GAME_10EN, H_CALL, 0x617270, 5,
        0x617315, GAME_10EN, H_CALL, 0x617270, 6,
        0x61732E, GAME_10EN, H_CALL, 0x617270, 7,
        0x617370, GAME_10EN, H_CALL, 0x617350, 1,
        0x61738D, GAME_10EN, H_CALL, 0x617350, 2,
        0x6173AA, GAME_10EN, H_CALL, 0x617350, 3,
        0x6173C3, GAME_10EN, H_CALL, 0x617350, 4,
        0x6173DC, GAME_10EN, H_CALL, 0x617350, 5,
        0x6173F5, GAME_10EN, H_CALL, 0x617350, 6,
        0x61740E, GAME_10EN, H_CALL, 0x617350, 7,
        0x617447, GAME_10EN, H_CALL, 0x617430, 1,
        0x61745A, GAME_10EN, H_CALL, 0x617430, 2,
        0x617483, GAME_10EN, H_CALL, 0x617430, 3,
        0x617496, GAME_10EN, H_CALL, 0x617430, 4,
        0x6174D1, GAME_10EN, H_CALL, 0x617430, 5,
        0x6174E7, GAME_10EN, H_CALL, 0x617430, 6,
        0x617507, GAME_10EN, H_CALL, 0x617430, 7,
        0x61751D, GAME_10EN, H_CALL, 0x617430, 8,
        0x61753D, GAME_10EN, H_CALL, 0x617430, 9,
        0x617553, GAME_10EN, H_CALL, 0x617430, 10,
        0x617573, GAME_10EN, H_CALL, 0x617430, 11,
        0x617589, GAME_10EN, H_CALL, 0x617430, 12,
        0x6175A9, GAME_10EN, H_CALL, 0x617430, 13,
        0x6175BF, GAME_10EN, H_CALL, 0x617430, 14,
        0x6175DF, GAME_10EN, H_CALL, 0x617430, 15,
        0x6175F5, GAME_10EN, H_CALL, 0x617430, 16,
        0x617615, GAME_10EN, H_CALL, 0x617430, 17,
        0x61762B, GAME_10EN, H_CALL, 0x617430, 18,
        0x61764B, GAME_10EN, H_CALL, 0x617430, 19,
        0x617661, GAME_10EN, H_CALL, 0x617430, 20,
        0x617681, GAME_10EN, H_CALL, 0x617430, 21,
        0x617697, GAME_10EN, H_CALL, 0x617430, 22,
        0x6176B7, GAME_10EN, H_CALL, 0x617430, 23,
        0x6176CD, GAME_10EN, H_CALL, 0x617430, 24,
        0x6176ED, GAME_10EN, H_CALL, 0x617430, 25,
        0x617703, GAME_10EN, H_CALL, 0x617430, 26,
        0x617723, GAME_10EN, H_CALL, 0x617430, 27,
        0x617739, GAME_10EN, H_CALL, 0x617430, 28,
        0x617759, GAME_10EN, H_CALL, 0x617430, 29,
        0x61776F, GAME_10EN, H_CALL, 0x617430, 30,
        0x61778F, GAME_10EN, H_CALL, 0x617430, 31,
        0x6177A5, GAME_10EN, H_CALL, 0x617430, 32,
        0x6177C5, GAME_10EN, H_CALL, 0x617430, 33,
        0x6177DB, GAME_10EN, H_CALL, 0x617430, 34,
        0x6177FB, GAME_10EN, H_CALL, 0x617430, 35,
        0x617811, GAME_10EN, H_CALL, 0x617430, 36,
        0x617831, GAME_10EN, H_CALL, 0x617430, 37,
        0x617847, GAME_10EN, H_CALL, 0x617430, 38,
        0x617867, GAME_10EN, H_CALL, 0x617430, 39,
        0x61787D, GAME_10EN, H_CALL, 0x617430, 40,
        0x61789D, GAME_10EN, H_CALL, 0x617430, 41,
        0x6178B3, GAME_10EN, H_CALL, 0x617430, 42,
        0x6178D3, GAME_10EN, H_CALL, 0x617430, 43,
        0x6178E9, GAME_10EN, H_CALL, 0x617430, 44,
        0x617909, GAME_10EN, H_CALL, 0x617430, 45,
        0x61791F, GAME_10EN, H_CALL, 0x617430, 46,
        0x61793F, GAME_10EN, H_CALL, 0x617430, 47,
        0x617955, GAME_10EN, H_CALL, 0x617430, 48,
        0x617975, GAME_10EN, H_CALL, 0x617430, 49,
        0x61798B, GAME_10EN, H_CALL, 0x617430, 50,
        0x6179AB, GAME_10EN, H_CALL, 0x617430, 51,
        0x6179C1, GAME_10EN, H_CALL, 0x617430, 52,
        0x6179E1, GAME_10EN, H_CALL, 0x617430, 53,
        0x6179F7, GAME_10EN, H_CALL, 0x617430, 54,
        0x617A17, GAME_10EN, H_CALL, 0x617430, 55,
        0x617A2D, GAME_10EN, H_CALL, 0x617430, 56,
        0x617A4D, GAME_10EN, H_CALL, 0x617430, 57,
        0x617A63, GAME_10EN, H_CALL, 0x617430, 58,
        0x617A83, GAME_10EN, H_CALL, 0x617430, 59,
        0x617A99, GAME_10EN, H_CALL, 0x617430, 60,
        0x617AB9, GAME_10EN, H_CALL, 0x617430, 61,
        0x617ACF, GAME_10EN, H_CALL, 0x617430, 62,
        0x617AEF, GAME_10EN, H_CALL, 0x617430, 63,
        0x617B05, GAME_10EN, H_CALL, 0x617430, 64,
        0x617B25, GAME_10EN, H_CALL, 0x617430, 65,
        0x617B3B, GAME_10EN, H_CALL, 0x617430, 66,
        0x617B5B, GAME_10EN, H_CALL, 0x617430, 67,
        0x617B71, GAME_10EN, H_CALL, 0x617430, 68,
        0x617B91, GAME_10EN, H_CALL, 0x617430, 69,
        0x617BA7, GAME_10EN, H_CALL, 0x617430, 70,
        0x617BC7, GAME_10EN, H_CALL, 0x617430, 71,
        0x617BDD, GAME_10EN, H_CALL, 0x617430, 72,
        0x617BFD, GAME_10EN, H_CALL, 0x617430, 73,
        0x617C13, GAME_10EN, H_CALL, 0x617430, 74,
        0x617C33, GAME_10EN, H_CALL, 0x617430, 75,
        0x617C49, GAME_10EN, H_CALL, 0x617430, 76,
        0x617C69, GAME_10EN, H_CALL, 0x617430, 77,
        0x617C7F, GAME_10EN, H_CALL, 0x617430, 78,
        0x617C9F, GAME_10EN, H_CALL, 0x617430, 79,
        0x617CB5, GAME_10EN, H_CALL, 0x617430, 80,
        0x617CD5, GAME_10EN, H_CALL, 0x617430, 81,
        0x617CEB, GAME_10EN, H_CALL, 0x617430, 82,
        0x617D0B, GAME_10EN, H_CALL, 0x617430, 83,
        0x617D21, GAME_10EN, H_CALL, 0x617430, 84,
        0x617D41, GAME_10EN, H_CALL, 0x617430, 85,
        0x617D57, GAME_10EN, H_CALL, 0x617430, 86,
        0x617D77, GAME_10EN, H_CALL, 0x617430, 87,
        0x617D89, GAME_10EN, H_CALL, 0x617430, 88,
        0x617DA5, GAME_10EN, H_CALL, 0x617430, 89,
        0x617DB7, GAME_10EN, H_CALL, 0x617430, 90,
        0x617DD3, GAME_10EN, H_CALL, 0x617430, 91,
        0x617DE5, GAME_10EN, H_CALL, 0x617430, 92,
        0x617E27, GAME_10EN, H_CALL, 0x617E10, 1,
        0x617E50, GAME_10EN, H_CALL, 0x617E10, 2,
        0x617E90, GAME_10EN, H_CALL, 0x617E10, 3,
        0x617EB0, GAME_10EN, H_CALL, 0x617E10, 4,
        0x617ED0, GAME_10EN, H_CALL, 0x617E10, 5,
        0x617EF0, GAME_10EN, H_CALL, 0x617E10, 6,
        0x617F10, GAME_10EN, H_CALL, 0x617E10, 7,
        0x617F30, GAME_10EN, H_CALL, 0x617E10, 8,
        0x617F50, GAME_10EN, H_CALL, 0x617E10, 9,
        0x617F70, GAME_10EN, H_CALL, 0x617E10, 10,
        0x617F90, GAME_10EN, H_CALL, 0x617E10, 11,
        0x617FB0, GAME_10EN, H_CALL, 0x617E10, 12,
        0x617FD0, GAME_10EN, H_CALL, 0x617E10, 13,
        0x617FF0, GAME_10EN, H_CALL, 0x617E10, 14,
        0x618010, GAME_10EN, H_CALL, 0x617E10, 15,
        0x618030, GAME_10EN, H_CALL, 0x617E10, 16,
        0x618050, GAME_10EN, H_CALL, 0x617E10, 17,
        0x618070, GAME_10EN, H_CALL, 0x617E10, 18,
        0x618090, GAME_10EN, H_CALL, 0x617E10, 19,
        0x6180B0, GAME_10EN, H_CALL, 0x617E10, 20,
        0x6180D0, GAME_10EN, H_CALL, 0x617E10, 21,
        0x6180F0, GAME_10EN, H_CALL, 0x617E10, 22,
        0x618110, GAME_10EN, H_CALL, 0x617E10, 23,
        0x618130, GAME_10EN, H_CALL, 0x617E10, 24,
        0x618150, GAME_10EN, H_CALL, 0x617E10, 25,
        0x618170, GAME_10EN, H_CALL, 0x617E10, 26,
        0x618190, GAME_10EN, H_CALL, 0x617E10, 27,
        0x6181B0, GAME_10EN, H_CALL, 0x617E10, 28,
        0x6181D0, GAME_10EN, H_CALL, 0x617E10, 29,
        0x6181F0, GAME_10EN, H_CALL, 0x617E10, 30,
        0x618210, GAME_10EN, H_CALL, 0x617E10, 31,
        0x618230, GAME_10EN, H_CALL, 0x617E10, 32,
        0x618250, GAME_10EN, H_CALL, 0x617E10, 33,
        0x618270, GAME_10EN, H_CALL, 0x617E10, 34,
        0x618290, GAME_10EN, H_CALL, 0x617E10, 35,
        0x6182B0, GAME_10EN, H_CALL, 0x617E10, 36,
        0x6182D0, GAME_10EN, H_CALL, 0x617E10, 37,
        0x6182F0, GAME_10EN, H_CALL, 0x617E10, 38,
        0x618310, GAME_10EN, H_CALL, 0x617E10, 39,
        0x618330, GAME_10EN, H_CALL, 0x617E10, 40,
        0x618350, GAME_10EN, H_CALL, 0x617E10, 41,
        0x618370, GAME_10EN, H_CALL, 0x617E10, 42,
        0x618390, GAME_10EN, H_CALL, 0x617E10, 43,
        0x6183AC, GAME_10EN, H_CALL, 0x617E10, 44,
        0x6183C8, GAME_10EN, H_CALL, 0x617E10, 45,
        0x6183E4, GAME_10EN, H_CALL, 0x617E10, 46,
        0x61867F, GAME_10EN, H_CALL, 0x618630, 1,
        0x61868C, GAME_10EN, H_CALL, 0x618630, 2,
        0x61869B, GAME_10EN, H_CALL, 0x618630, 3,
        0x6186AE, GAME_10EN, H_CALL, 0x618630, 4,
        0x6186FA, GAME_10EN, H_CALL, 0x6186E0, 1,
        0x618964, GAME_10EN, H_CALL, 0x618950, 1,
        0x618EE6, GAME_10EN, H_CALL, 0x618EA0, 1,
        0x618F61, GAME_10EN, H_CALL, 0x618EA0, 2,
        0x618F6E, GAME_10EN, H_CALL, 0x618EA0, 3,
        0x618F7D, GAME_10EN, H_CALL, 0x618EA0, 4,
        0x61901A, GAME_10EN, H_CALL, 0x619000, 1,
        0x61A945, GAME_10EN, H_CALL, 0x61A700, 1,
        0x61C61C, GAME_10EN, H_CALL, 0x61C420, 1,
        0x61D9FB, GAME_10EN, H_CALL, 0x61D960, 1,
        0x61DBBD, GAME_10EN, H_CALL, 0x61D960, 2,
        0x61DD4E, GAME_10EN, H_CALL, 0x61D960, 3,
        0x61E987, GAME_10EN, H_CALL, 0x61E970, 1,
        0x61E9B3, GAME_10EN, H_CALL, 0x61E970, 2,
        0x61EA99, GAME_10EN, H_CALL, 0x61E970, 3,
        0x61EAAE, GAME_10EN, H_CALL, 0x61E970, 4,
        0x624ECB, GAME_10EN, H_CALL, 0x624EC0, 1,
        0x624F4E, GAME_10EN, H_CALL, 0x624EC0, 2,
        0x624F60, GAME_10EN, H_CALL, 0x624EC0, 3,
        0x624F90, GAME_10EN, H_CALL, 0x624EC0, 4,
        0x624FA2, GAME_10EN, H_CALL, 0x624EC0, 5,
        0x624FB9, GAME_10EN, H_CALL, 0x624EC0, 6,
        0x624FCB, GAME_10EN, H_CALL, 0x624EC0, 7,
        0x624FED, GAME_10EN, H_CALL, 0x624EC0, 8,
        0x624FFF, GAME_10EN, H_CALL, 0x624EC0, 9,
        0x625011, GAME_10EN, H_CALL, 0x624EC0, 10,
        0x625023, GAME_10EN, H_CALL, 0x624EC0, 11,
        0x637B7A, GAME_10EN, H_CALL, 0x637600, 1,
        0x406244, GAME_11EN, H_CALL, 0x405FA0, 1,
        0x406276, GAME_11EN, H_CALL, 0x405FA0, 2,
        0x40629F, GAME_11EN, H_CALL, 0x405FA0, 3,
        0x4062C8, GAME_11EN, H_CALL, 0x405FA0, 4,
        0x406308, GAME_11EN, H_CALL, 0x405FA0, 5,
        0x406B2D, GAME_11EN, H_CALL, 0x4069D0, 1,
        0x406BF4, GAME_11EN, H_CALL, 0x4069D0, 2,
        0x407036, GAME_11EN, H_CALL, 0x406D30, 1,
        0x42AD59, GAME_11EN, H_CALL, 0x42AC10, 1,
        0x42AFE7, GAME_11EN, H_CALL, 0x42AE70, 1,
        0x42B0D3, GAME_11EN, H_CALL, 0x42AE70, 2,
        0x42B5C3, GAME_11EN, H_CALL, 0x42AE70, 3,
        0x42B6FC, GAME_11EN, H_CALL, 0x42AE70, 4,
        0x42B788, GAME_11EN, H_CALL, 0x42B730, 1,
        0x42B81A, GAME_11EN, H_CALL, 0x42B7A0, 1,
        0x42B961, GAME_11EN, H_CALL, 0x42B900, 1,
        0x42BE2C, GAME_11EN, H_CALL, 0x42BB70, 1,
        0x42BE54, GAME_11EN, H_CALL, 0x42BB70, 2,
        0x42C217, GAME_11EN, H_CALL, 0x42BB70, 3,
        0x42C23F, GAME_11EN, H_CALL, 0x42BB70, 4,
        0x42C419, GAME_11EN, H_CALL, 0x42BB70, 5,
        0x42C441, GAME_11EN, H_CALL, 0x42BB70, 6,
        0x430D24, GAME_11EN, H_CALL, 0x430A60, 1,
        0x4311B9, GAME_11EN, H_CALL, 0x430A60, 2,
        0x4318C7, GAME_11EN, H_CALL, 0x430A60, 3,
        0x431CA2, GAME_11EN, H_CALL, 0x430A60, 4,
        0x431CD3, GAME_11EN, H_CALL, 0x430A60, 5,
        0x431D20, GAME_11EN, H_CALL, 0x430A60, 6,
        0x431F5D, GAME_11EN, H_CALL, 0x430A60, 7,
        0x432066, GAME_11EN, H_CALL, 0x430A60, 8,
        0x432445, GAME_11EN, H_CALL, 0x430A60, 9,
        0x432554, GAME_11EN, H_CALL, 0x430A60, 10,
        0x432D99, GAME_11EN, H_CALL, 0x430A60, 11,
        0x432EA6, GAME_11EN, H_CALL, 0x430A60, 12,
        0x433CFE, GAME_11EN, H_CALL, 0x430A60, 13,
        0x433DB3, GAME_11EN, H_CALL, 0x430A60, 14,
        0x43C6C6, GAME_11EN, H_CALL, 0x43C600, 1,
        0x43C9B4, GAME_11EN, H_CALL, 0x43C600, 2,
        0x43CD8B, GAME_11EN, H_CALL, 0x43CD70, 1,
        0x440AE9, GAME_11EN, H_CALL, 0x440030, 1,
        0x440CB6, GAME_11EN, H_CALL, 0x440030, 2,
        0x4414A6, GAME_11EN, H_CALL, 0x440030, 3,
        0x441BB9, GAME_11EN, H_CALL, 0x441BB0, 1,
        0x445CDB, GAME_11EN, H_CALL, 0x444BE0, 1,
        0x451718, GAME_11EN, H_CALL, 0x451550, 1,
        0x4580C4, GAME_11EN, H_CALL, 0x457580, 1,
        0x4580D9, GAME_11EN, H_CALL, 0x457580, 2,
        0x460C0D, GAME_11EN, H_CALL, 0x460C00, 1,
        0x46F8B2, GAME_11EN, H_CALL, 0x46F890, 1,
        0x4701E5, GAME_11EN, H_CALL, 0x4700E7, 1,
        0x4702B0, GAME_11EN, H_CALL, 0x4700E7, 2,
        0x47031B, GAME_11EN, H_CALL, 0x4700E7, 3,
        0x471051, GAME_11EN, H_CALL, 0x4700E7, 4,
        0x4710D7, GAME_11EN, H_CALL, 0x4700E7, 5,
        0x4711EA, GAME_11EN, H_CALL, 0x4700E7, 6,
        0x4711FE, GAME_11EN, H_CALL, 0x4700E7, 7,
        0x471228, GAME_11EN, H_CALL, 0x4700E7, 8,
        0x471240, GAME_11EN, H_CALL, 0x4700E7, 9,
        0x471258, GAME_11EN, H_CALL, 0x4700E7, 10,
        0x47126C, GAME_11EN, H_CALL, 0x4700E7, 11,
        0x471280, GAME_11EN, H_CALL, 0x4700E7, 12,
        0x471290, GAME_11EN, H_CALL, 0x4700E7, 13,
        0x4712A0, GAME_11EN, H_CALL, 0x4700E7, 14,
        0x4712EA, GAME_11EN, H_CALL, 0x4700E7, 15,
        0x471349, GAME_11EN, H_CALL, 0x4700E7, 16,
        0x47214D, GAME_11EN, H_CALL, 0x4700E7, 17,
        0x473584, GAME_11EN, H_CALL, 0x4700E7, 18,
        0x4735CD, GAME_11EN, H_CALL, 0x4700E7, 19,
        0x47390A, GAME_11EN, H_CALL, 0x4700E7, 20,
        0x47548F, GAME_11EN, H_CALL, 0x474F16, 1,
        0x475BD5, GAME_11EN, H_CALL, 0x4758C6, 1,
        0x475BE8, GAME_11EN, H_CALL, 0x4758C6, 2,
        0x475BFB, GAME_11EN, H_CALL, 0x4758C6, 3,
        0x475C0E, GAME_11EN, H_CALL, 0x4758C6, 4,
        0x479627, GAME_11EN, H_CALL, 0x479410, 1,
        0x47966A, GAME_11EN, H_CALL, 0x479410, 2,
        0x47968A, GAME_11EN, H_CALL, 0x479410, 3,
        0x47997A, GAME_11EN, H_CALL, 0x479410, 4,
        0x47998B, GAME_11EN, H_CALL, 0x479410, 5,
        0x47999C, GAME_11EN, H_CALL, 0x479410, 6,
        0x4799BF, GAME_11EN, H_CALL, 0x479410, 7,
        0x4799E6, GAME_11EN, H_CALL, 0x479410, 8,
        0x4799F9, GAME_11EN, H_CALL, 0x479410, 9,
        0x479A18, GAME_11EN, H_CALL, 0x479410, 10,
        0x479A6A, GAME_11EN, H_CALL, 0x479410, 11,
        0x47A3C2, GAME_11EN, H_CALL, 0x47A20E, 1,
        0x47A405, GAME_11EN, H_CALL, 0x47A20E, 2,
        0x47A425, GAME_11EN, H_CALL, 0x47A20E, 3,
        0x47AF28, GAME_11EN, H_CALL, 0x47AE27, 1,
        0x47AF6B, GAME_11EN, H_CALL, 0x47AE27, 2,
        0x47AF8B, GAME_11EN, H_CALL, 0x47AE27, 3,
        0x47BED9, GAME_11EN, H_CALL, 0x47BE8F, 1,
        0x47BF2C, GAME_11EN, H_CALL, 0x47BE8F, 2,
        0x47BFE0, GAME_11EN, H_CALL, 0x47BE8F, 3,
        0x47C023, GAME_11EN, H_CALL, 0x47BE8F, 4,
        0x47C05A, GAME_11EN, H_CALL, 0x47BE8F, 5,
        0x47C07A, GAME_11EN, H_CALL, 0x47BE8F, 6,
        0x47C15E, GAME_11EN, H_CALL, 0x47BE8F, 7,
        0x47CDC1, GAME_11EN, H_CALL, 0x47BE8F, 8,
        0x47D4EB, GAME_11EN, H_CALL, 0x47CE73, 1,
        0x47D536, GAME_11EN, H_CALL, 0x47CE73, 2,
        0x47D7BE, GAME_11EN, H_CALL, 0x47CE73, 3,
        0x47F2A2, GAME_11EN, H_CALL, 0x47F009, 1,
        0x47F700, GAME_11EN, H_CALL, 0x47F68C, 1,
        0x47F70B, GAME_11EN, H_CALL, 0x47F68C, 2,
        0x47F97A, GAME_11EN, H_CALL, 0x47F68C, 3,
        0x47F9A1, GAME_11EN, H_CALL, 0x47F68C, 4,
        0x47FACC, GAME_11EN, H_CALL, 0x47F68C, 5,
        0x47FD2D, GAME_11EN, H_CALL, 0x47F68C, 6,
        0x4800F1, GAME_11EN, H_CALL, 0x47FE8C, 1,
        0x480785, GAME_11EN, H_CALL, 0x47FE8C, 2,
        0x480799, GAME_11EN, H_CALL, 0x47FE8C, 3,
        0x4807F2, GAME_11EN, H_CALL, 0x47FE8C, 4,
        0x480960, GAME_11EN, H_CALL, 0x47FE8C, 5,
        0x4816E6, GAME_11EN, H_CALL, 0x480F17, 1,
        0x4816FA, GAME_11EN, H_CALL, 0x480F17, 2,
        0x481753, GAME_11EN, H_CALL, 0x480F17, 3,
        0x48186E, GAME_11EN, H_CALL, 0x480F17, 4,
        0x481EEA, GAME_11EN, H_CALL, 0x481AB3, 1,
        0x481F2D, GAME_11EN, H_CALL, 0x481AB3, 2,
        0x481F4D, GAME_11EN, H_CALL, 0x481AB3, 3,
        0x482558, GAME_11EN, H_CALL, 0x481AB3, 4,
        0x48256B, GAME_11EN, H_CALL, 0x481AB3, 5,
        0x48257E, GAME_11EN, H_CALL, 0x481AB3, 6,
        0x4825B1, GAME_11EN, H_CALL, 0x481AB3, 7,
        0x48292D, GAME_11EN, H_CALL, 0x48267A, 1,
        0x48294D, GAME_11EN, H_CALL, 0x48267A, 2,
        0x483118, GAME_11EN, H_CALL, 0x48267A, 3,
        0x48312B, GAME_11EN, H_CALL, 0x48267A, 4,
        0x483F7F, GAME_11EN, H_CALL, 0x48351A, 1,
        0x483FC3, GAME_11EN, H_CALL, 0x48351A, 2,
        0x483FF7, GAME_11EN, H_CALL, 0x48351A, 3,
        0x484055, GAME_11EN, H_CALL, 0x48351A, 4,
        0x487012, GAME_11EN, H_CALL, 0x487010, 1,
        0x49049B, GAME_11EN, H_CALL, 0x49046D, 1,
        0x495A09, GAME_11EN, H_CALL, 0x49599B, 1,
        0x495A43, GAME_11EN, H_CALL, 0x49599B, 2,
        0x495A73, GAME_11EN, H_CALL, 0x49599B, 3,
        0x495B2D, GAME_11EN, H_CALL, 0x49599B, 4,
        0x495BE2, GAME_11EN, H_CALL, 0x49599B, 5,
        0x495BF4, GAME_11EN, H_CALL, 0x49599B, 6,
        0x495C07, GAME_11EN, H_CALL, 0x49599B, 7,
        0x495C38, GAME_11EN, H_CALL, 0x49599B, 8,
        0x495CDB, GAME_11EN, H_CALL, 0x49599B, 9,
        0x495CED, GAME_11EN, H_CALL, 0x49599B, 10,
        0x495D00, GAME_11EN, H_CALL, 0x49599B, 11,
        0x495D31, GAME_11EN, H_CALL, 0x49599B, 12,
        0x495DFA, GAME_11EN, H_CALL, 0x49599B, 13,
        0x495ECE, GAME_11EN, H_CALL, 0x49599B, 14,
        0x495FAC, GAME_11EN, H_CALL, 0x49599B, 15,
        0x495FFE, GAME_11EN, H_CALL, 0x49599B, 16,
        0x496058, GAME_11EN, H_CALL, 0x49599B, 17,
        0x49607E, GAME_11EN, H_CALL, 0x49599B, 18,
        0x4960AE, GAME_11EN, H_CALL, 0x49599B, 19,
        0x49625A, GAME_11EN, H_CALL, 0x49599B, 20,
        0x4962C2, GAME_11EN, H_CALL, 0x49599B, 21,
        0x496305, GAME_11EN, H_CALL, 0x49599B, 22,
        0x496959, GAME_11EN, H_CALL, 0x4965CA, 1,
        0x496984, GAME_11EN, H_CALL, 0x4965CA, 2,
        0x496997, GAME_11EN, H_CALL, 0x4965CA, 3,
        0x4969E6, GAME_11EN, H_CALL, 0x4965CA, 4,
        0x496A11, GAME_11EN, H_CALL, 0x4965CA, 5,
        0x496A24, GAME_11EN, H_CALL, 0x4965CA, 6,
        0x496A77, GAME_11EN, H_CALL, 0x4965CA, 7,
        0x496AB5, GAME_11EN, H_CALL, 0x4965CA, 8,
        0x496ADC, GAME_11EN, H_CALL, 0x4965CA, 9,
        0x496B16, GAME_11EN, H_CALL, 0x4965CA, 10,
        0x496B48, GAME_11EN, H_CALL, 0x4965CA, 11,
        0x496BAB, GAME_11EN, H_CALL, 0x4965CA, 12,
        0x496BE4, GAME_11EN, H_CALL, 0x4965CA, 13,
        0x496C11, GAME_11EN, H_CALL, 0x4965CA, 14,
        0x496C40, GAME_11EN, H_CALL, 0x4965CA, 15,
        0x496C6F, GAME_11EN, H_CALL, 0x4965CA, 16,
        0x496C98, GAME_11EN, H_CALL, 0x4965CA, 17,
        0x496CBD, GAME_11EN, H_CALL, 0x4965CA, 18,
        0x496CD0, GAME_11EN, H_CALL, 0x4965CA, 19,
        0x496CE3, GAME_11EN, H_CALL, 0x4965CA, 20,
        0x496D0C, GAME_11EN, H_CALL, 0x4965CA, 21,
        0x496D7C, GAME_11EN, H_CALL, 0x4965CA, 22,
        0x496DA1, GAME_11EN, H_CALL, 0x4965CA, 23,
        0x496E18, GAME_11EN, H_CALL, 0x4965CA, 24,
        0x496E2A, GAME_11EN, H_CALL, 0x4965CA, 25,
        0x496E32, GAME_11EN, H_CALL, 0x4965CA, 26,
        0x496E46, GAME_11EN, H_CALL, 0x4965CA, 27,
        0x496EBF, GAME_11EN, H_CALL, 0x4965CA, 28,
        0x496ED1, GAME_11EN, H_CALL, 0x4965CA, 29,
        0x496ED9, GAME_11EN, H_CALL, 0x4965CA, 30,
        0x496EED, GAME_11EN, H_CALL, 0x4965CA, 31,
        0x496F5D, GAME_11EN, H_CALL, 0x4965CA, 32,
        0x496F8D, GAME_11EN, H_CALL, 0x4965CA, 33,
        0x496FC1, GAME_11EN, H_CALL, 0x4965CA, 34,
        0x496FEC, GAME_11EN, H_CALL, 0x4965CA, 35,
        0x496FFF, GAME_11EN, H_CALL, 0x4965CA, 36,
        0x497046, GAME_11EN, H_CALL, 0x4965CA, 37,
        0x497071, GAME_11EN, H_CALL, 0x4965CA, 38,
        0x497084, GAME_11EN, H_CALL, 0x4965CA, 39,
        0x49767C, GAME_11EN, H_CALL, 0x4973AF, 1,
        0x4976A5, GAME_11EN, H_CALL, 0x4973AF, 2,
        0x4976CE, GAME_11EN, H_CALL, 0x4973AF, 3,
        0x4976E0, GAME_11EN, H_CALL, 0x4973AF, 4,
        0x4976F0, GAME_11EN, H_CALL, 0x4973AF, 5,
        0x497714, GAME_11EN, H_CALL, 0x4973AF, 6,
        0x49773D, GAME_11EN, H_CALL, 0x4973AF, 7,
        0x497766, GAME_11EN, H_CALL, 0x4973AF, 8,
        0x497778, GAME_11EN, H_CALL, 0x4973AF, 9,
        0x497788, GAME_11EN, H_CALL, 0x4973AF, 10,
        0x4977A8, GAME_11EN, H_CALL, 0x4973AF, 11,
        0x4977E1, GAME_11EN, H_CALL, 0x4973AF, 12,
        0x4977F3, GAME_11EN, H_CALL, 0x4973AF, 13,
        0x497819, GAME_11EN, H_CALL, 0x4973AF, 14,
        0x49782B, GAME_11EN, H_CALL, 0x4973AF, 15,
        0x497883, GAME_11EN, H_CALL, 0x4973AF, 16,
        0x497895, GAME_11EN, H_CALL, 0x4973AF, 17,
        0x4978A4, GAME_11EN, H_CALL, 0x4973AF, 18,
        0x4978CD, GAME_11EN, H_CALL, 0x4973AF, 19,
        0x49792E, GAME_11EN, H_CALL, 0x4973AF, 20,
        0x497940, GAME_11EN, H_CALL, 0x4973AF, 21,
        0x49794F, GAME_11EN, H_CALL, 0x4973AF, 22,
        0x497978, GAME_11EN, H_CALL, 0x4973AF, 23,
        0x497B6A, GAME_11EN, H_CALL, 0x4973AF, 24,
        0x497B89, GAME_11EN, H_CALL, 0x4973AF, 25,
        0x497B9B, GAME_11EN, H_CALL, 0x4973AF, 26,
        0x497BAB, GAME_11EN, H_CALL, 0x4973AF, 27,
        0x497BFC, GAME_11EN, H_CALL, 0x4973AF, 28,
        0x497C1B, GAME_11EN, H_CALL, 0x4973AF, 29,
        0x497C2D, GAME_11EN, H_CALL, 0x4973AF, 30,
        0x497C3D, GAME_11EN, H_CALL, 0x4973AF, 31,
        0x497C91, GAME_11EN, H_CALL, 0x4973AF, 32,
        0x497CB0, GAME_11EN, H_CALL, 0x4973AF, 33,
        0x497CC2, GAME_11EN, H_CALL, 0x4973AF, 34,
        0x497CD2, GAME_11EN, H_CALL, 0x4973AF, 35,
        0x497D3C, GAME_11EN, H_CALL, 0x4973AF, 36,
        0x497E60, GAME_11EN, H_CALL, 0x4973AF, 37,
        0x497E7F, GAME_11EN, H_CALL, 0x4973AF, 38,
        0x497E91, GAME_11EN, H_CALL, 0x4973AF, 39,
        0x497EA1, GAME_11EN, H_CALL, 0x4973AF, 40,
        0x497F28, GAME_11EN, H_CALL, 0x4973AF, 41,
        0x498025, GAME_11EN, H_CALL, 0x4973AF, 42,
        0x4981F3, GAME_11EN, H_CALL, 0x4973AF, 43,
        0x498247, GAME_11EN, H_CALL, 0x4973AF, 44,
        0x498259, GAME_11EN, H_CALL, 0x4973AF, 45,
        0x49827B, GAME_11EN, H_CALL, 0x4973AF, 46,
        0x49828D, GAME_11EN, H_CALL, 0x4973AF, 47,
        0x498E9C, GAME_11EN, H_CALL, 0x498E6F, 1,
        0x498FE5, GAME_11EN, H_CALL, 0x498E6F, 2,
        0x498FF6, GAME_11EN, H_CALL, 0x498E6F, 3,
        0x49914F, GAME_11EN, H_CALL, 0x4990FE, 1,
        0x499187, GAME_11EN, H_CALL, 0x4990FE, 2,
        0x4991BF, GAME_11EN, H_CALL, 0x4990FE, 3,
        0x4991F7, GAME_11EN, H_CALL, 0x4990FE, 4,
        0x49922F, GAME_11EN, H_CALL, 0x4990FE, 5,
        0x499264, GAME_11EN, H_CALL, 0x4990FE, 6,
        0x499299, GAME_11EN, H_CALL, 0x4990FE, 7,
        0x4A49DA, GAME_11EN, H_CALL, 0x4A4870, 1,
        0x4A49EB, GAME_11EN, H_CALL, 0x4A4870, 2,
        0x4A4FAD, GAME_11EN, H_CALL, 0x4A4B30, 1,
        0x4A4FBE, GAME_11EN, H_CALL, 0x4A4B30, 2,
        0x4A65F9, GAME_11EN, H_CALL, 0x4A65F0, 1,
        0x4A66DE, GAME_11EN, H_CALL, 0x4A65F0, 2,
        0x4A6703, GAME_11EN, H_CALL, 0x4A65F0, 3,
        0x4A6713, GAME_11EN, H_CALL, 0x4A65F0, 4,
        0x4A6738, GAME_11EN, H_CALL, 0x4A65F0, 5,
        0x4A674C, GAME_11EN, H_CALL, 0x4A65F0, 6,
        0x4A6804, GAME_11EN, H_CALL, 0x4A65F0, 7,
        0x4BBC5C, GAME_11EN, H_CALL, 0x4BBC30, 1,
        0x4BBDF2, GAME_11EN, H_CALL, 0x4BBC30, 2,
        0x4BD748, GAME_11EN, H_CALL, 0x4BCAB0, 1,
        0x4BD75B, GAME_11EN, H_CALL, 0x4BCAB0, 2,
        0x4BD922, GAME_11EN, H_CALL, 0x4BCAB0, 3,
        0x4FD248, GAME_11EN, H_CALL, 0x4FCF80, 1,
        0x507C4B, GAME_11EN, H_CALL, 0x5057B0, 1,
        0x507C62, GAME_11EN, H_CALL, 0x5057B0, 2,
        0x507C86, GAME_11EN, H_CALL, 0x5057B0, 3,
        0x507E1C, GAME_11EN, H_CALL, 0x5057B0, 4,
        0x507E43, GAME_11EN, H_CALL, 0x5057B0, 5,
        0x50A578, GAME_11EN, H_CALL, 0x50A550, 1,
        0x50A596, GAME_11EN, H_CALL, 0x50A550, 2,
        0x50FD75, GAME_11EN, H_CALL, 0x50F190, 1,
        0x510B50, GAME_11EN, H_CALL, 0x50FFE0, 1,
        0x519BFD, GAME_11EN, H_CALL, 0x519A10, 1,
        0x51AAAD, GAME_11EN, H_CALL, 0x51A9E0, 1,
        0x51AD04, GAME_11EN, H_CALL, 0x51ABE0, 1,
        0x51DCFB, GAME_11EN, H_CALL, 0x51CA90, 1,
        0x51DE5D, GAME_11EN, H_CALL, 0x51CA90, 2,
        0x522240, GAME_11EN, H_CALL, 0x521F30, 1,
        0x523EFE, GAME_11EN, H_CALL, 0x523CF0, 1,
        0x525307, GAME_11EN, H_CALL, 0x524944, 1,
        0x52B7FF, GAME_11EN, H_CALL, 0x52B090, 1,
        0x52BDF1, GAME_11EN, H_CALL, 0x52B090, 2,
        0x52D7CD, GAME_11EN, H_CALL, 0x52D1E0, 1,
        0x53526A, GAME_11EN, H_CALL, 0x535260, 1,
        0x5373E2, GAME_11EN, H_CALL, 0x537290, 1,
        0x53811C, GAME_11EN, H_CALL, 0x537290, 2,
        0x544633, GAME_11EN, H_CALL, 0x54461F, 1,
        0x55736D, GAME_11EN, H_CALL, 0x557340, 1,
        0x5574C1, GAME_11EN, H_CALL, 0x557340, 2,
        0x57AB69, GAME_11EN, H_CALL, 0x57AB50, 1,
        0x57AB8A, GAME_11EN, H_CALL, 0x57AB50, 2,
        0x57ABC6, GAME_11EN, H_CALL, 0x57AB50, 3,
        0x57D7F2, GAME_11EN, H_CALL, 0x57D5A0, 1,
        0x5865D0, GAME_11EN, H_CALL, 0x5864E0, 1,
        0x586695, GAME_11EN, H_CALL, 0x5864E0, 2,
        0x58747B, GAME_11EN, H_CALL, 0x5870F0, 1,
        0x587686, GAME_11EN, H_CALL, 0x5870F0, 2,
        0x588E2D, GAME_11EN, H_CALL, 0x588E00, 1,
        0x588E84, GAME_11EN, H_CALL, 0x588E00, 2,
        0x588EDC, GAME_11EN, H_CALL, 0x588E00, 3,
        0x588F0F, GAME_11EN, H_CALL, 0x588E00, 4,
        0x588FC5, GAME_11EN, H_CALL, 0x588E00, 5,
        0x588FF2, GAME_11EN, H_CALL, 0x588E00, 6,
        0x58904D, GAME_11EN, H_CALL, 0x588E00, 7,
        0x589105, GAME_11EN, H_CALL, 0x588E00, 8,
        0x589118, GAME_11EN, H_CALL, 0x588E00, 9,
        0x5891A2, GAME_11EN, H_CALL, 0x588E00, 10,
        0x5891CE, GAME_11EN, H_CALL, 0x588E00, 11,
        0x5891F6, GAME_11EN, H_CALL, 0x588E00, 12,
        0x589223, GAME_11EN, H_CALL, 0x588E00, 13,
        0x5893FC, GAME_11EN, H_CALL, 0x588E00, 14,
        0x5936ED, GAME_11EN, H_CALL, 0x593050, 1,
        0x5938CD, GAME_11EN, H_CALL, 0x593050, 2,
        0x593C69, GAME_11EN, H_CALL, 0x593050, 3,
        0x5946F4, GAME_11EN, H_CALL, 0x593050, 4,
        0x597DB8, GAME_11EN, H_CALL, 0x593050, 5,
        0x597DD0, GAME_11EN, H_CALL, 0x593050, 6,
        0x597F87, GAME_11EN, H_CALL, 0x593050, 7,
        0x598202, GAME_11EN, H_CALL, 0x593050, 8,
        0x59833F, GAME_11EN, H_CALL, 0x593050, 9,
        0x5990F7, GAME_11EN, H_CALL, 0x593050, 10,
        0x59B956, GAME_11EN, H_CALL, 0x59B570, 1,
        0x59D80A, GAME_11EN, H_CALL, 0x59D280, 1,
        0x59DB42, GAME_11EN, H_CALL, 0x59D280, 2,
        0x59DB60, GAME_11EN, H_CALL, 0x59D280, 3,
        0x5A14F8, GAME_11EN, H_CALL, 0x59FEB0, 1,
        0x5A237F, GAME_11EN, H_CALL, 0x59FEB0, 2,
        0x5A4C05, GAME_11EN, H_CALL, 0x5A4BE0, 1,
        0x5A4CC7, GAME_11EN, H_CALL, 0x5A4BE0, 2,
        0x5A4D03, GAME_11EN, H_CALL, 0x5A4BE0, 3,
        0x5A58FC, GAME_11EN, H_CALL, 0x5A5590, 1,
        0x5A59B7, GAME_11EN, H_CALL, 0x5A5590, 2,
        0x5B5807, GAME_11EN, H_CALL, 0x5B54E0, 1,
        0x5B5A9E, GAME_11EN, H_CALL, 0x5B54E0, 2,
        0x5B5AC8, GAME_11EN, H_CALL, 0x5B54E0, 3,
        0x5B5AF2, GAME_11EN, H_CALL, 0x5B54E0, 4,
        0x5B5B3B, GAME_11EN, H_CALL, 0x5B54E0, 5,
        0x5B5DBE, GAME_11EN, H_CALL, 0x5B54E0, 6,
        0x5B5DD0, GAME_11EN, H_CALL, 0x5B54E0, 7,
        0x5B618A, GAME_11EN, H_CALL, 0x5B54E0, 8,
        0x5B61B0, GAME_11EN, H_CALL, 0x5B54E0, 9,
        0x5B6A57, GAME_11EN, H_CALL, 0x5B54E0, 10,
        0x5B6A69, GAME_11EN, H_CALL, 0x5B54E0, 11,
        0x5B6E62, GAME_11EN, H_CALL, 0x5B54E0, 12,
        0x5B6E8C, GAME_11EN, H_CALL, 0x5B54E0, 13,
        0x5B6EB8, GAME_11EN, H_CALL, 0x5B54E0, 14,
        0x5B6EDE, GAME_11EN, H_CALL, 0x5B54E0, 15,
        0x5B6EFB, GAME_11EN, H_CALL, 0x5B54E0, 16,
        0x5B6F44, GAME_11EN, H_CALL, 0x5B54E0, 17,
        0x5B6F55, GAME_11EN, H_CALL, 0x5B54E0, 18,
        0x5B6F7F, GAME_11EN, H_CALL, 0x5B54E0, 19,
        0x5B6FA5, GAME_11EN, H_CALL, 0x5B54E0, 20,
        0x5B6FC2, GAME_11EN, H_CALL, 0x5B54E0, 21,
        0x5B6FEC, GAME_11EN, H_CALL, 0x5B54E0, 22,
        0x5B7035, GAME_11EN, H_CALL, 0x5B54E0, 23,
        0x5B7061, GAME_11EN, H_CALL, 0x5B54E0, 24,
        0x5C66DC, GAME_11EN, H_CALL, 0x5C5740, 1,
        0x5C91B2, GAME_11EN, H_CALL, 0x5C9190, 1,
        0x5C92A0, GAME_11EN, H_CALL, 0x5C9200, 1,
        0x5C92B8, GAME_11EN, H_CALL, 0x5C9200, 2,
        0x5C92FA, GAME_11EN, H_CALL, 0x5C9200, 3,
        0x5C948C, GAME_11EN, H_CALL, 0x5C9200, 4,
        0x5C95FE, GAME_11EN, H_CALL, 0x5C9560, 1,
        0x5C9616, GAME_11EN, H_CALL, 0x5C9560, 2,
        0x5C9727, GAME_11EN, H_CALL, 0x5C9560, 3,
        0x5C986E, GAME_11EN, H_CALL, 0x5C97D0, 1,
        0x5C9886, GAME_11EN, H_CALL, 0x5C97D0, 2,
        0x5C99CE, GAME_11EN, H_CALL, 0x5C97D0, 3,
        0x5CBFC3, GAME_11EN, H_CALL, 0x5CB0C0, 1,
        0x5CC44B, GAME_11EN, H_CALL, 0x5CC010, 1,
        0x5CC986, GAME_11EN, H_CALL, 0x5CC750, 1,
        0x5CEDEE, GAME_11EN, H_CALL, 0x5CD360, 1,
        0x5D0106, GAME_11EN, H_CALL, 0x5CEE80, 1,
        0x5D4B69, GAME_11EN, H_CALL, 0x5D4600, 1,
        0x5EF40E, GAME_11EN, H_CALL, 0x5EE7D0, 1,
        0x5FB7EE, GAME_11EN, H_CALL, 0x5FB620, 1,
        0x5FF8D7, GAME_11EN, H_CALL, 0x5FF650, 1,
        0x60001F, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x600036, GAME_11EN, H_CALL, 0x5FFAD0, 2,
        0x600063, GAME_11EN, H_CALL, 0x5FFAD0, 3,
        0x6000A1, GAME_11EN, H_CALL, 0x5FFAD0, 4,
        0x6000D0, GAME_11EN, H_CALL, 0x5FFAD0, 5,
        0x600126, GAME_11EN, H_CALL, 0x5FFAD0, 6,
        0x6001D5, GAME_11EN, H_CALL, 0x5FFAD0, 7,
        0x6001EC, GAME_11EN, H_CALL, 0x5FFAD0, 8,
        0x600219, GAME_11EN, H_CALL, 0x5FFAD0, 9,
        0x60025C, GAME_11EN, H_CALL, 0x5FFAD0, 10,
        0x60028B, GAME_11EN, H_CALL, 0x5FFAD0, 11,
        0x6002E1, GAME_11EN, H_CALL, 0x5FFAD0, 12,
        0x60157A, GAME_11EN, H_CALL, 0x6010E0, 1,
        0x60158B, GAME_11EN, H_CALL, 0x6010E0, 2,
        0x6023C4, GAME_11EN, H_CALL, 0x6023B0, 1,
        0x60247C, GAME_11EN, H_CALL, 0x602470, 1,
        0x602527, GAME_11EN, H_CALL, 0x602520, 1,
        0x60252F, GAME_11EN, H_CALL, 0x602520, 2,
        0x602919, GAME_11EN, H_CALL, 0x602910, 1,
        0x602923, GAME_11EN, H_CALL, 0x602910, 2,
        0x6032DA, GAME_11EN, H_CALL, 0x6032C0, 1,
        0x6033AA, GAME_11EN, H_CALL, 0x6032C0, 2,
        0x60347A, GAME_11EN, H_CALL, 0x6032C0, 3,
        0x6034A9, GAME_11EN, H_CALL, 0x6032C0, 4,
        0x603544, GAME_11EN, H_CALL, 0x603500, 1,
        0x603596, GAME_11EN, H_CALL, 0x603500, 2,
        0x60365F, GAME_11EN, H_CALL, 0x603500, 3,
        0x603694, GAME_11EN, H_CALL, 0x603500, 4,
        0x6037A4, GAME_11EN, H_CALL, 0x6036E0, 1,
        0x603814, GAME_11EN, H_CALL, 0x6036E0, 2,
        0x6038EF, GAME_11EN, H_CALL, 0x6036E0, 3,
        0x603924, GAME_11EN, H_CALL, 0x6036E0, 4,
        0x603A24, GAME_11EN, H_CALL, 0x603960, 1,
        0x603AB7, GAME_11EN, H_CALL, 0x603960, 2,
        0x603B7D, GAME_11EN, H_CALL, 0x603960, 3,
        0x603BB2, GAME_11EN, H_CALL, 0x603960, 4,
        0x603C2D, GAME_11EN, H_CALL, 0x603BF0, 1,
        0x604742, GAME_11EN, H_CALL, 0x6044E0, 1,
        0x6047B6, GAME_11EN, H_CALL, 0x6044E0, 2,
        0x604893, GAME_11EN, H_CALL, 0x6044E0, 3,
        0x60496B, GAME_11EN, H_CALL, 0x6044E0, 4,
        0x604A34, GAME_11EN, H_CALL, 0x6044E0, 5,
        0x604AD8, GAME_11EN, H_CALL, 0x6044E0, 6,
        0x604CE6, GAME_11EN, H_CALL, 0x6044E0, 7,
        0x604D5A, GAME_11EN, H_CALL, 0x6044E0, 8,
        0x604E35, GAME_11EN, H_CALL, 0x6044E0, 9,
        0x604F0D, GAME_11EN, H_CALL, 0x6044E0, 10,
        0x604FD6, GAME_11EN, H_CALL, 0x6044E0, 11,
        0x605014, GAME_11EN, H_CALL, 0x6044E0, 12,
        0x6050E2, GAME_11EN, H_CALL, 0x6044E0, 13,
        0x6051DC, GAME_11EN, H_CALL, 0x6044E0, 14,
        0x6054BD, GAME_11EN, H_CALL, 0x6044E0, 15,
        0x6055CB, GAME_11EN, H_CALL, 0x6044E0, 16,
        0x605699, GAME_11EN, H_CALL, 0x6044E0, 17,
        0x6057E6, GAME_11EN, H_CALL, 0x6044E0, 18,
        0x60592C, GAME_11EN, H_CALL, 0x6044E0, 19,
        0x6059F1, GAME_11EN, H_CALL, 0x6044E0, 20,
        0x605A42, GAME_11EN, H_CALL, 0x6044E0, 21,
        0x605AEC, GAME_11EN, H_CALL, 0x6044E0, 22,
        0x605B4B, GAME_11EN, H_CALL, 0x6044E0, 23,
        0x605C68, GAME_11EN, H_CALL, 0x6044E0, 24,
        0x605CA7, GAME_11EN, H_CALL, 0x6044E0, 25,
        0x605CE6, GAME_11EN, H_CALL, 0x6044E0, 26,
        0x607C9A, GAME_11EN, H_CALL, 0x606710, 1,
        0x6085D3, GAME_11EN, H_CALL, 0x6084A0, 1,
        0x60880C, GAME_11EN, H_CALL, 0x6084A0, 2,
        0x60A54D, GAME_11EN, H_CALL, 0x60A520, 1,
        0x60A581, GAME_11EN, H_CALL, 0x60A520, 2,
        0x60A5CA, GAME_11EN, H_CALL, 0x60A520, 3,
        0x60A675, GAME_11EN, H_CALL, 0x60A520, 4,
        0x60A69C, GAME_11EN, H_CALL, 0x60A520, 5,
        0x60A755, GAME_11EN, H_CALL, 0x60A520, 6,
        0x60A768, GAME_11EN, H_CALL, 0x60A520, 7,
        0x60A7CF, GAME_11EN, H_CALL, 0x60A520, 8,
        0x60A7FB, GAME_11EN, H_CALL, 0x60A520, 9,
        0x60A823, GAME_11EN, H_CALL, 0x60A520, 10,
        0x60A850, GAME_11EN, H_CALL, 0x60A520, 11,
        0x60A9E8, GAME_11EN, H_CALL, 0x60A520, 12,
        0x60EAD4, GAME_11EN, H_CALL, 0x60E3C0, 1,
        0x61299B, GAME_11EN, H_CALL, 0x60E3C0, 2,
        0x617270, GAME_11EN, H_CALL, 0x617250, 1,
        0x61728D, GAME_11EN, H_CALL, 0x617250, 2,
        0x6172AA, GAME_11EN, H_CALL, 0x617250, 3,
        0x6172C3, GAME_11EN, H_CALL, 0x617250, 4,
        0x6172DC, GAME_11EN, H_CALL, 0x617250, 5,
        0x6172F5, GAME_11EN, H_CALL, 0x617250, 6,
        0x61730E, GAME_11EN, H_CALL, 0x617250, 7,
        0x617350, GAME_11EN, H_CALL, 0x617330, 1,
        0x61736D, GAME_11EN, H_CALL, 0x617330, 2,
        0x61738A, GAME_11EN, H_CALL, 0x617330, 3,
        0x6173A3, GAME_11EN, H_CALL, 0x617330, 4,
        0x6173BC, GAME_11EN, H_CALL, 0x617330, 5,
        0x6173D5, GAME_11EN, H_CALL, 0x617330, 6,
        0x6173EE, GAME_11EN, H_CALL, 0x617330, 7,
        0x617427, GAME_11EN, H_CALL, 0x617410, 1,
        0x61743A, GAME_11EN, H_CALL, 0x617410, 2,
        0x617463, GAME_11EN, H_CALL, 0x617410, 3,
        0x617476, GAME_11EN, H_CALL, 0x617410, 4,
        0x6174B1, GAME_11EN, H_CALL, 0x617410, 5,
        0x6174C7, GAME_11EN, H_CALL, 0x617410, 6,
        0x6174E7, GAME_11EN, H_CALL, 0x617410, 7,
        0x6174FD, GAME_11EN, H_CALL, 0x617410, 8,
        0x61751D, GAME_11EN, H_CALL, 0x617410, 9,
        0x617533, GAME_11EN, H_CALL, 0x617410, 10,
        0x617553, GAME_11EN, H_CALL, 0x617410, 11,
        0x617569, GAME_11EN, H_CALL, 0x617410, 12,
        0x617589, GAME_11EN, H_CALL, 0x617410, 13,
        0x61759F, GAME_11EN, H_CALL, 0x617410, 14,
        0x6175BF, GAME_11EN, H_CALL, 0x617410, 15,
        0x6175D5, GAME_11EN, H_CALL, 0x617410, 16,
        0x6175F5, GAME_11EN, H_CALL, 0x617410, 17,
        0x61760B, GAME_11EN, H_CALL, 0x617410, 18,
        0x61762B, GAME_11EN, H_CALL, 0x617410, 19,
        0x617641, GAME_11EN, H_CALL, 0x617410, 20,
        0x617661, GAME_11EN, H_CALL, 0x617410, 21,
        0x617677, GAME_11EN, H_CALL, 0x617410, 22,
        0x617697, GAME_11EN, H_CALL, 0x617410, 23,
        0x6176AD, GAME_11EN, H_CALL, 0x617410, 24,
        0x6176CD, GAME_11EN, H_CALL, 0x617410, 25,
        0x6176E3, GAME_11EN, H_CALL, 0x617410, 26,
        0x617703, GAME_11EN, H_CALL, 0x617410, 27,
        0x617719, GAME_11EN, H_CALL, 0x617410, 28,
        0x617739, GAME_11EN, H_CALL, 0x617410, 29,
        0x61774F, GAME_11EN, H_CALL, 0x617410, 30,
        0x61776F, GAME_11EN, H_CALL, 0x617410, 31,
        0x617785, GAME_11EN, H_CALL, 0x617410, 32,
        0x6177A5, GAME_11EN, H_CALL, 0x617410, 33,
        0x6177BB, GAME_11EN, H_CALL, 0x617410, 34,
        0x6177DB, GAME_11EN, H_CALL, 0x617410, 35,
        0x6177F1, GAME_11EN, H_CALL, 0x617410, 36,
        0x617811, GAME_11EN, H_CALL, 0x617410, 37,
        0x617827, GAME_11EN, H_CALL, 0x617410, 38,
        0x617847, GAME_11EN, H_CALL, 0x617410, 39,
        0x61785D, GAME_11EN, H_CALL, 0x617410, 40,
        0x61787D, GAME_11EN, H_CALL, 0x617410, 41,
        0x617893, GAME_11EN, H_CALL, 0x617410, 42,
        0x6178B3, GAME_11EN, H_CALL, 0x617410, 43,
        0x6178C9, GAME_11EN, H_CALL, 0x617410, 44,
        0x6178E9, GAME_11EN, H_CALL, 0x617410, 45,
        0x6178FF, GAME_11EN, H_CALL, 0x617410, 46,
        0x61791F, GAME_11EN, H_CALL, 0x617410, 47,
        0x617935, GAME_11EN, H_CALL, 0x617410, 48,
        0x617955, GAME_11EN, H_CALL, 0x617410, 49,
        0x61796B, GAME_11EN, H_CALL, 0x617410, 50,
        0x61798B, GAME_11EN, H_CALL, 0x617410, 51,
        0x6179A1, GAME_11EN, H_CALL, 0x617410, 52,
        0x6179C1, GAME_11EN, H_CALL, 0x617410, 53,
        0x6179D7, GAME_11EN, H_CALL, 0x617410, 54,
        0x6179F7, GAME_11EN, H_CALL, 0x617410, 55,
        0x617A0D, GAME_11EN, H_CALL, 0x617410, 56,
        0x617A2D, GAME_11EN, H_CALL, 0x617410, 57,
        0x617A43, GAME_11EN, H_CALL, 0x617410, 58,
        0x617A63, GAME_11EN, H_CALL, 0x617410, 59,
        0x617A79, GAME_11EN, H_CALL, 0x617410, 60,
        0x617A99, GAME_11EN, H_CALL, 0x617410, 61,
        0x617AAF, GAME_11EN, H_CALL, 0x617410, 62,
        0x617ACF, GAME_11EN, H_CALL, 0x617410, 63,
        0x617AE5, GAME_11EN, H_CALL, 0x617410, 64,
        0x617B05, GAME_11EN, H_CALL, 0x617410, 65,
        0x617B1B, GAME_11EN, H_CALL, 0x617410, 66,
        0x617B3B, GAME_11EN, H_CALL, 0x617410, 67,
        0x617B51, GAME_11EN, H_CALL, 0x617410, 68,
        0x617B71, GAME_11EN, H_CALL, 0x617410, 69,
        0x617B87, GAME_11EN, H_CALL, 0x617410, 70,
        0x617BA7, GAME_11EN, H_CALL, 0x617410, 71,
        0x617BBD, GAME_11EN, H_CALL, 0x617410, 72,
        0x617BDD, GAME_11EN, H_CALL, 0x617410, 73,
        0x617BF3, GAME_11EN, H_CALL, 0x617410, 74,
        0x617C13, GAME_11EN, H_CALL, 0x617410, 75,
        0x617C29, GAME_11EN, H_CALL, 0x617410, 76,
        0x617C49, GAME_11EN, H_CALL, 0x617410, 77,
        0x617C5F, GAME_11EN, H_CALL, 0x617410, 78,
        0x617C7F, GAME_11EN, H_CALL, 0x617410, 79,
        0x617C95, GAME_11EN, H_CALL, 0x617410, 80,
        0x617CB5, GAME_11EN, H_CALL, 0x617410, 81,
        0x617CCB, GAME_11EN, H_CALL, 0x617410, 82,
        0x617CEB, GAME_11EN, H_CALL, 0x617410, 83,
        0x617D01, GAME_11EN, H_CALL, 0x617410, 84,
        0x617D21, GAME_11EN, H_CALL, 0x617410, 85,
        0x617D37, GAME_11EN, H_CALL, 0x617410, 86,
        0x617D57, GAME_11EN, H_CALL, 0x617410, 87,
        0x617D69, GAME_11EN, H_CALL, 0x617410, 88,
        0x617D85, GAME_11EN, H_CALL, 0x617410, 89,
        0x617D97, GAME_11EN, H_CALL, 0x617410, 90,
        0x617DB3, GAME_11EN, H_CALL, 0x617410, 91,
        0x617DC5, GAME_11EN, H_CALL, 0x617410, 92,
        0x617E07, GAME_11EN, H_CALL, 0x617DF0, 1,
        0x617E30, GAME_11EN, H_CALL, 0x617DF0, 2,
        0x617E70, GAME_11EN, H_CALL, 0x617DF0, 3,
        0x617E90, GAME_11EN, H_CALL, 0x617DF0, 4,
        0x617EB0, GAME_11EN, H_CALL, 0x617DF0, 5,
        0x617ED0, GAME_11EN, H_CALL, 0x617DF0, 6,
        0x617EF0, GAME_11EN, H_CALL, 0x617DF0, 7,
        0x617F10, GAME_11EN, H_CALL, 0x617DF0, 8,
        0x617F30, GAME_11EN, H_CALL, 0x617DF0, 9,
        0x617F50, GAME_11EN, H_CALL, 0x617DF0, 10,
        0x617F70, GAME_11EN, H_CALL, 0x617DF0, 11,
        0x617F90, GAME_11EN, H_CALL, 0x617DF0, 12,
        0x617FB0, GAME_11EN, H_CALL, 0x617DF0, 13,
        0x617FD0, GAME_11EN, H_CALL, 0x617DF0, 14,
        0x617FF0, GAME_11EN, H_CALL, 0x617DF0, 15,
        0x618010, GAME_11EN, H_CALL, 0x617DF0, 16,
        0x618030, GAME_11EN, H_CALL, 0x617DF0, 17,
        0x618050, GAME_11EN, H_CALL, 0x617DF0, 18,
        0x618070, GAME_11EN, H_CALL, 0x617DF0, 19,
        0x618090, GAME_11EN, H_CALL, 0x617DF0, 20,
        0x6180B0, GAME_11EN, H_CALL, 0x617DF0, 21,
        0x6180D0, GAME_11EN, H_CALL, 0x617DF0, 22,
        0x6180F0, GAME_11EN, H_CALL, 0x617DF0, 23,
        0x618110, GAME_11EN, H_CALL, 0x617DF0, 24,
        0x618130, GAME_11EN, H_CALL, 0x617DF0, 25,
        0x618150, GAME_11EN, H_CALL, 0x617DF0, 26,
        0x618170, GAME_11EN, H_CALL, 0x617DF0, 27,
        0x618190, GAME_11EN, H_CALL, 0x617DF0, 28,
        0x6181B0, GAME_11EN, H_CALL, 0x617DF0, 29,
        0x6181D0, GAME_11EN, H_CALL, 0x617DF0, 30,
        0x6181F0, GAME_11EN, H_CALL, 0x617DF0, 31,
        0x618210, GAME_11EN, H_CALL, 0x617DF0, 32,
        0x618230, GAME_11EN, H_CALL, 0x617DF0, 33,
        0x618250, GAME_11EN, H_CALL, 0x617DF0, 34,
        0x618270, GAME_11EN, H_CALL, 0x617DF0, 35,
        0x618290, GAME_11EN, H_CALL, 0x617DF0, 36,
        0x6182B0, GAME_11EN, H_CALL, 0x617DF0, 37,
        0x6182D0, GAME_11EN, H_CALL, 0x617DF0, 38,
        0x6182F0, GAME_11EN, H_CALL, 0x617DF0, 39,
        0x618310, GAME_11EN, H_CALL, 0x617DF0, 40,
        0x618330, GAME_11EN, H_CALL, 0x617DF0, 41,
        0x618350, GAME_11EN, H_CALL, 0x617DF0, 42,
        0x618370, GAME_11EN, H_CALL, 0x617DF0, 43,
        0x61838C, GAME_11EN, H_CALL, 0x617DF0, 44,
        0x6183A8, GAME_11EN, H_CALL, 0x617DF0, 45,
        0x6183C4, GAME_11EN, H_CALL, 0x617DF0, 46,
        0x61865F, GAME_11EN, H_CALL, 0x618610, 1,
        0x61866C, GAME_11EN, H_CALL, 0x618610, 2,
        0x61867B, GAME_11EN, H_CALL, 0x618610, 3,
        0x61868E, GAME_11EN, H_CALL, 0x618610, 4,
        0x6186DA, GAME_11EN, H_CALL, 0x6186C0, 1,
        0x618944, GAME_11EN, H_CALL, 0x618930, 1,
        0x618EC6, GAME_11EN, H_CALL, 0x618E80, 1,
        0x618F41, GAME_11EN, H_CALL, 0x618E80, 2,
        0x618F4E, GAME_11EN, H_CALL, 0x618E80, 3,
        0x618F5D, GAME_11EN, H_CALL, 0x618E80, 4,
        0x618FFA, GAME_11EN, H_CALL, 0x618FE0, 1,
        0x61A925, GAME_11EN, H_CALL, 0x61A6E0, 1,
        0x61C5FC, GAME_11EN, H_CALL, 0x61C400, 1,
        0x61D9DB, GAME_11EN, H_CALL, 0x61D940, 1,
        0x61DB9D, GAME_11EN, H_CALL, 0x61D940, 2,
        0x61DD2E, GAME_11EN, H_CALL, 0x61D940, 3,
        0x61E967, GAME_11EN, H_CALL, 0x61E950, 1,
        0x61E993, GAME_11EN, H_CALL, 0x61E950, 2,
        0x61EA79, GAME_11EN, H_CALL, 0x61E950, 3,
        0x61EA8E, GAME_11EN, H_CALL, 0x61E950, 4,
        0x624EAB, GAME_11EN, H_CALL, 0x624EA0, 1,
        0x624F2E, GAME_11EN, H_CALL, 0x624EA0, 2,
        0x624F40, GAME_11EN, H_CALL, 0x624EA0, 3,
        0x624F70, GAME_11EN, H_CALL, 0x624EA0, 4,
        0x624F82, GAME_11EN, H_CALL, 0x624EA0, 5,
        0x624F99, GAME_11EN, H_CALL, 0x624EA0, 6,
        0x624FAB, GAME_11EN, H_CALL, 0x624EA0, 7,
        0x624FCD, GAME_11EN, H_CALL, 0x624EA0, 8,
        0x624FDF, GAME_11EN, H_CALL, 0x624EA0, 9,
        0x624FF1, GAME_11EN, H_CALL, 0x624EA0, 10,
        0x625003, GAME_11EN, H_CALL, 0x624EA0, 11,
        0x637BCA, GAME_11EN, H_CALL, 0x637650, 1,
        0x406244, GAME_STEAM, H_CALL, 0x405FA0, 1,
        0x406276, GAME_STEAM, H_CALL, 0x405FA0, 2,
        0x40629F, GAME_STEAM, H_CALL, 0x405FA0, 3,
        0x4062C8, GAME_STEAM, H_CALL, 0x405FA0, 4,
        0x406308, GAME_STEAM, H_CALL, 0x405FA0, 5,
        0x406B2D, GAME_STEAM, H_CALL, 0x4069D0, 1,
        0x406BF4, GAME_STEAM, H_CALL, 0x4069D0, 2,
        0x407036, GAME_STEAM, H_CALL, 0x406D30, 1,
        0x42AD29, GAME_STEAM, H_CALL, 0x42ABE0, 1,
        0x42AFB7, GAME_STEAM, H_CALL, 0x42AE40, 1,
        0x42B0A3, GAME_STEAM, H_CALL, 0x42AE40, 2,
        0x42B593, GAME_STEAM, H_CALL, 0x42AE40, 3,
        0x42B6CC, GAME_STEAM, H_CALL, 0x42AE40, 4,
        0x42B758, GAME_STEAM, H_CALL, 0x42B700, 1,
        0x42B7EA, GAME_STEAM, H_CALL, 0x42B770, 1,
        0x42B931, GAME_STEAM, H_CALL, 0x42B8D0, 1,
        0x42BDFC, GAME_STEAM, H_CALL, 0x42BB40, 1,
        0x42BE24, GAME_STEAM, H_CALL, 0x42BB40, 2,
        0x42C1E7, GAME_STEAM, H_CALL, 0x42BB40, 3,
        0x42C20F, GAME_STEAM, H_CALL, 0x42BB40, 4,
        0x42C3E9, GAME_STEAM, H_CALL, 0x42BB40, 5,
        0x42C411, GAME_STEAM, H_CALL, 0x42BB40, 6,
        0x430CF4, GAME_STEAM, H_CALL, 0x430A30, 1,
        0x431189, GAME_STEAM, H_CALL, 0x430A30, 2,
        0x431897, GAME_STEAM, H_CALL, 0x430A30, 3,
        0x431C72, GAME_STEAM, H_CALL, 0x430A30, 4,
        0x431CA3, GAME_STEAM, H_CALL, 0x430A30, 5,
        0x431CF0, GAME_STEAM, H_CALL, 0x430A30, 6,
        0x431F2D, GAME_STEAM, H_CALL, 0x430A30, 7,
        0x432036, GAME_STEAM, H_CALL, 0x430A30, 8,
        0x432415, GAME_STEAM, H_CALL, 0x430A30, 9,
        0x432524, GAME_STEAM, H_CALL, 0x430A30, 10,
        0x432D69, GAME_STEAM, H_CALL, 0x430A30, 11,
        0x432E76, GAME_STEAM, H_CALL, 0x430A30, 12,
        0x433CCE, GAME_STEAM, H_CALL, 0x430A30, 13,
        0x433D83, GAME_STEAM, H_CALL, 0x430A30, 14,
        0x43C636, GAME_STEAM, H_CALL, 0x43C570, 1,
        0x43C924, GAME_STEAM, H_CALL, 0x43C570, 2,
        0x43CCFB, GAME_STEAM, H_CALL, 0x43CCE0, 1,
        0x440A59, GAME_STEAM, H_CALL, 0x43FFA0, 1,
        0x440C26, GAME_STEAM, H_CALL, 0x43FFA0, 2,
        0x441416, GAME_STEAM, H_CALL, 0x43FFA0, 3,
        0x441B29, GAME_STEAM, H_CALL, 0x441B20, 1,
        0x445BEB, GAME_STEAM, H_CALL, 0x444AF0, 1,
        0x451628, GAME_STEAM, H_CALL, 0x451460, 1,
        0x457FA4, GAME_STEAM, H_CALL, 0x457460, 1,
        0x457FB9, GAME_STEAM, H_CALL, 0x457460, 2,
        0x460AED, GAME_STEAM, H_CALL, 0x460AE0, 1,
        0x46F792, GAME_STEAM, H_CALL, 0x46F770, 1,
        0x4700C5, GAME_STEAM, H_CALL, 0x46FFC7, 1,
        0x470190, GAME_STEAM, H_CALL, 0x46FFC7, 2,
        0x4701FB, GAME_STEAM, H_CALL, 0x46FFC7, 3,
        0x470F31, GAME_STEAM, H_CALL, 0x46FFC7, 4,
        0x470FB7, GAME_STEAM, H_CALL, 0x46FFC7, 5,
        0x4710CA, GAME_STEAM, H_CALL, 0x46FFC7, 6,
        0x4710DE, GAME_STEAM, H_CALL, 0x46FFC7, 7,
        0x471108, GAME_STEAM, H_CALL, 0x46FFC7, 8,
        0x471120, GAME_STEAM, H_CALL, 0x46FFC7, 9,
        0x471138, GAME_STEAM, H_CALL, 0x46FFC7, 10,
        0x47114C, GAME_STEAM, H_CALL, 0x46FFC7, 11,
        0x471160, GAME_STEAM, H_CALL, 0x46FFC7, 12,
        0x471170, GAME_STEAM, H_CALL, 0x46FFC7, 13,
        0x471180, GAME_STEAM, H_CALL, 0x46FFC7, 14,
        0x4711CA, GAME_STEAM, H_CALL, 0x46FFC7, 15,
        0x471229, GAME_STEAM, H_CALL, 0x46FFC7, 16,
        0x47202D, GAME_STEAM, H_CALL, 0x46FFC7, 17,
        0x473464, GAME_STEAM, H_CALL, 0x46FFC7, 18,
        0x4734AD, GAME_STEAM, H_CALL, 0x46FFC7, 19,
        0x4737EA, GAME_STEAM, H_CALL, 0x46FFC7, 20,
        0x47536F, GAME_STEAM, H_CALL, 0x474DF6, 1,
        0x475AB5, GAME_STEAM, H_CALL, 0x4757A6, 1,
        0x475AC8, GAME_STEAM, H_CALL, 0x4757A6, 2,
        0x475ADB, GAME_STEAM, H_CALL, 0x4757A6, 3,
        0x475AEE, GAME_STEAM, H_CALL, 0x4757A6, 4,
        0x479507, GAME_STEAM, H_CALL, 0x4792F0, 1,
        0x47954A, GAME_STEAM, H_CALL, 0x4792F0, 2,
        0x47956A, GAME_STEAM, H_CALL, 0x4792F0, 3,
        0x47985A, GAME_STEAM, H_CALL, 0x4792F0, 4,
        0x47986B, GAME_STEAM, H_CALL, 0x4792F0, 5,
        0x47987C, GAME_STEAM, H_CALL, 0x4792F0, 6,
        0x47989F, GAME_STEAM, H_CALL, 0x4792F0, 7,
        0x4798C6, GAME_STEAM, H_CALL, 0x4792F0, 8,
        0x4798D9, GAME_STEAM, H_CALL, 0x4792F0, 9,
        0x4798F8, GAME_STEAM, H_CALL, 0x4792F0, 10,
        0x47994A, GAME_STEAM, H_CALL, 0x4792F0, 11,
        0x47A2A2, GAME_STEAM, H_CALL, 0x47A0EE, 1,
        0x47A2E5, GAME_STEAM, H_CALL, 0x47A0EE, 2,
        0x47A305, GAME_STEAM, H_CALL, 0x47A0EE, 3,
        0x47AE08, GAME_STEAM, H_CALL, 0x47AD07, 1,
        0x47AE4B, GAME_STEAM, H_CALL, 0x47AD07, 2,
        0x47AE6B, GAME_STEAM, H_CALL, 0x47AD07, 3,
        0x47BDB9, GAME_STEAM, H_CALL, 0x47BD6F, 1,
        0x47BE0C, GAME_STEAM, H_CALL, 0x47BD6F, 2,
        0x47BEC0, GAME_STEAM, H_CALL, 0x47BD6F, 3,
        0x47BF03, GAME_STEAM, H_CALL, 0x47BD6F, 4,
        0x47BF3A, GAME_STEAM, H_CALL, 0x47BD6F, 5,
        0x47BF5A, GAME_STEAM, H_CALL, 0x47BD6F, 6,
        0x47C03E, GAME_STEAM, H_CALL, 0x47BD6F, 7,
        0x47CCA1, GAME_STEAM, H_CALL, 0x47BD6F, 8,
        0x47D3CB, GAME_STEAM, H_CALL, 0x47CD53, 1,
        0x47D416, GAME_STEAM, H_CALL, 0x47CD53, 2,
        0x47D69E, GAME_STEAM, H_CALL, 0x47CD53, 3,
        0x47F182, GAME_STEAM, H_CALL, 0x47EEE9, 1,
        0x47F5E0, GAME_STEAM, H_CALL, 0x47F56C, 1,
        0x47F5EB, GAME_STEAM, H_CALL, 0x47F56C, 2,
        0x47F85A, GAME_STEAM, H_CALL, 0x47F56C, 3,
        0x47F881, GAME_STEAM, H_CALL, 0x47F56C, 4,
        0x47F9AC, GAME_STEAM, H_CALL, 0x47F56C, 5,
        0x47FC0D, GAME_STEAM, H_CALL, 0x47F56C, 6,
        0x47FFD1, GAME_STEAM, H_CALL, 0x47FD6C, 1,
        0x480665, GAME_STEAM, H_CALL, 0x47FD6C, 2,
        0x480679, GAME_STEAM, H_CALL, 0x47FD6C, 3,
        0x4806D2, GAME_STEAM, H_CALL, 0x47FD6C, 4,
        0x480840, GAME_STEAM, H_CALL, 0x47FD6C, 5,
        0x4815C6, GAME_STEAM, H_CALL, 0x480DF7, 1,
        0x4815DA, GAME_STEAM, H_CALL, 0x480DF7, 2,
        0x481633, GAME_STEAM, H_CALL, 0x480DF7, 3,
        0x48174E, GAME_STEAM, H_CALL, 0x480DF7, 4,
        0x481DCA, GAME_STEAM, H_CALL, 0x481993, 1,
        0x481E0D, GAME_STEAM, H_CALL, 0x481993, 2,
        0x481E2D, GAME_STEAM, H_CALL, 0x481993, 3,
        0x482438, GAME_STEAM, H_CALL, 0x481993, 4,
        0x48244B, GAME_STEAM, H_CALL, 0x481993, 5,
        0x48245E, GAME_STEAM, H_CALL, 0x481993, 6,
        0x482491, GAME_STEAM, H_CALL, 0x481993, 7,
        0x48280D, GAME_STEAM, H_CALL, 0x48255A, 1,
        0x48282D, GAME_STEAM, H_CALL, 0x48255A, 2,
        0x482FF8, GAME_STEAM, H_CALL, 0x48255A, 3,
        0x48300B, GAME_STEAM, H_CALL, 0x48255A, 4,
        0x483E5F, GAME_STEAM, H_CALL, 0x4833FA, 1,
        0x483EA3, GAME_STEAM, H_CALL, 0x4833FA, 2,
        0x483ED7, GAME_STEAM, H_CALL, 0x4833FA, 3,
        0x483F35, GAME_STEAM, H_CALL, 0x4833FA, 4,
        0x486EF2, GAME_STEAM, H_CALL, 0x486EF0, 1,
        0x49039B, GAME_STEAM, H_CALL, 0x49036D, 1,
        0x495909, GAME_STEAM, H_CALL, 0x49589B, 1,
        0x495943, GAME_STEAM, H_CALL, 0x49589B, 2,
        0x495973, GAME_STEAM, H_CALL, 0x49589B, 3,
        0x495A2D, GAME_STEAM, H_CALL, 0x49589B, 4,
        0x495AE2, GAME_STEAM, H_CALL, 0x49589B, 5,
        0x495AF4, GAME_STEAM, H_CALL, 0x49589B, 6,
        0x495B07, GAME_STEAM, H_CALL, 0x49589B, 7,
        0x495B38, GAME_STEAM, H_CALL, 0x49589B, 8,
        0x495BDB, GAME_STEAM, H_CALL, 0x49589B, 9,
        0x495BED, GAME_STEAM, H_CALL, 0x49589B, 10,
        0x495C00, GAME_STEAM, H_CALL, 0x49589B, 11,
        0x495C31, GAME_STEAM, H_CALL, 0x49589B, 12,
        0x495CFA, GAME_STEAM, H_CALL, 0x49589B, 13,
        0x495DCE, GAME_STEAM, H_CALL, 0x49589B, 14,
        0x495EAC, GAME_STEAM, H_CALL, 0x49589B, 15,
        0x495EFE, GAME_STEAM, H_CALL, 0x49589B, 16,
        0x495F58, GAME_STEAM, H_CALL, 0x49589B, 17,
        0x495F7E, GAME_STEAM, H_CALL, 0x49589B, 18,
        0x495FAE, GAME_STEAM, H_CALL, 0x49589B, 19,
        0x49615A, GAME_STEAM, H_CALL, 0x49589B, 20,
        0x4961C2, GAME_STEAM, H_CALL, 0x49589B, 21,
        0x496205, GAME_STEAM, H_CALL, 0x49589B, 22,
        0x496859, GAME_STEAM, H_CALL, 0x4964CA, 1,
        0x496884, GAME_STEAM, H_CALL, 0x4964CA, 2,
        0x496897, GAME_STEAM, H_CALL, 0x4964CA, 3,
        0x4968E6, GAME_STEAM, H_CALL, 0x4964CA, 4,
        0x496911, GAME_STEAM, H_CALL, 0x4964CA, 5,
        0x496924, GAME_STEAM, H_CALL, 0x4964CA, 6,
        0x496977, GAME_STEAM, H_CALL, 0x4964CA, 7,
        0x4969B5, GAME_STEAM, H_CALL, 0x4964CA, 8,
        0x4969DC, GAME_STEAM, H_CALL, 0x4964CA, 9,
        0x496A16, GAME_STEAM, H_CALL, 0x4964CA, 10,
        0x496A48, GAME_STEAM, H_CALL, 0x4964CA, 11,
        0x496AAB, GAME_STEAM, H_CALL, 0x4964CA, 12,
        0x496AE4, GAME_STEAM, H_CALL, 0x4964CA, 13,
        0x496B11, GAME_STEAM, H_CALL, 0x4964CA, 14,
        0x496B40, GAME_STEAM, H_CALL, 0x4964CA, 15,
        0x496B6F, GAME_STEAM, H_CALL, 0x4964CA, 16,
        0x496B98, GAME_STEAM, H_CALL, 0x4964CA, 17,
        0x496BBD, GAME_STEAM, H_CALL, 0x4964CA, 18,
        0x496BD0, GAME_STEAM, H_CALL, 0x4964CA, 19,
        0x496BE3, GAME_STEAM, H_CALL, 0x4964CA, 20,
        0x496C0C, GAME_STEAM, H_CALL, 0x4964CA, 21,
        0x496C7C, GAME_STEAM, H_CALL, 0x4964CA, 22,
        0x496CA1, GAME_STEAM, H_CALL, 0x4964CA, 23,
        0x496D18, GAME_STEAM, H_CALL, 0x4964CA, 24,
        0x496D2A, GAME_STEAM, H_CALL, 0x4964CA, 25,
        0x496D32, GAME_STEAM, H_CALL, 0x4964CA, 26,
        0x496D46, GAME_STEAM, H_CALL, 0x4964CA, 27,
        0x496DBF, GAME_STEAM, H_CALL, 0x4964CA, 28,
        0x496DD1, GAME_STEAM, H_CALL, 0x4964CA, 29,
        0x496DD9, GAME_STEAM, H_CALL, 0x4964CA, 30,
        0x496DED, GAME_STEAM, H_CALL, 0x4964CA, 31,
        0x496E5D, GAME_STEAM, H_CALL, 0x4964CA, 32,
        0x496E8D, GAME_STEAM, H_CALL, 0x4964CA, 33,
        0x496EC1, GAME_STEAM, H_CALL, 0x4964CA, 34,
        0x496EEC, GAME_STEAM, H_CALL, 0x4964CA, 35,
        0x496EFF, GAME_STEAM, H_CALL, 0x4964CA, 36,
        0x496F46, GAME_STEAM, H_CALL, 0x4964CA, 37,
        0x496F71, GAME_STEAM, H_CALL, 0x4964CA, 38,
        0x496F84, GAME_STEAM, H_CALL, 0x4964CA, 39,
        0x49757C, GAME_STEAM, H_CALL, 0x4972AF, 1,
        0x4975A5, GAME_STEAM, H_CALL, 0x4972AF, 2,
        0x4975CE, GAME_STEAM, H_CALL, 0x4972AF, 3,
        0x4975E0, GAME_STEAM, H_CALL, 0x4972AF, 4,
        0x4975F0, GAME_STEAM, H_CALL, 0x4972AF, 5,
        0x497614, GAME_STEAM, H_CALL, 0x4972AF, 6,
        0x49763D, GAME_STEAM, H_CALL, 0x4972AF, 7,
        0x497666, GAME_STEAM, H_CALL, 0x4972AF, 8,
        0x497678, GAME_STEAM, H_CALL, 0x4972AF, 9,
        0x497688, GAME_STEAM, H_CALL, 0x4972AF, 10,
        0x4976A8, GAME_STEAM, H_CALL, 0x4972AF, 11,
        0x4976E1, GAME_STEAM, H_CALL, 0x4972AF, 12,
        0x4976F3, GAME_STEAM, H_CALL, 0x4972AF, 13,
        0x497719, GAME_STEAM, H_CALL, 0x4972AF, 14,
        0x49772B, GAME_STEAM, H_CALL, 0x4972AF, 15,
        0x497783, GAME_STEAM, H_CALL, 0x4972AF, 16,
        0x497795, GAME_STEAM, H_CALL, 0x4972AF, 17,
        0x4977A4, GAME_STEAM, H_CALL, 0x4972AF, 18,
        0x4977CD, GAME_STEAM, H_CALL, 0x4972AF, 19,
        0x49782E, GAME_STEAM, H_CALL, 0x4972AF, 20,
        0x497840, GAME_STEAM, H_CALL, 0x4972AF, 21,
        0x49784F, GAME_STEAM, H_CALL, 0x4972AF, 22,
        0x497878, GAME_STEAM, H_CALL, 0x4972AF, 23,
        0x497A6A, GAME_STEAM, H_CALL, 0x4972AF, 24,
        0x497A89, GAME_STEAM, H_CALL, 0x4972AF, 25,
        0x497A9B, GAME_STEAM, H_CALL, 0x4972AF, 26,
        0x497AAB, GAME_STEAM, H_CALL, 0x4972AF, 27,
        0x497AFC, GAME_STEAM, H_CALL, 0x4972AF, 28,
        0x497B1B, GAME_STEAM, H_CALL, 0x4972AF, 29,
        0x497B2D, GAME_STEAM, H_CALL, 0x4972AF, 30,
        0x497B3D, GAME_STEAM, H_CALL, 0x4972AF, 31,
        0x497B91, GAME_STEAM, H_CALL, 0x4972AF, 32,
        0x497BB0, GAME_STEAM, H_CALL, 0x4972AF, 33,
        0x497BC2, GAME_STEAM, H_CALL, 0x4972AF, 34,
        0x497BD2, GAME_STEAM, H_CALL, 0x4972AF, 35,
        0x497C3C, GAME_STEAM, H_CALL, 0x4972AF, 36,
        0x497D60, GAME_STEAM, H_CALL, 0x4972AF, 37,
        0x497D7F, GAME_STEAM, H_CALL, 0x4972AF, 38,
        0x497D91, GAME_STEAM, H_CALL, 0x4972AF, 39,
        0x497DA1, GAME_STEAM, H_CALL, 0x4972AF, 40,
        0x497E28, GAME_STEAM, H_CALL, 0x4972AF, 41,
        0x497F25, GAME_STEAM, H_CALL, 0x4972AF, 42,
        0x4980F3, GAME_STEAM, H_CALL, 0x4972AF, 43,
        0x498147, GAME_STEAM, H_CALL, 0x4972AF, 44,
        0x498159, GAME_STEAM, H_CALL, 0x4972AF, 45,
        0x49817B, GAME_STEAM, H_CALL, 0x4972AF, 46,
        0x49818D, GAME_STEAM, H_CALL, 0x4972AF, 47,
        0x498D9C, GAME_STEAM, H_CALL, 0x498D6F, 1,
        0x498EE5, GAME_STEAM, H_CALL, 0x498D6F, 2,
        0x498EF6, GAME_STEAM, H_CALL, 0x498D6F, 3,
        0x49904F, GAME_STEAM, H_CALL, 0x498FFE, 1,
        0x499087, GAME_STEAM, H_CALL, 0x498FFE, 2,
        0x4990BF, GAME_STEAM, H_CALL, 0x498FFE, 3,
        0x4990F7, GAME_STEAM, H_CALL, 0x498FFE, 4,
        0x49912F, GAME_STEAM, H_CALL, 0x498FFE, 5,
        0x499164, GAME_STEAM, H_CALL, 0x498FFE, 6,
        0x499199, GAME_STEAM, H_CALL, 0x498FFE, 7,
        0x4A487A, GAME_STEAM, H_CALL, 0x4A4710, 1,
        0x4A488B, GAME_STEAM, H_CALL, 0x4A4710, 2,
        0x4A4E5A, GAME_STEAM, H_CALL, 0x4A49D0, 1,
        0x4A4E6B, GAME_STEAM, H_CALL, 0x4A49D0, 2,
        0x4A64A9, GAME_STEAM, H_CALL, 0x4A64A0, 1,
        0x4A658E, GAME_STEAM, H_CALL, 0x4A64A0, 2,
        0x4A65B3, GAME_STEAM, H_CALL, 0x4A64A0, 3,
        0x4A65C3, GAME_STEAM, H_CALL, 0x4A64A0, 4,
        0x4A65E8, GAME_STEAM, H_CALL, 0x4A64A0, 5,
        0x4A65FC, GAME_STEAM, H_CALL, 0x4A64A0, 6,
        0x4A66B4, GAME_STEAM, H_CALL, 0x4A64A0, 7,
        0x4BBB0C, GAME_STEAM, H_CALL, 0x4BBAE0, 1,
        0x4BBCA2, GAME_STEAM, H_CALL, 0x4BBAE0, 2,
        0x4BD5F8, GAME_STEAM, H_CALL, 0x4BC960, 1,
        0x4BD60B, GAME_STEAM, H_CALL, 0x4BC960, 2,
        0x4BD7D2, GAME_STEAM, H_CALL, 0x4BC960, 3,
        0x4FD0E8, GAME_STEAM, H_CALL, 0x4FCE20, 1,
        0x507AEB, GAME_STEAM, H_CALL, 0x505650, 1,
        0x507B02, GAME_STEAM, H_CALL, 0x505650, 2,
        0x507B26, GAME_STEAM, H_CALL, 0x505650, 3,
        0x507CBC, GAME_STEAM, H_CALL, 0x505650, 4,
        0x507CE3, GAME_STEAM, H_CALL, 0x505650, 5,
        0x50A418, GAME_STEAM, H_CALL, 0x50A3F0, 1,
        0x50A436, GAME_STEAM, H_CALL, 0x50A3F0, 2,
        0x50FC15, GAME_STEAM, H_CALL, 0x50F030, 1,
        0x5109F0, GAME_STEAM, H_CALL, 0x50FE80, 1,
        0x519ACD, GAME_STEAM, H_CALL, 0x5198E0, 1,
        0x51A97D, GAME_STEAM, H_CALL, 0x51A8B0, 1,
        0x51ABD4, GAME_STEAM, H_CALL, 0x51AAB0, 1,
        0x51DBCB, GAME_STEAM, H_CALL, 0x51C960, 1,
        0x51DD2D, GAME_STEAM, H_CALL, 0x51C960, 2,
        0x522110, GAME_STEAM, H_CALL, 0x521E00, 1,
        0x523DCE, GAME_STEAM, H_CALL, 0x523BC0, 1,
        0x5251D7, GAME_STEAM, H_CALL, 0x524810, 1,
        0x52B6CF, GAME_STEAM, H_CALL, 0x52AF60, 1,
        0x52BCC1, GAME_STEAM, H_CALL, 0x52AF60, 2,
        0x52D69D, GAME_STEAM, H_CALL, 0x52D0B0, 1,
        0x53513A, GAME_STEAM, H_CALL, 0x535130, 1,
        0x5372B2, GAME_STEAM, H_CALL, 0x537160, 1,
        0x537FEC, GAME_STEAM, H_CALL, 0x537160, 2,
        0x544503, GAME_STEAM, H_CALL, 0x5444EF, 1,
        0x55723D, GAME_STEAM, H_CALL, 0x557210, 1,
        0x557391, GAME_STEAM, H_CALL, 0x557210, 2,
        0x57AA39, GAME_STEAM, H_CALL, 0x57AA20, 1,
        0x57AA5A, GAME_STEAM, H_CALL, 0x57AA20, 2,
        0x57AA96, GAME_STEAM, H_CALL, 0x57AA20, 3,
        0x57D602, GAME_STEAM, H_CALL, 0x57D3B0, 1,
        0x5863E0, GAME_STEAM, H_CALL, 0x5862F0, 1,
        0x5864A5, GAME_STEAM, H_CALL, 0x5862F0, 2,
        0x58728B, GAME_STEAM, H_CALL, 0x586F00, 1,
        0x587496, GAME_STEAM, H_CALL, 0x586F00, 2,
        0x588C3D, GAME_STEAM, H_CALL, 0x588C10, 1,
        0x588C94, GAME_STEAM, H_CALL, 0x588C10, 2,
        0x588CEC, GAME_STEAM, H_CALL, 0x588C10, 3,
        0x588D1F, GAME_STEAM, H_CALL, 0x588C10, 4,
        0x588DD5, GAME_STEAM, H_CALL, 0x588C10, 5,
        0x588E02, GAME_STEAM, H_CALL, 0x588C10, 6,
        0x588E5D, GAME_STEAM, H_CALL, 0x588C10, 7,
        0x588F15, GAME_STEAM, H_CALL, 0x588C10, 8,
        0x588F28, GAME_STEAM, H_CALL, 0x588C10, 9,
        0x588FB2, GAME_STEAM, H_CALL, 0x588C10, 10,
        0x588FDE, GAME_STEAM, H_CALL, 0x588C10, 11,
        0x589006, GAME_STEAM, H_CALL, 0x588C10, 12,
        0x589033, GAME_STEAM, H_CALL, 0x588C10, 13,
        0x58920C, GAME_STEAM, H_CALL, 0x588C10, 14,
        0x5934FD, GAME_STEAM, H_CALL, 0x592E60, 1,
        0x5936DD, GAME_STEAM, H_CALL, 0x592E60, 2,
        0x593A79, GAME_STEAM, H_CALL, 0x592E60, 3,
        0x594504, GAME_STEAM, H_CALL, 0x592E60, 4,
        0x597BC8, GAME_STEAM, H_CALL, 0x592E60, 5,
        0x597BE0, GAME_STEAM, H_CALL, 0x592E60, 6,
        0x597D97, GAME_STEAM, H_CALL, 0x592E60, 7,
        0x598012, GAME_STEAM, H_CALL, 0x592E60, 8,
        0x59814F, GAME_STEAM, H_CALL, 0x592E60, 9,
        0x598F07, GAME_STEAM, H_CALL, 0x592E60, 10,
        0x59B766, GAME_STEAM, H_CALL, 0x59B380, 1,
        0x59D61A, GAME_STEAM, H_CALL, 0x59D090, 1,
        0x59D952, GAME_STEAM, H_CALL, 0x59D090, 2,
        0x59D970, GAME_STEAM, H_CALL, 0x59D090, 3,
        0x5A1308, GAME_STEAM, H_CALL, 0x59FCC0, 1,
        0x5A218F, GAME_STEAM, H_CALL, 0x59FCC0, 2,
        0x5A4A15, GAME_STEAM, H_CALL, 0x5A49F0, 1,
        0x5A4AD7, GAME_STEAM, H_CALL, 0x5A49F0, 2,
        0x5A4B13, GAME_STEAM, H_CALL, 0x5A49F0, 3,
        0x5A570C, GAME_STEAM, H_CALL, 0x5A53A0, 1,
        0x5A57C7, GAME_STEAM, H_CALL, 0x5A53A0, 2,
        0x5B5617, GAME_STEAM, H_CALL, 0x5B52F0, 1,
        0x5B58AE, GAME_STEAM, H_CALL, 0x5B52F0, 2,
        0x5B58D8, GAME_STEAM, H_CALL, 0x5B52F0, 3,
        0x5B5902, GAME_STEAM, H_CALL, 0x5B52F0, 4,
        0x5B594B, GAME_STEAM, H_CALL, 0x5B52F0, 5,
        0x5B5BCE, GAME_STEAM, H_CALL, 0x5B52F0, 6,
        0x5B5BE0, GAME_STEAM, H_CALL, 0x5B52F0, 7,
        0x5B5F9A, GAME_STEAM, H_CALL, 0x5B52F0, 8,
        0x5B5FC0, GAME_STEAM, H_CALL, 0x5B52F0, 9,
        0x5B6867, GAME_STEAM, H_CALL, 0x5B52F0, 10,
        0x5B6879, GAME_STEAM, H_CALL, 0x5B52F0, 11,
        0x5B6C72, GAME_STEAM, H_CALL, 0x5B52F0, 12,
        0x5B6C9C, GAME_STEAM, H_CALL, 0x5B52F0, 13,
        0x5B6CC8, GAME_STEAM, H_CALL, 0x5B52F0, 14,
        0x5B6CEE, GAME_STEAM, H_CALL, 0x5B52F0, 15,
        0x5B6D0B, GAME_STEAM, H_CALL, 0x5B52F0, 16,
        0x5B6D54, GAME_STEAM, H_CALL, 0x5B52F0, 17,
        0x5B6D65, GAME_STEAM, H_CALL, 0x5B52F0, 18,
        0x5B6D8F, GAME_STEAM, H_CALL, 0x5B52F0, 19,
        0x5B6DB5, GAME_STEAM, H_CALL, 0x5B52F0, 20,
        0x5B6DD2, GAME_STEAM, H_CALL, 0x5B52F0, 21,
        0x5B6DFC, GAME_STEAM, H_CALL, 0x5B52F0, 22,
        0x5B6E45, GAME_STEAM, H_CALL, 0x5B52F0, 23,
        0x5B6E71, GAME_STEAM, H_CALL, 0x5B52F0, 24,
        0x5C64EC, GAME_STEAM, H_CALL, 0x5C5550, 1,
        0x5C8FC2, GAME_STEAM, H_CALL, 0x5C8FA0, 1,
        0x5C90B0, GAME_STEAM, H_CALL, 0x5C9010, 1,
        0x5C90C8, GAME_STEAM, H_CALL, 0x5C9010, 2,
        0x5C910A, GAME_STEAM, H_CALL, 0x5C9010, 3,
        0x5C929C, GAME_STEAM, H_CALL, 0x5C9010, 4,
        0x5C940E, GAME_STEAM, H_CALL, 0x5C9370, 1,
        0x5C9426, GAME_STEAM, H_CALL, 0x5C9370, 2,
        0x5C9537, GAME_STEAM, H_CALL, 0x5C9370, 3,
        0x5C967E, GAME_STEAM, H_CALL, 0x5C95E0, 1,
        0x5C9696, GAME_STEAM, H_CALL, 0x5C95E0, 2,
        0x5C97DE, GAME_STEAM, H_CALL, 0x5C95E0, 3,
        0x5CBDD3, GAME_STEAM, H_CALL, 0x5CAED0, 1,
        0x5CC25B, GAME_STEAM, H_CALL, 0x5CBE20, 1,
        0x5CC741, GAME_STEAM, H_CALL, 0x5CC560, 1,
        0x5CEB9E, GAME_STEAM, H_CALL, 0x5CD110, 1,
        0x5CFEB6, GAME_STEAM, H_CALL, 0x5CEC30, 1,
        0x5D4919, GAME_STEAM, H_CALL, 0x5D43B0, 1,
        0x5EF04E, GAME_STEAM, H_CALL, 0x5EE410, 1,
        0x5FB42E, GAME_STEAM, H_CALL, 0x5FB260, 1,
        0x5FF517, GAME_STEAM, H_CALL, 0x5FF290, 1,
        0x5FFC5F, GAME_STEAM, H_CALL, 0x5FF710, 1,
        0x5FFC76, GAME_STEAM, H_CALL, 0x5FF710, 2,
        0x5FFCA3, GAME_STEAM, H_CALL, 0x5FF710, 3,
        0x5FFCE1, GAME_STEAM, H_CALL, 0x5FF710, 4,
        0x5FFD10, GAME_STEAM, H_CALL, 0x5FF710, 5,
        0x5FFD66, GAME_STEAM, H_CALL, 0x5FF710, 6,
        0x5FFE15, GAME_STEAM, H_CALL, 0x5FF710, 7,
        0x5FFE2C, GAME_STEAM, H_CALL, 0x5FF710, 8,
        0x5FFE59, GAME_STEAM, H_CALL, 0x5FF710, 9,
        0x5FFE9C, GAME_STEAM, H_CALL, 0x5FF710, 10,
        0x5FFECB, GAME_STEAM, H_CALL, 0x5FF710, 11,
        0x5FFF21, GAME_STEAM, H_CALL, 0x5FF710, 12,
        0x6011BA, GAME_STEAM, H_CALL, 0x600D20, 1,
        0x6011CB, GAME_STEAM, H_CALL, 0x600D20, 2,
        0x602004, GAME_STEAM, H_CALL, 0x601FF0, 1,
        0x6020BC, GAME_STEAM, H_CALL, 0x6020B0, 1,
        0x602167, GAME_STEAM, H_CALL, 0x602160, 1,
        0x60216F, GAME_STEAM, H_CALL, 0x602160, 2,
        0x602559, GAME_STEAM, H_CALL, 0x602550, 1,
        0x602563, GAME_STEAM, H_CALL, 0x602550, 2,
        0x602F1A, GAME_STEAM, H_CALL, 0x602F00, 1,
        0x602FEA, GAME_STEAM, H_CALL, 0x602F00, 2,
        0x6030BA, GAME_STEAM, H_CALL, 0x602F00, 3,
        0x6030E9, GAME_STEAM, H_CALL, 0x602F00, 4,
        0x603184, GAME_STEAM, H_CALL, 0x603140, 1,
        0x6031D6, GAME_STEAM, H_CALL, 0x603140, 2,
        0x60329F, GAME_STEAM, H_CALL, 0x603140, 3,
        0x6032D4, GAME_STEAM, H_CALL, 0x603140, 4,
        0x6033E4, GAME_STEAM, H_CALL, 0x603320, 1,
        0x603454, GAME_STEAM, H_CALL, 0x603320, 2,
        0x60352F, GAME_STEAM, H_CALL, 0x603320, 3,
        0x603564, GAME_STEAM, H_CALL, 0x603320, 4,
        0x603664, GAME_STEAM, H_CALL, 0x6035A0, 1,
        0x6036F7, GAME_STEAM, H_CALL, 0x6035A0, 2,
        0x6037BD, GAME_STEAM, H_CALL, 0x6035A0, 3,
        0x6037F2, GAME_STEAM, H_CALL, 0x6035A0, 4,
        0x60386D, GAME_STEAM, H_CALL, 0x603830, 1,
        0x604382, GAME_STEAM, H_CALL, 0x604120, 1,
        0x6043F6, GAME_STEAM, H_CALL, 0x604120, 2,
        0x6044D3, GAME_STEAM, H_CALL, 0x604120, 3,
        0x6045AB, GAME_STEAM, H_CALL, 0x604120, 4,
        0x604674, GAME_STEAM, H_CALL, 0x604120, 5,
        0x604718, GAME_STEAM, H_CALL, 0x604120, 6,
        0x604926, GAME_STEAM, H_CALL, 0x604120, 7,
        0x60499A, GAME_STEAM, H_CALL, 0x604120, 8,
        0x604A75, GAME_STEAM, H_CALL, 0x604120, 9,
        0x604B4D, GAME_STEAM, H_CALL, 0x604120, 10,
        0x604C16, GAME_STEAM, H_CALL, 0x604120, 11,
        0x604C54, GAME_STEAM, H_CALL, 0x604120, 12,
        0x604D22, GAME_STEAM, H_CALL, 0x604120, 13,
        0x604E1C, GAME_STEAM, H_CALL, 0x604120, 14,
        0x6050FD, GAME_STEAM, H_CALL, 0x604120, 15,
        0x60520B, GAME_STEAM, H_CALL, 0x604120, 16,
        0x6052D9, GAME_STEAM, H_CALL, 0x604120, 17,
        0x605426, GAME_STEAM, H_CALL, 0x604120, 18,
        0x60556C, GAME_STEAM, H_CALL, 0x604120, 19,
        0x605631, GAME_STEAM, H_CALL, 0x604120, 20,
        0x605682, GAME_STEAM, H_CALL, 0x604120, 21,
        0x60572C, GAME_STEAM, H_CALL, 0x604120, 22,
        0x60578B, GAME_STEAM, H_CALL, 0x604120, 23,
        0x6058A8, GAME_STEAM, H_CALL, 0x604120, 24,
        0x6058E7, GAME_STEAM, H_CALL, 0x604120, 25,
        0x605926, GAME_STEAM, H_CALL, 0x604120, 26,
        0x6078DA, GAME_STEAM, H_CALL, 0x606350, 1,
        0x608213, GAME_STEAM, H_CALL, 0x6080E0, 1,
        0x60844C, GAME_STEAM, H_CALL, 0x6080E0, 2,
        0x60A18D, GAME_STEAM, H_CALL, 0x60A160, 1,
        0x60A1C1, GAME_STEAM, H_CALL, 0x60A160, 2,
        0x60A20A, GAME_STEAM, H_CALL, 0x60A160, 3,
        0x60A2B5, GAME_STEAM, H_CALL, 0x60A160, 4,
        0x60A2DC, GAME_STEAM, H_CALL, 0x60A160, 5,
        0x60A395, GAME_STEAM, H_CALL, 0x60A160, 6,
        0x60A3A8, GAME_STEAM, H_CALL, 0x60A160, 7,
        0x60A40F, GAME_STEAM, H_CALL, 0x60A160, 8,
        0x60A43B, GAME_STEAM, H_CALL, 0x60A160, 9,
        0x60A463, GAME_STEAM, H_CALL, 0x60A160, 10,
        0x60A490, GAME_STEAM, H_CALL, 0x60A160, 11,
        0x60A628, GAME_STEAM, H_CALL, 0x60A160, 12,
        0x60E714, GAME_STEAM, H_CALL, 0x60E000, 1,
        0x6125DB, GAME_STEAM, H_CALL, 0x60E000, 2,
        0x616EB0, GAME_STEAM, H_CALL, 0x616E90, 1,
        0x616ECD, GAME_STEAM, H_CALL, 0x616E90, 2,
        0x616EEA, GAME_STEAM, H_CALL, 0x616E90, 3,
        0x616F03, GAME_STEAM, H_CALL, 0x616E90, 4,
        0x616F1C, GAME_STEAM, H_CALL, 0x616E90, 5,
        0x616F35, GAME_STEAM, H_CALL, 0x616E90, 6,
        0x616F4E, GAME_STEAM, H_CALL, 0x616E90, 7,
        0x616F90, GAME_STEAM, H_CALL, 0x616F70, 1,
        0x616FAD, GAME_STEAM, H_CALL, 0x616F70, 2,
        0x616FCA, GAME_STEAM, H_CALL, 0x616F70, 3,
        0x616FE3, GAME_STEAM, H_CALL, 0x616F70, 4,
        0x616FFC, GAME_STEAM, H_CALL, 0x616F70, 5,
        0x617015, GAME_STEAM, H_CALL, 0x616F70, 6,
        0x61702E, GAME_STEAM, H_CALL, 0x616F70, 7,
        0x617067, GAME_STEAM, H_CALL, 0x617050, 1,
        0x61707A, GAME_STEAM, H_CALL, 0x617050, 2,
        0x6170A3, GAME_STEAM, H_CALL, 0x617050, 3,
        0x6170B6, GAME_STEAM, H_CALL, 0x617050, 4,
        0x6170F1, GAME_STEAM, H_CALL, 0x617050, 5,
        0x617107, GAME_STEAM, H_CALL, 0x617050, 6,
        0x617127, GAME_STEAM, H_CALL, 0x617050, 7,
        0x61713D, GAME_STEAM, H_CALL, 0x617050, 8,
        0x61715D, GAME_STEAM, H_CALL, 0x617050, 9,
        0x617173, GAME_STEAM, H_CALL, 0x617050, 10,
        0x617193, GAME_STEAM, H_CALL, 0x617050, 11,
        0x6171A9, GAME_STEAM, H_CALL, 0x617050, 12,
        0x6171C9, GAME_STEAM, H_CALL, 0x617050, 13,
        0x6171DF, GAME_STEAM, H_CALL, 0x617050, 14,
        0x6171FF, GAME_STEAM, H_CALL, 0x617050, 15,
        0x617215, GAME_STEAM, H_CALL, 0x617050, 16,
        0x617235, GAME_STEAM, H_CALL, 0x617050, 17,
        0x61724B, GAME_STEAM, H_CALL, 0x617050, 18,
        0x61726B, GAME_STEAM, H_CALL, 0x617050, 19,
        0x617281, GAME_STEAM, H_CALL, 0x617050, 20,
        0x6172A1, GAME_STEAM, H_CALL, 0x617050, 21,
        0x6172B7, GAME_STEAM, H_CALL, 0x617050, 22,
        0x6172D7, GAME_STEAM, H_CALL, 0x617050, 23,
        0x6172ED, GAME_STEAM, H_CALL, 0x617050, 24,
        0x61730D, GAME_STEAM, H_CALL, 0x617050, 25,
        0x617323, GAME_STEAM, H_CALL, 0x617050, 26,
        0x617343, GAME_STEAM, H_CALL, 0x617050, 27,
        0x617359, GAME_STEAM, H_CALL, 0x617050, 28,
        0x617379, GAME_STEAM, H_CALL, 0x617050, 29,
        0x61738F, GAME_STEAM, H_CALL, 0x617050, 30,
        0x6173AF, GAME_STEAM, H_CALL, 0x617050, 31,
        0x6173C5, GAME_STEAM, H_CALL, 0x617050, 32,
        0x6173E5, GAME_STEAM, H_CALL, 0x617050, 33,
        0x6173FB, GAME_STEAM, H_CALL, 0x617050, 34,
        0x61741B, GAME_STEAM, H_CALL, 0x617050, 35,
        0x617431, GAME_STEAM, H_CALL, 0x617050, 36,
        0x617451, GAME_STEAM, H_CALL, 0x617050, 37,
        0x617467, GAME_STEAM, H_CALL, 0x617050, 38,
        0x617487, GAME_STEAM, H_CALL, 0x617050, 39,
        0x61749D, GAME_STEAM, H_CALL, 0x617050, 40,
        0x6174BD, GAME_STEAM, H_CALL, 0x617050, 41,
        0x6174D3, GAME_STEAM, H_CALL, 0x617050, 42,
        0x6174F3, GAME_STEAM, H_CALL, 0x617050, 43,
        0x617509, GAME_STEAM, H_CALL, 0x617050, 44,
        0x617529, GAME_STEAM, H_CALL, 0x617050, 45,
        0x61753F, GAME_STEAM, H_CALL, 0x617050, 46,
        0x61755F, GAME_STEAM, H_CALL, 0x617050, 47,
        0x617575, GAME_STEAM, H_CALL, 0x617050, 48,
        0x617595, GAME_STEAM, H_CALL, 0x617050, 49,
        0x6175AB, GAME_STEAM, H_CALL, 0x617050, 50,
        0x6175CB, GAME_STEAM, H_CALL, 0x617050, 51,
        0x6175E1, GAME_STEAM, H_CALL, 0x617050, 52,
        0x617601, GAME_STEAM, H_CALL, 0x617050, 53,
        0x617617, GAME_STEAM, H_CALL, 0x617050, 54,
        0x617637, GAME_STEAM, H_CALL, 0x617050, 55,
        0x61764D, GAME_STEAM, H_CALL, 0x617050, 56,
        0x61766D, GAME_STEAM, H_CALL, 0x617050, 57,
        0x617683, GAME_STEAM, H_CALL, 0x617050, 58,
        0x6176A3, GAME_STEAM, H_CALL, 0x617050, 59,
        0x6176B9, GAME_STEAM, H_CALL, 0x617050, 60,
        0x6176D9, GAME_STEAM, H_CALL, 0x617050, 61,
        0x6176EF, GAME_STEAM, H_CALL, 0x617050, 62,
        0x61770F, GAME_STEAM, H_CALL, 0x617050, 63,
        0x617725, GAME_STEAM, H_CALL, 0x617050, 64,
        0x617745, GAME_STEAM, H_CALL, 0x617050, 65,
        0x61775B, GAME_STEAM, H_CALL, 0x617050, 66,
        0x61777B, GAME_STEAM, H_CALL, 0x617050, 67,
        0x617791, GAME_STEAM, H_CALL, 0x617050, 68,
        0x6177B1, GAME_STEAM, H_CALL, 0x617050, 69,
        0x6177C7, GAME_STEAM, H_CALL, 0x617050, 70,
        0x6177E7, GAME_STEAM, H_CALL, 0x617050, 71,
        0x6177FD, GAME_STEAM, H_CALL, 0x617050, 72,
        0x61781D, GAME_STEAM, H_CALL, 0x617050, 73,
        0x617833, GAME_STEAM, H_CALL, 0x617050, 74,
        0x617853, GAME_STEAM, H_CALL, 0x617050, 75,
        0x617869, GAME_STEAM, H_CALL, 0x617050, 76,
        0x617889, GAME_STEAM, H_CALL, 0x617050, 77,
        0x61789F, GAME_STEAM, H_CALL, 0x617050, 78,
        0x6178BF, GAME_STEAM, H_CALL, 0x617050, 79,
        0x6178D5, GAME_STEAM, H_CALL, 0x617050, 80,
        0x6178F5, GAME_STEAM, H_CALL, 0x617050, 81,
        0x61790B, GAME_STEAM, H_CALL, 0x617050, 82,
        0x61792B, GAME_STEAM, H_CALL, 0x617050, 83,
        0x617941, GAME_STEAM, H_CALL, 0x617050, 84,
        0x617961, GAME_STEAM, H_CALL, 0x617050, 85,
        0x617977, GAME_STEAM, H_CALL, 0x617050, 86,
        0x617997, GAME_STEAM, H_CALL, 0x617050, 87,
        0x6179A9, GAME_STEAM, H_CALL, 0x617050, 88,
        0x6179C5, GAME_STEAM, H_CALL, 0x617050, 89,
        0x6179D7, GAME_STEAM, H_CALL, 0x617050, 90,
        0x6179F3, GAME_STEAM, H_CALL, 0x617050, 91,
        0x617A05, GAME_STEAM, H_CALL, 0x617050, 92,
        0x617A47, GAME_STEAM, H_CALL, 0x617A30, 1,
        0x617A70, GAME_STEAM, H_CALL, 0x617A30, 2,
        0x617AB0, GAME_STEAM, H_CALL, 0x617A30, 3,
        0x617AD0, GAME_STEAM, H_CALL, 0x617A30, 4,
        0x617AF0, GAME_STEAM, H_CALL, 0x617A30, 5,
        0x617B10, GAME_STEAM, H_CALL, 0x617A30, 6,
        0x617B30, GAME_STEAM, H_CALL, 0x617A30, 7,
        0x617B50, GAME_STEAM, H_CALL, 0x617A30, 8,
        0x617B70, GAME_STEAM, H_CALL, 0x617A30, 9,
        0x617B90, GAME_STEAM, H_CALL, 0x617A30, 10,
        0x617BB0, GAME_STEAM, H_CALL, 0x617A30, 11,
        0x617BD0, GAME_STEAM, H_CALL, 0x617A30, 12,
        0x617BF0, GAME_STEAM, H_CALL, 0x617A30, 13,
        0x617C10, GAME_STEAM, H_CALL, 0x617A30, 14,
        0x617C30, GAME_STEAM, H_CALL, 0x617A30, 15,
        0x617C50, GAME_STEAM, H_CALL, 0x617A30, 16,
        0x617C70, GAME_STEAM, H_CALL, 0x617A30, 17,
        0x617C90, GAME_STEAM, H_CALL, 0x617A30, 18,
        0x617CB0, GAME_STEAM, H_CALL, 0x617A30, 19,
        0x617CD0, GAME_STEAM, H_CALL, 0x617A30, 20,
        0x617CF0, GAME_STEAM, H_CALL, 0x617A30, 21,
        0x617D10, GAME_STEAM, H_CALL, 0x617A30, 22,
        0x617D30, GAME_STEAM, H_CALL, 0x617A30, 23,
        0x617D50, GAME_STEAM, H_CALL, 0x617A30, 24,
        0x617D70, GAME_STEAM, H_CALL, 0x617A30, 25,
        0x617D90, GAME_STEAM, H_CALL, 0x617A30, 26,
        0x617DB0, GAME_STEAM, H_CALL, 0x617A30, 27,
        0x617DD0, GAME_STEAM, H_CALL, 0x617A30, 28,
        0x617DF0, GAME_STEAM, H_CALL, 0x617A30, 29,
        0x617E10, GAME_STEAM, H_CALL, 0x617A30, 30,
        0x617E30, GAME_STEAM, H_CALL, 0x617A30, 31,
        0x617E50, GAME_STEAM, H_CALL, 0x617A30, 32,
        0x617E70, GAME_STEAM, H_CALL, 0x617A30, 33,
        0x617E90, GAME_STEAM, H_CALL, 0x617A30, 34,
        0x617EB0, GAME_STEAM, H_CALL, 0x617A30, 35,
        0x617ED0, GAME_STEAM, H_CALL, 0x617A30, 36,
        0x617EF0, GAME_STEAM, H_CALL, 0x617A30, 37,
        0x617F10, GAME_STEAM, H_CALL, 0x617A30, 38,
        0x617F30, GAME_STEAM, H_CALL, 0x617A30, 39,
        0x617F50, GAME_STEAM, H_CALL, 0x617A30, 40,
        0x617F70, GAME_STEAM, H_CALL, 0x617A30, 41,
        0x617F90, GAME_STEAM, H_CALL, 0x617A30, 42,
        0x617FB0, GAME_STEAM, H_CALL, 0x617A30, 43,
        0x617FCC, GAME_STEAM, H_CALL, 0x617A30, 44,
        0x617FE8, GAME_STEAM, H_CALL, 0x617A30, 45,
        0x618004, GAME_STEAM, H_CALL, 0x617A30, 46,
        0x61829F, GAME_STEAM, H_CALL, 0x618250, 1,
        0x6182AC, GAME_STEAM, H_CALL, 0x618250, 2,
        0x6182BB, GAME_STEAM, H_CALL, 0x618250, 3,
        0x6182CE, GAME_STEAM, H_CALL, 0x618250, 4,
        0x61831A, GAME_STEAM, H_CALL, 0x618300, 1,
        0x618584, GAME_STEAM, H_CALL, 0x618570, 1,
        0x618B06, GAME_STEAM, H_CALL, 0x618AC0, 1,
        0x618B81, GAME_STEAM, H_CALL, 0x618AC0, 2,
        0x618B8E, GAME_STEAM, H_CALL, 0x618AC0, 3,
        0x618B9D, GAME_STEAM, H_CALL, 0x618AC0, 4,
        0x618C3A, GAME_STEAM, H_CALL, 0x618C20, 1,
        0x61A580, GAME_STEAM, H_CALL, 0x61A320, 1,
        0x61C24F, GAME_STEAM, H_CALL, 0x61C040, 1,
        0x61D63B, GAME_STEAM, H_CALL, 0x61D5A0, 1,
        0x61D7FD, GAME_STEAM, H_CALL, 0x61D5A0, 2,
        0x61D98E, GAME_STEAM, H_CALL, 0x61D5A0, 3,
        0x61E5C7, GAME_STEAM, H_CALL, 0x61E5B0, 1,
        0x61E5F3, GAME_STEAM, H_CALL, 0x61E5B0, 2,
        0x61E6D9, GAME_STEAM, H_CALL, 0x61E5B0, 3,
        0x61E6EE, GAME_STEAM, H_CALL, 0x61E5B0, 4,
        0x624B1B, GAME_STEAM, H_CALL, 0x624B10, 1,
        0x624B9E, GAME_STEAM, H_CALL, 0x624B10, 2,
        0x624BB0, GAME_STEAM, H_CALL, 0x624B10, 3,
        0x624BE0, GAME_STEAM, H_CALL, 0x624B10, 4,
        0x624BF2, GAME_STEAM, H_CALL, 0x624B10, 5,
        0x624C09, GAME_STEAM, H_CALL, 0x624B10, 6,
        0x624C1B, GAME_STEAM, H_CALL, 0x624B10, 7,
        0x624C3D, GAME_STEAM, H_CALL, 0x624B10, 8,
        0x624C4F, GAME_STEAM, H_CALL, 0x624B10, 9,
        0x624C61, GAME_STEAM, H_CALL, 0x624B10, 10,
        0x624C73, GAME_STEAM, H_CALL, 0x624B10, 11,
        0x63780A, GAME_STEAM, H_CALL, 0x6372C0, 1>;
    using def_t = CPad *(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPad::StopShaking)
    static int address;
    static int global_address;
    static const int id = 0x4AB070;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AB070, 0x4AB090, 0x4AAF40>;
    // total references count: 10en (3), 11en (3), steam (3)
    using refs_t = RefList<
        0x42BE34, GAME_10EN, H_CALL, 0x42BB70, 1,
        0x42C21F, GAME_10EN, H_CALL, 0x42BB70, 2,
        0x42C421, GAME_10EN, H_CALL, 0x42BB70, 3,
        0x42BE34, GAME_11EN, H_CALL, 0x42BB70, 1,
        0x42C21F, GAME_11EN, H_CALL, 0x42BB70, 2,
        0x42C421, GAME_11EN, H_CALL, 0x42BB70, 3,
        0x42BE04, GAME_STEAM, H_CALL, 0x42BB40, 1,
        0x42C1EF, GAME_STEAM, H_CALL, 0x42BB40, 2,
        0x42C3F1, GAME_STEAM, H_CALL, 0x42BB40, 3>;
    using def_t = void(CPad *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *,int>, 0,1>;
META_END

META_BEGIN(CPad::StopPadsShaking)
    static int address;
    static int global_address;
    static const int id = 0x4AB080;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AB080, 0x4AB0A0, 0x4AAF50>;
    // total references count: 10en (5), 11en (5), steam (5)
    using refs_t = RefList<
        0x40DFFB, GAME_10EN, H_CALL, 0x40DFB0, 1,
        0x40ED86, GAME_10EN, H_CALL, 0x40ED80, 1,
        0x4A3CFE, GAME_10EN, H_CALL, 0x4A3BCD, 1,
        0x4BBC4A, GAME_10EN, H_CALL, 0x4BBC10, 1,
        0x600523, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x40DFFB, GAME_11EN, H_CALL, 0x40DFB0, 1,
        0x40ED86, GAME_11EN, H_CALL, 0x40ED80, 1,
        0x4A3D1F, GAME_11EN, H_CALL, 0x4A3BEE, 1,
        0x4BBC6A, GAME_11EN, H_CALL, 0x4BBC30, 1,
        0x600543, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x40DFFB, GAME_STEAM, H_CALL, 0x40DFB0, 1,
        0x40ED86, GAME_STEAM, H_CALL, 0x40ED80, 1,
        0x4A3BBD, GAME_STEAM, H_CALL, 0x4A3A8C, 1,
        0x4BBB1A, GAME_STEAM, H_CALL, 0x4BBAE0, 1,
        0x600183, GAME_STEAM, H_CALL, 0x5FF710, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPad::DoCheats)
    static int address;
    static int global_address;
    static const int id = 0x4AB090;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AB090, 0x4AB0B0, 0x4AAF60>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A44F2, GAME_10EN, H_CALL, 0x4A4410, 1,
        0x4A4512, GAME_11EN, H_CALL, 0x4A4430, 1,
        0x4A4365, GAME_STEAM, H_CALL, 0x4A42D0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPad::FixPadsAfterSave)
    static int address;
    static int global_address;
    static const int id = 0x4AB0A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AB0A0, 0x4AB0C0, 0x4AAF70>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x61D3B0, GAME_10EN, H_CALL, 0x61C420, 1,
        0x61D390, GAME_11EN, H_CALL, 0x61C400, 1,
        0x61CFF0, GAME_STEAM, H_CALL, 0x61C040, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPad::Update)
    static int address;
    static int global_address;
    static const int id = 0x4AB0C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AB0C0, 0x4AB0E0, 0x4AAF90>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4AB714, GAME_10EN, H_CALL, 0x4AB6C0, 1,
        0x4AB734, GAME_11EN, H_CALL, 0x4AB6E0, 1,
        0x4AB5E4, GAME_STEAM, H_CALL, 0x4AB590, 1>;
    using def_t = void(CPad *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *,int>, 0,1>;
META_END

META_BEGIN(CPad::UpdatePads)
    static int address;
    static int global_address;
    static const int id = 0x4AB6C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AB6C0, 0x4AB6E0, 0x4AB590>;
    // total references count: 10en (11), 11en (11), steam (11)
    using refs_t = RefList<
        0x490476, GAME_10EN, H_CALL, 0x49045D, 1,
        0x4A4412, GAME_10EN, H_CALL, 0x4A4410, 1,
        0x4A5C7E, GAME_10EN, H_CALL, 0x4A5C60, 1,
        0x4A669F, GAME_10EN, H_CALL, 0x4A65D0, 1,
        0x4AB0A0, GAME_10EN, H_CALL, 0x4AB0A0, 1,
        0x54460C, GAME_10EN, H_CALL, 0x5445FF, 1,
        0x5FFFD9, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x60018F, GAME_10EN, H_CALL, 0x5FFAB0, 2,
        0x61D9F4, GAME_10EN, H_CALL, 0x61D960, 1,
        0x61DBB6, GAME_10EN, H_CALL, 0x61D960, 2,
        0x61DD47, GAME_10EN, H_CALL, 0x61D960, 3,
        0x490486, GAME_11EN, H_CALL, 0x49046D, 1,
        0x4A4432, GAME_11EN, H_CALL, 0x4A4430, 1,
        0x4A5C9E, GAME_11EN, H_CALL, 0x4A5C80, 1,
        0x4A66BF, GAME_11EN, H_CALL, 0x4A65F0, 1,
        0x4AB0C0, GAME_11EN, H_CALL, 0x4AB0C0, 1,
        0x54462C, GAME_11EN, H_CALL, 0x54461F, 1,
        0x5FFFF9, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x6001AF, GAME_11EN, H_CALL, 0x5FFAD0, 2,
        0x61D9D4, GAME_11EN, H_CALL, 0x61D940, 1,
        0x61DB96, GAME_11EN, H_CALL, 0x61D940, 2,
        0x61DD27, GAME_11EN, H_CALL, 0x61D940, 3,
        0x490386, GAME_STEAM, H_CALL, 0x49036D, 1,
        0x4A42D2, GAME_STEAM, H_CALL, 0x4A42D0, 1,
        0x4A5B4E, GAME_STEAM, H_CALL, 0x4A5B30, 1,
        0x4A656F, GAME_STEAM, H_CALL, 0x4A64A0, 1,
        0x4AAF70, GAME_STEAM, H_CALL, 0x4AAF70, 1,
        0x5444FC, GAME_STEAM, H_CALL, 0x5444EF, 1,
        0x5FFC39, GAME_STEAM, H_CALL, 0x5FF710, 1,
        0x5FFDEF, GAME_STEAM, H_CALL, 0x5FF710, 2,
        0x61D634, GAME_STEAM, H_CALL, 0x61D5A0, 1,
        0x61D7F6, GAME_STEAM, H_CALL, 0x61D5A0, 2,
        0x61D987, GAME_STEAM, H_CALL, 0x61D5A0, 3>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPad::AddToPCCheatString)
    static int address;
    static int global_address;
    static const int id = 0x4ABD20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4ABD20, 0x4ABD40, 0x4ABBF0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x602BE7, GAME_10EN, H_CALL, 0x602930, 1,
        0x602BC7, GAME_11EN, H_CALL, 0x602910, 1,
        0x602807, GAME_STEAM, H_CALL, 0x602550, 1>;
    using def_t = void(CPad *, char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *,char>, 0,1>;
META_END

META_BEGIN(CPad::StartShake)
    static int address;
    static int global_address;
    static const int id = 0x4AD2E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AD2E0, 0x4AD300, 0x4AD1B0>;
    // total references count: 10en (10), 11en (10), steam (10)
    using refs_t = RefList<
        0x440CBE, GAME_10EN, H_CALL, 0x440030, 1,
        0x523EE6, GAME_10EN, H_CALL, 0x523CD0, 1,
        0x52B7E7, GAME_10EN, H_CALL, 0x52B070, 1,
        0x57D7DA, GAME_10EN, H_CALL, 0x57D580, 1,
        0x587463, GAME_10EN, H_CALL, 0x5870D0, 1,
        0x58766E, GAME_10EN, H_CALL, 0x5870D0, 2,
        0x5990DF, GAME_10EN, H_CALL, 0x593030, 1,
        0x59B93E, GAME_10EN, H_CALL, 0x59B550, 1,
        0x5CC433, GAME_10EN, H_CALL, 0x5CBFF0, 1,
        0x6129C3, GAME_10EN, H_CALL, 0x60E3E0, 1,
        0x440CBE, GAME_11EN, H_CALL, 0x440030, 1,
        0x523F06, GAME_11EN, H_CALL, 0x523CF0, 1,
        0x52B807, GAME_11EN, H_CALL, 0x52B090, 1,
        0x57D7FA, GAME_11EN, H_CALL, 0x57D5A0, 1,
        0x587483, GAME_11EN, H_CALL, 0x5870F0, 1,
        0x58768E, GAME_11EN, H_CALL, 0x5870F0, 2,
        0x5990FF, GAME_11EN, H_CALL, 0x593050, 1,
        0x59B95E, GAME_11EN, H_CALL, 0x59B570, 1,
        0x5CC453, GAME_11EN, H_CALL, 0x5CC010, 1,
        0x6129A3, GAME_11EN, H_CALL, 0x60E3C0, 1,
        0x440C2E, GAME_STEAM, H_CALL, 0x43FFA0, 1,
        0x523DD6, GAME_STEAM, H_CALL, 0x523BC0, 1,
        0x52B6D7, GAME_STEAM, H_CALL, 0x52AF60, 1,
        0x57D60A, GAME_STEAM, H_CALL, 0x57D3B0, 1,
        0x587293, GAME_STEAM, H_CALL, 0x586F00, 1,
        0x58749E, GAME_STEAM, H_CALL, 0x586F00, 2,
        0x598F0F, GAME_STEAM, H_CALL, 0x592E60, 1,
        0x59B76E, GAME_STEAM, H_CALL, 0x59B380, 1,
        0x5CC263, GAME_STEAM, H_CALL, 0x5CBE20, 1,
        0x6125E3, GAME_STEAM, H_CALL, 0x60E000, 1>;
    using def_t = void(CPad *, short, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *,short,unsigned char>, 0,1,2>;
META_END

META_BEGIN(CPad::SetDrunkInputDelay)
    static int address;
    static int global_address;
    static const int id = 0x4AD340;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AD340, 0x4AD360, 0x4AD210>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x451720, GAME_10EN, H_CALL, 0x451550, 1,
        0x608834, GAME_10EN, H_CALL, 0x6084C0, 1,
        0x451720, GAME_11EN, H_CALL, 0x451550, 1,
        0x608814, GAME_11EN, H_CALL, 0x6084A0, 1,
        0x451630, GAME_STEAM, H_CALL, 0x451460, 1,
        0x608454, GAME_STEAM, H_CALL, 0x6080E0, 1>;
    using def_t = void(CPad *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *,int>, 0,1>;
META_END

META_BEGIN(CPad::ReconcileTwoControllersInput)
    static int address;
    static int global_address;
    static const int id = 0x4AD350;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AD350, 0x4AD370, 0x4AD220>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x4AB17F, GAME_10EN, H_CALL, 0x4AB0C0, 1,
        0x4AB239, GAME_10EN, H_CALL, 0x4AB0C0, 2,
        0x4AB19F, GAME_11EN, H_CALL, 0x4AB0E0, 1,
        0x4AB259, GAME_11EN, H_CALL, 0x4AB0E0, 2,
        0x4AB04F, GAME_STEAM, H_CALL, 0x4AAF90, 1,
        0x4AB109, GAME_STEAM, H_CALL, 0x4AAF90, 2>;
    using def_t = CControllerState *(CPad *, CControllerState *, CControllerState const &, CControllerState const &);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *,CControllerState *,CControllerState const &,CControllerState const &>, 0,1,2,3>;
META_END

META_BEGIN(CPad::UpdateMouse)
    static int address;
    static int global_address;
    static const int id = 0x4AD820;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AD820, 0x4AD840, 0x4AD6F0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4AB6CA, GAME_10EN, H_CALL, 0x4AB6C0, 1,
        0x4AB6EA, GAME_11EN, H_CALL, 0x4AB6E0, 1,
        0x4AB59A, GAME_STEAM, H_CALL, 0x4AB590, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPad::ClearMouseHistory)
    static int address;
    static int global_address;
    static const int id = 0x4ADB30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4ADB30, 0x4ADB50, 0x4ADA00>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x47BEE1, GAME_10EN, H_CALL, 0x47BE8F, 1,
        0x47BEE1, GAME_11EN, H_CALL, 0x47BE8F, 1,
        0x47BDC1, GAME_STEAM, H_CALL, 0x47BD6F, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPad::InputHowLongAgo)
    static int address;
    static int global_address;
    static const int id = 0x4ADBD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4ADBD0, 0x4ADBF0, 0x4ADAA0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x535D98, GAME_10EN, H_CALL, 0x535D10, 1,
        0x535DB8, GAME_11EN, H_CALL, 0x535D30, 1,
        0x535C88, GAME_STEAM, H_CALL, 0x535C00, 1>;
    using def_t = int(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

META_BEGIN(CPad::Clear)
    static int address;
    static int global_address;
    static const int id = 0x4ADBE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4ADBE0, 0x4ADC00, 0x4ADAB0>;
    // total references count: 10en (11), 11en (11), steam (11)
    using refs_t = RefList<
        0x406BFC, GAME_10EN, H_CALL, 0x4069D0, 1,
        0x498FDD, GAME_10EN, H_CALL, 0x498E5F, 1,
        0x498FEE, GAME_10EN, H_CALL, 0x498E5F, 2,
        0x4A49C2, GAME_10EN, H_CALL, 0x4A4850, 1,
        0x4A49D3, GAME_10EN, H_CALL, 0x4A4850, 2,
        0x4A4F95, GAME_10EN, H_CALL, 0x4A4B10, 1,
        0x4A4FA6, GAME_10EN, H_CALL, 0x4A4B10, 2,
        0x4AF0F5, GAME_10EN, H_CALL, 0x4AF0F0, 1,
        0x5D4B51, GAME_10EN, H_CALL, 0x5D45E0, 1,
        0x601552, GAME_10EN, H_CALL, 0x6010B0, 1,
        0x601563, GAME_10EN, H_CALL, 0x6010B0, 2,
        0x406BFC, GAME_11EN, H_CALL, 0x4069D0, 1,
        0x498FED, GAME_11EN, H_CALL, 0x498E6F, 1,
        0x498FFE, GAME_11EN, H_CALL, 0x498E6F, 2,
        0x4A49E2, GAME_11EN, H_CALL, 0x4A4870, 1,
        0x4A49F3, GAME_11EN, H_CALL, 0x4A4870, 2,
        0x4A4FB5, GAME_11EN, H_CALL, 0x4A4B30, 1,
        0x4A4FC6, GAME_11EN, H_CALL, 0x4A4B30, 2,
        0x4AF115, GAME_11EN, H_CALL, 0x4AF110, 1,
        0x5D4B71, GAME_11EN, H_CALL, 0x5D4600, 1,
        0x601582, GAME_11EN, H_CALL, 0x6010E0, 1,
        0x601593, GAME_11EN, H_CALL, 0x6010E0, 2,
        0x406BFC, GAME_STEAM, H_CALL, 0x4069D0, 1,
        0x498EED, GAME_STEAM, H_CALL, 0x498D6F, 1,
        0x498EFE, GAME_STEAM, H_CALL, 0x498D6F, 2,
        0x4A4882, GAME_STEAM, H_CALL, 0x4A4710, 1,
        0x4A4893, GAME_STEAM, H_CALL, 0x4A4710, 2,
        0x4A4E62, GAME_STEAM, H_CALL, 0x4A49D0, 1,
        0x4A4E73, GAME_STEAM, H_CALL, 0x4A49D0, 2,
        0x4AEFC5, GAME_STEAM, H_CALL, 0x4AEFC0, 1,
        0x5D4921, GAME_STEAM, H_CALL, 0x5D43B0, 1,
        0x6011C2, GAME_STEAM, H_CALL, 0x600D20, 1,
        0x6011D3, GAME_STEAM, H_CALL, 0x600D20, 2>;
    using def_t = void(CPad *, char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *,char>, 0,1>;
META_END

DTOR_META_BEGIN(CPad)
    static int address;
    static int global_address;
    static const int id = 0x4AF0E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AF0E0, 0x4AF100, 0x4AEFB0>;
    // total references count: 10en (2), 11en (2), steam (2)
    using refs_t = RefList<
        0x4AEFB8, GAME_10EN, H_CALLBACK, 0, 1,
        0x4AF0C8, GAME_10EN, H_CALLBACK, 0, 1,
        0x4AEFD8, GAME_11EN, H_CALLBACK, 0, 1,
        0x4AF0E8, GAME_11EN, H_CALLBACK, 0, 1,
        0x4AEE88, GAME_STEAM, H_CALLBACK, 0, 1,
        0x4AEF98, GAME_STEAM, H_CALLBACK, 0, 1>;
    using def_t = CPad *(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

CTOR_META_BEGIN(CPad)
    static int address;
    static int global_address;
    static const int id = 0x4AF0F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4AF0F0, 0x4AF110, 0x4AEFC0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4AEFBD, GAME_10EN, H_CALLBACK, 0, 1,
        0x4AEFDD, GAME_11EN, H_CALLBACK, 0, 1,
        0x4AEE8D, GAME_STEAM, H_CALLBACK, 0, 1>;
    using def_t = CPad *(CPad *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CPad *>, 0>;
META_END

template<>
struct stack_object<CPad> : stack_object_no_default<CPad> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CPad *>(ctor_gaddr(CPad), reinterpret_cast<CPad *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CPad *>(dtor_gaddr(CPad), reinterpret_cast<CPad *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CPad *operator_new<CPad>() {
    void *objData = operator new(sizeof(CPad)); 
    CPad *obj = reinterpret_cast<CPad *>(objData);
    plugin::CallMethodDynGlobal<CPad *>(ctor_gaddr(CPad), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CPad *operator_new_array<CPad>(unsigned int objCount) {
    void *objData = operator new(sizeof(CPad) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CPad *objArray = reinterpret_cast<CPad *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CPad *>(ctor_gaddr(CPad), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CPad>(CPad *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CPad *>(dtor_gaddr(CPad), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CPad>(CPad *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CPad *>(dtor_gaddr(CPad), &objArray[i]);
    operator delete(objData);
}

}
