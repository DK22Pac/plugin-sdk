/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPed.h"
#include "CCam.h"

class CCamScriptInstruction {
public:
    uint8_t field_1;

public:
    CCamScriptInstruction() {
        field_1 = 0;
    }
    virtual ~CCamScriptInstruction();
    virtual bool Active() { return true; }
    virtual void Process() {}

public:
    void SetInstruction(CCamScriptInstruction* instruction);
};

class CCamScriptInstruction_SetCamBehindPed : public CCamScriptInstruction {
public:
    CPed* m_pPed;

public:
    CCamScriptInstruction_SetCamBehindPed(CPed* ped) : CCamScriptInstruction() {
        m_pPed = ped;
    }

    void Process() override;
};

class CCamScriptInstruction_SetCamInFrontPed : public CCamScriptInstruction {
public:
    CPed* m_pPed;

public:
    CCamScriptInstruction_SetCamInFrontPed(CPed* ped) : CCamScriptInstruction() {
        m_pPed = ped;
    }

    void Process() override;
};

class CCamScriptInstruction_EnableDebugCam : public CCamScriptInstruction {
public:
    bool m_bEnabled;

public:
    CCamScriptInstruction_EnableDebugCam() : CCamScriptInstruction() {
        m_bEnabled = true;
    }

    void Process() override;
};

class CCamScriptInstruction_CamProcess : public CCamScriptInstruction {
public:
    CCam* m_pCam;

public:
    CCamScriptInstruction_CamProcess(CCam* cam) : CCamScriptInstruction() {
        m_pCam = cam;
    }

    void Process() override;
};

class CCamScriptInstruction_DestroyAllCams : public CCamScriptInstruction {
public:
    CCamScriptInstruction_DestroyAllCams() : CCamScriptInstruction() {

    }

public:
    void Process() override;
};

class CCamScriptInstruction_SetPosTargetEntity : public CCamScriptInstruction {
public:
    int32_t m_nCamIndex;
    CPed* m_pPed;

public:
    CCamScriptInstruction_SetPosTargetEntity(int32_t cam, CPed* ped) : CCamScriptInstruction() {
        m_nCamIndex = cam;
        m_pPed = ped;
    }

public:
    void Process() override;
};

extern CCamScriptInstruction& CamScript;