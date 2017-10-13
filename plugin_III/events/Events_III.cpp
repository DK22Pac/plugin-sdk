/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Events_III.h"

using namespace plugin;
using namespace plugin::Events;

CdeclEvent    <AddressList<0x48E126, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::drawingEvent;
CdeclEvent    <AddressList<0x48E420, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::drawHudEvent;
CdeclEvent    <AddressList<0x50838D, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::drawRadarMapEvent;
CdeclEvent    <AddressList<0x508499, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::drawBlipsEvent;
CdeclEvent    <AddressList<0x48D52F, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::initRwEvent;
CdeclEvent    <AddressList<0x48D540, H_CALL>, PRIORITY_BEFORE, ArgPickNone,               void()> plugin::Events::shutdownRwEvent;
CdeclEvent    <AddressList<0x48BEE8, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::initPoolsEvent;
CdeclEvent    <AddressList<0x48C491, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::shutdownPoolsEvent;
ThiscallEvent <AddressList<0x550A68, H_CALL>, PRIORITY_AFTER,  ArgPickN<CVehicle*, 0>,    void(CVehicle*)> plugin::Events::vehicleCtorEvent;
ThiscallEvent <AddressList<0x551114, H_CALL>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>,    void(CVehicle*)> plugin::Events::vehicleDtorEvent;
ThiscallEvent <AddressList<0x4C41C9, H_CALL>, PRIORITY_AFTER,  ArgPickN<CPed*, 0>,        void(CPed*)>     plugin::Events::pedCtorEvent;
ThiscallEvent <AddressList<0x4C5216, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>,        void(CPed*)>     plugin::Events::pedDtorEvent;
ThiscallEvent <AddressList<0x4BAD5D, H_CALL,
                           0x4BACEC, H_CALL,
                           0x4BABD3, H_CALL>, PRIORITY_AFTER,  ArgPickN<CObject*, 0>,     void(CObject*)>  plugin::Events::objectCtorEvent;
ThiscallEvent <AddressList<0x4BAE62, H_CALL>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>,     void(CObject*)>  plugin::Events::objectDtorEvent;
ThiscallEvent <AddressList<0x53B248, H_CALL,
                           0x53E97A, H_CALL,
                           0x547CA5, H_CALL,
                           0x54B810, H_CALL,
                           0x54EAA0, H_CALL>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>,    void(CVehicle*)> plugin::Events::vehicleRenderEvent;
ThiscallEvent <AddressList<0x4D0484, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>,        void(CPed*) >    plugin::Events::pedRenderEvent;
ThiscallEvent <AddressList<0x4BB232, H_CALL>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>,     void(CObject*)>  plugin::Events::objectRenderEvent;
ThiscallEvent <AddressList<0x551179, H_CALL,
                           0x5474C8, H_CALL,
                           0x53E7B8, H_CALL>, PRIORITY_AFTER,  ArgPick2N<CVehicle*, 0, int, 1>, void(CVehicle*, int)> plugin::Events::vehicleSetModelEvent;
ThiscallEvent <AddressList<0x4C52A9, H_CALL>, PRIORITY_AFTER,  ArgPick2N<CPed*, 0, int, 1>, void(CPed*, int)> plugin::Events::pedSetModelEvent;
CdeclEvent    <AddressList<0x5B88B8, H_CALL,
                           0x5B8D37, H_CALL, 0x5B9324, H_CALL,
                           0x5B9CF6, H_CALL, 0x5BA15F, H_CALL,
                           0x5BA66F, H_CALL, 0x5BAB1A, H_CALL,
                           0x5BAD20, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::d3dResetEvent;

CdeclEvent    <AddressList<0x5B8830, H_CALL,
                           0x5B8C02, H_CALL, 0x5B925E, H_CALL,
                           0x5B9C69, H_CALL, 0x5BA029, H_CALL,
                           0x5BA475, H_CALL, 0x5BAAC4, H_CALL,
                           0x5BACCA, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::d3dLostEvent;
CdeclEvent    <AddressList<0x48E49B, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::gameProcessEvent;
CdeclEvent    <AddressList<0x453B43, H_CALL,
                           0x48C26B, H_CALL,
                           0x48C575, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::initScriptsEvent;
CdeclEvent    <AddressList<0x48C95C, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::processScriptsEvent;
CdeclEvent    <AddressList<0x47AF76, H_CALL, 0x432723, H_CALL,
                           0x420AAD, H_CALL, 0x426446, H_CALL,
                           0x4893EF, H_CALL, 0x48A019, H_CALL,
                           0x48BA25, H_CALL, 0x4FE6B2, H_CALL,
                           0x4824E1, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               void()> plugin::Events::onMenuDrawingEvent;