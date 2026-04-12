/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "plugin.h"
#include "common.h"
#include "CCivilianPed.h"
#include "CMessages.h"
#include "CStreaming.h"
#include "CTheScripts.h"
#include "CTimer.h"
#include "CWorld.h"

#ifdef GTA3
#include "RpAnimBlend.h"
#endif

using namespace plugin;

struct Main
{
    char messageBuffer[128] = { 0 }; // it must exist as long, as it is printed on the screen

    bool tipDisplayed = false;
    int modelId = eModelID::MODEL_INVALID;
    bool keyPedSpawnPrevPressed = false;
    bool keyPedSpawnNextPressed = false;

    Main()
    {
        // register event callbacks
        Events::restartGameEvent += [this]{ OnGameRestart(); };
        Events::gameProcessEvent += [this]{ OnGameProcess(); };
    }

    void OnGameRestart()
    {
        tipDisplayed = false;
        modelId = eModelID::MODEL_INVALID;
    }

    void OnGameProcess()
    {
        if (!tipDisplayed)
        {
            CMessages::AddMessageJumpQ("Press ~h~.~s~ or ~h~,~s~ to spawn ped. Hold SHIFT for fast browsing.", 10000, 0);
            tipDisplayed = true;
        }

        bool pressed;

        // handle prev ped spawning hotkey
        pressed = KeyPressed(VK_OEM_COMMA); // < key
        if (pressed && !keyPedSpawnPrevPressed) // just pressed
        {
            int skip = KeyPressed(VK_SHIFT) ? 9 : 0; // fast browse key
            SpawnNextPed(modelId - skip, false);
        }
        keyPedSpawnPrevPressed = pressed;

        pressed = KeyPressed(VK_OEM_PERIOD); // > key
        if (pressed && !keyPedSpawnNextPressed) // just pressed
        {
            int skip = KeyPressed(VK_SHIFT) ? 9 : 0; // fast browse key
            SpawnNextPed(modelId + skip, true);
        }
        keyPedSpawnNextPressed = pressed;
    }

    void SpawnNextPed(int searchStartId, bool searchForward)
    {
        auto player = FindPlayerPed();
        if (!player)
        {
            return; // player not found
        }

        // ground level position in front of the player
        CVector position = player->TransformFromObjectSpace({0.0f, 4.0f, -1.0f});
        float heading = player->GetHeading() + DegToRad(180.0f); // face the player

        // find next model id
        modelId = searchStartId;
        while (true)
        {
            modelId = CModelInfo::FindNextModel(MODEL_INFO_PED, modelId, searchForward);

            if (modelId == MODEL_INVALID)
                return; // error: not found

            if (modelId >= MODEL_SPECIAL_FIRST && modelId <= MODEL_SPECIAL_LAST) // ped special character slots
                continue; // keep searching
            
            break; // found
        }

        // load model
        CStreaming::RequestModel(modelId, 0);
        CStreaming::LoadAllRequestedModels(false);
        if (!CStreaming::HasModelLoaded(modelId))
        {
            sprintf_s(messageBuffer, "~r~~h~Failed to load ped model: %d", modelId);
            CMessages::AddMessageJumpQ(messageBuffer, 10000, 0);
            return; // failed to load model
        }

        CWorld::ClearExcitingStuffFromArea(position, 2.0f, false); // clear non-mission entities in the radius

        auto ped = new CCivilianPed(PED_TYPE_CIVMALE, modelId);
        if (!ped)
        {
            sprintf_s(messageBuffer, "~r~~h~Failed to spawn ped model: %d", modelId);
            CMessages::AddMessageJumpQ(messageBuffer, 10000, 0);
            return; // failed to spawn
        }

        sprintf_s(messageBuffer, "Ped model: %d", modelId);
        CMessages::AddMessageJumpQ(messageBuffer, 3000, 0);

        position.z += 1.0f; // offset from the ground to the ped center
        ped->SetPosition(position.x, position.y, position.z);
        ped->SetHeading(heading);
        ped->m_fHeadingCurrent = ped->m_fHeadingGoal = heading;
        ped->GetMatrix().UpdateRW();

        if (ped->m_pRwClump)
        {
            RpAnimBlendClumpUpdateAnimations(ped->m_pRwClump, CTimer::ms_fTimeStep);
        }

    #if defined(GTASA)
        ped->m_fContactSurfaceBrightness = 0.5f;
    #endif

        CTheScripts::ClearSpaceForMissionEntity(ped->GetPosition(), ped); // clear non-mission entities colliding with the ped
        CWorld::Add(ped);
    }
} gInstance;
