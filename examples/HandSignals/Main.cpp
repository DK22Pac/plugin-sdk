/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "plugin.h"
#include "common.h"
#include "CTimer.h"
#include "CStreaming.h"
#include "CTaskComplexPlayHandSignalAnim.h"

#define NEW_MODEL_AT_KEY_PRESS

using namespace plugin;

class HandSignals {
public:
    HandSignals() {
        static int keyPressTime = 0;
        static int newPlayerModelId = -1;
        static int gangModelIds[] = { MODEL_BALLAS1,
                                      MODEL_BALLAS2,
                                      MODEL_BALLAS3,
                                      MODEL_FAM1,
                                      MODEL_FAM2,
                                      MODEL_FAM3,
                                      MODEL_LSV1,
                                      MODEL_LSV2,
                                      MODEL_LSV3,
                                      MODEL_VLA1,
                                      MODEL_VLA2,
                                      MODEL_VLA3 };

        Events::gameProcessEvent += [] {
            CPed *playa = FindPlayerPed();
            if (playa && playa->IsAlive() && CTimer::m_snTimeInMilliseconds - keyPressTime > 500) {
                int animationId = -1;
                if (KeyPressed(0x31)) // 1
                    animationId = 320;
                else if (KeyPressed(0x32)) // 2
                    animationId = 321;
                else if (KeyPressed(0x33)) // 3
                    animationId = 322;
                else if (KeyPressed(0x34)) // 4
                    animationId = 323;
                else if (KeyPressed(0x35)) // 5
                    animationId = 324;

                if (animationId != -1) {
                    keyPressTime = CTimer::m_snTimeInMilliseconds;
#ifndef NEW_MODEL_AT_KEY_PRESS
                    if (newPlayerModelId == -1)
#endif
                        newPlayerModelId = gangModelIds[rand() % 12];
                    if (playa->m_nModelIndex != newPlayerModelId) {
                        CStreaming::RequestModel(newPlayerModelId, 2);
                        CStreaming::LoadAllRequestedModels(false);
                        unsigned int savedAnimGroup = playa->m_nAnimGroup;
                        playa->DeleteRwObject();
                        playa->m_nModelIndex = -1;
                        playa->SetModelIndex(newPlayerModelId);
                        playa->m_nAnimGroup = savedAnimGroup;
                        CStreaming::SetModelIsDeletable(newPlayerModelId);
                    }
                    playa->m_pIntelligence->m_TaskMgr.SetTaskSecondary(new CTaskComplexPlayHandSignalAnim(animationId, 4.0f), 4);
                }
            }
        };
    }
} handSignals;
