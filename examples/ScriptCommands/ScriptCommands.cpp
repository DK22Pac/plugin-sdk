#include "plugin.h"
#include "CMessages.h"
#include "CModelInfo.h"
#include "extensions/ScriptCommands.h"

using namespace plugin;

class ScriptCommands {
public:
    ScriptCommands() {
        Events::processScriptsEvent += [] {
            CPed *playa; CVehicle *vehicle; CVector posn; float angle;

            if (Command<Commands::IS_PLAYER_PLAYING>(0))
            {
                Command<0x01F5>(0, &playa); // use Id instead of command name (GET_PLAYER_CHAR)
                if (Command<Commands::IS_CHAR_IN_ANY_CAR>(playa))
                {
                    Command<Commands::STORE_CAR_CHAR_IS_IN_NO_SAVE>(playa, &vehicle); // use pointers instead of 'handles'
                    Command<Commands::GET_CAR_COORDINATES>(vehicle, &posn.x, &posn.y, &posn.z);
                    Command<Commands::GET_CAR_HEADING>(vehicle, &angle);

                    static char message[256];
                    snprintf(message, 256, "Position: %.2f %.2f %.2f Angle: %.2f Model: %d (%s)",
                        posn.x, posn.y, posn.z, angle, vehicle->m_nModelIndex,
                        reinterpret_cast<CVehicleModelInfo *>(
                            CModelInfo::GetModelInfo(vehicle->m_nModelIndex))->m_szGameName);

                    #ifdef GTASA
                    CMessages::AddMessageJumpQ(message, 150, 0, false);
                    #else
                    CMessages::AddMessageJumpQ(message, 150, 0);
                    #endif
                }
                else
                    Command<Commands::PRINT_NOW>("IN_VEH", 150, 0); // Hey! Get back in the vehicle!
            }
        };
    }
} scriptCommands;
