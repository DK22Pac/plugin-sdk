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