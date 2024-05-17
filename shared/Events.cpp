/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#ifndef PLUGIN_EVENTS
#define PLUGIN_EVENTS
#include "EventList.h"

class CPed;
class CVehicle;
class CObject;
class CMenuManager;
class CHud;
class CPlayerPed;
class CAutomobile;

namespace plugin {
    namespace Events {
#ifdef GTASA
        static CdeclEvent <AddressList<0x53C6DB, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> restartGameEvent;

        static CdeclEvent    <AddressList<0x53E293, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawingEvent;
        static CdeclEvent    <AddressList<0x53E4FF, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawHudEvent;

        static CdeclEvent    <AddressList<0x53E550, H_CALL,
            0x53E83C, H_CALL,
            0x53EBA2, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawAfterFadeEvent;

        static CdeclEvent    <AddressList<0x58FC53, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawRadarEvent;
        static CdeclEvent    <AddressList<0x58AA2D, H_JUMP,
            0x575B44, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawBlipsEvent;
        static CdeclEvent    <AddressList<0x5759E4, H_CALL,
            0x5869BF, H_CALL>, PRIORITY_AFTER, ArgPickNone, void(bool)> drawRadarOverlayEvent;
        static ThiscallEvent <AddressList<0x57C324, H_JUMP>, PRIORITY_AFTER, ArgPickNone, void(void*)> drawMenuBackgroundEvent;
        static CdeclEvent    <AddressList<0x5BF3A1, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> initRwEvent;
        static CdeclEvent    <AddressList<0x53D910, H_CALL>, PRIORITY_BEFORE, ArgPickNone, void()> shutdownRwEvent;
        static ThiscallEvent <AddressList<0x6D5F2F, H_CALL>, PRIORITY_AFTER, ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleCtorEvent;
        static ThiscallEvent <AddressList<0x6E2D35, H_CALL>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleDtorEvent;
        static ThiscallEvent <AddressList<0x5E8052, H_CALL>, PRIORITY_AFTER, ArgPickN<CPed*, 0>, void(CPed*)> pedCtorEvent;
        static ThiscallEvent <AddressList<0x5E880C, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>, void(CPed*)> pedDtorEvent;
        static ThiscallEvent <AddressList<0x5A1D2D, H_CALL,
            0x5A1D8D, H_CALL, 0x5A1E0E, H_CALL,
            0x5A1FA3, H_CALL,
            0x5A2018, H_CALL>, PRIORITY_AFTER, ArgPickN<CObject*, 0>, void(CObject*)>  objectCtorEvent;
        static ThiscallEvent <AddressList<0x59F82A, H_CALL>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>, void(CObject*)> objectDtorEvent;
        static CdeclEvent    <AddressList<0x5BF85B, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> initPoolsEvent;
        static CdeclEvent    <AddressList<0x53CA5C, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> shutdownPoolsEvent;
        static ThiscallEvent <AddressList<0x6C4523, H_CALL,
            0x6D0E89, H_JUMP>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleRenderEvent;
        static ThiscallEvent <AddressList<0x5E77FC, H_CALL,
            0x5E780A, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>, void(CPed*)>    pedRenderEvent;
        static ThiscallEvent <AddressList<0x59F1ED, H_JUMP>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>, void(CObject*)>  objectRenderEvent;
        static ThiscallEvent <AddressList<0x6D6A49, H_CALL>, PRIORITY_AFTER, ArgPick2N<CVehicle*, 0, int, 1>, void(CVehicle*, int)> vehicleSetModelEvent;
        static ThiscallEvent <AddressList<0x5E4890, H_CALL>, PRIORITY_AFTER, ArgPick2N<CPed*, 0, int, 1>, void(CPed*, int)> pedSetModelEvent;
        static CdeclEvent    <AddressList<0x7F79E1, H_CALL,
            0x7F7BAB, H_CALL, 0x7F8253, H_CALL,
            0x7F83F3, H_CALL, 0x7F8714, H_CALL,
            0x7F881B, H_CALL, 0x7F8BCA, H_CALL,
            0x7F8CDD, H_CALL, 0x7F9299, H_CALL,
            0x7F9463, H_CALL, 0x7F97DB, H_CALL,
            0x7F9A5F, H_CALL,
            0x7F9B8C, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()>          d3dResetEvent;
        static CdeclEvent    <AddressList<0x7F795B, H_CALL,
            0x7F7A77, H_CALL, 0x7F817D, H_CALL,
            0x7F831D, H_CALL, 0x7F8688, H_CALL,
            0x7F87AA, H_CALL, 0x7F8B4A, H_CALL,
            0x7F8C60, H_CALL, 0x7F9213, H_CALL,
            0x7F932F, H_CALL, 0x7F9706, H_CALL,
            0x7F9A0C, H_CALL,
            0x7F9B39, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()>          d3dLostEvent;
        static CdeclEvent    <AddressList<0x53E981, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()>          gameProcessEvent;
        static CdeclEvent    <AddressList<0x748CFB, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()>          initGameEvent;
        static CdeclEvent    <AddressList<0x748E09, H_CALL,
            0x748E48, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()>          reInitGameEvent;
        static ThiscallEvent <AddressList<0x747FA5, H_CALL>, PRIORITY_BEFORE, ArgPickNone, void(void*)>     onPauseAllSounds;
        static ThiscallEvent <AddressList<0x747FE4, H_CALL>, PRIORITY_BEFORE, ArgPickNone, void(void*)>     onResumeAllSounds;
        static CdeclEvent    <AddressList<0x53BDD7, H_CALL,
            0x5BA340, H_CALL,
            0x5D4FD7, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()>          initScriptsEvent;
        static CdeclEvent    <AddressList<0x53C077, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()>          processScriptsEvent;
        static CdeclEvent    <AddressList<0x53ECA1, H_CALL>, PRIORITY_AFTER, ArgPickNone, bool()>          attachRwPluginsEvent;
#endif
#ifdef GTAVC
        static CdeclEvent <AddressList<0x4A46F1, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> restartGameEvent;

        static CdeclEvent <AddressListMulti<0x4A61D6, GAME_10EN, H_CALL,
            0x4A61F6, GAME_11EN, H_CALL,
            0x4A60A6, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawingEvent;
        static CdeclEvent <AddressListMulti<0x4A64D0, GAME_10EN, H_CALL,
            0x4A64F0, GAME_11EN, H_CALL,
            0x4A63A0, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawHudEvent;
        static CdeclEvent <AddressListMulti<0x55A8B3, GAME_10EN, H_CALL,
            0x55A8D3, GAME_11EN, H_CALL,
            0x55A7A3, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawRadarMapEvent;
        static CdeclEvent <AddressListMulti<0x55AB18, GAME_10EN, H_CALL,
            0x49B34C, GAME_10EN, H_CALL,
            0x55AB38, GAME_11EN, H_CALL,
            0x49B36D, GAME_11EN, H_CALL,
            0x55AA08, GAME_STEAM, H_CALL,
            0x49B26D, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawBlipsEvent;
        static CdeclEvent <AddressListMulti<0x4A5B6B, GAME_10EN, H_CALL,
            0x4A5B8B, GAME_11EN, H_CALL,
            0x4A5A3B, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> initRwEvent;
        static CdeclEvent <AddressListMulti<0x4A5B8E, GAME_10EN, H_CALL,
            0x4A5BAE, GAME_11EN, H_CALL,
            0x4A5A5E, GAME_STEAM, H_CALL>, PRIORITY_BEFORE, ArgPickNone, void()> shutdownRwEvent;
        static CdeclEvent <AddressListMulti<0x4A4B28, GAME_10EN, H_CALL,
            0x4A4B48, GAME_11EN, H_CALL,
            0x4A49E8, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> initPoolsEvent;
        static CdeclEvent <AddressListMulti<0x4A4AE4, GAME_10EN, H_CALL,
            0x4A4B04, GAME_11EN, H_CALL,
            0x4A49A4, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> shutdownPoolsEvent;
        static ThiscallEvent <AddressListMulti<0x5BAC18, GAME_10EN, H_CALL,
            0x5BAC38, GAME_11EN, H_CALL,
            0x5BAA48, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleCtorEvent;
        static ThiscallEvent <AddressListMulti<0x5BAC04, GAME_10EN, H_CALL,
            0x5BAC24, GAME_11EN, H_CALL,
            0x5BAA34, GAME_STEAM, H_CALL>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleDtorEvent;
        static ThiscallEvent <AddressListMulti<0x50DC29, GAME_10EN, H_CALL,
            0x50DC49, GAME_11EN, H_CALL,
            0x50DAE9, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickN<CPed*, 0>, void(CPed*)> pedCtorEvent;
        static ThiscallEvent <AddressListMulti<0x50DBFB, GAME_10EN, H_CALL,
            0x50DC1B, GAME_11EN, H_CALL,
            0x50DABB, GAME_STEAM, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>, void(CPed*)> pedDtorEvent;
        static ThiscallEvent <AddressListMulti<0x4E40FD, GAME_10EN, H_CALL,
            0x4E41BC, GAME_10EN, H_CALL,
            0x4E4223, GAME_10EN, H_CALL,
            0x4E411D, GAME_11EN, H_CALL,
            0x4E41DC, GAME_11EN, H_CALL,
            0x4E4243, GAME_11EN, H_CALL,
            0x4E3FBD, GAME_STEAM, H_CALL,
            0x4E407C, GAME_STEAM, H_CALL,
            0x4E40E3, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickN<CObject*, 0>, void(CObject*)> objectCtorEvent;
        static ThiscallEvent <AddressListMulti<0x4E40E2, GAME_10EN, H_CALL,
            0x4E4102, GAME_11EN, H_CALL,
            0x4E3FA2, GAME_STEAM, H_CALL>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>, void(CObject*)> objectDtorEvent;
        static ThiscallEvent <AddressListMulti<0x589AB2, GAME_10EN, H_CALL,
            0x5A4E1C, GAME_10EN, H_CALL,
            0x5AF2BE, GAME_10EN, H_CALL,
            0x5B2580, GAME_10EN, H_CALL,
            0x60AD83, GAME_10EN, H_CALL,
            0x589AD2, GAME_11EN, H_CALL,
            0x5A4E3C, GAME_11EN, H_CALL,
            0x5AF2DE, GAME_11EN, H_CALL,
            0x5B25A0, GAME_11EN, H_CALL,
            0x60AD63, GAME_11EN, H_CALL,
            0x5898E2, GAME_STEAM, H_CALL,
            0x5A4C4C, GAME_STEAM, H_CALL,
            0x5AF0EE, GAME_STEAM, H_CALL,
            0x5B23B0, GAME_STEAM, H_CALL,
            0x60A9A3, GAME_STEAM, H_CALL>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleRenderEvent;
        static ThiscallEvent <AddressListMulti<0x4FE216, GAME_10EN, H_CALL,
            0x4FE236, GAME_11EN, H_CALL,
            0x4FE0D6, GAME_STEAM, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>, void(CPed*) > pedRenderEvent;
        static ThiscallEvent <AddressListMulti<0x4E3666, GAME_10EN, H_CALL,
            0x4E3686, GAME_11EN, H_CALL,
            0x4E3526, GAME_STEAM, H_CALL>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>, void(CObject*)>  objectRenderEvent;
        static ThiscallEvent <AddressListMulti<0x5BAA49, GAME_10EN, H_CALL,
            0x5AF758, GAME_10EN, H_CALL,
            0x5BAA69, GAME_11EN, H_CALL,
            0x5AF778, GAME_11EN, H_CALL,
            0x5BA879, GAME_STEAM, H_CALL,
            0x5AF588, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPick2N<CVehicle*, 0, int, 1>, void(CVehicle*, int)> vehicleSetModelEvent;
        static ThiscallEvent <AddressListMulti<0x50D909, GAME_10EN, H_CALL,
            0x50D929, GAME_11EN, H_CALL,
            0x50D7C9, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPick2N<CPed*, 0, int, 1>, void(CPed*, int)> pedSetModelEvent;
        static CdeclEvent <AddressListMulti<0x65CE83, GAME_10EN, H_CALL,
            0x65D30D, GAME_10EN, H_CALL,
            0x65D91C, GAME_10EN, H_CALL,
            0x65E32B, GAME_10EN, H_CALL,
            0x65E7B6, GAME_10EN, H_CALL,
            0x65ED66, GAME_10EN, H_CALL,
            0x65EF73, GAME_10EN, H_CALL,
            0x65CED3, GAME_11EN, H_CALL,
            0x65D35D, GAME_11EN, H_CALL,
            0x65D96C, GAME_11EN, H_CALL,
            0x65E37B, GAME_11EN, H_CALL,
            0x65E806, GAME_11EN, H_CALL,
            0x65EDB6, GAME_11EN, H_CALL,
            0x65EFC3, GAME_11EN, H_CALL,
            0x65BE33, GAME_STEAM, H_CALL,
            0x65C2BD, GAME_STEAM, H_CALL,
            0x65C8CC, GAME_STEAM, H_CALL,
            0x65D2DB, GAME_STEAM, H_CALL,
            0x65D766, GAME_STEAM, H_CALL,
            0x65DD16, GAME_STEAM, H_CALL,
            0x65DF23, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> d3dResetEvent;
        static CdeclEvent <AddressListMulti<0x65CDFB, GAME_10EN, H_CALL,
            0x65D1D8, GAME_10EN, H_CALL,
            0x65D856, GAME_10EN, H_CALL,
            0x65E2A3, GAME_10EN, H_CALL,
            0x65E680, GAME_10EN, H_CALL,
            0x65ED10, GAME_10EN, H_CALL,
            0x65EF1D, GAME_10EN, H_CALL,
            0x65CE4B, GAME_11EN, H_CALL,
            0x65D228, GAME_11EN, H_CALL,
            0x65D8A6, GAME_11EN, H_CALL,
            0x65E2F3, GAME_11EN, H_CALL,
            0x65E6D0, GAME_11EN, H_CALL,
            0x65ED60, GAME_11EN, H_CALL,
            0x65EF6D, GAME_11EN, H_CALL,
            0x65BDAB, GAME_STEAM, H_CALL,
            0x65C188, GAME_STEAM, H_CALL,
            0x65C806, GAME_STEAM, H_CALL,
            0x65D253, GAME_STEAM, H_CALL,
            0x65D630, GAME_STEAM, H_CALL,
            0x65DCC0, GAME_STEAM, H_CALL,
            0x65DECD, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> d3dLostEvent;
        static CdeclEvent <AddressListMulti<0x4A5DA0, GAME_10EN, H_CALL,
            0x4A5DC0, GAME_11EN, H_CALL,
            0x4A5C70, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> gameProcessEvent;
        static CdeclEvent <AddressListMulti<0x600411, GAME_10EN, H_CALL,
            0x600431, GAME_11EN, H_CALL,
            0x600071, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> initGameEvent;
        static CdeclEvent <AddressListMulti<0x45F463, GAME_10EN, H_CALL,
            0x4A492F, GAME_10EN, H_CALL,
            0x4A4E96, GAME_10EN, H_CALL,
            0x45F463, GAME_11EN, H_CALL,
            0x4A494F, GAME_11EN, H_CALL,
            0x4A4EB6, GAME_11EN, H_CALL,
            0x45F343, GAME_STEAM, H_CALL,
            0x4A47EF, GAME_STEAM, H_CALL,
            0x4A4D63, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> initScriptsEvent;
        static CdeclEvent <AddressListMulti<0x4A45AA, GAME_10EN, H_CALL,
            0x4A45CA, GAME_11EN, H_CALL,
            0x4A4424, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> processScriptsEvent;
        static CdeclEvent <AddressListMulti<0x4A5BB5, GAME_10EN, H_CALL,
            0x4A5BD5, GAME_11EN, H_CALL,
            0x4A5A85, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, bool()> attachRwPluginsEvent;
        static CdeclEvent <AddressListMulti<0x49E3D9, GAME_10EN, H_CALL,
            0x49E3FA, GAME_11EN, H_CALL,
            0x49E298, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> menuDrawingEvent;
#endif
#ifdef GTA3
        static CdeclEvent <AddressList<0x48C7BE, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> restartGameEvent;
        static CdeclEvent <AddressListMulti<0x48E126, GAME_10EN, H_CALL,
            0x48E1E6, GAME_11EN, H_CALL,
            0x48E176, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawingEvent;
        static CdeclEvent <AddressListMulti<0x48E420, GAME_10EN, H_CALL,
            0x48E4E0, GAME_11EN, H_CALL,
            0x48E470, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawHudEvent;
        static CdeclEvent <AddressListMulti<0x50838D, GAME_10EN, H_CALL,
            0x50846D, GAME_11EN, H_CALL,
            0x5083FD, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawRadarMapEvent;
        static CdeclEvent <AddressListMulti<0x508499, GAME_10EN, H_CALL,
            0x508579, GAME_11EN, H_CALL,
            0x508509, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawBlipsEvent;
        static CdeclEvent <AddressListMulti<0x48D52F, GAME_10EN, H_CALL,
            0x48D62F, GAME_11EN, H_CALL,
            0x48D5BF, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> initRwEvent;
        static CdeclEvent <AddressListMulti<0x48D540, GAME_10EN, H_CALL,
            0x48D640, GAME_11EN, H_CALL,
            0x48D5D0, GAME_STEAM, H_CALL>, PRIORITY_BEFORE, ArgPickNone, void()> shutdownRwEvent;
        static CdeclEvent <AddressListMulti<0x48BEE8, GAME_10EN, H_CALL,
            0x48BFD8, GAME_11EN, H_CALL,
            0x48BF68, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> initPoolsEvent;
        static CdeclEvent <AddressListMulti<0x48C491, GAME_10EN, H_CALL,
            0x48C581, GAME_11EN, H_CALL,
            0x48C511, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> shutdownPoolsEvent;
        static ThiscallEvent <AddressListMulti<0x550A68, GAME_10EN, H_CALL,
            0x550BA8, GAME_11EN, H_CALL,
            0x550B58, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleCtorEvent;
        static ThiscallEvent <AddressListMulti<0x551114, GAME_10EN, H_CALL,
            0x551254, GAME_11EN, H_CALL,
            0x551204, GAME_STEAM, H_CALL>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleDtorEvent;
        static ThiscallEvent <AddressListMulti<0x4C41C9, GAME_10EN, H_CALL,
            0x4C4269, GAME_11EN, H_CALL,
            0x4C41F9, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickN<CPed*, 0>, void(CPed*)> pedCtorEvent;
        static ThiscallEvent <AddressListMulti<0x4C5216, GAME_10EN, H_CALL,
            0x4C52B6, GAME_11EN, H_CALL,
            0x4C5246, GAME_STEAM, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>, void(CPed*)> pedDtorEvent;
        static ThiscallEvent <AddressListMulti<0x4BAD5D, GAME_10EN, H_CALL,
            0x4BACEC, GAME_10EN, H_CALL,
            0x4BABD3, GAME_10EN, H_CALL,
            0x4BAE4D, GAME_11EN, H_CALL,
            0x4BADDC, GAME_11EN, H_CALL,
            0x4BACC3, GAME_11EN, H_CALL,
            0x4BADDD, GAME_STEAM, H_CALL,
            0x4BAD6C, GAME_STEAM, H_CALL,
            0x4BAC53, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickN<CObject*, 0>, void(CObject*)> objectCtorEvent;
        static ThiscallEvent <AddressListMulti<0x4BAE62, GAME_10EN, H_CALL,
            0x4BAF52, GAME_11EN, H_CALL,
            0x4BAEE2, GAME_STEAM, H_CALL>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>, void(CObject*)> objectDtorEvent;
        static ThiscallEvent <AddressListMulti<0x53B248, GAME_10EN, H_CALL,
            0x53E97A, GAME_10EN, H_CALL,
            0x547CA5, GAME_10EN, H_CALL,
            0x54B810, GAME_10EN, H_CALL,
            0x54EAA0, GAME_10EN, H_CALL,
            0x53B488, GAME_11EN, H_CALL,
            0x53EBBA, GAME_11EN, H_CALL,
            0x547EA5, GAME_11EN, H_CALL,
            0x54B990, GAME_11EN, H_CALL,
            0x54EBE0, GAME_11EN, H_CALL,
            0x53B438, GAME_STEAM, H_CALL,
            0x53EB6A, GAME_STEAM, H_CALL,
            0x547E55, GAME_STEAM, H_CALL,
            0x54B940, GAME_STEAM, H_CALL,
            0x54EB90, GAME_STEAM, H_CALL>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>, void(CVehicle*)> vehicleRenderEvent;
        static ThiscallEvent <AddressListMulti<0x4D0484, GAME_10EN, H_CALL,
            0x4D0524, GAME_11EN, H_CALL,
            0x4D04B4, GAME_STEAM, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>, void(CPed*)> pedRenderEvent;
        static ThiscallEvent <AddressListMulti<0x4BB232, GAME_10EN, H_CALL,
            0x4BB322, GAME_11EN, H_CALL,
            0x4BB2B2, GAME_STEAM, H_CALL>, PRIORITY_BEFORE, ArgPickN<CObject*, 0>, void(CObject*)> objectRenderEvent;
        static ThiscallEvent <AddressListMulti<0x551179, GAME_10EN, H_CALL,
            0x5474C8, GAME_10EN, H_CALL,
            0x53E7B8, GAME_10EN, H_CALL,
            0x5512B9, GAME_11EN, H_CALL,
            0x5476C8, GAME_11EN, H_CALL,
            0x53E9F8, GAME_11EN, H_CALL,
            0x551269, GAME_STEAM, H_CALL,
            0x547678, GAME_STEAM, H_CALL,
            0x53E9A8, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPick2N<CVehicle*, 0, int, 1>, void(CVehicle*, int)> vehicleSetModelEvent;
        static ThiscallEvent <AddressListMulti<0x4C52A9, GAME_10EN, H_CALL,
            0x4C5349, GAME_11EN, H_CALL,
            0x4C52D9, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPick2N<CPed*, 0, int, 1>, void(CPed*, int)> pedSetModelEvent;
        static CdeclEvent <AddressListMulti<0x5B88B8, GAME_10EN, H_CALL,
            0x5B8D37, GAME_10EN, H_CALL,
            0x5B9324, GAME_10EN, H_CALL,
            0x5B9CF6, GAME_10EN, H_CALL,
            0x5BA15F, GAME_10EN, H_CALL,
            0x5BA66F, GAME_10EN, H_CALL,
            0x5BAB1A, GAME_10EN, H_CALL,
            0x5BAD20, GAME_10EN, H_CALL,
            0x5B8B78, GAME_11EN, H_CALL,
            0x5B8FF7, GAME_11EN, H_CALL,
            0x5B95E4, GAME_11EN, H_CALL,
            0x5B9FB6, GAME_11EN, H_CALL,
            0x5BA41F, GAME_11EN, H_CALL,
            0x5BA92F, GAME_11EN, H_CALL,
            0x5BADDA, GAME_11EN, H_CALL,
            0x5BAFE0, GAME_11EN, H_CALL,
            0x5BD1F0, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> d3dResetEvent;
        static CdeclEvent <AddressListMulti<0x5B8830, GAME_10EN, H_CALL,
            0x5B8C02, GAME_10EN, H_CALL,
            0x5B925E, GAME_10EN, H_CALL,
            0x5B9C69, GAME_10EN, H_CALL,
            0x5BA029, GAME_10EN, H_CALL,
            0x5BA475, GAME_10EN, H_CALL,
            0x5BAAC4, GAME_10EN, H_CALL,
            0x5BACCA, GAME_10EN, H_CALL,
            0x5B8AF0, GAME_11EN, H_CALL,
            0x5B8EC2, GAME_11EN, H_CALL,
            0x5B951E, GAME_11EN, H_CALL,
            0x5B9F29, GAME_11EN, H_CALL,
            0x5BA2E9, GAME_11EN, H_CALL,
            0x5BA735, GAME_11EN, H_CALL,
            0x5BAD84, GAME_11EN, H_CALL,
            0x5BAF8A, GAME_11EN, H_CALL,
            0x5BD0E4, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> d3dLostEvent;
        static CdeclEvent <AddressListMulti<0x48E49B, GAME_10EN, H_CALL,
            0x48E55B, GAME_11EN, H_CALL,
            0x48E4EB, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> gameProcessEvent;
        static CdeclEvent <AddressList<0x57A2A3, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> serviceSoundEvent;
        static CdeclEvent <AddressListMulti<0x582E6C, GAME_10EN, H_CALL,
            0x5831AC, GAME_11EN, H_CALL,
            0x58309C, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> initGameEvent;
        static CdeclEvent <AddressListMulti<0x453B43, GAME_10EN, H_CALL,
            0x48C26B, GAME_10EN, H_CALL,
            0x48C575, GAME_10EN, H_CALL,
            0x453B43, GAME_11EN, H_CALL,
            0x48C35B, GAME_11EN, H_CALL,
            0x48C675, GAME_11EN, H_CALL,
            0x453B43, GAME_STEAM, H_CALL,
            0x48C2EB, GAME_STEAM, H_CALL,
            0x48C605, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> initScriptsEvent;
        static CdeclEvent <AddressListMulti<0x48C95C, GAME_10EN, H_CALL,
            0x48CA5C, GAME_11EN, H_CALL,
            0x48C9EC, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> processScriptsEvent;
        static ThiscallEvent <AddressListMulti<0x47AB12, GAME_10EN, H_CALL,
            0x47AB02, GAME_11EN, H_CALL,
            0x47AB02, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, void(CMenuManager*)> menuDrawingEvent;
        static CdeclEvent <AddressListMulti<0x48E8D2, GAME_10EN, H_CALL,
            0x48E992, GAME_11EN, H_CALL,
            0x48E922, GAME_STEAM, H_CALL>, PRIORITY_AFTER, ArgPickNone, bool()> attachRwPluginsEvent;
#endif
#ifdef GTA2
        static ThiscallEvent <AddressList<0x458607, H_CALL>, PRIORITY_AFTER, ArgPickNone, void(CMenuManager*)> menuDrawingEvent;
        static ThiscallEvent <AddressList<0x458600, H_CALL>, PRIORITY_AFTER, ArgPickNone, void(CMenuManager*)> drawMenuBackgroundEvent;
        static ThiscallEvent <AddressList<0x45A61F, H_CALL>, PRIORITY_AFTER, ArgPickNone, void(CHud*)> drawHudEvent;
        static StdcallEvent <AddressList<0x4CA504, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawHudEvent2;
        static ThiscallEvent <AddressList<0x45A600, H_CALL>, PRIORITY_AFTER, ArgPickNone, void(int*)> renderGameEvent;
        static ThiscallEvent <AddressList<0x45C3E9, H_CALL, 0x45C3F2, H_CALL>, PRIORITY_AFTER, ArgPickNone, void(void*)> gameProcessEvent;
        static StdcallEvent <AddressList<0x4D142E, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> initEngineEvent;
        static StdcallEvent <AddressList<0x4D1778, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> shutdownEngineEvent;
        static StdcallEvent <AddressList<0x4D0D2C, H_CALL, 0x4D0B01, H_CALL, 0x4CC6B7, H_CALL, 0x4CB733, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> d3dResetEvent;
        static StdcallEvent <AddressList<0x4D0B39, H_CALL, 0x4D0BF2, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> d3dLostEvent;
        static StdcallEvent <AddressList<0x45C2DB, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> processScriptEvent;
        static ThiscallEvent <AddressList<0x45C20D, H_CALL>, PRIORITY_AFTER, ArgPickN<CPlayerPed*, 0>, void(CPlayerPed*)> processPlayerPedEvent;
#endif
#ifdef GTAIV
        static CdeclEvent <AddressList<0x5C12AD, H_CALL>, PRIORITY_AFTER, ArgPickNone, void(const char*)> initGameEvent({ "E8 ? ? ? ? 83 C4 04 E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8" });
        static CdeclEvent <AddressList<0x5C2B7A, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> gameProcessEvent({ "E8 ? ? ? ? 80 3D ? ? ? ? ? 74 09 C6 05" });
        static CdeclEvent <AddressList<0x5E15BD, H_CALL>, PRIORITY_AFTER, ArgPickNone, uint32_t(uint32_t*)> drawMenuEvent({ "E8 ? ? ? ? 6A 00 6A 0C E8 ? ? ? ? 83 C4 0C 85 C0 74 30" });
        static CdeclEvent <AddressList<0x5A6FC1, H_CALL>, PRIORITY_AFTER, ArgPickNone, uint32_t()> menuProcessEvent({ "E8 ? ? ? ? 80 3D ? ? ? ? ? 74 28 E8 ? ? ? ? 84 C0" });

        static CdeclEvent <AddressList<0xB01893, H_CALL>, PRIORITY_AFTER, ArgPickNone, uint32_t()> drawingEvent({ "E8 ? ? ? ? E8 ? ? ? ? 83 3D ? ? ? ? ? 74 6B" });
        static CdeclEvent <AddressList<0x8FEA20, H_CALL>, PRIORITY_AFTER, ArgPickNone, int32_t(int32_t)> drawHudEvent({ "E8 ? ? ? ? 83 C4 04 83 F8 FD" });
        static CdeclEvent <AddressList<0xE4DFEC, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawRadarEvent({ "E8 ? ? ? ? E8 ? ? ? ? 6A 00 6A 14" });
        static CdeclEvent <AddressList<0x59D3FD, H_CALL>, PRIORITY_AFTER, ArgPickNone, uint32_t()> initEngineEvent({ "E8 ? ? ? ? 6A 00 E8 ? ? ? ? 83 C4 04 C7 06" });
        static CdeclEvent <AddressList<0x401621, H_CALL>, PRIORITY_BEFORE, ArgPickNone, uint32_t()> shutdownEngineEvent({ "E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? 8B 8C 24" });
        static ThiscallEvent <AddressList<0xC34A85, H_CALL>, PRIORITY_BEFORE, ArgPickN<CAutomobile*, 0>, void(CAutomobile*)> automobileProcessEvent({ "E8 ? ? ? ? 8B 46 28 C1 E8 0A 83 E0 1F 75 2A" });
        static ThiscallEvent <AddressList<0x9E304D, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>, void(CPed*)> pedRenderEvent({ "E8 ? ? ? ? 50 8B CE E8 ? ? ? ? 50 E8" });
        static ThiscallEvent <AddressList<0x9ED835, H_CALL>, PRIORITY_BEFORE, ArgPickN<CPed*, 0>, uint32_t(CPed*)> pedProcessEvent({ "E8 ? ? ? ? 8B 8E ? ? ? ? 56 81 C1 ? ? ? ? E8 ? ? ? ? F7 86" });

        static ThiscallEvent <AddressList<0xA3DAB0, H_CALL, 0xA3DB13, H_CALL>, PRIORITY_BEFORE, ArgPickN<CVehicle*, 0>, void(CVehicle*, int32_t, int32_t, int32_t, int32_t)> vehicleRenderEvent({ "E8 ? ? ? ? 6A 00 6A 0C 8B D8 E8 ? ? ? ? 83 C4 08 85 C0 74 36", "E8 ? ? ? ? 8B D8 85 DB 0F 84 ? ? ? ? 80 BF" });
#endif
#ifdef GTASA_UNREAL
        static CdeclEvent <AddressList<0x1410A2F58, H_JUMP>, PRIORITY_AFTER, ArgPickNone, void()> initRwEvent({ "E9 ? ? ? ? 32 C0 48 83 C4 28 C3 CC CC CC CC CC CC CC CC CC CC CC CC" });
        static CdeclEvent <AddressList<0x1410ACE9F, H_CALL, 0x1411F6BBB, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> shutdownRwEvent({ "E8 ? ? ? ? B8 ? ? ? ? 48 83 C4 40 5B C3 E8", "E8 ? ? ? ? C6 05 ? ? ? ? ? E8 ? ? ? ? 45 33 C0" });
        static CdeclEvent <AddressList<0x1410ACA9F, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawingEvent({ "E8 ? ? ? ? 4C 89 25 ? ? ? ? E8" });
        static CdeclEvent <AddressList<0x1410ABF1D, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> drawHudEvent({ "E8 ? ? ? ? E8 ? ? ? ? 80 3D ? ? ? ? ? 48 8D 2D" });

        static CdeclEvent <AddressList<0x1410AC35E, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> gameProcessEvent({ "E8 ? ? ? ? E8 ? ? ? ? 4C 39 25" });
        static CdeclEvent <AddressList<0x1410A2914, H_CALL>, PRIORITY_AFTER, ArgPickNone, void()> processScriptsEvent({ "E8 ? ? ? ? 80 3D ? ? ? ? ? 4C 8B A4 24" });

#endif
#endif
    }
}
