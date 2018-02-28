/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

enum eMoveState {
    STATE_DO_NOTHING = 0,
    STATE_NEW_ACTOR = 1,
    STATE_MOVE_ACTOR = 2,
    STATE_SELECT_ACTOR = 3,
    STATE_DELETE_ACTOR = 4,
    STATE_NEW_VEHICLE = 5,
    STATE_MOVE_VEHICLE = 6,
    STATE_SELECT_VEHICLE = 7,
    STATE_DELETE_VEHICLE = 8,
    STATE_GIVE_WEAPON = 9,
    STATE_GOTO = 10,
    STATE_GOTO_WAIT = 11,
    STATE_GET_IN_CAR = 12,
    STATE_GET_OUT_CAR = 13,
    STATE_KILL = 14,
    STATE_FLEE = 15,
    STATE_WAIT = 16,
    STATE_POSITION_CAMERA = 17,
    STATE_SET_CAMERA_TARGET = 18,
    STATE_SELECT_CAMERA_MODE = 19,
    STATE_SAVE_MOVIE = 20,
    STATE_LOAD_MOVIE = 21,
    STATE_PLAY_MOVIE = 22,
    STATE_END = 23,
    STATE_ACTION = 24,
    STATE_SELECTED = 25
};
