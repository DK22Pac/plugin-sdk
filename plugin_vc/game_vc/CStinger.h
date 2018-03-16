/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "CObject.h"

class PLUGIN_API CStinger {
public:
    CStinger();
    void Deploy(CPed* pPed);
    void CheckForBurstTyres();
    void Init(CPed* pPed);
    void Process();
    void Remove();
    ~CStinger();


    bool bIsDeployed;  //specifies if the spike trap has been released
private:
    char _pad01[3];
public:
    unsigned int m_nTimeOfDeploy;
    CVector m_vPos;  //position
    float m_fMax_Z;
    float m_fMin_Z;
    CVector2D m_vPositions[60];
    CObject* pSpikes[12]; //pointers to spike objects
    CPed* pOwner; //owner of the spike
    unsigned char m_nSpikeState; //state of the spike
private:
    char _pad02[3];
};

VALIDATE_SIZE(CStinger, 0x234);