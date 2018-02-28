/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Events.h"

using namespace plugin;
using namespace plugin::Events;

#ifdef GTASA
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
ThiscallEvent <AddressList<0x747FA5, H_CALL>, PRIORITY_BEFORE, ArgPickNone,            void(void*)>     plugin::Events::onPauseAllSounds;
ThiscallEvent <AddressList<0x747FE4, H_CALL>, PRIORITY_BEFORE, ArgPickNone,            void(void*)>     plugin::Events::onResumeAllSounds;
CdeclEvent    <AddressList<0x53BDD7, H_CALL,
                           0x5BA340, H_CALL,
                           0x5D4FD7, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          plugin::Events::initScriptsEvent;
CdeclEvent    <AddressList<0x53C077, H_CALL>, PRIORITY_AFTER,  ArgPickNone,            void()>          plugin::Events::processScriptsEvent;
CdeclEvent    <AddressList<0x53ECA1, H_CALL>, PRIORITY_AFTER, ArgPickNone,             bool()>          plugin::Events::attachRwPluginsEvent;
#endif
#ifdef GTAVC
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
ThiscallEvent <AddressList<0x4E3666, H_CALL>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>,     void(CObject*)>  plugin::Events::objectRenderEvent;
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
CdeclEvent    <AddressList<0x4A5BB5, H_CALL>, PRIORITY_AFTER,  ArgPickNone,               bool()> plugin::Events::attachRwPluginsEvent;
#endif
#ifdef GTA3
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
CdeclEvent    <AddressList<0x48E8D2, H_CALL>, PRIORITY_AFTER, ArgPickNone,                bool()> plugin::Events::attachRwPluginsEvent;
#endif
