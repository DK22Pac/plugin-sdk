/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedAttractor::GetHeadOfQueueWaitTime)
static int address;
static int global_address;
static const int id = 0x520EF0;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x520EF0, 0x520F10, 0x520DE0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x6DBE10,100,2,0x6DBE10,1, 0x6DBE38,100,2,0x6DBE38,1, 0x6DBE88,100,2,0x6DBE88,1, 0x6DBEB0,100,2,0x6DBEB0,1, 0x6DBED8,100,2,0x6DBED8,1, 0x6DBF00,100,2,0x6DBF00,1, 0x6DBE00,110,2,0x6DBE00,1, 0x6DBE28,110,2,0x6DBE28,1, 0x6DBE78,110,2,0x6DBE78,1, 0x6DBEA0,110,2,0x6DBEA0,1, 0x6DBEC8,110,2,0x6DBEC8,1, 0x6DBEF0,110,2,0x6DBEF0,1, 0x6DADF8,120,2,0x6DADF8,1, 0x6DAE20,120,2,0x6DAE20,1, 0x6DAE70,120,2,0x6DAE70,1, 0x6DAE98,120,2,0x6DAE98,1, 0x6DAEC0,120,2,0x6DAEC0,1, 0x6DAEE8,120,2,0x6DAEE8,1>;
using def_t = float(CPedAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractor *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CPedAttractor)
static int address;
static int global_address;
static const int id = 0x62B2E0;
static const bool is_virtual = true;
static const int vtable_index = 1;
using mv_addresses_t = MvAddresses<0x62B2E0, 0x62B330, 0x62AFA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x6DBF04,100,2,0x6DBF00,1, 0x6DBEF4,110,2,0x6DBEF0,1, 0x6DAEEC,120,2,0x6DAEE8,1>;
using def_t = void(CPedAttractor *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractor *,unsigned char>, 0,1>;
META_END

DTOR_META_BEGIN(CPedAttractor)
static int address;
static int global_address;
static const int id = 0x62B340;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62B340, 0x62B390, 0x62B000>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x62B2F4,100,2,0,1, 0x62B344,110,2,0,1, 0x62AFB4,120,2,0,1>;
using def_t = void(CPedAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractor *>, 0>;
META_END

META_BEGIN(CPedAttractor::BroadcastDeparture)
static int address;
static int global_address;
static const int id = 0x62C690;
static const bool is_virtual = true;
static const int vtable_index = 7;
using mv_addresses_t = MvAddresses<0x62C690, 0x62C6E0, 0x62C350>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x6DBE2C,100,2,0x6DBE10,1, 0x6DBE7C,100,2,0x6DBE60,1, 0x6DBEA4,100,2,0x6DBE88,1, 0x6DBECC,100,2,0x6DBEB0,1, 0x6DBEF4,100,2,0x6DBED8,1, 0x6DBF1C,100,2,0x6DBF00,1, 0x6DBE1C,110,2,0x6DBE00,1, 0x6DBE6C,110,2,0x6DBE50,1, 0x6DBE94,110,2,0x6DBE78,1, 0x6DBEBC,110,2,0x6DBEA0,1, 0x6DBEE4,110,2,0x6DBEC8,1, 0x6DBF0C,110,2,0x6DBEF0,1, 0x6DAE14,120,2,0x6DADF8,1, 0x6DAE64,120,2,0x6DAE48,1, 0x6DAE8C,120,2,0x6DAE70,1, 0x6DAEB4,120,2,0x6DAE98,1, 0x6DAEDC,120,2,0x6DAEC0,1, 0x6DAF04,120,2,0x6DAEE8,1>;
using def_t = bool(CPedAttractor *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractor *,CPed *>, 0,1>;
META_END

META_BEGIN(CPedAttractor::BroadcastArrival)
static int address;
static int global_address;
static const int id = 0x62C940;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62C940, 0x62C990, 0x62C600>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x62B3B8,100,0,0x62B370,1, 0x62B408,110,0,0x62B3C0,1, 0x62B078,120,0,0x62B030,1>;
using def_t = bool(CPedAttractor *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractor *,CPed *>, 0,1>;
META_END

META_BEGIN(CPedAttractor::DeRegisterPed)
static int address;
static int global_address;
static const int id = 0x62CA40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62CA40, 0x62CA90, 0x62C700>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x62B41A,100,0,0x62B3D0,1, 0x62B46A,110,0,0x62B420,1, 0x62B0DA,120,0,0x62B090,1>;
using def_t = bool(CPedAttractor *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractor *,CPed *>, 0,1>;
META_END

META_BEGIN(CPedAttractor::RegisterPed)
static int address;
static int global_address;
static const int id = 0x62CB80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62CB80, 0x62CBD0, 0x62C840>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x62B840,100,0,0x62B470,1, 0x62B890,110,0,0x62B4C0,1, 0x62B500,120,0,0x62B130,1>;
using def_t = bool(CPedAttractor *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractor *,CPed *>, 0,1>;
META_END

META_BEGIN(CPedAttractor::ComputeAttractHeading)
static int address;
static int global_address;
static const int id = 0x62CC70;
static const bool is_virtual = true;
static const int vtable_index = 6;
using mv_addresses_t = MvAddresses<0x62CC70, 0x62CCC0, 0x62C930>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x6DBE28,100,2,0x6DBE10,1, 0x6DBE78,100,2,0x6DBE60,1, 0x6DBEA0,100,2,0x6DBE88,1, 0x6DBEC8,100,2,0x6DBEB0,1, 0x6DBEF0,100,2,0x6DBED8,1, 0x6DBF18,100,2,0x6DBF00,1, 0x6DBE18,110,2,0x6DBE00,1, 0x6DBE68,110,2,0x6DBE50,1, 0x6DBE90,110,2,0x6DBE78,1, 0x6DBEB8,110,2,0x6DBEA0,1, 0x6DBEE0,110,2,0x6DBEC8,1, 0x6DBF08,110,2,0x6DBEF0,1, 0x6DAE10,120,2,0x6DADF8,1, 0x6DAE60,120,2,0x6DAE48,1, 0x6DAE88,120,2,0x6DAE70,1, 0x6DAEB0,120,2,0x6DAE98,1, 0x6DAED8,120,2,0x6DAEC0,1, 0x6DAF00,120,2,0x6DAEE8,1>;
using def_t = void(CPedAttractor *, int, float &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractor *,int,float &>, 0,1,2>;
META_END

META_BEGIN(CPedAttractor::ComputeAttractPos)
static int address;
static int global_address;
static const int id = 0x62CF20;
static const bool is_virtual = true;
static const int vtable_index = 5;
using mv_addresses_t = MvAddresses<0x62CF20, 0x62CF70, 0x62CBE0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x6DBE24,100,2,0x6DBE10,1, 0x6DBE74,100,2,0x6DBE60,1, 0x6DBE9C,100,2,0x6DBE88,1, 0x6DBEC4,100,2,0x6DBEB0,1, 0x6DBEEC,100,2,0x6DBED8,1, 0x6DBF14,100,2,0x6DBF00,1, 0x6DBE14,110,2,0x6DBE00,1, 0x6DBE64,110,2,0x6DBE50,1, 0x6DBE8C,110,2,0x6DBE78,1, 0x6DBEB4,110,2,0x6DBEA0,1, 0x6DBEDC,110,2,0x6DBEC8,1, 0x6DBF04,110,2,0x6DBEF0,1, 0x6DAE0C,120,2,0x6DADF8,1, 0x6DAE5C,120,2,0x6DAE48,1, 0x6DAE84,120,2,0x6DAE70,1, 0x6DAEAC,120,2,0x6DAE98,1, 0x6DAED4,120,2,0x6DAEC0,1, 0x6DAEFC,120,2,0x6DAEE8,1>;
using def_t = void(CPedAttractor *, int, CVector &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractor *,int,CVector &>, 0,1,2>;
META_END

META_BEGIN(CPedAttractor::IsAtHeadOfQueue)
static int address;
static int global_address;
static const int id = 0x62D120;
static const bool is_virtual = true;
static const int vtable_index = 4;
using mv_addresses_t = MvAddresses<0x62D120, 0x62D170, 0x62CDE0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x6DBE20,100,2,0x6DBE10,1, 0x6DBE70,100,2,0x6DBE60,1, 0x6DBE98,100,2,0x6DBE88,1, 0x6DBEC0,100,2,0x6DBEB0,1, 0x6DBEE8,100,2,0x6DBED8,1, 0x6DBF10,100,2,0x6DBF00,1, 0x6DBE10,110,2,0x6DBE00,1, 0x6DBE60,110,2,0x6DBE50,1, 0x6DBE88,110,2,0x6DBE78,1, 0x6DBEB0,110,2,0x6DBEA0,1, 0x6DBED8,110,2,0x6DBEC8,1, 0x6DBF00,110,2,0x6DBEF0,1, 0x6DAE08,120,2,0x6DADF8,1, 0x6DAE58,120,2,0x6DAE48,1, 0x6DAE80,120,2,0x6DAE70,1, 0x6DAEA8,120,2,0x6DAE98,1, 0x6DAED0,120,2,0x6DAEC0,1, 0x6DAEF8,120,2,0x6DAEE8,1>;
using def_t = bool(CPedAttractor *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractor *,CPed *>, 0,1>;
META_END

CTOR_META_BEGIN_OVERLOADED(CPedAttractor, void(C2dEffect *, CMatrix const &, int, float, float, float, float, float, float, float))
static int address;
static int global_address;
static const int id = 0x62D140;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62D140, 0x62D190, 0x62CE00>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x62B5E8,100,0,0x62B470,1, 0x62B655,100,0,0x62B470,2, 0x62B6C2,100,0,0x62B470,3, 0x62B72F,100,0,0x62B470,4, 0x62B79C,100,0,0x62B470,5, 0x62B806,100,0,0x62B470,6, 0x62B638,110,0,0x62B4C0,1, 0x62B6A5,110,0,0x62B4C0,2, 0x62B712,110,0,0x62B4C0,3, 0x62B77F,110,0,0x62B4C0,4, 0x62B7EC,110,0,0x62B4C0,5, 0x62B856,110,0,0x62B4C0,6, 0x62B2A8,120,0,0x62B130,1, 0x62B315,120,0,0x62B130,2, 0x62B382,120,0,0x62B130,3, 0x62B3EF,120,0,0x62B130,4, 0x62B45C,120,0,0x62B130,5, 0x62B4C6,120,0,0x62B130,6>;
using def_t = CPedAttractor *(CPedAttractor *, C2dEffect *, CMatrix const &, int, float, float, float, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractor *,C2dEffect *,CMatrix const &,int,float,float,float,float,float,float,float>, 0,1,2,3,4,5,6,7,8,9,10>;
META_END

META_BEGIN(CPedAttractor::GetNoOfRegisteredPeds)
static int address;
static int global_address;
static const int id = 0x62DD60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x62DD60, 0x62DDB0, 0x62DA20>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x62B2A7,100,0,0x62B240,1, 0x62B437,100,0,0x62B3D0,1, 0x62C614,100,0,0x62C480,1, 0x62C8B2,100,0,0x62C690,1, 0x62C9A5,100,0,0x62C940,1, 0x62CB48,100,0,0x62CA40,1, 0x62CBA6,100,0,0x62CB80,1, 0x62B2F7,110,0,0x62B290,1, 0x62B487,110,0,0x62B420,1, 0x62C664,110,0,0x62C4D0,1, 0x62C902,110,0,0x62C6E0,1, 0x62C9F5,110,0,0x62C990,1, 0x62CB98,110,0,0x62CA90,1, 0x62CBF6,110,0,0x62CBD0,1, 0x62AF67,120,0,0x62AF00,1, 0x62B0F7,120,0,0x62B090,1, 0x62C2D4,120,0,0x62C140,1, 0x62C572,120,0,0x62C350,1, 0x62C665,120,0,0x62C600,1, 0x62C808,120,0,0x62C700,1, 0x62C866,120,0,0x62C840,1>;
using def_t = int(CPedAttractor *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedAttractor *>, 0>;
META_END

template<>
struct stack_object<CPedAttractor> : stack_object_no_default<CPedAttractor> {
    SUPPORTED_10EN_11EN_STEAM stack_object(C2dEffect *effect, CMatrix const &matrix, int maxPeds, float qDist, float waitTime, float approachTime, float distance, float headingDiff, float posDisp, float headDisp) {
        plugin::CallMethodDynGlobal<CPedAttractor *, C2dEffect *, CMatrix const &, int, float, float, float, float, float, float, float>(ctor_gaddr_o(CPedAttractor, void(C2dEffect *, CMatrix const &, int, float, float, float, float, float, float, float)), reinterpret_cast<CPedAttractor *>(objBuff), effect, matrix, maxPeds, qDist, waitTime, approachTime, distance, headingDiff, posDisp, headDisp);
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CPedAttractor *>(dtor_gaddr(CPedAttractor), reinterpret_cast<CPedAttractor *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CPedAttractor *operator_new<CPedAttractor>(C2dEffect *effect, CMatrix const &matrix, int maxPeds, float qDist, float waitTime, float approachTime, float distance, float headingDiff, float posDisp, float headDisp) {
    void *objData = operator new(sizeof(CPedAttractor));
    CPedAttractor *obj = reinterpret_cast<CPedAttractor *>(objData);
    plugin::CallMethodDynGlobal<CPedAttractor *, C2dEffect *, CMatrix const &, int, float, float, float, float, float, float, float>(ctor_gaddr_o(CPedAttractor, void(C2dEffect *, CMatrix const &, int, float, float, float, float, float, float, float)), obj, effect, matrix, maxPeds, qDist, waitTime, approachTime, distance, headingDiff, posDisp, headDisp);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CPedAttractor>(CPedAttractor *obj) {
    if (obj == nullptr) return;
    plugin::CallVirtualMethod<1, CPedAttractor *, unsigned char>(obj, 1);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CPedAttractor>(CPedAttractor *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallVirtualMethod<1, CPedAttractor *, unsigned char>(&objArray[i], 1);
    operator delete(objData);
}

}
