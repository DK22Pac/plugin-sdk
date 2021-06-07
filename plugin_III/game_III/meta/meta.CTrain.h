/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN_OVERLOADED(CTrain, void(int, unsigned char))
static int address;
static int global_address;
static const int id = 0x54E2A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54E2A0, 0x54E3E0, 0x54E390>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x54F0F7,100,0,0x54F000,1, 0x54F1D8,100,0,0x54F000,2, 0x59541E,100,0,0x595240,1, 0x54F237,110,0,0x54F140,1, 0x54F318,110,0,0x54F140,2, 0x5956CE,110,0,0x5954F0,1, 0x54F1E7,120,0,0x54F0F0,1, 0x54F2C8,120,0,0x54F0F0,2, 0x5955BE,120,0,0x5953E0,1>;
using def_t = CTrain *(CTrain *, int, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrain *,int,unsigned char>, 0,1,2>;
META_END

DTOR_META_BEGIN(CTrain)
static int address;
static int global_address;
static const int id = 0x54E450;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54E450, 0x54E590, 0x54E540>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x550523,100,0,0x550500,1, 0x550514,100,2,0,1, 0x550663,110,0,0x550640,1, 0x550654,110,2,0,1, 0x550613,120,0,0x5505F0,1, 0x550604,120,2,0,1>;
using def_t = void(CTrain *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrain *>, 0>;
META_END

META_BEGIN(CTrain::SetModelIndex)
static int address;
static int global_address;
static const int id = 0x54E470;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x54E470, 0x54E5B0, 0x54E560>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x602428,100,2,0x60241C,1, 0x601DE4,110,2,0x601DE4,1, 0x60EDDC,120,2,0x60EDDC,1>;
using def_t = void(CTrain *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrain *,unsigned int>, 0,1>;
META_END

META_BEGIN(CTrain::PreRender)
static int address;
static int global_address;
static const int id = 0x54E4C0;
static const bool is_virtual = true;
static const int vtable_index = 12;
using mv_addresses_t = MvAddresses<0x54E4C0, 0x54E600, 0x54E5B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x60244C,100,2,0x60241C,1, 0x601DE4,110,2,0x601DE4,1, 0x60EDDC,120,2,0x60EDDC,1>;
using def_t = void(CTrain *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrain *>, 0>;
META_END

META_BEGIN(CTrain::Render)
static int address;
static int global_address;
static const int id = 0x54EAA0;
static const bool is_virtual = true;
static const int vtable_index = 13;
using mv_addresses_t = MvAddresses<0x54EAA0, 0x54EBE0, 0x54EB90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x602450,100,2,0x60241C,1, 0x601DE4,110,2,0x601DE4,1, 0x60EDDC,120,2,0x60EDDC,1>;
using def_t = void(CTrain *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrain *>, 0>;
META_END

META_BEGIN(CTrain::ReadAndInterpretTrackFile)
static int address;
static int global_address;
static const int id = 0x54EAB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54EAB0, 0x54EBF0, 0x54EBA0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x54F035,100,0,0x54F000,1, 0x54F06D,100,0,0x54F000,2, 0x54F175,110,0,0x54F140,1, 0x54F1AD,110,0,0x54F140,2, 0x54F125,120,0,0x54F0F0,1, 0x54F15D,120,0,0x54F0F0,2>;
using def_t = void(char const *, CTrainNode **, short *, int, float *, float *, float *, CTrainInterpolationLine *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<char const *,CTrainNode **,short *,int,float *,float *,float *,CTrainInterpolationLine *,bool>, 0,1,2,3,4,5,6,7,8>;
META_END

META_BEGIN(CTrain::InitTrains)
static int address;
static int global_address;
static const int id = 0x54F000;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54F000, 0x54F140, 0x54F0F0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x48C302,100,0,0x48BED0,1, 0x48C5ED,100,0,0x48C4B0,1, 0x48C7E5,100,0,0x48C740,1, 0x48C3F2,110,0,0x48BFC0,1, 0x48C6ED,110,0,0x48C5B0,1, 0x48C8E5,110,0,0x48C840,1, 0x48C382,120,0,0x48BF50,1, 0x48C67D,120,0,0x48C540,1, 0x48C875,120,0,0x48C7D0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTrain::Shutdown)
static int address;
static int global_address;
static const int id = 0x54F360;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54F360, 0x54F4A0, 0x54F450>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C3AE,100,0,0x48C3A0,1, 0x48C49E,110,0,0x48C490,1, 0x48C42E,120,0,0x48C420,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTrain::UpdateTrains)
static int address;
static int global_address;
static const int id = 0x54F3A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54F3A0, 0x54F4E0, 0x54F490>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C8FF,100,0,0x48C850,1, 0x48C9FF,110,0,0x48C950,1, 0x48C98F,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CTrain::ProcessControl)
static int address;
static int global_address;
static const int id = 0x54F800;
static const bool is_virtual = true;
static const int vtable_index = 8;
using mv_addresses_t = MvAddresses<0x54F800, 0x54F940, 0x54F8F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x60243C,100,2,0x60241C,1, 0x601DE4,110,2,0x601DE4,1, 0x60EDDC,120,2,0x60EDDC,1>;
using def_t = void(CTrain *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrain *>, 0>;
META_END

META_BEGIN(CTrain::TrainHitStuff)
static int address;
static int global_address;
static const int id = 0x550300;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x550300, 0x550440, 0x5503F0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x5501E3,100,0,0x54F800,1, 0x5501EE,100,0,0x54F800,2, 0x5501F9,100,0,0x54F800,3, 0x550204,100,0,0x54F800,4, 0x550323,110,0,0x54F940,1, 0x55032E,110,0,0x54F940,2, 0x550339,110,0,0x54F940,3, 0x550344,110,0,0x54F940,4, 0x5502D3,120,0,0x54F8F0,1, 0x5502DE,120,0,0x54F8F0,2, 0x5502E9,120,0,0x54F8F0,3, 0x5502F4,120,0,0x54F8F0,4>;
using def_t = void(CTrain *, CPtrList &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrain *,CPtrList &>, 0,1>;
META_END

META_BEGIN(CTrain::OpenTrainDoor)
static int address;
static int global_address;
static const int id = 0x550360;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x550360, 0x5504A0, 0x550450>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x54FE2C,100,0,0x54F800,1, 0x54FE3E,100,0,0x54F800,2, 0x54FEB9,100,0,0x54F800,3, 0x54FEC8,100,0,0x54F800,4, 0x54FF6C,110,0,0x54F940,1, 0x54FF7E,110,0,0x54F940,2, 0x54FFF9,110,0,0x54F940,3, 0x550008,110,0,0x54F940,4, 0x54FF1C,120,0,0x54F8F0,1, 0x54FF2E,120,0,0x54F8F0,2, 0x54FFA9,120,0,0x54F8F0,3, 0x54FFB8,120,0,0x54F8F0,4>;
using def_t = void(CTrain *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrain *,float>, 0,1>;
META_END

META_BEGIN(CTrain::AddPassenger)
static int address;
static int global_address;
static const int id = 0x5504A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5504A0, 0x5505E0, 0x550590>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4E32C8,100,0,0x4E3290,1, 0x4E3378,110,0,0x4E3340,1, 0x4E3308,120,0,0x4E32D0,1>;
using def_t = void(CTrain *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrain *,CPed *>, 0,1>;
META_END

DEL_DTOR_META_BEGIN(CTrain)
static int address;
static int global_address;
static const int id = 0x550500;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x550500, 0x550640, 0x5505F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x60241C,100,2,0x60241C,1, 0x601DE4,110,2,0x601DE4,1, 0x60EDDC,120,2,0x60EDDC,1>;
using def_t = void(CTrain *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CTrain *,char>, 0,1>;
META_END

META_BEGIN(ProcessTrainAnnouncements)
static int address;
static int global_address;
static const int id = 0x54F6D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54F6D0, 0x54F810, 0x54F7C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x54F564,100,0,0x54F3A0,1, 0x54F6A4,110,0,0x54F4E0,1, 0x54F654,120,0,0x54F490,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(PlayAnnouncement)
static int address;
static int global_address;
static const int id = 0x54F7F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x54F7F0, 0x54F930, 0x54F8E0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x54F750,100,0,0x54F6D0,1, 0x54F7BE,100,0,0x54F6D0,2, 0x54F890,110,0,0x54F810,1, 0x54F8FE,110,0,0x54F810,2, 0x54F840,120,0,0x54F7C0,1, 0x54F8AE,120,0,0x54F7C0,2>;
using def_t = void(unsigned char, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char,unsigned char>, 0,1>;
META_END

}
