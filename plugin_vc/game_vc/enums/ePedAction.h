/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

enum ePedAction : unsigned int
{
    None = 0,
    Normal = 1,
    TurnBody1 = 2,
    TurnBody2 = 3,
    WanderPath = 5,
    FleeFromPos = 8,
    FleeFromEnt = 9,
    FollowCheckpoint = 11,
    Aiming = 12,
    Shooting = 16,
    Fighting = 17,
    Chatting = 20,
    PointGun = 22,
    SeekCar = 24,
    SeekBoat = 25,
    Investigate = 30,
    RunOnFire = 32,
    Jumping = 41,
    LyingOnGround = 42,
    GettingUp = 43,
    JumpingFromVehicle = 44,
    Driving = 50,
    Dying = 54,
    Wasted = 55,
    JackingVehicle = 56,
    EnteringVehicle = 58,
    ExitingVehicle = 60
};
