/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(COnscreenTimer::Init)
    static int address;
    static int global_address;
    static const int id = 0x44CBC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44CBC0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x571EF8, GAME_10US_COMPACT, H_CALL, 0x571EE0, 1>;
    using def_t = void(COnscreenTimer *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<COnscreenTimer *>, 0>;
META_END

META_BEGIN(COnscreenTimer::ProcessForDisplay)
    static int address;
    static int global_address;
    static const int id = 0x44CC20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44CC20, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x53E50E, GAME_10US_COMPACT, H_CALL, 0x53E230, 1>;
    using def_t = void(COnscreenTimer *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<COnscreenTimer *>, 0>;
META_END

META_BEGIN(COnscreenTimer::Process)
    static int address;
    static int global_address;
    static const int id = 0x44CD30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44CD30, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5720AF, GAME_10US_COMPACT, H_CALL, 0x5720A0, 1>;
    using def_t = void(COnscreenTimer *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<COnscreenTimer *>, 0>;
META_END

META_BEGIN(COnscreenTimer::AddClock)
    static int address;
    static int global_address;
    static const int id = 0x44CD50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44CD50, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x47C2AC, GAME_10US_COMPACT, H_CALL, 0x47C100, 1,
        0x47C2C3, GAME_10US_COMPACT, H_CALL, 0x47C100, 2,
        0x484CA7, GAME_10US_COMPACT, H_CALL, 0x483BD0, 1>;
    using def_t = void(COnscreenTimer *, unsigned int, char *, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<COnscreenTimer *,unsigned int,char *,bool>, 0,1,2,3>;
META_END

META_BEGIN(COnscreenTimer::AddCounter)
    static int address;
    static int global_address;
    static const int id = 0x44CDA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44CDA0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x484CFC, GAME_10US_COMPACT, H_CALL, 0x483BD0, 1,
        0x48C57D, GAME_10US_COMPACT, H_CALL, 0x48B590, 1>;
    using def_t = void(COnscreenTimer *, int, short, char *, unsigned short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<COnscreenTimer *,int,short,char *,unsigned short>, 0,1,2,3,4>;
META_END

META_BEGIN(COnscreenTimer::AddCounterCounter)
    static int address;
    static int global_address;
    static const int id = 0x44CE00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44CE00, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(COnscreenTimer *, unsigned int, unsigned int, char *, unsigned short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<COnscreenTimer *,unsigned int,unsigned int,char *,unsigned short>, 0,1,2,3,4>;
META_END

META_BEGIN(COnscreenTimer::ClearClock)
    static int address;
    static int global_address;
    static const int id = 0x44CE60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44CE60, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x47C2E2, GAME_10US_COMPACT, H_CALL, 0x47C100, 1>;
    using def_t = int(COnscreenTimer *, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<COnscreenTimer *,unsigned int>, 0,1>;
META_END

META_BEGIN(COnscreenTimer::ClearCounter)
    static int address;
    static int global_address;
    static const int id = 0x44CE80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44CE80, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x47C301, GAME_10US_COMPACT, H_CALL, 0x47C100, 1>;
    using def_t = void(COnscreenTimer *, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<COnscreenTimer *,unsigned int>, 0,1>;
META_END

META_BEGIN(COnscreenTimer::SetCounterFlashWhenFirstDisplayed)
    static int address;
    static int global_address;
    static const int id = 0x44CEB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44CEB0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x48EEB6, GAME_10US_COMPACT, H_CALL, 0x48EAA0, 1,
        0x48EECD, GAME_10US_COMPACT, H_CALL, 0x48EAA0, 2>;
    using def_t = void(COnscreenTimer *, unsigned int, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<COnscreenTimer *,unsigned int,unsigned char>, 0,1,2>;
META_END

META_BEGIN(COnscreenTimer::SetClockBeepCountdownSecs)
    static int address;
    static int global_address;
    static const int id = 0x44CEE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44CEE0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4720AF, GAME_10US_COMPACT, H_CALL, 0x470A90, 1>;
    using def_t = void(COnscreenTimer *, unsigned int, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<COnscreenTimer *,unsigned int,unsigned int>, 0,1,2>;
META_END

META_BEGIN(COnscreenTimer::SetCounterColourID)
    static int address;
    static int global_address;
    static const int id = 0x44CF10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x44CF10, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(COnscreenTimer *, unsigned int, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<COnscreenTimer *,unsigned int,unsigned char>, 0,1,2>;
META_END

}
