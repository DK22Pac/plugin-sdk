#include <plugin.h>
#include <game_sa\common.h>
#include <game_sa\CTimer.h>
#include <game_sa\CStreaming.h>

using namespace plugin;

class PlayerWeapon {
public:
    PlayerWeapon() {
        static int keyPressTime = 0;
        Events::gameProcessEvent += [] {
            CPed *playa = FindPlayerPed();
            if (playa && KeyPressed(VK_TAB) && CTimer::m_snTimeInMilliseconds - keyPressTime > 500) {
                keyPressTime = CTimer::m_snTimeInMilliseconds;
                CStreaming::RequestModel(MODEL_M4, 2);
                CStreaming::LoadAllRequestedModels(false);
                playa->GiveWeapon(WEAPON_M4, 10, true);
                playa->SetCurrentWeapon(WEAPON_M4);
                CStreaming::SetModelIsDeletable(MODEL_M4);
            }
        };
    }
} playerWeapon;