/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

enum eGarageState : unsigned char {
    GARAGE_STATE_CLOSED = 0,
    GARAGE_STATE_OPEN = 1,
    GARAGE_STATE_CLOSING = 2,
    GARAGE_STATE_OPENING = 3,
    GARAGE_STATE_WAITING_PLAYER_TO_EXIT = 4,
    GARAGE_STATE_CLOSED_DROPPED_CAR = 5,
    GARAGE_STATE_CAR_CRUSHER = 6
};
