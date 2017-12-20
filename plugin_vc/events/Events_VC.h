/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "..\shared\EventList.h"

class CPed;
class CVehicle;
class CObject;

namespace plugin
{
    namespace Events
    {
        extern CdeclEvent    <AddressList<0x4A61D6, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          drawingEvent;
        extern CdeclEvent    <AddressList<0x4A64D0, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          drawHudEvent;
        extern CdeclEvent    <AddressList<0x55A8B3, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          drawRadarMapEvent;
        extern CdeclEvent    <AddressList<0x55AB18, H_CALL,
                                          0x49B34C, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          drawBlipsEvent;
        extern CdeclEvent    <AddressList<0x4A5B6B, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          initRwEvent;
        extern CdeclEvent    <AddressList<0x4A5B8E, H_CALL>, PRIORITY_BEFORE, ArgPickNone,            void()>          shutdownRwEvent;
        extern CdeclEvent    <AddressList<0x4A4B28, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          initPoolsEvent;
        extern CdeclEvent    <AddressList<0x4A4AE4, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          shutdownPoolsEvent;
        extern ThiscallEvent <AddressList<0x5BAC18, H_CALL>, PRIORITY_AFTER,  ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleCtorEvent;
        extern ThiscallEvent <AddressList<0x5BAC04, H_CALL>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleDtorEvent;
        extern ThiscallEvent <AddressList<0x50DC29, H_CALL>, PRIORITY_AFTER,  ArgPickN<CPed*, 0>,     void(CPed*)>     pedCtorEvent;
        extern ThiscallEvent <AddressList<0x50DBFB, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>,     void(CPed*)>     pedDtorEvent;
        extern ThiscallEvent <AddressList<0x4E40FD, H_CALL,
                                          0x4E41BC, H_CALL,
                                          0x4E4223, H_CALL>, PRIORITY_AFTER,  ArgPickN<CObject*, 0>,  void(CObject*)>  objectCtorEvent;
        extern ThiscallEvent <AddressList<0x4E40E2, H_CALL>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>,  void(CObject*)>  objectDtorEvent;
        extern ThiscallEvent <AddressList<0x589AB2, H_CALL,
                                          0x5A4E1C, H_CALL,
                                          0x5AF2BE, H_CALL,
                                          0x5B2580, H_CALL,
                                          0x60AD83, H_CALL>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleRenderEvent;
        extern ThiscallEvent <AddressList<0x4FE216, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>,     void(CPed*) >    pedRenderEvent;
        extern ThiscallEvent <AddressList<0x4E3666, H_CALL>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>,  void(CObject*)>  objectRenderEvent;
        extern ThiscallEvent <AddressList<0x5BAA49, H_CALL,
                                          0x5AF758, H_CALL>, PRIORITY_AFTER,  ArgPick2N<CVehicle*, 0, int, 1>, void(CVehicle*, int)> vehicleSetModelEvent;
        extern ThiscallEvent <AddressList<0x50D909, H_CALL>, PRIORITY_AFTER,  ArgPick2N<CPed *, 0, int, 1>, void(CPed*, int)> pedSetModelEvent;
        extern CdeclEvent    <AddressList<0x65CE83, H_CALL,
                                          0x65D30D, H_CALL, 0x65D91C, H_CALL,
                                          0x65E32B, H_CALL, 0x65E7B6, H_CALL,
                                          0x65ED66, H_CALL,
                                          0x65EF73, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          d3dResetEvent;

        extern CdeclEvent    <AddressList<0x65CDFB, H_CALL,
                                          0x65D1D8, H_CALL, 0x65D856, H_CALL,
                                          0x65E2A3, H_CALL, 0x65E680, H_CALL,
                                          0x65ED10, H_CALL,
                                          0x65EF1D, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          d3dLostEvent;
        extern CdeclEvent    <AddressList<0x4A5DA0, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          gameProcessEvent;
        extern CdeclEvent    <AddressList<0x45F463, H_CALL,
                                          0x4A492F, H_CALL,
                                          0x4A4E96, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          initScriptsEvent;
        extern CdeclEvent    <AddressList<0x4A45AA, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          processScriptsEvent;
        extern CdeclEvent    <AddressList<0x4A5BB5, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            bool()>          attachRwPluginsEvent;
    }
}