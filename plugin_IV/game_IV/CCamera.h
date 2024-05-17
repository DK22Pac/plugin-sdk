/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CCam.h"
#include "CCamGame.h"
#include "CCamScriptInstruction.h"
#include "CCamFollowVehicle.h"
#include "CCamFollowPed.h"

class CCamera {
public:
    uint8_t field_4[4];
    CCam* m_pCamFinal;
    uint8_t field_12[4];
    CCamGame* m_pCamGame;
    CCamFollowVehicle* m_pCamFollowVeh;
    CCamFollowPed* m_pCamFollowPed;

public:
    static bool& m_bCameraControlsDisabled;

public:
    CCam* CreateCamMode(eCamMode mode, CCam* arg2, CCam* arg3);

public:
    rage::Vector4& GetRight() {
        return m_pCamFinal->m_pMatrix->right;
    }
    const rage::Vector4& GetRight() const {
        return m_pCamFinal->m_pMatrix->right;
    }

    rage::Vector4& GetForward() {
        return m_pCamFinal->m_pMatrix->up;
    }
    const rage::Vector4& GetForward() const {
        return m_pCamFinal->m_pMatrix->up;
    }

    rage::Vector4& GetUp() {
        return m_pCamFinal->m_pMatrix->at;
    }
    const rage::Vector4& GetUp() const {
        return m_pCamFinal->m_pMatrix->at;
    }

    rage::Vector4& GetPosition() {
        return m_pCamFinal->m_pMatrix->pos;
    }
    const rage::Vector4& GetPosition() const {
        return m_pCamFinal->m_pMatrix->pos;
    }
};

extern CCamera& TheCamera;
