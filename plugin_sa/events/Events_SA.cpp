/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Events_SA.h"

using namespace plugin;
using namespace plugin::Events;

CdeclEvent    <AddressList<0x53E293, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          plugin::Events::drawingEvent;
CdeclEvent    <AddressList<0x53E4FF, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          plugin::Events::drawHudEvent;
CdeclEvent    <AddressList<0x58FC53, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          plugin::Events::drawRadarEvent;
CdeclEvent    <AddressList<0x58AA2D, H_JUMP, 
                           0x575B44, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          plugin::Events::drawBlipsEvent;
CdeclEvent    <AddressList<0x5759E4, H_CALL, 
                           0x5869BF, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void(bool)>      plugin::Events::drawRadarOverlayEvent;
ThiscallEvent <AddressList<0x57C324, H_JUMP>, PRIORITY_AFTER,  ArgPickNone,            void(void *)>    plugin::Events::drawMenuBackgroundEvent;
CdeclEvent    <AddressList<0x5BF3A1, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          plugin::Events::initRwEvent;
CdeclEvent    <AddressList<0x53D910, H_CALL>, PRIORITY_BEFORE, ArgPickNone,            void()>          plugin::Events::shutdownRwEvent;
ThiscallEvent <AddressList<0x6D5F2F, H_CALL>, PRIORITY_AFTER,  ArgPickN<CVehicle*, 0>, void(CVehicle*)> plugin::Events::vehicleCtorEvent;
ThiscallEvent <AddressList<0x6E2D35, H_CALL>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>, void(CVehicle*)> plugin::Events::vehicleDtorEvent;
ThiscallEvent <AddressList<0x5E8052, H_CALL>, PRIORITY_AFTER,  ArgPickN<CPed*, 0>,     void(CPed*)>     plugin::Events::pedCtorEvent;
ThiscallEvent <AddressList<0x5E880C, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>,     void(CPed*)>     plugin::Events::pedDtorEvent;
ThiscallEvent <AddressList<0x5A1D2D, H_CALL, 
                           0x5A1D8D, H_CALL, 0x5A1E0E, H_CALL,
                           0x5A1FA3, H_CALL, 
                           0x5A2018, H_CALL>, PRIORITY_AFTER,  ArgPickN<CObject*, 0>,  void(CObject*)>  plugin::Events::objectCtorEvent;
ThiscallEvent <AddressList<0x59F82A, H_CALL>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>,  void(CObject*)>  plugin::Events::objectDtorEvent;
CdeclEvent    <AddressList<0x5BF85B, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          plugin::Events::initPoolsEvent;
CdeclEvent    <AddressList<0x53CA5C, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          plugin::Events::shutdownPoolsEvent;
ThiscallEvent <AddressList<0x6C4523, H_CALL,
                           0x6D0E89, H_JUMP>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>, void(CVehicle*)> plugin::Events::vehicleRenderEvent;
ThiscallEvent <AddressList<0x5E77FC, H_CALL,
                           0x5E780A, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>,     void(CPed*) >    plugin::Events::pedRenderEvent;
ThiscallEvent <AddressList<0x59F1ED, H_JUMP>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>,  void(CObject*)>  plugin::Events::objectRenderEvent;
ThiscallEvent <AddressList<0x6D6A49, H_CALL>, PRIORITY_AFTER,  ArgPick2N<CVehicle*, 0, int, 1>, void(CVehicle*, int)> plugin::Events::vehicleSetModelEvent;
ThiscallEvent <AddressList<0x5E4890, H_CALL>, PRIORITY_AFTER,  ArgPick2N<CPed*, 0, int, 1>, void(CPed*, int)> plugin::Events::pedSetModelEvent;
CdeclEvent    <AddressList<0x7F79E1, H_CALL,
                           0x7F7BAB, H_CALL, 0x7F8253, H_CALL,
                           0x7F83F3, H_CALL, 0x7F8714, H_CALL,
                           0x7F881B, H_CALL, 0x7F8BCA, H_CALL,
                           0x7F8CDD, H_CALL, 0x7F9299, H_CALL,
                           0x7F9463, H_CALL, 0x7F97DB, H_CALL,
                           0x7F9A5F, H_CALL, 
                           0x7F9B8C, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          plugin::Events::d3dResetEvent;
CdeclEvent    <AddressList<0x7F795B, H_CALL,
                           0x7F7A77, H_CALL, 0x7F817D, H_CALL,
                           0x7F831D, H_CALL, 0x7F8688, H_CALL,
                           0x7F87AA, H_CALL, 0x7F8B4A, H_CALL,
                           0x7F8C60, H_CALL, 0x7F9213, H_CALL,
                           0x7F932F, H_CALL, 0x7F9706, H_CALL,
                           0x7F9A0C, H_CALL,
                           0x7F9B39, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          plugin::Events::d3dLostEvent;
CdeclEvent    <AddressList<0x53E981, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          plugin::Events::gameProcessEvent;
CdeclEvent    <AddressList<0x748CFB, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          plugin::Events::initGameEvent;
CdeclEvent    <AddressList<0x748E09, H_CALL,
                           0x748E48, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          plugin::Events::reInitGameEvent;