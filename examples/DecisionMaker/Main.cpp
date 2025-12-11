#include <plugin.h> // Plugin-SDK version 1002 from 2025-12-09 23:18:09
#include <CDecisionMakerTypes.h>
#include <CCivilianPed.h>
#include <CStreaming.h>
#include <CWorld.h>

using namespace plugin;

struct Main
{
    eDecisionMakerType decisionMakerHandle = eDecisionMakerType::UNKNOWN;
    CPed* ped = nullptr;

    Main()
    {
        // register event callbacks
        Events::restartGameEvent += []{ gInstance.OnGameRestart(); };
        Events::gameProcessEvent += []{ gInstance.OnGameProcess(); };
    }

    void OnGameRestart()
    {
        decisionMakerHandle = eDecisionMakerType::UNKNOWN; // game deletes the DM itself, just clear our reference
        ped = nullptr; // game deletes the ped itself, just clear our reference
    }

    void OnGameProcess()
    {
        // create our decision maker if not exists yet
        if (decisionMakerHandle == eDecisionMakerType::UNKNOWN)
        {
            // create decision maker
            auto dmManager = CDecisionMakerTypes::GetInstance();
            if (!dmManager) return; // try again later

            CDecisionMaker templateDm; // empty
            decisionMakerHandle = dmManager->AddDecisionMaker(&templateDm); // take note the game only has 10 slots for custom DMs

            if (decisionMakerHandle == eDecisionMakerType::UNKNOWN) return; // failed to create DM, try again later

            dmManager->AddEventResponse(decisionMakerHandle, eEventType::EVENT_GUN_AIMED_AT,
                eTaskType::TASK_SIMPLE_HANDS_UP,
                DecisionChances(4, 4, 4, 4), // 4/5 chance
                DecisionContext(true, false)
            );

            dmManager->AddEventResponse(decisionMakerHandle, eEventType::EVENT_GUN_AIMED_AT,
                eTaskType::TASK_SIMPLE_DUCK,
                DecisionChances(1, 1, 1, 1), // 1/5 chance
                DecisionContext(true, false)
            );
        }

        // create ped
        if (ped == nullptr)
        {
            constexpr auto MODEL = 70; // scientist
            CStreaming::RequestModel(MODEL, eStreamingFlags::PRIORITY_REQUEST);
            CStreaming::LoadAllRequestedModels(true);
            ped = new CCivilianPed(PED_TYPE_CIVMALE, MODEL);

            if (!ped) return; // failed to create ped, try again later

            ped->SetPosn(FindPlayerPed()->TransformFromObjectSpace(CVector(0.0f, 3.0f, 0.0f))); // in front of the player
            ped->SetOrientation(0.0f, 0.0f, 0.0f);
            CWorld::Add(ped);
            ped->PositionAnyPedOutOfCollision();

            ped->m_fMaxHealth = ped->m_fHealth = 1000.0f; // stronger for tests

            if (ped->m_pIntelligence)
            {
                ped->m_pIntelligence->SetPedDecisionMakerType(decisionMakerHandle);
            }
        }
    }
} gInstance;
