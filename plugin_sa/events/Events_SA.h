#pragma once
#include "..\shared\EventList.h"

class CPed;
class CVehicle;
class CObject;

namespace plugin
{
    namespace Events
    {
        extern CdeclEvent    <AddressList<0x53E293, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          drawingEvent;
        extern CdeclEvent    <AddressList<0x53E4FF, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          drawHudEvent;
        extern CdeclEvent    <AddressList<0x58FC53, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          drawRadarEvent;
        extern CdeclEvent    <AddressList<0x58AA2D, H_JUMP,
                                          0x575B44, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          drawBlipsEvent;
        extern CdeclEvent    <AddressList<0x5759E4, H_CALL,
                                          0x5869BF, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void(bool)>      drawRadarOverlayEvent;
        extern CdeclEvent    <AddressList<0x5BF3A1, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          initRwEvent;
        extern CdeclEvent    <AddressList<0x53D910, H_CALL>, PRIORITY_BEFORE, ArgPickNone,            void()>          shutdownRwEvent;
        extern ThiscallEvent <AddressList<0x6D5F2F, H_CALL>, PRIORITY_AFTER,  ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleCtorEvent;
        extern ThiscallEvent <AddressList<0x6E2D35, H_CALL>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleDtorEvent;
        extern ThiscallEvent <AddressList<0x5E8052, H_CALL>, PRIORITY_AFTER,  ArgPickN<CPed*, 0>,     void(CPed*)>     pedCtorEvent;
        extern ThiscallEvent <AddressList<0x5E880C, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>,     void(CPed*)>     pedDtorEvent;
        extern ThiscallEvent <AddressList<0x5A1D2D, H_CALL,
                                          0x5A1D8D, H_CALL, 0x5A1E0E, H_CALL,
                                          0x5A1FA3, H_CALL,
                                          0x5A2018, H_CALL>, PRIORITY_AFTER,  ArgPickN<CObject*, 0>,  void(CObject*)>  objectCtorEvent;
        extern ThiscallEvent <AddressList<0x59F82A, H_CALL>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>,  void(CObject*)>  objectDtorEvent;
        extern CdeclEvent    <AddressList<0x5BF85B, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          initPoolsEvent;
        extern CdeclEvent    <AddressList<0x53CA5C, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          shutdownPoolsEvent;
        extern ThiscallEvent <AddressList<0x6C4523, H_CALL,
                                          0x6D0E89, H_JUMP>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleRenderEvent;
        extern ThiscallEvent <AddressList<0x5E77FC, H_CALL,
                                          0x5E780A, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>,     void(CPed*) >    pedRenderEvent;
        extern ThiscallEvent <AddressList<0x59F1ED, H_JUMP>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>,  void(CObject*)>  objectRenderEvent;
        extern CdeclEvent    <AddressList<0x7F79E1, H_CALL,
                                          0x7F7BAB, H_CALL, 0x7F8253, H_CALL,
                                          0x7F83F3, H_CALL, 0x7F8714, H_CALL,
                                          0x7F881B, H_CALL, 0x7F8BCA, H_CALL,
                                          0x7F8CDD, H_CALL, 0x7F9299, H_CALL,
                                          0x7F9463, H_CALL, 0x7F97DB, H_CALL,
                                          0x7F9A5F, H_CALL,
                                          0x7F9B8C, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          d3dResetEvent;
        extern CdeclEvent    <AddressList<0x7F795B, H_CALL,
                                          0x7F7A77, H_CALL, 0x7F817D, H_CALL,
                                          0x7F831D, H_CALL, 0x7F8688, H_CALL,
                                          0x7F87AA, H_CALL, 0x7F8B4A, H_CALL,
                                          0x7F8C60, H_CALL, 0x7F9213, H_CALL,
                                          0x7F932F, H_CALL, 0x7F9706, H_CALL,
                                          0x7F9A0C, H_CALL,
                                          0x7F9B39, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          d3dLostEvent;
        extern CdeclEvent    <AddressList<0x53E981, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          gameProcessEvent;
        extern CdeclEvent    <AddressList<0x748CFB, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          initGameEvent;
        extern CdeclEvent    <AddressList<0x748E09, H_CALL,
                                          0x748E48, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          reInitGameEvent;
    }
}