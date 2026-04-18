/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

enum eBridgeState : unsigned int {
    BRIDGE_NONE = 0,
    BRIDGE_IDLE_UP = 1,
    BRIDGE_MOVING_DOWN = 2,
    BRIDGE_IDLE_DOWN = 3,
    BRIDGE_IDLE_DOWN_WARNING = 4,
    BRIDGE_MOVING_UP = 5
};
