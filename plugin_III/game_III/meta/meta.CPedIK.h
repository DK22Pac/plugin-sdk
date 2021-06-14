/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedIK::Init)
static int address;
static int global_address;
static const int id = 0x4ED010;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ED010, 0x4ED0C0, 0x4ED050>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C41FF,100,0,0x4C41C0,1, 0x4C429F,110,0,0x4C4260,1, 0x4C422F,120,0,0x4C41F0,1>;
using def_t = void(CPedIK *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIK *,CPed *>, 0,1>;
META_END

META_BEGIN(CPedIK::GetWorldMatrix)
static int address;
static int global_address;
static const int id = 0x4ED060;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ED060, 0x4ED110, 0x4ED0A0>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x44835C,100,0,0x448240,1, 0x448415,100,0,0x448240,2, 0x4E7829,100,0,0x4E7780,1, 0x4EB5DA,100,0,0x4EB5C0,1, 0x4EB685,100,0,0x4EB670,1, 0x4ED660,100,0,0x4ED620,1, 0x4EDA31,100,0,0x4ED9B0,1, 0x4EDB52,100,0,0x4EDB20,1, 0x4EDDD7,100,0,0x4EDDB0,1, 0x44835C,110,0,0x448240,1, 0x448415,110,0,0x448240,2, 0x4E78D9,110,0,0x4E7830,1, 0x4EB68A,110,0,0x4EB670,1, 0x4EB735,110,0,0x4EB720,1, 0x4ED710,110,0,0x4ED6D0,1, 0x4EDAE1,110,0,0x4EDA60,1, 0x4EDC02,110,0,0x4EDBD0,1, 0x4EDE87,110,0,0x4EDE60,1, 0x44835C,120,0,0x448240,1, 0x448415,120,0,0x448240,2, 0x4E7869,120,0,0x4E77C0,1, 0x4EB61A,120,0,0x4EB600,1, 0x4EB6C5,120,0,0x4EB6B0,1, 0x4ED6A0,120,0,0x4ED660,1, 0x4EDA71,120,0,0x4ED9F0,1, 0x4EDB92,120,0,0x4EDB60,1, 0x4EDE17,120,0,0x4EDDF0,1>;
using def_t = RwMatrix *(RwFrame *, RwMatrix *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwFrame *,RwMatrix *>, 0,1>;
META_END

META_BEGIN(CPedIK::GetComponentPosition)
static int address;
static int global_address;
static const int id = 0x4ED0F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ED0F0, 0x4ED1A0, 0x4ED130>;
// total references count: 10en (18), 11en (18), steam (18)
using refs_t = RefList<0x45A119,100,0,0x459FA0,1, 0x45AE93,100,0,0x45AB30,1, 0x460EC9,100,0,0x460E00,1, 0x461BB9,100,0,0x461AF0,1, 0x462510,100,0,0x462420,1, 0x4C2D82,100,0,0x4C2C90,1, 0x4C33B2,100,0,0x4C30A0,1, 0x4C33CA,100,0,0x4C30A0,2, 0x4C35B7,100,0,0x4C30A0,3, 0x4C35CF,100,0,0x4C30A0,4, 0x4C389D,100,0,0x4C30A0,5, 0x4C38B5,100,0,0x4C30A0,6, 0x4C39FD,100,0,0x4C30A0,7, 0x4C3A15,100,0,0x4C30A0,8, 0x4C6700,100,0,0x4C65B0,1, 0x4C6ACA,100,0,0x4C6AA0,1, 0x4DB8A1,100,0,0x4D94E0,1, 0x55D5A6,100,0,0x55D2E0,1, 0x45A119,110,0,0x459FA0,1, 0x45AE93,110,0,0x45AB30,1, 0x461121,110,0,0x460E00,1, 0x461BC9,110,0,0x461B00,1, 0x462520,110,0,0x462430,1, 0x4C2E22,110,0,0x4C2D30,1, 0x4C3452,110,0,0x4C3140,1, 0x4C346A,110,0,0x4C3140,2, 0x4C3657,110,0,0x4C3140,3, 0x4C366F,110,0,0x4C3140,4, 0x4C393D,110,0,0x4C3140,5, 0x4C3955,110,0,0x4C3140,6, 0x4C3A9D,110,0,0x4C3140,7, 0x4C3AB5,110,0,0x4C3140,8, 0x4C67A0,110,0,0x4C6650,1, 0x4C6B6A,110,0,0x4C6B40,1, 0x4DB951,110,0,0x4D9580,1, 0x55D6D6,110,0,0x55D410,1, 0x45A119,120,0,0x459FA0,1, 0x45AE93,120,0,0x45AB30,1, 0x461121,120,0,0x460E00,1, 0x461BC9,120,0,0x461B00,1, 0x462520,120,0,0x462430,1, 0x4C2DB2,120,0,0x4C2CC0,1, 0x4C33E2,120,0,0x4C30D0,1, 0x4C33FA,120,0,0x4C30D0,2, 0x4C35E7,120,0,0x4C30D0,3, 0x4C35FF,120,0,0x4C30D0,4, 0x4C38CD,120,0,0x4C30D0,5, 0x4C38E5,120,0,0x4C30D0,6, 0x4C3A2D,120,0,0x4C30D0,7, 0x4C3A45,120,0,0x4C30D0,8, 0x4C6730,120,0,0x4C65E0,1, 0x4C6AFA,120,0,0x4C6AD0,1, 0x4DB8E1,120,0,0x4D9510,1, 0x55D686,120,0,0x55D3C0,1>;
using def_t = void(CPedIK *, RwV3d &, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIK *,RwV3d &,unsigned int>, 0,1,2>;
META_END

META_BEGIN(CPedIK::ExtractYawAndPitchWorld)
static int address;
static int global_address;
static const int id = 0x4ED140;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ED140, 0x4ED1F0, 0x4ED180>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4ED676,100,0,0x4ED620,1, 0x4EDA47,100,0,0x4ED9B0,1, 0x4EDB89,100,0,0x4EDB20,1, 0x4EE19A,100,0,0x4EDDB0,1, 0x4ED726,110,0,0x4ED6D0,1, 0x4EDAF7,110,0,0x4EDA60,1, 0x4EDC39,110,0,0x4EDBD0,1, 0x4EE24A,110,0,0x4EDE60,1, 0x4ED6B6,120,0,0x4ED660,1, 0x4EDA87,120,0,0x4ED9F0,1, 0x4EDBC9,120,0,0x4EDB60,1, 0x4EE1DA,120,0,0x4EDDF0,1>;
using def_t = void(CPedIK *, RwMatrix *, float *, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIK *,RwMatrix *,float *,float *>, 0,1,2,3>;
META_END

META_BEGIN(CPedIK::ExtractYawAndPitchLocal)
static int address;
static int global_address;
static const int id = 0x4ED2C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ED2C0, 0x4ED370, 0x4ED300>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4ED651,100,0,0x4ED620,1, 0x4ED844,100,0,0x4ED810,1, 0x4ED701,110,0,0x4ED6D0,1, 0x4ED8F4,110,0,0x4ED8C0,1, 0x4ED691,120,0,0x4ED660,1, 0x4ED884,120,0,0x4ED850,1>;
using def_t = void(CPedIK *, RwMatrix *, float *, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIK *,RwMatrix *,float *,float *>, 0,1,2,3>;
META_END

META_BEGIN(CPedIK::MoveLimb)
static int address;
static int global_address;
static const int id = 0x4ED440;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ED440, 0x4ED4F0, 0x4ED480>;
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x4ED70A,100,0,0x4ED620,1, 0x4ED768,100,0,0x4ED620,2, 0x4ED85C,100,0,0x4ED810,1, 0x4ED8E5,100,0,0x4ED810,2, 0x4EDA66,100,0,0x4ED9B0,1, 0x4EDAB3,100,0,0x4ED9B0,2, 0x4EDBF3,100,0,0x4EDB20,1, 0x4EDC3F,100,0,0x4EDB20,2, 0x4EDC5B,100,0,0x4EDB20,3, 0x4EDD89,100,0,0x4EDD70,1, 0x4ED7BA,110,0,0x4ED6D0,1, 0x4ED818,110,0,0x4ED6D0,2, 0x4ED90C,110,0,0x4ED8C0,1, 0x4ED995,110,0,0x4ED8C0,2, 0x4EDB16,110,0,0x4EDA60,1, 0x4EDB63,110,0,0x4EDA60,2, 0x4EDCA3,110,0,0x4EDBD0,1, 0x4EDCEF,110,0,0x4EDBD0,2, 0x4EDD0B,110,0,0x4EDBD0,3, 0x4EDE39,110,0,0x4EDE20,1, 0x4ED74A,120,0,0x4ED660,1, 0x4ED7A8,120,0,0x4ED660,2, 0x4ED89C,120,0,0x4ED850,1, 0x4ED925,120,0,0x4ED850,2, 0x4EDAA6,120,0,0x4ED9F0,1, 0x4EDAF3,120,0,0x4ED9F0,2, 0x4EDC33,120,0,0x4EDB60,1, 0x4EDC7F,120,0,0x4EDB60,2, 0x4EDC9B,120,0,0x4EDB60,3, 0x4EDDC9,120,0,0x4EDDB0,1>;
using def_t = unsigned int(CPedIK *, LimbOrientation &, float, float, LimbMovementInfo &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIK *,LimbOrientation &,float,float,LimbMovementInfo &>, 0,1,2,3,4>;
META_END

META_BEGIN(CPedIK::LookAtPosition)
static int address;
static int global_address;
static const int id = 0x4ED590;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ED590, 0x4ED640, 0x4ED5D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C6729,100,0,0x4C65B0,1, 0x4C67C9,110,0,0x4C6650,1, 0x4C6759,120,0,0x4C65E0,1>;
using def_t = bool(CPedIK *, CVector const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIK *,CVector const &>, 0,1>;
META_END

META_BEGIN(CPedIK::LookInDirection)
static int address;
static int global_address;
static const int id = 0x4ED620;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ED620, 0x4ED6D0, 0x4ED660>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4C68DC,100,0,0x4C65B0,1, 0x4ED611,100,0,0x4ED590,1, 0x4C697C,110,0,0x4C6650,1, 0x4ED6C1,110,0,0x4ED640,1, 0x4C690C,120,0,0x4C65E0,1, 0x4ED651,120,0,0x4ED5D0,1>;
using def_t = bool(CPedIK *, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIK *,float,float>, 0,1,2>;
META_END

META_BEGIN(CPedIK::RestoreLookAt)
static int address;
static int global_address;
static const int id = 0x4ED810;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ED810, 0x4ED8C0, 0x4ED850>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C6939,100,0,0x4C6930,1, 0x4C69D9,110,0,0x4C69D0,1, 0x4C6969,120,0,0x4C6960,1>;
using def_t = bool(CPedIK *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIK *>, 0>;
META_END

META_BEGIN(CPedIK::PointGunAtPosition)
static int address;
static int global_address;
static const int id = 0x4ED920;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ED920, 0x4ED9D0, 0x4ED960>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C6AFC,100,0,0x4C6AA0,1, 0x4C6B9C,110,0,0x4C6B40,1, 0x4C6B2C,120,0,0x4C6AD0,1>;
using def_t = bool(CPedIK *, CVector const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIK *,CVector const &>, 0,1>;
META_END

META_BEGIN(CPedIK::PointGunInDirection)
static int address;
static int global_address;
static const int id = 0x4ED9B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ED9B0, 0x4EDA60, 0x4ED9F0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4C6B4D,100,0,0x4C6AA0,1, 0x4C6B82,100,0,0x4C6AA0,2, 0x4ED9A1,100,0,0x4ED920,1, 0x4C6BED,110,0,0x4C6B40,1, 0x4C6C22,110,0,0x4C6B40,2, 0x4EDA51,110,0,0x4ED9D0,1, 0x4C6B7D,120,0,0x4C6AD0,1, 0x4C6BB2,120,0,0x4C6AD0,2, 0x4ED9E1,120,0,0x4ED960,1>;
using def_t = bool(CPedIK *, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIK *,float,float>, 0,1,2>;
META_END

META_BEGIN(CPedIK::PointGunInDirectionUsingArm)
static int address;
static int global_address;
static const int id = 0x4EDB20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EDB20, 0x4EDBD0, 0x4EDB60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4ED9F7,100,0,0x4ED9B0,1, 0x4EDAA7,110,0,0x4EDA60,1, 0x4EDA37,120,0,0x4ED9F0,1>;
using def_t = bool(CPedIK *, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIK *,float,float>, 0,1,2>;
META_END

META_BEGIN(CPedIK::RestoreGunPosn)
static int address;
static int global_address;
static const int id = 0x4EDD70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EDD70, 0x4EDE20, 0x4EDDB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C6BDD,100,0,0x4C6BB0,1, 0x4C6C7D,110,0,0x4C6C50,1, 0x4C6C0D,120,0,0x4C6BE0,1>;
using def_t = bool(CPedIK *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIK *>, 0>;
META_END

META_BEGIN(CPedIK::RotateTorso)
static int address;
static int global_address;
static const int id = 0x4EDDB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EDDB0, 0x4EDE60, 0x4EDDF0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x4C78A7,100,0,0x4C73F0,1, 0x4C78C2,100,0,0x4C73F0,2, 0x4ED7ED,100,0,0x4ED620,1, 0x4ED904,100,0,0x4ED810,1, 0x4EDB08,100,0,0x4ED9B0,1, 0x4EDDA2,100,0,0x4EDD70,1, 0x4C7947,110,0,0x4C7490,1, 0x4C7962,110,0,0x4C7490,2, 0x4ED89D,110,0,0x4ED6D0,1, 0x4ED9B4,110,0,0x4ED8C0,1, 0x4EDBB8,110,0,0x4EDA60,1, 0x4EDE52,110,0,0x4EDE20,1, 0x4C78D7,120,0,0x4C7420,1, 0x4C78F2,120,0,0x4C7420,2, 0x4ED82D,120,0,0x4ED660,1, 0x4ED944,120,0,0x4ED850,1, 0x4EDB48,120,0,0x4ED9F0,1, 0x4EDDE2,120,0,0x4EDDB0,1>;
using def_t = void(CPedIK *, AnimBlendFrameData *, LimbOrientation &, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedIK *,AnimBlendFrameData *,LimbOrientation &,bool>, 0,1,2,3>;
META_END

}
