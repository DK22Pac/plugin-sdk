/*
    Tommy Ped Spawner with comments to explain.
    Wrote By: Zeyad_Ahmed
    Fixed By: Quiret
    For Plugin-SDK
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "plugin_vc.h"            // that will include the plugin
#include <game_vc\CHud.h>         // that will include CHud header file that will make us able to show help message
#include <game_vc\CPed.h>         // that will include CPed header file that will make us able to create Ped Instance
#include <game_vc\CCivilianPed.h> // that will include CCivilianPed header file that will make us able to create Ped instance (unused in this example)
#include <game_vc\CWorld.h>       // that wil include CWorld header file that will make us able to Add the Ped in the World as the new Entinty
#include <game_vc\CPopulation.h>  // that will include CPopulation Header file that will make us able to add the Ped into the poplulation.
#include <game_vc\CPedType.h>
#include <game_vc\ePedType.h>
#include <game_vc\CVector.h>    
#include <game_vc\CPlayerPed.h>
#include <iostream>
#include <string>
using namespace plugin;

class MyPlugin {
public:
	MyPlugin() {
		Events::gameProcessEvent += [] {
			if (KeyPressed(VK_TAB))   // If the TAB Key Pressed, it will do the following
			{
				const CVector place = CVector::CVector(0.0, 0.0, 0.0); // create a new variable contains coordinates of the player in CVector Type (change the location to what you want throught (x, y, z) while they are float values :D
				//CPed *ped = new CCivilianPed(CPopulation::AddPed(ePedType::PEDTYPE_CIVMALE, 0, place, 0)); // :v
				CPed *ped = CPopulation::AddPed(ePedType::PEDTYPE_CIVMALE, (unsigned int)0, place, 0); // That will create a new variable (ped) that will be created though function Add Ped from CPopulation by type of the ped is male and its model is 0 and it place is the variable "place" that declared above that conain the address 
				CWorld::Add(ped); // Add new entinity in the world and its "Ped"
				CHud::SetHelpMessage((unsigned short*)L"Done", false, false, true); //shows a message contain done!
			}
		};
	}
} myPlugin;
