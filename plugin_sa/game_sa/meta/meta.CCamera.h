/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN_OVERLOADED(CCamera::IsSphereVisible, bool (CCamera::*)(CVector const &, float, RwMatrixTag *))
    static int address;
    static int global_address;
    static const int id = 0x420C40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x420C40, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x420D56, GAME_10US_COMPACT, H_CALL, 0x420D40, 1,
        0x420D7C, GAME_10US_COMPACT, H_CALL, 0x420D40, 2,
        0x440E82, GAME_10US_COMPACT, H_CALL, 0x440D10, 1,
        0x440EAC, GAME_10US_COMPACT, H_CALL, 0x440D10, 2,
        0x44EB48, GAME_10US_COMPACT, H_CALL, 0x44E790, 1,
        0x456B90, GAME_10US_COMPACT, H_CALL, 0x456A70, 1,
        0x456BB6, GAME_10US_COMPACT, H_CALL, 0x456A70, 2,
        0x463A78, GAME_10US_COMPACT, H_CALL, 0x463A60, 1,
        0x463A9E, GAME_10US_COMPACT, H_CALL, 0x463A60, 2,
        0x53458B, GAME_10US_COMPACT, H_CALL, 0x534540, 1,
        0x5345B4, GAME_10US_COMPACT, H_CALL, 0x534540, 2,
        0x55681A, GAME_10US_COMPACT, H_CALL, 0x556800, 1,
        0x556840, GAME_10US_COMPACT, H_CALL, 0x556800, 2,
        0x5DB4FB, GAME_10US_COMPACT, H_CALL, 0x5DB4E0, 1,
        0x5DB519, GAME_10US_COMPACT, H_CALL, 0x5DB4E0, 2,
        0x5DBC09, GAME_10US_COMPACT, H_CALL, 0x5DBAE0, 1,
        0x5DBC2F, GAME_10US_COMPACT, H_CALL, 0x5DBAE0, 2,
        0x612D04, GAME_10US_COMPACT, H_CALL, 0x612CD0, 1,
        0x612D27, GAME_10US_COMPACT, H_CALL, 0x612CD0, 2,
        0x6EB8A5, GAME_10US_COMPACT, H_CALL, 0x6EB810, 1,
        0x6EB8CF, GAME_10US_COMPACT, H_CALL, 0x6EB810, 2,
        0x6EDE3E, GAME_10US_COMPACT, H_CALL, 0x6EDDC0, 1,
        0x6EDE64, GAME_10US_COMPACT, H_CALL, 0x6EDDC0, 2,
        0x720F11, GAME_10US_COMPACT, H_CALL, 0x720F00, 1,
        0x7250A5, GAME_10US_COMPACT, H_CALL, 0x725040, 1,
        0x726F30, GAME_10US_COMPACT, H_CALL, 0x726DF0, 1,
        0x726F55, GAME_10US_COMPACT, H_CALL, 0x726DF0, 2>;
    using def_t = bool(CCamera *, CVector const *, float, RwMatrixTag *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CVector const *,float,RwMatrixTag *>, 0,1,2,3>;
META_END

META_BEGIN_OVERLOADED(CCamera::IsSphereVisible, bool (CCamera::*)(CVector const &, float))
    static int address;
    static int global_address;
    static const int id = 0x420D40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x420D40, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x42484E, GAME_10US_COMPACT, H_CALL, 0x424210, 1,
        0x42498E, GAME_10US_COMPACT, H_CALL, 0x424210, 2,
        0x42C4B8, GAME_10US_COMPACT, H_CALL, 0x42C2B0, 1,
        0x444B56, GAME_10US_COMPACT, H_CALL, 0x444810, 1,
        0x44EB5E, GAME_10US_COMPACT, H_CALL, 0x44E790, 1,
        0x4657C8, GAME_10US_COMPACT, H_CALL, 0x465680, 1,
        0x468320, GAME_10US_COMPACT, H_CALL, 0x466DE0, 1,
        0x47FE2A, GAME_10US_COMPACT, H_CALL, 0x47FA30, 1,
        0x47FE82, GAME_10US_COMPACT, H_CALL, 0x47FA30, 2,
        0x5FCA07, GAME_10US_COMPACT, H_CALL, 0x5FC9B0, 1,
        0x5FCEF6, GAME_10US_COMPACT, H_CALL, 0x5FCE80, 1,
        0x5FD3A6, GAME_10US_COMPACT, H_CALL, 0x5FD330, 1,
        0x613DB0, GAME_10US_COMPACT, H_CALL, 0x613D60, 1,
        0x614C10, GAME_10US_COMPACT, H_CALL, 0x614720, 1,
        0x615278, GAME_10US_COMPACT, H_CALL, 0x614720, 2,
        0x615B36, GAME_10US_COMPACT, H_CALL, 0x615970, 1,
        0x64D03C, GAME_10US_COMPACT, H_CALL, 0x64CF40, 1,
        0x64D078, GAME_10US_COMPACT, H_CALL, 0x64CF40, 2,
        0x6E503F, GAME_10US_COMPACT, H_CALL, 0x6E4F10, 1,
        0x6F3041, GAME_10US_COMPACT, H_CALL, 0x6F2F40, 1,
        0x707BDE, GAME_10US_COMPACT, H_CALL, 0x707B40, 1,
        0x707D67, GAME_10US_COMPACT, H_CALL, 0x707CA0, 1,
        0x720DE1, GAME_10US_COMPACT, H_CALL, 0x720930, 1,
        0x7364BE, GAME_10US_COMPACT, H_CALL, 0x7360D0, 1,
        0x736510, GAME_10US_COMPACT, H_CALL, 0x7360D0, 2,
        0x73BB4F, GAME_10US_COMPACT, H_CALL, 0x73B550, 1,
        0x73BEED, GAME_10US_COMPACT, H_CALL, 0x73B550, 2,
        0x73C014, GAME_10US_COMPACT, H_CALL, 0x73B550, 3>;
    using def_t = bool(CCamera *, CVector const *, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CVector const *,float>, 0,1,2>;
META_END

META_BEGIN(CCamera::VectorTrackRunning)
    static int address;
    static int global_address;
    static const int id = 0x474870;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x474870, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x476F82, GAME_10US_COMPACT, H_CALL, 0x4762D0, 1>;
    using def_t = bool(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::VectorMoveRunning)
    static int address;
    static int global_address;
    static const int id = 0x4748A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4748A0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x476F62, GAME_10US_COMPACT, H_CALL, 0x4762D0, 1>;
    using def_t = bool(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::InitCameraVehicleTweaks)
    static int address;
    static int global_address;
    static const int id = 0x50A3B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50A3B0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x50A495, GAME_10US_COMPACT, H_CALL, 0x50A480, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::ApplyVehicleCameraTweaks)
    static int address;
    static int global_address;
    static const int id = 0x50A480;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50A480, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x52461F, GAME_10US_COMPACT, H_CALL, 0x5245B0, 1>;
    using def_t = void(CCamera *, CVehicle *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CVehicle *>, 0,1>;
META_END

DTOR_META_BEGIN(CCamera)
    static int address;
    static int global_address;
    static const int id = 0x50A870;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50A870, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x514013, GAME_10US_COMPACT, H_CALL, 0x514010, 1,
        0x856415, GAME_10US_COMPACT, H_JUMP, 0x856410, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::CamShake)
    static int address;
    static int global_address;
    static const int id = 0x50A9F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50A9F0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x6B3949, GAME_10US_COMPACT, H_CALL, 0x6B3780, 1,
        0x6B3D65, GAME_10US_COMPACT, H_CALL, 0x6B3BB0, 1,
        0x6BEA9C, GAME_10US_COMPACT, H_CALL, 0x6BEA10, 1,
        0x6C6F3D, GAME_10US_COMPACT, H_CALL, 0x6C6D30, 1,
        0x6CCF7C, GAME_10US_COMPACT, H_CALL, 0x6CCCF0, 1,
        0x6F2253, GAME_10US_COMPACT, H_CALL, 0x6F21B0, 1,
        0x6F8CC7, GAME_10US_COMPACT, H_CALL, 0x6F86A0, 1,
        0x73751F, GAME_10US_COMPACT, H_CALL, 0x736A50, 1,
        0x737554, GAME_10US_COMPACT, H_CALL, 0x736A50, 2>;
    using def_t = void(CCamera *, float, float, float, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,float,float,float,float>, 0,1,2,3,4>;
META_END

META_BEGIN(CCamera::ClearPlayerWeaponMode)
    static int address;
    static int global_address;
    static const int id = 0x50AB10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AB10, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x529C43, GAME_10US_COMPACT, H_CALL, 0x527FA0, 1,
        0x5BC60A, GAME_10US_COMPACT, H_CALL, 0x5BC520, 1,
        0x6098BB, GAME_10US_COMPACT, H_CALL, 0x609830, 1,
        0x609CB4, GAME_10US_COMPACT, H_CALL, 0x609C80, 1,
        0x60A02E, GAME_10US_COMPACT, H_JUMP, 0x60A020, 1,
        0x60B48B, GAME_10US_COMPACT, H_CALL, 0x60B460, 1,
        0x60B542, GAME_10US_COMPACT, H_CALL, 0x60B460, 2,
        0x634CAE, GAME_10US_COMPACT, H_CALL, 0x634C10, 1,
        0x68596F, GAME_10US_COMPACT, H_CALL, 0x6857E0, 1,
        0x685A25, GAME_10US_COMPACT, H_CALL, 0x6859A0, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::DontProcessObbeCinemaCamera)
    static int address;
    static int global_address;
    static const int id = 0x50AB40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AB40, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void();
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCamera::GetScreenRect)
    static int address;
    static int global_address;
    static const int id = 0x50AB50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AB50, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x514878, GAME_10US_COMPACT, H_CALL, 0x514860, 1>;
    using def_t = void(CCamera *, CRect *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CRect *>, 0,1>;
META_END

META_BEGIN(CCamera::Enable1rstPersonCamCntrlsScript)
    static int address;
    static int global_address;
    static const int id = 0x50AC00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AC00, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::Enable1rstPersonWeaponsCamera)
    static int address;
    static int global_address;
    static const int id = 0x50AC10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AC10, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::Fade)
    static int address;
    static int global_address;
    static const int id = 0x50AC20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AC20, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4405D4, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1,
        0x4409BD, GAME_10US_COMPACT, H_CALL, 0x4404A0, 2,
        0x440ACF, GAME_10US_COMPACT, H_CALL, 0x4404A0, 3,
        0x441288, GAME_10US_COMPACT, H_CALL, 0x441240, 1,
        0x441593, GAME_10US_COMPACT, H_CALL, 0x441560, 1,
        0x44208C, GAME_10US_COMPACT, H_CALL, 0x442060, 1,
        0x4423E5, GAME_10US_COMPACT, H_CALL, 0x4423C0, 1,
        0x442590, GAME_10US_COMPACT, H_CALL, 0x442480, 1,
        0x442859, GAME_10US_COMPACT, H_CALL, 0x442480, 2,
        0x442DF2, GAME_10US_COMPACT, H_CALL, 0x442AD0, 1,
        0x443105, GAME_10US_COMPACT, H_CALL, 0x442AD0, 2,
        0x443498, GAME_10US_COMPACT, H_CALL, 0x442AD0, 3,
        0x4436F8, GAME_10US_COMPACT, H_CALL, 0x442AD0, 4,
        0x45F0E6, GAME_10US_COMPACT, H_CALL, 0x45F050, 1,
        0x45F101, GAME_10US_COMPACT, H_CALL, 0x45F050, 2,
        0x460321, GAME_10US_COMPACT, H_CALL, 0x4600F0, 1,
        0x46033C, GAME_10US_COMPACT, H_CALL, 0x4600F0, 2,
        0x465029, GAME_10US_COMPACT, H_CALL, 0x465000, 1,
        0x468592, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x47C7EB, GAME_10US_COMPACT, H_CALL, 0x47C100, 1,
        0x53E664, GAME_10US_COMPACT, H_CALL, 0x53E600, 1,
        0x53E693, GAME_10US_COMPACT, H_CALL, 0x53E600, 2,
        0x570B07, GAME_10US_COMPACT, H_CALL, 0x56F8D0, 1,
        0x570B53, GAME_10US_COMPACT, H_CALL, 0x56F8D0, 2,
        0x5733B4, GAME_10US_COMPACT, H_CALL, 0x573330, 1,
        0x5733CF, GAME_10US_COMPACT, H_CALL, 0x573330, 2,
        0x576DBD, GAME_10US_COMPACT, H_CALL, 0x576B70, 1,
        0x576DD8, GAME_10US_COMPACT, H_CALL, 0x576B70, 2,
        0x5B1942, GAME_10US_COMPACT, H_CALL, 0x5B1720, 1,
        0x618F00, GAME_10US_COMPACT, H_CALL, 0x618E90, 1>;
    using def_t = void(CCamera *, float, short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,float,short>, 0,1,2>;
META_END

META_BEGIN(CCamera::FindCamFOV)
    static int address;
    static int global_address;
    static const int id = 0x50AD20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AD20, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x456B1B, GAME_10US_COMPACT, H_CALL, 0x456A70, 1,
        0x56ED9C, GAME_10US_COMPACT, H_CALL, 0x56EC80, 1,
        0x56EDDF, GAME_10US_COMPACT, H_CALL, 0x56EC80, 2>;
    using def_t = float(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::Find3rdPersonQuickAimPitch)
    static int address;
    static int global_address;
    static const int id = 0x50AD40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AD40, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x522C54, GAME_10US_COMPACT, H_CALL, 0x521500, 1>;
    using def_t = float(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetCutSceneFinishTime)
    static int address;
    static int global_address;
    static const int id = 0x50AD90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AD90, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5B04DF, GAME_10US_COMPACT, H_CALL, 0x5B04D0, 1,
        0x5B1919, GAME_10US_COMPACT, H_CALL, 0x5B1720, 1>;
    using def_t = unsigned int(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetFading)
    static int address;
    static int global_address;
    static const int id = 0x50ADE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50ADE0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x44057F, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1,
        0x440A97, GAME_10US_COMPACT, H_CALL, 0x4404A0, 2,
        0x47C836, GAME_10US_COMPACT, H_CALL, 0x47C100, 1,
        0x58AB18, GAME_10US_COMPACT, H_CALL, 0x58AA50, 1,
        0x58AB9A, GAME_10US_COMPACT, H_CALL, 0x58AA50, 2>;
    using def_t = bool(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetFadingDirection)
    static int address;
    static int global_address;
    static const int id = 0x50ADF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50ADF0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x524078, GAME_10US_COMPACT, H_CALL, 0x522D40, 1>;
    using def_t = int(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::Get_Just_Switched_Status)
    static int address;
    static int global_address;
    static const int id = 0x50AE10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AE10, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4D7E51, GAME_10US_COMPACT, H_CALL, 0x4D7E40, 1>;
    using def_t = bool(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetScreenFadeStatus)
    static int address;
    static int global_address;
    static const int id = 0x50AE20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AE20, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4054CB, GAME_10US_COMPACT, H_CALL, 0x4053F0, 1,
        0x410BA0, GAME_10US_COMPACT, H_CALL, 0x410AD0, 1,
        0x53E9BE, GAME_10US_COMPACT, H_CALL, 0x53E920, 1,
        0x58AB26, GAME_10US_COMPACT, H_CALL, 0x58AA50, 1,
        0x58AB7A, GAME_10US_COMPACT, H_CALL, 0x58AA50, 2,
        0x58ABA8, GAME_10US_COMPACT, H_CALL, 0x58AA50, 3,
        0x58ABF3, GAME_10US_COMPACT, H_CALL, 0x58AA50, 4,
        0x5AFFA5, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 1>;
    using def_t = signed int(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetGameCamPosition)
    static int address;
    static int global_address;
    static const int id = 0x50AE50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AE50, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x441EAD, GAME_10US_COMPACT, H_CALL, 0x441E10, 1,
        0x5DE292, GAME_10US_COMPACT, H_CALL, 0x5DE160, 1,
        0x6DB885, GAME_10US_COMPACT, H_CALL, 0x6DAF00, 1,
        0x6DB915, GAME_10US_COMPACT, H_CALL, 0x6DAF00, 2,
        0x72DF45, GAME_10US_COMPACT, H_CALL, 0x72DEC0, 1>;
    using def_t = CVector *(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetLookingLRBFirstPerson)
    static int address;
    static int global_address;
    static const int id = 0x50AE60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AE60, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x72AA33, GAME_10US_COMPACT, H_CALL, 0x72A9A0, 1>;
    using def_t = bool(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetLookDirection)
    static int address;
    static int global_address;
    static const int id = 0x50AE90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AE90, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x425094, GAME_10US_COMPACT, H_CALL, 0x424F80, 1,
        0x553B7E, GAME_10US_COMPACT, H_CALL, 0x553AA0, 1,
        0x553B8D, GAME_10US_COMPACT, H_CALL, 0x553AA0, 2,
        0x583699, GAME_10US_COMPACT, H_CALL, 0x583670, 1,
        0x58375C, GAME_10US_COMPACT, H_CALL, 0x583670, 2,
        0x67E906, GAME_10US_COMPACT, H_CALL, 0x67E7B0, 1,
        0x688BB3, GAME_10US_COMPACT, H_CALL, 0x688A90, 1,
        0x68915B, GAME_10US_COMPACT, H_CALL, 0x688A90, 2,
        0x6FAE63, GAME_10US_COMPACT, H_CALL, 0x6FADF0, 1>;
    using def_t = signed int(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetLookingForwardFirstPerson)
    static int address;
    static int global_address;
    static const int id = 0x50AED0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AED0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x6ABCD4, GAME_10US_COMPACT, H_CALL, 0x6AAB50, 1,
        0x6DD189, GAME_10US_COMPACT, H_CALL, 0x6DD130, 1>;
    using def_t = bool(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetArrPosForVehicleType)
    static int address;
    static int global_address;
    static const int id = 0x50AF00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AF00, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x50C1E9, GAME_10US_COMPACT, H_CALL, 0x50C1B0, 1,
        0x5246FE, GAME_10US_COMPACT, H_CALL, 0x5245B0, 1,
        0x528AE1, GAME_10US_COMPACT, H_CALL, 0x527FA0, 1>;
    using def_t = void(CCamera *, int, int *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,int,int *>, 0,1,2>;
META_END

META_BEGIN(CCamera::GetPositionAlongSpline)
    static int address;
    static int global_address;
    static const int id = 0x50AF80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AF80, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5B057E, GAME_10US_COMPACT, H_CALL, 0x5B0570, 1>;
    using def_t = float(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::CopyCameraMatrixToRWCam)
    static int address;
    static int global_address;
    static const int id = 0x50AFA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50AFA0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x51A587, GAME_10US_COMPACT, H_CALL, 0x51A560, 1,
        0x51A5B1, GAME_10US_COMPACT, H_CALL, 0x51A5A0, 1,
        0x52C98B, GAME_10US_COMPACT, H_CALL, 0x52B730, 1>;
    using def_t = void(CCamera *, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,bool>, 0,1>;
META_END

META_BEGIN(CCamera::CalculateMirroredMatrix)
    static int address;
    static int global_address;
    static const int id = 0x50B380;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50B380, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x50B57D, GAME_10US_COMPACT, H_CALL, 0x50B510, 1>;
    using def_t = void(CCamera *, CVector, float, CMatrix *, CMatrix *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CVector,float,CMatrix *,CMatrix *>, 0,1,2,3,4>;
META_END

META_BEGIN(CCamera::DealWithMirrorBeforeConstructRenderList)
    static int address;
    static int global_address;
    static const int id = 0x50B510;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50B510, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x7270A8, GAME_10US_COMPACT, H_CALL, 0x726DF0, 1,
        0x72710D, GAME_10US_COMPACT, H_CALL, 0x726DF0, 2>;
    using def_t = void(CCamera *, bool, CVector, float, CMatrix *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,bool,CVector,float,CMatrix *>, 0,1,2,3,4>;
META_END

META_BEGIN(CCamera::ProcessFade)
    static int address;
    static int global_address;
    static const int id = 0x50B5D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50B5D0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x45F0F0, GAME_10US_COMPACT, H_CALL, 0x45F050, 1,
        0x46032B, GAME_10US_COMPACT, H_CALL, 0x4600F0, 1,
        0x52B86C, GAME_10US_COMPACT, H_CALL, 0x52B730, 1,
        0x53C10B, GAME_10US_COMPACT, H_CALL, 0x53BEE0, 1,
        0x53E66E, GAME_10US_COMPACT, H_CALL, 0x53E600, 1,
        0x53E69D, GAME_10US_COMPACT, H_CALL, 0x53E600, 2,
        0x5733BE, GAME_10US_COMPACT, H_CALL, 0x573330, 1,
        0x576DC7, GAME_10US_COMPACT, H_CALL, 0x576B70, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::ProcessMusicFade)
    static int address;
    static int global_address;
    static const int id = 0x50B6D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50B6D0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x52B87A, GAME_10US_COMPACT, H_CALL, 0x52B730, 1,
        0x53E678, GAME_10US_COMPACT, H_CALL, 0x53E600, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::ProcessObbeCinemaCameraPed)
    static int address;
    static int global_address;
    static const int id = 0x50B880;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50B880, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = unsigned int(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::ProcessWideScreenOn)
    static int address;
    static int global_address;
    static const int id = 0x50B890;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50B890, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x52B888, GAME_10US_COMPACT, H_CALL, 0x52B730, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::RenderMotionBlur)
    static int address;
    static int global_address;
    static const int id = 0x50B8F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50B8F0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x53EB0D, GAME_10US_COMPACT, H_CALL, 0x53E920, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::Restore)
    static int address;
    static int global_address;
    static const int id = 0x50B930;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50B930, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4602FB, GAME_10US_COMPACT, H_CALL, 0x4600F0, 1,
        0x468A38, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x47C4CC, GAME_10US_COMPACT, H_CALL, 0x47C100, 1,
        0x528105, GAME_10US_COMPACT, H_CALL, 0x527FA0, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::RestoreWithJumpCut)
    static int address;
    static int global_address;
    static const int id = 0x50BAB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BAB0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x440775, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1,
        0x4422F9, GAME_10US_COMPACT, H_CALL, 0x442060, 1,
        0x4807A3, GAME_10US_COMPACT, H_CALL, 0x47FA30, 1,
        0x49C533, GAME_10US_COMPACT, H_CALL, 0x49C490, 1,
        0x52B64F, GAME_10US_COMPACT, H_CALL, 0x527FA0, 1,
        0x570B35, GAME_10US_COMPACT, H_CALL, 0x56F8D0, 1,
        0x5AFEEE, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::SetCamCutSceneOffSet)
    static int address;
    static int global_address;
    static const int id = 0x50BD20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BD20, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5B147D, GAME_10US_COMPACT, H_CALL, 0x5B1460, 1>;
    using def_t = void(CCamera *, CVector const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CVector const *>, 0,1>;
META_END

META_BEGIN(CCamera::SetCameraDirectlyBehindForFollowPed_CamOnAString)
    static int address;
    static int global_address;
    static const int id = 0x50BD40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BD40, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4422EF, GAME_10US_COMPACT, H_CALL, 0x442060, 1,
        0x483320, GAME_10US_COMPACT, H_CALL, 0x481300, 1,
        0x52A31E, GAME_10US_COMPACT, H_CALL, 0x527FA0, 1,
        0x52AF7D, GAME_10US_COMPACT, H_CALL, 0x527FA0, 2>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::SetCameraDirectlyBehindForFollowPed_ForAPed_CamOnAString)
    static int address;
    static int global_address;
    static const int id = 0x50BDA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BDA0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CCamera *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CPed *>, 0,1>;
META_END

META_BEGIN(CCamera::SetCamPositionForFixedMode)
    static int address;
    static int global_address;
    static const int id = 0x50BEC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BEC0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4403BB, GAME_10US_COMPACT, H_CALL, 0x43FFD0, 1,
        0x47C589, GAME_10US_COMPACT, H_CALL, 0x47C100, 1,
        0x49C8B4, GAME_10US_COMPACT, H_CALL, 0x49C490, 1,
        0x51E8FA, GAME_10US_COMPACT, H_CALL, 0x51E560, 1,
        0x51EB74, GAME_10US_COMPACT, H_CALL, 0x51E560, 2,
        0x51ECD2, GAME_10US_COMPACT, H_CALL, 0x51E560, 3,
        0x51EEA7, GAME_10US_COMPACT, H_CALL, 0x51E560, 4,
        0x528A57, GAME_10US_COMPACT, H_CALL, 0x527FA0, 1,
        0x529903, GAME_10US_COMPACT, H_CALL, 0x527FA0, 2,
        0x529B95, GAME_10US_COMPACT, H_CALL, 0x527FA0, 3,
        0x529FEF, GAME_10US_COMPACT, H_CALL, 0x527FA0, 4>;
    using def_t = void(CCamera *, CVector const *, CVector const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CVector const *,CVector const *>, 0,1,2>;
META_END

META_BEGIN(CCamera::SetFadeColour)
    static int address;
    static int global_address;
    static const int id = 0x50BF00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BF00, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4405C3, GAME_10US_COMPACT, H_CALL, 0x4404A0, 1,
        0x440ABE, GAME_10US_COMPACT, H_CALL, 0x4404A0, 2,
        0x441277, GAME_10US_COMPACT, H_CALL, 0x441240, 1,
        0x441582, GAME_10US_COMPACT, H_CALL, 0x441560, 1,
        0x44207B, GAME_10US_COMPACT, H_CALL, 0x442060, 1,
        0x4423D4, GAME_10US_COMPACT, H_CALL, 0x4423C0, 1,
        0x44257F, GAME_10US_COMPACT, H_CALL, 0x442480, 1,
        0x442848, GAME_10US_COMPACT, H_CALL, 0x442480, 2,
        0x442DE2, GAME_10US_COMPACT, H_CALL, 0x442AD0, 1,
        0x4430F5, GAME_10US_COMPACT, H_CALL, 0x442AD0, 2,
        0x443488, GAME_10US_COMPACT, H_CALL, 0x442AD0, 3,
        0x4436E7, GAME_10US_COMPACT, H_CALL, 0x442AD0, 4,
        0x45F0D8, GAME_10US_COMPACT, H_CALL, 0x45F050, 1,
        0x460315, GAME_10US_COMPACT, H_CALL, 0x4600F0, 1,
        0x47C7B4, GAME_10US_COMPACT, H_CALL, 0x47C100, 1,
        0x53C753, GAME_10US_COMPACT, H_CALL, 0x53C680, 1,
        0x53E687, GAME_10US_COMPACT, H_CALL, 0x53E600, 1,
        0x570AF7, GAME_10US_COMPACT, H_CALL, 0x56F8D0, 1,
        0x570B42, GAME_10US_COMPACT, H_CALL, 0x56F8D0, 2,
        0x5733A6, GAME_10US_COMPACT, H_CALL, 0x573330, 1,
        0x576DB1, GAME_10US_COMPACT, H_CALL, 0x576B70, 1>;
    using def_t = void(CCamera *, unsigned char, unsigned char, unsigned char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,unsigned char,unsigned char,unsigned char>, 0,1,2,3>;
META_END

META_BEGIN(CCamera::SetMotionBlur)
    static int address;
    static int global_address;
    static const int id = 0x50BF40;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BF40, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x442A62, GAME_10US_COMPACT, H_CALL, 0x442980, 1,
        0x44306C, GAME_10US_COMPACT, H_CALL, 0x442AD0, 1,
        0x443403, GAME_10US_COMPACT, H_CALL, 0x442AD0, 2,
        0x4436A1, GAME_10US_COMPACT, H_CALL, 0x442AD0, 3,
        0x5184EC, GAME_10US_COMPACT, H_CALL, 0x517EA0, 1,
        0x5BC857, GAME_10US_COMPACT, H_CALL, 0x5BC520, 1>;
    using def_t = void(CCamera *, int, int, int, int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,int,int,int,int,int>, 0,1,2,3,4,5>;
META_END

META_BEGIN(CCamera::SetMotionBlurAlpha)
    static int address;
    static int global_address;
    static const int id = 0x50BF80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BF80, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x53EB03, GAME_10US_COMPACT, H_CALL, 0x53E920, 1>;
    using def_t = void(CCamera *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,int>, 0,1>;
META_END

META_BEGIN(CCamera::SetNearClipScript)
    static int address;
    static int global_address;
    static const int id = 0x50BF90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BF90, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x489B68, GAME_10US_COMPACT, H_CALL, 0x489500, 1,
        0x5B0715, GAME_10US_COMPACT, H_CALL, 0x5B05A0, 1>;
    using def_t = void(CCamera *, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,float>, 0,1>;
META_END

META_BEGIN(CCamera::SetNewPlayerWeaponMode)
    static int address;
    static int global_address;
    static const int id = 0x50BFB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BFB0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5E7DCD, GAME_10US_COMPACT, H_CALL, 0x5E7CB0, 1,
        0x5E7E00, GAME_10US_COMPACT, H_CALL, 0x5E7CB0, 2,
        0x609862, GAME_10US_COMPACT, H_CALL, 0x609830, 1,
        0x609875, GAME_10US_COMPACT, H_CALL, 0x609830, 2,
        0x609888, GAME_10US_COMPACT, H_CALL, 0x609830, 3,
        0x60989B, GAME_10US_COMPACT, H_CALL, 0x609830, 4,
        0x6098AE, GAME_10US_COMPACT, H_CALL, 0x609830, 5,
        0x621ACA, GAME_10US_COMPACT, H_CALL, 0x621960, 1,
        0x685B97, GAME_10US_COMPACT, H_CALL, 0x6859A0, 1,
        0x686D6E, GAME_10US_COMPACT, H_CALL, 0x6859A0, 2>;
    using def_t = void(CCamera *, short, short, short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,short,short,short>, 0,1,2,3>;
META_END

META_BEGIN(CCamera::Using1stPersonWeaponMode)
    static int address;
    static int global_address;
    static const int id = 0x50BFF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50BFF0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x60F259, GAME_10US_COMPACT, H_CALL, 0x60EA90, 1,
        0x68590A, GAME_10US_COMPACT, H_CALL, 0x6857E0, 1,
        0x685AD5, GAME_10US_COMPACT, H_CALL, 0x6859A0, 1,
        0x6868D2, GAME_10US_COMPACT, H_CALL, 0x6859A0, 2,
        0x686EF4, GAME_10US_COMPACT, H_CALL, 0x6859A0, 3,
        0x687C86, GAME_10US_COMPACT, H_CALL, 0x687C20, 1>;
    using def_t = bool(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::SetParametersForScriptInterpolation)
    static int address;
    static int global_address;
    static const int id = 0x50C030;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C030, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x48A752, GAME_10US_COMPACT, H_CALL, 0x48A320, 1>;
    using def_t = void(CCamera *, float, float, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,float,float,unsigned int>, 0,1,2,3>;
META_END

META_BEGIN(CCamera::SetPercentAlongCutScene)
    static int address;
    static int global_address;
    static const int id = 0x50C070;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C070, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x514958, GAME_10US_COMPACT, H_CALL, 0x514950, 1>;
    using def_t = void(CCamera *, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,float>, 0,1>;
META_END

META_BEGIN(CCamera::SetRwCamera)
    static int address;
    static int global_address;
    static const int id = 0x50C100;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C100, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x53BD21, GAME_10US_COMPACT, H_CALL, 0x53BCF0, 1,
        0x5BD6A9, GAME_10US_COMPACT, H_CALL, 0x5BD600, 1>;
    using def_t = void(CCamera *, RwCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,RwCamera *>, 0,1>;
META_END

META_BEGIN(CCamera::SetWideScreenOn)
    static int address;
    static int global_address;
    static const int id = 0x50C140;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C140, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x454705, GAME_10US_COMPACT, H_CALL, 0x454340, 1,
        0x47F69B, GAME_10US_COMPACT, H_CALL, 0x47F370, 1,
        0x5B1493, GAME_10US_COMPACT, H_CALL, 0x5B1460, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::SetWideScreenOff)
    static int address;
    static int global_address;
    static const int id = 0x50C150;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C150, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x45439F, GAME_10US_COMPACT, H_CALL, 0x454340, 1,
        0x468687, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x47F6AC, GAME_10US_COMPACT, H_CALL, 0x47F370, 1,
        0x5AFEF8, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::SetZoomValueFollowPedScript)
    static int address;
    static int global_address;
    static const int id = 0x50C160;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C160, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x48164B, GAME_10US_COMPACT, H_CALL, 0x481300, 1,
        0x50C1CA, GAME_10US_COMPACT, H_CALL, 0x50C1B0, 1>;
    using def_t = void(CCamera *, short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,short>, 0,1>;
META_END

META_BEGIN(CCamera::SetZoomValueCamStringScript)
    static int address;
    static int global_address;
    static const int id = 0x50C1B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C1B0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x45AD1E, GAME_10US_COMPACT, H_CALL, 0x45AB10, 1,
        0x45AE73, GAME_10US_COMPACT, H_CALL, 0x45AD40, 1,
        0x48166E, GAME_10US_COMPACT, H_CALL, 0x481300, 1>;
    using def_t = void(CCamera *, short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,short>, 0,1>;
META_END

META_BEGIN(CCamera::StartCooperativeCamMode)
    static int address;
    static int global_address;
    static const int id = 0x50C260;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C260, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4980F5, GAME_10US_COMPACT, H_CALL, 0x496E00, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::StopCooperativeCamMode)
    static int address;
    static int global_address;
    static const int id = 0x50C270;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C270, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::AllowShootingWith2PlayersInCar)
    static int address;
    static int global_address;
    static const int id = 0x50C280;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C280, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CCamera *, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,bool>, 0,1>;
META_END

META_BEGIN(CCamera::StoreValuesDuringInterPol)
    static int address;
    static int global_address;
    static const int id = 0x50C290;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C290, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x52BEDA, GAME_10US_COMPACT, H_CALL, 0x52B730, 1,
        0x52C214, GAME_10US_COMPACT, H_CALL, 0x52B730, 2>;
    using def_t = void(CCamera *, CVector *, CVector *, CVector *, float *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CVector *,CVector *,CVector *,float *>, 0,1,2,3,4>;
META_END

META_BEGIN(CCamera::UpdateTargetEntity)
    static int address;
    static int global_address;
    static const int id = 0x50C360;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C360, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x52B78C, GAME_10US_COMPACT, H_CALL, 0x52B730, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::TakeControl)
    static int address;
    static int global_address;
    static const int id = 0x50C7C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C7C0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x45AD12, GAME_10US_COMPACT, H_CALL, 0x45AB10, 1,
        0x45AE67, GAME_10US_COMPACT, H_CALL, 0x45AD40, 1,
        0x47C437, GAME_10US_COMPACT, H_CALL, 0x47C100, 1,
        0x47C492, GAME_10US_COMPACT, H_CALL, 0x47C100, 2,
        0x47C4B8, GAME_10US_COMPACT, H_CALL, 0x47C100, 3,
        0x49C8C5, GAME_10US_COMPACT, H_CALL, 0x49C490, 1,
        0x51E67C, GAME_10US_COMPACT, H_CALL, 0x51E560, 1,
        0x51EB8C, GAME_10US_COMPACT, H_CALL, 0x51E560, 2,
        0x51ECEA, GAME_10US_COMPACT, H_CALL, 0x51E560, 3,
        0x51EECA, GAME_10US_COMPACT, H_CALL, 0x51E560, 4,
        0x51F0CA, GAME_10US_COMPACT, H_CALL, 0x51E560, 5,
        0x51F35B, GAME_10US_COMPACT, H_CALL, 0x51E560, 6,
        0x51FFBA, GAME_10US_COMPACT, H_CALL, 0x51E560, 7,
        0x5200FC, GAME_10US_COMPACT, H_CALL, 0x51E560, 8>;
    using def_t = void(CCamera *, CEntity *, short, short, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CEntity *,short,short,int>, 0,1,2,3,4>;
META_END

META_BEGIN(CCamera::TakeControlNoEntity)
    static int address;
    static int global_address;
    static const int id = 0x50C8B0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C8B0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4403CE, GAME_10US_COMPACT, H_CALL, 0x43FFD0, 1,
        0x47C601, GAME_10US_COMPACT, H_CALL, 0x47C100, 1>;
    using def_t = void(CCamera *, CVector const *, short, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CVector const *,short,int>, 0,1,2,3>;
META_END

META_BEGIN(CCamera::TakeControlAttachToEntity)
    static int address;
    static int global_address;
    static const int id = 0x50C910;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50C910, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4950F8, GAME_10US_COMPACT, H_CALL, 0x493FE0, 1,
        0x49517B, GAME_10US_COMPACT, H_CALL, 0x493FE0, 2,
        0x495200, GAME_10US_COMPACT, H_CALL, 0x493FE0, 3,
        0x49529D, GAME_10US_COMPACT, H_CALL, 0x493FE0, 4,
        0x495391, GAME_10US_COMPACT, H_CALL, 0x493FE0, 5>;
    using def_t = void(CCamera *, CEntity *, CEntity *, CVector *, CVector *, float, short, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CEntity *,CEntity *,CVector *,CVector *,float,short,int>, 0,1,2,3,4,5,6,7>;
META_END

META_BEGIN(CCamera::TakeControlWithSpline)
    static int address;
    static int global_address;
    static const int id = 0x50CAE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50CAE0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5B1489, GAME_10US_COMPACT, H_CALL, 0x5B1460, 1>;
    using def_t = void(CCamera *, short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,short>, 0,1>;
META_END

META_BEGIN(CCamera::UpdateAimingCoors)
    static int address;
    static int global_address;
    static const int id = 0x50CB10;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50CB10, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x686DFF, GAME_10US_COMPACT, H_CALL, 0x6859A0, 1>;
    using def_t = void(CCamera *, CVector const *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CVector const *>, 0,1>;
META_END

META_BEGIN(CCamera::SetCamCollisionVarDataSet)
    static int address;
    static int global_address;
    static const int id = 0x50CB60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50CB60, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x50CC08, GAME_10US_COMPACT, H_JUMP, 0x50CBF0, 1,
        0x50CC15, GAME_10US_COMPACT, H_JUMP, 0x50CBF0, 2,
        0x50CC22, GAME_10US_COMPACT, H_JUMP, 0x50CBF0, 3,
        0x50CC2F, GAME_10US_COMPACT, H_JUMP, 0x50CBF0, 4,
        0x50CCB8, GAME_10US_COMPACT, H_CALL, 0x50CCA0, 1,
        0x50CCC9, GAME_10US_COMPACT, H_CALL, 0x50CCA0, 2,
        0x50CCDA, GAME_10US_COMPACT, H_CALL, 0x50CCA0, 3,
        0x50CCEB, GAME_10US_COMPACT, H_CALL, 0x50CCA0, 4,
        0x50CCFC, GAME_10US_COMPACT, H_CALL, 0x50CCA0, 5,
        0x50CD0D, GAME_10US_COMPACT, H_CALL, 0x50CCA0, 6>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CCamera::SetNearClipBasedOnPedCollision)
    static int address;
    static int global_address;
    static const int id = 0x50CB90;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50CB90, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CCamera *, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,float>, 0,1>;
META_END

META_BEGIN(CCamera::SetColVarsAimWeapon)
    static int address;
    static int global_address;
    static const int id = 0x50CBF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50CBF0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x522A40, GAME_10US_COMPACT, H_CALL, 0x521500, 1>;
    using def_t = void(int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CCamera::SetColVarsPed)
    static int address;
    static int global_address;
    static const int id = 0x50CC50;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50CC50, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x52448C, GAME_10US_COMPACT, H_CALL, 0x522D40, 1>;
    using def_t = void(int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CCamera::SetColVarsVehicle)
    static int address;
    static int global_address;
    static const int id = 0x50CCA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50CCA0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x525D52, GAME_10US_COMPACT, H_CALL, 0x5245B0, 1>;
    using def_t = void(int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Cdecl;
    using args_t = ArgPick<ArgTypes<int,int>, 0,1>;
META_END

META_BEGIN(CCamera::CameraGenericModeSpecialCases)
    static int address;
    static int global_address;
    static const int id = 0x50CD30;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50CD30, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x522A57, GAME_10US_COMPACT, H_CALL, 0x521500, 1,
        0x5244A4, GAME_10US_COMPACT, H_CALL, 0x522D40, 1>;
    using def_t = void(CCamera *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CPed *>, 0,1>;
META_END

META_BEGIN(CCamera::CameraPedModeSpecialCases)
    static int address;
    static int global_address;
    static const int id = 0x50CD80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50CD80, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::CameraPedAimModeSpecialCases)
    static int address;
    static int global_address;
    static const int id = 0x50CDA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50CDA0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x522A62, GAME_10US_COMPACT, H_CALL, 0x521500, 1>;
    using def_t = void(CCamera *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CPed *>, 0,1>;
META_END

META_BEGIN(CCamera::CameraVehicleModeSpecialCases)
    static int address;
    static int global_address;
    static const int id = 0x50CDE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50CDE0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x520897, GAME_10US_COMPACT, H_CALL, 0x520690, 1,
        0x521022, GAME_10US_COMPACT, H_CALL, 0x520E40, 1,
        0x525D78, GAME_10US_COMPACT, H_CALL, 0x5245B0, 1>;
    using def_t = void(CCamera *, CVehicle *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CVehicle *>, 0,1>;
META_END

META_BEGIN(CCamera::IsExtraEntityToIgnore)
    static int address;
    static int global_address;
    static const int id = 0x50CE80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50CE80, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x419F34, GAME_10US_COMPACT, H_CALL, 0x419F00, 1,
        0x41A5CC, GAME_10US_COMPACT, H_CALL, 0x41A5A0, 1>;
    using def_t = bool(CCamera *, CEntity *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CEntity *>, 0,1>;
META_END

META_BEGIN(CCamera::ConsiderPedAsDucking)
    static int address;
    static int global_address;
    static const int id = 0x50CEB0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50CEB0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = bool(CCamera *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CPed *>, 0,1>;
META_END

META_BEGIN(CCamera::ResetDuckingSystem)
    static int address;
    static int global_address;
    static const int id = 0x50CEF0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50CEF0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4686CC, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x5219FD, GAME_10US_COMPACT, H_CALL, 0x521500, 1,
        0x52318B, GAME_10US_COMPACT, H_CALL, 0x522D40, 1>;
    using def_t = void(CCamera *, CPed *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CPed *>, 0,1>;
META_END

META_BEGIN(CCamera::HandleCameraMotionForDucking)
    static int address;
    static int global_address;
    static const int id = 0x50CFA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50CFA0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x520D38, GAME_10US_COMPACT, H_CALL, 0x520690, 1,
        0x524439, GAME_10US_COMPACT, H_CALL, 0x522D40, 1>;
    using def_t = void(CCamera *, CPed *, CVector *, CVector *, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CPed *,CVector *,CVector *,bool>, 0,1,2,3,4>;
META_END

META_BEGIN(CCamera::HandleCameraMotionForDuckingDuringAim)
    static int address;
    static int global_address;
    static const int id = 0x50D090;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50D090, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x522A1C, GAME_10US_COMPACT, H_CALL, 0x521500, 1>;
    using def_t = void(CCamera *, CPed *, CVector *, CVector *, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CPed *,CVector *,CVector *,bool>, 0,1,2,3,4>;
META_END

META_BEGIN(CCamera::VectorMoveLinear)
    static int address;
    static int global_address;
    static const int id = 0x50D160;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50D160, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x477004, GAME_10US_COMPACT, H_CALL, 0x4762D0, 1>;
    using def_t = void(CCamera *, CVector *, CVector *, float, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CVector *,CVector *,float,bool>, 0,1,2,3,4>;
META_END

META_BEGIN(CCamera::VectorTrackLinear)
    static int address;
    static int global_address;
    static const int id = 0x50D1D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50D1D0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x476C45, GAME_10US_COMPACT, H_CALL, 0x4762D0, 1>;
    using def_t = void(CCamera *, CVector *, CVector *, float, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CVector *,CVector *,float,bool>, 0,1,2,3,4>;
META_END

META_BEGIN(CCamera::AddShakeSimple)
    static int address;
    static int global_address;
    static const int id = 0x50D240;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50D240, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x478F90, GAME_10US_COMPACT, H_CALL, 0x478000, 1>;
    using def_t = void(CCamera *, float, int, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,float,int,float>, 0,1,2,3>;
META_END

META_BEGIN(CCamera::LerpFOV)
    static int address;
    static int global_address;
    static const int id = 0x50D280;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50D280, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x476C88, GAME_10US_COMPACT, H_CALL, 0x4762D0, 1>;
    using def_t = void(CCamera *, float, float, float, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,float,float,float,bool>, 0,1,2,3,4>;
META_END

META_BEGIN(CCamera::InitialiseScriptableComponents)
    static int address;
    static int global_address;
    static const int id = 0x50D2D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50D2D0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x4686C1, GAME_10US_COMPACT, H_CALL, 0x468560, 1,
        0x476CFD, GAME_10US_COMPACT, H_CALL, 0x4762D0, 1,
        0x51A541, GAME_10US_COMPACT, H_CALL, 0x51A450, 1,
        0x5BC544, GAME_10US_COMPACT, H_CALL, 0x5BC520, 1>;
    using def_t = int(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN_OVERLOADED(CCamera::ProcessVectorTrackLinear, void (CCamera::*)(float))
    static int address;
    static int global_address;
    static const int id = 0x50D350;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50D350, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x51647B, GAME_10US_COMPACT, H_CALL, 0x516440, 1>;
    using def_t = void(CCamera *, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,float>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CCamera::ProcessVectorMoveLinear, void (CCamera::*)(float))
    static int address;
    static int global_address;
    static const int id = 0x50D430;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50D430, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5164DB, GAME_10US_COMPACT, H_CALL, 0x5164A0, 1>;
    using def_t = void(CCamera *, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,float>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CCamera::ProcessFOVLerp, void (CCamera::*)(float))
    static int address;
    static int global_address;
    static const int id = 0x50D510;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x50D510, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x51653B, GAME_10US_COMPACT, H_CALL, 0x516500, 1>;
    using def_t = void(CCamera *, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,float>, 0,1>;
META_END

DEL_DTOR_META_BEGIN(CCamera)
    static int address;
    static int global_address;
    static const int id = 0x514010;
    static const bool is_virtual = true;
    static const int vtable_index = 0;
    using mv_addresses_t = MvAddresses<0x514010, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x8630E8, GAME_10US_COMPACT, H_CALLBACK, 0x8630E8, 1>;
    using def_t = void(CCamera *, char);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,char>, 0,1>;
META_END

META_BEGIN(CCamera::AvoidTheGeometry)
    static int address;
    static int global_address;
    static const int id = 0x514030;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x514030, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5175B9, GAME_10US_COMPACT, H_CALL, 0x517500, 1,
        0x518776, GAME_10US_COMPACT, H_CALL, 0x518500, 1,
        0x51910C, GAME_10US_COMPACT, H_CALL, 0x518500, 2,
        0x51915C, GAME_10US_COMPACT, H_CALL, 0x518500, 3,
        0x5197EF, GAME_10US_COMPACT, H_CALL, 0x519250, 1,
        0x51A0C0, GAME_10US_COMPACT, H_CALL, 0x519810, 1>;
    using def_t = void(CCamera *, CVector const *, CVector const *, CVector *, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CVector const *,CVector const *,CVector *,float>, 0,1,2,3,4>;
META_END

META_BEGIN(CCamera::DrawBordersForWideScreen)
    static int address;
    static int global_address;
    static const int id = 0x514860;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x514860, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x53E2B4, GAME_10US_COMPACT, H_CALL, 0x53E230, 1,
        0x5AF8C0, GAME_10US_COMPACT, H_CALL, 0x5A87F0, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::FinishCutscene)
    static int address;
    static int global_address;
    static const int id = 0x514950;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x514950, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5B0507, GAME_10US_COMPACT, H_CALL, 0x5B04D0, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::Find3rdPersonCamTargetVector)
    static int address;
    static int global_address;
    static const int id = 0x514970;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x514970, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x60B703, GAME_10US_COMPACT, H_CALL, 0x60B650, 1,
        0x61F06D, GAME_10US_COMPACT, H_CALL, 0x61ED10, 1,
        0x627E34, GAME_10US_COMPACT, H_CALL, 0x627CC0, 1,
        0x628469, GAME_10US_COMPACT, H_CALL, 0x628350, 1,
        0x62AD98, GAME_10US_COMPACT, H_CALL, 0x62A380, 1,
        0x73E8CC, GAME_10US_COMPACT, H_CALL, 0x73E800, 1,
        0x7403BE, GAME_10US_COMPACT, H_CALL, 0x73FB10, 1>;
    using def_t = void(CCamera *, float, CVector, CVector *, CVector *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,float,CVector,CVector *,CVector *>, 0,1,2,3,4>;
META_END

META_BEGIN(CCamera::CalculateGroundHeight)
    static int address;
    static int global_address;
    static const int id = 0x514B80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x514B80, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x40D15B, GAME_10US_COMPACT, H_CALL, 0x40CFD0, 1,
        0x40E69E, GAME_10US_COMPACT, H_CALL, 0x40E670, 1,
        0x516B05, GAME_10US_COMPACT, H_CALL, 0x516B00, 1,
        0x516BDA, GAME_10US_COMPACT, H_CALL, 0x516B20, 1,
        0x55576C, GAME_10US_COMPACT, H_CALL, 0x5556E0, 1,
        0x55577C, GAME_10US_COMPACT, H_CALL, 0x5556E0, 2,
        0x56EBE9, GAME_10US_COMPACT, H_CALL, 0x56EB30, 1,
        0x67F255, GAME_10US_COMPACT, H_CALL, 0x67EF20, 1,
        0x67F27E, GAME_10US_COMPACT, H_CALL, 0x67EF20, 2>;
    using def_t = float(CCamera *, unsigned int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,unsigned int>, 0,1>;
META_END

META_BEGIN(CCamera::CalculateFrustumPlanes)
    static int address;
    static int global_address;
    static const int id = 0x514D60;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x514D60, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x51513B, GAME_10US_COMPACT, H_CALL, 0x5150E0, 1>;
    using def_t = void(CCamera *, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,bool>, 0,1>;
META_END

META_BEGIN(CCamera::CalculateDerivedValues)
    static int address;
    static int global_address;
    static const int id = 0x5150E0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5150E0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x45D370, GAME_10US_COMPACT, H_CALL, 0x45D060, 1,
        0x45DD41, GAME_10US_COMPACT, H_CALL, 0x45D760, 1,
        0x51A592, GAME_10US_COMPACT, H_CALL, 0x51A560, 1,
        0x51A5BC, GAME_10US_COMPACT, H_CALL, 0x51A5A0, 1,
        0x52C983, GAME_10US_COMPACT, H_CALL, 0x52B730, 1>;
    using def_t = void(CCamera *, bool, bool);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,bool,bool>, 0,1,2>;
META_END

META_BEGIN(CCamera::StartTransition)
    static int address;
    static int global_address;
    static const int id = 0x515200;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x515200, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x515BC4, GAME_10US_COMPACT, H_JUMP, 0x515BC0, 1,
        0x52B106, GAME_10US_COMPACT, H_CALL, 0x527FA0, 1,
        0x52B1C7, GAME_10US_COMPACT, H_CALL, 0x527FA0, 2,
        0x52B1FD, GAME_10US_COMPACT, H_CALL, 0x527FA0, 3,
        0x52B20B, GAME_10US_COMPACT, H_CALL, 0x527FA0, 4,
        0x52B2FC, GAME_10US_COMPACT, H_CALL, 0x527FA0, 5,
        0x52B32F, GAME_10US_COMPACT, H_CALL, 0x527FA0, 6>;
    using def_t = void(CCamera *, short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,short>, 0,1>;
META_END

META_BEGIN(CCamera::StartTransitionWhenNotFinishedInter)
    static int address;
    static int global_address;
    static const int id = 0x515BC0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x515BC0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CCamera *, short);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,short>, 0,1>;
META_END

META_BEGIN(CCamera::UpdateSoundDistances)
    static int address;
    static int global_address;
    static const int id = 0x515BD0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x515BD0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x52C9B6, GAME_10US_COMPACT, H_CALL, 0x52B730, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN_OVERLOADED(CCamera::ProcessVectorTrackLinear, void (CCamera::*)())
    static int address;
    static int global_address;
    static const int id = 0x516440;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x516440, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x516AE9, GAME_10US_COMPACT, H_CALL, 0x516AE0, 1,
        0x52B854, GAME_10US_COMPACT, H_CALL, 0x52B730, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN_OVERLOADED(CCamera::ProcessVectorMoveLinear, void (CCamera::*)())
    static int address;
    static int global_address;
    static const int id = 0x5164A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5164A0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x516AE2, GAME_10US_COMPACT, H_CALL, 0x516AE0, 1,
        0x52B84A, GAME_10US_COMPACT, H_CALL, 0x52B730, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN_OVERLOADED(CCamera::ProcessFOVLerp, void (CCamera::*)())
    static int address;
    static int global_address;
    static const int id = 0x516500;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x516500, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x516AF0, GAME_10US_COMPACT, H_JUMP, 0x516AE0, 1,
        0x52B85E, GAME_10US_COMPACT, H_CALL, 0x52B730, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN_OVERLOADED(CCamera::ProcessShake, void (CCamera::*)(float))
    static int address;
    static int global_address;
    static const int id = 0x516560;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x516560, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x51A72B, GAME_10US_COMPACT, H_CALL, 0x51A6F0, 1,
        0x52BA68, GAME_10US_COMPACT, H_CALL, 0x52B730, 1>;
    using def_t = void(CCamera *, float);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,float>, 0,1>;
META_END

META_BEGIN(CCamera::ProcessScriptedCommands)
    static int address;
    static int global_address;
    static const int id = 0x516AE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x516AE0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::GetRoughDistanceToGround)
    static int address;
    static int global_address;
    static const int id = 0x516B00;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x516B00, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x516D86, GAME_10US_COMPACT, H_CALL, 0x516B20, 1,
        0x51C822, GAME_10US_COMPACT, H_CALL, 0x51C760, 1>;
    using def_t = float(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::ImproveNearClip)
    static int address;
    static int global_address;
    static const int id = 0x516B20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x516B20, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x52090E, GAME_10US_COMPACT, H_CALL, 0x520690, 1,
        0x520DF3, GAME_10US_COMPACT, H_CALL, 0x520690, 2,
        0x522A85, GAME_10US_COMPACT, H_CALL, 0x521500, 1,
        0x5244DC, GAME_10US_COMPACT, H_CALL, 0x522D40, 1,
        0x525DAA, GAME_10US_COMPACT, H_CALL, 0x5245B0, 1>;
    using def_t = void(CCamera *, CVehicle *, CPed *, CVector *, CVector *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CVehicle *,CPed *,CVector *,CVector *>, 0,1,2,3,4>;
META_END

CTOR_META_BEGIN(CCamera)
    static int address;
    static int global_address;
    static const int id = 0x51A450;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51A450, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x84D705, GAME_10US_COMPACT, H_CALL, 0x84D700, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::SetCameraUpForMirror)
    static int address;
    static int global_address;
    static const int id = 0x51A560;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51A560, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x72717A, GAME_10US_COMPACT, H_CALL, 0x727140, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::RestoreCameraAfterMirror)
    static int address;
    static int global_address;
    static const int id = 0x51A5A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51A5A0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x72721D, GAME_10US_COMPACT, H_CALL, 0x727140, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::ConeCastCollisionResolve)
    static int address;
    static int global_address;
    static const int id = 0x51A5D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51A5D0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x51D735, GAME_10US_COMPACT, H_CALL, 0x51D470, 1,
        0x5204C4, GAME_10US_COMPACT, H_CALL, 0x520190, 1>;
    using def_t = bool(CCamera *, CVector *, CVector *, CVector *, float, float, float *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CVector *,CVector *,CVector *,float,float,float *>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN_OVERLOADED(CCamera::ProcessShake, void (CCamera::*)())
    static int address;
    static int global_address;
    static const int id = 0x51A6F0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51A6F0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::IsItTimeForNewcam)
    static int address;
    static int global_address;
    static const int id = 0x51D770;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51D770, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x52683E, GAME_10US_COMPACT, H_CALL, 0x5267C0, 1,
        0x5269CE, GAME_10US_COMPACT, H_CALL, 0x526950, 1,
        0x526B67, GAME_10US_COMPACT, H_CALL, 0x526AE0, 1,
        0x526D09, GAME_10US_COMPACT, H_CALL, 0x526C80, 1,
        0x526E9E, GAME_10US_COMPACT, H_CALL, 0x526E20, 1>;
    using def_t = bool(CCamera *, int, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,int,int>, 0,1,2>;
META_END

META_BEGIN(CCamera::TryToStartNewCamMode)
    static int address;
    static int global_address;
    static const int id = 0x51E560;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x51E560, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x526888, GAME_10US_COMPACT, H_CALL, 0x5267C0, 1,
        0x5268D4, GAME_10US_COMPACT, H_CALL, 0x5267C0, 2,
        0x5268FF, GAME_10US_COMPACT, H_CALL, 0x5267C0, 3,
        0x526A18, GAME_10US_COMPACT, H_CALL, 0x526950, 1,
        0x526A64, GAME_10US_COMPACT, H_CALL, 0x526950, 2,
        0x526A8F, GAME_10US_COMPACT, H_CALL, 0x526950, 3,
        0x526BB1, GAME_10US_COMPACT, H_CALL, 0x526AE0, 1,
        0x526C03, GAME_10US_COMPACT, H_CALL, 0x526AE0, 2,
        0x526C34, GAME_10US_COMPACT, H_CALL, 0x526AE0, 3,
        0x526D53, GAME_10US_COMPACT, H_CALL, 0x526C80, 1,
        0x526DA3, GAME_10US_COMPACT, H_CALL, 0x526C80, 2,
        0x526DD4, GAME_10US_COMPACT, H_CALL, 0x526C80, 3,
        0x526EE8, GAME_10US_COMPACT, H_CALL, 0x526E20, 1,
        0x526F38, GAME_10US_COMPACT, H_CALL, 0x526E20, 2,
        0x526F69, GAME_10US_COMPACT, H_CALL, 0x526E20, 3>;
    using def_t = bool(CCamera *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,int>, 0,1>;
META_END

META_BEGIN(CCamera::CameraColDetAndReact)
    static int address;
    static int global_address;
    static const int id = 0x520190;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x520190, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5208A7, GAME_10US_COMPACT, H_CALL, 0x520690, 1,
        0x520D9E, GAME_10US_COMPACT, H_CALL, 0x520690, 2,
        0x52102D, GAME_10US_COMPACT, H_CALL, 0x520E40, 1,
        0x522A72, GAME_10US_COMPACT, H_CALL, 0x521500, 1,
        0x5244C9, GAME_10US_COMPACT, H_CALL, 0x522D40, 1,
        0x525D98, GAME_10US_COMPACT, H_CALL, 0x5245B0, 1>;
    using def_t = char(CCamera *, CVector *, CVector *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,CVector *,CVector *>, 0,1,2>;
META_END

META_BEGIN(CCamera::ProcessObbeCinemaCameraCar)
    static int address;
    static int global_address;
    static const int id = 0x5267C0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5267C0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x52A72D, GAME_10US_COMPACT, H_CALL, 0x527FA0, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::ProcessObbeCinemaCameraTrain)
    static int address;
    static int global_address;
    static const int id = 0x526950;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x526950, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x52A71F, GAME_10US_COMPACT, H_CALL, 0x527FA0, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::ProcessObbeCinemaCameraHeli)
    static int address;
    static int global_address;
    static const int id = 0x526AE0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x526AE0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x52A6F9, GAME_10US_COMPACT, H_CALL, 0x527FA0, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::ProcessObbeCinemaCameraPlane)
    static int address;
    static int global_address;
    static const int id = 0x526C80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x526C80, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x52A6DF, GAME_10US_COMPACT, H_CALL, 0x527FA0, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::ProcessObbeCinemaCameraBoat)
    static int address;
    static int global_address;
    static const int id = 0x526E20;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x526E20, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x52A70C, GAME_10US_COMPACT, H_CALL, 0x527FA0, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::CamControl)
    static int address;
    static int global_address;
    static const int id = 0x527FA0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x527FA0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x52B840, GAME_10US_COMPACT, H_CALL, 0x52B730, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::Process)
    static int address;
    static int global_address;
    static const int id = 0x52B730;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x52B730, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x53BCD3, GAME_10US_COMPACT, H_CALL, 0x53BC80, 1,
        0x53BE97, GAME_10US_COMPACT, H_CALL, 0x53BCF0, 1,
        0x53C104, GAME_10US_COMPACT, H_CALL, 0x53BEE0, 1,
        0x570B5D, GAME_10US_COMPACT, H_CALL, 0x56F8D0, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::DeleteCutSceneCamDataMemory)
    static int address;
    static int global_address;
    static const int id = 0x5B24A0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B24A0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5AFF02, GAME_10US_COMPACT, H_CALL, 0x5AFD60, 1,
        0x5B24D6, GAME_10US_COMPACT, H_CALL, 0x5B24D0, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

META_BEGIN(CCamera::LoadPathSplines)
    static int address;
    static int global_address;
    static const int id = 0x5B24D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5B24D0, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x5AFCF7, GAME_10US_COMPACT, H_CALL, 0x5AFBC0, 1>;
    using def_t = void(CCamera *, int);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *,int>, 0,1>;
META_END

META_BEGIN(CCamera::Init)
    static int address;
    static int global_address;
    static const int id = 0x5BC520;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x5BC520, 0, 0, 0, 0, 0>;
    using refs_t = RefList<
        0x53BCF8, GAME_10US_COMPACT, H_CALL, 0x53BCF0, 1,
        0x53BD11, GAME_10US_COMPACT, H_CALL, 0x53BCF0, 2,
        0x5BD699, GAME_10US_COMPACT, H_CALL, 0x5BD600, 1>;
    using def_t = void(CCamera *);
    static const int cb_priority = PRIORITY_BEFORE; 
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CCamera *>, 0>;
META_END

template<>
struct stack_object<CCamera> : stack_object_no_default<CCamera> {
    SUPPORTED_10US stack_object() {
        plugin::CallMethodDynGlobal<CCamera *>(ctor_gaddr(CCamera), reinterpret_cast<CCamera *>(objBuff));
    }
    SUPPORTED_10US ~stack_object() {
        plugin::CallMethodDynGlobal<CCamera *>(dtor_gaddr(CCamera), reinterpret_cast<CCamera *>(objBuff));
    }
};

template <>
SUPPORTED_10US inline CCamera *operator_new<CCamera>() {
    void *objData = operator new(sizeof(CCamera)); 
    CCamera *obj = reinterpret_cast<CCamera *>(objData);
    plugin::CallMethodDynGlobal<CCamera *>(ctor_gaddr(CCamera), obj);
    return obj;
}
template <>
SUPPORTED_10US inline CCamera *operator_new_array<CCamera>(unsigned int objCount) {
    void *objData = operator new(sizeof(CCamera) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CCamera *objArray = reinterpret_cast<CCamera *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CCamera *>(ctor_gaddr(CCamera), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10US inline void operator_delete<CCamera>(CCamera *obj) {
    if (obj == nullptr) return;
    plugin::CallVirtualMethod<0, CCamera *, char>(obj, 1);
}
template <>
SUPPORTED_10US inline void operator_delete_array<CCamera>(CCamera *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallVirtualMethod<0, CCamera *, char>(&objArray[i], 1);
    operator delete(objData);
}

}
