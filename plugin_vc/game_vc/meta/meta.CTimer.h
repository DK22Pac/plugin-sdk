/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CTimer::EndUserPause)
    static int address;
    static int global_address;
    static const int id = 0x4D0D90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D0D90, 0x4D0DB0, 0x4D0C50>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x498FFA, GAME_10EN, H_CALL, 0x498E5F, 1,
        0x49901B, GAME_11EN, H_CALL, 0x498E6F, 1,
        0x498F1B, GAME_STEAM, H_CALL, 0x498D6F, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::StartUserPause)
    static int address;
    static int global_address;
    static const int id = 0x4D0DA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D0DA0, 0x4D0DC0, 0x4D0C60>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A3DF7, GAME_10EN, H_CALL, 0x4A3BCD, 1,
        0x4A3E18, GAME_11EN, H_CALL, 0x4A3BEE, 1,
        0x4A3CB6, GAME_STEAM, H_CALL, 0x4A3A8C, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::Stop)
    static int address;
    static int global_address;
    static const int id = 0x4D0DB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D0DB0, 0x4D0DD0, 0x4D0C70>;
    // total references count: 10en (12), 11en (12), steam (12)
    using refs_t = RefList<
        0x42BDA8, GAME_10EN, H_CALL, 0x42BB70, 1,
        0x42C193, GAME_10EN, H_CALL, 0x42BB70, 2,
        0x42C395, GAME_10EN, H_CALL, 0x42BB70, 3,
        0x459093, GAME_10EN, H_CALL, 0x458EC0, 1,
        0x45A9F8, GAME_10EN, H_CALL, 0x458EC0, 2,
        0x4A3897, GAME_10EN, H_CALL, 0x4A3882, 1,
        0x4A3A79, GAME_10EN, H_CALL, 0x4A3A13, 1,
        0x4A4767, GAME_10EN, H_CALL, 0x4A4670, 1,
        0x4A6698, GAME_10EN, H_CALL, 0x4A65D0, 1,
        0x4BDD05, GAME_10EN, H_CALL, 0x4BCA90, 1,
        0x600534, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x600582, GAME_10EN, H_CALL, 0x5FFAB0, 2,
        0x42BDA8, GAME_11EN, H_CALL, 0x42BB70, 1,
        0x42C193, GAME_11EN, H_CALL, 0x42BB70, 2,
        0x42C395, GAME_11EN, H_CALL, 0x42BB70, 3,
        0x459093, GAME_11EN, H_CALL, 0x458EC0, 1,
        0x45A9F8, GAME_11EN, H_CALL, 0x458EC0, 2,
        0x4A38B8, GAME_11EN, H_CALL, 0x4A38A3, 1,
        0x4A3A9A, GAME_11EN, H_CALL, 0x4A3A34, 1,
        0x4A4787, GAME_11EN, H_CALL, 0x4A4690, 1,
        0x4A66B8, GAME_11EN, H_CALL, 0x4A65F0, 1,
        0x4BDD25, GAME_11EN, H_CALL, 0x4BCAB0, 1,
        0x600554, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x6005A2, GAME_11EN, H_CALL, 0x5FFAD0, 2,
        0x42BD78, GAME_STEAM, H_CALL, 0x42BB40, 1,
        0x42C163, GAME_STEAM, H_CALL, 0x42BB40, 2,
        0x42C365, GAME_STEAM, H_CALL, 0x42BB40, 3,
        0x458F73, GAME_STEAM, H_CALL, 0x458DA0, 1,
        0x45A8D8, GAME_STEAM, H_CALL, 0x458DA0, 2,
        0x4A3756, GAME_STEAM, H_CALL, 0x4A3741, 1,
        0x4A3938, GAME_STEAM, H_CALL, 0x4A38D2, 1,
        0x4A4623, GAME_STEAM, H_CALL, 0x4A44F0, 1,
        0x4A6568, GAME_STEAM, H_CALL, 0x4A64A0, 1,
        0x4BDBD5, GAME_STEAM, H_CALL, 0x4BC960, 1,
        0x600194, GAME_STEAM, H_CALL, 0x5FF710, 1,
        0x6001E2, GAME_STEAM, H_CALL, 0x5FF710, 2>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::GetIsSlowMotionActive)
    static int address;
    static int global_address;
    static const int id = 0x4D0DC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D0DC0, 0x4D0DE0, 0x4D0C80>;
    // total references count: 10en (5), 11en (5), steam (5)
    using refs_t = RefList<
        0x5F724C, GAME_10EN, H_CALL, 0x5F7220, 1,
        0x5F72A0, GAME_10EN, H_CALL, 0x5F7220, 2,
        0x5F7340, GAME_10EN, H_CALL, 0x5F7220, 3,
        0x5F749C, GAME_10EN, H_CALL, 0x5F7220, 4,
        0x5FAB58, GAME_10EN, H_CALL, 0x5FA6F0, 1,
        0x5F726C, GAME_11EN, H_CALL, 0x5F7240, 1,
        0x5F72C0, GAME_11EN, H_CALL, 0x5F7240, 2,
        0x5F7360, GAME_11EN, H_CALL, 0x5F7240, 3,
        0x5F74BC, GAME_11EN, H_CALL, 0x5F7240, 4,
        0x5FAB78, GAME_11EN, H_CALL, 0x5FA710, 1,
        0x5F6EAC, GAME_STEAM, H_CALL, 0x5F6E80, 1,
        0x5F6F00, GAME_STEAM, H_CALL, 0x5F6E80, 2,
        0x5F6FA0, GAME_STEAM, H_CALL, 0x5F6E80, 3,
        0x5F70FC, GAME_STEAM, H_CALL, 0x5F6E80, 4,
        0x5FA7B8, GAME_STEAM, H_CALL, 0x5FA350, 1>;
    using def_t = bool();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::GetCurrentTimeInCycles)
    static int address;
    static int global_address;
    static const int id = 0x4D0DF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D0DF0, 0x4D0E10, 0x4D0CB0>;
    // total references count: 10en (15), 11en (15), steam (15)
    using refs_t = RefList<
        0x40C205, GAME_10EN, H_CALL, 0x40C1E0, 1,
        0x40C69A, GAME_10EN, H_CALL, 0x40C1E0, 2,
        0x40C796, GAME_10EN, H_CALL, 0x40C770, 1,
        0x40C8EC, GAME_10EN, H_CALL, 0x40C770, 2,
        0x4A4491, GAME_10EN, H_CALL, 0x4A4410, 1,
        0x4A44A8, GAME_10EN, H_CALL, 0x4A4410, 2,
        0x4A455D, GAME_10EN, H_CALL, 0x4A4410, 3,
        0x4A4577, GAME_10EN, H_CALL, 0x4A4410, 4,
        0x600449, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x61E3AD, GAME_10EN, H_CALL, 0x61E340, 1,
        0x61E419, GAME_10EN, H_CALL, 0x61E340, 2,
        0x61E5B4, GAME_10EN, H_CALL, 0x61E4E0, 1,
        0x61E626, GAME_10EN, H_CALL, 0x61E4E0, 2,
        0x61E7BD, GAME_10EN, H_CALL, 0x61E710, 1,
        0x61E829, GAME_10EN, H_CALL, 0x61E710, 2,
        0x40C205, GAME_11EN, H_CALL, 0x40C1E0, 1,
        0x40C69A, GAME_11EN, H_CALL, 0x40C1E0, 2,
        0x40C796, GAME_11EN, H_CALL, 0x40C770, 1,
        0x40C8EC, GAME_11EN, H_CALL, 0x40C770, 2,
        0x4A44B1, GAME_11EN, H_CALL, 0x4A4430, 1,
        0x4A44C8, GAME_11EN, H_CALL, 0x4A4430, 2,
        0x4A457D, GAME_11EN, H_CALL, 0x4A4430, 3,
        0x4A4597, GAME_11EN, H_CALL, 0x4A4430, 4,
        0x600469, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x61E38D, GAME_11EN, H_CALL, 0x61E320, 1,
        0x61E3F9, GAME_11EN, H_CALL, 0x61E320, 2,
        0x61E594, GAME_11EN, H_CALL, 0x61E4C0, 1,
        0x61E606, GAME_11EN, H_CALL, 0x61E4C0, 2,
        0x61E79D, GAME_11EN, H_CALL, 0x61E6F0, 1,
        0x61E809, GAME_11EN, H_CALL, 0x61E6F0, 2,
        0x40C205, GAME_STEAM, H_CALL, 0x40C1E0, 1,
        0x40C69A, GAME_STEAM, H_CALL, 0x40C1E0, 2,
        0x40C796, GAME_STEAM, H_CALL, 0x40C770, 1,
        0x40C8EC, GAME_STEAM, H_CALL, 0x40C770, 2,
        0x4A4304, GAME_STEAM, H_CALL, 0x4A42D0, 1,
        0x4A431B, GAME_STEAM, H_CALL, 0x4A42D0, 2,
        0x4A43D0, GAME_STEAM, H_CALL, 0x4A42D0, 3,
        0x4A43EA, GAME_STEAM, H_CALL, 0x4A42D0, 4,
        0x6000A9, GAME_STEAM, H_CALL, 0x5FF710, 1,
        0x61DFED, GAME_STEAM, H_CALL, 0x61DF80, 1,
        0x61E059, GAME_STEAM, H_CALL, 0x61DF80, 2,
        0x61E1F4, GAME_STEAM, H_CALL, 0x61E120, 1,
        0x61E266, GAME_STEAM, H_CALL, 0x61E120, 2,
        0x61E3FD, GAME_STEAM, H_CALL, 0x61E350, 1,
        0x61E469, GAME_STEAM, H_CALL, 0x61E350, 2>;
    using def_t = unsigned int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::GetCyclesPerMillisecond)
    static int address;
    static int global_address;
    static const int id = 0x4D0E30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D0E30, 0x4D0E50, 0x4D0CF0>;
    // total references count: 10en (15), 11en (15), steam (15)
    using refs_t = RefList<
        0x40C1FE, GAME_10EN, H_CALL, 0x40C1E0, 1,
        0x40C693, GAME_10EN, H_CALL, 0x40C1E0, 2,
        0x40C78F, GAME_10EN, H_CALL, 0x40C770, 1,
        0x40C8E5, GAME_10EN, H_CALL, 0x40C770, 2,
        0x4A448A, GAME_10EN, H_CALL, 0x4A4410, 1,
        0x4A44A1, GAME_10EN, H_CALL, 0x4A4410, 2,
        0x4A4556, GAME_10EN, H_CALL, 0x4A4410, 3,
        0x4A4570, GAME_10EN, H_CALL, 0x4A4410, 4,
        0x60042C, GAME_10EN, H_CALL, 0x5FFAB0, 1,
        0x61E390, GAME_10EN, H_CALL, 0x61E340, 1,
        0x61E3FC, GAME_10EN, H_CALL, 0x61E340, 2,
        0x61E597, GAME_10EN, H_CALL, 0x61E4E0, 1,
        0x61E609, GAME_10EN, H_CALL, 0x61E4E0, 2,
        0x61E7A0, GAME_10EN, H_CALL, 0x61E710, 1,
        0x61E80C, GAME_10EN, H_CALL, 0x61E710, 2,
        0x40C1FE, GAME_11EN, H_CALL, 0x40C1E0, 1,
        0x40C693, GAME_11EN, H_CALL, 0x40C1E0, 2,
        0x40C78F, GAME_11EN, H_CALL, 0x40C770, 1,
        0x40C8E5, GAME_11EN, H_CALL, 0x40C770, 2,
        0x4A44AA, GAME_11EN, H_CALL, 0x4A4430, 1,
        0x4A44C1, GAME_11EN, H_CALL, 0x4A4430, 2,
        0x4A4576, GAME_11EN, H_CALL, 0x4A4430, 3,
        0x4A4590, GAME_11EN, H_CALL, 0x4A4430, 4,
        0x60044C, GAME_11EN, H_CALL, 0x5FFAD0, 1,
        0x61E370, GAME_11EN, H_CALL, 0x61E320, 1,
        0x61E3DC, GAME_11EN, H_CALL, 0x61E320, 2,
        0x61E577, GAME_11EN, H_CALL, 0x61E4C0, 1,
        0x61E5E9, GAME_11EN, H_CALL, 0x61E4C0, 2,
        0x61E780, GAME_11EN, H_CALL, 0x61E6F0, 1,
        0x61E7EC, GAME_11EN, H_CALL, 0x61E6F0, 2,
        0x40C1FE, GAME_STEAM, H_CALL, 0x40C1E0, 1,
        0x40C693, GAME_STEAM, H_CALL, 0x40C1E0, 2,
        0x40C78F, GAME_STEAM, H_CALL, 0x40C770, 1,
        0x40C8E5, GAME_STEAM, H_CALL, 0x40C770, 2,
        0x4A42FD, GAME_STEAM, H_CALL, 0x4A42D0, 1,
        0x4A4314, GAME_STEAM, H_CALL, 0x4A42D0, 2,
        0x4A43C9, GAME_STEAM, H_CALL, 0x4A42D0, 3,
        0x4A43E3, GAME_STEAM, H_CALL, 0x4A42D0, 4,
        0x60008C, GAME_STEAM, H_CALL, 0x5FF710, 1,
        0x61DFD0, GAME_STEAM, H_CALL, 0x61DF80, 1,
        0x61E03C, GAME_STEAM, H_CALL, 0x61DF80, 2,
        0x61E1D7, GAME_STEAM, H_CALL, 0x61E120, 1,
        0x61E249, GAME_STEAM, H_CALL, 0x61E120, 2,
        0x61E3E0, GAME_STEAM, H_CALL, 0x61E350, 1,
        0x61E44C, GAME_STEAM, H_CALL, 0x61E350, 2>;
    using def_t = int();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::Resume)
    static int address;
    static int global_address;
    static const int id = 0x4D0E50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D0E50, 0x4D0E70, 0x4D0D10>;
    // total references count: 10en (7), 11en (7), steam (7)
    using refs_t = RefList<
        0x406CE3, GAME_10EN, H_CALL, 0x4069D0, 1,
        0x40704E, GAME_10EN, H_CALL, 0x406D30, 1,
        0x40E242, GAME_10EN, H_CALL, 0x40DFB0, 1,
        0x42B453, GAME_10EN, H_CALL, 0x42AE70, 1,
        0x585498, GAME_10EN, H_CALL, 0x585150, 1,
        0x608CC2, GAME_10EN, H_CALL, 0x6084C0, 1,
        0x62A34E, GAME_10EN, H_CALL, 0x62A230, 1,
        0x406CE3, GAME_11EN, H_CALL, 0x4069D0, 1,
        0x40704E, GAME_11EN, H_CALL, 0x406D30, 1,
        0x40E242, GAME_11EN, H_CALL, 0x40DFB0, 1,
        0x42B453, GAME_11EN, H_CALL, 0x42AE70, 1,
        0x5854B8, GAME_11EN, H_CALL, 0x585170, 1,
        0x608CA2, GAME_11EN, H_CALL, 0x6084A0, 1,
        0x62A39E, GAME_11EN, H_CALL, 0x62A280, 1,
        0x406CE3, GAME_STEAM, H_CALL, 0x4069D0, 1,
        0x40704E, GAME_STEAM, H_CALL, 0x406D30, 1,
        0x40E242, GAME_STEAM, H_CALL, 0x40DFB0, 1,
        0x42B423, GAME_STEAM, H_CALL, 0x42AE40, 1,
        0x5852C8, GAME_STEAM, H_CALL, 0x584F80, 1,
        0x6088E2, GAME_STEAM, H_CALL, 0x6080E0, 1,
        0x62A00E, GAME_STEAM, H_CALL, 0x629EF0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::Suspend)
    static int address;
    static int global_address;
    static const int id = 0x4D0ED0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D0ED0, 0x4D0EF0, 0x4D0D90>;
    // total references count: 10en (7), 11en (7), steam (7)
    using refs_t = RefList<
        0x4069E8, GAME_10EN, H_CALL, 0x4069D0, 1,
        0x406D45, GAME_10EN, H_CALL, 0x406D30, 1,
        0x40DFE4, GAME_10EN, H_CALL, 0x40DFB0, 1,
        0x42B357, GAME_10EN, H_CALL, 0x42AE70, 1,
        0x58528C, GAME_10EN, H_CALL, 0x585150, 1,
        0x608C60, GAME_10EN, H_CALL, 0x6084C0, 1,
        0x62A341, GAME_10EN, H_CALL, 0x62A230, 1,
        0x4069E8, GAME_11EN, H_CALL, 0x4069D0, 1,
        0x406D45, GAME_11EN, H_CALL, 0x406D30, 1,
        0x40DFE4, GAME_11EN, H_CALL, 0x40DFB0, 1,
        0x42B357, GAME_11EN, H_CALL, 0x42AE70, 1,
        0x5852AC, GAME_11EN, H_CALL, 0x585170, 1,
        0x608C40, GAME_11EN, H_CALL, 0x6084A0, 1,
        0x62A391, GAME_11EN, H_CALL, 0x62A280, 1,
        0x4069E8, GAME_STEAM, H_CALL, 0x4069D0, 1,
        0x406D45, GAME_STEAM, H_CALL, 0x406D30, 1,
        0x40DFE4, GAME_STEAM, H_CALL, 0x40DFB0, 1,
        0x42B327, GAME_STEAM, H_CALL, 0x42AE40, 1,
        0x5850BC, GAME_STEAM, H_CALL, 0x584F80, 1,
        0x608880, GAME_STEAM, H_CALL, 0x6080E0, 1,
        0x62A001, GAME_STEAM, H_CALL, 0x629EF0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::Update)
    static int address;
    static int global_address;
    static const int id = 0x4D0F30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D0F30, 0x4D0F50, 0x4D0DF0>;
    // total references count: 10en (14), 11en (14), steam (14)
    using refs_t = RefList<
        0x406503, GAME_10EN, H_CALL, 0x4063B0, 1,
        0x406508, GAME_10EN, H_CALL, 0x4063B0, 2,
        0x42BE05, GAME_10EN, H_CALL, 0x42BB70, 1,
        0x42C1F0, GAME_10EN, H_CALL, 0x42BB70, 2,
        0x42C3F2, GAME_10EN, H_CALL, 0x42BB70, 3,
        0x4590A0, GAME_10EN, H_CALL, 0x458EC0, 1,
        0x45AA32, GAME_10EN, H_CALL, 0x458EC0, 2,
        0x498FFF, GAME_10EN, H_CALL, 0x498E5F, 1,
        0x4A38D2, GAME_10EN, H_CALL, 0x4A3882, 1,
        0x4A3BBD, GAME_10EN, H_CALL, 0x4A3A13, 1,
        0x4A478C, GAME_10EN, H_CALL, 0x4A4670, 1,
        0x4A5C6A, GAME_10EN, H_CALL, 0x4A5C60, 1,
        0x4A5D87, GAME_10EN, H_CALL, 0x4A5D80, 1,
        0x4BDD31, GAME_10EN, H_CALL, 0x4BCA90, 1,
        0x406503, GAME_11EN, H_CALL, 0x4063B0, 1,
        0x406508, GAME_11EN, H_CALL, 0x4063B0, 2,
        0x42BE05, GAME_11EN, H_CALL, 0x42BB70, 1,
        0x42C1F0, GAME_11EN, H_CALL, 0x42BB70, 2,
        0x42C3F2, GAME_11EN, H_CALL, 0x42BB70, 3,
        0x4590A0, GAME_11EN, H_CALL, 0x458EC0, 1,
        0x45AA32, GAME_11EN, H_CALL, 0x458EC0, 2,
        0x499020, GAME_11EN, H_CALL, 0x498E6F, 1,
        0x4A38F3, GAME_11EN, H_CALL, 0x4A38A3, 1,
        0x4A3BDE, GAME_11EN, H_CALL, 0x4A3A34, 1,
        0x4A47AC, GAME_11EN, H_CALL, 0x4A4690, 1,
        0x4A5C8A, GAME_11EN, H_CALL, 0x4A5C80, 1,
        0x4A5DA7, GAME_11EN, H_CALL, 0x4A5DA0, 1,
        0x4BDD51, GAME_11EN, H_CALL, 0x4BCAB0, 1,
        0x406503, GAME_STEAM, H_CALL, 0x4063B0, 1,
        0x406508, GAME_STEAM, H_CALL, 0x4063B0, 2,
        0x42BDD5, GAME_STEAM, H_CALL, 0x42BB40, 1,
        0x42C1C0, GAME_STEAM, H_CALL, 0x42BB40, 2,
        0x42C3C2, GAME_STEAM, H_CALL, 0x42BB40, 3,
        0x458F80, GAME_STEAM, H_CALL, 0x458DA0, 1,
        0x45A912, GAME_STEAM, H_CALL, 0x458DA0, 2,
        0x498F20, GAME_STEAM, H_CALL, 0x498D6F, 1,
        0x4A3791, GAME_STEAM, H_CALL, 0x4A3741, 1,
        0x4A3A7C, GAME_STEAM, H_CALL, 0x4A38D2, 1,
        0x4A4648, GAME_STEAM, H_CALL, 0x4A44F0, 1,
        0x4A5B3A, GAME_STEAM, H_CALL, 0x4A5B30, 1,
        0x4A5C57, GAME_STEAM, H_CALL, 0x4A5C50, 1,
        0x4BDC01, GAME_STEAM, H_CALL, 0x4BC960, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::Shutdown)
    static int address;
    static int global_address;
    static const int id = 0x4D12F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D12F0, 0x4D1310, 0x4D11B0>;
    // total references count: 10en (1), 11en (1), steam (1)
    using refs_t = RefList<
        0x4A480D, GAME_10EN, H_CALL, 0x4A47B0, 1,
        0x4A482D, GAME_11EN, H_CALL, 0x4A47D0, 1,
        0x4A46CD, GAME_STEAM, H_CALL, 0x4A4670, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTimer::Initialise)
    static int address;
    static int global_address;
    static const int id = 0x4D1300;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4D1300, 0x4D1320, 0x4D11C0>;
    // total references count: 10en (4), 11en (4), steam (4)
    using refs_t = RefList<
        0x4A4691, GAME_10EN, H_CALL, 0x4A4670, 1,
        0x4A476C, GAME_10EN, H_CALL, 0x4A4670, 2,
        0x4A4939, GAME_10EN, H_CALL, 0x4A4850, 1,
        0x4A502A, GAME_10EN, H_CALL, 0x4A5020, 1,
        0x4A46B1, GAME_11EN, H_CALL, 0x4A4690, 1,
        0x4A478C, GAME_11EN, H_CALL, 0x4A4690, 2,
        0x4A4959, GAME_11EN, H_CALL, 0x4A4870, 1,
        0x4A504A, GAME_11EN, H_CALL, 0x4A5040, 1,
        0x4A4511, GAME_STEAM, H_CALL, 0x4A44F0, 1,
        0x4A4628, GAME_STEAM, H_CALL, 0x4A44F0, 2,
        0x4A47F9, GAME_STEAM, H_CALL, 0x4A4710, 1,
        0x4A4EFA, GAME_STEAM, H_CALL, 0x4A4EF0, 1>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

}
