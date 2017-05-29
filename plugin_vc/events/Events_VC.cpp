/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Events_VC.h"

using namespace plugin;
using namespace plugin::Events;

CdeclEvent    <AddressList<0x4A61D6, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::drawingEvent;
CdeclEvent    <AddressList<0x4A64D0, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::drawHudEvent;
CdeclEvent    <AddressList<0x55A8B3, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::drawRadarMapEvent;
CdeclEvent    <AddressList<0x55AB18, H_CALL,                                     
                           0x49B34C, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::drawBlipsEvent;
CdeclEvent    <AddressList<0x4A5B6B, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::initRwEvent;
CdeclEvent    <AddressList<0x4A5B8E, H_CALL>, PRIORITY_BEFORE, ArgPickNone,               void()> plugin::Events::shutdownRwEvent;
CdeclEvent    <AddressList<0x4A4B28, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::initPoolsEvent;
CdeclEvent    <AddressList<0x4A4AE4, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::shutdownPoolsEvent;
ThiscallEvent <AddressList<0x5BAC18, H_CALL>, PRIORITY_AFTER,  ArgPickN<CVehicle*, 0>,    void(CVehicle*)> plugin::Events::vehicleCtorEvent;
ThiscallEvent <AddressList<0x5BAC04, H_CALL>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>,    void(CVehicle*)> plugin::Events::vehicleDtorEvent;
ThiscallEvent <AddressList<0x50DC29, H_CALL>, PRIORITY_AFTER,  ArgPickN<CPed*, 0>,        void(CPed*)>     plugin::Events::pedCtorEvent;
ThiscallEvent <AddressList<0x50DBFB, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>,        void(CPed*)>     plugin::Events::pedDtorEvent;
ThiscallEvent <AddressList<0x4E40FD, H_CALL,
                           0x4E41BC, H_CALL,
                           0x4E4223, H_CALL>, PRIORITY_AFTER,  ArgPickN<CObject*, 0>,     void(CObject*)>  plugin::Events::objectCtorEvent;
ThiscallEvent <AddressList<0x4E40E2, H_CALL>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>,     void(CObject*)>  plugin::Events::objectDtorEvent;
ThiscallEvent <AddressList<0x589AB2, H_CALL,
                           0x5A4E1C, H_CALL,
                           0x5AF2BE, H_CALL,
                           0x5B2580, H_CALL,
                           0x60AD83, H_CALL>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>,    void(CVehicle*)> plugin::Events::vehicleRenderEvent;
ThiscallEvent <AddressList<0x4FE216, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>,        void(CPed*) >    plugin::Events::pedRenderEvent;
ThiscallEvent <AddressList<0x4E3666, H_JUMP>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>,     void(CObject*)>  plugin::Events::objectRenderEvent;
ThiscallEvent <AddressList<0x5BAA49, H_CALL,
                           0x5AF758, H_CALL>, PRIORITY_AFTER,  ArgPick2N<CVehicle*, 0, int, 1>, void(CVehicle*, int)> plugin::Events::vehicleSetModelEvent;
ThiscallEvent <AddressList<0x50D909, H_CALL>, PRIORITY_AFTER,  ArgPick2N<CPed*, 0, int, 1>, void(CPed*, int)> plugin::Events::pedSetModelEvent;
CdeclEvent    <AddressList<0x65CE83, H_CALL,
                           0x65D30D, H_CALL, 0x65D91C, H_CALL,
                           0x65E32B, H_CALL, 0x65E7B6, H_CALL,
                           0x65ED66, H_CALL,
                           0x65EF73, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::d3dResetEvent;

CdeclEvent    <AddressList<0x65CDFB, H_CALL,
                           0x65D1D8, H_CALL, 0x65D856, H_CALL,
                           0x65E2A3, H_CALL, 0x65E680, H_CALL,
                           0x65ED10, H_CALL,
                           0x65EF1D, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::d3dLostEvent;
CdeclEvent    <AddressList<0x4A5DA0, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::gameProcessEvent;
CdeclEvent    <AddressList<0x45F463, H_CALL,
                           0x4A492F, H_CALL,
                           0x4A4E96, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::initScriptsEvent;
CdeclEvent    <AddressList<0x4A45AA, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::processScriptsEvent;