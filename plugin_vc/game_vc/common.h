/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "CVector.h"
#include "CPed.h"
#include "CVehicle.h"

class CTrain;

float FindPlayerHeading();
CVector& FindPlayerCentreOfWorld_NoSniperShift();
CVector& FindPlayerCentreOfWorld(int playerId);
CPed* FindPlayerPed();
CTrain* FindPlayerTrain();
CEntity* FindPlayerEntity();
CVehicle* FindPlayerVehicle();
CVector& FindPlayerSpeed();
CVector& FindPlayerCoors();