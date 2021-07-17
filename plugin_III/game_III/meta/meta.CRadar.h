/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CRadar::Initialise)
static int address;
static int global_address;
static const int id = 0x4A3EF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A3EF0, 0x4A3FE0, 0x4A3F70>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x48C1DD,100,0,0x48BED0,1, 0x48C4F6,100,0,0x48C4B0,1, 0x4A6F35,100,0,0x4A6F30,1, 0x48C2CD,110,0,0x48BFC0,1, 0x48C5F6,110,0,0x48C5B0,1, 0x4A7025,110,0,0x4A7020,1, 0x48C25D,120,0,0x48BF50,1, 0x48C586,120,0,0x48C540,1, 0x4A6FB5,120,0,0x4A6FB0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRadar::Shutdown)
static int address;
static int global_address;
static const int id = 0x4A3F60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A3F60, 0x4A4050, 0x4A3FE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C455,100,0,0x48C3A0,1, 0x48C545,110,0,0x48C490,1, 0x48C4D5,120,0,0x48C420,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRadar::LoadTextures)
static int address;
static int global_address;
static const int id = 0x4A4030;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A4030, 0x4A4120, 0x4A40B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C1E2,100,0,0x48BED0,1, 0x48C2D2,110,0,0x48BFC0,1, 0x48C262,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRadar::GetNewUniqueBlipIndex)
static int address;
static int global_address;
static const int id = 0x4A4180;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A4180, 0x4A4270, 0x4A4200>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4A5635,100,0,0x4A5590,1, 0x4A56B1,100,0,0x4A5640,1, 0x4A5725,110,0,0x4A5680,1, 0x4A57A1,110,0,0x4A5730,1, 0x4A56B5,120,0,0x4A5610,1, 0x4A5731,120,0,0x4A56C0,1>;
using def_t = int(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CRadar::GetActualBlipArrayIndex)
static int address;
static int global_address;
static const int id = 0x4A41C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A41C0, 0x4A42B0, 0x4A4240>;
// total references count: 10en (23), 11en (23), steam (23)
using refs_t = RefList<0x43F8E7,100,0,0x43ED30,1, 0x43F954,100,0,0x43ED30,2, 0x43F9C1,100,0,0x43ED30,3, 0x43FAEC,100,0,0x43ED30,4, 0x440757,100,0,0x43ED30,5, 0x4407C8,100,0,0x43ED30,6, 0x440839,100,0,0x43ED30,7, 0x4408E3,100,0,0x43ED30,8, 0x4409B1,100,0,0x43ED30,9, 0x4452B4,100,0,0x444B20,1, 0x44532A,100,0,0x444B20,2, 0x4453A0,100,0,0x444B20,3, 0x44544F,100,0,0x444B20,4, 0x445522,100,0,0x444B20,5, 0x44F5AE,100,0,0x44CB80,1, 0x44F641,100,0,0x44CB80,2, 0x44F6D7,100,0,0x44CB80,3, 0x4A5726,100,0,0x4A5720,1, 0x4A5775,100,0,0x4A5770,1, 0x4A57A5,100,0,0x4A57A0,1, 0x4A57E5,100,0,0x4A57E0,1, 0x4A5815,100,0,0x4A5810,1, 0x4A5845,100,0,0x4A5840,1, 0x43F8E7,110,0,0x43ED30,1, 0x43F954,110,0,0x43ED30,2, 0x43F9C1,110,0,0x43ED30,3, 0x43FAEC,110,0,0x43ED30,4, 0x440757,110,0,0x43ED30,5, 0x4407C8,110,0,0x43ED30,6, 0x440839,110,0,0x43ED30,7, 0x4408E3,110,0,0x43ED30,8, 0x4409B1,110,0,0x43ED30,9, 0x4452B4,110,0,0x444B20,1, 0x44532A,110,0,0x444B20,2, 0x4453A0,110,0,0x444B20,3, 0x44544F,110,0,0x444B20,4, 0x445522,110,0,0x444B20,5, 0x44F5AE,110,0,0x44CB80,1, 0x44F641,110,0,0x44CB80,2, 0x44F6D7,110,0,0x44CB80,3, 0x4A5816,110,0,0x4A5810,1, 0x4A5865,110,0,0x4A5860,1, 0x4A5895,110,0,0x4A5890,1, 0x4A58D5,110,0,0x4A58D0,1, 0x4A5905,110,0,0x4A5900,1, 0x4A5935,110,0,0x4A5930,1, 0x43F8E7,120,0,0x43ED30,1, 0x43F954,120,0,0x43ED30,2, 0x43F9C1,120,0,0x43ED30,3, 0x43FAEC,120,0,0x43ED30,4, 0x440757,120,0,0x43ED30,5, 0x4407C8,120,0,0x43ED30,6, 0x440839,120,0,0x43ED30,7, 0x4408E3,120,0,0x43ED30,8, 0x4409B1,120,0,0x43ED30,9, 0x4452B4,120,0,0x444B20,1, 0x44532A,120,0,0x444B20,2, 0x4453A0,120,0,0x444B20,3, 0x44544F,120,0,0x444B20,4, 0x445522,120,0,0x444B20,5, 0x44F5AE,120,0,0x44CB80,1, 0x44F641,120,0,0x44CB80,2, 0x44F6D7,120,0,0x44CB80,3, 0x4A57A6,120,0,0x4A57A0,1, 0x4A57F5,120,0,0x4A57F0,1, 0x4A5825,120,0,0x4A5820,1, 0x4A5865,120,0,0x4A5860,1, 0x4A5895,120,0,0x4A5890,1, 0x4A58C5,120,0,0x4A58C0,1>;
using def_t = int(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CRadar::DrawMap)
static int address;
static int global_address;
static const int id = 0x4A4200;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A4200, 0x4A42F0, 0x4A4280>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50838D,100,0,0x5052A0,1, 0x50846D,110,0,0x505380,1, 0x5083FD,120,0,0x505310,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRadar::DrawBlips)
static int address;
static int global_address;
static const int id = 0x4A42F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A42F0, 0x4A43E0, 0x4A4370>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x508499,100,0,0x5052A0,1, 0x508579,110,0,0x505380,1, 0x508509,120,0,0x505310,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRadar::Draw3dMarkers)
static int address;
static int global_address;
static const int id = 0x4A4C70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A4C70, 0x4A4D60, 0x4A4CF0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5084C4,100,0,0x5052A0,1, 0x5085A4,110,0,0x505380,1, 0x508534,120,0,0x505310,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRadar::LimitRadarPoint)
static int address;
static int global_address;
static const int id = 0x4A4F30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A4F30, 0x4A5020, 0x4A4FB0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x4A4438,100,0,0x4A42F0,1, 0x4A4592,100,0,0x4A42F0,2, 0x4A4763,100,0,0x4A42F0,3, 0x4A49A5,100,0,0x4A42F0,4, 0x4A4B6F,100,0,0x4A42F0,5, 0x4A4528,110,0,0x4A43E0,1, 0x4A4682,110,0,0x4A43E0,2, 0x4A4853,110,0,0x4A43E0,3, 0x4A4A95,110,0,0x4A43E0,4, 0x4A4C5F,110,0,0x4A43E0,5, 0x4A44B8,120,0,0x4A4370,1, 0x4A4612,120,0,0x4A4370,2, 0x4A47E3,120,0,0x4A4370,3, 0x4A4A25,120,0,0x4A4370,4, 0x4A4BEF,120,0,0x4A4370,5>;
using def_t = float(CVector2D &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector2D &>, 0>;
META_END

META_BEGIN(CRadar::CalculateBlipAlpha)
static int address;
static int global_address;
static const int id = 0x4A4F90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A4F90, 0x4A5080, 0x4A5010>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4A45A0,100,0,0x4A42F0,1, 0x4A4771,100,0,0x4A42F0,2, 0x4A49B3,100,0,0x4A42F0,3, 0x4A4B7D,100,0,0x4A42F0,4, 0x4A4690,110,0,0x4A43E0,1, 0x4A4861,110,0,0x4A43E0,2, 0x4A4AA3,110,0,0x4A43E0,3, 0x4A4C6D,110,0,0x4A43E0,4, 0x4A4620,120,0,0x4A4370,1, 0x4A47F1,120,0,0x4A4370,2, 0x4A4A33,120,0,0x4A4370,3, 0x4A4BFD,120,0,0x4A4370,4>;
using def_t = unsigned char(float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float>, 0>;
META_END

META_BEGIN(CRadar::TransformRadarPointToScreenSpace)
static int address;
static int global_address;
static const int id = 0x4A5040;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A5040, 0x4A5130, 0x4A50C0>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x4A436D,100,0,0x4A42F0,1, 0x4A444A,100,0,0x4A42F0,2, 0x4A45B4,100,0,0x4A42F0,3, 0x4A4785,100,0,0x4A42F0,4, 0x4A49C7,100,0,0x4A42F0,5, 0x4A4B91,100,0,0x4A42F0,6, 0x4A6928,100,0,0x4A67E0,1, 0x4A6A8F,100,0,0x4A69C0,1, 0x4A6B12,100,0,0x4A69C0,2, 0x4A445D,110,0,0x4A43E0,1, 0x4A453A,110,0,0x4A43E0,2, 0x4A46A4,110,0,0x4A43E0,3, 0x4A4875,110,0,0x4A43E0,4, 0x4A4AB7,110,0,0x4A43E0,5, 0x4A4C81,110,0,0x4A43E0,6, 0x4A6A18,110,0,0x4A68D0,1, 0x4A6B7F,110,0,0x4A6AB0,1, 0x4A6C02,110,0,0x4A6AB0,2, 0x4A43ED,120,0,0x4A4370,1, 0x4A44CA,120,0,0x4A4370,2, 0x4A4634,120,0,0x4A4370,3, 0x4A4805,120,0,0x4A4370,4, 0x4A4A47,120,0,0x4A4370,5, 0x4A4C11,120,0,0x4A4370,6, 0x4A69A8,120,0,0x4A6860,1, 0x4A6B0F,120,0,0x4A6A40,1, 0x4A6B92,120,0,0x4A6A40,2>;
using def_t = void(CVector2D &, CVector2D const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector2D &,CVector2D const &>, 0,1>;
META_END

META_BEGIN(CRadar::TransformRealWorldPointToRadarSpace)
static int address;
static int global_address;
static const int id = 0x4A50D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A50D0, 0x4A51C0, 0x4A5150>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x4A442C,100,0,0x4A42F0,1, 0x4A4586,100,0,0x4A42F0,2, 0x4A4757,100,0,0x4A42F0,3, 0x4A4999,100,0,0x4A42F0,4, 0x4A4B63,100,0,0x4A42F0,5, 0x4A68A2,100,0,0x4A67E0,1, 0x4A451C,110,0,0x4A43E0,1, 0x4A4676,110,0,0x4A43E0,2, 0x4A4847,110,0,0x4A43E0,3, 0x4A4A89,110,0,0x4A43E0,4, 0x4A4C53,110,0,0x4A43E0,5, 0x4A6992,110,0,0x4A68D0,1, 0x4A44AC,120,0,0x4A4370,1, 0x4A4606,120,0,0x4A4370,2, 0x4A47D7,120,0,0x4A4370,3, 0x4A4A19,120,0,0x4A4370,4, 0x4A4BE3,120,0,0x4A4370,5, 0x4A6922,120,0,0x4A6860,1>;
using def_t = void(CVector2D &, CVector2D const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector2D &,CVector2D const &>, 0,1>;
META_END

META_BEGIN(CRadar::TransformRadarPointToRealWorldSpace)
static int address;
static int global_address;
static const int id = 0x4A5300;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A5300, 0x4A53F0, 0x4A5380>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A6902,100,0,0x4A67E0,1, 0x4A69F2,110,0,0x4A68D0,1, 0x4A6982,120,0,0x4A6860,1>;
using def_t = void(CVector2D &, CVector2D const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector2D &,CVector2D const &>, 0,1>;
META_END

META_BEGIN(CRadar::TransformRealWorldToTexCoordSpace)
static int address;
static int global_address;
static const int id = 0x4A5530;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A5530, 0x4A5620, 0x4A55B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A691E,100,0,0x4A67E0,1, 0x4A6A0E,110,0,0x4A68D0,1, 0x4A699E,120,0,0x4A6860,1>;
using def_t = void(CVector2D &, CVector2D const &, int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector2D &,CVector2D const &,int,int>, 0,1,2,3>;
META_END

META_BEGIN(CRadar::SetCoordBlip)
static int address;
static int global_address;
static const int id = 0x4A5590;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A5590, 0x4A5680, 0x4A5610>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x43FB31,100,0,0x43ED30,1, 0x440919,100,0,0x43ED30,2, 0x4409E7,100,0,0x43ED30,3, 0x445485,100,0,0x444B20,1, 0x445558,100,0,0x444B20,2, 0x43FB31,110,0,0x43ED30,1, 0x440919,110,0,0x43ED30,2, 0x4409E7,110,0,0x43ED30,3, 0x445485,110,0,0x444B20,1, 0x445558,110,0,0x444B20,2, 0x43FB31,120,0,0x43ED30,1, 0x440919,120,0,0x43ED30,2, 0x4409E7,120,0,0x43ED30,3, 0x445485,120,0,0x444B20,1, 0x445558,120,0,0x444B20,2>;
using def_t = int(eBlipType, CVector, unsigned int, eBlipDisplay);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<eBlipType,CVector,unsigned int,eBlipDisplay>, 0,1,2,3>;
META_END

META_BEGIN(CRadar::SetEntityBlip)
static int address;
static int global_address;
static const int id = 0x4A5640;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A5640, 0x4A5730, 0x4A56C0>;
// total references count: 10en (12), 11en (12), steam (12)
using refs_t = RefList<0x43F902,100,0,0x43ED30,1, 0x43F96F,100,0,0x43ED30,2, 0x43F9DC,100,0,0x43ED30,3, 0x440769,100,0,0x43ED30,4, 0x4407DA,100,0,0x43ED30,5, 0x44084B,100,0,0x43ED30,6, 0x4452C6,100,0,0x444B20,1, 0x44533C,100,0,0x444B20,2, 0x4453B2,100,0,0x444B20,3, 0x44F5D1,100,0,0x44CB80,1, 0x44F65A,100,0,0x44CB80,2, 0x44F6F0,100,0,0x44CB80,3, 0x43F902,110,0,0x43ED30,1, 0x43F96F,110,0,0x43ED30,2, 0x43F9DC,110,0,0x43ED30,3, 0x440769,110,0,0x43ED30,4, 0x4407DA,110,0,0x43ED30,5, 0x44084B,110,0,0x43ED30,6, 0x4452C6,110,0,0x444B20,1, 0x44533C,110,0,0x444B20,2, 0x4453B2,110,0,0x444B20,3, 0x44F5D1,110,0,0x44CB80,1, 0x44F65A,110,0,0x44CB80,2, 0x44F6F0,110,0,0x44CB80,3, 0x43F902,120,0,0x43ED30,1, 0x43F96F,120,0,0x43ED30,2, 0x43F9DC,120,0,0x43ED30,3, 0x440769,120,0,0x43ED30,4, 0x4407DA,120,0,0x43ED30,5, 0x44084B,120,0,0x43ED30,6, 0x4452C6,120,0,0x444B20,1, 0x44533C,120,0,0x444B20,2, 0x4453B2,120,0,0x444B20,3, 0x44F5D1,120,0,0x44CB80,1, 0x44F65A,120,0,0x44CB80,2, 0x44F6F0,120,0,0x44CB80,3>;
using def_t = void(eBlipType, int, unsigned int, eBlipDisplay);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<eBlipType,int,unsigned int,eBlipDisplay>, 0,1,2,3>;
META_END

META_BEGIN(CRadar::ClearBlipForEntity)
static int address;
static int global_address;
static const int id = 0x4A56C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A56C0, 0x4A57B0, 0x4A5740>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4BAE18,100,0,0x4BAE00,1, 0x4C50F0,100,0,0x4C50D0,1, 0x55107C,100,0,0x551040,1, 0x4BAF08,110,0,0x4BAEF0,1, 0x4C5190,110,0,0x4C5170,1, 0x5511BC,110,0,0x551180,1, 0x4BAE98,120,0,0x4BAE80,1, 0x4C5120,120,0,0x4C5100,1, 0x55116C,120,0,0x551130,1>;
using def_t = void(eBlipType, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<eBlipType,int>, 0,1>;
META_END

META_BEGIN(CRadar::ClearBlip)
static int address;
static int global_address;
static const int id = 0x4A5720;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A5720, 0x4A5810, 0x4A57A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43FA17,100,0,0x43ED30,1, 0x43FA17,110,0,0x43ED30,1, 0x43FA17,120,0,0x43ED30,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CRadar::ChangeBlipColour)
static int address;
static int global_address;
static const int id = 0x4A5770;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A5770, 0x4A5860, 0x4A57F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43FA45,100,0,0x43ED30,1, 0x43FA45,110,0,0x43ED30,1, 0x43FA45,120,0,0x43ED30,1>;
using def_t = void(int, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,unsigned int>, 0,1>;
META_END

META_BEGIN(CRadar::ChangeBlipBrightness)
static int address;
static int global_address;
static const int id = 0x4A57A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A57A0, 0x4A5890, 0x4A5820>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43FA74,100,0,0x43ED30,1, 0x43FA74,110,0,0x43ED30,1, 0x43FA74,120,0,0x43ED30,1>;
using def_t = void(int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CRadar::ChangeBlipScale)
static int address;
static int global_address;
static const int id = 0x4A57E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A57E0, 0x4A58D0, 0x4A5860>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x43FB73,100,0,0x43ED30,1, 0x440776,100,0,0x43ED30,2, 0x4407E7,100,0,0x43ED30,3, 0x440858,100,0,0x43ED30,4, 0x440926,100,0,0x43ED30,5, 0x4409F4,100,0,0x43ED30,6, 0x44F667,100,0,0x44CB80,1, 0x43FB73,110,0,0x43ED30,1, 0x440776,110,0,0x43ED30,2, 0x4407E7,110,0,0x43ED30,3, 0x440858,110,0,0x43ED30,4, 0x440926,110,0,0x43ED30,5, 0x4409F4,110,0,0x43ED30,6, 0x44F667,110,0,0x44CB80,1, 0x43FB73,120,0,0x43ED30,1, 0x440776,120,0,0x43ED30,2, 0x4407E7,120,0,0x43ED30,3, 0x440858,120,0,0x43ED30,4, 0x440926,120,0,0x43ED30,5, 0x4409F4,120,0,0x43ED30,6, 0x44F667,120,0,0x44CB80,1>;
using def_t = void(int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CRadar::ChangeBlipDisplay)
static int address;
static int global_address;
static const int id = 0x4A5810;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A5810, 0x4A5900, 0x4A5890>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x440A36,100,0,0x43ED30,1, 0x440A36,110,0,0x43ED30,1, 0x440A36,120,0,0x43ED30,1>;
using def_t = void(int, eBlipDisplay);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,eBlipDisplay>, 0,1>;
META_END

META_BEGIN(CRadar::SetBlipSprite)
static int address;
static int global_address;
static const int id = 0x4A5840;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A5840, 0x4A5930, 0x4A58C0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x4452D7,100,0,0x444B20,1, 0x44534D,100,0,0x444B20,2, 0x4453C3,100,0,0x444B20,3, 0x445496,100,0,0x444B20,4, 0x445569,100,0,0x444B20,5, 0x44F701,100,0,0x44CB80,1, 0x4452D7,110,0,0x444B20,1, 0x44534D,110,0,0x444B20,2, 0x4453C3,110,0,0x444B20,3, 0x445496,110,0,0x444B20,4, 0x445569,110,0,0x444B20,5, 0x44F701,110,0,0x44CB80,1, 0x4452D7,120,0,0x444B20,1, 0x44534D,120,0,0x444B20,2, 0x4453C3,120,0,0x444B20,3, 0x445496,120,0,0x444B20,4, 0x445569,120,0,0x444B20,5, 0x44F701,120,0,0x44CB80,1>;
using def_t = void(int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CRadar::ShowRadarTrace)
static int address;
static int global_address;
static const int id = 0x4A5870;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A5870, 0x4A5960, 0x4A58F0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4A45FC,100,0,0x4A42F0,1, 0x4A47CD,100,0,0x4A42F0,2, 0x4A4A0F,100,0,0x4A42F0,3, 0x4A4BD9,100,0,0x4A42F0,4, 0x4A46EC,110,0,0x4A43E0,1, 0x4A48BD,110,0,0x4A43E0,2, 0x4A4AFF,110,0,0x4A43E0,3, 0x4A4CC9,110,0,0x4A43E0,4, 0x4A467C,120,0,0x4A4370,1, 0x4A484D,120,0,0x4A4370,2, 0x4A4A8F,120,0,0x4A4370,3, 0x4A4C59,120,0,0x4A4370,4>;
using def_t = void(float, float, unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,unsigned int,unsigned char,unsigned char,unsigned char,unsigned char>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CRadar::ShowRadarMarker)
static int address;
static int global_address;
static const int id = 0x4A59C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A59C0, 0x4A5AB0, 0x4A5A40>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4A4528,100,0,0x4A42F0,1, 0x4A46E6,100,0,0x4A42F0,2, 0x4A4925,100,0,0x4A42F0,3, 0x4A4B05,100,0,0x4A42F0,4, 0x4A4618,110,0,0x4A43E0,1, 0x4A47D6,110,0,0x4A43E0,2, 0x4A4A15,110,0,0x4A43E0,3, 0x4A4BF5,110,0,0x4A43E0,4, 0x4A45A8,120,0,0x4A4370,1, 0x4A4766,120,0,0x4A4370,2, 0x4A49A5,120,0,0x4A4370,3, 0x4A4B85,120,0,0x4A4370,4>;
using def_t = void(CVector, unsigned int, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,unsigned int,float>, 0,1,2>;
META_END

META_BEGIN(CRadar::GetRadarTraceColour)
static int address;
static int global_address;
static const int id = 0x4A5BB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A5BB0, 0x4A5CA0, 0x4A5C30>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4A44EA,100,0,0x4A42F0,1, 0x4A46AF,100,0,0x4A42F0,2, 0x4A48EE,100,0,0x4A42F0,3, 0x4A4AC7,100,0,0x4A42F0,4, 0x4A45DA,110,0,0x4A43E0,1, 0x4A479F,110,0,0x4A43E0,2, 0x4A49DE,110,0,0x4A43E0,3, 0x4A4BB7,110,0,0x4A43E0,4, 0x4A456A,120,0,0x4A4370,1, 0x4A472F,120,0,0x4A4370,2, 0x4A496E,120,0,0x4A4370,3, 0x4A4B47,120,0,0x4A4370,4>;
using def_t = unsigned int(unsigned int, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,bool>, 0,1>;
META_END

META_BEGIN(CRadar::SetRadarMarkerState)
static int address;
static int global_address;
static const int id = 0x4A5C60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A5C60, 0x4A5D50, 0x4A5CE0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4A3F02,100,0,0x4A3EF0,1, 0x4A56E3,100,0,0x4A56C0,1, 0x4A5738,100,0,0x4A5720,1, 0x4A3FF2,110,0,0x4A3FE0,1, 0x4A57D3,110,0,0x4A57B0,1, 0x4A5828,110,0,0x4A5810,1, 0x4A3F82,120,0,0x4A3F70,1, 0x4A5763,120,0,0x4A5740,1, 0x4A57B8,120,0,0x4A57A0,1>;
using def_t = void(int, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,unsigned char>, 0,1>;
META_END

META_BEGIN(CRadar::DrawRotatingRadarSprite)
static int address;
static int global_address;
static const int id = 0x4A5D10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A5D10, 0x4A5E00, 0x4A5D90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A43F4,100,0,0x4A42F0,1, 0x4A44E4,110,0,0x4A43E0,1, 0x4A4474,120,0,0x4A4370,1>;
using def_t = void(CSprite2d *, float, float, float, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CSprite2d *,float,float,float,unsigned char>, 0,1,2,3,4>;
META_END

META_BEGIN(CRadar::DrawRadarSprite)
static int address;
static int global_address;
static const int id = 0x4A5EF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A5EF0, 0x4A5FE0, 0x4A5F70>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4A4460,100,0,0x4A42F0,1, 0x4A47E4,100,0,0x4A42F0,2, 0x4A4A2D,100,0,0x4A42F0,3, 0x4A4BEF,100,0,0x4A42F0,4, 0x4A4550,110,0,0x4A43E0,1, 0x4A48D4,110,0,0x4A43E0,2, 0x4A4B1D,110,0,0x4A43E0,3, 0x4A4CDF,110,0,0x4A43E0,4, 0x4A44E0,120,0,0x4A4370,1, 0x4A4864,120,0,0x4A4370,2, 0x4A4AAD,120,0,0x4A4370,3, 0x4A4C6F,120,0,0x4A4370,4>;
using def_t = void(unsigned short, float, float, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned short,float,float,unsigned char>, 0,1,2,3>;
META_END

META_BEGIN(CRadar::RemoveRadarSections)
static int address;
static int global_address;
static const int id = 0x4A60E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A60E0, 0x4A61D0, 0x4A6160>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C713,100,0,0x48C6B0,1, 0x4A4028,100,0,0x4A3F60,1, 0x48C813,110,0,0x48C7B0,1, 0x4A4118,110,0,0x4A4050,1, 0x48C7A3,120,0,0x48C740,1, 0x4A40A8,120,0,0x4A3FE0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CRadar::StreamRadarSections, void (*)(int, int))
static int address;
static int global_address;
static const int id = 0x4A6100;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A6100, 0x4A61F0, 0x4A6180>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4A6C07,100,0,0x4A6B60,1, 0x4A6D37,100,0,0x4A6C20,1, 0x4A6CF7,110,0,0x4A6C50,1, 0x4A6E27,110,0,0x4A6D10,1, 0x4A6C87,120,0,0x4A6BE0,1, 0x4A6DB7,120,0,0x4A6CA0,1>;
using def_t = void(int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CRadar::ClipRadarPoly)
static int address;
static int global_address;
static const int id = 0x4A64A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A64A0, 0x4A6590, 0x4A6520>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A68C5,100,0,0x4A67E0,1, 0x4A69B5,110,0,0x4A68D0,1, 0x4A6945,120,0,0x4A6860,1>;
using def_t = int(CVector2D *, CVector2D const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector2D *,CVector2D const *>, 0,1>;
META_END

META_BEGIN(CRadar::DrawRadarSection)
static int address;
static int global_address;
static const int id = 0x4A67E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A67E0, 0x4A68D0, 0x4A6860>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x4A6DB4,100,0,0x4A6C20,1, 0x4A6DC0,100,0,0x4A6C20,2, 0x4A6DCF,100,0,0x4A6C20,3, 0x4A6DDB,100,0,0x4A6C20,4, 0x4A6DE4,100,0,0x4A6C20,5, 0x4A6DF0,100,0,0x4A6C20,6, 0x4A6DFF,100,0,0x4A6C20,7, 0x4A6E0B,100,0,0x4A6C20,8, 0x4A6E16,100,0,0x4A6C20,9, 0x4A6EA4,110,0,0x4A6D10,1, 0x4A6EB0,110,0,0x4A6D10,2, 0x4A6EBF,110,0,0x4A6D10,3, 0x4A6ECB,110,0,0x4A6D10,4, 0x4A6ED4,110,0,0x4A6D10,5, 0x4A6EE0,110,0,0x4A6D10,6, 0x4A6EEF,110,0,0x4A6D10,7, 0x4A6EFB,110,0,0x4A6D10,8, 0x4A6F06,110,0,0x4A6D10,9, 0x4A6E34,120,0,0x4A6CA0,1, 0x4A6E40,120,0,0x4A6CA0,2, 0x4A6E4F,120,0,0x4A6CA0,3, 0x4A6E5B,120,0,0x4A6CA0,4, 0x4A6E64,120,0,0x4A6CA0,5, 0x4A6E70,120,0,0x4A6CA0,6, 0x4A6E7F,120,0,0x4A6CA0,7, 0x4A6E8B,120,0,0x4A6CA0,8, 0x4A6E96,120,0,0x4A6CA0,9>;
using def_t = void(int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CRadar::DrawRadarMask)
static int address;
static int global_address;
static const int id = 0x4A69C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A69C0, 0x4A6AB0, 0x4A6A40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A6C8D,100,0,0x4A6C20,1, 0x4A6D7D,110,0,0x4A6D10,1, 0x4A6D0D,120,0,0x4A6CA0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CRadar::StreamRadarSections, void (*)(CVector const &))
static int address;
static int global_address;
static const int id = 0x4A6B60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A6B60, 0x4A6C50, 0x4A6BE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x40A75A,100,0,0x40A6D0,1, 0x40A75A,110,0,0x40A6D0,1, 0x40A75A,120,0,0x40A6D0,1>;
using def_t = void(CVector const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector const &>, 0>;
META_END

META_BEGIN(CRadar::DrawRadarMap)
static int address;
static int global_address;
static const int id = 0x4A6C20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A6C20, 0x4A6D10, 0x4A6CA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A42D6,100,0,0x4A4200,1, 0x4A43C6,110,0,0x4A42F0,1, 0x4A4356,120,0,0x4A4280,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRadar::SaveAllRadarBlips)
static int address;
static int global_address;
static const int id = 0x4A6E30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A6E30, 0x4A6F20, 0x4A6EB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x590278,100,0,0x58F8D0,1, 0x590568,110,0,0x58FBC0,1, 0x590458,120,0,0x58FAB0,1>;
using def_t = void(unsigned char *, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int *>, 0,1>;
META_END

META_BEGIN(CRadar::LoadAllRadarBlips)
static int address;
static int global_address;
static const int id = 0x4A6F30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A6F30, 0x4A7020, 0x4A6FB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x591366,100,0,0x590A00,1, 0x591626,110,0,0x590CC0,1, 0x591516,120,0,0x590BB0,1>;
using def_t = void(unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned int>, 0,1>;
META_END

CTOR_META_BEGIN(CBlip)
static int address;
static int global_address;
static const int id = 0x4A7260;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A7260, 0x4A7350, 0x4A72E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A7007,100,2,0,1, 0x4A70F7,110,2,0,1, 0x4A7087,120,2,0,1>;
using def_t = CBlip *(CBlip *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBlip *>, 0>;
META_END

META_BEGIN(ClipRadarTileCoords)
static int address;
static int global_address;
static const int id = 0x4A6020;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A6020, 0x4A6110, 0x4A60A0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4A606A,100,0,0x4A6060,1, 0x4A681F,100,0,0x4A67E0,1, 0x4A615A,110,0,0x4A6150,1, 0x4A690F,110,0,0x4A68D0,1, 0x4A60EA,120,0,0x4A60E0,1, 0x4A689F,120,0,0x4A6860,1>;
using def_t = void(int &, int &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int &,int &>, 0,1>;
META_END

META_BEGIN(RequestMapSection)
static int address;
static int global_address;
static const int id = 0x4A6060;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A6060, 0x4A6150, 0x4A60E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A6139,100,0,0x4A6100,1, 0x4A6229,110,0,0x4A61F0,1, 0x4A61B9,120,0,0x4A6180,1>;
using def_t = void(int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(RemoveMapSection)
static int address;
static int global_address;
static const int id = 0x4A60A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A60A0, 0x4A6190, 0x4A6120>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4A60E8,100,0,0x4A60E0,1, 0x4A6130,100,0,0x4A6100,1, 0x4A61D8,110,0,0x4A61D0,1, 0x4A6220,110,0,0x4A61F0,1, 0x4A6168,120,0,0x4A6160,1, 0x4A61B0,120,0,0x4A6180,1>;
using def_t = void(int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(IsPointInsideRadar)
static int address;
static int global_address;
static const int id = 0x4A6160;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A6160, 0x4A6250, 0x4A61E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A64F5,100,0,0x4A64A0,1, 0x4A65E5,110,0,0x4A6590,1, 0x4A6575,120,0,0x4A6520,1>;
using def_t = bool(CVector2D const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector2D const &>, 0>;
META_END

META_BEGIN(GetTextureCorners)
static int address;
static int global_address;
static const int id = 0x4A61C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A61C0, 0x4A62B0, 0x4A6240>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A6807,100,0,0x4A67E0,1, 0x4A68F7,110,0,0x4A68D0,1, 0x4A6887,120,0,0x4A6860,1>;
using def_t = void(int, int, CVector2D *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,int,CVector2D *>, 0,1,2>;
META_END

META_BEGIN(LineRadarBoxCollision)
static int address;
static int global_address;
static const int id = 0x4A6250;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A6250, 0x4A6340, 0x4A62D0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4A657C,100,0,0x4A64A0,1, 0x4A65AC,100,0,0x4A64A0,2, 0x4A65F6,100,0,0x4A64A0,3, 0x4A6615,100,0,0x4A64A0,4, 0x4A666C,110,0,0x4A6590,1, 0x4A669C,110,0,0x4A6590,2, 0x4A66E6,110,0,0x4A6590,3, 0x4A6705,110,0,0x4A6590,4, 0x4A65FC,120,0,0x4A6520,1, 0x4A662C,120,0,0x4A6520,2, 0x4A6676,120,0,0x4A6520,3, 0x4A6695,120,0,0x4A6520,4>;
using def_t = int(CVector2D &, CVector2D const &, CVector2D const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector2D &,CVector2D const &,CVector2D const &>, 0,1,2>;
META_END

template<>
struct stack_object<CBlip> : stack_object_no_default<CBlip> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CBlip *>(ctor_gaddr(CBlip), reinterpret_cast<CBlip *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CBlip *operator_new<CBlip>() {
    void *objData = operator new(sizeof(CBlip)); 
    CBlip *obj = reinterpret_cast<CBlip *>(objData);
    plugin::CallMethodDynGlobal<CBlip *>(ctor_gaddr(CBlip), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CBlip *operator_new_array<CBlip>(unsigned int objCount) {
    void *objData = operator new(sizeof(CBlip) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CBlip *objArray = reinterpret_cast<CBlip *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CBlip *>(ctor_gaddr(CBlip), &objArray[i]);
    return objArray;
}

}
