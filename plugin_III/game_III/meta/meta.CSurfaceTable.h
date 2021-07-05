/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CSurfaceTable::Initialise)
static int address;
static int global_address;
static const int id = 0x4AB8F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AB8F0, 0x4AB9E0, 0x4AB970>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48BD86,100,0,0x48BD50,1, 0x48BE76,110,0,0x48BE40,1, 0x48BE06,120,0,0x48BDD0,1>;
using def_t = void(char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CSurfaceTable::GetAdhesiveLimit)
static int address;
static int global_address;
static const int id = 0x4ABA30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ABA30, 0x4ABB20, 0x4ABAB0>;
// total references count: 10en (11), 11en (11), steam (11)
using refs_t = RefList<0x49C304,100,0,0x49B620,1, 0x49CDE3,100,0,0x49B620,2, 0x49D26C,100,0,0x49B620,3, 0x49D67C,100,0,0x49B620,4, 0x49EEE6,100,0,0x49E790,1, 0x49F2EE,100,0,0x49E790,2, 0x49F666,100,0,0x49E790,3, 0x533618,100,0,0x531470,1, 0x53377F,100,0,0x531470,2, 0x533AFF,100,0,0x531470,3, 0x533C7A,100,0,0x531470,4, 0x49C3F4,110,0,0x49B710,1, 0x49CED3,110,0,0x49B710,2, 0x49D35C,110,0,0x49B710,3, 0x49D76C,110,0,0x49B710,4, 0x49EFD6,110,0,0x49E880,1, 0x49F3DE,110,0,0x49E880,2, 0x49F756,110,0,0x49E880,3, 0x533858,110,0,0x5316B0,1, 0x5339BF,110,0,0x5316B0,2, 0x533D3F,110,0,0x5316B0,3, 0x533EBA,110,0,0x5316B0,4, 0x49C384,120,0,0x49B6A0,1, 0x49CE63,120,0,0x49B6A0,2, 0x49D2EC,120,0,0x49B6A0,3, 0x49D6FC,120,0,0x49B6A0,4, 0x49EF66,120,0,0x49E810,1, 0x49F36E,120,0,0x49E810,2, 0x49F6E6,120,0,0x49E810,3, 0x5337E8,120,0,0x531640,1, 0x53394F,120,0,0x531640,2, 0x533CCF,120,0,0x531640,3, 0x533E4A,120,0,0x531640,4>;
using def_t = float(CColPoint &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CColPoint &>, 0>;
META_END

META_BEGIN(CSurfaceTable::GetAdhesionGroup)
static int address;
static int global_address;
static const int id = 0x4ABA60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ABA60, 0x4ABB50, 0x4ABAE0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x49A0CB,100,0,0x499BE0,1, 0x49C386,100,0,0x49B620,1, 0x4ABA3A,100,0,0x4ABA30,1, 0x4ABA46,100,0,0x4ABA30,2, 0x49A1BB,110,0,0x499CD0,1, 0x49C476,110,0,0x49B710,1, 0x4ABB2A,110,0,0x4ABB20,1, 0x4ABB36,110,0,0x4ABB20,2, 0x49A14B,120,0,0x499C60,1, 0x49C406,120,0,0x49B6A0,1, 0x4ABABA,120,0,0x4ABAB0,1, 0x4ABAC6,120,0,0x4ABAB0,2>;
using def_t = int(unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char>, 0>;
META_END

META_BEGIN(CSurfaceTable::GetWetMultiplier)
static int address;
static int global_address;
static const int id = 0x4ABAA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ABAA0, 0x4ABB90, 0x4ABB20>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x533641,100,0,0x531470,1, 0x5337AD,100,0,0x531470,2, 0x533B2D,100,0,0x531470,3, 0x533CAD,100,0,0x531470,4, 0x533881,110,0,0x5316B0,1, 0x5339ED,110,0,0x5316B0,2, 0x533D6D,110,0,0x5316B0,3, 0x533EED,110,0,0x5316B0,4, 0x533811,120,0,0x531640,1, 0x53397D,120,0,0x531640,2, 0x533CFD,120,0,0x531640,3, 0x533E7D,120,0,0x531640,4>;
using def_t = float(unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char>, 0>;
META_END

}
