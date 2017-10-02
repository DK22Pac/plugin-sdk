#pragma once
#include "plugin.h"
#include "CAutomobile.h"
#include "CPlayerPed.h"
#include "CTimer.h"
#include "common.h"

using namespace plugin;

void _fastcall NitrousControl(CAutomobile *automobile, int, char numBoostsToSet) {
    if (numBoostsToSet > 0) {
        // Add nitro to vehicle (numBoostsToSet)
        automobile->m_nHandlingFlags.bNosInst = true;
        automobile->m_fNitroValue = 1.0f;
        automobile->m_nNitroBoosts = numBoostsToSet;
        automobile->StopNitroEffect();
    }
    else if (numBoostsToSet < 0) {
        // Remove nitro from vehicle (-1)
        automobile->m_nHandlingFlags.bNosInst = false;
        automobile->m_fNitroValue = 1.0f;
        automobile->m_nNitroBoosts = 0;
        automobile->StopNitroEffect();
    }
    else {
        // Check for nitro key pressing
        if (automobile->m_nNitroBoosts > 0) {
            bool nitroEnabled = false;
            if (automobile->m_pDriver) {
                if (automobile->m_pDriver != FindPlayerPed()) // if NPC car
                    nitroEnabled = true;
                else if (automobile->m_pDriver->IsPlayer()) {
                    CPad *pad = reinterpret_cast<CPlayerPed *>(automobile->m_pDriver)->GetPadFromPlayer();
                    if (pad && pad->GetCarGunFired() && !pad->GetLookLeft() && !pad->GetLookRight()
                        && !pad->GetLookBehindForCar())
                    {
                        nitroEnabled = true;
                    }
                }
                if (nitroEnabled) {
                    if (automobile->m_fNitroValue == 0.0f)
                        automobile->StopNitroEffect();
                    else {
                        if (automobile->m_fNitroValue > 0.0) {
                            automobile->m_fNitroValue -= 1.0;
                            if (automobile->m_fNitroValue == 0.0)
                                automobile->m_fNitroValue = -0.000001f;
                        }
                        if (automobile->m_nNitroBoosts != 101) {
                            unsigned char boosts = automobile->m_nNitroBoosts;
                            if (boosts > 10)
                                boosts = 10;
                            automobile->m_fNitroValue -= CTimer::ms_fTimeStep * 0.001f * (11 - boosts) * 0.5f;
                            if (automobile->m_fNitroValue < -1.0f)
                                automobile->m_fNitroValue = 0.0; // start nitro reloading
                        }
                        else
                            automobile->m_fNitroValue = -0.000001f;
                        if (automobile->m_fGasPedal > 0.0f)
                            automobile->DoNitroEffect(fabsf(automobile->m_fGasPedal) * 0.5f + 0.5f);
                        else
                            automobile->DoNitroEffect(0.5f);
                    }
                }
                else {
                    // Reload nitro
                    if (automobile->m_fNitroValue < 0.0) {
                        automobile->m_fNitroValue += 1.0;
                        if (automobile->m_fNitroValue == 0.0)
                            automobile->m_fNitroValue = 0.000001f;
                    }
                    if (automobile->m_nNitroBoosts != 101) {
                        float fGasPedal = 1.0f - fabsf(automobile->m_fGasPedal);
                        if (fGasPedal < 0.5f)
                            fGasPedal = 0.5f;
                        unsigned char boosts = automobile->m_nNitroBoosts;
                        if (boosts > 10)
                            boosts = 10;
                        automobile->m_fNitroValue += fGasPedal * CTimer::ms_fTimeStep * 0.001f * boosts * 0.5f;
                        if (automobile->m_fNitroValue > 1.0f)
                            automobile->m_fNitroValue = 1.0f; // full nitro
                    }
                    else
                        automobile->m_fNitroValue = 1.0f;
                    automobile->DoNitroEffect((1.0f - automobile->m_fNitroValue) * 0.5f);
                }
            }
        }
        else {
            automobile->m_nHandlingFlags.bNosInst = false;
            automobile->m_fNitroValue = 1.0f;
            automobile->m_nNitroBoosts = 0;
            automobile->StopNitroEffect();
        }
    }
}

void DoKeyboardCheck() {
    if (KeyPressed('N')) {
        int num = -2;
        if (KeyPressed('1'))
            num = 1;
        else if (KeyPressed('2'))
            num = 2;
        else if (KeyPressed('3'))
            num = 3;
        else if (KeyPressed('4'))
            num = 4;
        else if (KeyPressed('5'))
            num = 5;
        else if (KeyPressed('6'))
            num = 6;
        else if (KeyPressed('7'))
            num = 7;
        else if (KeyPressed('8'))
            num = 8;
        else if (KeyPressed('9'))
            num = 9;
        else if (KeyPressed('0'))
            num = 10;
        else if (KeyPressed(VK_OEM_MINUS))
            num = -1;
        else if (KeyPressed(VK_OEM_PLUS))
            num = 101;
        if (num != -2) {
            CVehicle *veh = FindPlayerVehicle(-1, false);
            if (veh && veh->m_nVehicleSubClass == VEHICLE_AUTOMOBILE) {
                CAutomobile *automobile = reinterpret_cast<CAutomobile *>(veh);
                automobile->NitrousControl(num);
            }
        }
    }
}