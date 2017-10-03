/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

// VC Godmode Example

#include "plugin_vc.h"
#include "game_vc\common.h"
#include "game_vc/CPed.h"
#include "game_vc/CPlayerPed.h"
#include "game_vc/CHud.h"
using namespace plugin;
static bool godmode = false;
static float health_storage = 0.0;
static float armour_storage = 0.0;
class MyPlugin {
public:
	MyPlugin()
	{
		Events::gameProcessEvent += []()
		{
			CPed * gracz = FindPlayerPed();
			if (godmode)
			{
				gracz->m_fHealth = 9999.0;
				gracz->m_fArmour = 9999.0;
			}
			if (KeyPressed(VK_F9)) //toggle godmode
			{
				if (!godmode)
				{
					CHud::SetHelpMessage((unsigned short *)L"GODMODE ENABLED", false, false, true);
					health_storage = gracz->m_fHealth;
					armour_storage = gracz->m_fArmour;
					godmode = true;
					return;
				}
				else { CHud::SetHelpMessage((unsigned short *)L"GODMODE DISABLED", false, false, true); godmode = false; gracz->m_fHealth = health_storage; gracz->m_fArmour = armour_storage; return; }
			}
		};
	}
} myPlugin;
