#include "plugin.h"
#include "CTimer.h"
#include "CHud.h"
#include "CPlayerPed.h"
#include "CTheScripts.h"
#include "extensions/ScriptCommands.h"

using namespace plugin;

class SaveAnywhere
{
public:
    SaveAnywhere()
    {
        // Variable for when the last time key has been pressed.
        static int keyPressTime = 0;
        // F5 Keycode -> 0x74
        static int F5_KEY = 0x74;
        // Initialise your plugin here
        Events::processScriptsEvent += []
        {
            // Check if the player pressed F5 and 500ms has passed since the player pressed F5.
            if (KeyPressed(F5_KEY) && CTimer::m_snTimeInMilliseconds - keyPressTime > 500)
            {
                keyPressTime = CTimer::m_snTimeInMilliseconds;
                // Find player ped pointer.
                CPlayerPed *player = FindPlayerPed();
                if (player != NULL)
                {
                    // Get some player info to check before calling "ACTIVATE_SAVE_MENU" command.
                    bool isDrowning = player->m_nPedFlags.bIsDrowning;
                    bool isInVehicle = player->m_bInVehicle;
                    bool isPlayerOnAMission = CTheScripts::IsPlayerOnAMission();
                    auto playerState = player->m_ePedState;
                    int wantedLevel = player->m_pWanted->m_nWantedLevel;
                    /*
                     * Check these states:
                     * Player is not on a mission
                     * Player is not in a vehicle.
                     * Player is not drowning.
                     * Player is not wanted by cops.
                     * Player is not falling.
                     * Player is not jumping.
                     * Player States and Flags Information = https://github.com/DK22Pac/plugin-sdk/blob/master/plugin_vc/game_vc/CPed.h
                     */
                    if (!isPlayerOnAMission)
                    {
                        if (!isInVehicle)
                        {
                            if (wantedLevel < 1)
                            {
                                if (playerState != ePedState::PEDSTATE_FALL && playerState != ePedState::PEDSTATE_JUMP && !isDrowning)
                                {
                                    CHud::SetHelpMessage("Quick Save", true, false);
                                    Command<Commands::ACTIVATE_SAVE_MENU>();
                                }
                            }
                            else
                            {
                                CHud::SetHelpMessage("You can't save when you have a wanted level.", true, false);
                            }
                        }
                        else
                        {
                            CHud::SetHelpMessage("You can't save when you are in a vehicle.", true, false);
                        }
                    }
                    else
                    {
                        CHud::SetHelpMessage("You can't save when you are on a mission.", true, false);
                    }
                    /* Shorter way without help messages.
                    if (!isPlayerOnAMission && !isInVehicle && !isDrowning && wantedLevel < 1 && playerState != ePedState::PEDSTATE_FALL && playerState != ePedState::PEDSTATE_JUMP) {
                        CHud::SetHelpMessage("Quick Save", true, false);
                        Command<Commands::ACTIVATE_SAVE_MENU>();
                    }
                    */
                }
            }
        };
    }
} saveAnywhere;
