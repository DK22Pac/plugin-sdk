/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "game_sa\CVehicle.h"


class PLUGIN_API CCarCtrl
{
public:
	static void GetCarToParkAtCoords(CVehicle* veh, CVector* coord);
	static void GetCarToGoToCoordsRacing(CVehicle* veh, CVector* coord, int drivingStyle, bool bSpeedLimit20);
	static void GetCarToGoToCoords(CVehicle* veh, CVector* coord, int drivingStyle, bool bSpeedLimit20);
	static void TellCarToRamOtherCar(CVehicle* veh, CVehicle* targetveh);
	static void TellCarToBlockOtherCar(CVehicle* veh, CVehicle* targetveh);
	static void TellOccupantsToLeaveCar(CVehicle* veh);
	static bool CreatePoliceChase(CVehicle* veh, int a1, CNodeAddress unk);
	static void JoinCarWithRoadSystem(CVehicle* veh);
	static void MakeWayForCarWithSiren(CVehicle* veh);
	static void PossiblyFireHSMissile(CVehicle* veh, CEntity* targetEntity);
	static void SteerAIBoatWithPhysicsCirclingPlayer(CVehicle* veh, float* a1, float* a2, float* a3, bool* a4);
	static CVehicle* CreateOneEmergencyServicesVehicle(int model, CVector driveToCoord);
    static CVehicle *CreateCarForScript(int modelId, CVector posn, unsigned char bMissionVehicle);
};